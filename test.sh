BUILD="g++ -fsanitize=address -ggdb -std=c++14 -Wall -Wextra -o ./app ./main.cpp"

echo "Building..."
$BUILD

if [ ! $? = 0 ]; then
    echo "Build failed."
    exit
fi

echo "Removing old output..."
mkdir -p output
rm output/*

for file in $(ls input); do
    echo -n "Testing $file..."
    timeout 5 ./app <input/$file >output/$file 2>&1
    if [[ -f answer/$file ]]; then
        if diff -q output/$file answer/$file >/dev/null; then
            echo "passed."
        else
            echo "failed."
        fi
    else
        echo "done. (answer file not found)"
    fi
done

for file in $(ls output); do
    echo "$file --------------------"
    cat output/$file
done

rm -f app app.o
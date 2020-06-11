package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	a := make([]int, 0)
	for scanner.Scan() {
		i, _ := strconv.Atoi(scanner.Text())
		a = append(a, i)
	}
	fmt.Println("---")
	sort.Ints(a)
	for _, v := range a {
		fmt.Println(v)
	}
}

# How to use this template

## Getting the template

Download this by running

```sh
git clone https://github.com/elopez/competition-boilerplate.git competition
```

or, if Git is unavailable,

```sh
wget -q -O- https://github.com/elopez/competition-boilerplate/archive/master.tar.gz | tar xz
```

## Preparing your environment

When the contest starts and you know how many problems there are,
run the following to create a file for each problem:

```sh
make UPTO=k
```

## Compiling

When you finish programming a problem, run the following to compile
its code

```sh
make a
```

## Cleaning up

To clean the current directory a bit, you can run:

```sh
make clean
```

This will delete object files and binaries

$lazyLinking = 1;

$buildDir = "build/";
$outputDir = "bin/"; 

my $wxConfig = "wx-config ";
$argumentHash{"wxconfig=s"} = \$wxConfig; 
parseArguments();

$cflags = " -c -Wall -g ";

#remove wxwarnings (wx2.8)
$cflags .= '-Wno-unused-local-typedefs';

$compiler = "g++ ";
$linker = $compiler;
$cflags .= " `$wxConfig --cflags std` ";
$ldflags .= " `$wxConfig --libs std` "; 

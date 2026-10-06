/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10009ae60; end: 10009aedf;  */

void FUN_10009ae60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f578,&UNK_10d940350);
  puVar1 = &UNK_1103ba258;
  func_0x000107c613fc(&UNK_1103ba258,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101449868,puVar1);
  return;
}



/* Entry: 10009aee0; end: 10009af2b;  */

void FUN_10009aee0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009af2c; end: 10009af4f;  */

void FUN_10009af2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103bdd08;
  FUN_1000285a8(0x112da0610,&UNK_10d943518);
  func_0x000107c613fc(&UNK_1103bdd08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(0x1000c2110,puVar1);
  return;
}



/* Entry: 10009af50; end: 10009af9b;  */

void FUN_10009af50(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f490,&UNK_10d93ff30);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100256b84,param_1);
  return;
}



/* Entry: 10009af9c; end: 10009b063;  */

void FUN_10009af9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9fd10,&UNK_10d942080);
  puVar1 = &UNK_1103bc670;
  func_0x000107c613fc(&UNK_1103bc670,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_100966cf8,puVar1);
  return;
}



/* Entry: 10009b064; end: 10009b0e3;  */

void FUN_10009b064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da03c8,&UNK_10d942ea0);
  puVar1 = &UNK_1103bd6b0;
  func_0x000107c613fc(&UNK_1103bd6b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10035e074,puVar1);
  return;
}



/* Entry: 10009b0e4; end: 10009b1e7;  */

void FUN_10009b0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da1680,&UNK_10d944b60);
  puVar1 = &UNK_1103c3420;
  func_0x000107c613fc(&UNK_1103c3420,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_9;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  *(undefined8 *)(puVar1 + 0x50) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014778d4,puVar1);
  return;
}



/* Entry: 10009b1e8; end: 10009b24b;  */

void FUN_10009b1e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009b24c; end: 10009b2e3;  */

void FUN_10009b24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da1690,&UNK_10d944bc0);
  puVar1 = &UNK_1103c34b0;
  func_0x000107c613fc(&UNK_1103c34b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101477a98,puVar1);
  return;
}



/* Entry: 10009b2e4; end: 10009b317;  */

void FUN_10009b2e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009b318; end: 10009b453;  */

void FUN_10009b318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da0268,&UNK_10d9429e0);
  puVar1 = &UNK_1103bd068;
  func_0x000107c613fc(&UNK_1103bd068,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(0x1000bb464,puVar1);
  return;
}



/* Entry: 10009b454; end: 10009b48f;  */

void FUN_10009b454(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009b490; end: 10009b50f;  */

void FUN_10009b490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da1698,&UNK_10d944c00);
  puVar1 = &UNK_1103c34f8;
  func_0x000107c613fc(&UNK_1103c34f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101477b28,puVar1);
  return;
}



/* Entry: 10009b510; end: 10009b53b;  */

void FUN_10009b510(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009b53c; end: 10009b587;  */

void FUN_10009b53c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9fd38,&UNK_10d9421d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1000d9790,param_1);
  return;
}



/* Entry: 10009b588; end: 10009b5a7;  */

void FUN_10009b588(void)

{
  func_0x000107c61168(&PTR_PTR_1129cb5e8);
  return;
}



/* Entry: 10009b5a8; end: 10009b63f;  */

void FUN_10009b5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x11305f230,&UNK_10dcd4350);
  puVar1 = &UNK_110742f90;
  func_0x000107c613fc(&UNK_110742f90,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1000c900c,puVar1);
  return;
}



/* Entry: 10009b640; end: 10009b65f;  */

void FUN_10009b640(void)

{
  func_0x000107c61168(&PTR_PTR_11298cc78);
  return;
}



/* Entry: 10009b660; end: 10009b67b;  */

void FUN_10009b660(undefined8 param_1)

{
  FUN_1000285a8(0x112d9fd18,&UNK_10d942088);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100966cc4,param_1);
  return;
}



/* Entry: 10009b67c; end: 10009b6cb;  */

void FUN_10009b67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009b6cc; end: 10009b763;  */

void FUN_10009b6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da7030,&UNK_10d94d240);
  puVar1 = &UNK_1103cb850;
  func_0x000107c613fc(&UNK_1103cb850,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1014b8ca0,puVar1);
  return;
}



/* Entry: 10009b764; end: 10009b7b7;  */

void FUN_10009b764(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009b7b8; end: 10009b84f;  */

void FUN_10009b7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da7110,&UNK_10d94d3a0);
  puVar1 = &UNK_1103cb8f8;
  func_0x000107c613fc(&UNK_1103cb8f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1014b8ed4,puVar1);
  return;
}



/* Entry: 10009b850; end: 10009b8a3;  */

void FUN_10009b850(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009b8a4; end: 10009b8bf;  */

void FUN_10009b8a4(undefined8 param_1)

{
  FUN_1000285a8(0x112da7118,&UNK_10d94d3a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014b90a0,param_1);
  return;
}



/* Entry: 10009b8c0; end: 10009b90f;  */

void FUN_10009b8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009b910; end: 10009b92f;  */

void FUN_10009b910(void)

{
  func_0x000107c61168(&PTR_PTR_11298a948);
  return;
}



/* Entry: 10009b930; end: 10009b97b;  */

void FUN_10009b930(undefined8 param_1)

{
  FUN_1000285a8(0x112da1b20,&UNK_10d945270);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10147d140,param_1);
  return;
}



/* Entry: 10009b97c; end: 10009bb43;  */

void FUN_10009b97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f678,&UNK_10d9408a0);
  puVar1 = &UNK_1103baa58;
  func_0x000107c613fc(&UNK_1103baa58,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1000b2c18,puVar1);
  return;
}



/* Entry: 10009bb44; end: 10009bb97;  */

void FUN_10009bb44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009bb98; end: 10009bbb3;  */

void FUN_10009bb98(undefined8 param_1)

{
  FUN_1000285a8(0x112da87f8,&UNK_10d94f918);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014bd7e0,param_1);
  return;
}



/* Entry: 10009bbb4; end: 10009bc83;  */

void FUN_10009bbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009bc84; end: 10009be63;  */

void FUN_10009bc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da03b8,&UNK_10d942e20);
  puVar1 = &UNK_1103bd648;
  func_0x000107c613fc(&UNK_1103bd648,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1000bc420,puVar1);
  return;
}



/* Entry: 10009be64; end: 10009bebf;  */

void FUN_10009be64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009bec0; end: 10009bedb;  */

void FUN_10009bec0(undefined8 param_1)

{
  FUN_1000285a8(0x112da3778,&UNK_10d948278);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014a5a4c,param_1);
  return;
}



/* Entry: 10009bedc; end: 10009bf2b;  */

void FUN_10009bedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009bf2c; end: 10009bfe7;  */

void FUN_10009bf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da6720,&UNK_10d94c3e0);
  puVar1 = &UNK_1103cac90;
  func_0x000107c613fc(&UNK_1103cac90,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1003f3230,puVar1);
  return;
}



/* Entry: 10009bfe8; end: 10009c007;  */

void FUN_10009bfe8(void)

{
  func_0x000107c61168(&PTR_PTR_112da67a8);
  return;
}



/* Entry: 10009c008; end: 10009c023;  */

void FUN_10009c008(undefined8 param_1)

{
  FUN_1000285a8(0x112da6728,&UNK_10d94c3e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014b4c40,param_1);
  return;
}



/* Entry: 10009c024; end: 10009c073;  */

void FUN_10009c024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009c074; end: 10009c093;  */

void FUN_10009c074(void)

{
  func_0x000107c61168(&PTR_PTR_112989758);
  return;
}



/* Entry: 10009c094; end: 10009c0cb;  */

void FUN_10009c094(undefined8 param_1)

{
  FUN_1000285a8(0x112da6738,&UNK_10d94c3f8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003f4624,param_1);
  return;
}



/* Entry: 10009c0cc; end: 10009c1ab;  */

void FUN_10009c0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da3868,&UNK_10d948420);
  puVar1 = &UNK_1103c7b48;
  func_0x000107c613fc(&UNK_1103c7b48,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_1014a5f88,puVar1);
  return;
}



/* Entry: 10009c1ac; end: 10009c21f;  */

void FUN_10009c1ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009c220; end: 10009c23b;  */

void FUN_10009c220(undefined8 param_1)

{
  FUN_1000285a8(0x112da3870,&UNK_10d948428);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014a644c,param_1);
  return;
}



/* Entry: 10009c23c; end: 10009c30b;  */

void FUN_10009c23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009c30c; end: 10009c337;  */

void FUN_10009c30c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009c338; end: 10009c417;  */

void FUN_10009c338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da89c8,&UNK_10d94fc80);
  puVar1 = &UNK_1103cce88;
  func_0x000107c613fc(&UNK_1103cce88,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_1000d921c,puVar1);
  return;
}



/* Entry: 10009c418; end: 10009c437;  */

void FUN_10009c418(void)

{
  func_0x000107c61168(&PTR_PTR_112da8a40);
  return;
}



/* Entry: 10009c438; end: 10009c453;  */

void FUN_10009c438(undefined8 param_1)

{
  FUN_1000285a8(0x112da89d0,&UNK_10d94fc88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1000d91c0,param_1);
  return;
}



/* Entry: 10009c454; end: 10009c4a3;  */

void FUN_10009c454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009c4a4; end: 10009c55f;  */

void FUN_10009c4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da7200,&UNK_10d94d500);
  puVar1 = &UNK_1103cb9c0;
  func_0x000107c613fc(&UNK_1103cb9c0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_1014b9484,puVar1);
  return;
}



/* Entry: 10009c560; end: 10009c5c3;  */

void FUN_10009c560(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009c5c4; end: 10009c5df;  */

void FUN_10009c5c4(undefined8 param_1)

{
  FUN_1000285a8(0x112da7208,&UNK_10d94d508);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1014b981c,param_1);
  return;
}



/* Entry: 10009c5e0; end: 10009c62f;  */

void FUN_10009c5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009c630; end: 10009c67b;  */

void FUN_10009c630(undefined8 param_1)

{
  FUN_1000285a8(0x11305eeb0,&UNK_10dcd3910);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f0abc,param_1);
  return;
}



/* Entry: 10009c67c; end: 10009c697;  */

void FUN_10009c67c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9fd20,&UNK_10d942090);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100180724,param_1);
  return;
}



/* Entry: 10009c698; end: 10009c6b7;  */

void FUN_10009c698(void)

{
  func_0x000107c61168(&PTR_PTR_1129cb528);
  return;
}



/* Entry: 10009c6b8; end: 10009c7bb;  */

void FUN_10009c6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da16a0,&UNK_10d944c40);
  puVar1 = &UNK_1103c3540;
  func_0x000107c613fc(&UNK_1103c3540,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(FUN_1003b51e0,puVar1);
  return;
}



/* Entry: 10009c7bc; end: 10009c853;  */

void FUN_10009c7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x11305bef0,&UNK_10dcd1488);
  puVar1 = &UNK_110740d00;
  func_0x000107c613fc(&UNK_110740d00,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100a104b8,puVar1);
  return;
}



/* Entry: 10009c854; end: 10009c873;  */

void FUN_10009c854(void)

{
  func_0x000107c61168(&PTR_PTR_11298a6d8);
  return;
}



/* Entry: 10009c874; end: 10009ca37;  */

void FUN_10009c874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9e850,&UNK_10d93ef68);
  puVar1 = &UNK_1103b9100;
  func_0x000107c613fc(&UNK_1103b9100,0xb0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  FUN_1000823a8(FUN_100a12ebc,puVar1);
  return;
}



/* Entry: 10009ca38; end: 10009ca57;  */

void FUN_10009ca38(void)

{
  func_0x000107c61168(&PTR_PTR_1127d6678);
  return;
}



/* Entry: 10009ca58; end: 10009cb13;  */

void FUN_10009ca58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da20d8,&UNK_10d946350);
  puVar1 = &UNK_1103c5170;
  func_0x000107c613fc(&UNK_1103c5170,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1009d1a38,puVar1);
  return;
}



/* Entry: 10009cb14; end: 10009cb5f;  */

void FUN_10009cb14(undefined8 param_1)

{
  FUN_1000285a8(0x112da20e0,&UNK_10d946358);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a0bec4,param_1);
  return;
}



/* Entry: 10009cb60; end: 10009cb7f;  */

void FUN_10009cb60(void)

{
  func_0x000107c61168(&PTR_PTR_11298c5b0);
  return;
}



/* Entry: 10009cb80; end: 10009cc23;  */

void FUN_10009cb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da03e0,&UNK_10d943050);
  puVar1 = &UNK_1103bd870;
  func_0x000107c613fc(&UNK_1103bd870,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1000ba59c,puVar1);
  return;
}



/* Entry: 10009cc24; end: 10009cd0f;  */

void FUN_10009cc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da05f8,&UNK_10d9434a0);
  puVar1 = &UNK_1103bdc78;
  func_0x000107c613fc(&UNK_1103bdc78,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_1000d2a40,puVar1);
  return;
}



/* Entry: 10009cd10; end: 10009cd2f;  */

void FUN_10009cd10(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8b90);
  return;
}



/* Entry: 10009cd30; end: 10009cdf7;  */

void FUN_10009cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113055288,&UNK_10dcccec8);
  puVar1 = &UNK_11073e230;
  func_0x000107c613fc(&UNK_11073e230,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(0x1009d2e08,puVar1);
  return;
}



/* Entry: 10009cdf8; end: 10009ce17;  */

void FUN_10009cdf8(void)

{
  func_0x000107c61168(&PTR_PTR_112984a10);
  return;
}



/* Entry: 10009ce18; end: 10009cf03;  */

void FUN_10009ce18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113058258,&UNK_10dcce728);
  puVar1 = &UNK_11073ee28;
  func_0x000107c613fc(&UNK_11073ee28,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(FUN_1009d4ae4,puVar1);
  return;
}



/* Entry: 10009cf04; end: 10009cf23;  */

void FUN_10009cf04(void)

{
  func_0x000107c61168(&PTR_PTR_112986730);
  return;
}



/* Entry: 10009cf24; end: 10009d05f;  */

void FUN_10009cf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f678,&UNK_10d9408a0);
  puVar1 = &UNK_1103baaa0;
  func_0x000107c613fc(&UNK_1103baaa0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1000b2b48,puVar1);
  return;
}



/* Entry: 10009d060; end: 10009d0ab;  */

void FUN_10009d060(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f680,&UNK_10d940918);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10144aabc,param_1);
  return;
}



/* Entry: 10009d0ac; end: 10009d0cb;  */

void FUN_10009d0ac(void)

{
  func_0x000107c61168(&PTR_PTR_112982a10);
  return;
}



/* Entry: 10009d0cc; end: 10009d163;  */

void FUN_10009d0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x11305ae88,&UNK_10dcd0968);
  puVar1 = &UNK_110740580;
  func_0x000107c613fc(&UNK_110740580,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1009ef804,puVar1);
  return;
}



/* Entry: 10009d164; end: 10009d183;  */

void FUN_10009d164(void)

{
  func_0x000107c61168(&PTR_PTR_1129894e8);
  return;
}



/* Entry: 10009d184; end: 10009d203;  */

void FUN_10009d184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da58a0,&UNK_10d94af90);
  puVar1 = &UNK_1103c9b48;
  func_0x000107c613fc(&UNK_1103c9b48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009fe33c,puVar1);
  return;
}



/* Entry: 10009d204; end: 10009d223;  */

void FUN_10009d204(void)

{
  func_0x000107c61168(&PTR_PTR_112da5910);
  return;
}



/* Entry: 10009d224; end: 10009d26f;  */

void FUN_10009d224(undefined8 param_1)

{
  FUN_1000285a8(0x112da01b8,&UNK_10d942870);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009b0b60,param_1);
  return;
}



/* Entry: 10009d270; end: 10009d2ef;  */

void FUN_10009d270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da43d0,&UNK_10d949030);
  puVar1 = &UNK_1103c86b0;
  func_0x000107c613fc(&UNK_1103c86b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1014abbd8,puVar1);
  return;
}



/* Entry: 10009d2f0; end: 10009d33b;  */

void FUN_10009d2f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009d33c; end: 10009d3bb;  */

void FUN_10009d33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f748,&UNK_10d940ba0);
  puVar1 = &UNK_1103bada0;
  func_0x000107c613fc(&UNK_1103bada0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100453d04,puVar1);
  return;
}



/* Entry: 10009d3bc; end: 10009d477;  */

void FUN_10009d3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f7b8,&UNK_10d940e80);
  puVar1 = &UNK_1103bb0b8;
  func_0x000107c613fc(&UNK_1103bb0b8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_10090a954,puVar1);
  return;
}



/* Entry: 10009d478; end: 10009d50f;  */

void FUN_10009d478(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f7c8,&UNK_10d940f00);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10090a4cc,param_1);
  return;
}



/* Entry: 10009d510; end: 10009d5fb;  */

void FUN_10009d510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f638,&UNK_10d9405e0);
  puVar1 = &UNK_1103ba708;
  func_0x000107c613fc(&UNK_1103ba708,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(&UNK_10144a3fc,puVar1);
  return;
}



/* Entry: 10009d5fc; end: 10009d5ff;  */

void FUN_10009d5fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10009d600; end: 10009d61f;  */

void FUN_10009d600(void)

{
  func_0x000107c61168(&PTR_PTR_112982c58);
  return;
}



/* Entry: 10009d620; end: 10009d63b;  */

void FUN_10009d620(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f688,&UNK_10d9409d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1000b2098,param_1);
  return;
}



/* Entry: 10009d63c; end: 10009d68b;  */

void FUN_10009d63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10009d68c; end: 10009d6a7;  */

void FUN_10009d68c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f690,&UNK_10d9409d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1000b1ffc,param_1);
  return;
}



/* Entry: 10009d6a8; end: 10009d6c7;  */

void FUN_10009d6a8(void)

{
  func_0x000107c61168(&PTR_PTR_112983058);
  return;
}



/* Entry: 10009d6c8; end: 10009d75f;  */

void FUN_10009d6c8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f750,&UNK_10d940be0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10068a438,param_1);
  return;
}



/* Entry: 10009d760; end: 10009d85f;  */

void FUN_10009d760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da05a8,&UNK_10d9433a0);
  puVar1 = &UNK_1103bdb88;
  func_0x000107c613fc(&UNK_1103bdb88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(0x1000cc844,puVar1);
  return;
}



/* Entry: 10009d860; end: 10009d8ab;  */

void FUN_10009d860(undefined8 param_1)

{
  FUN_1000285a8(0x112da01b0,&UNK_10d942810);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1000d5d80,param_1);
  return;
}



/* Entry: 10009d8ac; end: 10009d94f;  */

void FUN_10009d8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f738,&UNK_10d940b20);
  puVar1 = &UNK_1103bad38;
  func_0x000107c613fc(&UNK_1103bad38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100453bf0,puVar1);
  return;
}



/* Entry: 10009d950; end: 10009da0b;  */

void FUN_10009d950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9f7c0,&UNK_10d940ec0);
  puVar1 = &UNK_1103bb100;
  func_0x000107c613fc(&UNK_1103bb100,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1004f9ac0,puVar1);
  return;
}



/* Entry: 10009da0c; end: 10009da57;  */

void FUN_10009da0c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9f740,&UNK_10d940b60);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100453bbc,param_1);
  return;
}



/* Entry: 10009da58; end: 10009daef;  */

void FUN_10009da58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112da5158,&UNK_10d94a560);
  puVar1 = &UNK_1103c93b8;
  func_0x000107c613fc(&UNK_1103c93b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1009d4030,puVar1);
  return;
}



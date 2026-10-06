/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002ade5c; end: 1002adeab;  */

void FUN_1002ade5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002adeac; end: 1002adecb;  */

void FUN_1002adeac(void)

{
  func_0x000107c61168(&PTR_PTR_112913180);
  return;
}



/* Entry: 1002adecc; end: 1002adf4b;  */

void FUN_1002adecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e06a68,&UNK_10d9da930);
  puVar1 = &UNK_11044fc40;
  func_0x000107c613fc(&UNK_11044fc40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101b8cd00,puVar1);
  return;
}



/* Entry: 1002adf4c; end: 1002adf77;  */

void FUN_1002adf4c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002adf78; end: 1002adfc3;  */

void FUN_1002adf78(undefined8 param_1)

{
  FUN_1000285a8(0x112ff4ba0,&UNK_10dc61800);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10078df38,param_1);
  return;
}



/* Entry: 1002adfc4; end: 1002adfcf;  */

void FUN_1002adfc4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1002adfd0; end: 1002adfef;  */

void FUN_1002adfd0(void)

{
  func_0x000107c61168(&PTR_PTR_112940760);
  return;
}



/* Entry: 1002adff0; end: 1002adfff;  */

undefined1 * FUN_1002adff0(void)

{
  long lVar1;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  *in_stack_00000010 = in_stack_00000008;
  lVar1 = 0x620;
  do {
    (*(code *)**(undefined8 **)(&stack0x00000038 + lVar1))(&stack0x00000038 + lVar1);
    lVar1 = lVar1 + -0x68;
  } while (lVar1 != -0x60);
  return &stack0x00000038;
}



/* Entry: 1002ae000; end: 1002ae03b;  */

long FUN_1002ae000(long param_1)

{
  long lVar1;
  
  lVar1 = 0x620;
  do {
    (*(code *)**(undefined8 **)(param_1 + lVar1))(param_1 + lVar1);
    lVar1 = lVar1 + -0x68;
  } while (lVar1 != -0x60);
  return param_1;
}



/* Entry: 1002ae03c; end: 1002ae0d3;  */

void FUN_1002ae03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fc6188,&UNK_10dc33e58);
  puVar1 = &UNK_1106b9918;
  func_0x000107c613fc(&UNK_1106b9918,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10094f2fc,puVar1);
  return;
}



/* Entry: 1002ae0d4; end: 1002ae0f3;  */

void FUN_1002ae0d4(void)

{
  func_0x000107c61168(&PTR_PTR_112911c80);
  return;
}



/* Entry: 1002ae0f4; end: 1002ae1af;  */

void FUN_1002ae0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19950,&UNK_10d9f9590);
  puVar1 = &UNK_11046d488;
  func_0x000107c613fc(&UNK_11046d488,0x38,7);
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
  FUN_1000823a8(FUN_10094f82c,puVar1);
  return;
}



/* Entry: 1002ae1b0; end: 1002ae1cf;  */

void FUN_1002ae1b0(void)

{
  func_0x000107c61168(&PTR_PTR_112e199c0);
  return;
}



/* Entry: 1002ae1d0; end: 1002ae273;  */

void FUN_1002ae1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1a800,&UNK_10d9fad30);
  puVar1 = &UNK_11046e1b0;
  func_0x000107c613fc(&UNK_11046e1b0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10076c580,puVar1);
  return;
}



/* Entry: 1002ae274; end: 1002ae293;  */

void FUN_1002ae274(void)

{
  func_0x000107c61168(&PTR_PTR_112e1a878);
  return;
}



/* Entry: 1002ae294; end: 1002ae32b;  */

void FUN_1002ae294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fc8c88,&UNK_10dc35a50);
  puVar1 = &UNK_1106ba858;
  func_0x000107c613fc(&UNK_1106ba858,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1005de6ac,puVar1);
  return;
}



/* Entry: 1002ae32c; end: 1002ae34b;  */

void FUN_1002ae32c(void)

{
  func_0x000107c61168(&PTR_PTR_112912f18);
  return;
}



/* Entry: 1002ae34c; end: 1002ae3cb;  */

void FUN_1002ae34c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e122f0,&UNK_10d9edb50);
  puVar1 = &UNK_110465378;
  func_0x000107c613fc(&UNK_110465378,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100781574,puVar1);
  return;
}



/* Entry: 1002ae3cc; end: 1002ae3eb;  */

void FUN_1002ae3cc(void)

{
  func_0x000107c61168(&PTR_PTR_112e12368);
  return;
}



/* Entry: 1002ae3ec; end: 1002ae483;  */

void FUN_1002ae3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df9948,&UNK_10d9ca9d0);
  puVar1 = &UNK_11043f470;
  func_0x000107c613fc(&UNK_11043f470,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101acc284,puVar1);
  return;
}



/* Entry: 1002ae484; end: 1002ae4b7;  */

void FUN_1002ae484(void)

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



/* Entry: 1002ae4b8; end: 1002ae4c7;  */

undefined1  [16] FUN_1002ae4b8(void)

{
  return ZEXT816(0x11043f510);
}



/* Entry: 1002ae4c8; end: 1002ae4e7;  */

void FUN_1002ae4c8(void)

{
  func_0x000107c61168(&PTR_PTR_112df7808);
  return;
}



/* Entry: 1002ae4e8; end: 1002ae5a3;  */

void FUN_1002ae4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1b170,&UNK_10d9fbdb0);
  puVar1 = &UNK_11046e908;
  func_0x000107c613fc(&UNK_11046e908,0x38,7);
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
  FUN_1000823a8(FUN_1009522f8,puVar1);
  return;
}



/* Entry: 1002ae5a4; end: 1002ae5c3;  */

void FUN_1002ae5a4(void)

{
  func_0x000107c61168(&PTR_PTR_112e1b1e0);
  return;
}



/* Entry: 1002ae5c4; end: 1002ae68b;  */

void FUN_1002ae5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e12ea0,&UNK_10d9ee4b0);
  puVar1 = &UNK_110465dd8;
  func_0x000107c613fc(&UNK_110465dd8,0x40,7);
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
  FUN_1000823a8(FUN_100954310,puVar1);
  return;
}



/* Entry: 1002ae68c; end: 1002ae6ab;  */

void FUN_1002ae68c(void)

{
  func_0x000107c61168(&PTR_PTR_112e12f10);
  return;
}



/* Entry: 1002ae6ac; end: 1002ae767;  */

void FUN_1002ae6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e05f00,&UNK_10d9d9278);
  puVar1 = &UNK_11044d518;
  func_0x000107c613fc(&UNK_11044d518,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101b742f4,puVar1);
  return;
}



/* Entry: 1002ae768; end: 1002ae7ab;  */

void FUN_1002ae768(void)

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



/* Entry: 1002ae7ac; end: 1002ae7f7;  */

void FUN_1002ae7ac(undefined8 param_1)

{
  FUN_1000285a8(0x112fcd048,&UNK_10dc3c8d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103a29270,param_1);
  return;
}



/* Entry: 1002ae7f8; end: 1002ae817;  */

void FUN_1002ae7f8(void)

{
  func_0x000107c61168(&PTR_PTR_112914258);
  return;
}



/* Entry: 1002ae818; end: 1002ae863;  */

void FUN_1002ae818(undefined8 param_1)

{
  FUN_1000285a8(0x112e06050,&UNK_10d9d9520);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b78944,param_1);
  return;
}



/* Entry: 1002ae864; end: 1002ae907;  */

void FUN_1002ae864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e210b8,&UNK_10da04470);
  puVar1 = &UNK_110475550;
  func_0x000107c613fc(&UNK_110475550,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101d1ec4c,puVar1);
  return;
}



/* Entry: 1002ae908; end: 1002ae963;  */

void FUN_1002ae908(void)

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



/* Entry: 1002ae964; end: 1002ae97f;  */

void FUN_1002ae964(undefined8 param_1)

{
  FUN_1000285a8(0x112e210c0,&UNK_10da04478);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d1ee14,param_1);
  return;
}



/* Entry: 1002ae980; end: 1002ae9cf;  */

void FUN_1002ae980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002ae9d0; end: 1002ae9ef;  */

void FUN_1002ae9d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128216d0);
  return;
}



/* Entry: 1002ae9f0; end: 1002aea87;  */

void FUN_1002ae9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e067c8,&UNK_10d9da410);
  puVar1 = &UNK_11044f298;
  func_0x000107c613fc(&UNK_11044f298,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101b86ac0,puVar1);
  return;
}



/* Entry: 1002aea88; end: 1002aeabb;  */

void FUN_1002aea88(void)

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



/* Entry: 1002aeabc; end: 1002aeb07;  */

void FUN_1002aeabc(undefined8 param_1)

{
  FUN_1000285a8(0x112e7af20,&UNK_10da85650);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1022ba25c,param_1);
  return;
}



/* Entry: 1002aeb08; end: 1002aeb27;  */

void FUN_1002aeb08(void)

{
  func_0x000107c61168(&PTR_PTR_112832cd0);
  return;
}



/* Entry: 1002aeb28; end: 1002aeba7;  */

void FUN_1002aeb28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e03408,&UNK_10d9d5d20);
  puVar1 = &UNK_1104484b0;
  func_0x000107c613fc(&UNK_1104484b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101b43cdc,puVar1);
  return;
}



/* Entry: 1002aeba8; end: 1002aebd3;  */

void FUN_1002aeba8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aebd4; end: 1002aec1f;  */

void FUN_1002aebd4(undefined8 param_1)

{
  FUN_1000285a8(0x112e03458,&UNK_10d9d5d80);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101b44200,param_1);
  return;
}



/* Entry: 1002aec20; end: 1002aec3f;  */

void FUN_1002aec20(void)

{
  func_0x000107c61168(&PTR_PTR_11291af48);
  return;
}



/* Entry: 1002aec40; end: 1002aec8b;  */

void FUN_1002aec40(undefined8 param_1)

{
  FUN_1000285a8(0x112e07780,&UNK_10d9dbca0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b861fc,param_1);
  return;
}



/* Entry: 1002aec8c; end: 1002aed6b;  */

void FUN_1002aec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e234b0,&UNK_10da08530);
  puVar1 = &UNK_110476fc0;
  func_0x000107c613fc(&UNK_110476fc0,0x48,7);
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
  FUN_1000823a8(FUN_1006f64bc,puVar1);
  return;
}



/* Entry: 1002aed6c; end: 1002aed8b;  */

void FUN_1002aed6c(void)

{
  func_0x000107c61168(&PTR_PTR_112e23528);
  return;
}



/* Entry: 1002aed8c; end: 1002aeda7;  */

void FUN_1002aed8c(undefined8 param_1)

{
  FUN_1000285a8(0x112e234b8,&UNK_10da08538);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f6460,param_1);
  return;
}



/* Entry: 1002aeda8; end: 1002aedf7;  */

void FUN_1002aeda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002aedf8; end: 1002aee17;  */

void FUN_1002aedf8(void)

{
  func_0x000107c61168(&PTR_PTR_112942098);
  return;
}



/* Entry: 1002aee18; end: 1002aeeaf;  */

void FUN_1002aee18(undefined8 param_1)

{
  FUN_1000285a8(0x112e07558,&UNK_10d9dba40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101bbdc9c,param_1);
  return;
}



/* Entry: 1002aeeb0; end: 1002aeecf;  */

void FUN_1002aeeb0(void)

{
  func_0x000107c61168(&PTR_PTR_11285f5f8);
  return;
}



/* Entry: 1002aeed0; end: 1002aef4f;  */

void FUN_1002aeed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e30c48,&UNK_10da19c30);
  puVar1 = &UNK_11048b638;
  func_0x000107c613fc(&UNK_11048b638,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006f8420,puVar1);
  return;
}



/* Entry: 1002aef50; end: 1002aef6f;  */

void FUN_1002aef50(void)

{
  func_0x000107c61168(&PTR_PTR_112e30cc0);
  return;
}



/* Entry: 1002aef70; end: 1002aef8b;  */

void FUN_1002aef70(undefined8 param_1)

{
  FUN_1000285a8(0x112e16d80,&UNK_10d9f4cb8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10045d26c,param_1);
  return;
}



/* Entry: 1002aef8c; end: 1002aefdb;  */

void FUN_1002aef8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002aefdc; end: 1002aeffb;  */

void FUN_1002aefdc(void)

{
  func_0x000107c61168(&PTR_PTR_1129a1358);
  return;
}



/* Entry: 1002aeffc; end: 1002af047;  */

void FUN_1002aeffc(undefined8 param_1)

{
  FUN_1000285a8(0x112f36648,&UNK_10db7ec20);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103056844,param_1);
  return;
}



/* Entry: 1002af048; end: 1002af14b;  */

void FUN_1002af048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e048a8,&UNK_10d9d8310);
  puVar1 = &UNK_11044bb68;
  func_0x000107c613fc(&UNK_11044bb68,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_1003a2cc4,puVar1);
  return;
}



/* Entry: 1002af14c; end: 1002af197;  */

void FUN_1002af14c(undefined8 param_1)

{
  FUN_1000285a8(0x112fdf5e8,&UNK_10dc49010);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003a2c50,param_1);
  return;
}



/* Entry: 1002af198; end: 1002af1b7;  */

void FUN_1002af198(void)

{
  func_0x000107c61168(&PTR_PTR_11291e0c8);
  return;
}



/* Entry: 1002af1b8; end: 1002af2a3;  */

void FUN_1002af1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e37a30,&UNK_10da21d20);
  puVar1 = &UNK_110495338;
  func_0x000107c613fc(&UNK_110495338,0x50,7);
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
  FUN_1000823a8(FUN_100961728,puVar1);
  return;
}



/* Entry: 1002af2a4; end: 1002af2c3;  */

void FUN_1002af2a4(void)

{
  func_0x000107c61168(&PTR_PTR_112e37aa0);
  return;
}



/* Entry: 1002af2c4; end: 1002af35b;  */

void FUN_1002af2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df99c0,&UNK_10d9cabd0);
  puVar1 = &UNK_11043f7b8;
  func_0x000107c613fc(&UNK_11043f7b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101acd1e8,puVar1);
  return;
}



/* Entry: 1002af35c; end: 1002af3af;  */

void FUN_1002af35c(void)

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



/* Entry: 1002af3b0; end: 1002af46b;  */

void FUN_1002af3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df9778,&UNK_10d9ca850);
  puVar1 = &UNK_11043f2f8;
  func_0x000107c613fc(&UNK_11043f2f8,0x38,7);
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
  FUN_1000823a8(&UNK_101acab50,puVar1);
  return;
}



/* Entry: 1002af46c; end: 1002af4cf;  */

void FUN_1002af46c(void)

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



/* Entry: 1002af4d0; end: 1002af5e7;  */

void FUN_1002af4d0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ae2498,param_1);
  return;
}



/* Entry: 1002af5e8; end: 1002af6d3;  */

void FUN_1002af5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f8fdb0,&UNK_10dc07f20);
  puVar1 = &UNK_11068dea8;
  func_0x000107c613fc(&UNK_11068dea8,0x50,7);
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
  FUN_1000823a8(&UNK_10374da64,puVar1);
  return;
}



/* Entry: 1002af6d4; end: 1002af6d7;  */

void FUN_1002af6d4(void)

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



/* Entry: 1002af6d8; end: 1002af6f7;  */

void FUN_1002af6d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9448);
  return;
}



/* Entry: 1002af6f8; end: 1002af7bf;  */

void FUN_1002af6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f8fdb8,&UNK_10dc07f28);
  puVar1 = &UNK_11068ded0;
  func_0x000107c613fc(&UNK_11068ded0,0x40,7);
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
  FUN_1000823a8(&UNK_10374e034,puVar1);
  return;
}



/* Entry: 1002af7c0; end: 1002af82b;  */

void FUN_1002af7c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002af82c; end: 1002af8cf;  */

void FUN_1002af82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f8fdc0,&UNK_10dc07f30);
  puVar1 = &UNK_11068def8;
  func_0x000107c613fc(&UNK_11068def8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(0x1007592c4,puVar1);
  return;
}



/* Entry: 1002af8d0; end: 1002af8ef;  */

void FUN_1002af8d0(void)

{
  func_0x000107c61168(&PTR_PTR_11296d768);
  return;
}



/* Entry: 1002af8f0; end: 1002af90b;  */

void FUN_1002af8f0(undefined8 param_1)

{
  FUN_1000285a8(0x112e35df8,&UNK_10da1f668);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b99888,param_1);
  return;
}



/* Entry: 1002af90c; end: 1002af92b;  */

void FUN_1002af90c(void)

{
  func_0x000107c61168(&PTR_PTR_1129413a0);
  return;
}



/* Entry: 1002af92c; end: 1002af9c3;  */

void FUN_1002af92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1d708,&UNK_10d9fed20);
  puVar1 = &UNK_1104711a0;
  func_0x000107c613fc(&UNK_1104711a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101cfd968,puVar1);
  return;
}



/* Entry: 1002af9c4; end: 1002afa17;  */

void FUN_1002af9c4(void)

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



/* Entry: 1002afa18; end: 1002afa33;  */

void FUN_1002afa18(undefined8 param_1)

{
  FUN_1000285a8(0x112e11970,&UNK_10d9ecc08);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10074f978,param_1);
  return;
}



/* Entry: 1002afa34; end: 1002afa83;  */

void FUN_1002afa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002afa84; end: 1002afacf;  */

void FUN_1002afa84(undefined8 param_1)

{
  FUN_1000285a8(0x11306d698,&UNK_10dce94f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10074ff64,param_1);
  return;
}



/* Entry: 1002afad0; end: 1002afaef;  */

void FUN_1002afad0(void)

{
  func_0x000107c61168(&PTR_PTR_112999720);
  return;
}



/* Entry: 1002afaf0; end: 1002afb3b;  */

void FUN_1002afaf0(undefined8 param_1)

{
  FUN_1000285a8(0x11306daa0,&UNK_10dce9a40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1043147d4,param_1);
  return;
}



/* Entry: 1002afb3c; end: 1002afb5b;  */

void FUN_1002afb3c(void)

{
  func_0x000107c61168(&PTR_PTR_11299a118);
  return;
}



/* Entry: 1002afb5c; end: 1002afb77;  */

void FUN_1002afb5c(undefined8 param_1)

{
  FUN_1000285a8(0x112e11cb8,&UNK_10d9ed1c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100aa7d84,param_1);
  return;
}



/* Entry: 1002afb78; end: 1002afbc7;  */

void FUN_1002afb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002afbc8; end: 1002afbe3;  */

void FUN_1002afbc8(undefined8 param_1)

{
  FUN_1000285a8(0x112e0e140,&UNK_10d9e8b78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c6e290,param_1);
  return;
}



/* Entry: 1002afbe4; end: 1002afc33;  */

void FUN_1002afbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002afc34; end: 1002afc4f;  */

void FUN_1002afc34(undefined8 param_1)

{
  FUN_1000285a8(0x112e0e148,&UNK_10d9e8b80);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007e5540,param_1);
  return;
}



/* Entry: 1002afc50; end: 1002afce7;  */

void FUN_1002afc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e13ee0,&UNK_10d9f0220);
  puVar1 = &UNK_110467c58;
  func_0x000107c613fc(&UNK_110467c58,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101cb9264,puVar1);
  return;
}



/* Entry: 1002afce8; end: 1002afd3b;  */

void FUN_1002afce8(void)

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



/* Entry: 1002afd3c; end: 1002afd57;  */

void FUN_1002afd3c(undefined8 param_1)

{
  FUN_1000285a8(0x112e13ee8,&UNK_10d9f0228);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cb9530,param_1);
  return;
}



/* Entry: 1002afd58; end: 1002afda7;  */

void FUN_1002afd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002afda8; end: 1002afdc3;  */

void FUN_1002afda8(undefined8 param_1)

{
  FUN_1000285a8(0x112e15e98,&UNK_10d9f33a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100aa944c,param_1);
  return;
}



/* Entry: 1002afdc4; end: 1002afe13;  */

void FUN_1002afdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002afe14; end: 1002afeff;  */

void FUN_1002afe14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e15f80,&UNK_10d9f3590);
  puVar1 = &UNK_110469c68;
  func_0x000107c613fc(&UNK_110469c68,0x50,7);
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
  FUN_1000823a8(FUN_1004655ac,puVar1);
  return;
}



/* Entry: 1002aff00; end: 1002aff1f;  */

void FUN_1002aff00(void)

{
  func_0x000107c61168(&PTR_PTR_112e15ff8);
  return;
}



/* Entry: 1002aff20; end: 1002aff3b;  */

void FUN_1002aff20(undefined8 param_1)

{
  FUN_1000285a8(0x112e15f88,&UNK_10d9f3598);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100465550,param_1);
  return;
}



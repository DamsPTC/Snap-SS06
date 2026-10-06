/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10029a9dc; end: 10029aa2f; +[SCAPIUserAgentHelper appName] */

void FUN_10029a9dc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc288 != -1) {
    FUN_10002a2fc(0x1137fc288,&PTR___NSConcreteGlobalBlock_110d66a98);
  }
  uVar1 = uRam00000001137fc280;
  func_0x000107c61174(uRam00000001137fc280);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10029aa30; end: 10029abc3;  */

/* WARNING: Possible PIC construction at 0x00010029ab00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010029ab10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010029aaf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010029ab14) */
/* WARNING: Removing unreachable block (ram,0x00010029ab04) */
/* WARNING: Removing unreachable block (ram,0x00010029aaf4) */

void FUN_10029aa30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c();
  func_0x000107c61180();
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c4d9c0();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    func_0x000107c4539c();
    func_0x000107c61180();
    func_0x000107c4d9c0();
    func_0x000107c61180();
    uVar2 = puRam00000001137fc280;
    puRam00000001137fc280 = puVar1;
  }
  else {
    func_0x000107c61174(puVar1);
    uVar2 = puRam00000001137fc280;
    puRam00000001137fc280 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10029abc4; end: 10029abe3;  */

void FUN_10029abc4(void)

{
  func_0x000107c61168(&PTR_PTR_112e3e3b8);
  return;
}



/* Entry: 10029abe4; end: 10029ac7f; +[SCAPIUserAgentHelper versionName] */

void FUN_10029abe4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x000107c3dec4();
  func_0x000107c61180();
  func_0x000107c51944();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    func_0x000107c61174(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db27b8);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10029ac80; end: 10029ac9b;  */

void FUN_10029ac80(undefined8 param_1)

{
  FUN_1000285a8(0x112e3e348,&UNK_10da2b4e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007017a0,param_1);
  return;
}



/* Entry: 10029ac9c; end: 10029aceb;  */

void FUN_10029ac9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029acec; end: 10029acf3;  */

void FUN_10029acec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10029acf4; end: 10029ad7f;  */

void FUN_10029acf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110cf7ec0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10029ad80; end: 10029ad9f;  */

void FUN_10029ad80(void)

{
  func_0x000107c61168(&PTR_PTR_112937760);
  return;
}



/* Entry: 10029ada0; end: 10029ada7; -[SCDevice systemVersion] */

undefined8 FUN_10029ada0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10029ada8; end: 10029ae63;  */

void FUN_10029ada8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1f818,&UNK_10da01dc0);
  puVar1 = &UNK_110473bf8;
  func_0x000107c613fc(&UNK_110473bf8,0x38,7);
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
  FUN_1000823a8(FUN_100725940,puVar1);
  return;
}



/* Entry: 10029ae64; end: 10029ae83;  */

void FUN_10029ae64(void)

{
  func_0x000107c61168(&PTR_PTR_112e1f890);
  return;
}



/* Entry: 10029ae84; end: 10029ae9f;  */

void FUN_10029ae84(undefined8 param_1)

{
  FUN_1000285a8(0x112e1f820,&UNK_10da01dc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007258e4,param_1);
  return;
}



/* Entry: 10029aea0; end: 10029af6f;  */

void FUN_10029aea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029af70; end: 10029af8f;  */

void FUN_10029af70(void)

{
  func_0x000107c61168(&PTR_PTR_112e3e4a0);
  return;
}



/* Entry: 10029af90; end: 10029b06f;  */

void FUN_10029af90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19e88,&UNK_10d9f9ed0);
  puVar1 = &UNK_11046d850;
  func_0x000107c613fc(&UNK_11046d850,0x48,7);
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
  FUN_1000823a8(FUN_1009741d4,puVar1);
  return;
}



/* Entry: 10029b070; end: 10029b0af;  */

void FUN_10029b070(void)

{
  func_0x000107c61168(&PTR_PTR_112e19ef8);
  return;
}



/* Entry: 10029b0b0; end: 10029b24b;  */

void FUN_10029b0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19f88,&UNK_10d9fa050);
  puVar1 = &UNK_11046d8f8;
  func_0x000107c613fc(&UNK_11046d8f8,0xa0,7);
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
  func_0x000107c6157c();
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
  FUN_1000823a8(FUN_1009789e4,puVar1);
  return;
}



/* Entry: 10029b24c; end: 10029b28b;  */

void FUN_10029b24c(void)

{
  func_0x000107c61168(&PTR_PTR_112e19ff8);
  return;
}



/* Entry: 10029b28c; end: 10029b2d3;  */

void FUN_10029b28c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  FUN_10029b2d4(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10029b2d4; end: 10029b2ff;  */

void FUN_10029b2d4(ulong *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 & 3) == 0) {
    return;
  }
  puVar1 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10029b300; end: 10029b3eb;  */

void FUN_10029b300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1a1f0,&UNK_10d9fa420);
  puVar1 = &UNK_11046da68;
  func_0x000107c613fc(&UNK_11046da68,0x50,7);
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
  FUN_1000823a8(FUN_10094fa34,puVar1);
  return;
}



/* Entry: 10029b3ec; end: 10029b40b;  */

void FUN_10029b3ec(void)

{
  func_0x000107c61168(&PTR_PTR_112e1a268);
  return;
}



/* Entry: 10029b40c; end: 10029b427;  */

void FUN_10029b40c(undefined8 param_1)

{
  FUN_1000285a8(0x112e1a1f8,&UNK_10d9fa428);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10094f9d8,param_1);
  return;
}



/* Entry: 10029b428; end: 10029b477;  */

void FUN_10029b428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029b478; end: 10029b50f;  */

void FUN_10029b478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1a308,&UNK_10d9fa620);
  puVar1 = &UNK_11046db30;
  func_0x000107c613fc(&UNK_11046db30,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101ce1d90,puVar1);
  return;
}



/* Entry: 10029b510; end: 10029b5a3;  */

void FUN_10029b510(void)

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



/* Entry: 10029b5a4; end: 10029b5bf;  */

void FUN_10029b5a4(undefined8 param_1)

{
  FUN_1000285a8(0x112e168b0,&UNK_10d9f43f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100438da0,param_1);
  return;
}



/* Entry: 10029b5c0; end: 10029b60f;  */

void FUN_10029b5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029b610; end: 10029b62f;  */

void FUN_10029b610(void)

{
  func_0x000107c61168(&PTR_PTR_112e16928);
  return;
}



/* Entry: 10029b630; end: 10029b707;  */

void FUN_10029b630(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10029b708; end: 10029b787;  */

void FUN_10029b708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e16990,&UNK_10d9f4580);
  puVar1 = &UNK_11046a2a0;
  func_0x000107c613fc(&UNK_11046a2a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1004fab60,puVar1);
  return;
}



/* Entry: 10029b788; end: 10029b7a7;  */

void FUN_10029b788(void)

{
  func_0x000107c61168(&PTR_PTR_112e16a08);
  return;
}



/* Entry: 10029b7a8; end: 10029b7b3; +[SCBrotliExperiment enabledEncodings] */

undefined ** FUN_10029b7a8(void)

{
  return &PTR____CFConstantStringClassReference_110f5f8b8;
}



/* Entry: 10029b7b4; end: 10029b84b;  */

void FUN_10029b7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e16a80,&UNK_10d9f4770);
  puVar1 = &UNK_11046a368;
  func_0x000107c613fc(&UNK_11046a368,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101cc8ce0,puVar1);
  return;
}



/* Entry: 10029b84c; end: 10029b89f;  */

void FUN_10029b84c(void)

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



/* Entry: 10029b8a0; end: 10029b8bb;  */

void FUN_10029b8a0(undefined8 param_1)

{
  FUN_1000285a8(0x112e16a88,&UNK_10d9f4778);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cc8fb0,param_1);
  return;
}



/* Entry: 10029b8bc; end: 10029b90b;  */

void FUN_10029b8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029b90c; end: 10029b94b; -[SCAPIClient setDefaultBaseURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10029b90c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278df50;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10029b94c; end: 10029ba13;  */

void FUN_10029b94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e16b70,&UNK_10d9f4950);
  puVar1 = &UNK_11046a430;
  func_0x000107c613fc(&UNK_11046a430,0x40,7);
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
  FUN_1000823a8(FUN_1004f7ec8,puVar1);
  return;
}



/* Entry: 10029ba14; end: 10029ba33;  */

void FUN_10029ba14(void)

{
  func_0x000107c61168(&PTR_PTR_112e16be8);
  return;
}



/* Entry: 10029ba34; end: 10029bb73; -[SCAFNetworkingHTTPRequestModifier initWithFSNHostProvider:gatewayRouteTagProvider:clientAttestationHeadersGenerator:fsnAuthGenerator:httpClient:] */

undefined1 *
FUN_10029ba34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e7e80;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10029bb74; end: 10029bb8f;  */

void FUN_10029bb74(undefined8 param_1)

{
  FUN_1000285a8(0x112e16b78,&UNK_10d9f4958);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004f7e6c,param_1);
  return;
}



/* Entry: 10029bb90; end: 10029bbdf;  */

void FUN_10029bb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029bbe0; end: 10029bbfb;  */

void FUN_10029bbe0(undefined8 param_1)

{
  FUN_1000285a8(0x112e12210,&UNK_10d9ed9c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10078d134,param_1);
  return;
}



/* Entry: 10029bbfc; end: 10029bc4b;  */

void FUN_10029bbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029bc4c; end: 10029bc6b;  */

void FUN_10029bc4c(void)

{
  func_0x000107c61168(&PTR_PTR_1129439e0);
  return;
}



/* Entry: 10029bc6c; end: 10029bd27;  */

void FUN_10029bc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e123d8,&UNK_10d9edce0);
  puVar1 = &UNK_110465440;
  func_0x000107c613fc(&UNK_110465440,0x38,7);
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
  FUN_1000823a8(FUN_1007816bc,puVar1);
  return;
}



/* Entry: 10029bd28; end: 10029bd47;  */

void FUN_10029bd28(void)

{
  func_0x000107c61168(&PTR_PTR_112e12450);
  return;
}



/* Entry: 10029bd48; end: 10029bd63;  */

void FUN_10029bd48(undefined8 param_1)

{
  FUN_1000285a8(0x112e123e0,&UNK_10d9edce8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100781660,param_1);
  return;
}



/* Entry: 10029bd64; end: 10029bdb3;  */

void FUN_10029bd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029bdb4; end: 10029be9f; -[SCMainAppSnapTokenAuthenticatedRequestsProvider initWithHttpMetadataService:requestModifier:deviceIdManagerLazy:logger:] */

undefined1 *
FUN_10029bdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112702f30;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x18),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x20),param_4);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10029bea0; end: 10029bea3;  */

void FUN_10029bea0(void)

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



/* Entry: 10029bea4; end: 10029beef;  */

void FUN_10029bea4(void)

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



/* Entry: 10029bef0; end: 10029c157;  */

void FUN_10029bef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = PTR_PTR_1126bd110;
  func_0x000107c610f4(PTR_PTR_1126bd110);
  func_0x000107c482b8();
  puVar2 = PTR_PTR_1126b65c8;
  func_0x000107c610f4(PTR_PTR_1126b65c8);
  uVar3 = param_2;
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  func_0x000107c474f8(puVar2);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126b65d0;
  func_0x000107c610f4(PTR_PTR_1126b65d0);
  uVar3 = param_2;
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5da60(param_1);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c483bc(puVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10029c158; end: 10029c1fb; -[SCSnapTokenManagerMainAppInternalDelegate initWithRefreshTokenBehaviorSubject:cloud1TLTokenBehaviorSubject:] */

undefined1 *
FUN_10029c158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702f40;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10029c1fc; end: 10029c3f3; -[SCSnapTokenManager initWithRequestsProvider:circumstanceEngine:logger:userId:internalDelegate:snapTokenStorageBackedUp:isMainAppInstance:source:] */

undefined8
FUN_10029c1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_11);
  puVar1 = PTR_PTR_1126ded20;
  func_0x000107c610f4(PTR_PTR_1126ded20);
  func_0x000107c45888();
  puVar2 = PTR_PTR_1126decb0;
  func_0x000107c610fc(PTR_PTR_1126decb0);
  puVar3 = PTR_PTR_1126decb8;
  func_0x000107c610f4(PTR_PTR_1126decb8);
  func_0x000107c47508();
  func_0x000107c48dd8(param_1,param_2,puVar3,puVar3,puVar1,param_4,param_5,param_6,param_7,param_9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10029c3f4; end: 10029c4df;  */

void FUN_10029c3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e35bf8,&UNK_10da1f240);
  puVar1 = &UNK_110492be8;
  func_0x000107c613fc(&UNK_110492be8,0x50,7);
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
  FUN_1000823a8(&UNK_101e9d390,puVar1);
  return;
}



/* Entry: 10029c4e0; end: 10029c53b;  */

void FUN_10029c4e0(void)

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



/* Entry: 10029c53c; end: 10029c66b; -[SCSnapTokenNetworkRequests initWithAuthenticatedRequestsProvider:logger:circumstanceEngine:] */

undefined1 *
FUN_10029c53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112702f88;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = &UNK_10f6ede22;
    func_0x000107c60f50(&UNK_10f6ede22,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = &UNK_10f6ede4d;
    func_0x000107c60f50(&UNK_10f6ede4d,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10029c66c; end: 10029c68b;  */

void FUN_10029c66c(void)

{
  func_0x000107c61168(&PTR_PTR_112e35c70);
  return;
}



/* Entry: 10029c68c; end: 10029cc23; -[SCSnapTokenManager initWithTokenStorage:snapTokenStore:networkRequests:circumstanceEngine:logger:userId:internalDelegate:isMainAppInstance:source:] */

undefined8 *
FUN_10029c68c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  puStack_80 = PTR_PTR_112702f80;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[10];
    puVar1[10] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 3,param_6);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c610fc();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 6) = param_10;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c45454();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    *(undefined1 *)(puVar1 + 8) = 0;
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[4];
    puVar1[4] = 0;
    func_0x000107c61170(uVar2);
    if (param_9 != 0) {
      func_0x000107c61174(param_9);
      uVar2 = puVar1[2];
      puVar1[2] = param_9;
      func_0x000107c61170(uVar2);
      uVar2 = puVar1[4];
      func_0x000107c3e804();
      func_0x000107c61180();
      func_0x000107c61144(auStack_90,puVar1);
      puVar5 = puVar1;
      func_0x000107c5cb8c(puVar1);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c4e600(puVar1);
      func_0x000107c61180();
      puVar7 = puVar1;
      func_0x000107c5d984(puVar1);
      func_0x000107c61180();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1002bf430;
      puStack_a8 = &UNK_110c9af50;
      func_0x000107c6111c(auStack_98,auStack_90);
      func_0x000107c61174(uVar2);
      uStack_a0 = uVar2;
      func_0x000107c4424c(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      uVar8 = puVar1[4];
      func_0x000107c3e804();
      func_0x000107c61180();
      puVar5 = puVar1;
      func_0x000107c5cb8c(puVar1);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c4e600(puVar1);
      func_0x000107c61180();
      puVar7 = puVar1;
      func_0x000107c5d984(puVar1);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_c8,auStack_90);
      func_0x000107c61174(uVar8);
      func_0x000107c43f84(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar8);
      func_0x000107c61120(auStack_c8);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uStack_a0);
      func_0x000107c61120(auStack_98);
      func_0x000107c61120(auStack_90);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61174(param_12);
    uVar2 = puVar1[5];
    puVar1[5] = param_12;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10029cc24; end: 10029cc3f;  */

void FUN_10029cc24(undefined8 param_1)

{
  FUN_1000285a8(0x112e35c00,&UNK_10da1f248);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101e9d8d4,param_1);
  return;
}



/* Entry: 10029cc40; end: 10029cc8f;  */

void FUN_10029cc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029cc90; end: 10029cc97; -[SCSnapTokenManager tokenStorage] */

undefined8 FUN_10029cc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10029cc98; end: 10029cc9f; -[SCSnapTokenManager performer] */

undefined8 FUN_10029cc98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10029cca0; end: 10029cca7; -[SCSnapTokenManager userId] */

undefined8 FUN_10029cca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10029cca8; end: 10029ce23; -[SCSnapTokenStorage getRefreshTokenAsyncWithCompletionPerformer:userId:completion:] */

void FUN_10029cca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  puVar1 = &UNK_10f6ede77;
  FUN_10029ce24();
  puStack_48 = puVar1;
  func_0x000107c3bda4();
  func_0x000107c61180();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c4e524(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10029ce24; end: 10029cea7;  */

undefined * FUN_10029ce24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3e758();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10029cea8; end: 10029cef3; -[SCTracer beginAsyncTraceWithNameBlock:] */

undefined * FUN_10029cea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_30 = param_3;
  func_0x000107c61174();
  puVar1 = &UNK_1048d8acc;
  FUN_10029cef4(&UNK_1048d8acc,auStack_40);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 10029cef4; end: 10029d013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10029cef4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar2 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    puVar3 = &UNK_1107b59d8;
    func_0x000107c613fc(&UNK_1107b59d8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    puStack_50 = &UNK_1048d8068;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1048d8088;
    puStack_58 = &UNK_1107b59f0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar5);
    lVar6 = lVar2;
    func_0x000107c3e758(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    puVar5 = puVar3;
    func_0x000107c61544(puVar3,"",0x38,0x21,0x34,1);
    func_0x000107c61574(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10029cff4);
      (*pcVar1)();
    }
  }
  return lVar6;
}



/* Entry: 10029d014; end: 10029d023;  */

void FUN_10029d014(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10029d024; end: 10029d127; -[SCSnapTokenStorage _loadRefreshTokenForUserId:] */

void FUN_10029d024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ee0ed;
  FUN_1000ba800(&UNK_10f6ee0ed);
  func_0x000107c611ec(param_1 + 0x34);
  lVar2 = param_1;
  func_0x000107c4fb84();
  func_0x000107c61180();
  func_0x000107c611f0(param_1 + 0x34);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c3c21c(param_1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c611ec(param_1 + 0x34);
    func_0x000107c57c34(param_1,param_2,lVar2);
    func_0x000107c611f0(param_1 + 0x34);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10029d128; end: 10029d12f; -[SCSnapTokenStorage refreshToken] */

undefined8 FUN_10029d128(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10029d130; end: 10029d1d3;  */

void FUN_10029d130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3a238,&UNK_10da24e30);
  puVar1 = &UNK_1104987a0;
  func_0x000107c613fc(&UNK_1104987a0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101ed3a90,puVar1);
  return;
}



/* Entry: 10029d1d4; end: 10029d22f;  */

void FUN_10029d1d4(void)

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



/* Entry: 10029d230; end: 10029d24b;  */

void FUN_10029d230(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a240,&UNK_10da24e38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed3dfc,param_1);
  return;
}



/* Entry: 10029d24c; end: 10029d31b;  */

void FUN_10029d24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029d31c; end: 10029d33b;  */

void FUN_10029d31c(void)

{
  func_0x000107c61168(&PTR_PTR_112e1f990);
  return;
}



/* Entry: 10029d33c; end: 10029d3d3;  */

void FUN_10029d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1fa00,&UNK_10da02120);
  puVar1 = &UNK_110473d88;
  func_0x000107c613fc(&UNK_110473d88,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100ab0614,puVar1);
  return;
}



/* Entry: 10029d3d4; end: 10029d3f3;  */

void FUN_10029d3d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e1fa78);
  return;
}



/* Entry: 10029d3f4; end: 10029d40f;  */

void FUN_10029d3f4(undefined8 param_1)

{
  FUN_1000285a8(0x112e1fa08,&UNK_10da02128);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100ab05b8,param_1);
  return;
}



/* Entry: 10029d410; end: 10029d45f;  */

void FUN_10029d410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029d460; end: 10029d53f;  */

void FUN_10029d460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0de28,&UNK_10d9e8650);
  puVar1 = &UNK_110460908;
  func_0x000107c613fc(&UNK_110460908,0x48,7);
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
  FUN_1000823a8(FUN_10097f028,puVar1);
  return;
}



/* Entry: 10029d540; end: 10029d55f;  */

void FUN_10029d540(void)

{
  func_0x000107c61168(&PTR_PTR_112e0de98);
  return;
}



/* Entry: 10029d560; end: 10029d5df;  */

void FUN_10029d560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e13d20,&UNK_10d9efef0);
  puVar1 = &UNK_1104679e8;
  func_0x000107c613fc(&UNK_1104679e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101cb8b80,puVar1);
  return;
}



/* Entry: 10029d5e0; end: 10029d62b;  */

void FUN_10029d5e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10029d62c; end: 10029d647;  */

void FUN_10029d62c(undefined8 param_1)

{
  FUN_1000285a8(0x112e13d28,&UNK_10d9efef8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cb8de0,param_1);
  return;
}



/* Entry: 10029d648; end: 10029d717;  */

void FUN_10029d648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029d718; end: 10029d737;  */

void FUN_10029d718(void)

{
  func_0x000107c61168(&PTR_PTR_112e3c520);
  return;
}



/* Entry: 10029d738; end: 10029d753;  */

void FUN_10029d738(undefined8 param_1)

{
  FUN_1000285a8(0x112e3c4b0,&UNK_10da27eb8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100790800,param_1);
  return;
}



/* Entry: 10029d754; end: 10029d7a3;  */

void FUN_10029d754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029d7a4; end: 10029d83b;  */

void FUN_10029d7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1b538,&UNK_10d9fc490);
  puVar1 = &UNK_11046ebe0;
  func_0x000107c613fc(&UNK_11046ebe0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101ce5f04,puVar1);
  return;
}



/* Entry: 10029d83c; end: 10029d88f;  */

void FUN_10029d83c(void)

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



/* Entry: 10029d890; end: 10029d8ab;  */

void FUN_10029d890(undefined8 param_1)

{
  FUN_1000285a8(0x112e1b540,&UNK_10d9fc498);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ce61d0,param_1);
  return;
}



/* Entry: 10029d8ac; end: 10029d8fb;  */

void FUN_10029d8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029d8fc; end: 10029d917;  */

void FUN_10029d8fc(undefined8 param_1)

{
  FUN_1000285a8(0x112e1acc8,&UNK_10d9fb578);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100762aa4,param_1);
  return;
}



/* Entry: 10029d918; end: 10029d967;  */

void FUN_10029d918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029d968; end: 10029d983;  */

void FUN_10029d968(undefined8 param_1)

{
  FUN_1000285a8(0x112e1add0,&UNK_10d9fb728);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100627ba4,param_1);
  return;
}



/* Entry: 10029d984; end: 10029d9d3;  */

void FUN_10029d984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



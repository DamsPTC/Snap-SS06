/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c8a01c; end: 101c8a033; -[WebBrowsingViewProvider providePrefetchHintsLoadWkWebviewWithSharedCookie:] */

void FUN_101c8a01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_101c8a0a4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c8a034; end: 101c8a06f; -[WebBrowsingViewProvider init] */

void FUN_101c8a034(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c8a070; end: 101c8a0a3;  */

void FUN_101c8a070(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c8a0a4; end: 101c8a1bf;  */

undefined * FUN_101c8a0a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___WKPreferences_1126bde50;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKPreferences_1126bde50);
  func_0x000107c453e4();
  func_0x000107c55948();
  func_0x000107c57678(puVar1);
  func_0x000107c53df8(puVar1);
  func_0x000107c526a4(puVar1);
  puVar3 = PTR_PTR_1126af390;
  func_0x000107c61168();
  func_0x000107c3dfcc();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5284c(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126b4f58;
  func_0x000107c61168(PTR_PTR_1126b4f58);
  func_0x000107c3ac68(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101c8a1c0; end: 101c8a1df;  */

void FUN_101c8a1c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff468);
  return;
}



/* Entry: 101c8a1e0; end: 101c8a3e7;  */

long FUN_101c8a1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  func_0x00010045a8e4();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010045a980();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010045ab08();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  return unaff_x20;
}



/* Entry: 101c8a3e8; end: 101c8a46b;  */

void FUN_101c8a3e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101c8a46c; end: 101c8a4af;  */

undefined1  [16] FUN_101c8a46c(void)

{
  return ZEXT816(0x110463538);
}



/* Entry: 101c8a4b0; end: 101c8a503;  */

void FUN_101c8a4b0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c8a504; end: 101c8a7e3;  */

long FUN_101c8a504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a8df0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101c8a7e4; end: 101c8a82f;  */

void FUN_101c8a7e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8a830; end: 101c8a87f;  */

undefined8 FUN_101c8a830(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c8a880; end: 101c8a8c3;  */

undefined1  [16] FUN_101c8a880(void)

{
  return ZEXT816(0x110463600);
}



/* Entry: 101c8a8c4; end: 101c8a8eb;  */

void FUN_101c8a8c4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c8a8ec; end: 101c8a8f3;  */

undefined8 FUN_101c8a8ec(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c8a8f4; end: 101c8a9a3;  */

void FUN_101c8a8f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002cbc5c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101c8aaa4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c8a9a4; end: 101c8a9af;  */

void FUN_101c8a9a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002cbc5c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_101c8aaa4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c8a9b0; end: 101c8aa1f;  */

undefined8 FUN_101c8a9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101c8aaa4(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101c8aa20; end: 101c8aa53;  */

void FUN_101c8aa20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8aa54; end: 101c8aaa3;  */

undefined8 FUN_101c8aa54(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c8aaa4; end: 101c8ac47;  */

void FUN_101c8aaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8df8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0x767265536b6c6174;
  func_0x000107c5fadc(0x767265536b6c6174,0xec00000073656369);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c8ac48; end: 101c8ac7b;  */

undefined1  [16] FUN_101c8ac48(void)

{
  return ZEXT816(0x1104636c8);
}



/* Entry: 101c8ac7c; end: 101c8aca3;  */

void FUN_101c8ac7c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c8aca4; end: 101c8acab;  */

undefined8 FUN_101c8aca4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c8acac; end: 101c8c213;  */

long FUN_101c8acac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  *(undefined8 *)(unaff_x20 + 0x80) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_14;
  *(undefined8 *)(unaff_x20 + 0x90) = param_15;
  *(undefined8 *)(unaff_x20 + 0x98) = param_16;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_21;
  *(undefined8 *)(unaff_x20 + 200) = param_22;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_23;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_24;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_25;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_26;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_27;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_28;
  *(undefined8 *)(unaff_x20 + 0x100) = param_29;
  *(undefined8 *)(unaff_x20 + 0x108) = param_30;
  *(undefined8 *)(unaff_x20 + 0x110) = param_31;
  *(undefined8 *)(unaff_x20 + 0x118) = param_32;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = param_32;
  func_0x0001000ad7c4();
  *(undefined8 *)(unaff_x20 + 0x120) = uVar4;
  uVar5 = uVar4;
  func_0x0001000ad7c4();
  *(undefined8 *)(unaff_x20 + 0x128) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x130) = param_35;
  *(undefined8 *)(unaff_x20 + 0x138) = param_36;
  *(undefined8 *)(unaff_x20 + 0x140) = param_37;
  *(undefined8 *)(unaff_x20 + 0x148) = param_38;
  *(undefined8 *)(unaff_x20 + 0x150) = param_39;
  *(undefined8 *)(unaff_x20 + 0x158) = param_40;
  puVar7 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar7;
  puVar6 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar6;
  puVar3 = PTR_PTR_1126a8e00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  uVar2 = uVar10;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x726553646e756f73;
  func_0x000107c5fadc(0x726553646e756f73,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effce40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  uVar2 = uVar8;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar8;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007ee0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c615f0(param_17);
  func_0x000107c61174();
  uVar2 = uVar9;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f007f00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007f20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f007f40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar8;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar10;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x655378656c707564;
  func_0x000107c5fadc(0x655378656c707564,0xee00736563697672);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2cd50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007f70);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007f90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007fb0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_35);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = uVar10;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_36);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2fd40);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_37);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_38);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_39);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef18630);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_40);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f007fd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f007ff0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8c210);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x160) = puVar7;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c615e8(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61574(param_33);
    func_0x000107c61574(param_34);
    func_0x000107c61170(param_35);
    func_0x000107c61170(param_36);
    func_0x000107c61170(param_37);
    func_0x000107c61170(param_38);
    func_0x000107c61170(param_39);
    func_0x000107c61170(param_40);
    *(undefined **)(unaff_x20 + 0x168) = puVar6;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8c214);
  (*pcVar1)();
}



/* Entry: 101c8c214; end: 101c8c3a7;  */

void FUN_101c8c214(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  return;
}



/* Entry: 101c8c3a8; end: 101c8c3f7;  */

undefined8 FUN_101c8c3a8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c8c3f8; end: 101c8c44b;  */

undefined1  [16] FUN_101c8c3f8(void)

{
  return ZEXT816(0x110463770);
}



/* Entry: 101c8c44c; end: 101c8c473;  */

void FUN_101c8c44c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c8c474; end: 101c8c47b;  */

undefined8 FUN_101c8c474(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101c8c47c; end: 101c8c533;  */

long FUN_101c8c47c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x00010045a5b8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010045a630();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010045a800();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101c8c534; end: 101c8c567;  */

void FUN_101c8c534(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8c568; end: 101c8c5ab;  */

undefined1  [16] FUN_101c8c568(void)

{
  return ZEXT816(0x110463858);
}



/* Entry: 101c8c5ac; end: 101c8c5ff;  */

void FUN_101c8c5ac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c8c600; end: 101c8c743;  */

void FUN_101c8c600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  lVar1 = *unaff_x20;
  uVar4 = 0;
  func_0x000107c60714(lVar1,0);
  puVar2 = &UNK_110463990;
  func_0x000107c613fc(&UNK_110463990,0x50,7);
  *(long **)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  *(undefined8 *)(puVar2 + 0x20) = param_7;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  pcStack_70 = FUN_101c8ca00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1104639a8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c6157c();
  func_0x000107c6157c(param_7);
  func_0x000107c61434(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c5fb28(lVar1,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x0001000d76cc(lVar1 + 0x20,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 101c8c744; end: 101c8c9b3;  */

void FUN_101c8c744(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  long lStack_78;
  
  func_0x0001000d224c(&puStack_a0);
  puVar1 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    (*param_2)(0);
  }
  else {
    uVar8 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
    puVar3 = PTR_PTR_1126b1c10;
    func_0x000107c610f8();
    func_0x000107c495dc(uVar8);
    puVar4 = puVar1;
    func_0x000107c4c1e0();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar8);
    puVar5 = PTR_PTR_1126d7bb0;
    func_0x000107c610f8(PTR_PTR_1126d7bb0);
    uVar8 = 0;
    FUN_101c8ca30(0);
    func_0x000107c5fc48(param_4,uVar8);
    func_0x000107c45530(puVar5);
    func_0x000107c61170(param_4);
    uVar8 = 0;
    if (param_6 != 0) {
      func_0x000107c5fadc(param_5,param_6);
      uVar8 = param_5;
    }
    func_0x000107c59e18(puVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c5fadc(param_7,param_8);
    func_0x000107c540bc(puVar5);
    func_0x000107c61170(param_7);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c59b14(puVar5);
    func_0x000107c61170(puVar6);
    puVar6 = puVar4;
    func_0x000107c61150(puVar4,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_presentAlertV2WithConfig_onDismi_112620668);
    if (((ulong)puVar6 & 1) != 0) {
      pcStack_80 = FUN_101c8ca74;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1104639d0;
      ppuVar7 = &puStack_a0;
      lStack_78 = param_1;
      func_0x000107c60bc4(ppuVar7);
      lVar2 = lStack_78;
      func_0x000107c615f0(puVar4);
      func_0x000107c61580(param_1,2);
      func_0x000107c61574(lVar2);
      func_0x000107c4ee98(puVar4);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(puVar4);
      func_0x000107c61574(param_1);
    }
    (*param_2)(1);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 101c8c9b4; end: 101c8c9ff;  */

void FUN_101c8c9b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8ca00; end: 101c8ca2f;  */

void FUN_101c8ca00(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  long lStack_78;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000d224c(&puStack_a0);
  puVar5 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    (*pcVar2)(0);
  }
  else {
    uVar14 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
    puVar6 = PTR_PTR_1126b1c10;
    func_0x000107c610f8();
    func_0x000107c495dc(uVar14);
    puVar7 = puVar5;
    func_0x000107c4c1e0();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined **)(lVar1 + 0x18) = puVar7;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar14);
    puVar8 = PTR_PTR_1126d7bb0;
    func_0x000107c610f8(PTR_PTR_1126d7bb0);
    uVar14 = 0;
    FUN_101c8ca30(0);
    func_0x000107c5fc48(uVar9,uVar14);
    func_0x000107c45530(puVar8);
    func_0x000107c61170(uVar9);
    uVar9 = 0;
    if (lVar3 != 0) {
      func_0x000107c5fadc(uVar10,lVar3);
      uVar9 = uVar10;
    }
    func_0x000107c59e18(puVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c5fadc(uVar11,uVar4);
    func_0x000107c540bc(puVar8);
    func_0x000107c61170(uVar11);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c59b14(puVar8);
    func_0x000107c61170(puVar12);
    puVar12 = puVar7;
    func_0x000107c61150(puVar7,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_presentAlertV2WithConfig_onDismi_112620668);
    if (((ulong)puVar12 & 1) != 0) {
      pcStack_80 = FUN_101c8ca74;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1000f6b44;
      puStack_88 = &UNK_1104639d0;
      ppuVar13 = &puStack_a0;
      lStack_78 = lVar1;
      func_0x000107c60bc4(ppuVar13);
      lVar3 = lStack_78;
      func_0x000107c615f0(puVar7);
      func_0x000107c61580(lVar1,2);
      func_0x000107c61574(lVar3);
      func_0x000107c4ee98(puVar7);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c615e8(puVar7);
      func_0x000107c61574(lVar1);
    }
    (*pcVar2)(1);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(puVar7);
    func_0x000107c61170(puVar8);
  }
  return;
}



/* Entry: 101c8ca30; end: 101c8ca73;  */

void FUN_101c8ca30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e10778 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d7bc0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e10778 = puVar1;
  return;
}



/* Entry: 101c8ca74; end: 101c8ca87;  */

void FUN_101c8ca74(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101c8ca88; end: 101c8caab;  */

void FUN_101c8ca88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8caac; end: 101c8cc27;  */

void FUN_101c8caac(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar6 = *unaff_x20;
  func_0x0001000d224c(&puStack_90);
  puVar1 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_90);
    puVar2 = puStack_90;
    if (puStack_90 != (undefined *)0x0) {
      func_0x000107c5fadc(param_1,param_2);
      uVar3 = 0;
      func_0x0001000295c4(0);
      func_0x000107c5ffdc();
      puVar4 = &UNK_110463a08;
      func_0x000107c613fc(&UNK_110463a08,0x38,7);
      *(code **)(puVar4 + 0x10) = param_4;
      *(undefined8 *)(puVar4 + 0x18) = param_5;
      *(undefined8 *)(puVar4 + 0x20) = param_3;
      *(undefined **)(puVar4 + 0x28) = puStack_90;
      *(undefined8 *)(puVar4 + 0x30) = uVar6;
      pcStack_70 = FUN_101c8cdc4;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101043a98;
      puStack_78 = &UNK_110463a20;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c6157c(param_5);
      func_0x000107c615f0(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c5b49c(puVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(puVar1);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar3);
      return;
    }
    func_0x000107c615e8(puVar1);
  }
  (*param_4)(0);
  return;
}



/* Entry: 101c8cc28; end: 101c8cd97;  */

void FUN_101c8cc28(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae5c0;
  if (param_1 == 0) {
    (*param_3)();
  }
  else {
    func_0x000107c61174();
    func_0x000107c61168(puVar1);
    func_0x000107c3d954();
    func_0x000107c61180();
    uVar2 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar3 = &UNK_110463a58;
    func_0x000107c613fc(&UNK_110463a58,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(code **)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_7;
    pcStack_60 = FUN_101c8cdf0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1013b7310;
    puStack_68 = &UNK_110463a70;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_58;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c3d6c4(param_6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101c8cd98; end: 101c8cdc3;  */

void FUN_101c8cd98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8cdc4; end: 101c8cdef;  */

void FUN_101c8cdc4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar5 = PTR_PTR_1126ae5c0;
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  if (param_1 == 0) {
    (*pcVar1)();
  }
  else {
    func_0x000107c61174();
    func_0x000107c61168(puVar5);
    func_0x000107c3d954();
    func_0x000107c61180();
    uVar6 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar7 = &UNK_110463a58;
    func_0x000107c613fc(&UNK_110463a58,0x30,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar2;
    *(code **)(puVar7 + 0x18) = pcVar1;
    *(undefined8 *)(puVar7 + 0x20) = uVar3;
    *(undefined8 *)(puVar7 + 0x28) = uVar9;
    pcStack_60 = FUN_101c8cdf0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1013b7310;
    puStack_68 = &UNK_110463a70;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_58;
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c3d6c4(uVar4);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 101c8cdf0; end: 101c8ce0f;  */

void FUN_101c8cdf0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Entry: 101c8ce10; end: 101c8ce17;  */

void FUN_101c8ce10(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8ce18; end: 101c8d2cf;  */

/* WARNING: Possible PIC construction at 0x000101c8cf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8cf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8cfd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8cfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c8cfe4) */
/* WARNING: Removing unreachable block (ram,0x000101c8d02c) */
/* WARNING: Removing unreachable block (ram,0x000101c8cff8) */
/* WARNING: Removing unreachable block (ram,0x000101c8cfd4) */
/* WARNING: Removing unreachable block (ram,0x000101c8cf44) */
/* WARNING: Removing unreachable block (ram,0x000101c8cf80) */
/* WARNING: Removing unreachable block (ram,0x000101c8d050) */
/* WARNING: Removing unreachable block (ram,0x000101c8cf88) */
/* WARNING: Removing unreachable block (ram,0x000101c8cf70) */
/* WARNING: Removing unreachable block (ram,0x000101c8cf9c) */
/* WARNING: Removing unreachable block (ram,0x000101c8cf34) */
/* WARNING: Removing unreachable block (ram,0x000101c8d014) */
/* WARNING: Removing unreachable block (ram,0x000101c8d04c) */
/* WARNING: Removing unreachable block (ram,0x000101c8d018) */

void FUN_101c8ce18(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126cf818;
  func_0x000107c61168();
  func_0x000107c40364();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101c8d04c);
    (*pcVar5)();
  }
  func_0x000107c5fadc(0x79745f7472656c61,0xea00000000006570);
  uVar3 = 0xe900000000000064;
  uVar4 = 0x656464615f746f6e;
  if (param_1 != 2) {
    uVar3 = 0xea00000000006c61;
    uVar4 = 0x7574756d5f746f6e;
  }
  uVar1 = 0x686374616d5f6f6e;
  if (param_1 != 0) {
    uVar1 = 0x697373696d726570;
  }
  uVar2 = 0xe800000000000000;
  if (param_1 != 0) {
    uVar2 = 0xea00000000006e6f;
  }
  if (param_1 < 2) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5e508(puVar6);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 101c8d2d0; end: 101c8d667;  */

/* WARNING: Possible PIC construction at 0x000101c8d3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c8d5d0) */
/* WARNING: Removing unreachable block (ram,0x000101c8d618) */
/* WARNING: Removing unreachable block (ram,0x000101c8d5e4) */
/* WARNING: Removing unreachable block (ram,0x000101c8d5c0) */
/* WARNING: Removing unreachable block (ram,0x000101c8d534) */
/* WARNING: Removing unreachable block (ram,0x000101c8d568) */
/* WARNING: Removing unreachable block (ram,0x000101c8d644) */
/* WARNING: Removing unreachable block (ram,0x000101c8d570) */
/* WARNING: Removing unreachable block (ram,0x000101c8d560) */
/* WARNING: Removing unreachable block (ram,0x000101c8d584) */
/* WARNING: Removing unreachable block (ram,0x000101c8d524) */
/* WARNING: Removing unreachable block (ram,0x000101c8d410) */
/* WARNING: Removing unreachable block (ram,0x000101c8d478) */
/* WARNING: Removing unreachable block (ram,0x000101c8d47c) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4a4) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4a8) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4b0) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4b4) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4cc) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4d0) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4d8) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4dc) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4e4) */
/* WARNING: Removing unreachable block (ram,0x000101c8d4e8) */
/* WARNING: Removing unreachable block (ram,0x000101c8d400) */
/* WARNING: Removing unreachable block (ram,0x000101c8d600) */
/* WARNING: Removing unreachable block (ram,0x000101c8d640) */
/* WARNING: Removing unreachable block (ram,0x000101c8d604) */

void FUN_101c8d2d0(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126cf818;
  func_0x000107c61168();
  func_0x000107c4035c();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101c8d640);
    (*pcVar5)();
  }
  func_0x000107c5fadc(0x79745f7472656c61,0xea00000000006570);
  uVar3 = 0xe900000000000064;
  uVar4 = 0x656464615f746f6e;
  if (param_1 != 2) {
    uVar3 = 0xea00000000006c61;
    uVar4 = 0x7574756d5f746f6e;
  }
  uVar1 = 0x686374616d5f6f6e;
  if (param_1 != 0) {
    uVar1 = 0x697373696d726570;
  }
  uVar2 = 0xe800000000000000;
  if (param_1 != 0) {
    uVar2 = 0xea00000000006e6f;
  }
  if (param_1 < 2) {
    uVar3 = uVar2;
    uVar4 = uVar1;
  }
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5e508(puVar6);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 101c8d668; end: 101c8d7d3;  */

/* WARNING: Possible PIC construction at 0x000101c8d730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c8d788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c8d744) */
/* WARNING: Removing unreachable block (ram,0x000101c8d78c) */
/* WARNING: Removing unreachable block (ram,0x000101c8d758) */
/* WARNING: Removing unreachable block (ram,0x000101c8d734) */
/* WARNING: Removing unreachable block (ram,0x000101c8d774) */
/* WARNING: Removing unreachable block (ram,0x000101c8d7ac) */
/* WARNING: Removing unreachable block (ram,0x000101c8d778) */

void FUN_101c8d668(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126cf818;
  func_0x000107c61168();
  func_0x000107c40368();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8d7ac);
    (*pcVar1)();
  }
  func_0x000107c5fadc(0x697463656e6e6f63,0xef657079745f6e6f);
  if (param_1 == 0) {
    uVar4 = 0xe400000000000000;
    uVar3 = 0x6c6c6163;
  }
  else {
    if (param_1 != 1) {
      lStack_48 = param_1;
      func_0x000107c60614(&UNK_1106eab20,&lStack_48,&UNK_1106eab20,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8d7d4);
      (*pcVar1)();
    }
    uVar4 = 0xe700000000000000;
    uVar3 = 0x6567617373656d;
  }
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5e508(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101c8d7d4; end: 101c8d7f7;  */

void FUN_101c8d7d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8d7f8; end: 101c8dbab;  */

void FUN_101c8d7f8(ulong param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long extraout_x8;
  undefined8 uVar13;
  undefined8 *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  uStack_a0 = *unaff_x20;
  lVar3 = 0;
  uStack_98 = param_1;
  puStack_90 = param_2;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  uVar9 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar13 = unaff_x20[2];
  lVar4 = 0;
  func_0x000101c8c9e0();
  uVar10 = 0x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar13;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  uVar15 = unaff_x20[8];
  lStack_a8 = lVar4;
  func_0x000107c6157c();
  if ((int)uVar15 == 0) {
    func_0x000101c92fa8();
    uVar7 = uVar10;
    uStack_b0 = uVar13;
    func_0x000101c93144();
    lVar4 = 0x112d36008;
    uStack_c0 = uVar13;
    uStack_b8 = uVar7;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    if (param_4 == (undefined *)0x0) {
LAB_101c8da54:
      puVar8 = puStack_90;
      param_4 = puStack_90;
      func_0x000107c61434();
      uVar6 = uStack_98;
    }
    else {
      puVar5 = param_4;
      uStack_88 = param_3;
      puStack_80 = param_4;
      func_0x000107c61434(param_4);
      func_0x000107c5eb88(uVar9);
      func_0x000100e8b654();
      uVar6 = uVar9;
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c601f0(uVar9,PTR___sSSN_11034da80,puVar5);
      (**(code **)(lVar14 + 8))(uVar9,lVar3);
      func_0x000107c6142c();
      uVar9 = uVar6 & 0xffffffffffff;
      if (((ulong)puVar8 & 0x2000000000000000) != 0) {
        uVar9 = (ulong)puVar8 >> 0x38 & 0xf;
      }
      if (uVar9 == 0) {
        func_0x000107c6142c(puVar8);
        goto LAB_101c8da54;
      }
    }
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    func_0x00010075bbf0();
    uVar13 = uStack_b8;
    *(undefined **)(lVar4 + 0x40) = param_4;
    *(ulong *)(lVar4 + 0x20) = uVar6;
    *(undefined **)(lVar4 + 0x28) = puVar8;
    uVar7 = uStack_c0;
    uVar12 = uStack_b8;
    func_0x000107c5fb00(uStack_c0,uStack_b8,lVar4);
    func_0x000107c6142c(uVar13);
    uVar11 = uVar10;
    uVar13 = uStack_b0;
    goto LAB_101c8daa0;
  }
  func_0x000101c93074();
  lVar4 = 0x112d36008;
  uStack_b0 = uVar13;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  if (param_4 == (undefined *)0x0) {
LAB_101c8d944:
    puVar8 = puStack_90;
    param_4 = puStack_90;
    func_0x000107c61434();
    uVar6 = uStack_98;
  }
  else {
    puVar5 = param_4;
    uStack_88 = param_3;
    puStack_80 = param_4;
    func_0x000107c61434(param_4);
    func_0x000107c5eb88(uVar9);
    func_0x000100e8b654();
    uVar6 = uVar9;
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar9,PTR___sSSN_11034da80,puVar5);
    (**(code **)(lVar14 + 8))(uVar9,lVar3);
    func_0x000107c6142c();
    uVar9 = uVar6 & 0xffffffffffff;
    if (((ulong)puVar8 & 0x2000000000000000) != 0) {
      uVar9 = (ulong)puVar8 >> 0x38 & 0xf;
    }
    if (uVar9 == 0) {
      func_0x000107c6142c(puVar8);
      goto LAB_101c8d944;
    }
  }
  *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(undefined **)(lVar4 + 0x40) = param_4;
  *(ulong *)(lVar4 + 0x20) = uVar6;
  *(undefined **)(lVar4 + 0x28) = puVar8;
  uVar13 = uStack_b0;
  uVar11 = uVar10;
  func_0x000107c5fb00(uStack_b0,uVar10,lVar4);
  uVar12 = uVar11;
  func_0x000107c6142c(uVar10);
  func_0x000101c93210();
  uVar7 = uVar10;
LAB_101c8daa0:
  uVar10 = unaff_x20[9];
  uVar1 = unaff_x20[10];
  FUN_101c8e79c(unaff_x20 + 3,&uStack_88);
  puVar8 = &UNK_110463ad8;
  func_0x000107c613fc(&UNK_110463ad8,0x48,7);
  FUN_101c8e7e0(&uStack_88,puVar8 + 0x10);
  uVar2 = uStack_a0;
  *(undefined8 *)(puVar8 + 0x38) = uVar15;
  *(undefined8 *)(puVar8 + 0x40) = uStack_a0;
  uVar9 = uStack_98;
  FUN_101c8dbac(uStack_98,puStack_90,uVar15,uVar10,uVar1,FUN_101c8e7f8,puVar8);
  func_0x000107c61574(puVar8);
  FUN_101c8e79c(unaff_x20 + 3,&uStack_88);
  puVar8 = &UNK_110463b00;
  func_0x000107c613fc(&UNK_110463b00,0x48,7);
  FUN_101c8e7e0(&uStack_88,puVar8 + 0x10);
  lVar3 = lStack_a8;
  *(undefined8 *)(puVar8 + 0x38) = uVar15;
  *(undefined8 *)(puVar8 + 0x40) = uVar2;
  FUN_101c8c600(uVar13,uVar11,uVar7,uVar12,uVar9,FUN_101c8e840,puVar8);
  func_0x000107c61574(lVar3);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar12);
  func_0x000107c6142c(uVar9);
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 101c8dbac; end: 101c8dff7;  */

undefined **
FUN_101c8dbac(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long extraout_x8;
  ulong uVar11;
  undefined **ppuVar12;
  undefined8 unaff_x20;
  long lVar13;
  ulong uVar14;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar2 + -8);
  lVar10 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar5 = (undefined *)((long)&puStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_a0 = param_1;
  puStack_98 = param_2;
  func_0x000107c5eb78(puVar5);
  func_0x000100e8b654();
  puVar3 = puVar5;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c60200(puVar5,PTR___sSSN_11034da80,lVar10);
  (**(code **)(lVar13 + 8))(puVar5,lVar2);
  puStack_d0 = param_1;
  puStack_c8 = param_2;
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c61434(param_2);
    puVar3 = param_1;
    puVar7 = param_2;
  }
  puVar4 = PTR_PTR_1126d7bc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000101c932dc();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar2);
  func_0x000107c59e18(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = &UNK_110463b28;
  func_0x000107c613fc(&UNK_110463b28,0x50,7);
  *(undefined8 *)(puVar5 + 0x10) = param_6;
  *(undefined8 *)(puVar5 + 0x18) = param_7;
  *(undefined8 *)(puVar5 + 0x20) = unaff_x20;
  *(undefined **)(puVar5 + 0x28) = puVar3;
  *(undefined **)(puVar5 + 0x30) = puVar7;
  *(undefined8 *)(puVar5 + 0x38) = param_3;
  *(undefined8 *)(puVar5 + 0x40) = param_4;
  *(undefined8 *)(puVar5 + 0x48) = param_5;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101c8e84c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = (undefined *)0x42000000;
  puStack_90 = &UNK_100f11160;
  puStack_88 = &UNK_110463b40;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_78;
  func_0x000107c61434(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c61574(puVar7);
  func_0x000107c56ea0(puVar4);
  func_0x000107c60bd0();
  func_0x000101c8e48c();
  lVar10 = ((ulong)*(uint *)(ppuVar12 + 6) + 7 & 0x1fffffff8) + 8;
  func_0x000107c613fc();
  ppuVar12[3] = (undefined *)0x3;
  ppuVar12[2] = (undefined *)0x1;
  ppuVar12[4] = puVar4;
  func_0x000107c61174(puVar4);
  if ((int)param_3 == 0) {
    puVar6 = PTR_PTR_1126d7bc0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar7 = puVar6;
    func_0x000101c933ac();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar10);
    func_0x000107c59e18(puVar6);
    func_0x000107c61170(puVar7);
    puVar7 = &UNK_110463b78;
    lVar10 = 0x30;
    func_0x000107c613fc(&UNK_110463b78,0x30,7);
    puVar5 = puStack_c8;
    *(undefined8 *)(puVar7 + 0x10) = param_6;
    *(undefined8 *)(puVar7 + 0x18) = param_7;
    *(undefined **)(puVar7 + 0x20) = puStack_d0;
    *(undefined **)(puVar7 + 0x28) = puStack_c8;
    pcStack_80 = FUN_101c8e8d0;
    puStack_a0 = puVar3;
    puStack_98 = (undefined *)0x42000000;
    puStack_90 = &UNK_100f11160;
    puStack_88 = &UNK_110463b90;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar9);
    puVar3 = puStack_78;
    func_0x000107c6157c(param_7);
    func_0x000107c61434(puVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c56ea0(puVar6);
    func_0x000107c60bd0(ppuVar9);
    uVar14 = (ulong)ppuVar12 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar14 + 0x10);
    uVar11 = *(ulong *)(uVar14 + 0x18);
    lVar2 = uVar1 + 1;
    func_0x000107c61174();
    ppuVar9 = ppuVar12;
    if (uVar11 >> 1 <= uVar1) {
      ppuVar9 = (undefined **)(ulong)(1 < uVar11);
      lVar10 = lVar2;
      FUN_101c8e4fc(ppuVar9,lVar2,1,ppuVar12);
      uVar14 = (ulong)ppuVar9 & 0xffffffffffffff8;
    }
    *(long *)(uVar14 + 0x10) = lVar2;
    *(undefined **)(uVar14 + uVar1 * 8 + 0x20) = puVar6;
    func_0x000107c61170();
    ppuVar12 = ppuVar9;
  }
  puVar3 = PTR_PTR_1126d7bc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = puVar3;
  FUN_101c9347c();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar10);
  func_0x000107c59e18(puVar3);
  func_0x000107c61170(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5a294(puVar3);
  func_0x000107c61170(puVar7);
  func_0x000107c61174();
  ppuVar9 = ppuVar12;
  if ((ulong)ppuVar12 >> 0x3e != 0) {
    ppuVar8 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuVar12) {
      ppuVar8 = ppuVar12;
    }
    func_0x000107c60480(ppuVar8);
    ppuVar9 = (undefined **)0x0;
    FUN_101c8e4fc(0,(long)ppuVar8 + 1,1,ppuVar12);
  }
  uVar11 = (ulong)ppuVar9 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar11 + 0x10);
  ppuVar12 = ppuVar9;
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
    ppuVar12 = (undefined **)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
    FUN_101c8e4fc(ppuVar12,uVar1 + 1,1,ppuVar9);
    uVar11 = (ulong)ppuVar12 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar11 + uVar1 * 8 + 0x20) = puVar3;
  func_0x000107c61170();
  func_0x000107c61170(puVar4);
  return ppuVar12;
}



/* Entry: 101c8dff8; end: 101c8e04b;  */

void FUN_101c8dff8(ulong param_1,long param_2,undefined8 param_3)

{
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(0,param_3);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8e04c; end: 101c8e437;  */

void FUN_101c8e04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000101c8e210(puVar10,param_1,param_2,param_3,param_4,param_5);
  puVar2 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = uVar6;
    func_0x000100f33384();
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 101c8e438; end: 101c8e4e7;  */

void FUN_101c8e438(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8e4e8; end: 101c8e4fb;  */

void FUN_101c8e4e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e10a28 == (undefined *)0x0 || ((ulong)puRam0000000112e10a28 & 1) != 0) {
    puVar1 = &UNK_10e8a9e18;
    func_0x000107c61518(&UNK_10e8a9e18,0x1c,0,0);
    puRam0000000112e10a28 = puVar1;
  }
  return;
}



/* Entry: 101c8e4fc; end: 101c8e623;  */

ulong FUN_101c8e4fc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8e624);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101c8e624(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c8e620);
      (*pcVar1)();
    }
    FUN_101c8e6a4(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101c8e624; end: 101c8e6a3;  */

undefined * FUN_101c8e624(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000101c8e48c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101c8e6a4; end: 101c8e79b;  */

long FUN_101c8e6a4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c8e798);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101c8e79c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101c8ca30(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_101c8ca30(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101c8e794);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101c8e79c; end: 101c8e7df;  */

long FUN_101c8e79c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101c8e7e0; end: 101c8e7f7;  */

undefined8 * FUN_101c8e7e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101c8e7f8; end: 101c8e83f;  */

void FUN_101c8e7f8(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101c8d2d0(0,param_1,uVar1);
  return;
}



/* Entry: 101c8e840; end: 101c8e84b;  */

void FUN_101c8e840(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28),uVar1,
                      *(undefined8 *)(unaff_x20 + 0x40));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(0,uVar1);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8e84c; end: 101c8e8b3;  */

void FUN_101c8e84c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),0);
  FUN_101c8e04c(uVar3,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Entry: 101c8e8b4; end: 101c8e8cf;  */

void FUN_101c8e8b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8e8d0; end: 101c8e90b;  */

void FUN_101c8e8d0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long unaff_x20;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  puVar7 = *(undefined **)(unaff_x20 + 0x28);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),1);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_78 = lVar13;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar4 + -8);
  lVar2 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar1;
  puStack_68 = puVar7;
  func_0x000107c5eb78(lVar13);
  func_0x000100e8b654();
  lVar5 = lVar13;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c60200(lVar13,PTR___sSSN_11034da80,lVar2);
  (**(code **)(lVar14 + 8))(lVar13,lVar4);
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61434(puVar7);
    lVar5 = lVar1;
    puVar8 = puVar7;
  }
  lStack_70 = 0x2f2f3a6c6574;
  puStack_68 = (undefined *)0xe600000000000000;
  func_0x000107c5fb78(lVar5,puVar8);
  puVar7 = puStack_68;
  func_0x000107c5edd0(puVar15,lStack_70,puStack_68);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar7);
  puVar6 = puVar15;
  (**(code **)(lVar16 + 0x30))(puVar15,1,lVar3);
  lVar2 = lStack_78;
  if ((int)puVar6 == 1) {
    func_0x0001000293e4(puVar15);
  }
  else {
    (**(code **)(lVar16 + 0x20))(lStack_78,puVar15,lVar3);
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5ed90();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar10 = 0;
    func_0x000100dfa6ec(0);
    uVar11 = uVar10;
    func_0x000100f33384();
    puVar12 = puVar9;
    func_0x000107c5f9dc(puVar9,uVar10,PTR___sypN_11034f1a8 + 8,uVar11);
    func_0x000107c6142c(puVar9);
    func_0x000107c4de70(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar12);
    (**(code **)(lVar16 + 8))(lVar2,lVar3);
  }
  return;
}



/* Entry: 101c8e90c; end: 101c8e913;  */

void FUN_101c8e90c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8e914; end: 101c8eb8f;  */

void FUN_101c8e914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined1 auStack_88 [40];
  
  uVar11 = *unaff_x20;
  uStack_a0 = unaff_x20[2];
  lVar2 = 0;
  func_0x000101c8c9e0();
  uVar7 = 0x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_a0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  uVar10 = unaff_x20[8];
  func_0x000107c6157c();
  if ((int)uVar10 == 0) {
    FUN_101c93628();
    uVar3 = uStack_a0;
    uVar8 = uVar7;
    func_0x000101c937c8();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    lVar5 = lVar4;
    func_0x00010075bbf0();
    *(long *)(lVar4 + 0x40) = lVar5;
    *(undefined8 *)(lVar4 + 0x20) = param_3;
    *(undefined8 *)(lVar4 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    uVar9 = uVar8;
    func_0x000107c5fb00(uVar3,uVar8,lVar4);
    func_0x000107c6142c(uVar8);
    uVar8 = uVar7;
  }
  else {
    func_0x000101c936fc();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
    lVar5 = lVar4;
    func_0x00010075bbf0();
    *(long *)(lVar4 + 0x40) = lVar5;
    *(undefined8 *)(lVar4 + 0x20) = param_3;
    *(undefined8 *)(lVar4 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    uVar8 = uVar7;
    func_0x000107c5fb00(uStack_a0,uVar7,lVar4);
    uVar9 = uVar8;
    func_0x000107c6142c(uVar7);
    func_0x000101c93894();
    uVar3 = uVar7;
  }
  uVar7 = unaff_x20[9];
  uVar1 = unaff_x20[10];
  FUN_101c8e79c(unaff_x20 + 3,auStack_88);
  puVar6 = &UNK_110463bc8;
  func_0x000107c613fc(&UNK_110463bc8,0x48,7);
  FUN_101c8e7e0(auStack_88,puVar6 + 0x10);
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  *(undefined8 *)(puVar6 + 0x40) = uVar11;
  FUN_101c8ec80(uVar7,uVar1,param_1,param_2,uVar10,FUN_101c8ec38,puVar6);
  func_0x000107c61574(puVar6);
  FUN_101c8e79c(unaff_x20 + 3,auStack_88);
  puVar6 = &UNK_110463bf0;
  func_0x000107c613fc(&UNK_110463bf0,0x48,7);
  FUN_101c8e7e0(auStack_88,puVar6 + 0x10);
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  *(undefined8 *)(puVar6 + 0x40) = uVar11;
  FUN_101c8c600(uStack_a0,uVar8,uVar3,uVar9,uVar7,FUN_101c8f01c,puVar6);
  func_0x000107c61574(lVar2);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar7);
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 101c8eb90; end: 101c8ebe3;  */

void FUN_101c8eb90(ulong param_1,long param_2,undefined8 param_3)

{
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(2,param_3);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8ebe4; end: 101c8ec37;  */

void FUN_101c8ebe4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8ec38; end: 101c8ec7f;  */

void FUN_101c8ec38(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101c8d2d0(2,param_1,uVar1);
  return;
}



/* Entry: 101c8ec80; end: 101c8f01b;  */

undefined **
FUN_101c8ec80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = PTR_PTR_1126d7bc0;
  uVar9 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar3;
  func_0x000101c93960();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar9);
  func_0x000107c59e18(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = &UNK_110463c18;
  func_0x000107c613fc(&UNK_110463c18,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  *(undefined8 *)(puVar4 + 0x18) = param_7;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101c8f028;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f11160;
  puStack_88 = &UNK_110463c30;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar4 = puStack_78;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea0(puVar3);
  func_0x000107c60bd0();
  func_0x000101c8e48c();
  lVar10 = ((ulong)*(uint *)(ppuVar8 + 6) + 7 & 0x1fffffff8) + 8;
  func_0x000107c613fc();
  ppuVar8[3] = (undefined *)0x3;
  ppuVar8[2] = (undefined *)0x1;
  ppuVar8[4] = puVar3;
  func_0x000107c61174(puVar3);
  ppuVar12 = ppuVar8;
  if (param_5 == 0) {
    puVar5 = PTR_PTR_1126d7bc0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = puVar5;
    func_0x000101c933ac();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar10);
    func_0x000107c59e18(puVar5);
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_110463c68;
    lVar10 = 0x30;
    func_0x000107c613fc(&UNK_110463c68,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = param_7;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    pcStack_80 = FUN_101c8f0b8;
    puStack_a0 = puVar7;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f11160;
    puStack_88 = &UNK_110463c80;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_78;
    func_0x000107c6157c(param_7);
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar4);
    func_0x000107c56ea0(puVar5);
    func_0x000107c60bd0(ppuVar6);
    uVar13 = (ulong)ppuVar8 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar13 + 0x10);
    uVar11 = *(ulong *)(uVar13 + 0x18);
    lVar1 = uVar2 + 1;
    func_0x000107c61174();
    if (uVar11 >> 1 <= uVar2) {
      ppuVar12 = (undefined **)(ulong)(1 < uVar11);
      lVar10 = lVar1;
      FUN_101c8e4fc(ppuVar12,lVar1,1,ppuVar8);
      uVar13 = (ulong)ppuVar12 & 0xffffffffffffff8;
    }
    *(long *)(uVar13 + 0x10) = lVar1;
    *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puVar5;
    func_0x000107c61170();
  }
  puVar4 = PTR_PTR_1126d7bc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = puVar4;
  func_0x000101c93a28();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar10);
  func_0x000107c59e18(puVar4);
  func_0x000107c61170(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5a294(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61174();
  ppuVar8 = ppuVar12;
  if ((ulong)ppuVar12 >> 0x3e != 0) {
    ppuVar6 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff8);
    if ((undefined **)0x7fffffffffffffff < ppuVar12) {
      ppuVar6 = ppuVar12;
    }
    func_0x000107c60480(ppuVar6);
    ppuVar8 = (undefined **)0x0;
    FUN_101c8e4fc(0,(long)ppuVar6 + 1,1,ppuVar12);
  }
  uVar11 = (ulong)ppuVar8 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar11 + 0x10);
  ppuVar12 = ppuVar8;
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
    ppuVar12 = (undefined **)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
    FUN_101c8e4fc(ppuVar12,uVar2 + 1,1,ppuVar8);
    uVar11 = (ulong)ppuVar12 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar11 + 0x10) = uVar2 + 1;
  *(undefined **)(uVar11 + uVar2 * 8 + 0x20) = puVar4;
  func_0x000107c61170();
  func_0x000107c61170(puVar3);
  return ppuVar12;
}



/* Entry: 101c8f01c; end: 101c8f027;  */

void FUN_101c8f01c(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28),uVar1,
                      *(undefined8 *)(unaff_x20 + 0x40));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(2,uVar1);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8f028; end: 101c8f063;  */

void FUN_101c8f028(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),4);
  (*pcVar1)();
  return;
}



/* Entry: 101c8f064; end: 101c8f07f;  */

void FUN_101c8f064(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8f080; end: 101c8f0b7;  */

void FUN_101c8f080(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c8f0b8; end: 101c8f0f3;  */

void FUN_101c8f0b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long unaff_x20;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  puVar7 = *(undefined **)(unaff_x20 + 0x28);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),1);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_78 = lVar13;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar4 + -8);
  lVar2 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar1;
  puStack_68 = puVar7;
  func_0x000107c5eb78(lVar13);
  func_0x000100e8b654();
  lVar5 = lVar13;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c60200(lVar13,PTR___sSSN_11034da80,lVar2);
  (**(code **)(lVar14 + 8))(lVar13,lVar4);
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61434(puVar7);
    lVar5 = lVar1;
    puVar8 = puVar7;
  }
  lStack_70 = 0x2f2f3a6c6574;
  puStack_68 = (undefined *)0xe600000000000000;
  func_0x000107c5fb78(lVar5,puVar8);
  puVar7 = puStack_68;
  func_0x000107c5edd0(puVar15,lStack_70,puStack_68);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar7);
  puVar6 = puVar15;
  (**(code **)(lVar16 + 0x30))(puVar15,1,lVar3);
  lVar2 = lStack_78;
  if ((int)puVar6 == 1) {
    func_0x0001000293e4(puVar15);
  }
  else {
    (**(code **)(lVar16 + 0x20))(lStack_78,puVar15,lVar3);
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5ed90();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar10 = 0;
    func_0x000100dfa6ec(0);
    uVar11 = uVar10;
    func_0x000100f33384();
    puVar12 = puVar9;
    func_0x000107c5f9dc(puVar9,uVar10,PTR___sypN_11034f1a8 + 8,uVar11);
    func_0x000107c6142c(puVar9);
    func_0x000107c4de70(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar12);
    (**(code **)(lVar16 + 8))(lVar2,lVar3);
  }
  return;
}



/* Entry: 101c8f0f4; end: 101c8f0fb;  */

void FUN_101c8f0f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8f0fc; end: 101c8f2cb;  */

void FUN_101c8f0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [40];
  
  uVar8 = *unaff_x20;
  uVar7 = unaff_x20[2];
  lVar1 = 0;
  func_0x000101c8c9e0();
  uVar5 = 0x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x000107c6157c(uVar7);
  func_0x000101c93af4();
  lVar2 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  lVar3 = lVar2;
  func_0x00010075bbf0();
  *(long *)(lVar2 + 0x40) = lVar3;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  func_0x000107c61434(param_4);
  uVar6 = uVar5;
  func_0x000107c5fb00(uVar7,uVar5,lVar2);
  func_0x000107c6142c(uVar5);
  uVar5 = unaff_x20[8];
  FUN_101c8e79c(unaff_x20 + 3,auStack_88);
  puVar4 = &UNK_110463cb8;
  func_0x000107c613fc(&UNK_110463cb8,0x48,7);
  FUN_101c8e7e0(auStack_88,puVar4 + 0x10);
  *(undefined8 *)(puVar4 + 0x38) = uVar5;
  *(undefined8 *)(puVar4 + 0x40) = uVar8;
  FUN_101c8f3b4(param_1,param_2,FUN_101c8f36c,puVar4);
  func_0x000107c61574(puVar4);
  FUN_101c8e79c(unaff_x20 + 3,auStack_88);
  puVar4 = &UNK_110463ce0;
  func_0x000107c613fc(&UNK_110463ce0,0x48,7);
  FUN_101c8e7e0(auStack_88,puVar4 + 0x10);
  *(undefined8 *)(puVar4 + 0x38) = uVar5;
  *(undefined8 *)(puVar4 + 0x40) = uVar8;
  FUN_101c8c600(0,0,uVar7,uVar6,param_1,FUN_101c8f538,puVar4);
  func_0x000107c61574(lVar1);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(param_1);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 101c8f2cc; end: 101c8f31f;  */

void FUN_101c8f2cc(ulong param_1,long param_2,undefined8 param_3)

{
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(3,param_3);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8f320; end: 101c8f36b;  */

void FUN_101c8f320(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8f36c; end: 101c8f3b3;  */

void FUN_101c8f36c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101c8d2d0(3,param_1,uVar1);
  return;
}



/* Entry: 101c8f3b4; end: 101c8f537;  */

void FUN_101c8f3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126d7bc0;
  uVar5 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000101c933ac();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_110463d08;
  uVar5 = 0x30;
  func_0x000107c613fc(&UNK_110463d08,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  pcStack_60 = FUN_101c8f544;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f11160;
  puStack_68 = &UNK_110463d20;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126d7bc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar2;
  func_0x000101c93bc0();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar2);
  func_0x000107c61170();
  func_0x000101c8e48c();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  *(undefined **)(puVar4 + 0x28) = puVar2;
  return;
}



/* Entry: 101c8f538; end: 101c8f543;  */

void FUN_101c8f538(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28),uVar1,
                      *(undefined8 *)(unaff_x20 + 0x40));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(3,uVar1);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8f544; end: 101c8f57f;  */

void FUN_101c8f544(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long unaff_x20;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  puVar7 = *(undefined **)(unaff_x20 + 0x28);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),1);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_78 = lVar13;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar4 + -8);
  lVar2 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar1;
  puStack_68 = puVar7;
  func_0x000107c5eb78(lVar13);
  func_0x000100e8b654();
  lVar5 = lVar13;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c60200(lVar13,PTR___sSSN_11034da80,lVar2);
  (**(code **)(lVar14 + 8))(lVar13,lVar4);
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61434(puVar7);
    lVar5 = lVar1;
    puVar8 = puVar7;
  }
  lStack_70 = 0x2f2f3a6c6574;
  puStack_68 = (undefined *)0xe600000000000000;
  func_0x000107c5fb78(lVar5,puVar8);
  puVar7 = puStack_68;
  func_0x000107c5edd0(puVar15,lStack_70,puStack_68);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar7);
  puVar6 = puVar15;
  (**(code **)(lVar16 + 0x30))(puVar15,1,lVar3);
  lVar2 = lStack_78;
  if ((int)puVar6 == 1) {
    func_0x0001000293e4(puVar15);
  }
  else {
    (**(code **)(lVar16 + 0x20))(lStack_78,puVar15,lVar3);
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5ed90();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar10 = 0;
    func_0x000100dfa6ec(0);
    uVar11 = uVar10;
    func_0x000100f33384();
    puVar12 = puVar9;
    func_0x000107c5f9dc(puVar9,uVar10,PTR___sypN_11034f1a8 + 8,uVar11);
    func_0x000107c6142c(puVar9);
    func_0x000107c4de70(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar12);
    (**(code **)(lVar16 + 8))(lVar2,lVar3);
  }
  return;
}



/* Entry: 101c8f580; end: 101c8f59b;  */

void FUN_101c8f580(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8f59c; end: 101c8f707;  */

void FUN_101c8f59c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [40];
  
  uVar7 = *unaff_x20;
  uVar8 = unaff_x20[2];
  lVar1 = 0;
  func_0x000101c8c9e0();
  uVar5 = 0x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x000107c6157c(uVar8);
  func_0x000101c93c8c();
  uVar9 = unaff_x20[8];
  uVar2 = uVar8;
  uVar6 = uVar5;
  if ((int)uVar9 == 0) {
    func_0x000101c93d58();
  }
  else {
    func_0x000101c93e24();
  }
  FUN_101c8e79c(unaff_x20 + 3,auStack_88);
  puVar3 = &UNK_110463d58;
  func_0x000107c613fc(&UNK_110463d58,0x48,7);
  FUN_101c8e7e0(auStack_88,puVar3 + 0x10);
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  *(undefined8 *)(puVar3 + 0x40) = uVar7;
  pcVar4 = FUN_101c8f948;
  FUN_101c8f708(FUN_101c8f948,puVar3);
  func_0x000107c61574(puVar3);
  FUN_101c8e79c(unaff_x20 + 3,auStack_88);
  puVar3 = &UNK_110463d80;
  func_0x000107c613fc(&UNK_110463d80,0x48,7);
  FUN_101c8e7e0(auStack_88,puVar3 + 0x10);
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  *(undefined8 *)(puVar3 + 0x40) = uVar7;
  FUN_101c8c600(uVar8,uVar5,uVar2,uVar6,pcVar4,FUN_101c8f990,puVar3);
  func_0x000107c61574(lVar1);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(pcVar4);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 101c8f708; end: 101c8f8a7;  */

void FUN_101c8f708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126d7bc0;
  uVar5 = param_2;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000101c93ef0();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_110463da8;
  uVar5 = 0x28;
  func_0x000107c613fc(&UNK_110463da8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  pcStack_60 = FUN_101c8f99c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f11160;
  puStack_68 = &UNK_110463dc0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126d7bc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = puVar2;
  FUN_101c9347c();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar2);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  func_0x000107c5a294(puVar2);
  func_0x000107c61170();
  func_0x000101c8e48c();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  *(undefined **)(puVar4 + 0x28) = puVar2;
  return;
}



/* Entry: 101c8f8a8; end: 101c8f8fb;  */

void FUN_101c8f8a8(ulong param_1,long param_2,undefined8 param_3)

{
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(1,param_3);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8f8fc; end: 101c8f947;  */

void FUN_101c8f8fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c8f948; end: 101c8f98f;  */

void FUN_101c8f948(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101c8d2d0(1,param_1,uVar1);
  return;
}



/* Entry: 101c8f990; end: 101c8f99b;  */

void FUN_101c8f990(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28),uVar1,
                      *(undefined8 *)(unaff_x20 + 0x40));
  if ((param_1 & 1) == 0) {
    func_0x000101c8d074(1,uVar1);
  }
  else {
    FUN_101c8ce18();
  }
  return;
}



/* Entry: 101c8f99c; end: 101c8f9bf;  */

void FUN_101c8f99c(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  (**(code **)(unaff_x20 + 0x10))(5);
  lVar1 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(*(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  func_0x000107c5edd0(puVar10);
  func_0x000107c6142c(puVar3);
  puVar2 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = uVar6;
    func_0x000100f33384();
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 101c8f9c0; end: 101c8f9db;  */

void FUN_101c8f9c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c8f9dc; end: 101c8fb8b;  */

void FUN_101c8f9dc(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(*(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  func_0x000107c5edd0(puVar10);
  func_0x000107c6142c(puVar3);
  puVar2 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = uVar6;
    func_0x000100f33384();
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 101c8fb8c; end: 101c8fe0f;  */

void FUN_101c8fb8c(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_78 = lVar12;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar3 + -8);
  lVar1 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = param_1;
  puStack_68 = param_2;
  func_0x000107c5eb78(lVar12);
  func_0x000100e8b654();
  lVar4 = lVar12;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c60200(lVar12,PTR___sSSN_11034da80,lVar1);
  (**(code **)(lVar13 + 8))(lVar12,lVar3);
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c61434(param_2);
    lVar4 = param_1;
    puVar6 = param_2;
  }
  lStack_70 = 0x2f2f3a6c6574;
  puStack_68 = (undefined *)0xe600000000000000;
  func_0x000107c5fb78(lVar4,puVar6);
  puVar7 = puStack_68;
  func_0x000107c5edd0(puVar14,lStack_70,puStack_68);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puVar7);
  puVar5 = puVar14;
  (**(code **)(lVar15 + 0x30))(puVar14,1,lVar2);
  lVar1 = lStack_78;
  if ((int)puVar5 == 1) {
    func_0x0001000293e4(puVar14);
  }
  else {
    (**(code **)(lVar15 + 0x20))(lStack_78,puVar14,lVar2);
    puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5ed90();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar9 = 0;
    func_0x000100dfa6ec(0);
    uVar10 = uVar9;
    func_0x000100f33384();
    puVar11 = puVar8;
    func_0x000107c5f9dc(puVar8,uVar9,PTR___sypN_11034f1a8 + 8,uVar10);
    func_0x000107c6142c(puVar8);
    func_0x000107c4de70(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar11);
    (**(code **)(lVar15 + 8))(lVar1,lVar2);
  }
  return;
}



/* Entry: 101c8fe10; end: 101c8ff07;  */

undefined1  [16] FUN_101c8fe10(undefined8 param_1,ulong param_2,undefined *param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_PTR_1126aed98;
  func_0x000107c61168();
  func_0x000107c5fadc(param_1);
  func_0x000107c44250();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    param_2 = 0xe000000000000000;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
  }
  uVar1 = (ulong)puVar3 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c(param_2);
    uVar1 = (ulong)param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      param_2 = 0xe200000000000000;
      puVar3 = (undefined *)0x5a5a;
    }
    else {
      func_0x000107c61434(param_4);
      param_2 = param_4;
      puVar3 = param_3;
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar3;
  return auVar4;
}



/* Entry: 101c8ff08; end: 101c90b1b;  */

undefined *
FUN_101c8ff08(ulong param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             undefined *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puStack_98;
  undefined *puStack_70;
  
  puVar3 = PTR_PTR_1126aed98;
  func_0x000107c61168();
  uVar16 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar4 = param_4;
  puStack_70 = param_5;
  func_0x000107c5fadc(param_4);
  puVar5 = puVar3;
  func_0x000107c43880();
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar4);
  if (puVar5 == (undefined *)0x0) {
    puStack_98 = (undefined *)0x0;
    puStack_70 = (undefined *)0x0;
  }
  else {
    puStack_98 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
  }
  if ((ulong)param_3 >> 0x3e == 0) {
    puVar5 = *(undefined **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)param_3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_3) {
      puVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (puVar5 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_3 & 0xffffffffffffff8) + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101c902d8);
          (*pcVar1)();
        }
        puVar6 = *(undefined **)(param_3 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar17;
        func_0x00010103193c(puVar17,param_3);
      }
      bVar2 = SCARRY8((long)puVar17,1);
      puVar17 = puVar17 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c902d4);
        (*pcVar1)();
      }
      puVar7 = puVar6;
      func_0x000107c40328();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
LAB_101c900b4:
        uVar16 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar8 = puVar7;
        func_0x000107c4e6d0();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        if (puVar8 == (undefined *)0x0) goto LAB_101c900b4;
        puVar7 = puVar8;
        func_0x000107c5fc54(puVar8,PTR___sSSN_11034da80);
        func_0x000107c61170(puVar8);
        uVar16 = *(ulong *)(puVar7 + 0x10);
      }
      if (uVar16 != 0) {
        uVar14 = 0;
        puVar15 = (ulong *)(puVar7 + 0x28);
        do {
          if (*(ulong *)(puVar7 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101c902d0);
            (*pcVar1)();
          }
          uVar12 = puVar15[-1];
          puVar8 = (undefined *)*puVar15;
          func_0x000107c61434(puVar8);
          uVar9 = uVar12;
          func_0x000107c5fadc(uVar12,puVar8);
          uVar4 = param_4;
          puVar13 = param_5;
          func_0x000107c5fadc(param_4);
          puVar10 = puVar3;
          func_0x000107c43880();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar4);
          if (puVar10 != (undefined *)0x0) {
            puVar11 = puVar10;
            func_0x000107c5faec();
            func_0x000107c61170(puVar10);
            uVar9 = (ulong)puVar11 & 0xffffffffffff;
            if (((ulong)puVar13 & 0x2000000000000000) != 0) {
              uVar9 = (ulong)puVar13 >> 0x38 & 0xf;
            }
            if (uVar9 != 0 && puStack_70 != (undefined *)0x0) {
              if ((puVar11 == puStack_98) && (puStack_70 == puVar13)) {
                func_0x000107c6142c(puVar8);
                puVar8 = puVar7;
                puVar7 = puVar13;
              }
              else {
                func_0x000107c605b8(puVar11,puVar13,puStack_98,puStack_70,0);
                func_0x000107c6142c(puVar13);
                if (((ulong)puVar11 & 1) == 0) goto LAB_101c901d0;
              }
              func_0x000107c6142c(puVar8);
              func_0x000107c6142c(puVar7);
              goto LAB_101c902a4;
            }
            func_0x000107c6142c(puVar13);
          }
LAB_101c901d0:
          uVar9 = uVar12 & 0xffffffffffff;
          if (((ulong)puVar8 & 0x2000000000000000) != 0) {
            uVar9 = (ulong)puVar8 >> 0x38 & 0xf;
          }
          if (uVar9 != 0) {
            if ((uVar12 == param_1) && (puVar8 == param_2)) {
              func_0x000107c6142c(puVar7);
              puVar7 = puStack_70;
            }
            else {
              func_0x000107c605b8(uVar12,puVar8,param_1,param_2,0);
              func_0x000107c6142c(puVar8);
              puVar8 = puStack_70;
              if ((uVar12 & 1) == 0) goto LAB_101c900d8;
            }
            puStack_70 = puVar8;
            func_0x000107c6142c(puVar7);
LAB_101c902a4:
            func_0x000107c6142c(puStack_70);
            return puVar6;
          }
          func_0x000107c6142c(puVar8);
LAB_101c900d8:
          uVar14 = uVar14 + 1;
          puVar15 = puVar15 + 2;
        } while (uVar16 != uVar14);
      }
      func_0x000107c61170(puVar6);
      func_0x000107c6142c(puVar7);
    } while (puVar17 != puVar5);
  }
  func_0x000107c6142c(puStack_70);
  return (undefined *)0x0;
}



/* Entry: 101c90b1c; end: 101c90bd3;  */

/* WARNING: Possible PIC construction at 0x000101c90bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c90bb8) */

void FUN_101c90b1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = uVar3;
  func_0x000100f33384();
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10040b8e0; end: 10040b917;  */

void FUN_10040b8e0(undefined8 param_1)

{
  if (lRam0000000112dd01a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656778);
  return;
}



/* Entry: 10040b918; end: 10040b9f3;  */

void FUN_10040b918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10040b8e0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10040ba38();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10040ba6c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10040b9f4; end: 10040ba37;  */

void FUN_10040b9f4(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 10040ba38; end: 10040ba6b;  */

void FUN_10040ba38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10040ba6c; end: 10040bb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10040ba6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  puVar1 = &UNK_11040da18;
  func_0x000107c613fc(&UNK_11040da18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  FUN_1000285a8(0x112dd0170,&UNK_10d991820);
  func_0x000107c613fc();
  func_0x000107c61580(uVar4,2);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  puVar2 = &UNK_1018d88f4;
  FUN_1000bdd8c(&UNK_1018d88f4,puVar1);
  uVar3 = 0;
  FUN_10020da3c(0);
  func_0x000107c610f8();
  FUN_10040bb64(puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar5);
  return puVar2;
}



/* Entry: 10040bb60; end: 10040bb63;  */

void FUN_10040bb60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040bb64; end: 10040bbbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040bb64(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dd05e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dd05e0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040bbbc; end: 10040bbef;  */

void FUN_10040bbbc(void)

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



/* Entry: 10040bbf0; end: 10040bbf7;  */

void FUN_10040bbf0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040bbf8; end: 10040bc4b;  */

void FUN_10040bbf8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040bc4c; end: 10040bc5b;  */

void FUN_10040bc4c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022e744();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_10040be04(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_10040be88();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10040be9c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10040bc5c; end: 10040be03;  */

void FUN_10040bc5c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022e744();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_10040be04(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10040be88();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10040be9c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10040be04; end: 10040be87;  */

void FUN_10040be04(undefined8 param_1)

{
  if (lRam000000011347a730 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656bbc);
  return;
}



/* Entry: 10040be88; end: 10040be9b;  */

void FUN_10040be88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 10040be9c; end: 10040bf4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040be9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11304a480);
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_10040bf78();
  puVar3 = &UNK_11040e3b8;
  func_0x000107c613fc(&UNK_11040e3b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  FUN_1000285a8(0x112dd07e0,&UNK_10d991cc0);
  func_0x000107c613fc();
  puVar4 = &UNK_1018e162c;
  FUN_1000bdd8c(&UNK_1018e162c,puVar3);
  FUN_10022edc4(0);
  func_0x000107c610f8();
  FUN_10040c0fc(puVar4);
  return;
}



/* Entry: 10040bf4c; end: 10040bf77;  */

void FUN_10040bf4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040bf78; end: 10040bf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10040bf78(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_113044100;
  lVar2 = *(long *)(unaff_x20 + _DAT_113044100);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_1130440f8));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10040bf8c; end: 10040c0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10040bf8c(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_48;
  
  puVar4 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar6 = *puVar4;
  if ((uVar6 & 3) != 0) {
    uVar6 = (uVar6 & 0xfffffffffffffffc) + 4;
    *puVar4 = uVar6;
  }
  uVar5 = uVar6 + 4;
  lVar7 = (long)_DAT_112796260;
  if (*(ulong *)(param_1 + lVar7) < uVar5) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    lVar7 = (long)_DAT_112796260;
    puVar4 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar6 = *puVar4;
    uVar5 = uVar6 + 4;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + _DAT_112796258) + uVar6);
  *puVar4 = uVar5;
  iVar1 = 0;
  if ((uVar2 & 3) != 0) {
    iVar1 = 4 - (uVar2 & 3);
  }
  if (*(ulong *)(param_1 + lVar7) < uVar5 + (iVar1 + uVar2)) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  }
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x000107c412e4();
  **(long **)(param_1 + _DAT_11279625c) =
       **(long **)(param_1 + _DAT_11279625c) + (ulong)(iVar1 + uVar2);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112796264);
  puStack_48 = puVar3;
  func_0x000107c60780(uVar8);
  func_0x000107c60768(uVar8,&puStack_48,8);
  return puVar3;
}



/* Entry: 10040c0fc; end: 10040c153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040c0fc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113011590) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113011588) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040c154; end: 10040c197;  */

void FUN_10040c154(void)

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



/* Entry: 10040c198; end: 10040c19f;  */

void FUN_10040c198(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040c1a0; end: 10040c1f3;  */

void FUN_10040c1a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040c1f4; end: 10040c1fb;  */

void FUN_10040c1f4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b0ef0();
  func_0x000107c613fc();
  FUN_10040c2ac(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_10040c328();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_10040c334();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10040c1fc; end: 10040c2ab;  */

void FUN_10040c1fc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001b0ef0();
  func_0x000107c613fc();
  FUN_10040c2ac(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_10040c328();
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar3 = uVar2;
  func_0x000107c6157c();
  FUN_10040c334();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *param_1 = param_2;
  return;
}



/* Entry: 10040c2ac; end: 10040c327;  */

void FUN_10040c2ac(undefined8 param_1)

{
  if (lRam0000000112dcbaa0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e654af0);
  return;
}



/* Entry: 10040c328; end: 10040c333;  */

void FUN_10040c328(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10040c334; end: 10040c423;  */

undefined * FUN_10040c334(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_1000285a8(0x112dcba60,&UNK_10d98e150);
  func_0x000107c613fc();
  puVar1 = &UNK_1017835e4;
  FUN_1000bdd8c(&UNK_1017835e4,0);
  uVar2 = 0x112dcba68;
  FUN_1000285a8(0x112dcba68,&UNK_10d98e158);
  puVar3 = &UNK_101783614;
  FUN_1000cb480(&UNK_101783614,0,uVar2);
  uVar2 = 0x112dcba70;
  FUN_1000285a8(0x112dcba70,&UNK_10d98e160);
  puVar4 = &UNK_101783628;
  FUN_1000cb480(&UNK_101783628,0,uVar2);
  puVar5 = puVar4;
  FUN_1003a5b88();
  func_0x000107c61574(puVar4);
  FUN_1001d71dc(0);
  func_0x000107c610f8();
  FUN_10040c444(puVar3,puVar5);
  func_0x000107c61574(puVar1);
  return puVar3;
}



/* Entry: 10040c424; end: 10040c443;  */

void FUN_10040c424(void)

{
  func_0x000107c61168(&PTR_PTR_1127e9af0);
  return;
}



/* Entry: 10040c444; end: 10040c4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040c444(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113010888) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010890) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040c4a8; end: 10040c60b; -[SCFideliusUserIdentity initWithCoder:] */

undefined1 * FUN_10040c4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126eafd0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x000107c41478(param_3);
    func_0x000107c61180();
    func_0x000107c55064(puVar1);
    func_0x000107c61170(uVar3);
    uVar3 = param_3;
    func_0x000107c41478(param_3);
    func_0x000107c61180();
    func_0x000107c57100(puVar1);
    func_0x000107c61170(uVar3);
    uVar3 = param_3;
    func_0x000107c41478(param_3);
    func_0x000107c61180();
    func_0x000107c55334(puVar1);
    func_0x000107c61170(uVar3);
    uVar3 = param_3;
    func_0x000107c41478(param_3);
    func_0x000107c61180();
    func_0x000107c5593c(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c41470(param_3);
    func_0x000107c5a4e0(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c40948();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10040c60c; end: 10040c613;  */

void FUN_10040c60c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040c614; end: 10040c667;  */

void FUN_10040c614(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040c668; end: 10040c673;  */

void FUN_10040c668(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100211244();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10040c7dc(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10040c858();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10040c99c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10040c674; end: 10040c7db;  */

void FUN_10040c674(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100211244();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10040c7dc(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10040c858();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10040c99c();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10040c7dc; end: 10040c857;  */

void FUN_10040c7dc(undefined8 param_1)

{
  if (lRam0000000112dd2b58 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e657fa0);
  return;
}



/* Entry: 10040c858; end: 10040c96b;  */

void FUN_10040c858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &UNK_110411e30;
  func_0x000107c613fc(&UNK_110411e30,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  FUN_1000285a8(0x112dd2b20,&UNK_10d9950b0);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar2 = &UNK_101918358;
  FUN_1000bdd8c(&UNK_101918358,puVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  puVar1 = &UNK_110411e58;
  func_0x000107c613fc(&UNK_110411e58,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar3 = 0x112dd2b28;
  FUN_1000285a8(0x112dd2b28,&UNK_10d9950b8);
  func_0x000107c613fc();
  puVar2 = &UNK_101918354;
  FUN_1000bdd8c(&UNK_101918354,puVar1,uVar3);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  return;
}



/* Entry: 10040c96c; end: 10040c98f;  */

void FUN_10040c96c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040c990; end: 10040c99b;  */

void FUN_10040c990(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040c99c; end: 10040ca5f;  */

void FUN_10040c99c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100213a7c(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x00010040c9f0(uVar1,uVar2);
  return;
}



/* Entry: 10040ca60; end: 10040cad3;  */

void FUN_10040ca60(void)

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



/* Entry: 10040cad4; end: 10040cb73;  */

void FUN_10040cad4(long param_1)

{
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_160 = PTR___sBOWV_11034d658 + 0x40;
  puStack_b0 = &UNK_10d990d38;
  puStack_30 = &UNK_10d990d38;
  puStack_28 = &UNK_10d990d38;
  puStack_158 = puStack_160;
  puStack_150 = puStack_160;
  puStack_148 = puStack_160;
  puStack_140 = puStack_160;
  puStack_138 = puStack_160;
  puStack_130 = puStack_160;
  puStack_128 = puStack_160;
  puStack_120 = puStack_160;
  puStack_118 = puStack_160;
  puStack_110 = puStack_160;
  puStack_108 = puStack_160;
  puStack_100 = puStack_160;
  puStack_f8 = puStack_160;
  puStack_f0 = puStack_160;
  puStack_e8 = puStack_160;
  puStack_e0 = puStack_160;
  puStack_d8 = puStack_160;
  puStack_d0 = puStack_160;
  puStack_c8 = puStack_160;
  puStack_c0 = puStack_160;
  puStack_b8 = puStack_160;
  puStack_a8 = puStack_160;
  puStack_a0 = puStack_160;
  puStack_98 = puStack_160;
  puStack_90 = puStack_160;
  puStack_88 = puStack_160;
  puStack_80 = puStack_160;
  puStack_78 = puStack_160;
  puStack_70 = puStack_160;
  puStack_68 = puStack_160;
  puStack_60 = puStack_160;
  puStack_58 = puStack_160;
  puStack_50 = puStack_160;
  puStack_48 = puStack_160;
  puStack_40 = puStack_160;
  puStack_38 = puStack_160;
  func_0x000107c61524(param_1,0x100,0x28,&puStack_160,param_1 + 0x70);
  return;
}



/* Entry: 10040cb74; end: 10040cc3f;  */

void FUN_10040cb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x80) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_34;
  *(undefined8 *)(unaff_x20 + 0x90) = param_30;
  *(undefined8 *)(unaff_x20 + 0x98) = param_31;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_32;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_14;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_15;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_16;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_28;
  *(undefined8 *)(unaff_x20 + 200) = param_17;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_29;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_22;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_23;
  *(undefined8 *)(unaff_x20 + 0x20) = param_27;
  *(undefined8 *)(unaff_x20 + 0x108) = param_33;
  *(undefined8 *)(unaff_x20 + 0x100) = param_25;
  *(undefined8 *)(unaff_x20 + 0x110) = param_24;
  *(undefined8 *)(unaff_x20 + 0x118) = param_26;
  *(undefined8 *)(unaff_x20 + 0x120) = param_35;
  *(undefined8 *)(unaff_x20 + 0x130) = param_37;
  *(undefined8 *)(unaff_x20 + 0x128) = param_36;
  *(undefined8 *)(unaff_x20 + 0x138) = param_38;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x78) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  return;
}



/* Entry: 10040cc40; end: 10040db33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10040cc40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined8 uVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  long lVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 *unaff_x20;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  long lVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  long lVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uStack_88;
  
  uVar47 = *unaff_x20;
  lVar8 = *(long *)(unaff_x20[0x20] + _DAT_113093a98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    uVar9 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010efbd040);
    lVar10 = lVar8;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    uVar11 = *(undefined8 *)(unaff_x20[6] + _DAT_113043d30);
    uVar12 = uVar11;
    func_0x000107c6157c();
    FUN_1003d1364();
    lVar6 = _DAT_11304a480;
    lVar48 = unaff_x20[7];
    uVar13 = *(undefined8 *)(lVar48 + _DAT_11304a480);
    uVar49 = *(undefined8 *)(unaff_x20[3] + _DAT_112dcef98);
    lVar63 = unaff_x20[0x17];
    uVar56 = *(undefined8 *)(lVar63 + _DAT_11308b840);
    uVar59 = *(undefined8 *)(lVar63 + _DAT_11308b850);
    uVar65 = *(undefined8 *)(unaff_x20[0x22] + _DAT_113083868);
    uVar62 = *(undefined8 *)(lVar63 + _DAT_11308b848);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar14 = uVar65;
    FUN_10040de7c();
    uVar15 = *(undefined8 *)(unaff_x20[0x12] + _DAT_1130116b0);
    uVar50 = *(undefined8 *)(unaff_x20[0x21] + _DAT_113083908);
    func_0x000107c61174();
    uVar16 = uVar50;
    func_0x000107c6157c();
    FUN_1003cc718();
    uVar17 = unaff_x20[5];
    func_0x000107c3fa04();
    func_0x000107c61180();
    uVar19 = unaff_x20[9];
    uVar18 = *(undefined8 *)(unaff_x20[8] + _DAT_11307e0b8);
    func_0x000107c61174();
    func_0x000107c42eac();
    func_0x000107c61180();
    uVar9 = unaff_x20[10];
    uVar20 = unaff_x20[0xb];
    func_0x000107c4ec80();
    func_0x000107c61180();
    uVar1 = unaff_x20[0xc];
    uVar4 = unaff_x20[0xd];
    uVar2 = unaff_x20[0xe];
    uVar21 = uVar20;
    FUN_10040df00();
    uVar3 = unaff_x20[0x10];
    uVar5 = unaff_x20[0x11];
    uVar22 = uVar21;
    FUN_10040df14();
    uVar23 = uVar22;
    FUN_10040df3c();
    uVar25 = unaff_x20[0x16];
    uVar24 = *(undefined8 *)(unaff_x20[0x15] + _DAT_113010900);
    func_0x000107c615f0();
    func_0x000107c444a4();
    func_0x000107c61180();
    uVar66 = *(undefined8 *)(lVar63 + _DAT_11308b860);
    if (unaff_x20[0x18] == 0) {
      uStack_88 = 0;
    }
    else {
      uStack_88 = *(undefined8 *)(unaff_x20[0x18] + _DAT_11309bf10);
      func_0x000107c615f0();
    }
    uVar57 = *(undefined8 *)(lVar63 + _DAT_11308b868);
    uVar51 = *(undefined8 *)(unaff_x20[0x19] + _DAT_113091b70);
    uVar60 = *(undefined8 *)(unaff_x20[0x1a] + _DAT_11308cfc8);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(uVar51);
    func_0x000107c61174();
    uVar26 = uVar60;
    func_0x00010040dfb0();
    lVar58 = unaff_x20[0x1c];
    uVar27 = uVar26;
    func_0x00010040e024();
    uVar28 = unaff_x20[0x1d];
    func_0x000107c4d80c();
    func_0x000107c61180();
    uVar29 = uVar28;
    FUN_10040e098();
    uVar30 = uVar29;
    FUN_10040e118();
    uVar31 = unaff_x20[0x23];
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar63 = _DAT_11304a478;
    uVar52 = *(undefined8 *)(lVar48 + _DAT_11304a478);
    uVar54 = *(undefined8 *)(lVar48 + lVar6);
    puVar32 = &UNK_11040c118;
    func_0x000107c613fc(&UNK_11040c118,0x18,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar54;
    FUN_1000285a8(0x112dced30,&UNK_10d990b60);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar52);
    puVar33 = &UNK_1018c29fc;
    FUN_1000bdd8c(&UNK_1018c29fc,puVar32);
    uVar61 = *(undefined8 *)(lVar58 + _DAT_113010a50);
    puVar32 = &UNK_11040c140;
    func_0x000107c613fc(&UNK_11040c140,0x30,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar11;
    *(undefined8 *)(puVar32 + 0x18) = uVar52;
    *(undefined **)(puVar32 + 0x20) = puVar33;
    *(undefined8 *)(puVar32 + 0x28) = uVar61;
    FUN_1000285a8(0x112dced38,&UNK_10d990b68);
    func_0x000107c613fc();
    func_0x000107c61580(uVar61,2);
    func_0x000107c6157c(uVar11);
    func_0x000107c6157c(uVar52);
    func_0x000107c6157c(puVar33);
    puVar34 = &UNK_1018c2a50;
    FUN_1000bdd8c(&UNK_1018c2a50,puVar32);
    uVar35 = 0x112dced40;
    FUN_1000285a8(0x112dced40,&UNK_10d990b70);
    puVar32 = &UNK_1018c2ad0;
    FUN_1000cb480(&UNK_1018c2ad0,0,uVar35);
    puVar36 = puVar32;
    FUN_1003a5b88();
    func_0x000107c61574(puVar32);
    puVar32 = &UNK_11040c168;
    func_0x000107c613fc(&UNK_11040c168,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar12;
    *(undefined8 *)(puVar32 + 0x18) = uVar13;
    FUN_1000285a8(0x112dced48,&UNK_10d990b78);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar37 = &UNK_1018c2adc;
    FUN_1000bdd8c(&UNK_1018c2adc,puVar32);
    puVar38 = puVar37;
    FUN_1003a5b88();
    func_0x000107c61574(puVar37);
    puVar32 = &UNK_11040c190;
    func_0x000107c613fc(&UNK_11040c190,0x18,7);
    *(long *)(puVar32 + 0x10) = lVar8;
    FUN_1000285a8(0x112d62380,&UNK_10d990b80);
    func_0x000107c613fc();
    func_0x000107c615f0(lVar8);
    puVar37 = &UNK_1018c2b20;
    FUN_1000bdd8c(&UNK_1018c2b20,puVar32);
    puVar39 = puVar37;
    FUN_1003a5b88();
    func_0x000107c61574(puVar37);
    puVar32 = &UNK_11040c1b8;
    func_0x000107c613fc(&UNK_11040c1b8,0x30,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar12;
    *(undefined8 *)(puVar32 + 0x18) = uVar13;
    *(undefined8 *)(puVar32 + 0x20) = uVar62;
    *(undefined8 *)(puVar32 + 0x28) = uVar59;
    FUN_1000285a8(0x112dced50,&UNK_10d990b88);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar37 = &UNK_1018c2b98;
    FUN_1000bdd8c(&UNK_1018c2b98,puVar32);
    puVar41 = puVar37;
    FUN_1003a5b88();
    func_0x000107c61574(puVar37);
    puVar32 = &UNK_11040c1e0;
    func_0x000107c613fc(&UNK_11040c1e0,0x50,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar12;
    *(undefined8 *)(puVar32 + 0x18) = uVar13;
    *(undefined **)(puVar32 + 0x20) = puVar38;
    *(undefined8 *)(puVar32 + 0x28) = uVar62;
    *(undefined8 *)(puVar32 + 0x30) = uVar14;
    *(undefined8 *)(puVar32 + 0x38) = uVar15;
    *(undefined8 *)(puVar32 + 0x40) = uVar65;
    *(undefined **)(puVar32 + 0x48) = puVar39;
    FUN_1000285a8(0x112dced58,&UNK_10d990b90);
    func_0x000107c613fc();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar35 = uVar14;
    func_0x000107c61174();
    func_0x000107c61174();
    puVar37 = &UNK_1018c2bf0;
    FUN_1000bdd8c(&UNK_1018c2bf0,puVar32);
    puVar40 = puVar37;
    FUN_1003a5b88();
    func_0x000107c61574(puVar37);
    puVar32 = &UNK_11040c208;
    func_0x000107c613fc(&UNK_11040c208,0x78,7);
    *(undefined8 *)(puVar32 + 0x10) = uVar12;
    *(undefined8 *)(puVar32 + 0x18) = uVar13;
    *(undefined8 *)(puVar32 + 0x20) = uVar16;
    *(undefined8 *)(puVar32 + 0x28) = uVar56;
    *(undefined8 *)(puVar32 + 0x30) = uVar62;
    *(undefined **)(puVar32 + 0x38) = puVar38;
    *(undefined8 *)(puVar32 + 0x40) = uVar49;
    *(long *)(puVar32 + 0x48) = lVar10;
    *(undefined **)(puVar32 + 0x50) = puVar41;
    *(undefined8 *)(puVar32 + 0x58) = uVar59;
    *(undefined8 *)(puVar32 + 0x60) = uVar66;
    *(undefined **)(puVar32 + 0x68) = puVar40;
    *(undefined8 *)(puVar32 + 0x70) = uVar14;
    FUN_1000285a8(0x112dced60,&UNK_10d990b98);
    func_0x000107c613fc();
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
    func_0x000107c615f0(lVar10);
    func_0x000107c61174();
    func_0x000107c61174();
    puVar37 = &UNK_1018c2c74;
    FUN_1000bdd8c(&UNK_1018c2c74,puVar32);
    puVar43 = puVar37;
    FUN_1003a5b88();
    func_0x000107c61574(puVar37);
    uVar42 = *(undefined8 *)(unaff_x20[0x24] + _DAT_113010890);
    uVar64 = *(undefined8 *)(lVar48 + lVar63);
    uVar53 = unaff_x20[0x26];
    func_0x000107c61174();
    func_0x000107c6157c(uVar64);
    func_0x000107c3e944();
    func_0x000107c61180();
    uVar55 = unaff_x20[0x25];
    puVar32 = &UNK_11040c230;
    func_0x000107c613fc(&UNK_11040c230,0x178,7);
    *(undefined8 *)(puVar32 + 0xb0) = uVar64;
    *(undefined8 *)(puVar32 + 0x160) = uVar14;
    *(undefined8 *)(puVar32 + 0x170) = uVar47;
    *(undefined8 *)(puVar32 + 0x80) = uVar21;
    *(undefined8 *)(puVar32 + 0x88) = uVar53;
    *(undefined8 *)(puVar32 + 0x10) = uVar20;
    *(undefined8 *)(puVar32 + 0x18) = uVar13;
    *(undefined8 *)(puVar32 + 0x20) = uVar1;
    *(undefined8 *)(puVar32 + 0x28) = uVar4;
    *(undefined8 *)(puVar32 + 0x30) = uVar2;
    *(undefined8 *)(puVar32 + 0x38) = uVar12;
    *(undefined8 *)(puVar32 + 0x40) = uVar51;
    *(undefined8 *)(puVar32 + 0x48) = uVar3;
    *(undefined8 *)(puVar32 + 0x50) = uVar9;
    *(long *)(puVar32 + 0x58) = lVar10;
    *(undefined8 *)(puVar32 + 0x60) = uVar55;
    *(undefined8 *)(puVar32 + 0x68) = uVar18;
    *(undefined8 *)(puVar32 + 0x70) = uVar19;
    *(undefined8 *)(puVar32 + 0x78) = uVar25;
    *(undefined8 *)(puVar32 + 0x90) = uVar60;
    *(undefined8 *)(puVar32 + 0x98) = uVar50;
    *(undefined **)(puVar32 + 0xa0) = puVar39;
    *(undefined8 **)(puVar32 + 0xa8) = unaff_x20;
    *(undefined8 *)(puVar32 + 0xb8) = uVar11;
    *(undefined8 *)(puVar32 + 0xc0) = uVar17;
    *(undefined8 *)(puVar32 + 200) = uVar5;
    *(undefined8 *)(puVar32 + 0xd0) = uVar15;
    *(undefined8 *)(puVar32 + 0xd8) = uVar22;
    *(undefined8 *)(puVar32 + 0xe0) = uVar24;
    *(undefined **)(puVar32 + 0xe8) = puVar43;
    *(undefined8 *)(puVar32 + 0xf0) = uVar66;
    *(undefined8 *)(puVar32 + 0xf8) = uStack_88;
    *(undefined8 *)(puVar32 + 0x100) = uVar57;
    *(undefined8 *)(puVar32 + 0x108) = uVar26;
    *(undefined8 *)(puVar32 + 0x110) = uVar27;
    *(undefined8 *)(puVar32 + 0x118) = uVar28;
    *(undefined8 *)(puVar32 + 0x120) = uVar16;
    *(undefined8 *)(puVar32 + 0x128) = uVar29;
    *(undefined8 *)(puVar32 + 0x130) = uVar30;
    *(undefined8 *)(puVar32 + 0x138) = uVar59;
    *(undefined8 *)(puVar32 + 0x140) = uVar31;
    *(undefined8 *)(puVar32 + 0x148) = uVar42;
    *(undefined8 *)(puVar32 + 0x150) = uVar65;
    *(undefined **)(puVar32 + 0x158) = puVar36;
    *(undefined8 *)(puVar32 + 0x168) = uVar23;
    FUN_1000285a8(0x112dced68,&UNK_10d990ba0);
    func_0x000107c613fc();
    func_0x000107c615f0(uStack_88);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar11);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar50);
    func_0x000107c61174();
    func_0x000107c615f0(uVar24);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(uVar51);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(lVar10);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar55);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(unaff_x20);
    func_0x000107c615f0(uVar17);
    func_0x000107c61174(uVar5);
    func_0x000107c61174();
    puVar37 = &UNK_1018c2d1c;
    FUN_1000bdd8c(&UNK_1018c2d1c,puVar32);
    uVar47 = 0x112dced70;
    FUN_1000285a8(0x112dced70,&UNK_10d990ba8);
    puVar32 = &UNK_1018c2d10;
    FUN_1000cb480(&UNK_1018c2d10,0,uVar47);
    puVar46 = puVar32;
    FUN_1003a5b88();
    func_0x000107c61574(puVar32);
    uVar47 = 0x112dced78;
    FUN_1000285a8(0x112dced78,&UNK_10d990bb0);
    puVar32 = &UNK_1018c4c04;
    FUN_1000cb480(&UNK_1018c4c04,0,uVar47);
    puVar44 = puVar32;
    FUN_1003a5b88();
    func_0x000107c61574(puVar32);
    uVar47 = 0x112dced80;
    FUN_1000285a8(0x112dced80,&UNK_10d990bb8);
    puVar32 = &UNK_1018c4c08;
    FUN_1000cb480(&UNK_1018c4c08,0,uVar47);
    puVar45 = puVar32;
    FUN_1003a5b88();
    func_0x000107c61574(puVar32);
    FUN_10023043c(0);
    func_0x000107c610f8();
    FUN_10040e14c(puVar46,puVar44,puVar45);
    func_0x000107c615e8(lVar8);
    func_0x000107c615e8(lVar10);
    func_0x000107c61574(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar49);
    func_0x000107c61170(uVar56);
    func_0x000107c61170(uVar59);
    func_0x000107c61170(uVar62);
    func_0x000107c61170(uVar65);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar15);
    func_0x000107c61574(uVar50);
    func_0x000107c61170(uVar16);
    func_0x000107c615e8(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c615e8(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar66);
    func_0x000107c615e8(uStack_88);
    func_0x000107c61170(uVar57);
    func_0x000107c615e8(uVar51);
    func_0x000107c61170(uVar60);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61574(uVar52);
    func_0x000107c61170(uVar54);
    func_0x000107c61574(puVar33);
    func_0x000107c61574(uVar61);
    func_0x000107c61574(puVar34);
    func_0x000107c61170(puVar36);
    func_0x000107c61170(puVar38);
    func_0x000107c61170(puVar39);
    func_0x000107c61170(puVar41);
    func_0x000107c61170(puVar40);
    func_0x000107c61170(puVar43);
    func_0x000107c61170(uVar42);
    func_0x000107c61574(puVar37);
    return puVar46;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000003a,0x800000010efbd000,
                      "SCAdDataServiceProvider/AdDataServiceProvider.swift",0x33,2,0xcc,0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10040db34);
  (*pcVar7)();
}



/* Entry: 10040db34; end: 10040de7b;  */

void FUN_10040db34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040de7c; end: 10040de93;  */

void FUN_10040de7c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040de94; end: 10040deff;  */

long FUN_10040de94(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + *param_2));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 10040df00; end: 10040df13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10040df00(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_1130440f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_1130440f0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_1130440e8));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10040df14; end: 10040df3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040df14(void)

{
  FUN_1003a5b88();
  return;
}



/* Entry: 10040df3c; end: 10040e097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10040df3c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dd05e8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dd05e8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_112dd05e0));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10040e098; end: 10040e0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10040e098(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113010620;
  lVar2 = *(long *)(unaff_x20 + _DAT_113010620);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113010610));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10040e0ac; end: 10040e117;  */

long FUN_10040e0ac(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + *param_2));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 10040e118; end: 10040e12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10040e118(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_113010628;
  lVar2 = *(long *)(unaff_x20 + _DAT_113010628);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113010618));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10040e12c; end: 10040e14b;  */

void FUN_10040e12c(void)

{
  func_0x000107c61168(&PTR_PTR_1128de6d8);
  return;
}



/* Entry: 10040e14c; end: 10040e1bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040e14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113069500) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113069508) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113069510) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040e1c0; end: 10040e30b;  */

void FUN_10040e1c0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040e30c; end: 10040e313;  */

void FUN_10040e30c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040e314; end: 10040e367;  */

void FUN_10040e314(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040e368; end: 10040e373;  */

void FUN_10040e368(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10021a8e0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10040e4dc(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10040e55c();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10040e598();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10040e374; end: 10040e4db;  */

void FUN_10040e374(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10021a8e0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10040e4dc(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10040e55c();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10040e598();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10040e4dc; end: 10040e55b;  */

void FUN_10040e4dc(undefined8 param_1)

{
  if (lRam0000000112dcf350 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656170);
  return;
}



/* Entry: 10040e55c; end: 10040e597;  */

void FUN_10040e55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 10040e598; end: 10040e7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10040e598(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar9 = &lStack_50;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar3 != 0) {
    FUN_1000285a8(0x112dbfa50,&UNK_10d97b760);
    lVar4 = lVar3;
    FUN_1000bda74();
    func_0x000107c61170(lVar3);
    FUN_1000285a8(0x112d4f8d0,&UNK_10dc15330);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c5c360();
    func_0x000107c61180();
    uVar6 = uVar5;
    FUN_1000bda74();
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
    puVar7 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(lVar4);
    func_0x000107c6157c(uVar6);
    func_0x000107c453e4();
    lVar8 = 0;
    func_0x00010040e7e4();
    lVar3 = lVar8;
    func_0x000107c610f8();
    *(undefined1 *)(lVar3 + _DAT_112dcf2d8) = 0;
    puVar1 = (undefined8 *)(lVar3 + _DAT_112dcf2d0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined1 *)(lVar3 + _DAT_112dcf2f0) = 0;
    *(undefined8 *)(lVar3 + _DAT_112dcf2c8) = uVar5;
    *(long *)(lVar3 + _DAT_112dcf2c0) = lVar4;
    *(undefined8 *)(lVar3 + _DAT_112dcf2e8) = uVar6;
    *(undefined **)(lVar3 + _DAT_112dcf2e0) = puVar7;
    lStack_50 = lVar3;
    lStack_48 = lVar8;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar7 = &UNK_11040ccc8;
    func_0x000107c613fc(&UNK_11040ccc8,0x18,7);
    *(long **)(puVar7 + 0x10) = plVar9;
    FUN_1000285a8(0x112dcf320,&UNK_10d990f30);
    func_0x000107c613fc();
    func_0x000107c61174(plVar9);
    puVar10 = &UNK_1018cbfe4;
    FUN_1000bdd8c(&UNK_1018cbfe4,puVar7);
    uVar5 = 0;
    FUN_10021a96c(0);
    func_0x000107c610f8();
    FUN_10040e804(puVar10,uVar5);
    func_0x000107c61574(lVar4);
    func_0x000107c61574(uVar6);
    func_0x000107c61170(plVar9);
    return puVar10;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10040e7c0);
  (*pcVar2)();
}



/* Entry: 10040e7c0; end: 10040e803;  */

void FUN_10040e7c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040e804; end: 10040e85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040e804(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130109b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130109a8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040e85c; end: 10040e923;  */

void FUN_10040e85c(void)

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



/* Entry: 10040e924; end: 10040ed67;  */

void FUN_10040e924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c61170(param_8);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_10;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_11;
  return;
}



/* Entry: 10040ed68; end: 10040ee07;  */

void FUN_10040ed68(void)

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



/* Entry: 10040ee08; end: 10040eec7; -[SCAdPersistedDataProvider initWithApplicationPreferences:] */

undefined1 * FUN_10040ee08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fc9f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10040eec8; end: 10040ef3b;  */

void FUN_10040eec8(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10040ef3c; end: 10040ef43;  */

void FUN_10040ef3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040ef44; end: 10040ef97;  */

void FUN_10040ef44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040ef98; end: 10040efa3;  */

void FUN_10040ef98(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10022e184();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a7fc0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar7 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10040efa4; end: 10040f26b;  */

void FUN_10040efa4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10022e184();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a7fc0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10040f26c; end: 10040f34f; -[SCReceiveMessageLoggerServiceProvider provide] */

void FUN_10040f26c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba1c0;
  func_0x000107c610f4(PTR_PTR_1126ba1c0);
  func_0x000107c47488();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10040f350; end: 10040f3c3; -[SCReceiveMessageLoggerServices initWithLoadMessageLogger:] */

undefined1 * FUN_10040f350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd9f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10040f3c4; end: 10040f3ff;  */

void FUN_10040f3c4(void)

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



/* Entry: 10040f400; end: 10040f407;  */

void FUN_10040f400(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040f408; end: 10040f45b;  */

void FUN_10040f408(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10040f45c; end: 10040f463;  */

void FUN_10040f45c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d50b8();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10040f4fc();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10040f568();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10040f464; end: 10040f4fb;  */

void FUN_10040f464(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d50b8();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10040f4fc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10040f568();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10040f4fc; end: 10040f567;  */

void FUN_10040f4fc(undefined8 param_1)

{
  if (lRam000000011347eee0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e65d2b8);
  return;
}



/* Entry: 10040f568; end: 10040f5df;  */

void FUN_10040f568(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_1000285a8(0x112ddb5b8,&UNK_10d9a02e0);
  func_0x000107c613fc();
  puVar1 = &UNK_10196ed94;
  FUN_1000bdd8c(&UNK_10196ed94,0);
  puVar2 = puVar1;
  FUN_1003a5b88();
  func_0x000107c61574(puVar1);
  FUN_1001def18(0);
  func_0x000107c610f8();
  FUN_10040f5e0(puVar2);
  return;
}



/* Entry: 10040f5e0; end: 10040f61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040f5e0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11301af20) = param_1;
  FUN_1001def18();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10040f61c; end: 10040f623;  */

void FUN_10040f61c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10040f624; end: 10041000b; -[SCNativeMessagingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040f624(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lVar33;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112725580;
    func_0x000107c61148(lVar33);
  }
  lVar1 = lVar33;
  func_0x000107c444a4(lVar33);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c611b0();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar33);
  puVar2 = PTR_PTR_1126ae720;
  puVar21 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_100609aac;
  puStack_90 = &UNK_1108951f0;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_d8 = puVar21;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10041e4b8;
  puStack_c0 = &UNK_110895260;
  func_0x000107c6111c(auStack_b0,auStack_80);
  puStack_b8 = puVar3;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_100 = puVar21;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_105528850;
  puStack_e8 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_e0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  puVar7 = PTR_PTR_1126ae720;
  puStack_130 = puVar21;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x100415e6c;
  puStack_118 = &UNK_110895290;
  func_0x000107c6111c(auStack_108,auStack_80);
  puStack_110 = puVar6;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126ae720;
  puStack_158 = puVar21;
  uStack_150 = 0xc2000000;
  puStack_148 = &UNK_105528910;
  puStack_140 = &UNK_11084d4a8;
  func_0x000107c6111c(auStack_138,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  lVar33 = (long)_DAT_112725574;
  func_0x000107c61174();
  uVar13 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar12;
  func_0x000107c61170(uVar13);
  puVar14 = PTR_PTR_1126ae568;
  func_0x000107c61160();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112725578);
  *(undefined **)(param_1 + _DAT_112725578) = puVar14;
  func_0x000107c61170(uVar13);
  puVar15 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  puVar16 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  puVar17 = PTR_PTR_1126ae820;
  func_0x000107c61160();
  puVar18 = PTR_PTR_1126ba5d8;
  func_0x000107c610f4();
  func_0x000107c48dec();
  puVar14 = PTR_PTR_1126ae720;
  puStack_180 = puVar21;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x10049b39c;
  puStack_168 = &UNK_110895380;
  func_0x000107c6111c(auStack_160,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar20 = PTR_PTR_1126ba5e0;
  lVar33 = param_1 + _DAT_1127255b8;
  func_0x000107c61148(lVar33);
  func_0x000107c49a34();
  lVar1 = param_1 + _DAT_1127255bc;
  func_0x000107c61148();
  lVar19 = lVar1;
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c49e14();
  func_0x000107c3bbf4();
  func_0x000107c61180();
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar33);
  puVar21 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_188,auStack_80);
  func_0x000107c61174(puVar15);
  func_0x000107c61174(puVar20);
  func_0x000107c61174(puVar12);
  func_0x000107c4d77c();
  func_0x000107c61180();
  puVar22 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar23 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar24 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar13 = 0x19;
  FUN_1000819a8(0x19,0);
  func_0x000107c61180();
  FUN_10007380c();
  func_0x000107c61170(uVar13);
  puVar31 = PTR_PTR_1126ba640;
  func_0x000107c610f4();
  lVar33 = param_1 + _DAT_1127255d8;
  func_0x000107c61148();
  lVar25 = lVar33;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar1 = param_1 + _DAT_1127255d8;
  func_0x000107c61148();
  lVar26 = lVar1;
  func_0x000107c421c8();
  func_0x000107c61180();
  lVar19 = param_1 + _DAT_1127255bc;
  func_0x000107c61148();
  lVar27 = lVar19;
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c49e14();
  lVar28 = param_1 + _DAT_1127255bc;
  func_0x000107c61148();
  lVar29 = lVar28;
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c49e24();
  func_0x000107c47fdc();
  uVar13 = *(undefined8 *)(param_1 + _DAT_112725598);
  *(undefined **)(param_1 + _DAT_112725598) = puVar31;
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar33);
  puVar32 = PTR_PTR_1126ba648;
  func_0x000107c610f4();
  puVar30 = puVar15;
  func_0x000107c43bf4();
  func_0x000107c61180();
  lVar33 = param_1;
  func_0x000107c3b0ac();
  func_0x000107c61180();
  puVar31 = puVar18;
  func_0x000107c4457c();
  func_0x000107c61180();
  func_0x000107c47980();
  func_0x000107c61170(puVar31);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(puVar30);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272559c));
  func_0x000107c61170(puVar32);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar15);
  func_0x000107c61120(auStack_188);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_160);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61120(auStack_138);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 10041000c; end: 1004100d3; -[SCGroupsDataPublisher initWithTopGroupsIdsSubject:updatedGroupsSubject:] */

undefined1 *
FUN_10041000c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8dd0;
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
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 1;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004100d4; end: 10041015f; -[_TtC13SCSystemScope13SCSystemScope isAppInBackground] */

uint FUN_1004100d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100410108();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100410160; end: 100410183; +[SCNativeMessagingServicesEntryPoint _launchTriggerForAppInBackground:isFromLogIn:] */

undefined ** FUN_100410160(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06b8;
  if (param_3 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06d0;
  }
  ppuVar2 = (undefined **)0x0;
  if (param_4 == 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 100410184; end: 10041018b; -[SCFideliusUserIdentity setHashedBeta:] */

void FUN_100410184(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10041018c; end: 100410193; -[SCFideliusUserIdentity setOutBeta:] */

void FUN_10041018c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100410194; end: 10041019b; -[SCFideliusUserIdentity setInBeta:] */

void FUN_100410194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10041019c; end: 1004101a3; -[SCFideliusUserIdentity setIwek:] */

void FUN_10041019c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1004101a4; end: 1004101c3; -[FCNSDecoder decodeIntegerForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004101a4(long param_1)

{
  func_0x000107c4d9e8(*(undefined8 *)(param_1 + _DAT_11279628c));
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1004101c4; end: 1004101cb; -[SCFideliusUserIdentity setVersion:] */

void FUN_1004101c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1004101cc; end: 1004101ff; -[SCFideliusUserIdentity createBeta] */

void FUN_1004101cc(void)

{
  func_0x000107c610f4(PTR_PTR_1126c0658);
  func_0x000107c45418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100410200; end: 100410403; -[SCEllipticCurveCrypto initForCurve:publicKey:privateKey:] */

undefined1 *
FUN_100410200(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126eb090;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x18) = param_3;
    if ((param_4 == 0) || (param_5 == 0)) {
      if ((param_4 != 0 || param_5 != 0) || (*(long *)((long)puVar1 + 0x10) == 0))
      goto LAB_1004102f8;
      func_0x000107c5d5c4(puVar1);
    }
    else {
      if (*(long *)((long)puVar1 + 0x10) != 0) {
LAB_1004102f8:
        puVar4 = (undefined1 *)0x0;
        goto LAB_1004102fc;
      }
      puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x000107c412fc();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined **)((long)puVar1 + 0x28) = puVar2;
      func_0x000107c61170(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c412fc();
      func_0x000107c61180();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined **)((long)puVar1 + 0x20) = puVar2;
      func_0x000107c61170(uVar3);
      func_0x000107c5d46c(puVar1);
    }
  }
  func_0x000107c61174(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_1004102fc:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 100410404; end: 10041046f;  */

long * FUN_100410404(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  func_0x00010041032c();
  if (plVar1 == (long *)0x0) {
    FUN_1004d2c58(0xf,0,0x41,&UNK_10f6c6f79,0x90);
  }
  else {
    FUN_100410544();
    *plVar1 = param_1;
    if (param_1 == 0) {
      FUN_100414b38(plVar1);
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}



/* Entry: 100410470; end: 100410543; -[SCEllipticCurveCrypto updateECKey:] */

void FUN_100410470(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_38;
  
  FUN_100410404();
  plVar6 = (long *)(param_1 + 0x10);
  *plVar6 = param_3;
  *(undefined4 *)(param_3 + 0x1c) = 4;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4adac(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3eea8();
  uStack_38 = uVar4;
  FUN_100411e14(plVar6,&uStack_38,uVar3);
  func_0x000107c4adac(*(undefined8 *)(param_1 + 0x28));
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  func_0x000107c3eea8();
  FUN_100202674();
  FUN_1004123f8(*plVar6,puVar5);
  iVar2 = (int)*plVar6;
  func_0x000100412598();
  if (iVar2 == 0) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  }
  func_0x000107c42bf4(param_1);
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(uint *)((long)puVar5 + 0x14);
    if ((uVar1 >> 1 & 1) == 0) {
      FUN_1001e33e0(*puVar5);
      uVar1 = *(uint *)((long)puVar5 + 0x14);
    }
    if ((uVar1 & 1) != 0) {
      if (puVar5 != (undefined8 *)0x0) {
        plVar6 = puVar5 + -1;
        if (*plVar6 + 8 != 0) {
          func_0x000107c60ee4(plVar6,*plVar6 + 8);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(plVar6);
        return;
      }
      return;
    }
    *puVar5 = 0;
  }
  return;
}



/* Entry: 100410544; end: 100410853;  */

long * FUN_100410544(int param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_188 [72];
  undefined1 auStack_140 [72];
  undefined1 auStack_f8 [152];
  
  iVar1 = 0x13310b78;
  func_0x000107c6127c(0x113310b78,FUN_100410854);
  if (iVar1 != 0) goto LAB_100410850;
  lVar12 = 0;
  plVar3 = (long *)0x113836f80;
  while ((int)plVar3[-6] != param_1) {
    lVar12 = lVar12 + 8;
    plVar3 = plVar3 + 7;
    if (lVar12 == 0x20) {
      FUN_1004d2c58(0xf,0,0x7b,&UNK_10f6c6f00,0x208);
      return (long *)0x0;
    }
  }
  iVar1 = 0x13310b88;
  func_0x000107c61288();
  if (iVar1 != 0) goto LAB_100410850;
  plVar4 = *(long **)(lVar12 + 0x1137ed620);
  lVar2 = 0x113310b88;
  func_0x000107c6128c();
  if ((int)lVar2 != 0) goto LAB_100410850;
  if (plVar4 != (long *)0x0) {
    return plVar4;
  }
  FUN_100225874();
  if (lVar2 == 0) {
    FUN_1004d2c58(0xf,0,0x41,&UNK_10f6c6f00,0x1c1);
    plVar3 = (long *)0x0;
    lVar5 = 0;
    lVar6 = 0;
    lVar9 = 0;
    lVar7 = 0;
    goto LAB_100410794;
  }
  uVar10 = (ulong)*(byte *)(plVar3 + -2);
  lVar11 = plVar3[-1];
  lVar5 = lVar11;
  FUN_100202674(lVar11,uVar10,0);
  if (lVar5 == 0) {
    lVar7 = 0;
    lVar6 = 0;
LAB_100410768:
    FUN_1004d2c58(0xf,0,3,&UNK_10f6c6f00,0x1cc);
    plVar3 = (long *)0x0;
    lVar9 = 0;
LAB_100410794:
    func_0x000100411da0(plVar3);
    plVar3 = (long *)0x0;
  }
  else {
    lVar6 = lVar11 + uVar10;
    FUN_100202674(lVar6,uVar10,0);
    if (lVar6 == 0) {
      lVar7 = 0;
      goto LAB_100410768;
    }
    lVar7 = lVar11 + uVar10 * 2;
    FUN_100202674(lVar7,uVar10,0);
    if (lVar7 == 0) goto LAB_100410768;
    lVar9 = lVar11 + uVar10 * 5;
    FUN_100202674(lVar9,uVar10,0);
    if (lVar9 == 0) goto LAB_100410768;
    plVar3 = (long *)*plVar3;
    FUN_100410c50();
    if ((plVar3 == (long *)0x0) ||
       (plVar4 = plVar3, (**(code **)(*plVar3 + 0x10))(plVar3,lVar5,lVar6,lVar7,lVar2),
       (int)plVar4 == 0)) {
      FUN_1004d2c58(0xf,0,0xf,&UNK_10f6c6f00,0x1d3);
      goto LAB_100410794;
    }
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0x88))(plVar3,auStack_140,lVar11 + uVar10 * 3,uVar10);
    if (((((int)plVar4 == 0) ||
         (plVar4 = plVar3,
         (**(code **)(*plVar3 + 0x88))(plVar3,auStack_188,lVar11 + uVar10 * 4,uVar10),
         (int)plVar4 == 0)) ||
        (plVar4 = plVar3, FUN_1004114b8(plVar3,auStack_f8,auStack_140,auStack_188), (int)plVar4 == 0
        )) || (plVar4 = plVar3, FUN_100411810(plVar3,auStack_f8,lVar9), (int)plVar4 == 0))
    goto LAB_100410794;
  }
  FUN_100226a68(lVar2);
  FUN_10021f3c8(lVar5);
  FUN_10021f3c8(lVar6);
  FUN_10021f3c8(lVar7);
  FUN_10021f3c8(lVar9);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  iVar1 = 0x13310b88;
  func_0x000107c61290();
  if (iVar1 == 0) {
    plVar4 = *(long **)(lVar12 + 0x1137ed620);
    plVar8 = plVar3;
    if (*(long **)(lVar12 + 0x1137ed620) == (long *)0x0) {
      *(long **)(lVar12 + 0x1137ed620) = plVar3;
      *(int *)(plVar3 + 5) = param_1;
      plVar8 = (long *)0x0;
      plVar4 = plVar3;
    }
    iVar1 = 0x13310b88;
    func_0x000107c6128c();
    if (iVar1 == 0) {
      func_0x000100411da0(plVar8);
      return plVar4;
    }
  }
LAB_100410850:
  func_0x000107c60ebc();
  uRam0000000113836f50 = 0x2cc;
  puRam0000000113836f58 = &UNK_10e526418;
  uRam0000000113836f60 = 5;
  puRam0000000113836f68 = &UNK_10f6c7573;
  uRam0000000113836f70 = 0x42;
  puRam0000000113836f78 = &UNK_10e52641d;
  plVar3 = (long *)0x113310e20;
  func_0x000107c6127c(0x113310e20,FUN_100410a08);
  if ((int)plVar3 == 0) {
    uRam0000000113836f80 = 0x1137ed678;
    uRam0000000113836f88 = 0x2cb;
    puRam0000000113836f90 = &UNK_10e5265a9;
    uRam0000000113836f98 = 5;
    puRam0000000113836fa0 = &UNK_10f6c757e;
    uRam0000000113836fa8 = 0x30;
    puRam0000000113836fb0 = &UNK_10e5265ae;
    plVar3 = (long *)0x113310e20;
    func_0x000107c6127c(0x113310e20,FUN_100410a08);
    if ((int)plVar3 == 0) {
      uRam0000000113836fb8 = 0x1137ed678;
      uRam0000000113836fc0 = 0x19f;
      puRam0000000113836fc8 = &UNK_10e5266ce;
      uRam0000000113836fd0 = 8;
      puRam0000000113836fd8 = &UNK_10f6c7589;
      uRam0000000113836fe0 = 0x20;
      puRam0000000113836fe8 = &UNK_10e5266d6;
      plVar3 = (long *)0x113310e40;
      func_0x000107c6127c(0x113310e40,0x100410af0);
      if ((int)plVar3 == 0) {
        uRam0000000113836ff0 = 0x1137ed7e8;
        uRam0000000113836ff8 = 0x2c9;
        puRam0000000113837000 = &UNK_10e526796;
        uRam0000000113837008 = 5;
        puRam0000000113837010 = &UNK_10f6c7594;
        uRam0000000113837018 = 0x1c;
        puRam0000000113837020 = &UNK_10e52679b;
        plVar3 = (long *)0x113310e30;
        func_0x000107c6127c(0x113310e30,0x100410ba0);
        if ((int)plVar3 == 0) {
          uRam0000000113837028 = 0x1137ed730;
          return plVar3;
        }
      }
    }
  }
  func_0x000107c60ebc();
  pcRam00000001137ed678 = FUN_100410d58;
  puRam00000001137ed680 = &UNK_10ae365a4;
  pcRam00000001137ed688 = FUN_100410d70;
  puRam00000001137ed690 = &UNK_10ae3eb68;
  puRam00000001137ed698 = &UNK_10ae3ec70;
  puRam00000001137ed6a0 = &UNK_10ae36638;
  puRam00000001137ed6a8 = &UNK_10ae36c24;
  puRam00000001137ed6b0 = &UNK_10ae37904;
  puRam00000001137ed6b8 = &UNK_10ae37cc4;
  puRam00000001137ed6c0 = &UNK_10ae37cd4;
  puRam00000001137ed6d0 = &UNK_10ae38834;
  puRam00000001137ed6d8 = &UNK_10ae38274;
  puRam00000001137ed6e0 = &UNK_10ae3843c;
  pcRam00000001137ed6e8 = FUN_1004117f4;
  pcRam00000001137ed6f0 = FUN_1004114a4;
  uRam00000001137ed6f8 = 0x100414a00;
  pcRam00000001137ed700 = FUN_1004111d8;
  puRam00000001137ed708 = &UNK_10ae3ee74;
  puRam00000001137ed710 = &UNK_10ae3eed0;
  puRam00000001137ed718 = &UNK_10ae377bc;
  puRam00000001137ed720 = &UNK_10ae377d4;
  puRam00000001137ed728 = &UNK_10ae3eee8;
  return plVar3;
}



/* Entry: 100410854; end: 100410a07;  */

void FUN_100410854(void)

{
  int iVar1;
  
  uRam0000000113836f50 = 0x2cc;
  puRam0000000113836f58 = &UNK_10e526418;
  uRam0000000113836f60 = 5;
  puRam0000000113836f68 = &UNK_10f6c7573;
  uRam0000000113836f70 = 0x42;
  puRam0000000113836f78 = &UNK_10e52641d;
  iVar1 = 0x13310e20;
  func_0x000107c6127c(0x113310e20,FUN_100410a08);
  if (iVar1 == 0) {
    uRam0000000113836f80 = 0x1137ed678;
    uRam0000000113836f88 = 0x2cb;
    puRam0000000113836f90 = &UNK_10e5265a9;
    uRam0000000113836f98 = 5;
    puRam0000000113836fa0 = &UNK_10f6c757e;
    uRam0000000113836fa8 = 0x30;
    puRam0000000113836fb0 = &UNK_10e5265ae;
    iVar1 = 0x13310e20;
    func_0x000107c6127c(0x113310e20,FUN_100410a08);
    if (iVar1 == 0) {
      uRam0000000113836fb8 = 0x1137ed678;
      uRam0000000113836fc0 = 0x19f;
      puRam0000000113836fc8 = &UNK_10e5266ce;
      uRam0000000113836fd0 = 8;
      puRam0000000113836fd8 = &UNK_10f6c7589;
      uRam0000000113836fe0 = 0x20;
      puRam0000000113836fe8 = &UNK_10e5266d6;
      iVar1 = 0x13310e40;
      func_0x000107c6127c(0x113310e40,0x100410af0);
      if (iVar1 == 0) {
        uRam0000000113836ff0 = 0x1137ed7e8;
        uRam0000000113836ff8 = 0x2c9;
        puRam0000000113837000 = &UNK_10e526796;
        uRam0000000113837008 = 5;
        puRam0000000113837010 = &UNK_10f6c7594;
        uRam0000000113837018 = 0x1c;
        puRam0000000113837020 = &UNK_10e52679b;
        iVar1 = 0x13310e30;
        func_0x000107c6127c(0x113310e30,0x100410ba0);
        if (iVar1 == 0) {
          uRam0000000113837028 = 0x1137ed730;
          return;
        }
      }
    }
  }
  func_0x000107c60ebc();
  pcRam00000001137ed678 = FUN_100410d58;
  puRam00000001137ed680 = &UNK_10ae365a4;
  pcRam00000001137ed688 = FUN_100410d70;
  puRam00000001137ed690 = &UNK_10ae3eb68;
  puRam00000001137ed698 = &UNK_10ae3ec70;
  puRam00000001137ed6a0 = &UNK_10ae36638;
  puRam00000001137ed6a8 = &UNK_10ae36c24;
  puRam00000001137ed6b0 = &UNK_10ae37904;
  puRam00000001137ed6b8 = &UNK_10ae37cc4;
  puRam00000001137ed6c0 = &UNK_10ae37cd4;
  puRam00000001137ed6d0 = &UNK_10ae38834;
  puRam00000001137ed6d8 = &UNK_10ae38274;
  puRam00000001137ed6e0 = &UNK_10ae3843c;
  pcRam00000001137ed6e8 = FUN_1004117f4;
  pcRam00000001137ed6f0 = FUN_1004114a4;
  uRam00000001137ed6f8 = 0x100414a00;
  pcRam00000001137ed700 = FUN_1004111d8;
  puRam00000001137ed708 = &UNK_10ae3ee74;
  puRam00000001137ed710 = &UNK_10ae3eed0;
  puRam00000001137ed718 = &UNK_10ae377bc;
  puRam00000001137ed720 = &UNK_10ae377d4;
  puRam00000001137ed728 = &UNK_10ae3eee8;
  return;
}



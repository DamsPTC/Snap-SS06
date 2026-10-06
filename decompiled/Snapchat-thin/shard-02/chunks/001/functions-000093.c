/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019382fc; end: 10193834f;  */

uint FUN_1019382fc(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 101938350; end: 10193837f;  */

/* WARNING: Possible PIC construction at 0x000101938364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101938368) */

void FUN_101938350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101938380; end: 10193847f;  */

undefined8 * FUN_101938380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[7] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 101938480; end: 1019384e3;  */

undefined8 * FUN_101938480(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1019384e4; end: 10193858b;  */

int FUN_1019384e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10193858c; end: 1019385b7;  */

void FUN_10193858c(void)

{
  func_0x000101938034(0x112dd6120,&UNK_100f13690,&UNK_10d998b68);
  return;
}



/* Entry: 1019385b8; end: 1019385bb;  */

void FUN_1019385b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd6128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d998c08;
  func_0x000107c61520(&UNK_10d998c08,&UNK_110414ac0);
  puRam0000000112dd6128 = puVar1;
  return;
}



/* Entry: 1019385bc; end: 1019385fb;  */

void FUN_1019385bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd6128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d998c08;
  func_0x000107c61520(&UNK_10d998c08,&UNK_110414ac0);
  puRam0000000112dd6128 = puVar1;
  return;
}



/* Entry: 1019385fc; end: 1019386bb;  */

void FUN_1019385fc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1019386bc; end: 101938a23;  */

long FUN_1019386bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110414b50;
  func_0x000107c613fc(&UNK_110414b50,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  pcStack_70 = FUN_101938a24;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101938a30;
  puStack_78 = &UNK_110414b68;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 101938a24; end: 101938a2f;  */

void FUN_101938a24(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  puVar5 = *(undefined **)(unaff_x20 + 0x28);
  lVar2 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c40454(uVar3);
  func_0x000107c61180();
  func_0x000107c3e6fc();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uStack_68 = uVar7;
    func_0x000107c444a4();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar6;
    func_0x000107c3ea48();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126a7e38;
      func_0x000107c610f8(PTR_PTR_1126a7e38);
      func_0x000107c453e4();
    }
    uVar7 = 0;
    FUN_101935918(0);
    lVar8 = lVar4;
    func_0x000107c614f0(lVar4);
    (**(code **)(lVar10 + 0x68))
              (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lVar2);
    puVar6 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar9 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010efc1550);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar6);
    func_0x000107c61170(uVar9);
    (**(code **)(lVar10 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    FUN_101937a64(0x3fa999999999999a,uVar3,uStack_68,lVar4,puVar5,puVar6,6,uVar7,lVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101938a24);
  (*pcVar1)();
}



/* Entry: 101938a30; end: 101938a67;  */

void FUN_101938a30(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101938a68; end: 101938a6f;  */

void FUN_101938a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101938a70; end: 101938aab;  */

void FUN_101938a70(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101938aac; end: 101938ab3;  */

void FUN_101938aac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101938ab4; end: 101938ad7;  */

void FUN_101938ab4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101938ad8; end: 101938b0f;  */

void FUN_101938ad8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7e30;
  func_0x000107c610f8();
  func_0x000107c489ec();
  *param_1 = puVar1;
  return;
}



/* Entry: 101938b10; end: 101938b17;  */

void FUN_101938b10(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  puVar5 = *(undefined **)(unaff_x20 + 0x28);
  lVar2 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x000107c40454(uVar3);
  func_0x000107c61180();
  func_0x000107c3e6fc();
  func_0x000107c61180();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uStack_68 = uVar7;
    func_0x000107c444a4();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar5 = puVar6;
    func_0x000107c3ea48();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126a7e38;
      func_0x000107c610f8(PTR_PTR_1126a7e38);
      func_0x000107c453e4();
    }
    uVar7 = 0;
    FUN_101935918(0);
    lVar8 = lVar4;
    func_0x000107c614f0(lVar4);
    (**(code **)(lVar10 + 0x68))
              (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,
               lVar2);
    puVar6 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar9 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010efc1550);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar6);
    func_0x000107c61170(uVar9);
    (**(code **)(lVar10 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    FUN_101937a64(0x3fa999999999999a,uVar3,uStack_68,lVar4,puVar5,puVar6,6,uVar7,lVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101938a24);
  (*pcVar1)();
}



/* Entry: 101938b18; end: 101938bab; -[_TtC36SCBitmojiProfileLensServicesProvider26BitmojiProfileLensProvider setProfileImageObservable:friendId:] */

void FUN_101938b18(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101938bac; end: 101938bb3; -[_TtC36SCBitmojiProfileLensServicesProvider26BitmojiProfileLensProvider profileImageObservable] */

void FUN_101938bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101938bb4; end: 101938c03; -[_TtC36SCBitmojiProfileLensServicesProvider26BitmojiProfileLensProvider friendId] */

void FUN_101938bb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101938c04; end: 101938c2f;  */

void FUN_101938c04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101938c30; end: 101938c8b;  */

undefined8 FUN_101938c30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x00010099d2b0(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 101938c8c; end: 101938cc3;  */

void FUN_101938c8c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101938cc4; end: 101938cef;  */

void FUN_101938cc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101938cf0; end: 101938e9b;  */

long FUN_101938cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  func_0x000100772df0();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100772e74();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100772ed0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return unaff_x20;
}



/* Entry: 101938e9c; end: 101938f0f;  */

void FUN_101938e9c(void)

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
  return;
}



/* Entry: 101938f10; end: 101938f53;  */

undefined1  [16] FUN_101938f10(void)

{
  return ZEXT816(0x110414de0);
}



/* Entry: 101938f54; end: 101938fa7;  */

void FUN_101938f54(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101938fa8; end: 10193903b;  */

void FUN_101938fa8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002165e0();
  func_0x000107c613fc();
  FUN_10193909c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10193903c; end: 101939047;  */

void FUN_10193903c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002165e0();
  func_0x000107c613fc();
  FUN_10193909c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101939048; end: 10193909b;  */

undefined8 FUN_101939048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10193909c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10193909c; end: 101939177;  */

void FUN_10193909c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10193cf80(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010193cd50();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010193cd84();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101939178; end: 1019391b3;  */

void FUN_101939178(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019391b4; end: 101939207;  */

void FUN_1019391b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101939208; end: 101939253;  */

void FUN_101939208(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101939254; end: 1019392a7;  */

void FUN_101939254(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019392a8; end: 1019393cb;  */

long FUN_1019392a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001003d9ec8(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003d9f48();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003d9f84();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 1019393cc; end: 10193940f;  */

void FUN_1019393cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101939410; end: 101939453;  */

undefined1  [16] FUN_101939410(void)

{
  return ZEXT816(0x110414f70);
}



/* Entry: 101939454; end: 1019394a7;  */

void FUN_101939454(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019394a8; end: 10193970f;  */

long FUN_1019394a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  func_0x0001003da0cc();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c615f4(param_5,2);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003da16c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003da198();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  return unaff_x20;
}



/* Entry: 101939710; end: 1019397a3;  */

void FUN_101939710(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1019397a4; end: 1019397e7;  */

undefined1  [16] FUN_1019397a4(void)

{
  return ZEXT816(0x110415038);
}



/* Entry: 1019397e8; end: 10193983b;  */

void FUN_1019397e8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193983c; end: 1019399af;  */

long FUN_10193983c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  func_0x0001003d4d6c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003d4df8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003d4e0c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return unaff_x20;
}



/* Entry: 1019399b0; end: 101939a1b;  */

void FUN_1019399b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101939a1c; end: 101939a5f;  */

undefined1  [16] FUN_101939a1c(void)

{
  return ZEXT816(0x110415100);
}



/* Entry: 101939a60; end: 101939ab3;  */

void FUN_101939a60(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101939ab4; end: 101939c5b;  */

void FUN_101939ab4(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002198e4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_101950514(0);
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
  func_0x00010194fa68();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10194fab0();
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



/* Entry: 101939c5c; end: 101939c6b;  */

void FUN_101939c5c(long *param_1)

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
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002198e4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_101950514(0);
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
  func_0x00010194fa68();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10194fab0();
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



/* Entry: 101939c6c; end: 101939db7;  */

long FUN_101939c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_101950514(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010194fa68();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10194fab0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101939db8; end: 101939e03;  */

void FUN_101939db8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 101939e04; end: 101939e57;  */

void FUN_101939e04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101939e58; end: 101939ea3;  */

void FUN_101939e58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101939ea4; end: 101939ef7;  */

void FUN_101939ea4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101939ef8; end: 101939f4b;  */

undefined8 FUN_101939ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001003e77d4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101939f4c; end: 101939f87;  */

void FUN_101939f4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101939f88; end: 101939fd7;  */

undefined8 FUN_101939f88(void)

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



/* Entry: 101939fd8; end: 10193a01b;  */

undefined1  [16] FUN_101939fd8(void)

{
  return ZEXT816(0x110415290);
}



/* Entry: 10193a01c; end: 10193a043;  */

void FUN_10193a01c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193a044; end: 10193a04b;  */

undefined8 FUN_10193a044(void)

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



/* Entry: 10193a04c; end: 10193a09f;  */

undefined8 FUN_10193a04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100420b78(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10193a0a0; end: 10193a0db;  */

void FUN_10193a0a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193a0dc; end: 10193a12b;  */

undefined8 FUN_10193a0dc(void)

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



/* Entry: 10193a12c; end: 10193a16f;  */

undefined1  [16] FUN_10193a12c(void)

{
  return ZEXT816(0x110415358);
}



/* Entry: 10193a170; end: 10193a197;  */

void FUN_10193a170(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193a198; end: 10193a19f;  */

undefined8 FUN_10193a198(void)

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



/* Entry: 10193a1a0; end: 10193a213;  */

void FUN_10193a1a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010020e67c();
  func_0x000107c613fc();
  FUN_10193a268(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10193a214; end: 10193a21b;  */

void FUN_10193a214(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x00010020e67c();
  func_0x000107c613fc();
  FUN_10193a268(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193a21c; end: 10193a267;  */

undefined8 FUN_10193a21c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10193a268(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10193a268; end: 10193a3cb;  */

void FUN_10193a268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7e50;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10193a3cc; end: 10193a3ff;  */

void FUN_10193a3cc(void)

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



/* Entry: 10193a400; end: 10193a453;  */

void FUN_10193a400(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193a454; end: 10193a45b;  */

void FUN_10193a454(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193a45c; end: 10193a4ab;  */

undefined8 FUN_10193a45c(void)

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



/* Entry: 10193a4ac; end: 10193a4ef;  */

undefined1  [16] FUN_10193a4ac(void)

{
  return ZEXT816(0x110415420);
}



/* Entry: 10193a4f0; end: 10193a517;  */

void FUN_10193a4f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193a518; end: 10193a51f;  */

undefined8 FUN_10193a518(void)

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



/* Entry: 10193a520; end: 10193b1b7;  */

long FUN_10193a520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
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
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
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
  func_0x000107c61174();
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7e58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc1590);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_18);
  func_0x000107c61174(puVar4);
  uVar5 = 0x7672655372657375;
  func_0x000107c5fadc(0x7672655372657375,0xec00000073656369);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_19);
  func_0x000107c61174(puVar4);
  uVar5 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(param_20);
  func_0x000107c61174();
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc15b0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc15d0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar4);
  func_0x000107c61174();
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc15f0);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61174(puVar4);
  func_0x000107c61174();
  uVar5 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc1610);
  func_0x000107c5a49c(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(puVar4);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10193b1b4);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0xd0) = puVar2;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_22);
    *(undefined **)(unaff_x20 + 0xd8) = puVar3;
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
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10193b1b8);
  (*pcVar1)();
}



/* Entry: 10193b1b8; end: 10193b2bb;  */

void FUN_10193b1b8(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 10193b2bc; end: 10193b30b;  */

undefined8 FUN_10193b2bc(void)

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



/* Entry: 10193b30c; end: 10193b35f;  */

undefined1  [16] FUN_10193b30c(void)

{
  return ZEXT816(0x1104154e8);
}



/* Entry: 10193b360; end: 10193b387;  */

void FUN_10193b360(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193b388; end: 10193b38f;  */

undefined8 FUN_10193b388(void)

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



/* Entry: 10193b390; end: 10193b403;  */

void FUN_10193b390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010020c758();
  func_0x000107c613fc();
  FUN_10193b458(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10193b404; end: 10193b40b;  */

void FUN_10193b404(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  func_0x00010020c758();
  func_0x000107c613fc();
  FUN_10193b458(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193b40c; end: 10193b457;  */

undefined8 FUN_10193b40c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10193b458(param_1,param_2);
  return unaff_x20;
}



/* Entry: 10193b458; end: 10193b5bb;  */

void FUN_10193b458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7e60;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc1630);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10193b5bc; end: 10193b5ef;  */

void FUN_10193b5bc(void)

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



/* Entry: 10193b5f0; end: 10193b643;  */

void FUN_10193b5f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193b644; end: 10193b64b;  */

void FUN_10193b644(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10193b64c; end: 10193b69b;  */

undefined8 FUN_10193b64c(void)

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



/* Entry: 10193b69c; end: 10193b6df;  */

undefined1  [16] FUN_10193b69c(void)

{
  return ZEXT816(0x1104155d0);
}



/* Entry: 10193b6e0; end: 10193b707;  */

void FUN_10193b6e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10193b708; end: 10193b70f;  */

undefined8 FUN_10193b708(void)

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



/* Entry: 10193b710; end: 10193b773;  */

undefined8
FUN_10193b710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10193b774(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 10193b774; end: 10193b9d7;  */

void FUN_10193b774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a7e68;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 10193b9d8; end: 10193ba1b;  */

void FUN_10193b9d8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10193ba1c; end: 10193ba6b;  */

undefined8 FUN_10193ba1c(void)

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



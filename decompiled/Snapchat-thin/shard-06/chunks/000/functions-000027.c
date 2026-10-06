/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043ee3a8; end: 1043ee453;  */

void FUN_1043ee3a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1043ee454; end: 1043ee493;  */

void FUN_1043ee454(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1043ee494; end: 1043ee4eb; -[SCMainCameraTabBarPresentationInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ee494(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113076748) == '\x01') {
    if (*(long *)(param_1 + _DAT_113076758) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ee4bc);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113076750) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ee4ec);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ee4ec; end: 1043ee533; -[SCMainCameraTabBarPresentationInfo init] */

void FUN_1043ee4ec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMainCameraScope/SCMainCameraTabBarPresentationInfoWrapper.swift",0x41,2,0x2f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ee534);
  (*pcVar1)();
}



/* Entry: 1043ee534; end: 1043ee537; -[SCMainCameraTabBarPresentationInfo copyWithZone:] */

void FUN_1043ee534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043ee538; end: 1043ee5ab; +[SCMainCameraTabBarPresentationInfo willTapTabBarWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ee538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113076748) = 0;
  *(undefined8 *)(lVar2 + _DAT_113076750) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113076758) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ee5ac; end: 1043ee68f; +[SCMainCameraTabBarPresentationInfo didTapTabBarWithItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ee5ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113076748) = 1;
  *(undefined8 *)(lVar2 + _DAT_113076750) = 0;
  *(undefined8 *)(lVar2 + _DAT_113076758) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043ee690; end: 1043ee6db; -[SCMainCameraTabBarPresentationInfo matchWillTapTabBar:didTapTabBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ee690(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113076748) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_113076758) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ee6bc);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_113076750) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1043ee6dc);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x0001043ee6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1043ee6dc; end: 1043ee70f;  */

void FUN_1043ee6dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043ee710; end: 1043ee747; -[SCMainCameraTabBarPresentationInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043ee710(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113076750));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113076758));
  return;
}



/* Entry: 1043ee748; end: 1043ee8af;  */

int FUN_1043ee748(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1043ee7c4;
        goto LAB_1043ee7a8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1043ee7a8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1043ee7c4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1043ee8b0; end: 1043ee927;  */

void FUN_1043ee8b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113076788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf7d38;
  _swift_getWitnessTable(&UNK_10dcf7d38,&UNK_1107675f8);
  puRam0000000113076788 = puVar1;
  return;
}



/* Entry: 1043ee928; end: 1043eec8f;  */

long * FUN_1043ee928(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar16 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar16;
    lVar16 = param_2[4];
    _objc_retain();
    if (lVar16 == 1) {
      lVar16 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = lVar16;
      lVar16 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = lVar16;
      lVar16 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = lVar16;
      param_1[0x19] = param_2[0x19];
      lVar16 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = lVar16;
      lVar16 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = lVar16;
      lVar16 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = lVar16;
      lVar16 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = lVar16;
      lVar16 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar16;
      lVar16 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = lVar16;
      lVar16 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = lVar16;
      lVar16 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = lVar16;
    }
    else {
      param_1[3] = param_2[3];
      param_1[4] = lVar16;
      lVar1 = param_2[6];
      param_1[5] = param_2[5];
      param_1[6] = lVar1;
      lVar2 = param_2[8];
      param_1[7] = param_2[7];
      param_1[8] = lVar2;
      lVar3 = param_2[10];
      param_1[9] = param_2[9];
      param_1[10] = lVar3;
      lVar4 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = lVar4;
      lVar11 = param_2[0x15];
      lVar14 = param_2[0xd];
      lVar5 = param_2[0xe];
      param_1[0xd] = lVar14;
      param_1[0xe] = lVar5;
      *(char *)(param_1 + 0xf) = (char)param_2[0xf];
      lVar18 = param_2[0x10];
      lVar6 = param_2[0x11];
      param_1[0x10] = lVar18;
      param_1[0x11] = lVar6;
      lVar7 = param_2[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = lVar7;
      lVar12 = param_2[0x14];
      param_1[0x14] = lVar12;
      _swift_bridgeObjectRetain(lVar16);
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(lVar2);
      _swift_bridgeObjectRetain(lVar3);
      _swift_bridgeObjectRetain(lVar4);
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(lVar5);
      _objc_retain(lVar18);
      _objc_retain(lVar6);
      _swift_bridgeObjectRetain(lVar7);
      _swift_bridgeObjectRetain(lVar12);
      if (lVar11 == 0) {
        lVar16 = param_2[0x15];
        lVar18 = param_2[0x18];
        lVar14 = param_2[0x17];
        param_1[0x16] = param_2[0x16];
        param_1[0x15] = lVar16;
        param_1[0x18] = lVar18;
        param_1[0x17] = lVar14;
        param_1[0x19] = param_2[0x19];
      }
      else {
        lVar16 = param_2[0x16];
        lVar14 = param_2[0x17];
        param_1[0x15] = lVar11;
        param_1[0x16] = lVar16;
        param_1[0x17] = lVar14;
        uVar17 = param_2[0x19];
        _objc_retain();
        _swift_bridgeObjectRetain(lVar14);
        if (uVar17 >> 0x3c < 0xf) {
          lVar16 = param_2[0x18];
          func_0x00010006c00c(lVar16,uVar17);
          param_1[0x18] = lVar16;
          param_1[0x19] = uVar17;
        }
        else {
          lVar16 = param_2[0x18];
          param_1[0x19] = param_2[0x19];
          param_1[0x18] = lVar16;
        }
      }
    }
    lVar16 = param_2[0x1b];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = lVar16;
    lVar14 = param_2[0x1d];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar16);
    if (lVar14 == 1) {
      lVar16 = param_2[0x1c];
      lVar18 = param_2[0x1f];
      lVar14 = param_2[0x1e];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = lVar16;
      param_1[0x1f] = lVar18;
      param_1[0x1e] = lVar14;
      *(int *)(param_1 + 0x20) = (int)param_2[0x20];
    }
    else {
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1d] = lVar14;
      lVar16 = param_2[0x1f];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = lVar16;
      *(int *)(param_1 + 0x20) = (int)param_2[0x20];
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(lVar16);
    }
    lVar14 = (long)*(int *)(param_3 + 0x2c);
    lVar16 = 0;
    __s10Foundation4DateVMa();
    lVar18 = *(long *)(lVar16 + -8);
    puVar10 = (undefined1 *)((long)param_2 + lVar14);
    (**(code **)(lVar18 + 0x30))(puVar10,1,lVar16);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar18 + 0x10))
                ((undefined1 *)((long)param_1 + lVar14),(undefined1 *)((long)param_2 + lVar14),
                 lVar16);
      (**(code **)(lVar18 + 0x38))((undefined1 *)((long)param_1 + lVar14),0,1,lVar16);
    }
    else {
      lVar16 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      _memcpy((undefined1 *)((long)param_1 + lVar14),(undefined1 *)((long)param_2 + lVar14),
              *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
    }
    iVar8 = *(int *)(param_3 + 0x34);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *(undefined1 *)((long)param_1 + (long)iVar8) = *(undefined1 *)((long)param_2 + (long)iVar8);
    iVar8 = *(int *)(param_3 + 0x3c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar15 = *(undefined8 *)((long)param_2 + (long)iVar8);
    *(undefined8 *)((long)param_1 + (long)iVar8) = uVar15;
    iVar8 = *(int *)(param_3 + 0x44);
    uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) = uVar13;
    *(undefined1 *)((long)param_1 + (long)iVar8) = *(undefined1 *)((long)param_2 + (long)iVar8);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar13);
  }
  else {
    lVar16 = *param_2;
    *param_1 = lVar16;
    uVar17 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar16 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1043eec90; end: 1043eedd7;  */

void FUN_1043eec90(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_release(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x20) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
    _objc_release(*(undefined8 *)(param_1 + 0x80));
    _objc_release(*(undefined8 *)(param_1 + 0x88));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x98));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xa0));
    if (*(long *)(param_1 + 0xa8) != 0) {
      _objc_release();
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xb8));
      if (*(ulong *)(param_1 + 200) >> 0x3c < 0xf) {
        func_0x00010006c090(*(undefined8 *)(param_1 + 0xc0));
      }
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xd0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xd8));
  if (*(long *)(param_1 + 0xe8) != 1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xf8));
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x40)));
  return;
}



/* Entry: 1043eedd8; end: 1043ef893;  */

undefined1 * FUN_1043eedd8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  lVar12 = *(long *)(param_2 + 0x20);
  _objc_retain();
  if (lVar12 == 1) {
    uVar10 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 0xb8) = uVar10;
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar10;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_1 + 0x20) = lVar12;
    uVar15 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = uVar15;
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    lVar14 = *(long *)(param_2 + 0xa8);
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    param_1[0x78] = param_2[0x78];
    uVar11 = *(undefined8 *)(param_2 + 0x80);
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar11;
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = uVar6;
    uVar9 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar11);
    _objc_retain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar9);
    if (lVar14 == 0) {
      lVar12 = *(long *)(param_2 + 0xa8);
      uVar11 = *(undefined8 *)(param_2 + 0xc0);
      uVar10 = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
      *(long *)(param_1 + 0xa8) = lVar12;
      *(undefined8 *)(param_1 + 0xc0) = uVar11;
      *(undefined8 *)(param_1 + 0xb8) = uVar10;
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    }
    else {
      uVar10 = *(undefined8 *)(param_2 + 0xb0);
      uVar11 = *(undefined8 *)(param_2 + 0xb8);
      *(long *)(param_1 + 0xa8) = lVar14;
      *(undefined8 *)(param_1 + 0xb0) = uVar10;
      *(undefined8 *)(param_1 + 0xb8) = uVar11;
      uVar13 = *(ulong *)(param_2 + 200);
      _objc_retain();
      _swift_bridgeObjectRetain(uVar11);
      if (uVar13 >> 0x3c < 0xf) {
        uVar10 = *(undefined8 *)(param_2 + 0xc0);
        func_0x00010006c00c(uVar10,uVar13);
        *(undefined8 *)(param_1 + 0xc0) = uVar10;
        *(ulong *)(param_1 + 200) = uVar13;
      }
      else {
        uVar10 = *(undefined8 *)(param_2 + 0xc0);
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
        *(undefined8 *)(param_1 + 0xc0) = uVar10;
      }
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar10;
  lVar12 = *(long *)(param_2 + 0xe8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar10);
  if (lVar12 == 1) {
    uVar10 = *(undefined8 *)(param_2 + 0xe0);
    uVar15 = *(undefined8 *)(param_2 + 0xf8);
    uVar11 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = uVar10;
    *(undefined8 *)(param_1 + 0xf8) = uVar15;
    *(undefined8 *)(param_1 + 0xf0) = uVar11;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  }
  else {
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(long *)(param_1 + 0xe8) = lVar12;
    uVar10 = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = uVar10;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(uVar10);
  }
  iVar7 = *(int *)(param_3 + 0x2c);
  lVar12 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar12 + -8);
  puVar8 = param_2 + iVar7;
  (**(code **)(lVar14 + 0x30))(puVar8,1,lVar12);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar14 + 0x10))(param_1 + iVar7,param_2 + iVar7,lVar12);
    (**(code **)(lVar14 + 0x38))(param_1 + iVar7,0,1,lVar12);
  }
  else {
    lVar12 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy(param_1 + iVar7,param_2 + iVar7,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  iVar7 = *(int *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  param_1[iVar7] = param_2[iVar7];
  iVar7 = *(int *)(param_3 + 0x3c);
  param_1[*(int *)(param_3 + 0x38)] = param_2[*(int *)(param_3 + 0x38)];
  uVar11 = *(undefined8 *)(param_2 + iVar7);
  *(undefined8 *)(param_1 + iVar7) = uVar11;
  iVar7 = *(int *)(param_3 + 0x44);
  uVar10 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x40));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x40)) = uVar10;
  param_1[iVar7] = param_2[iVar7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar10);
  return param_1;
}



/* Entry: 1043ef894; end: 1043ef8c7;  */

undefined8 FUN_1043ef894(undefined8 param_1)

{
  (*(code *)(undefined *)0x1043f0350)();
  return param_1;
}



/* Entry: 1043ef8c8; end: 1043efa47;  */

undefined1 * FUN_1043ef8c8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  uVar7 = *(undefined8 *)(param_2 + 0xe8);
  uVar6 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(undefined8 *)(param_1 + 0xe8) = uVar7;
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  iVar1 = *(int *)(param_3 + 0x2c);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = param_2 + iVar1;
  (**(code **)(lVar4 + 0x30))(puVar3,1,lVar2);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar4 + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar4 + 0x38))(param_1 + iVar1,0,1,lVar2);
  }
  else {
    lVar2 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    _memcpy(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x30)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x30));
  param_1[iVar1] = param_2[iVar1];
  iVar1 = *(int *)(param_3 + 0x3c);
  param_1[*(int *)(param_3 + 0x38)] = param_2[*(int *)(param_3 + 0x38)];
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  iVar1 = *(int *)(param_3 + 0x44);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x40)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x40));
  param_1[iVar1] = param_2[iVar1];
  return param_1;
}



/* Entry: 1043efa48; end: 1043efe13;  */

undefined1 * FUN_1043efa48(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  if (*(long *)(param_1 + 0x20) == 1) {
LAB_1043efaac:
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 1) {
      FUN_1043ef894(param_1 + 0x18);
      goto LAB_1043efaac;
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_1 + 0x20) = lVar6;
    _swift_bridgeObjectRelease();
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _swift_bridgeObjectRelease(uVar3);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    _swift_bridgeObjectRelease(uVar3);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    _swift_bridgeObjectRelease(uVar3);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    _swift_bridgeObjectRelease(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    _swift_bridgeObjectRelease(uVar2);
    param_1[0x78] = param_2[0x78];
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    _swift_bridgeObjectRelease(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    _swift_bridgeObjectRelease(uVar2);
    plVar8 = (long *)(param_1 + 0xa8);
    if (*plVar8 == 0) {
LAB_1043efde8:
      lVar6 = *(long *)(param_2 + 0xa8);
      uVar3 = *(undefined8 *)(param_2 + 0xc0);
      uVar2 = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
      *plVar8 = lVar6;
      *(undefined8 *)(param_1 + 0xc0) = uVar3;
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    }
    else {
      if (*(long *)(param_2 + 0xa8) == 0) {
        func_0x000103f5c174(plVar8);
        goto LAB_1043efde8;
      }
      *(long *)(param_1 + 0xa8) = *(long *)(param_2 + 0xa8);
      _objc_release();
      uVar2 = *(undefined8 *)(param_2 + 0xb8);
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      _swift_bridgeObjectRelease(uVar3);
      if (*(ulong *)(param_1 + 200) >> 0x3c < 0xf) {
        uVar7 = *(ulong *)(param_2 + 200);
        if (0xe < uVar7 >> 0x3c) {
          func_0x0001006e5814(param_1 + 0xc0);
          goto LAB_1043efc70;
        }
        uVar2 = *(undefined8 *)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
        *(ulong *)(param_1 + 200) = uVar7;
        func_0x00010006c090(uVar2);
      }
      else {
LAB_1043efc70:
        uVar2 = *(undefined8 *)(param_2 + 0xc0);
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
        *(undefined8 *)(param_1 + 0xc0) = uVar2;
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)(param_1 + 0xe8) == 1) {
LAB_1043efb54:
    uVar2 = *(undefined8 *)(param_2 + 0xe0);
    uVar11 = *(undefined8 *)(param_2 + 0xf8);
    uVar3 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = uVar2;
    *(undefined8 *)(param_1 + 0xf8) = uVar11;
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  }
  else {
    lVar6 = *(long *)(param_2 + 0xe8);
    if (lVar6 == 1) {
      func_0x000103f5c140(param_1 + 0xe0);
      goto LAB_1043efb54;
    }
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(long *)(param_1 + 0xe8) = lVar6;
    _swift_bridgeObjectRelease();
    uVar2 = *(undefined8 *)(param_2 + 0xf8);
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    _swift_bridgeObjectRelease(uVar3);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar6 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  puVar4 = param_1 + iVar1;
  (*pcVar10)(puVar4,1,lVar6);
  puVar5 = param_2 + iVar1;
  (*pcVar10)(puVar5,1,lVar6);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      (**(code **)(lVar9 + 0x28))(param_1 + iVar1,param_2 + iVar1,lVar6);
      goto LAB_1043efd50;
    }
    (**(code **)(lVar9 + 8))(param_1 + iVar1,lVar6);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar6);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar1,0,1,lVar6);
    goto LAB_1043efd50;
  }
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  _memcpy(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
LAB_1043efd50:
  iVar1 = *(int *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  _swift_bridgeObjectRelease(uVar2);
  iVar1 = *(int *)(param_3 + 0x38);
  param_1[*(int *)(param_3 + 0x34)] = param_2[*(int *)(param_3 + 0x34)];
  param_1[iVar1] = param_2[iVar1];
  iVar1 = *(int *)(param_3 + 0x3c);
  uVar2 = *(undefined8 *)(param_1 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  _swift_bridgeObjectRelease(uVar2);
  iVar1 = *(int *)(param_3 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  _swift_bridgeObjectRelease(uVar2);
  param_1[*(int *)(param_3 + 0x44)] = param_2[*(int *)(param_3 + 0x44)];
  return param_1;
}



/* Entry: 1043efe14; end: 1043efe2b;  */

void FUN_1043efe14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1043efe2c; end: 1043efee3;  */

void FUN_1043efe2c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_a0 = &UNK_10dcf7e30;
  puStack_98 = &UNK_10dcf7e48;
  puStack_90 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_88 = &UNK_10dcf7e60;
  puStack_80 = &UNK_10dcf7e48;
  puStack_78 = &UNK_10dcf7e48;
  puStack_70 = &UNK_10dcf7e78;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dcf7e48;
    puStack_58 = &UNK_10dcf7e30;
    puStack_50 = &UNK_10dcf7e30;
    puStack_48 = &UNK_10dcf7e48;
    puStack_40 = &UNK_10dcf7e48;
    puStack_38 = &UNK_10dcf7e30;
    _swift_initStructMetadata(param_1,0x100,0xe,&puStack_a0,param_1 + 0x10);
  }
  return;
}



/* Entry: 1043efee4; end: 1043eff0b;  */

void FUN_1043efee4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110767718;
  if (lRam0000000113076858 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113076858 = param_1;
  }
  return;
}



/* Entry: 1043eff0c; end: 1043eff4f;  */

void FUN_1043eff0c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1043eff50; end: 1043eff7f;  */

bool FUN_1043eff50(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1043eff80; end: 1043f0f6b;  */

long FUN_1043eff80(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043f0f6c; end: 1043f0f7b; -[SCStoriesPostingConfiguration postToMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f0f6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113076868);
}



/* Entry: 1043f0f7c; end: 1043f0f8b; -[SCStoriesPostingConfiguration myStoryPrivacyOverride] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f0f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076870));
  return;
}



/* Entry: 1043f0f8c; end: 1043f0f9b; -[SCStoriesPostingConfiguration myStoryCustomTTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1043f0f8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113076878);
}



/* Entry: 1043f0f9c; end: 1043f0fab; -[SCStoriesPostingConfiguration ourStoryMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f0f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076880));
  return;
}



/* Entry: 1043f0fac; end: 1043f0fb7; -[SCStoriesPostingConfiguration allCustomStoriesMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f0fac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113076888);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043f7068(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f0fb8; end: 1043f0fc3; -[SCStoriesPostingConfiguration newlyCreatedCustomStoriesMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f0fb8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113076890);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043f7068(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f0fc4; end: 1043f101b;  */

void FUN_1043f0fc4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043f7068(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f101c; end: 1043f102b; -[SCStoriesPostingConfiguration selectedSponsor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f101c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076898));
  return;
}



/* Entry: 1043f102c; end: 1043f1103; -[SCStoriesPostingConfiguration goLiveTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f102c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001043f3244(param_1 + _DAT_1138135b8,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043f1104; end: 1043f110f; -[SCStoriesPostingConfiguration businessIdsToCustomTTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f1104(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138135c0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001002ed07c(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f1110; end: 1043f111f; -[SCStoriesPostingConfiguration shouldAllowSpotlightRemixing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f1110(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138135c8);
}



/* Entry: 1043f1120; end: 1043f112f; -[SCStoriesPostingConfiguration postToPublicStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f1120(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138135d0);
}



/* Entry: 1043f1130; end: 1043f1183; -[SCStoriesPostingConfiguration publicStoryBusinessIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f1130(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138135d8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f1184; end: 1043f118f; -[SCStoriesPostingConfiguration businessStoryVariants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f1184(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138135e0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001002ed07c(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f1190; end: 1043f11f7;  */

void FUN_1043f1190(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001002ed07c(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f11f8; end: 1043f1207; -[SCStoriesPostingConfiguration shouldCrossPostToStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f11f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1138135e8);
}



/* Entry: 1043f1208; end: 1043f1543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1043f1208(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113076868) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076870) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113076878) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113076880) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113076888) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113076890) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113076898) = param_7;
  func_0x0001043f3244(param_8,unaff_x20 + _DAT_1138135b8,0x112d373d8,&UNK_10d9014c0);
  *(undefined8 *)(unaff_x20 + _DAT_1138135c0) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_1138135c8) = (undefined1)param_10;
  *(undefined1 *)(unaff_x20 + _DAT_1138135d0) = param_10._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_1138135d8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_1138135e0) = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_1138135e8) = param_14;
  puVar1 = auStack_70;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  func_0x0001043f328c(param_8,0x112d373d8,&UNK_10d9014c0);
  return puVar1;
}



/* Entry: 1043f1544; end: 1043f17e7; -[SCStoriesPostingConfiguration initWithPostToMyStory:myStoryPrivacyOverride:myStoryCustomTTL:ourStoryMetadata:allCustomStoriesMetadata:newlyCreatedCustomStoriesMetadata:selectedSponsor:goLiveTimestamp:businessIdsToCustomTTL:shouldAllowSpotlightRemixing:postToPublicStory:publicStoryBusinessIds:businessStoryVariants:shouldCrossPostToStories:] */

void FUN_1043f1544(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,long param_10,long param_11,undefined4 param_12,undefined4 param_13,long param_14
                  ,long param_15,undefined1 param_16)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  long alStack_b0 [2];
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112d373d8;
  uStack_74 = param_3;
  uStack_70 = param_5;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar7 = (long)&lStack_90 + lVar1;
  if (param_7 == 0) {
    lStack_80 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1043f7068(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,uVar2);
    lStack_80 = param_7;
  }
  if (param_8 == 0) {
    lStack_90 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1043f7068(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_8,uVar2);
    lStack_90 = param_8;
  }
  if (param_10 == 0) {
    lVar3 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar7,1,1,lVar3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_9);
    _objc_retain(param_11);
    _objc_retain(param_14);
    _objc_retain(param_15);
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar7,param_10);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_9);
    _objc_retain(param_11);
    _objc_retain(param_14);
    _objc_retain(param_15);
    (*pcVar4)(lVar7,0,1,lVar3);
  }
  if (param_11 == 0) {
    uStack_88 = param_9;
    lVar3 = 0;
  }
  else {
    uStack_88 = param_9;
    uVar2 = 0;
    func_0x0001002ed07c(0);
    lVar3 = param_11;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_11,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
    _objc_release(param_11);
  }
  if (param_14 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_14;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_14,PTR___sSSN_11034da80);
    _objc_release(param_14);
  }
  if (param_15 == 0) {
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    lVar5 = param_15;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_15,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
    _objc_release(param_15);
  }
  auStack_a0[lVar1] = param_16;
  *(long *)((long)alStack_b0 + lVar1) = lVar6;
  *(long *)((long)alStack_b0 + lVar1 + 8) = lVar5;
  auStack_b8[lVar1 + 1] = param_12._1_1_;
  auStack_b8[lVar1] = (undefined1)param_12;
  *(long *)((long)&lStack_c0 + lVar1) = lVar3;
  func_0x0001043f13a8(uStack_74,param_4,uStack_70,param_6,lStack_80,lStack_90,uStack_88,lVar7);
  return;
}



/* Entry: 1043f17e8; end: 1043f1817;  */

void FUN_1043f17e8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1043f1818(param_1);
  return;
}



/* Entry: 1043f1818; end: 1043f1e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043f1818(undefined1 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  long unaff_x20;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *apuStack_2e8 [23];
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_113076868) = *param_1;
  uVar18 = *(undefined8 *)(param_1 + 8);
  uVar19 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + _DAT_113076870) = uVar18;
  *(undefined8 *)(unaff_x20 + _DAT_113076878) = uVar19;
  uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_98 = *(undefined8 *)(param_1 + 0xb0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = *(undefined8 *)(param_1 + 0xc0);
  uStack_90 = *(undefined8 *)(param_1 + 0xb8);
  uStack_80 = *(undefined8 *)(param_1 + 200);
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x20);
  uStack_130 = *(undefined8 *)(param_1 + 0x18);
  uStack_118 = *(undefined8 *)(param_1 + 0x30);
  uStack_120 = *(undefined8 *)(param_1 + 0x28);
  uStack_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_110 = *(undefined8 *)(param_1 + 0x38);
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  iVar9 = (int)&uStack_130;
  FUN_1043f1e30();
  if (iVar9 == 1) {
    _objc_retain(uVar18);
    puVar14 = (undefined8 *)0x0;
  }
  else {
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_140 = uStack_80;
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    uStack_198 = uStack_d8;
    uStack_1a0 = uStack_e0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_1e8 = uStack_128;
    uStack_1f0 = uStack_130;
    uStack_1d8 = uStack_118;
    uStack_1e0 = uStack_120;
    uStack_1c8 = uStack_108;
    uStack_1d0 = uStack_110;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    FUN_1043f6328(0);
    _objc_allocWithZone();
    _objc_retain(uVar18);
    func_0x0001043f3244(&uStack_130,apuStack_2e8,0x113076790,&UNK_10dcf7de0);
    puVar14 = &uStack_1f0;
    FUN_1043f59dc();
    func_0x0001043f328c(&uStack_130,0x113076790,&UNK_10dcf7de0);
  }
  *(undefined8 **)(unaff_x20 + _DAT_113076880) = puVar14;
  lVar13 = *(long *)(param_1 + 0xd0);
  if (lVar13 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar16 = *(long *)(lVar13 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar16 != 0) {
      apuStack_2e8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102f031cc(0,lVar16,0);
      puVar15 = apuStack_2e8[0];
      lVar10 = 0;
      FUN_1043f7068();
      puVar14 = (undefined8 *)(lVar13 + 0x30);
      do {
        uVar18 = puVar14[-2];
        uVar3 = puVar14[-1];
        uVar19 = *puVar14;
        uVar4 = puVar14[1];
        uVar7 = *(undefined1 *)(puVar14 + 2);
        uVar17 = puVar14[3];
        uVar5 = puVar14[4];
        uVar20 = puVar14[5];
        lVar13 = lVar10;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar13 + _DAT_113076ad8);
        *puVar1 = uVar18;
        puVar1[1] = uVar3;
        *(undefined8 *)(lVar13 + _DAT_113076ae0) = uVar19;
        *(undefined8 *)(lVar13 + _DAT_113076ae8) = uVar4;
        *(undefined1 *)(lVar13 + _DAT_113076af0) = uVar7;
        puVar1 = (undefined8 *)(lVar13 + _DAT_113076af8);
        *puVar1 = uVar17;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar13 + _DAT_113076b00) = uVar20;
        puVar8 = PTR_s_init_1125d9248;
        lStack_230 = lVar13;
        lStack_228 = lVar10;
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar5);
        plVar11 = &lStack_230;
        _objc_msgSendSuper2(plVar11,puVar8);
        uVar2 = *(ulong *)(puVar15 + 0x10);
        apuStack_2e8[0] = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar2) {
          func_0x000102f031cc(1 < *(ulong *)(puVar15 + 0x18),uVar2 + 1,1);
        }
        puVar14 = puVar14 + 8;
        *(ulong *)(apuStack_2e8[0] + 0x10) = uVar2 + 1;
        *(long **)(apuStack_2e8[0] + uVar2 * 8 + 0x20) = plVar11;
        lVar16 = lVar16 + -1;
        puVar15 = apuStack_2e8[0];
      } while (lVar16 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113076888) = puVar15;
  lVar13 = *(long *)(param_1 + 0xd8);
  if (lVar13 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar16 = *(long *)(lVar13 + 0x10);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar16 != 0) {
      apuStack_2e8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102f031cc(0,lVar16,0);
      puVar15 = apuStack_2e8[0];
      lVar10 = 0;
      FUN_1043f7068();
      puVar14 = (undefined8 *)(lVar13 + 0x30);
      do {
        uVar18 = puVar14[-2];
        uVar3 = puVar14[-1];
        uVar19 = *puVar14;
        uVar4 = puVar14[1];
        uVar7 = *(undefined1 *)(puVar14 + 2);
        uVar17 = puVar14[3];
        uVar5 = puVar14[4];
        uVar20 = puVar14[5];
        lVar13 = lVar10;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar13 + _DAT_113076ad8);
        *puVar1 = uVar18;
        puVar1[1] = uVar3;
        *(undefined8 *)(lVar13 + _DAT_113076ae0) = uVar19;
        *(undefined8 *)(lVar13 + _DAT_113076ae8) = uVar4;
        *(undefined1 *)(lVar13 + _DAT_113076af0) = uVar7;
        puVar1 = (undefined8 *)(lVar13 + _DAT_113076af8);
        *puVar1 = uVar17;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar13 + _DAT_113076b00) = uVar20;
        puVar8 = PTR_s_init_1125d9248;
        lStack_220 = lVar13;
        lStack_218 = lVar10;
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar5);
        plVar11 = &lStack_220;
        _objc_msgSendSuper2(plVar11,puVar8);
        uVar2 = *(ulong *)(puVar15 + 0x10);
        apuStack_2e8[0] = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar2) {
          func_0x000102f031cc(1 < *(ulong *)(puVar15 + 0x18),uVar2 + 1,1);
        }
        puVar14 = puVar14 + 8;
        *(ulong *)(apuStack_2e8[0] + 0x10) = uVar2 + 1;
        *(long **)(apuStack_2e8[0] + uVar2 * 8 + 0x20) = plVar11;
        lVar16 = lVar16 + -1;
        puVar15 = apuStack_2e8[0];
      } while (lVar16 != 0);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113076890) = puVar15;
  lVar13 = *(long *)(param_1 + 0xe8);
  if (lVar13 == 1) {
    plVar11 = (long *)0x0;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x100);
    uVar18 = *(undefined8 *)(param_1 + 0xf0);
    uVar19 = *(undefined8 *)(param_1 + 0xf8);
    uVar17 = *(undefined8 *)(param_1 + 0xe0);
    lVar10 = 0;
    FUN_1043f7404();
    lVar16 = lVar10;
    _objc_allocWithZone();
    puVar14 = (undefined8 *)(lVar16 + _DAT_113076b30);
    *puVar14 = uVar17;
    puVar14[1] = lVar13;
    puVar14 = (undefined8 *)(lVar16 + _DAT_113076b38);
    *puVar14 = uVar18;
    puVar14[1] = uVar19;
    *(undefined4 *)(lVar16 + _DAT_113076b40) = uVar6;
    puVar15 = PTR_s_init_1125d9248;
    lStack_210 = lVar16;
    lStack_208 = lVar10;
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(uVar19);
    plVar11 = &lStack_210;
    _objc_msgSendSuper2(plVar11,puVar15);
  }
  *(long **)(unaff_x20 + _DAT_113076898) = plVar11;
  lVar13 = 0;
  func_0x0001043ee8f0();
  func_0x0001043f3244(param_1 + *(int *)(lVar13 + 0x2c),unaff_x20 + _DAT_1138135b8,0x112d373d8,
                      &UNK_10d9014c0);
  *(undefined8 *)(unaff_x20 + _DAT_1138135c0) = *(undefined8 *)(param_1 + *(int *)(lVar13 + 0x30));
  *(undefined1 *)(unaff_x20 + _DAT_1138135c8) = param_1[*(int *)(lVar13 + 0x34)];
  *(undefined1 *)(unaff_x20 + _DAT_1138135d0) = param_1[*(int *)(lVar13 + 0x38)];
  uVar18 = *(undefined8 *)(param_1 + *(int *)(lVar13 + 0x3c));
  *(undefined8 *)(unaff_x20 + _DAT_1138135d8) = uVar18;
  uVar19 = *(undefined8 *)(param_1 + *(int *)(lVar13 + 0x40));
  *(undefined8 *)(unaff_x20 + _DAT_1138135e0) = uVar19;
  *(undefined1 *)(unaff_x20 + _DAT_1138135e8) = param_1[*(int *)(lVar13 + 0x44)];
  puVar15 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(uVar19);
  puVar12 = auStack_200;
  _objc_msgSendSuper2(puVar12,puVar15);
  FUN_1043f1e54(param_1);
  return puVar12;
}



/* Entry: 1043f1e30; end: 1043f1e53;  */

int FUN_1043f1e30(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1043f1e54; end: 1043f1e8f;  */

undefined8 FUN_1043f1e54(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001043ee8f0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1043f1e90; end: 1043f1e93; -[SCStoriesPostingConfiguration copyWithZone:] */

void FUN_1043f1e90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043f1e94; end: 1043f1f0b; -[SCStoriesPostingConfiguration description] */

void FUN_1043f1e94(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001043ee8f0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1043f1f0c(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1043f1e54(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f1f0c; end: 1043f26df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f1f0c(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *param_1 = *(undefined1 *)(param_2 + _DAT_113076868);
  uVar16 = *(undefined8 *)(param_2 + _DAT_113076870);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113076878);
  *(undefined8 *)(param_1 + 8) = uVar16;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  if (*(long *)(param_2 + _DAT_113076880) == 0) {
    func_0x0001043f32cc(&uStack_120);
    *(undefined8 *)(param_1 + 0xa0) = uStack_98;
    *(undefined8 *)(param_1 + 0x98) = uStack_a0;
    *(undefined8 *)(param_1 + 0xb0) = uStack_88;
    *(undefined8 *)(param_1 + 0xa8) = uStack_90;
    *(undefined8 *)(param_1 + 0xc0) = uStack_78;
    *(undefined8 *)(param_1 + 0xb8) = uStack_80;
    *(undefined8 *)(param_1 + 0x60) = uStack_d8;
    *(undefined8 *)(param_1 + 0x58) = uStack_e0;
    *(undefined8 *)(param_1 + 0x70) = uStack_c8;
    *(undefined8 *)(param_1 + 0x68) = uStack_d0;
    *(undefined8 *)(param_1 + 0x80) = uStack_b8;
    *(undefined8 *)(param_1 + 0x78) = uStack_c0;
    *(undefined8 *)(param_1 + 0x90) = uStack_a8;
    *(undefined8 *)(param_1 + 0x88) = uStack_b0;
    *(undefined8 *)(param_1 + 0x20) = uStack_118;
    *(undefined8 *)(param_1 + 0x18) = uStack_120;
    *(undefined8 *)(param_1 + 0x30) = uStack_108;
    *(undefined8 *)(param_1 + 0x28) = uStack_110;
    *(undefined8 *)(param_1 + 0x40) = uStack_f8;
    *(undefined8 *)(param_1 + 0x38) = uStack_100;
    *(undefined8 *)(param_1 + 200) = uStack_70;
    *(undefined8 *)(param_1 + 0x50) = uStack_e8;
    *(undefined8 *)(param_1 + 0x48) = uStack_f0;
  }
  else {
    func_0x0001043f5ddc(&uStack_120);
    *(undefined8 *)(param_1 + 0xa0) = uStack_98;
    *(undefined8 *)(param_1 + 0x98) = uStack_a0;
    *(undefined8 *)(param_1 + 0xb0) = uStack_88;
    *(undefined8 *)(param_1 + 0xa8) = uStack_90;
    *(undefined8 *)(param_1 + 0xc0) = uStack_78;
    *(undefined8 *)(param_1 + 0xb8) = uStack_80;
    *(undefined8 *)(param_1 + 0x60) = uStack_d8;
    *(undefined8 *)(param_1 + 0x58) = uStack_e0;
    *(undefined8 *)(param_1 + 0x70) = uStack_c8;
    *(undefined8 *)(param_1 + 0x68) = uStack_d0;
    *(undefined8 *)(param_1 + 0x80) = uStack_b8;
    *(undefined8 *)(param_1 + 0x78) = uStack_c0;
    *(undefined8 *)(param_1 + 0x90) = uStack_a8;
    *(undefined8 *)(param_1 + 0x88) = uStack_b0;
    *(undefined8 *)(param_1 + 0x20) = uStack_118;
    *(undefined8 *)(param_1 + 0x18) = uStack_120;
    *(undefined8 *)(param_1 + 0x30) = uStack_108;
    *(undefined8 *)(param_1 + 0x28) = uStack_110;
    *(undefined8 *)(param_1 + 0x40) = uStack_f8;
    *(undefined8 *)(param_1 + 0x38) = uStack_100;
    *(undefined8 *)(param_1 + 200) = uStack_70;
    *(undefined8 *)(param_1 + 0x50) = uStack_e8;
    *(undefined8 *)(param_1 + 0x48) = uStack_f0;
    func_0x0001043f32f8(param_1 + 0x18);
  }
  uVar12 = *(ulong *)(param_2 + _DAT_113076888);
  if (uVar12 == 0) {
    _objc_retain(uVar16);
    puVar18 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar14 = uVar12;
      if (-1 < (long)uVar12) {
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar18;
    if (uVar14 == 0) {
      _objc_retain(uVar16);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _objc_retain(uVar16);
      func_0x000103f61338(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1043f26dc);
        (*pcVar4)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        plVar10 = (long *)(uVar12 + 0x20);
        do {
          lVar11 = *plVar10;
          uVar8 = *(undefined8 *)(lVar11 + _DAT_113076ae0);
          uVar9 = *(undefined8 *)(lVar11 + _DAT_113076ae8);
          uVar3 = *(undefined1 *)(lVar11 + _DAT_113076af0);
          uVar7 = *(undefined8 *)(lVar11 + _DAT_113076ad8);
          uVar19 = ((undefined8 *)(lVar11 + _DAT_113076ad8))[1];
          uVar16 = *(undefined8 *)(lVar11 + _DAT_113076af8);
          uVar2 = ((undefined8 *)(lVar11 + _DAT_113076af8))[1];
          uVar15 = *(undefined8 *)(lVar11 + _DAT_113076b00);
          uVar12 = *(ulong *)(puVar18 + 0x10);
          uVar17 = *(ulong *)(puVar18 + 0x18);
          _swift_bridgeObjectRetain(uVar19);
          _swift_bridgeObjectRetain(uVar2);
          if (uVar17 >> 1 <= uVar12) {
            func_0x000103f61338(1 < uVar17,uVar12 + 1,1);
          }
          *(ulong *)(puVar18 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x20) = uVar7;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x28) = uVar19;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x30) = uVar8;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x38) = uVar9;
          puVar18[uVar12 * 0x40 + 0x40] = uVar3;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x48) = uVar16;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x50) = uVar2;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x58) = uVar15;
          uVar14 = uVar14 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar17 = 0;
        do {
          uVar5 = uVar17;
          func_0x000102f02c38(uVar17,uVar12);
          uVar7 = *(undefined8 *)(uVar5 + _DAT_113076ad8);
          uVar19 = ((undefined8 *)(uVar5 + _DAT_113076ad8))[1];
          uVar8 = *(undefined8 *)(uVar5 + _DAT_113076ae0);
          uVar9 = *(undefined8 *)(uVar5 + _DAT_113076ae8);
          uVar3 = *(undefined1 *)(uVar5 + _DAT_113076af0);
          uVar16 = *(undefined8 *)(uVar5 + _DAT_113076af8);
          uVar2 = ((undefined8 *)(uVar5 + _DAT_113076af8))[1];
          uVar15 = *(undefined8 *)(uVar5 + _DAT_113076b00);
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar19);
          _swift_unknownObjectRelease(uVar5);
          uVar5 = *(ulong *)(puVar18 + 0x10);
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar5) {
            func_0x000103f61338(1 < *(ulong *)(puVar18 + 0x18),uVar5 + 1,1);
          }
          uVar17 = uVar17 + 1;
          *(ulong *)(puVar18 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x20) = uVar7;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x28) = uVar19;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x30) = uVar8;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x38) = uVar9;
          puVar18[uVar5 * 0x40 + 0x40] = uVar3;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x48) = uVar16;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x50) = uVar2;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x58) = uVar15;
        } while (uVar14 != uVar17);
      }
    }
  }
  *(undefined **)(param_1 + 0xd0) = puVar18;
  uVar12 = *(ulong *)(param_2 + _DAT_113076890);
  if (uVar12 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    if (uVar12 >> 0x3e == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar12;
      if (-1 < (long)uVar12) {
        uVar14 = uVar12 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar14 != 0) {
      func_0x000103f61338(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1043f26e0);
        (*pcVar4)();
      }
      if ((uVar12 & 0xc000000000000001) == 0) {
        plVar10 = (long *)(uVar12 + 0x20);
        do {
          lVar11 = *plVar10;
          uVar8 = *(undefined8 *)(lVar11 + _DAT_113076ae0);
          uVar9 = *(undefined8 *)(lVar11 + _DAT_113076ae8);
          uVar3 = *(undefined1 *)(lVar11 + _DAT_113076af0);
          uVar7 = *(undefined8 *)(lVar11 + _DAT_113076ad8);
          uVar19 = ((undefined8 *)(lVar11 + _DAT_113076ad8))[1];
          uVar16 = *(undefined8 *)(lVar11 + _DAT_113076af8);
          uVar2 = ((undefined8 *)(lVar11 + _DAT_113076af8))[1];
          uVar15 = *(undefined8 *)(lVar11 + _DAT_113076b00);
          uVar12 = *(ulong *)(puVar18 + 0x10);
          uVar17 = *(ulong *)(puVar18 + 0x18);
          _swift_bridgeObjectRetain(uVar19);
          _swift_bridgeObjectRetain(uVar2);
          if (uVar17 >> 1 <= uVar12) {
            func_0x000103f61338(1 < uVar17,uVar12 + 1,1);
          }
          *(ulong *)(puVar18 + 0x10) = uVar12 + 1;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x20) = uVar7;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x28) = uVar19;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x30) = uVar8;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x38) = uVar9;
          puVar18[uVar12 * 0x40 + 0x40] = uVar3;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x48) = uVar16;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x50) = uVar2;
          *(undefined8 *)(puVar18 + uVar12 * 0x40 + 0x58) = uVar15;
          uVar14 = uVar14 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar14 != 0);
      }
      else {
        uVar17 = 0;
        do {
          uVar5 = uVar17;
          func_0x000102f02c38(uVar17,uVar12);
          uVar7 = *(undefined8 *)(uVar5 + _DAT_113076ad8);
          uVar19 = ((undefined8 *)(uVar5 + _DAT_113076ad8))[1];
          uVar8 = *(undefined8 *)(uVar5 + _DAT_113076ae0);
          uVar9 = *(undefined8 *)(uVar5 + _DAT_113076ae8);
          uVar3 = *(undefined1 *)(uVar5 + _DAT_113076af0);
          uVar16 = *(undefined8 *)(uVar5 + _DAT_113076af8);
          uVar2 = ((undefined8 *)(uVar5 + _DAT_113076af8))[1];
          uVar15 = *(undefined8 *)(uVar5 + _DAT_113076b00);
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar19);
          _swift_unknownObjectRelease(uVar5);
          uVar5 = *(ulong *)(puVar18 + 0x10);
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar5) {
            func_0x000103f61338(1 < *(ulong *)(puVar18 + 0x18),uVar5 + 1,1);
          }
          uVar17 = uVar17 + 1;
          *(ulong *)(puVar18 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x20) = uVar7;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x28) = uVar19;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x30) = uVar8;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x38) = uVar9;
          puVar18[uVar5 * 0x40 + 0x40] = uVar3;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x48) = uVar16;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x50) = uVar2;
          *(undefined8 *)(puVar18 + uVar5 * 0x40 + 0x58) = uVar15;
        } while (uVar14 != uVar17);
      }
    }
  }
  *(undefined **)(param_1 + 0xd8) = puVar18;
  lVar11 = *(long *)(param_2 + _DAT_113076898);
  if (lVar11 == 0) {
    uVar13 = 0;
    *(undefined8 *)(param_1 + 0xe8) = 1;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar11 + _DAT_113076b30);
    uVar16 = puVar1[1];
    uVar7 = *puVar1;
    *(undefined8 *)(param_1 + 0xe8) = puVar1[1];
    *(undefined8 *)(param_1 + 0xe0) = uVar7;
    puVar1 = (undefined8 *)(lVar11 + _DAT_113076b38);
    uVar7 = puVar1[1];
    uVar19 = *puVar1;
    *(undefined8 *)(param_1 + 0xf8) = puVar1[1];
    *(undefined8 *)(param_1 + 0xf0) = uVar19;
    uVar13 = *(undefined4 *)(lVar11 + _DAT_113076b40);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar16);
  }
  *(undefined4 *)(param_1 + 0x100) = uVar13;
  lVar11 = _DAT_1138135b8;
  lVar6 = 0;
  func_0x0001043ee8f0();
  func_0x0001043f3244(param_2 + lVar11,param_1 + *(int *)(lVar6 + 0x2c),0x112d373d8,&UNK_10d9014c0);
  uVar7 = *(undefined8 *)(param_2 + _DAT_1138135c0);
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x30)) = uVar7;
  param_1[*(int *)(lVar6 + 0x34)] = *(undefined1 *)(param_2 + _DAT_1138135c8);
  param_1[*(int *)(lVar6 + 0x38)] = *(undefined1 *)(param_2 + _DAT_1138135d0);
  uVar16 = *(undefined8 *)(param_2 + _DAT_1138135d8);
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x3c)) = uVar16;
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x40)) = *(undefined8 *)(param_2 + _DAT_1138135e0);
  uVar3 = *(undefined1 *)(param_2 + _DAT_1138135e8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar16);
  _objc_release(param_2);
  param_1[*(int *)(lVar6 + 0x44)] = uVar3;
  return;
}



/* Entry: 1043f26e0; end: 1043f2727; -[SCStoriesPostingConfiguration init] */

void FUN_1043f26e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCStoriesPostingAPI/SCStoriesPostingConfigurationWrapper.swift",0x3e,2,0x6a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043f2728);
  (*pcVar1)();
}



/* Entry: 1043f2728; end: 1043f2743; +[SCStoriesPostingConfigurationBuilder storiesPostingConfiguration] */

void FUN_1043f2728(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043f2744; end: 1043f2783; +[SCStoriesPostingConfigurationBuilder storiesPostingConfigurationWithExistingStoriesPostingConfiguration:] */

void FUN_1043f2744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1043f32fc(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043f2784; end: 1043f2793; -[SCStoriesPostingConfigurationBuilder withPostToMyStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2784(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130768a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f2794; end: 1043f27f3; -[SCStoriesPostingConfigurationBuilder withMyStoryPrivacyOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f2794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130768a8);
  *(undefined8 *)(param_1 + _DAT_1130768a8) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f27f4; end: 1043f280b; -[SCStoriesPostingConfigurationBuilder withMyStoryCustomTTL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f27f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130768b0);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f280c; end: 1043f286b; -[SCStoriesPostingConfigurationBuilder withOurStoryMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f280c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130768b8);
  *(undefined8 *)(param_1 + _DAT_1130768b8) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f286c; end: 1043f2877; -[SCStoriesPostingConfigurationBuilder withAllCustomStoriesMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f286c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043f7068(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130768c0);
  *(long *)(param_1 + _DAT_1130768c0) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f2878; end: 1043f2883; -[SCStoriesPostingConfigurationBuilder withNewlyCreatedCustomStoriesMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2878(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043f7068(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130768c8);
  *(long *)(param_1 + _DAT_1130768c8) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f2884; end: 1043f28f7;  */

void FUN_1043f2884(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_1043f7068(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(long *)(param_1 + *param_4) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f28f8; end: 1043f2957; -[SCStoriesPostingConfigurationBuilder withSelectedSponsor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043f28f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130768d0);
  *(undefined8 *)(param_1 + _DAT_1130768d0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1043f2958; end: 1043f2a63; -[SCStoriesPostingConfigurationBuilder withGoLiveTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2958(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_1130768d8;
  _swift_beginAccess(param_1 + _DAT_1130768d8,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9c6c(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  func_0x0001043f328c(puVar3,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f2a64; end: 1043f2a6f; -[SCStoriesPostingConfigurationBuilder withBusinessIdsToCustomTTL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2a64(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130768e0);
  *(long *)(param_1 + _DAT_1130768e0) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f2a70; end: 1043f2a7f; -[SCStoriesPostingConfigurationBuilder withShouldAllowSpotlightRemixing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2a70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130768e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f2a80; end: 1043f2a8f; -[SCStoriesPostingConfigurationBuilder withPostToPublicStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2a80(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1130768f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f2a90; end: 1043f2af3; -[SCStoriesPostingConfigurationBuilder withPublicStoryBusinessIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2a90(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___sSSN_11034da80);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130768f8);
  *(long *)(param_1 + _DAT_1130768f8) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f2af4; end: 1043f2aff; -[SCStoriesPostingConfigurationBuilder withBusinessStoryVariants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2af4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113076900);
  *(long *)(param_1 + _DAT_113076900) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f2b00; end: 1043f2b83;  */

void FUN_1043f2b00(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(long *)(param_1 + *param_4) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1043f2b84; end: 1043f2b93; -[SCStoriesPostingConfigurationBuilder withShouldCrossPostToStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f2b84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_113076908) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1043f2b94; end: 1043f2ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043f2b94(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_d0 + -extraout_x8;
  uStack_90 = (uint)*(byte *)(unaff_x20 + _DAT_1130768a0);
  if (uStack_90 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130768a0) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130768b0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_a0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_a0 = *puVar1;
  }
  uStack_8c = (uint)*(byte *)(unaff_x20 + _DAT_1130768e8);
  if (uStack_8c == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130768e8) = 0;
  }
  uStack_94 = (uint)*(byte *)(unaff_x20 + _DAT_1130768f0);
  if (uStack_94 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_1130768f0) = 0;
  }
  uStack_98 = (uint)*(byte *)(unaff_x20 + _DAT_113076908);
  if (uStack_98 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113076908) = 0;
  }
  lVar5 = _DAT_1130768d8;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_1130768a8);
  uStack_b8 = *(undefined8 *)(unaff_x20 + _DAT_1130768b8);
  uStack_b0 = *(undefined8 *)(unaff_x20 + _DAT_1130768c0);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_1130768c8);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_1130768d0);
  uStack_c8 = uVar8;
  _swift_beginAccess(unaff_x20 + _DAT_1130768d8,auStack_78,0,0);
  func_0x0001043f3244(unaff_x20 + lVar5,puVar11,0x112d373d8,&UNK_10d9014c0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_1130768e0);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_1130768f8);
  uStack_c0 = *(undefined8 *)(unaff_x20 + _DAT_113076900);
  lVar6 = 0;
  puStack_a8 = puVar11;
  FUN_1043f3574();
  lVar5 = lVar6;
  _objc_allocWithZone();
  uVar4 = uStack_b0;
  uVar3 = uStack_b8;
  *(byte *)(lVar5 + _DAT_113076868) = (byte)uStack_90 & 1;
  *(undefined8 *)(lVar5 + _DAT_113076870) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_113076878) = uStack_a0;
  *(undefined8 *)(lVar5 + _DAT_113076880) = uStack_b8;
  *(undefined8 *)(lVar5 + _DAT_113076888) = uStack_b0;
  *(undefined8 *)(lVar5 + _DAT_113076890) = uVar13;
  *(undefined8 *)(lVar5 + _DAT_113076898) = uVar12;
  func_0x0001043f3244(puVar11,lVar5 + _DAT_1138135b8,0x112d373d8,&UNK_10d9014c0);
  uVar8 = uStack_c0;
  *(undefined8 *)(lVar5 + _DAT_1138135c0) = uVar9;
  *(byte *)(lVar5 + _DAT_1138135c8) = (byte)uStack_8c & 1;
  *(byte *)(lVar5 + _DAT_1138135d0) = (byte)uStack_94 & 1;
  *(undefined8 *)(lVar5 + _DAT_1138135d8) = uVar10;
  *(undefined8 *)(lVar5 + _DAT_1138135e0) = uStack_c0;
  *(byte *)(lVar5 + _DAT_1138135e8) = (byte)uStack_98 & 1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar6;
  _objc_retain(uStack_c8);
  _objc_retain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar13);
  _objc_retain(uVar12);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar8);
  plVar7 = &lStack_88;
  _objc_msgSendSuper2(plVar7,puVar2);
  func_0x0001043f328c(puStack_a8,0x112d373d8,&UNK_10d9014c0);
  return plVar7;
}



/* Entry: 1043f2ed4; end: 1043f2f17; -[SCStoriesPostingConfigurationBuilder build] */

void FUN_1043f2ed4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043f2b94();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043f2f18; end: 1043f307b; -[SCStoriesPostingConfigurationBuilder safeBuildAndReturnError:] */

void FUN_1043f2f18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043f2b94();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043f307c; end: 1043f309b; -[SCStoriesPostingConfigurationBuilder init] */

void FUN_1043f307c(void)

{
  func_0x0001043f2f5c();
  return;
}



/* Entry: 1043f309c; end: 1043f309f;  */

void FUN_1043f309c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043f30a0; end: 1043f3157; -[SCStoriesPostingConfigurationBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f30a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130768a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130768b8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130768c0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130768c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130768d0));
  func_0x0001043f328c(param_1 + _DAT_1130768d8,0x112d373d8,&UNK_10d9014c0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130768e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130768f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113076900));
  return;
}



/* Entry: 1043f3158; end: 1043f318b;  */

void FUN_1043f3158(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043f318c; end: 1043f32cb; -[SCStoriesPostingConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f318c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076870));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076880));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076888));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113076890));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113076898));
  func_0x0001043f328c(param_1 + _DAT_1138135b8,0x112d373d8,&UNK_10d9014c0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138135c0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138135d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1138135e0));
  return;
}



/* Entry: 1043f32cc; end: 1043f32fb;  */

void FUN_1043f32cc(undefined8 *param_1)

{
  param_1[1] = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 1043f32fc; end: 1043f3573;  */

/* WARNING: Possible PIC construction at 0x0001043f3338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001043f333c) */

void FUN_1043f32fc(long param_1)

{
  if (param_1 == 0) {
    func_0x0001043f35b0();
    _objc_allocWithZone();
  }
  else {
    func_0x0001043f35b0(0);
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1043f3574; end: 1043f35c3;  */

void FUN_1043f3574(undefined8 param_1)

{
  if (lRam0000000113076938 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8036b4);
  return;
}



/* Entry: 1043f35c4; end: 1043f35f3;  */

void FUN_1043f35c4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 1043f35f4; end: 1043f3607;  */

void FUN_1043f35f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_a0 = &UNK_10dcf8068;
  puStack_98 = &UNK_10dcf8028;
  puStack_90 = &UNK_10dcf8080;
  puStack_88 = &UNK_10dcf8028;
  puStack_80 = &UNK_10dcf8028;
  puStack_78 = &UNK_10dcf8028;
  puStack_70 = &UNK_10dcf8028;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dcf8028;
    puStack_58 = &UNK_10dcf8068;
    puStack_50 = &UNK_10dcf8068;
    puStack_48 = &UNK_10dcf8028;
    puStack_40 = &UNK_10dcf8028;
    puStack_38 = &UNK_10dcf8068;
    _swift_updateClassMetadata2(param_1,0x100,0xe,&puStack_a0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1043f3608; end: 1043f36a3;  */

void FUN_1043f3608(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = &UNK_10dcf8028;
  puStack_88 = &UNK_10dcf8028;
  puStack_80 = &UNK_10dcf8028;
  puStack_78 = &UNK_10dcf8028;
  puStack_70 = &UNK_10dcf8028;
  lVar1 = 0x13f;
  uStack_a0 = param_4;
  uStack_90 = param_5;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dcf8028;
    puStack_48 = &UNK_10dcf8028;
    puStack_40 = &UNK_10dcf8028;
    uStack_58 = param_4;
    uStack_50 = param_4;
    uStack_38 = param_4;
    _swift_updateClassMetadata2(param_1,0x100,0xe,&uStack_a0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1043f36a4; end: 1043f36a7;  */

void FUN_1043f36a4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043f36a8; end: 1043f36e7;  */

undefined8 FUN_1043f36a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1043f59dc(param_1);
  FUN_1043ef894(param_1);
  return uVar1;
}



/* Entry: 1043f36e8; end: 1043f36f3; -[SCStoriesPostingOurStoryMetadata storyGroupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f36e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076980))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076980);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f36f4; end: 1043f36ff; -[SCStoriesPostingOurStoryMetadata businessId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f36f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076988))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076988);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f3700; end: 1043f370b; -[SCStoriesPostingOurStoryMetadata displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f3700(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076990))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076990);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f370c; end: 1043f3717; -[SCStoriesPostingOurStoryMetadata spotlightDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f370c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113076998))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113076998);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f3718; end: 1043f3723; -[SCStoriesPostingOurStoryMetadata spotlightDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f3718(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130769a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130769a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f3724; end: 1043f377f; -[SCStoriesPostingOurStoryMetadata topics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f3724(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130769a8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104409d84(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f3780; end: 1043f379b; -[SCStoriesPostingOurStoryMetadata ourStoryDestinations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f3780(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130769b0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043f6038(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f379c; end: 1043f37fb;  */

void FUN_1043f379c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043f6038(0,param_4,param_5);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f37fc; end: 1043f380b; -[SCStoriesPostingOurStoryMetadata shouldCreateHighlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043f37fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130769b8);
}



/* Entry: 1043f380c; end: 1043f381b; -[SCStoriesPostingOurStoryMetadata shareAnonymously] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f380c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130769c0));
  return;
}



/* Entry: 1043f381c; end: 1043f382b; -[SCStoriesPostingOurStoryMetadata placeTagsMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f381c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130769c8));
  return;
}



/* Entry: 1043f382c; end: 1043f3837; -[SCStoriesPostingOurStoryMetadata originalPostCompositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f382c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130769d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130769d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f3838; end: 1043f388f;  */

void FUN_1043f3838(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1043f3890; end: 1043f38ab; -[SCStoriesPostingOurStoryMetadata spotlightDescriptionMentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f3890(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1130769d8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1043f6038(0,0x112d70b48,&PTR_PTR_1126d95f0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043f38ac; end: 1043f38bb; -[SCStoriesPostingOurStoryMetadata spotlightTile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f38ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130769e0));
  return;
}



/* Entry: 1043f38bc; end: 1043f3be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043f38bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076980);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076988);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076990);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113076998);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130769a0);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_1130769a8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_1130769b0) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_1130769b8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_1130769c0) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_1130769c8) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130769d0);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_1130769d8) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_1130769e0) = param_20;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



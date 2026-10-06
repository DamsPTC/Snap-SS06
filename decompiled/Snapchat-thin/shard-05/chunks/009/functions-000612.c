/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10435a288; end: 10435a2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435a288(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_113070840);
    if (lVar2 != 0) {
      _objc_retain();
      _objc_release(lVar1);
      FUN_10435d360();
      func_0x00010c1677c0(0);
      _objc_release(lVar1);
      func_0x00010435d36c();
      func_0x00010c1677c0(0);
      _objc_release(lVar1);
      *(undefined1 *)(lVar2 + _DAT_113070a60) = 0;
    }
    _objc_release();
  }
  return;
}



/* Entry: 10435a2bc; end: 10435a2f3;  */

void FUN_10435a2bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    _swift_unknownObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 10435a2f4; end: 10435a30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435a2f4(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar1 = *param_1;
  _swift_beginAccess(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = _DAT_113070868;
  if (lVar5 != 0) {
    _swift_beginAccess(lVar5 + _DAT_113070868,auStack_70,0x21,0);
    uVar4 = *(undefined8 *)(lVar5 + lVar3);
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    uVar6 = *(undefined8 *)(lVar5 + lVar3);
    *(undefined8 *)(lVar5 + lVar3) = 0x8000000000000000;
    FUN_104355ca4(uVar1,uVar2,uVar4);
    *(undefined8 *)(lVar5 + lVar3) = uVar6;
    _swift_endAccess(auStack_70);
    FUN_104351d54();
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 10435a310; end: 10435a49f;  */

void FUN_10435a310(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10435a3cc);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x10;
  uVar7 = 0x1130708f8;
  func_0x0001000285a8(0x1130708f8,&UNK_10dceee70);
  _swift_arrayDestroy(lVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10435a3d0);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10435a3d4);
      (*pcVar6)();
    }
    uVar2 = lVar1 + param_3 * 0x10;
    uVar3 = lVar8 + 0x20 + param_2 * 0x10;
    if (uVar2 != uVar3 || uVar3 + lVar4 * 0x10 <= uVar2) {
      _memmove(uVar2,uVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10435a3d8);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10435a3dc);
  (*pcVar6)();
}



/* Entry: 10435a4a0; end: 10435a66b;  */

void FUN_10435a4a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lStack_70;
  
  lStack_70 = 0;
  uVar9 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  lVar8 = 0;
LAB_10435a51c:
  do {
    do {
      if (uVar13 == 0) {
        do {
          lVar12 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10435a66c);
            (*pcVar5)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
            FUN_104358fa4(param_1,param_2,lStack_70,param_3);
            return;
          }
          uVar13 = ((ulong *)(param_3 + 0x40))[lVar12];
          lVar8 = lVar8 + 1;
        } while (uVar13 == 0);
        uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
      }
      else {
        uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
        lVar12 = lVar8;
      }
      uVar7 = LZCOUNT(uVar7);
      uVar11 = uVar7 | lVar12 << 6;
      lVar8 = lVar12;
    } while (*(long *)(param_4 + 0x10) == 0);
    cVar4 = *(char *)(*(long *)(param_3 + 0x30) + uVar11);
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + uVar11 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar11 = *(ulong *)(param_4 + 0x28);
    func_0x00010434c9dc(uVar2,uVar3);
    func_0x0001028c0dc0(uVar11,cVar4);
    uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    uVar11 = uVar11 & (uVar10 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_4 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
      do {
        if (*(char *)(*(long *)(param_4 + 0x30) + uVar11) == cVar4) {
          func_0x00010434d2d8(uVar2,uVar3);
          uVar11 = (uVar7 & 0xffffffffffffffc0 | lVar12 << 6) >> 3;
          *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar7 & 0x3f);
          bVar6 = SCARRY8(lStack_70,1);
          lStack_70 = lStack_70 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10435a634);
            (*pcVar5)();
          }
          goto LAB_10435a51c;
        }
        uVar11 = uVar11 + 1 & ~uVar10;
      } while ((*(ulong *)(param_4 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
    }
    func_0x00010434d2d8(uVar2,uVar3);
  } while( true );
}



/* Entry: 10435a66c; end: 10435a8b7;  */

undefined1 * FUN_10435a66c(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *extraout_x8;
  undefined1 *unaff_x21;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *apuStack_80 [2];
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar6 = uVar5 * 8;
  puStack_60 = param_2;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_1);
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_1);
    if ((iVar1 == 0) ||
       (uVar4 = uVar6, _swift_stdlib_isStackAllocationSafe(uVar6,8), (uVar4 & 1) == 0)) {
      _swift_slowAlloc(uVar6,0xffffffffffffffff);
      _swift_retain(param_1);
      FUN_10435a190(apuStack_80,uVar6,uVar5,param_1,FUN_10435a8e8,auStack_70,&puStack_88);
      puVar2 = apuStack_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = puStack_88;
      }
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x00010435a864;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = auStack_90 + -(uVar6 + 0xf & 0x3ffffffffffffff0);
  _bzero(puVar2,uVar6);
  _swift_bridgeObjectRetain(param_2);
  FUN_10435a4a0(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  _swift_bridgeObjectRelease(param_2);
joined_r0x00010435a864:
  if (unaff_x21 == (undefined1 *)0x0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_release();
  }
  else {
    iVar1 = 2;
    puStack_88 = puVar2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      _swift_willThrowTypedImpl(&puStack_88,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease();
    param_1 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_1043587f0();
    if (unaff_x21 == (undefined1 *)0x0) {
      *extraout_x8 = (long)param_1;
    }
    return param_1;
  }
  return puVar2;
}



/* Entry: 10435a8b8; end: 10435a8e7;  */

void FUN_10435a8b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1043587f0(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10435a8e8; end: 10435a917;  */

uint FUN_10435a8e8(byte *param_1)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = (uint)*param_1;
  FUN_1043534ec(*param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return uVar1 & 1;
}



/* Entry: 10435a918; end: 10435aa4f;  */

void FUN_10435a918(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar2 = 0;
  func_0x00010434d014(0);
  uVar3 = uVar2;
  FUN_10435aa50();
  __sSh15minimumCapacityShyxGSi_tcfC(uVar4,uVar2,uVar3);
  uStack_58 = uVar4;
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10435aa3c);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(param_1 + uVar5 * 8 + 0x20);
        _swift_retain(uVar6);
      }
      else {
        uVar6 = uVar5;
        FUN_10435ecf4(uVar5,param_1);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10435aa18);
        (*pcVar1)();
      }
      uVar7 = uVar5 + 1;
      FUN_1043570d4(&uStack_60,uVar6);
      _swift_release(uStack_60);
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar4);
  }
  return;
}



/* Entry: 10435aa50; end: 10435aa93;  */

void FUN_10435aa50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113070918 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x00010434d014(0xff);
  puVar2 = &UNK_10dcee7d8;
  _swift_getWitnessTable(&UNK_10dcee7d8,uVar1);
  puRam0000000113070918 = puVar2;
  return;
}



/* Entry: 10435aa94; end: 10435aad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435aa94(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  double dVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  dVar3 = *(double *)(unaff_x20 + 0x18);
  puVar2 = &DAT_113070aa8;
  FUN_10435d378(&DAT_113070aa8);
  func_0x00010c1677c0(dVar3);
  _objc_release(puVar2);
  puVar2 = &DAT_113070ab0;
  FUN_10435d378(&DAT_113070ab0);
  func_0x00010c1677c0(dVar3);
  _objc_release(puVar2);
  *(bool *)(lVar1 + _DAT_113070a60) = 0.0 < dVar3;
  return;
}



/* Entry: 10435aad8; end: 10435ab17;  */

void FUN_10435aad8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10435ab18; end: 10435ab6f;  */

uint FUN_10435ab18(uint param_1)

{
  func_0x000100db6378();
  return param_1 & 1;
}



/* Entry: 10435ab70; end: 10435abab;  */

void FUN_10435ab70(long param_1,long param_2)

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



/* Entry: 10435abac; end: 10435aefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10435abac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113070958;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_113070958);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_allocWithZone();
    func_0x00010bfee200();
    func_0x00010c16e060();
    func_0x00010c166c00(puVar3,param_2,3);
    func_0x00010c190b80(puVar3,param_2,0);
    func_0x00010c207380(0x4008000000000000,puVar3);
    func_0x00010c219b60(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 10435aefc; end: 10435b107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10435aefc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  puVar7 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  lVar5 = _DAT_113070940;
  uVar6 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar6;
  *(undefined1 *)(unaff_x20 + _DAT_113070948) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113070950) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070960) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070968) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070970) = 0;
  *(long *)(unaff_x20 + _DAT_113070930) = param_1;
  uVar6 = 0x4042000000000000;
  if (*(char *)(param_1 + 0x78) != '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x70);
  }
  *(undefined8 *)(unaff_x20 + _DAT_113070938) = uVar6;
  puVar8 = PTR_s_initWithFrame__1125e2948;
  _swift_retain(param_1);
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffffa0,puVar8);
  _objc_retainAutoreleasedReturnValue();
  FUN_10435b108();
  puVar8 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_allocWithZone(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  _objc_retain(puVar7);
  func_0x00010c050900(puVar8);
  func_0x00010bef9040(puVar7);
  _objc_release(puVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar6);
  _objc_retain(uVar9);
  _swift_bridgeObjectRetain(uVar3);
  FUN_10435c13c(uVar1,uVar3,uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar6);
  FUN_10435b5f8();
  func_0x00010c21e900(puVar7);
  _swift_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar7);
  return puVar7;
}



/* Entry: 10435b108; end: 10435b5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435b108(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar1);
  func_0x00010c1af000();
  lVar2 = unaff_x20;
  func_0x00010c161080();
  func_0x00010435ac58();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010435abac();
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = _DAT_113070958;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113070958);
  _objc_retain(uVar3);
  uVar8 = uVar3;
  func_0x00010435ad80();
  func_0x00010bef6d60(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  _objc_retain(uVar3);
  uVar8 = uVar3;
  func_0x00010435ae18();
  func_0x00010bef6d60(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self();
  puVar4 = puVar1;
  func_0x0001008478a8();
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 0x19;
  *(undefined8 *)(puVar4 + 0x10) = 0xc;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  *(undefined8 *)(puVar4 + 0x30) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = unaff_x20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  *(undefined8 *)(puVar4 + 0x38) = uVar8;
  lVar5 = _DAT_113070968;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113070968);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined8 *)(puVar4 + 0x40) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined8 *)(puVar4 + 0x48) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113070970);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf49420(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined8 *)(puVar4 + 0x50) = uVar8;
  lVar2 = unaff_x20;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf494e0(0x404a000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  *(long *)(puVar4 + 0x58) = lVar6;
  lVar2 = _DAT_113070960;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113070960);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x00010bf34860(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  *(undefined8 *)(puVar4 + 0x60) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x00010bf348e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar7);
  *(undefined8 *)(puVar4 + 0x68) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113070938);
  uVar8 = uVar3;
  func_0x00010bf49420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined8 *)(puVar4 + 0x70) = uVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf49420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  *(undefined8 *)(puVar4 + 0x78) = uVar8;
  uVar8 = 0;
  func_0x000100847984(0);
  puVar9 = puVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar4,uVar8);
  _swift_release(puVar4);
  func_0x00010beef8c0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10435b5f8; end: 10435b853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435b5f8(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_113070930);
  uVar10 = *(undefined8 *)(lVar12 + 0x10);
  _swift_retain(uVar10);
  pcVar6 = "subscribeToUpdates()";
  plVar1 = (long *)pcVar6;
  func_0x0001000c10c0();
  _objc_retainAutoreleasedReturnValue();
  plVar2 = plVar1;
  func_0x000100471e0c();
  _swift_release(uVar10);
  _swift_unknownObjectRelease(plVar1);
  puVar8 = &UNK_11075e708;
  puVar3 = puVar8;
  _swift_allocObject(&UNK_11075e708,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  pcVar4 = FUN_10435c23c;
  puVar9 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_10435c23c);
  _swift_release(plVar2);
  _swift_release(puVar3);
  pcVar5 = pcVar4;
  _swift_getObjectType(pcVar4);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_113070940);
  (**(code **)(puVar9 + 0x10))(uVar11,pcVar5,puVar9);
  _swift_unknownObjectRelease(pcVar4);
  uVar10 = *(undefined8 *)(lVar12 + 0x18);
  _swift_retain(uVar10);
  func_0x0001000c10c0();
  _objc_retainAutoreleasedReturnValue();
  plVar1 = (long *)pcVar6;
  func_0x000100471e0c();
  _swift_release(uVar10);
  _swift_unknownObjectRelease(pcVar6);
  puVar3 = puVar8;
  _swift_allocObject(&UNK_11075e708,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  uVar10 = 0x10435c244;
  puVar9 = puVar3;
  (**(code **)(*plVar1 + 0x60))(0x10435c244);
  _swift_release(plVar1);
  _swift_release(puVar3);
  uVar7 = uVar10;
  _swift_getObjectType(uVar10);
  (**(code **)(puVar9 + 0x10))(uVar11,uVar7,puVar9);
  _swift_unknownObjectRelease(uVar10);
  uVar10 = *(undefined8 *)(lVar12 + 0x20);
  _swift_retain(uVar10);
  plVar1 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x000104884898();
  _swift_release(uVar10);
  _swift_allocObject(&UNK_11075e708,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10);
  uVar10 = 0x10435c24c;
  puVar3 = puVar8;
  (**(code **)(*plVar1 + 0x60))(0x10435c24c);
  _swift_release(plVar1);
  _swift_release(puVar8);
  uVar7 = uVar10;
  _swift_getObjectType(uVar10);
  (**(code **)(puVar3 + 0x10))(uVar11,uVar7,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar10);
  return;
}



/* Entry: 10435b854; end: 10435b87b; -[_TtC15GamesUIServices17ActionBarItemView initWithCoder:] */

void FUN_10435b854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10435c288();
  return;
}



/* Entry: 10435b87c; end: 10435b8fb;  */

void FUN_10435b87c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10435c13c(uVar1,uVar3,uVar2,uVar4);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 10435b8fc; end: 10435b96f;  */

void FUN_10435b8fc(char *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  cVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x00010c21e900();
    uVar2 = 0x3ff0000000000000;
    if (cVar1 == '\0') {
      uVar2 = 0x3fe0000000000000;
    }
    func_0x00010c1677c0(uVar2,param_2);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 10435b970; end: 10435b9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435b970(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _DAT_113070950;
  if (param_2 != 0) {
    FUN_10435b9e8(uVar1,*(undefined1 *)(param_2 + _DAT_113070950));
    *(undefined1 *)(param_2 + lVar2) = 1;
    _objc_release(param_2);
  }
  return;
}



/* Entry: 10435b9e8; end: 10435bb87;  */

/* WARNING: Possible PIC construction at 0x00010435bbd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010435bbdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435b9e8(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar10 = (uint)param_1 & 1;
  if (uVar10 == *(byte *)(unaff_x20 + _DAT_113070948)) {
    return;
  }
  *(char *)(unaff_x20 + _DAT_113070948) = (char)uVar10;
  uVar4 = param_1;
  if ((param_2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___CATransition_1126b3c00;
    _objc_allocWithZone(PTR__OBJC_CLASS___CATransition_1126b3c00);
    func_0x00010bfee200();
    func_0x00010c21acc0();
    _objc_retain(puVar1);
    func_0x00010c192d40(0x3fc999999999999a);
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    _objc_opt_self(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    func_0x00010bfbc100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    func_0x00010435ad80();
    puVar3 = puVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = 0xd000000000000011;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f77f0);
    func_0x00010bef6c20(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  func_0x00010435ad80();
  if (((param_1 & 1) == 0) ||
     (lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_113070930) + 0x30), lVar5 == 0)) {
    lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_113070930) + 0x28);
  }
  _objc_retain(lVar5);
  func_0x00010c1a9f00(uVar4);
  _objc_release(uVar4);
  _objc_release(lVar5);
  uVar10 = (uint)param_1 & 1;
  uVar4 = (ulong)uVar10;
  ppuVar8 = &puStack_80;
  ppuVar9 = &puStack_80;
  if ((param_2 & 1) == 0) {
    func_0x00010435ac58();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113070960);
    uVar10 = (uVar10 ^ 0xffffffff) & 1;
  }
  else {
    if ((param_1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar1 = &UNK_11075e708;
      puVar7 = puVar1;
      _swift_allocObject(&UNK_11075e708,0x18,7);
      _swift_unknownObjectWeakInit(puVar7 + 0x10,unaff_x20);
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0x10435c254;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_11075e720;
      puStack_58 = puVar7;
      __Block_copy(&puStack_80);
      _swift_release(puStack_58);
      _swift_allocObject(&UNK_11075e708,0x18,7);
      _swift_unknownObjectWeakInit(puVar1 + 0x10,unaff_x20);
      uStack_60 = 0x10435c278;
      puStack_80 = puVar2;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100288f10;
      puStack_68 = &UNK_11075e748;
      puStack_58 = puVar1;
      __Block_copy(&puStack_80);
      _swift_release(puStack_58);
      func_0x00010bf03420(0x3fc999999999999a,puVar3);
      __Block_release(ppuVar9);
      __Block_release(ppuVar8);
      return;
    }
    func_0x00010435ac58();
    func_0x00010c1677c0(0);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113070960);
    uVar10 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_setHidden__1126479f8,uVar10);
  return;
}



/* Entry: 10435bb88; end: 10435bde3;  */

/* WARNING: Possible PIC construction at 0x00010435bbd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010435bbdc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435bb88(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  uint uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar7 = &puStack_80;
  uVar8 = (uint)param_1;
  if ((param_2 & 1) == 0) {
    func_0x00010435ac58();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(param_1);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113070960);
    uVar8 = (uVar8 ^ 0xffffffff) & 1;
  }
  else {
    if ((param_1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar6 = &UNK_11075e708;
      puVar4 = puVar6;
      _swift_allocObject(&UNK_11075e708,0x18,7);
      _swift_unknownObjectWeakInit(puVar4 + 0x10);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0x10435c254;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_11075e720;
      puStack_58 = puVar4;
      __Block_copy(&puStack_80);
      _swift_release(puStack_58);
      _swift_allocObject(&UNK_11075e708,0x18,7);
      _swift_unknownObjectWeakInit(puVar6 + 0x10);
      uStack_60 = 0x10435c278;
      puStack_80 = puVar1;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100288f10;
      puStack_68 = &UNK_11075e748;
      puStack_58 = puVar6;
      __Block_copy(&puStack_80);
      _swift_release(puStack_58);
      func_0x00010bf03420(0x3fc999999999999a,puVar3);
      __Block_release(ppuVar7);
      __Block_release(ppuVar5);
      return;
    }
    func_0x00010435ac58();
    func_0x00010c1677c0(0);
    _objc_release(param_1);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113070960);
    uVar8 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setHidden__1126479f8,uVar8);
  return;
}



/* Entry: 10435bde4; end: 10435bebb;  */

void FUN_10435bde4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010435ac58();
    _objc_release(param_1);
    func_0x00010c1677c0(0x3ff0000000000000,lVar1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10435bebc; end: 10435bf77;  */

void FUN_10435bebc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010435ac58();
    _objc_release(lVar1);
    func_0x00010c1a7f60(lVar2);
    _objc_release(lVar2);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010435ac58();
    _objc_release(param_2);
    func_0x00010c1677c0(0x3ff0000000000000,lVar1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10435bf78; end: 10435c01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435bf78(void)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_113070930);
  _swift_beginAccess(lVar3 + 0x58,auStack_38,0,0);
  if (*(char *)(lVar3 + 0x58) == '\x01') {
    puVar1 = PTR_PTR_1126affa8;
    _objc_opt_self();
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10435c01c);
      (*pcVar2)();
    }
    func_0x00010c0f8760();
    _objc_release(puVar1);
    pcVar2 = *(code **)(lVar3 + 0x60);
    if (pcVar2 != (code *)0x0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x68);
      _swift_retain(uVar4);
      (*pcVar2)();
      func_0x00010058d43c(pcVar2,uVar4);
    }
  }
  return;
}



/* Entry: 10435c01c; end: 10435c043; -[_TtC15GamesUIServices17ActionBarItemView handleTap] */

void FUN_10435c01c(undefined8 param_1)

{
  _objc_retain();
  FUN_10435bf78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10435c044; end: 10435c0a3; -[_TtC15GamesUIServices17ActionBarItemView initWithFrame:] */

void FUN_10435c044(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.ActionBarItemView",0x21,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10435c070);
  (*pcVar1)();
}



/* Entry: 10435c0a4; end: 10435c11b; -[_TtC15GamesUIServices17ActionBarItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435c0a4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070930));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070940));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070958));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070960));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070968));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070970));
  return;
}



/* Entry: 10435c11c; end: 10435c13b;  */

void FUN_10435c11c(void)

{
  _objc_opt_self(&PTR_PTR_1129a0428);
  return;
}



/* Entry: 10435c13c; end: 10435c23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435c13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010435ad80();
  func_0x00010c1a9f00(uVar1);
  _objc_release(uVar1);
  func_0x00010435ae18();
  uVar2 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x00010c212f20(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar1 = param_3;
  }
  func_0x00010c160fc0();
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x00010c161020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10435c23c; end: 10435c287;  */

void FUN_10435c23c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar5 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 != 0) {
    FUN_10435c13c(uVar1,uVar3,uVar2,uVar4);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 10435c288; end: 10435c35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435c288(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_113070940;
  uVar3 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_113070948) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113070950) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070960) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070968) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070970) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000001d,0x800000010f0f28b0,
             "GamesUIServices/ActionBarItemView.swift",0x27,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10435c35c);
  (*pcVar2)();
}



/* Entry: 10435c35c; end: 10435c36b;  */

void FUN_10435c35c(long param_1,long param_2)

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



/* Entry: 10435c36c; end: 10435c79b;  */

void FUN_10435c36c(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined *apuStack_78 [3];
  
  uVar7 = 0;
  func_0x0001000c6560();
  _swift_allocObject();
  func_0x0001000c6580();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  _swift_release(uVar15);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10434c8c8();
  uVar23 = 0;
  uVar24 = *(ulong *)(param_1 + 0x10);
  do {
    uVar18 = uVar23;
    if (uVar23 <= uVar24) {
      uVar18 = uVar24;
    }
    puVar1 = (ulong *)(param_1 + 0x20 + uVar23 * 0x10);
    do {
      puVar16 = puVar1;
      if (uVar24 == uVar23) {
        _swift_beginAccess(unaff_x20 + 0x18,apuStack_78,1,0);
        uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined **)(unaff_x20 + 0x18) = puVar8;
        _swift_bridgeObjectRetain(puVar8);
        _swift_bridgeObjectRelease(uVar7);
        lVar22 = 0;
        uVar24 = 1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
        uVar23 = 0xffffffffffffffff;
        if ((puVar8[0x20] & 0x3f) < 6) {
          uVar23 = ~(-1L << (uVar24 & 0x3f));
        }
        uVar23 = uVar23 & *(ulong *)(puVar8 + 0x40);
        while( true ) {
          for (; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
            uVar18 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
            uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
            uVar18 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | lVar22 << 6;
            uVar4 = *(undefined1 *)(*(long *)(puVar8 + 0x30) + uVar18);
            puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar18 * 0x10);
            uVar7 = *puVar2;
            lVar3 = puVar2[1];
            uVar15 = uVar7;
            _swift_getObjectType(uVar7);
            pcVar5 = *(code **)(lVar3 + 8);
            _swift_unknownObjectRetain(uVar7);
            (*pcVar5)(uVar15,lVar3);
            plVar12 = (long *)PTR___sSbSQsWP_11034dd50;
            puVar11 = PTR___sSbSQsWP_11034dd50;
            func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
            _swift_release(uVar15);
            func_0x000104884898();
            _swift_release(puVar11);
            puVar11 = &UNK_11075e7a8;
            _swift_allocObject(&UNK_11075e7a8,0x18,7);
            _swift_weakInit(puVar11 + 0x10,unaff_x20);
            puVar13 = &UNK_11075e7d0;
            _swift_allocObject(&UNK_11075e7d0,0x19,7);
            *(undefined **)(puVar13 + 0x10) = puVar11;
            puVar13[0x18] = uVar4;
            pcVar5 = FUN_10435c8e8;
            puVar11 = puVar13;
            (**(code **)(*plVar12 + 0x60))(FUN_10435c8e8);
            _swift_release(plVar12);
            _swift_release(puVar13);
            _swift_getObjectType(pcVar5);
            uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
            pcVar19 = *(code **)(puVar11 + 0x10);
            _swift_retain(uVar15);
            (*pcVar19)();
            _swift_unknownObjectRelease(uVar7);
            _swift_unknownObjectRelease(pcVar5);
            _swift_release(uVar15);
          }
          bVar6 = SCARRY8(lVar22,1);
          lVar22 = lVar22 + 1;
          if (bVar6) break;
          if ((long)(uVar24 + 0x3f >> 6) <= lVar22) {
            _swift_release();
            return;
          }
          uVar23 = *(ulong *)((long)(puVar8 + 0x40) + lVar22 * 8);
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10435c780);
        (*pcVar5)();
      }
      uVar23 = uVar23 + 1;
      if (uVar18 + 1 == uVar23) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10435c784);
        (*pcVar5)();
      }
      uVar20 = *puVar16;
      uVar9 = uVar20;
      _swift_getObjectType();
      uVar10 = uVar9;
      _swift_conformsToProtocol();
      puVar1 = puVar16 + 2;
    } while (uVar10 == 0 || uVar20 == 0);
    uVar21 = puVar16[1];
    _swift_unknownObjectRetain_n(uVar20,2);
    FUN_10434d2a8();
    _swift_unknownObjectRetain(uVar20);
    puVar11 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar14 = (uint)puVar11;
    uVar18 = uVar9;
    apuStack_78[0] = puVar8;
    func_0x0001028c0d28();
    uVar17 = (ulong)~(uint)uVar21 & 1;
    lVar22 = *(long *)(puVar8 + 0x10) + uVar17;
    if (SCARRY8(*(long *)(puVar8 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10435c788);
      (*pcVar5)();
    }
    if (*(long *)(puVar8 + 0x18) < lVar22) {
      func_0x000104356968(lVar22);
      uVar18 = uVar9;
      func_0x0001028c0d28();
      if (((uint)uVar21 & 1) != (uVar14 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&UNK_11075dde0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10435c79c);
        (*pcVar5)();
      }
    }
    else if (((ulong)puVar11 & 1) == 0) {
      FUN_104356074();
    }
    puVar8 = apuStack_78[0];
    if ((uVar21 & 1) == 0) {
      *(ulong *)(apuStack_78[0] + (uVar18 >> 6) * 8 + 0x40) =
           *(ulong *)(apuStack_78[0] + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
      *(char *)(*(long *)(apuStack_78[0] + 0x30) + uVar18) = (char)uVar9;
      puVar1 = (ulong *)(*(long *)(apuStack_78[0] + 0x38) + uVar18 * 0x10);
      *puVar1 = uVar20;
      puVar1[1] = uVar10;
      _swift_unknownObjectRelease_n(uVar20,2);
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10435c78c);
        (*pcVar5)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
    }
    else {
      puVar1 = (ulong *)(*(long *)(apuStack_78[0] + 0x38) + uVar18 * 0x10);
      uVar18 = *puVar1;
      *puVar1 = uVar20;
      puVar1[1] = uVar10;
      _swift_unknownObjectRelease_n(uVar20,2);
      _swift_unknownObjectRelease(uVar18);
    }
  } while( true );
}



/* Entry: 10435c79c; end: 10435c89b;  */

void FUN_10435c79c(char *param_1,long param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 != '\x01') {
    return;
  }
  uVar4 = 0;
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  if (param_3 == '\x03') {
    _swift_beginAccess(param_2 + 0x18,auStack_60,0x20,0);
    lVar5 = *(long *)(param_2 + 0x18);
    if (*(long *)(lVar5 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar5);
      lVar3 = 4;
      func_0x0001028c0d28();
      if ((uVar4 & 1) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x10);
        uVar2 = *puVar1;
        lVar3 = puVar1[1];
        _swift_unknownObjectRetain(uVar2);
        _swift_endAccess(auStack_60);
        _swift_bridgeObjectRelease(lVar5);
        _swift_getObjectType(uVar2);
        (**(code **)(lVar3 + 0x18))();
        _swift_unknownObjectRelease(uVar2);
        goto LAB_10435c880;
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    _swift_endAccess(auStack_60);
  }
LAB_10435c880:
  _swift_release(param_2);
  return;
}



/* Entry: 10435c89c; end: 10435c8e7;  */

void FUN_10435c89c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10435c8e8; end: 10435c8f3;  */

void FUN_10435c8e8(char *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  cVar3 = *(char *)(unaff_x20 + 0x18);
  if (*param_1 != '\x01') {
    return;
  }
  uVar5 = 0;
  _swift_beginAccess(lVar6 + 0x10,auStack_48,0,0);
  lVar6 = lVar6 + 0x10;
  _swift_weakLoadStrong();
  if (lVar6 == 0) {
    return;
  }
  if (cVar3 == '\x03') {
    _swift_beginAccess(lVar6 + 0x18,auStack_60,0x20,0);
    lVar7 = *(long *)(lVar6 + 0x18);
    if (*(long *)(lVar7 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar7);
      lVar4 = 4;
      func_0x0001028c0d28();
      if ((uVar5 & 1) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar4 * 0x10);
        uVar2 = *puVar1;
        lVar4 = puVar1[1];
        _swift_unknownObjectRetain(uVar2);
        _swift_endAccess(auStack_60);
        _swift_bridgeObjectRelease(lVar7);
        _swift_getObjectType(uVar2);
        (**(code **)(lVar4 + 0x18))();
        _swift_unknownObjectRelease(uVar2);
        goto LAB_10435c880;
      }
      _swift_bridgeObjectRelease(lVar7);
    }
    _swift_endAccess(auStack_60);
  }
LAB_10435c880:
  _swift_release(lVar6);
  return;
}



/* Entry: 10435c8f4; end: 10435cb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435c8f4(byte param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  lVar4 = unaff_x20;
  _swift_getObjectType();
  lVar9 = *(long *)(unaff_x20 + _DAT_113070a68);
  if (lVar9 == 0) {
    func_0x0001007d6c6c(2,0xd00000000000003b,0x800000010f1f78b0,lVar4,&PTR_DAT_11075ef20);
  }
  else {
    lVar10 = ((long *)(unaff_x20 + _DAT_113070a68))[1];
    lVar5 = lVar9;
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar10 + 8);
    _swift_unknownObjectRetain(lVar9);
    (*pcVar11)(lVar5,lVar10);
    _swift_unknownObjectRelease(lVar9);
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1c);
    _swift_bridgeObjectRelease(uStack_88);
    puStack_90 = (undefined *)0xd00000000000001a;
    uStack_88 = 0x800000010f1f7890;
    bVar3 = (param_1 & 1) == 0;
    uVar12 = 0x3ff0000000000000;
    if (bVar3) {
      uVar12 = 0;
    }
    uVar1 = 0x65757274;
    if (bVar3) {
      uVar1 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar3) {
      uVar2 = 0xe500000000000000;
    }
    __sSS6appendyySSF(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar1 = uStack_88;
    func_0x0001007d6c6c(1,puStack_90,uStack_88,lVar4,&PTR_DAT_11075ef20);
    _swift_bridgeObjectRelease(uVar1);
    if ((param_2 & 1) == 0) {
      func_0x00010c1677c0(uVar12,lVar5);
      func_0x00010c21e900(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar5);
      return;
    }
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_11075e7f8;
    _swift_allocObject(&UNK_11075e7f8,0x21,7);
    *(long *)(puVar7 + 0x10) = lVar5;
    *(undefined8 *)(puVar7 + 0x18) = uVar12;
    puVar7[0x20] = param_1 & 1;
    pcStack_70 = FUN_10436023c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11075e810;
    puStack_68 = puVar7;
    __Block_copy(&puStack_90);
    puVar7 = puStack_68;
    _objc_retain(lVar5);
    _swift_release(puVar7);
    func_0x00010bf03440(0x3fe0000000000000,0,puVar6);
    _objc_release(lVar5);
    __Block_release(ppuVar8);
  }
  return;
}



/* Entry: 10435cb64; end: 10435cc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10435cb64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113070a98;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_113070a98);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_allocWithZone();
    func_0x00010bfee200();
    func_0x00010c219b60();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c21e900(puVar3,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 10435cc7c; end: 10435cf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435cc7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar2 = _DAT_113070a80;
  if (*(long *)(unaff_x20 + _DAT_113070a80) == 0) {
    if (param_1 != 0) {
      func_0x00010c12c960(0);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
      *(long *)(unaff_x20 + lVar2) = param_1;
      _objc_retain(param_1);
      _objc_release(uVar6);
LAB_10435ccfc:
      _objc_retain();
      func_0x00010c1677c0(0x3ff0000000000000);
      func_0x00010c219b60(param_1);
      func_0x00010befbb60();
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar2 = 0x112d360b8;
      FUN_10435ec7c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      _swift_allocObject();
      *(undefined8 *)(lVar2 + 0x18) = 9;
      *(undefined8 *)(lVar2 + 0x10) = 4;
      lVar3 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_10435cb64();
      lVar5 = lVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar5);
      *(long *)(lVar2 + 0x20) = lVar4;
      lVar3 = param_1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = unaff_x20;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar4);
      *(long *)(lVar2 + 0x28) = lVar5;
      lVar3 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = unaff_x20;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar4);
      *(long *)(lVar2 + 0x30) = lVar5;
      lVar3 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(unaff_x20);
      *(long *)(lVar2 + 0x38) = lVar4;
      uVar6 = 0;
      FUN_10436028c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar2;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar6);
      _swift_release(lVar2);
      func_0x00010beef8c0(puVar1);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  else if (*(long *)(unaff_x20 + _DAT_113070a80) != param_1) {
    func_0x00010c12c960();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = param_1;
    _objc_retain(param_1);
    _objc_release(uVar6);
    if (param_1 != 0) goto LAB_10435ccfc;
  }
  return;
}



/* Entry: 10435cf60; end: 10435d35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435cf60(uint param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = unaff_x20;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 & 1) == 0) {
    func_0x00010c1842e0(0,lVar1);
  }
  else {
    func_0x00010c1842e0(0x4030000000000000,lVar1);
    _objc_release(lVar1);
    lVar1 = unaff_x20;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2ce0();
  }
  _objc_release(lVar1);
  lVar1 = unaff_x20;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar1);
  lVar1 = *(long *)(unaff_x20 + _DAT_113070a88);
  if (lVar1 != 0) {
    uVar3 = 0x4046000000000000;
    if ((param_1 & 1) == 0) {
      uVar3 = 0;
    }
    func_0x00010c181140(uVar3);
  }
  func_0x00010435d09c();
  uVar3 = 0x3ff0000000000000;
  if ((param_1 & 1) == 0) {
    uVar3 = 0;
  }
  func_0x00010c1677c0(uVar3);
  _objc_release(lVar1);
  FUN_10435e9fc(param_1 & 1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  if ((param_1 & 1) == 0) {
    func_0x00010bf3ae40();
  }
  else {
    func_0x00010c23ba80();
  }
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10435d360; end: 10435d377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10435d360(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113070aa8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_113070aa8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_allocWithZone();
    func_0x00010bfee200();
    func_0x00010c16e060();
    func_0x00010c166c00(puVar3,param_2,3);
    func_0x00010c190b80(puVar3,param_2,3);
    func_0x00010c207380(0x4010000000000000,puVar3);
    func_0x00010c219b60(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 10435d378; end: 10435d41f;  */

undefined * FUN_10435d378(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  puVar1 = *(undefined **)(unaff_x20 + lVar4);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_allocWithZone();
    func_0x00010bfee200();
    func_0x00010c16e060();
    func_0x00010c166c00(puVar2,param_2,3);
    func_0x00010c190b80(puVar2,param_2,3);
    func_0x00010c207380(0x4010000000000000,puVar2);
    func_0x00010c219b60(puVar2,param_2,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined **)(unaff_x20 + lVar4) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar3);
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  return puVar2;
}



/* Entry: 10435d420; end: 10435d71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10435d420(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  code *pcVar7;
  long lVar8;
  undefined1 auStack_88 [24];
  
  _swift_getObjectType();
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + _DAT_113070a48) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(unaff_x20 + _DAT_113070a50) = puVar2;
  *(undefined1 *)(unaff_x20 + _DAT_113070a58) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_113070a60) = 1;
  plVar1 = (long *)(unaff_x20 + _DAT_113070a68);
  *plVar1 = 0;
  plVar1[1] = 0;
  *(undefined **)(unaff_x20 + _DAT_113070a70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = _DAT_113070a78;
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *(undefined **)(unaff_x20 + lVar8) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113070a80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070a88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070a90) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070a98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070aa0) = 0;
  puVar2 = &DAT_113070aa8;
  *(undefined8 *)(unaff_x20 + _DAT_113070aa8) = 0;
  puVar6 = &DAT_113070ab0;
  *(undefined8 *)(unaff_x20 + _DAT_113070ab0) = 0;
  lVar8 = *plVar1;
  *plVar1 = param_2;
  plVar1[1] = param_3;
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRelease(lVar8);
  puVar3 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(0,0,0,0,puVar3,PTR_s_initWithFrame__1125e2948);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retain(puVar3);
  _objc_retain();
  _objc_retain();
  func_0x00010bf3ae40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3);
  _objc_release(puVar4);
  func_0x00010c200620(puVar3);
  _objc_release(puVar3);
  uVar5 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f7950);
  func_0x00010c160fc0(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar5);
  FUN_10435d720();
  FUN_10435d378(&DAT_113070aa8);
  lVar8 = _DAT_113070a48;
  _swift_beginAccess(puVar3 + _DAT_113070a48,auStack_88,0x21,0);
  func_0x00010435f590(param_1,puVar2,puVar3 + lVar8);
  _swift_endAccess(auStack_88);
  _swift_bridgeObjectRelease(param_1);
  _objc_release(puVar2);
  FUN_10435d378(&DAT_113070ab0);
  lVar8 = _DAT_113070a50;
  _swift_beginAccess(puVar3 + _DAT_113070a50,auStack_88,0x21,0);
  func_0x00010435f590(param_4,puVar6,puVar3 + lVar8);
  _swift_endAccess(auStack_88);
  _swift_bridgeObjectRelease(param_4);
  _objc_release(puVar6);
  if (param_2 != 0) {
    lVar8 = param_2;
    _swift_getObjectType(param_2);
    pcVar7 = *(code **)(param_3 + 0x18);
    _swift_unknownObjectRetain(param_2);
    (*pcVar7)(lVar8,param_3);
    _swift_unknownObjectRelease_n(param_2,2);
  }
  _objc_release(puVar3);
  return puVar3;
}



/* Entry: 10435d720; end: 10435e167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435d720(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_113070a78);
  lVar17 = unaff_x20;
  func_0x00010bef9680();
  FUN_10435cb64();
  func_0x00010befbb60();
  _objc_release(lVar17);
  lVar2 = _DAT_113070a98;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070a98);
  _objc_retain(uVar4);
  uVar5 = uVar4;
  func_0x00010435d09c();
  func_0x00010befbb60(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  func_0x00010435cc1c();
  func_0x00010befbb60();
  _objc_release(uVar5);
  puVar6 = &DAT_113070aa8;
  FUN_10435d378(&DAT_113070aa8);
  func_0x00010befbb60();
  _objc_release(puVar6);
  puVar6 = &DAT_113070ab0;
  FUN_10435d378(&DAT_113070ab0);
  func_0x00010befbb60();
  _objc_release(puVar6);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070a88);
  *(undefined8 *)(unaff_x20 + _DAT_113070a88) = uVar5;
  _objc_retain();
  _objc_release(uVar4);
  uVar7 = 0x112d360b8;
  FUN_10435ec7c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  _swift_allocObject();
  *(undefined8 *)(uVar7 + 0x18) = 0x2d;
  *(undefined8 *)(uVar7 + 0x10) = 0x16;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = unaff_x20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar17);
  *(undefined8 *)(uVar7 + 0x20) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = unaff_x20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar17);
  *(undefined8 *)(uVar7 + 0x28) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = unaff_x20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar17);
  *(undefined8 *)(uVar7 + 0x30) = uVar4;
  *(undefined8 *)(uVar7 + 0x38) = uVar5;
  lVar17 = _DAT_113070a90;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113070a90);
  _objc_retain();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bf34860(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar9);
  *(undefined8 *)(uVar7 + 0x40) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c274200(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar9);
  *(undefined8 *)(uVar7 + 0x48) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar17);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49420(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 0x50) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49420(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 0x58) = uVar4;
  uVar4 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bf1ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar9);
  *(undefined8 *)(uVar7 + 0x60) = uVar8;
  uVar8 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = unaff_x20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar17);
  *(undefined8 *)(uVar7 + 0x68) = uVar4;
  uVar8 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = unaff_x20;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar17);
  *(undefined8 *)(uVar7 + 0x70) = uVar4;
  uVar8 = uVar16;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49420(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 0x78) = uVar4;
  lVar3 = _DAT_113070aa8;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113070aa8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010c08de00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar4);
  *(undefined8 *)(uVar7 + 0x80) = uVar8;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 0x88) = uVar4;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 0x90) = uVar4;
  lVar10 = _DAT_113070ab0;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_113070ab0);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar16;
  func_0x00010c2793a0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar4);
  *(undefined8 *)(uVar7 + 0x98) = uVar8;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 0xa0) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar16);
  *(undefined8 *)(uVar7 + 0xa8) = uVar4;
  lVar17 = _DAT_113070aa0;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113070aa0);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010c08de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar9);
  *(undefined8 *)(uVar7 + 0xb0) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar17);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar9);
  *(undefined8 *)(uVar7 + 0xb8) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar17);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 0xc0) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  *(undefined8 *)(uVar7 + 200) = uVar4;
  lVar17 = *(long *)(unaff_x20 + _DAT_113070a68);
  uVar13 = uVar7;
  if (lVar17 == 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar10);
    func_0x00010c08de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010bf49520(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    uVar14 = uVar7 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar14 + 0x10);
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001011d8f3c(uVar13,uVar1 + 1,1,uVar7);
      uVar14 = uVar13 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar14 + uVar1 * 8 + 0x20) = uVar4;
  }
  else {
    lVar18 = ((long *)(unaff_x20 + _DAT_113070a68))[1];
    lVar10 = lVar17;
    _swift_getObjectType(lVar17);
    pcVar15 = *(code **)(lVar18 + 8);
    _swift_unknownObjectRetain(lVar17);
    lVar11 = lVar10;
    (*pcVar15)(lVar10,lVar18);
    func_0x00010befbb60();
    func_0x00010c219b60(lVar11);
    lVar12 = lVar17;
    FUN_10435e384(lVar17,lVar18);
    lVar2 = _DAT_113070a70;
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113070a70);
    *(long *)(unaff_x20 + _DAT_113070a70) = lVar12;
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar2));
    func_0x0001011d6d7c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    pcVar15 = *(code **)(lVar18 + 0x10);
    _objc_retain(uVar4);
    (*pcVar15)(lVar10,lVar18);
    func_0x00010c1a7f60(uVar4);
    _swift_unknownObjectRelease(lVar17);
    _objc_release(lVar11);
    _objc_release(uVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar4 = 0;
  FUN_10436028c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar7 = uVar13;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar13,uVar4);
  func_0x00010beef8c0(puVar6);
  _swift_bridgeObjectRelease(uVar13);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10435e168; end: 10435e18f; -[_TtC15GamesUIServices13ActionBarView initWithCoder:] */

void FUN_10435e168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0001043602cc();
  return;
}



/* Entry: 10435e190; end: 10435e28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10435e190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  uVar1 = 0;
  _swift_getObjectType();
  _objc_msgSendSuper2(param_1,param_2,&stack0xffffffffffffffa0,
                      PTR_s_pointInside_withEvent__11261e4e8,param_3);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_113070a68);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar4 = ((long *)(unaff_x20 + _DAT_113070a68))[1];
      lVar3 = lVar2;
      _swift_getObjectType(lVar2);
      pcVar5 = *(code **)(lVar4 + 8);
      _swift_unknownObjectRetain(lVar2);
      (*pcVar5)(lVar3,lVar4);
      _swift_unknownObjectRelease(lVar2);
      func_0x00010bf511c0(param_1,param_2,lVar3);
      lVar2 = lVar3;
      func_0x00010c102b20(lVar3);
      _objc_release(lVar3);
    }
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}



/* Entry: 10435e28c; end: 10435e303; -[_TtC15GamesUIServices13ActionBarView pointInside:withEvent:] */

uint FUN_10435e28c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_10435e190(param_1,param_2,param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)param_5 & 1;
}



/* Entry: 10435e304; end: 10435e307;  */

void FUN_10435e304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10435e308; end: 10435e383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435e308(double param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_113070aa8;
  FUN_10435d378(&DAT_113070aa8);
  func_0x00010c1677c0(param_1);
  _objc_release(puVar1);
  puVar1 = &DAT_113070ab0;
  FUN_10435d378(&DAT_113070ab0);
  func_0x00010c1677c0(param_1);
  _objc_release(puVar1);
  *(bool *)(param_2 + _DAT_113070a60) = 0.0 < param_1;
  return;
}



/* Entry: 10435e384; end: 10435e8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10435e384(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  _swift_getObjectType();
  uVar1 = param_1;
  (**(code **)(param_2 + 8))();
  (**(code **)(param_2 + 0x10))(param_1,param_2);
  lVar2 = 0x112d360b8;
  FUN_10435ec7c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  if ((param_1 & 0xff) == 0) {
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 0xb;
    *(undefined8 *)(lVar2 + 0x10) = 5;
    uVar3 = uVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113070a78);
    uVar4 = uVar8;
    func_0x00010bf34860(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    *(ulong *)(lVar2 + 0x20) = uVar5;
    uVar3 = uVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c274200(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    *(ulong *)(lVar2 + 0x28) = uVar5;
    uVar3 = uVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar8);
    *(ulong *)(lVar2 + 0x30) = uVar5;
    puVar6 = &DAT_113070aa8;
    FUN_10435d378();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar3 = uVar1;
    func_0x00010c08de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf49520(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar3);
    *(undefined **)(lVar2 + 0x38) = puVar6;
    uVar3 = uVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = &DAT_113070ab0;
    FUN_10435d378(&DAT_113070ab0);
    puVar7 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar5 = uVar3;
    func_0x00010bf49520(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar7);
    _objc_release(uVar1);
    *(ulong *)(lVar2 + 0x40) = uVar5;
  }
  else if (((uint)param_1 & 0xff) == 1) {
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 7;
    *(undefined8 *)(lVar2 + 0x10) = 3;
    uVar3 = uVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113070a78);
    uVar4 = uVar8;
    func_0x00010c08de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    *(ulong *)(lVar2 + 0x20) = uVar5;
    uVar3 = uVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = &DAT_113070ab0;
    FUN_10435d378(&DAT_113070ab0);
    puVar7 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    uVar5 = uVar3;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar7);
    *(ulong *)(lVar2 + 0x28) = uVar5;
    uVar3 = uVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar1);
    *(ulong *)(lVar2 + 0x30) = uVar5;
  }
  else {
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 7;
    *(undefined8 *)(lVar2 + 0x10) = 3;
    uVar3 = uVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113070a78);
    uVar4 = uVar8;
    func_0x00010c08de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    *(ulong *)(lVar2 + 0x20) = uVar5;
    uVar3 = uVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c2793a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    *(ulong *)(lVar2 + 0x28) = uVar5;
    uVar3 = uVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar1);
    *(ulong *)(lVar2 + 0x30) = uVar5;
  }
  return lVar2;
}



/* Entry: 10435e8c4; end: 10435e923; -[_TtC15GamesUIServices13ActionBarView initWithFrame:] */

void FUN_10435e8c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.ActionBarView",0x1d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10435e8f0);
  (*pcVar1)();
}



/* Entry: 10435e924; end: 10435e9fb; -[_TtC15GamesUIServices13ActionBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435e924(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113070a48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113070a50));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070a68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113070a70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070a78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070a80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070a88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070a90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070a98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070aa0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070aa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113070ab0));
  return;
}



/* Entry: 10435e9fc; end: 10435ebdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10435e9fc(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  
  uVar2 = param_1;
  func_0x00010435cc1c();
  uVar9 = 0x3ff0000000000000;
  if ((param_1 & 1) == 0) {
    uVar9 = 0;
  }
  func_0x00010c1677c0(uVar9);
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(unaff_x20 + _DAT_113070aa0));
  if ((param_1 & 1) == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_113070a68);
    plVar8 = plVar1 + 1;
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      lVar6 = *plVar8;
      lVar3 = lVar5;
      _swift_getObjectType(lVar5);
      pcVar7 = *(code **)(lVar6 + 0x10);
      _swift_unknownObjectRetain(lVar5);
      (*pcVar7)(lVar3,lVar6);
      _swift_unknownObjectRelease(lVar5);
    }
    puVar4 = &DAT_113070aa8;
    FUN_10435d378(&DAT_113070aa8);
    func_0x00010c1a7f60();
    _objc_release(puVar4);
    puVar4 = &DAT_113070ab0;
    FUN_10435d378(&DAT_113070ab0);
    func_0x00010c1a7f60();
    _objc_release(puVar4);
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      return;
    }
  }
  else {
    puVar4 = &DAT_113070aa8;
    FUN_10435d378(&DAT_113070aa8);
    func_0x00010c1a7f60();
    _objc_release(puVar4);
    puVar4 = &DAT_113070ab0;
    FUN_10435d378(&DAT_113070ab0);
    func_0x00010c1a7f60();
    _objc_release(puVar4);
    lVar5 = *(long *)(unaff_x20 + _DAT_113070a68);
    if (lVar5 == 0) {
      return;
    }
    plVar8 = (long *)(unaff_x20 + _DAT_113070a68) + 1;
  }
  lVar6 = *plVar8;
  lVar3 = lVar5;
  _swift_getObjectType(lVar5);
  pcVar7 = *(code **)(lVar6 + 8);
  _swift_unknownObjectRetain(lVar5);
  (*pcVar7)(lVar3,lVar6);
  _swift_unknownObjectRelease(lVar5);
  func_0x00010c1a7f60(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10435ebdc; end: 10435ec57;  */

void FUN_10435ebdc(void)

{
  _objc_opt_self(&PTR_PTR_1129a0528);
  return;
}



/* Entry: 10435ec58; end: 10435ec7b;  */

void FUN_10435ec58(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x113070af0;
  plVar5 = (long *)&UNK_10dceef58;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10436028c(0,0x113070928,&PTR_PTR_1126adc70);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10435ec7c; end: 10435ecf3;  */

void FUN_10435ec7c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10436028c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10435ecf4; end: 10435ee8f;  */

ulong FUN_10435ecf4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10435edc4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10435edc8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010434d014(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    func_0x00010434d014(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000016,0x800000010f1f7870);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10435ee90);
  (*pcVar2)();
}



/* Entry: 10435ee90; end: 10435f04b;  */

ulong FUN_10435ee90(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10435ef74);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10435ef78);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10436028c(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10435f04c);
  (*pcVar2)();
}



/* Entry: 10435f04c; end: 10435f073;  */

ulong FUN_10435f04c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10435ef74);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10435ef78);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___UITextInputMode_1126cb8a0;
    _objc_opt_self(PTR__OBJC_CLASS___UITextInputMode_1126cb8a0);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UITextInputMode_1126cb8a0;
    _objc_opt_self(PTR__OBJC_CLASS___UITextInputMode_1126cb8a0);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10436028c(0,0x113070ae8,&PTR__OBJC_CLASS___UITextInputMode_1126cb8a0);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10435f04c);
  (*pcVar2)();
}



/* Entry: 10435f074; end: 10435f1c3;  */

undefined8 FUN_10435f074(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *unaff_x20;
  if ((uVar6 & 0xc000000000000001) == 0) {
    FUN_10435557c();
    if ((param_2 & 1) == 0) {
      return 0;
    }
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_104355dc4();
    }
    _swift_release(*(undefined8 *)(*(long *)(uVar7 + 0x30) + param_1 * 8));
    uVar5 = *(undefined8 *)(*(long *)(uVar7 + 0x38) + param_1 * 8);
    func_0x00010435f3fc(param_1,uVar7);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    _swift_bridgeObjectRetain(uVar6);
    lVar3 = param_1;
    _swift_retain();
    __ss17__CocoaDictionaryV6lookupyyXlSgyXlF();
    _swift_release(param_1);
    if (lVar3 == 0) {
      _swift_bridgeObjectRelease(uVar6);
      return 0;
    }
    _swift_unknownObjectRelease(lVar3);
    uVar4 = uVar7;
    __ss17__CocoaDictionaryV5countSivg();
    FUN_10435f1c4();
    FUN_10435557c();
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10435f1b4);
      (*pcVar1)();
    }
    _swift_release(*(undefined8 *)(*(long *)(uVar7 + 0x30) + param_1 * 8));
    uVar5 = *(undefined8 *)(*(long *)(uVar7 + 0x38) + param_1 * 8);
    func_0x00010435f3fc(param_1,uVar7);
    _swift_bridgeObjectRelease(uVar6);
  }
  *unaff_x20 = uVar7;
  return uVar5;
}



/* Entry: 10435f1c4; end: 104360233;  */

undefined * FUN_10435f1c4(undefined *param_1,undefined **param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *apuStack_c0 [9];
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined **)0x0) {
    _swift_unknownObjectRelease();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x113070910,&UNK_10dceee90);
    puVar5 = param_1;
    __ss18_DictionaryStorageC7convert_8capacityAByxq_Gs07__CocoaA0V_SitFZ();
    puStack_68 = puVar5;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    puVar6 = param_1;
    __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
    if (puVar6 != (undefined *)0x0) {
      uVar7 = 0;
      func_0x00010434d014(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        apuStack_c0[0] = puVar6;
        _swift_dynamicCast(&puStack_70,apuStack_c0,puVar2 + 8,uVar7,7);
        uVar8 = 0;
        apuStack_c0[0] = (undefined *)param_2;
        FUN_10435c11c(0);
        param_2 = apuStack_c0;
        _swift_dynamicCast(&uStack_78,apuStack_c0,puVar2 + 8,uVar8,7);
        puVar3 = puStack_70;
        uVar8 = uStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          param_2 = (undefined **)0x1;
          FUN_104356340(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        __ss6HasherV5_seedABSi_tcfC(apuStack_c0,*(undefined8 *)(puVar5 + 0x28));
        puVar6 = puVar3;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar6 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar10 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar1 = false;
          uVar10 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10435f3fc);
              (*pcVar4)();
            }
            uVar9 = 0;
            if (uVar11 != uVar10) {
              uVar9 = uVar11;
            }
            bVar1 = (bool)(uVar11 == uVar10 | bVar1);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40);
        *(undefined **)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = puVar3;
        *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = uVar8;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      } while (puVar6 != (undefined *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar5;
}



/* Entry: 104360234; end: 10436023b;  */

void FUN_104360234(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10436023c; end: 10436026f;  */

void FUN_10436023c(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x00010c1677c0(*(undefined8 *)(unaff_x20 + 0x18),uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setUserInteractionEnabled__112665468,uVar1);
  return;
}



/* Entry: 104360270; end: 10436028b;  */

void FUN_104360270(long param_1,long param_2)

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



/* Entry: 10436028c; end: 1043603f7;  */

void FUN_10436028c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1043603f8; end: 1043604bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1043603f8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_40;
  long lStack_38;
  
  lVar2 = _DAT_113070b00;
  plVar7 = &lStack_40;
  puVar3 = *(undefined1 **)(unaff_x20 + _DAT_113070b00);
  puVar8 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar4 = &UNK_11075e900;
    _swift_allocObject(&UNK_11075e900,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    lVar5 = 0;
    func_0x000104362380();
    lVar6 = lVar5;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar6 + _DAT_113070c50);
    *puVar1 = 0x1043625c8;
    puVar1[1] = puVar4;
    lStack_40 = lVar6;
    lStack_38 = lVar5;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar7;
    _objc_retain();
    _swift_unknownObjectRelease(uVar9);
    puVar3 = (undefined1 *)0x0;
    puVar8 = (undefined1 *)plVar7;
  }
  _swift_unknownObjectRetain(puVar3);
  return puVar8;
}



/* Entry: 1043604bc; end: 1043605a3;  */

void FUN_1043604bc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000104360518(param_1);
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1043605a4; end: 1043609db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043605a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 uStack_68;
  
  _objc_allocWithZone();
  lVar1 = _DAT_113070af8;
  lVar3 = 0;
  func_0x0001043657b4();
  _swift_allocObject();
  uStack_68 = (undefined *)((ulong)uStack_68._4_4_ << 0x20);
  func_0x0001000285a8(0x113070450,&UNK_10dcee2c8);
  _swift_allocObject();
  puVar4 = &uStack_68;
  func_0x00010042e6a0();
  *(undefined8 **)(lVar3 + 0x10) = puVar4;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x113070458,&UNK_10dcee2d0);
  _swift_allocObject();
  puVar4 = &uStack_68;
  func_0x00010042e6a0();
  *(undefined8 **)(lVar3 + 0x18) = puVar4;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  *(long *)(unaff_x20 + lVar1) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113070b00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070b08) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113070b10) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113070b18);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113070b20);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113070b28);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113070b30) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113070b38);
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[8] = 0;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113070b40);
  *puVar4 = 0;
  puVar4[1] = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113070b48,0);
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113070b50,0);
  lVar1 = unaff_x20 + _DAT_113070b58;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_113070b60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113070b68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113070b70) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113070b78) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113070b80) = param_5;
  _objc_msgSendSuper2(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043609dc; end: 104360b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043609dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined **ppuVar8;
  undefined1 auVar9 [16];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  lVar1 = _DAT_113070b08;
  lVar7 = *(long *)(unaff_x20 + _DAT_113070b08);
  if (lVar7 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_113070b60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar3;
        _swift_unknownObjectRetain(lVar3);
        FUN_1043603f8();
        uVar4 = 0;
        FUN_104363ce8(0);
        _objc_allocWithZone();
        lVar5 = lVar3;
        FUN_1043625d4(lVar3,lVar2,uVar4);
        *(undefined ***)(lVar5 + _DAT_113070ce8 + 8) = &PTR_DAT_11075e8a8;
        _swift_unknownObjectWeakAssign();
        uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
        *(long *)(unaff_x20 + lVar1) = lVar5;
        _objc_retain(lVar5);
        _objc_release(uVar4);
        FUN_104360b94();
        _swift_unknownObjectRelease(lVar3);
        ppuVar8 = &PTR_DAT_11075e960;
        goto LAB_104360b50;
      }
    }
    func_0x0001007d6c6c(3,0xd000000000000043,0x800000010f1f79c0,lVar5,&PTR_DAT_11075e888);
    lVar5 = 0;
    FUN_104360b74();
    _swift_allocObject();
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_allocWithZone();
    func_0x00010bfee200();
    *(undefined **)(lVar5 + 0x10) = puVar6;
    ppuVar8 = &PTR_DAT_11075e8c8;
  }
  else {
    ppuVar8 = &PTR_DAT_11075e960;
    lVar5 = lVar7;
  }
LAB_104360b50:
  _objc_retain(lVar7);
  auVar9._8_8_ = (ulong)ppuVar8 | 0x8000000000000000;
  auVar9._0_8_ = lVar5;
  return auVar9;
}



/* Entry: 104360b74; end: 104360b93;  */

void FUN_104360b74(void)

{
  _objc_opt_self(&PTR_PTR_113070bf0);
  return;
}



/* Entry: 104360b94; end: 104360c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104360b94(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070b20);
  plVar6 = (long *)*puVar1;
  if (plVar6 != (long *)0x0) {
    lVar7 = puVar1[1];
    plVar2 = plVar6;
    _swift_getObjectType(plVar6);
    pcVar8 = *(code **)(lVar7 + 8);
    _swift_unknownObjectRetain(plVar6);
    (*pcVar8)(plVar2,lVar7);
    _swift_unknownObjectRelease();
    param_1 = plVar6;
  }
  FUN_10436257c();
  plVar6 = param_1;
  func_0x0001000c2068();
  func_0x000104884898();
  _swift_release(plVar6);
  puVar3 = &UNK_11075e900;
  _swift_allocObject(&UNK_11075e900,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  pcVar8 = FUN_1043625c0;
  puVar5 = puVar3;
  (**(code **)(*param_1 + 0x60))();
  _swift_release(param_1);
  _swift_release(puVar3);
  uVar4 = *puVar1;
  *puVar1 = pcVar8;
  puVar1[1] = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
  return;
}



/* Entry: 104360c98; end: 104360d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104360c98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  _swift_getObjectType(uStack_40);
  (**(code **)(lStack_38 + 0x10))();
  _swift_unknownObjectRelease(uStack_40);
  func_0x0001000d224c(&uStack_50);
  uVar2 = uStack_50;
  _swift_getObjectType(uStack_50);
  (**(code **)(lStack_48 + 0x10))();
  _swift_unknownObjectRelease(uStack_50);
  uVar3 = uVar2;
  func_0x0001006c733c(uVar2);
  _swift_release(uVar1);
  _swift_release(uVar2);
  uVar1 = 0x104360e68;
  func_0x0001000bfde0(0x104360e68,0,PTR___sSbN_11034dd40);
  _swift_release(uVar3);
  puVar4 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  _swift_release(uVar1);
  return puVar4;
}



/* Entry: 104360d98; end: 104360f8b;  */

bool FUN_104360d98(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined1 auStack_f8 [72];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_b0 = *param_1;
  lStack_a8 = param_1[1];
  bVar1 = lStack_a8 == 0;
  if (bVar1) {
    lStack_a8 = 0;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_70 = param_1[8];
    FUN_1043623a0(param_1,auStack_f8);
    FUN_104362534(&uStack_b0,0x112f5e618,&UNK_10dbb8d48);
  }
  else {
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_70 = param_1[8];
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    FUN_1043623a0(param_1,auStack_f8);
    FUN_104362534(&uStack_b0,0x113070c90,&UNK_10dcef030);
  }
  return !bVar1 && param_3 != 2;
}



/* Entry: 104360f8c; end: 104361387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104360f8c(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar1 = (long *)(unaff_x20 + _DAT_113070b18);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = plVar1[1];
    lVar3 = lVar5;
    _swift_getObjectType(lVar5);
    pcVar7 = *(code **)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar5);
    (*pcVar7)(lVar3,lVar6);
    _swift_unknownObjectRelease(lVar5);
    lVar5 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  _swift_unknownObjectRelease(lVar5);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113070b38);
  uStack_68 = puVar2[5];
  uStack_70 = puVar2[4];
  uStack_58 = puVar2[7];
  uStack_60 = puVar2[6];
  uStack_50 = puVar2[8];
  uStack_88 = puVar2[1];
  uStack_90 = *puVar2;
  uStack_78 = puVar2[3];
  uStack_80 = puVar2[2];
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[8] = 0;
  FUN_104362534(&uStack_90,0x112f5e618,&UNK_10dbb8d48);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113070b40);
  uVar4 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  _swift_bridgeObjectRelease(uVar4);
  _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070b48,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070b50,0);
  plVar1 = (long *)(unaff_x20 + _DAT_113070b28);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar6 = plVar1[1];
    lVar3 = lVar5;
    _swift_getObjectType(lVar5);
    pcVar7 = *(code **)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar5);
    (*pcVar7)(lVar3,lVar6);
    _swift_unknownObjectRelease(lVar5);
    lVar5 = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  _swift_unknownObjectRelease(lVar5);
  return;
}



/* Entry: 104361388; end: 104361417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104361388(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = _DAT_113070b10;
  lVar3 = *(long *)(unaff_x20 + _DAT_113070b10);
  uVar4 = 0;
  if (lVar3 != 0) {
    _objc_retain();
    FUN_104363e64();
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _objc_release(uVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113070b40);
  uVar4 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_bridgeObjectRelease(uVar4);
  _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070b48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(unaff_x20 + _DAT_113070b50,0);
  return;
}



/* Entry: 104361418; end: 1043614a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104361418(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_40 = param_1[4];
  uStack_38 = (undefined1)param_1[5];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_113070af8);
    _swift_retain(uVar1);
    _objc_release(param_2);
    FUN_10436540c(&uStack_60);
    _swift_release(uVar1);
  }
  return;
}



/* Entry: 1043614a4; end: 10436156b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043614a4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_113070b08);
    if (lVar2 != 0) {
      _objc_retain();
      _objc_release(param_2);
      puVar1 = PTR_PTR_1126adc78;
      _objc_allocWithZone(PTR_PTR_1126adc78);
      func_0x00010c061c80();
      lVar2 = *(long *)(lVar2 + _DAT_113070ca8);
      if (lVar2 != 0) {
        _objc_retain();
        func_0x00010c2226c0();
        _objc_release(lVar2);
      }
      _objc_release(puVar1);
    }
    _objc_release();
  }
  return;
}



/* Entry: 10436156c; end: 1043617e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436156c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 auStack_1c8 [9];
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  _swift_beginAccess(param_2 + 0x10,auStack_a8,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    puVar1 = (ulong *)(param_2 + _DAT_113070b38);
    uStack_e8 = puVar1[1];
    uStack_f0 = *puVar1;
    uStack_c8 = puVar1[5];
    uStack_d0 = puVar1[4];
    uStack_b8 = puVar1[7];
    uStack_c0 = puVar1[6];
    uStack_b0 = puVar1[8];
    uStack_d8 = puVar1[3];
    uStack_e0 = puVar1[2];
    puVar1[8] = param_1[8];
    uVar8 = param_1[4];
    uVar7 = param_1[7];
    uVar6 = param_1[6];
    puVar1[5] = param_1[5];
    puVar1[4] = uVar8;
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
    uVar6 = *param_1;
    uVar8 = param_1[3];
    uVar7 = param_1[2];
    puVar1[1] = param_1[1];
    *puVar1 = uVar6;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    FUN_1043623a0(&uStack_90,&uStack_180);
    FUN_104362534(&uStack_f0,0x112f5e618,&UNK_10dbb8d48);
    FUN_1043617e4();
    uVar6 = uStack_88;
    if (uStack_88 == 0) {
      uStack_180 = uStack_90;
      uStack_178 = 0;
      uStack_168 = uStack_78;
      uStack_170 = uStack_80;
      uStack_158 = uStack_68;
      uStack_160 = uStack_70;
      uStack_148 = uStack_58;
      uStack_150 = uStack_60;
      uStack_140 = uStack_50;
      FUN_1043623a0(&uStack_90,auStack_1c8);
      uVar4 = 0x112f5e618;
      puVar3 = &UNK_10dbb8d48;
    }
    else {
      uStack_180 = uStack_90;
      uStack_178 = uStack_88;
      uStack_168 = uStack_78;
      uStack_170 = uStack_80;
      uStack_158 = uStack_68;
      uStack_160 = uStack_70;
      uStack_148 = uStack_58;
      uStack_150 = uStack_60;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_140 = uStack_50;
      uStack_f8 = 0;
      FUN_1043623a0(&uStack_90,auStack_1c8);
      uVar4 = 0x113070c90;
      puVar3 = &UNK_10dcef030;
    }
    FUN_104362534(&uStack_180,uVar4,puVar3);
    *(bool *)(param_2 + _DAT_113070b30) = uVar6 != 0;
    lVar2 = *(long *)(param_2 + _DAT_113070b10);
    if (lVar2 != 0) {
      _objc_retain();
      if (uVar6 != 0) {
        FUN_104364a98();
      }
      func_0x00010c1a7f60(*(undefined8 *)(lVar2 + _DAT_113070d60));
      _objc_release(lVar2);
    }
    lVar2 = _DAT_113070af8;
    if (uVar6 == 0) {
      lVar5 = *(long *)(param_2 + _DAT_113070af8);
      *(undefined4 *)(lVar5 + 0x28) = 0;
      uStack_180 = uStack_180 & 0xffffffff00000000;
      _swift_retain(lVar5);
      func_0x0001007d6d78(&uStack_180);
      _swift_release(lVar5);
      lVar2 = *(long *)(param_2 + lVar2);
      _swift_beginAccess(lVar2 + 0x20,&uStack_180,1,0);
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined **)(lVar2 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain(lVar2);
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      auStack_1c8[0] = uVar4;
      _swift_bridgeObjectRetain(uVar4);
      func_0x0001007d6d78(auStack_1c8);
      _swift_release(lVar2);
      _swift_bridgeObjectRelease(uVar4);
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 1043617e4; end: 104361f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043617e4(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_228 [72];
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_113070b08);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_113070b10);
  if (lVar9 == 0) {
    return;
  }
  lVar4 = unaff_x20 + _DAT_113070b48;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = unaff_x20 + _DAT_113070b50;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_113070b38);
  uVar11 = puVar1[1];
  uVar10 = *puVar1;
  uStack_128 = puVar1[3];
  uStack_130 = puVar1[2];
  uStack_118 = puVar1[5];
  uStack_120 = puVar1[4];
  uStack_108 = puVar1[7];
  uStack_110 = puVar1[6];
  uStack_100 = puVar1[8];
  uStack_140 = uVar10;
  uStack_138 = uVar11;
  uStack_f0 = uStack_130;
  uStack_e8 = uStack_128;
  uStack_e0 = uStack_120;
  uStack_d8 = uStack_118;
  uStack_d0 = uStack_110;
  uStack_c8 = uStack_108;
  uStack_c0 = uStack_100;
  if (uVar11 != 0) {
    uStack_a0 = puVar1[3];
    uStack_a8 = puVar1[2];
    uStack_90 = puVar1[5];
    uStack_98 = puVar1[4];
    uStack_80 = puVar1[7];
    uStack_88 = puVar1[6];
    uStack_78 = puVar1[8];
    uVar7 = uVar10 & 0xffffffffffff;
    if ((uVar11 & 0x2000000000000000) != 0) {
      uVar7 = uVar11 >> 0x38 & 0xf;
    }
    uStack_b8 = uVar10;
    uStack_b0 = uVar11;
    if (uVar7 != 0) {
      puVar1 = (ulong *)(unaff_x20 + _DAT_113070b40);
      uVar7 = puVar1[1];
      if ((uVar7 != 0) &&
         (((uVar6 = *puVar1, uVar6 == uVar10 && (uVar7 == uVar11)) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar6,uVar7,uVar10,uVar11,0), (uVar6 & 1) != 0)))) {
        _objc_retain(lVar8);
        FUN_1043623a0(&uStack_140,&uStack_190);
        _objc_release(lVar8);
        _objc_release(lVar5);
        _objc_release(lVar4);
        FUN_104362534(&uStack_140,0x112f5e618,&UNK_10dbb8d48);
        return;
      }
      _objc_retain();
      FUN_1043623a0(&uStack_140,&uStack_190);
      _objc_retain(lVar9);
      FUN_104363178();
      FUN_104363e64();
      puVar3 = (ulong *)(lVar8 + _DAT_113070ce0);
      uStack_1d8 = puVar3[1];
      uStack_1e0 = *puVar3;
      uStack_1b8 = puVar3[5];
      uStack_1c0 = puVar3[4];
      uStack_1a8 = puVar3[7];
      uStack_1b0 = puVar3[6];
      uStack_1a0 = puVar3[8];
      uStack_1c8 = puVar3[3];
      uStack_1d0 = puVar3[2];
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[3] = uStack_e8;
      puVar3[2] = uStack_f0;
      puVar3[5] = uStack_d8;
      puVar3[4] = uStack_e0;
      puVar3[7] = uStack_c8;
      puVar3[6] = uStack_d0;
      puVar3[8] = uStack_c0;
      FUN_104362534(&uStack_1e0,0x112f5e618,&UNK_10dbb8d48);
      uStack_168 = uStack_118;
      uStack_170 = uStack_120;
      uStack_158 = uStack_108;
      uStack_160 = uStack_110;
      uStack_150 = uStack_100;
      uStack_188 = uStack_138;
      uStack_190 = uStack_140;
      uStack_178 = uStack_128;
      uStack_180 = uStack_130;
      func_0x0001043623f0(&uStack_190,auStack_228);
      FUN_1043628d4();
      FUN_104364024(lVar4,lVar5,&uStack_b8);
      _objc_release(lVar9);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar8);
      _swift_bridgeObjectRetain(uVar11);
      FUN_104362534(&uStack_140,0x112f5e618,&UNK_10dbb8d48);
      uVar7 = puVar1[1];
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      goto LAB_104361b08;
    }
  }
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113070b40);
  if (puVar2[1] == 0) {
    _objc_release();
    _objc_release(lVar4);
    return;
  }
  _objc_retain(lVar8);
  _objc_retain(lVar9);
  FUN_104363178();
  FUN_104363e64();
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  uVar7 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
LAB_104361b08:
  _swift_bridgeObjectRelease(uVar7);
  return;
}



/* Entry: 104361f38; end: 104361f63; -[_TtC15GamesUIServices25FullScreenChatInputPlugin init] */

void FUN_104361f38(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.FullScreenChatInputPlugin",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104361f64);
  (*pcVar1)();
}



/* Entry: 104361f64; end: 104361f67;  */

void FUN_104361f64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104361f68; end: 1043620b3; -[_TtC15GamesUIServices25FullScreenChatInputPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104361f68(long param_1)

{
  undefined8 *puVar1;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070b60));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070b68));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070b70));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070b78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070b80));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113070af8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070b00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070b08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113070b10));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070b18));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070b20));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113070b28));
  puVar1 = (undefined8 *)(param_1 + _DAT_113070b38);
  FUN_10436242c(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113070b40 + 8));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113070b48);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113070b50);
  param_1 = param_1 + _DAT_113070b58;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1043620b4; end: 104362113;  */

undefined8 FUN_1043620b4(void)

{
  return 2;
}



/* Entry: 104362114; end: 104362267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104362114(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070b48,lVar3);
      _swift_unknownObjectWeakAssign(unaff_x20 + _DAT_113070b50,param_1);
      func_0x000104361b2c();
      func_0x0001043617e4();
      lVar4 = *(long *)(unaff_x20 + _DAT_113070b10);
      if (lVar4 != 0) {
        cVar1 = *(char *)(unaff_x20 + _DAT_113070b30);
        _objc_retain();
        if (cVar1 == '\x01') {
          FUN_104364a98();
        }
        func_0x00010c1a7f60(*(undefined8 *)(lVar4 + _DAT_113070d60));
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104362268; end: 10436228b;  */

void FUN_104362268(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10436228c; end: 1043622a3;  */

void FUN_10436228c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1043622a4; end: 1043622eb; -[_TtC15GamesUIServicesP33_8C2A6A7E0D317EF557872F15809D7C9C17ChatTapController onTapWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043622a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_113070c50);
  _objc_retain();
  (*pcVar1)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1043622ec; end: 10436234b; -[_TtC15GamesUIServicesP33_8C2A6A7E0D317EF557872F15809D7C9C17ChatTapController init] */

void FUN_1043622ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("GamesUIServices.ChatTapController",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104362318);
  (*pcVar1)();
}



/* Entry: 10436234c; end: 10436235f; -[_TtC15GamesUIServicesP33_8C2A6A7E0D317EF557872F15809D7C9C17ChatTapController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436234c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113070c50 + 8));
  return;
}



/* Entry: 104362360; end: 10436239f;  */

void FUN_104362360(void)

{
  _objc_opt_self(&PTR_PTR_1129a0650);
  return;
}



/* Entry: 1043623a0; end: 10436242b;  */

undefined8 FUN_1043623a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f5e618;
  func_0x0001000285a8(0x112f5e618,&UNK_10dbb8d48);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10436242c; end: 10436247b;  */

void FUN_10436242c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_9);
    _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
    return;
  }
  return;
}



/* Entry: 10436247c; end: 1043624eb;  */

void FUN_10436247c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000113070c80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f5e618;
  func_0x00010002969c(0x112f5e618,&UNK_10dbb8d48);
  uVar2 = uVar1;
  FUN_1043624ec();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  _swift_getWitnessTable(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000113070c80 = puVar3;
  return;
}



/* Entry: 1043624ec; end: 10436252b;  */

void FUN_1043624ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113070c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcef220;
  _swift_getWitnessTable(&UNK_10dcef220,&UNK_11075ee28);
  puRam0000000113070c88 = puVar1;
  return;
}



/* Entry: 10436252c; end: 104362533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10436252c(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 auStack_1c8 [9];
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    puVar1 = (ulong *)(lVar2 + _DAT_113070b38);
    uStack_e8 = puVar1[1];
    uStack_f0 = *puVar1;
    uStack_c8 = puVar1[5];
    uStack_d0 = puVar1[4];
    uStack_b8 = puVar1[7];
    uStack_c0 = puVar1[6];
    uStack_b0 = puVar1[8];
    uStack_d8 = puVar1[3];
    uStack_e0 = puVar1[2];
    puVar1[8] = param_1[8];
    uVar9 = param_1[4];
    uVar8 = param_1[7];
    uVar7 = param_1[6];
    puVar1[5] = param_1[5];
    puVar1[4] = uVar9;
    puVar1[7] = uVar8;
    puVar1[6] = uVar7;
    uVar7 = *param_1;
    uVar9 = param_1[3];
    uVar8 = param_1[2];
    puVar1[1] = param_1[1];
    *puVar1 = uVar7;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    FUN_1043623a0(&uStack_90,&uStack_180);
    FUN_104362534(&uStack_f0,0x112f5e618,&UNK_10dbb8d48);
    FUN_1043617e4();
    uVar7 = uStack_88;
    if (uStack_88 == 0) {
      uStack_180 = uStack_90;
      uStack_178 = 0;
      uStack_168 = uStack_78;
      uStack_170 = uStack_80;
      uStack_158 = uStack_68;
      uStack_160 = uStack_70;
      uStack_148 = uStack_58;
      uStack_150 = uStack_60;
      uStack_140 = uStack_50;
      FUN_1043623a0(&uStack_90,auStack_1c8);
      uVar5 = 0x112f5e618;
      puVar4 = &UNK_10dbb8d48;
    }
    else {
      uStack_180 = uStack_90;
      uStack_178 = uStack_88;
      uStack_168 = uStack_78;
      uStack_170 = uStack_80;
      uStack_158 = uStack_68;
      uStack_160 = uStack_70;
      uStack_148 = uStack_58;
      uStack_150 = uStack_60;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_140 = uStack_50;
      uStack_f8 = 0;
      FUN_1043623a0(&uStack_90,auStack_1c8);
      uVar5 = 0x113070c90;
      puVar4 = &UNK_10dcef030;
    }
    FUN_104362534(&uStack_180,uVar5,puVar4);
    *(bool *)(lVar2 + _DAT_113070b30) = uVar7 != 0;
    lVar3 = *(long *)(lVar2 + _DAT_113070b10);
    if (lVar3 != 0) {
      _objc_retain();
      if (uVar7 != 0) {
        FUN_104364a98();
      }
      func_0x00010c1a7f60(*(undefined8 *)(lVar3 + _DAT_113070d60));
      _objc_release(lVar3);
    }
    lVar3 = _DAT_113070af8;
    if (uVar7 == 0) {
      lVar6 = *(long *)(lVar2 + _DAT_113070af8);
      *(undefined4 *)(lVar6 + 0x28) = 0;
      uStack_180 = uStack_180 & 0xffffffff00000000;
      _swift_retain(lVar6);
      func_0x0001007d6d78(&uStack_180);
      _swift_release(lVar6);
      lVar3 = *(long *)(lVar2 + lVar3);
      _swift_beginAccess(lVar3 + 0x20,&uStack_180,1,0);
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined **)(lVar3 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_retain(lVar3);
      _swift_bridgeObjectRelease(uVar5);
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      auStack_1c8[0] = uVar5;
      _swift_bridgeObjectRetain(uVar5);
      func_0x0001007d6d78(auStack_1c8);
      _swift_release(lVar3);
      _swift_bridgeObjectRelease(uVar5);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 104362534; end: 104362573;  */

undefined8 FUN_104362534(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 104362574; end: 10436257b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104362574(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_40 = param_1[4];
  uStack_38 = (undefined1)param_1[5];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x31);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x29) >> 0x38);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_113070af8);
    _swift_retain(uVar2);
    _objc_release(lVar1);
    FUN_10436540c(&uStack_60);
    _swift_release(uVar2);
  }
  return;
}



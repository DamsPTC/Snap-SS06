/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e6c6e0; end: 103e6c7cf; -[SCFriendingNotificationBadgeInfo initWithSnapchatter:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103e6c6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar5,param_4);
  *(undefined8 *)(param_1 + _DAT_113021a60) = param_3;
  (**(code **)(lVar6 + 0x10))(param_1 + _DAT_113812208,lVar5,lVar3);
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  plVar4 = &lStack_60;
  _objc_msgSendSuper2(plVar4,puVar1);
  (**(code **)(lVar6 + 8))(lVar5,lVar3);
  return plVar4;
}



/* Entry: 103e6c7d0; end: 103e6c88b; -[SCFriendingNotificationBadgeInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c7d0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = 0;
  FUN_103e6b110();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = _DAT_113812208;
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar5 = *(undefined8 *)(param_1 + _DAT_113021a60);
  *puVar4 = uVar5;
  iVar1 = *(int *)(lVar3 + 0x14);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))
            ((undefined1 *)((long)puVar4 + (long)iVar1),param_1 + lVar2,lVar3);
  _objc_retain(uVar5);
  FUN_103e6d324(puVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6c88c; end: 103e6c8d3; -[SCFriendingNotificationBadgeInfo init] */

void FUN_103e6c88c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendingBadgeServices/FriendingBadgeInfoWrapper.swift",0x36,2,0x15f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6c8d4);
  (*pcVar1)();
}



/* Entry: 103e6c8d4; end: 103e6c8d7;  */

void FUN_103e6c8d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e6c8d8; end: 103e6c90b;  */

void FUN_103e6c8d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e6c90c; end: 103e6c957; -[SCFriendingNotificationBadgeInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6c90c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113021a60));
  lVar1 = _DAT_113812208;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000103e6c954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 103e6c958; end: 103e6c9eb;  */

void FUN_103e6c958(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103e6d3c8();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x113021b48;
  plVar5 = (long *)&UNK_10dca1eb8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103e6c9ec; end: 103e6cb0f;  */

undefined * FUN_103e6c9ec(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e6cb10);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_103e6c958();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103e6d3c8(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103e6cb10; end: 103e6cc8b;  */

undefined * FUN_103e6cb10(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103e6cc8c);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x113021b40;
    func_0x0001000285a8(0x113021b40,&UNK_10dca1eb0);
    lVar5 = 0;
    FUN_103e6b110();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e6cc84);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e6cc88);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_103e6b110();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Entry: 103e6cc8c; end: 103e6cd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6cc8c(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_a0 [16];
  
  uVar5 = param_1;
  func_0x000103e6d380();
  uVar6 = uVar5;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar4 = auStack_a0 + 0xc;
  if (uVar1 != 6) {
    puVar4 = auStack_a0 + 0xe;
  }
  puVar3 = auStack_a0 + 8;
  if (uVar1 != 4) {
    puVar3 = auStack_a0 + 10;
  }
  if (uVar1 < 6) {
    puVar4 = puVar3;
  }
  puVar3 = auStack_a0 + 4;
  if (uVar1 != 2) {
    puVar3 = auStack_a0 + 6;
  }
  puVar2 = auStack_a0;
  if ((param_1 & 0xff) != 0) {
    puVar2 = auStack_a0 + 2;
  }
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    puVar3 = puVar2;
  }
  if (uVar1 < 4) {
    puVar4 = puVar3;
  }
  *(char *)(uVar6 + _DAT_113021a58) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6cd38; end: 103e6d2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6cd38(long param_1,char param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long alStack_c0 [2];
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puVar5 = (undefined8 *)0x0;
  FUN_103e6b110();
  lVar11 = puVar5[-1];
  puStack_b0 = puVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = (undefined8 *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_2 == '\0') {
    func_0x000103e6d3a0();
    puVar10 = puVar5;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar10 + _DAT_113021a68) = 1;
    *(long *)((long)puVar10 + _DAT_113021a70) = param_1;
    *(undefined8 *)((long)puVar10 + _DAT_113021a78) = 0;
    lVar11 = -0x88;
    puStack_98 = puVar10;
    puStack_90 = puVar5;
  }
  else {
    if (param_2 == '\x01') {
      lVar12 = *(long *)(param_1 + 0x10);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar12 != 0) {
        puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000103e6c9b4(0,lVar12,0);
        lVar13 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
        lVar11 = *(long *)(lVar11 + 0x48);
        alStack_c0[1] = param_1;
        do {
          puVar4 = puStack_68;
          func_0x000103e6d80c(lVar13,puVar10);
          lVar6 = 0;
          FUN_103e6d3c8();
          lVar7 = lVar6;
          _objc_allocWithZone();
          uVar14 = *puVar10;
          *(undefined8 *)(lVar7 + _DAT_113021a60) = uVar14;
          lVar3 = _DAT_113812208;
          iVar2 = *(int *)((long)puStack_b0 + 0x14);
          lVar8 = 0;
          __s10Foundation4DateVMa();
          (**(code **)(*(long *)(lVar8 + -8) + 0x10))
                    (lVar7 + lVar3,(long)puVar10 + (long)iVar2,lVar8);
          puVar15 = PTR_s_init_1125d9248;
          lStack_78 = lVar7;
          lStack_70 = lVar6;
          _objc_retain(uVar14);
          plVar9 = &lStack_78;
          _objc_msgSendSuper2(plVar9,puVar15);
          puVar5 = puVar10;
          FUN_103e6d324();
          uVar1 = *(ulong *)(puVar4 + 0x10);
          puStack_68 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
            puVar5 = (undefined8 *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
            func_0x000103e6c9b4(puVar5,uVar1 + 1,1);
          }
          *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
          *(long **)(puStack_68 + uVar1 * 8 + 0x20) = plVar9;
          lVar13 = lVar13 + lVar11;
          lVar12 = lVar12 + -1;
          param_1 = alStack_c0[1];
          puVar15 = puStack_68;
        } while (lVar12 != 0);
      }
      func_0x000103e6d3a0();
      puVar10 = puVar5;
      _objc_allocWithZone();
      *(undefined1 *)((long)puVar10 + _DAT_113021a68) = 2;
      *(undefined8 *)((long)puVar10 + _DAT_113021a70) = 0;
      *(undefined **)((long)puVar10 + _DAT_113021a78) = puVar15;
      puStack_88 = puVar10;
      puStack_80 = puVar5;
      _objc_msgSendSuper2(&puStack_88,PTR_s_init_1125d9248);
      func_0x000103e6b1f0(param_1,1);
      return;
    }
    func_0x000103e6d3a0();
    puVar10 = puVar5;
    _objc_allocWithZone();
    *(undefined1 *)((long)puVar10 + _DAT_113021a68) = 0;
    *(undefined8 *)((long)puVar10 + _DAT_113021a70) = 0;
    *(undefined8 *)((long)puVar10 + _DAT_113021a78) = 0;
    lVar11 = -0x98;
    puStack_a8 = puVar10;
    puStack_a0 = puVar5;
  }
  _objc_msgSendSuper2(&stack0xfffffffffffffff0 + lVar11,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6d2b8; end: 103e6d323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6d2b8(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113021a50);
  uVar1 = *(undefined1 *)(*(long *)(param_1 + _DAT_113021a48) + _DAT_113021a58);
  _objc_retain(uVar2);
  func_0x000103e6cfd8();
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 103e6d324; end: 103e6d35f;  */

undefined8 FUN_103e6d324(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103e6b110();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103e6d360; end: 103e6d3bf;  */

void FUN_103e6d360(void)

{
  _objc_opt_self(&PTR_PTR_1129597a8);
  return;
}



/* Entry: 103e6d3c0; end: 103e6d3c7;  */

void FUN_103e6d3c0(void)

{
  if (lRam0000000113021b20 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7ce004);
  return;
}



/* Entry: 103e6d3c8; end: 103e6d3ff;  */

void FUN_103e6d3c8(undefined8 param_1)

{
  if (lRam0000000113021b20 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ce004);
  return;
}



/* Entry: 103e6d400; end: 103e6d47b;  */

void FUN_103e6d400(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103e6d47c; end: 103e6d727;  */

int FUN_103e6d47c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e6d4f8;
        goto LAB_103e6d4dc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e6d4dc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103e6d4f8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e6d728; end: 103e6d767;  */

void FUN_103e6d728(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1d70;
  _swift_getWitnessTable(&UNK_10dca1d70,&UNK_110719aa0);
  puRam0000000113021b30 = puVar1;
  return;
}



/* Entry: 103e6d768; end: 103e6d76b;  */

void FUN_103e6d768(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1e10;
  _swift_getWitnessTable(&UNK_10dca1e10,&UNK_110719a10);
  puRam0000000113021b38 = puVar1;
  return;
}



/* Entry: 103e6d76c; end: 103e6d7ab;  */

void FUN_103e6d76c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1e10;
  _swift_getWitnessTable(&UNK_10dca1e10,&UNK_110719a10);
  puRam0000000113021b38 = puVar1;
  return;
}



/* Entry: 103e6d7ac; end: 103e6d7c7;  */

ulong FUN_103e6d7ac(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 103e6d7c8; end: 103e6d84f;  */

undefined8 FUN_103e6d7c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103e6b110();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103e6d850; end: 103e6d89b;  */

void FUN_103e6d850(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103e6d89c; end: 103e6d89f; -[SCFriendingBadgeInfo copyWithZone:] */

void FUN_103e6d89c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e6d8a0; end: 103e6d8ab; -[SCFriendingBadgeInfoType copyWithZone:] */

void FUN_103e6d8a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e6d8ac; end: 103e6d8af; -[SCFriendingBadgeInfoSource copyWithZone:] */

void FUN_103e6d8ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e6d8b0; end: 103e6d8bf; -[SCFriendingNotificationBadgeInfo copyWithZone:] */

void FUN_103e6d8b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e6d8c0; end: 103e6d8cf; -[_TtC27FriendingExperimentServices18InterstitialConfig enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6d8c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021b50);
}



/* Entry: 103e6d8d0; end: 103e6d8df; -[_TtC27FriendingExperimentServices18InterstitialConfig friendStoryPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6d8d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021b58);
}



/* Entry: 103e6d8e0; end: 103e6d8ef; -[_TtC27FriendingExperimentServices18InterstitialConfig dailyCap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6d8e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021b60);
}



/* Entry: 103e6d8f0; end: 103e6d8ff; -[_TtC27FriendingExperimentServices18InterstitialConfig sessionCap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6d8f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021b68);
}



/* Entry: 103e6d900; end: 103e6d90f; -[_TtC27FriendingExperimentServices18InterstitialConfig capWindowHours] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6d900(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021b70);
}



/* Entry: 103e6d910; end: 103e6d91f; -[_TtC27FriendingExperimentServices18InterstitialConfig addedMeMutualThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6d910(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021b78);
}



/* Entry: 103e6d920; end: 103e6d92f; -[_TtC27FriendingExperimentServices18InterstitialConfig variant] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6d920(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021b80);
}



/* Entry: 103e6d930; end: 103e6d93f; -[_TtC27FriendingExperimentServices18InterstitialConfig refillOnAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6d930(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021b88);
}



/* Entry: 103e6d940; end: 103e6d94f; -[_TtC27FriendingExperimentServices18InterstitialConfig enableProfileNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6d940(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021b90);
}



/* Entry: 103e6d950; end: 103e6da3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6d950(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113021b50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021b58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113021b60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113021b68) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113021b70) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113021b78) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113021b80) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113021b88) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113021b90) = param_9;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6da3c; end: 103e6dafb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6da3c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113021b50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021b58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113021b60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113021b68) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113021b70) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113021b78) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113021b80) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113021b88) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113021b90) = param_9;
  func_0x000103e6dadc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6dafc; end: 103e6db53; -[_TtC27FriendingExperimentServices18InterstitialConfig initWithEnabled:friendStoryPosition:dailyCap:sessionCap:capWindowHours:addedMeMutualThreshold:variant:refillOnAction:enableProfileNavigation:] */

void FUN_103e6dafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  FUN_103e6da3c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 103e6db54; end: 103e6dbaf; -[_TtC27FriendingExperimentServices18InterstitialConfig init] */

void FUN_103e6db54(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingExperimentServices.InterstitialConfig",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6db80);
  (*pcVar1)();
}



/* Entry: 103e6dbb0; end: 103e6dc33;  */

void FUN_103e6dbb0(void)

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



/* Entry: 103e6dc34; end: 103e6dc43; -[_TtC27FriendingExperimentServices19MutualFriendsConfig enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6dc34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021bc0);
}



/* Entry: 103e6dc44; end: 103e6dc53; -[_TtC27FriendingExperimentServices19MutualFriendsConfig mutualFriendsSyncTtlMinutes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6dc44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021bc8);
}



/* Entry: 103e6dc54; end: 103e6dc63; -[_TtC27FriendingExperimentServices19MutualFriendsConfig cellCountOnPrivateProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6dc54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021bd0);
}



/* Entry: 103e6dc64; end: 103e6dc73; -[_TtC27FriendingExperimentServices19MutualFriendsConfig cellCountOnPublicProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e6dc64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113021bd8);
}



/* Entry: 103e6dc74; end: 103e6dc83; -[_TtC27FriendingExperimentServices19MutualFriendsConfig shouldExpandSectionForLowContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6dc74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021be0);
}



/* Entry: 103e6dc84; end: 103e6dc93; -[_TtC27FriendingExperimentServices19MutualFriendsConfig fstAllowTapOutsideToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6dc84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021bf8);
}



/* Entry: 103e6dc94; end: 103e6dca3; -[_TtC27FriendingExperimentServices19MutualFriendsConfig fstAllowDragDownToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6dc94(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021c00);
}



/* Entry: 103e6dca4; end: 103e6dcb3; -[_TtC27FriendingExperimentServices19MutualFriendsConfig upsellAllowTapOutsideToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6dca4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021c08);
}



/* Entry: 103e6dcb4; end: 103e6dcc3; -[_TtC27FriendingExperimentServices19MutualFriendsConfig upsellAllowDragDownToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e6dcb4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113021c10);
}



/* Entry: 103e6dcc4; end: 103e6ddd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6dcc4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113021bc0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021bc8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113021bd0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113021bd8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113021be0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113021be8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113021bf0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113021bf8) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113021c00) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113021c08) = param_9._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113021c10) = param_9._2_1_;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6ddd8; end: 103e6deb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ddd8(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_113021bc0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021bc8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113021bd0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113021bd8) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_113021be0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_113021be8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113021bf0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_113021bf8) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_113021c00) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_113021c08) = param_9._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_113021c10) = param_9._2_1_;
  func_0x000103e6de98();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6deb8; end: 103e6df13; -[_TtC27FriendingExperimentServices19MutualFriendsConfig init] */

void FUN_103e6deb8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingExperimentServices.MutualFriendsConfig",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6dee4);
  (*pcVar1)();
}



/* Entry: 103e6df14; end: 103e6df17;  */

void FUN_103e6df14(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1f00;
  _swift_getWitnessTable(&UNK_10dca1f00,&UNK_110719c08);
  puRam0000000113021c18 = puVar1;
  return;
}



/* Entry: 103e6df18; end: 103e6df57;  */

void FUN_103e6df18(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1f00;
  _swift_getWitnessTable(&UNK_10dca1f00,&UNK_110719c08);
  puRam0000000113021c18 = puVar1;
  return;
}



/* Entry: 103e6df58; end: 103e6df5b;  */

void FUN_103e6df58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1f68;
  _swift_getWitnessTable(&UNK_10dca1f68,&UNK_110719c98);
  puRam0000000113021c20 = puVar1;
  return;
}



/* Entry: 103e6df5c; end: 103e6df9b;  */

void FUN_103e6df5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca1f68;
  _swift_getWitnessTable(&UNK_10dca1f68,&UNK_110719c98);
  puRam0000000113021c20 = puVar1;
  return;
}



/* Entry: 103e6df9c; end: 103e6e287;  */

int FUN_103e6df9c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e6e018;
        goto LAB_103e6dffc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e6dffc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103e6e018:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e6e288; end: 103e6e443;  */

void FUN_103e6e288(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x00010098a774(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103e6e444; end: 103e6e447;  */

void FUN_103e6e444(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca2058;
  _swift_getWitnessTable(&UNK_10dca2058,&UNK_110719d60);
  puRam0000000113021c50 = puVar1;
  return;
}



/* Entry: 103e6e448; end: 103e6e487;  */

void FUN_103e6e448(void)

{
  undefined *puVar1;
  
  if (puRam0000000113021c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca2058;
  _swift_getWitnessTable(&UNK_10dca2058,&UNK_110719d60);
  puRam0000000113021c50 = puVar1;
  return;
}



/* Entry: 103e6e488; end: 103e6e5eb;  */

int FUN_103e6e488(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x16) {
      iVar2 = 4;
    }
    if (param_2 + 0x16 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e6e504;
        goto LAB_103e6e4e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e6e4e8:
      return ((uint)*param_1 | uVar1 << 8) - 0x16;
    }
  }
LAB_103e6e504:
  iVar2 = *param_1 - 0x17;
  if (*param_1 < 0x17) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e6e5ec; end: 103e6e713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6e5ec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113021eb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113021ec0) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_113021ec8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113021ed0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6e714; end: 103e6e73f; -[SCInterstitialEligibilityPeek init] */

void FUN_103e6e714(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingExperimentServices.InterstitialEligibilityPeek",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6e740);
  (*pcVar1)();
}



/* Entry: 103e6e740; end: 103e6e743;  */

void FUN_103e6e740(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e6e744; end: 103e6e77f; -[SCInterstitialEligibilityPeek .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6e744(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113021eb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113021ed0 + 8));
  return;
}



/* Entry: 103e6e780; end: 103e6e857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6e780(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113021ed8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113021ee0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6e858; end: 103e6e8b7; -[SCRecentlyActiveNotificationEligibilityPeek init] */

void FUN_103e6e858(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingExperimentServices.RecentlyActiveNotificationEligibilityPeek",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6e884);
  (*pcVar1)();
}



/* Entry: 103e6e8b8; end: 103e6e8cb; -[SCRecentlyActiveNotificationEligibilityPeek .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6e8b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113021ee0 + 8));
  return;
}



/* Entry: 103e6e8cc; end: 103e6e90b;  */

void FUN_103e6e8cc(void)

{
  _objc_opt_self(&PTR_PTR_112959cf0);
  return;
}



/* Entry: 103e6e90c; end: 103e6e90f;  */

void FUN_103e6e90c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e6e910; end: 103e6e95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6e910(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113021f38) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e6e95c; end: 103e6e9b3; -[_TtC27FriendingExperimentServices27FriendingExperimentServices initWithFriendingExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6e95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113021f38) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103e6e9b4; end: 103e6ea13; -[_TtC27FriendingExperimentServices27FriendingExperimentServices init] */

void FUN_103e6e9b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendingExperimentServices.FriendingExperimentServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6e9e0);
  (*pcVar1)();
}



/* Entry: 103e6ea14; end: 103e6ea33; -[_TtC27FriendingExperimentServices27FriendingExperimentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ea14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113021f38));
  return;
}



/* Entry: 103e6ea34; end: 103e6ea9f;  */

undefined8 * FUN_103e6ea34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Entry: 103e6eaa0; end: 103e6eb37;  */

int FUN_103e6eaa0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103e6eb38; end: 103e6ec0b;  */

void FUN_103e6eb38(void)

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



/* Entry: 103e6ec0c; end: 103e6ec2b;  */

void FUN_103e6ec0c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103e6ec2c; end: 103e6ec4f; -[SCFriendingExperimentKey description] */

void FUN_103e6ec2c(void)

{
  _objc_retain();
  func_0x00010098a748();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ec50; end: 103e6ec97; -[SCFriendingExperimentKey init] */

void FUN_103e6ec50(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendingExperimentServices/FriendingExperimentKeyWrapper.swift",0x3f,2,0x92,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e6ec98);
  (*pcVar1)();
}



/* Entry: 103e6ec98; end: 103e6ec9b; -[SCFriendingExperimentKey copyWithZone:] */

void FUN_103e6ec98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e6ec9c; end: 103e6eca3; +[SCFriendingExperimentKey enableTurnOffFindFriendsSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ec9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6eca4; end: 103e6ecab; +[SCFriendingExperimentKey findFriendsDefaultToTurnOff] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6eca4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecac; end: 103e6ecb3; +[SCFriendingExperimentKey combineFindFriendsSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecb4; end: 103e6ecbb; +[SCFriendingExperimentKey observingPinnedSuggestedSnapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecb4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecbc; end: 103e6ecc3; +[SCFriendingExperimentKey privateProfileSeeAllCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecbc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecc4; end: 103e6eccb; +[SCFriendingExperimentKey publicProfileSeeAllCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6eccc; end: 103e6ecd3; +[SCFriendingExperimentKey regCondensedUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6eccc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecd4; end: 103e6ecdb; +[SCFriendingExperimentKey postRegAutoAddDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecd4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecdc; end: 103e6ece3; +[SCFriendingExperimentKey afpCellTapProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecdc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 8;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ece4; end: 103e6eceb; +[SCFriendingExperimentKey addFriendsSwipeBack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ece4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 9;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecec; end: 103e6ecf3; +[SCFriendingExperimentKey frndEnableFindFriendsComplianceDialogRegFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecf4; end: 103e6ecfb; +[SCFriendingExperimentKey frndFindFriendsUpsellDisablePassiveDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecf4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 0xb;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ecfc; end: 103e6ed03; +[SCFriendingExperimentKey mutualFriendsSupDefault] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ecfc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 0xc;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ed04; end: 103e6ed0b; +[SCFriendingExperimentKey interstitialMaxInbound] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ed04(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 0xd;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ed0c; end: 103e6ed13; +[SCFriendingExperimentKey interstitialAutoAdvanceSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ed0c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 0xe;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ed14; end: 103e6ed1b; +[SCFriendingExperimentKey reliablePinningImpressionThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ed14(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 0xf;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e6ed1c; end: 103e6ed23; +[SCFriendingExperimentKey frndNotifRecentlyActiveIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e6ed1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113021fe8) = 0x10;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



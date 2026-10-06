/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104387da0; end: 104387e4b;  */

void FUN_104387da0(void)

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



/* Entry: 104387e4c; end: 104387e8b;  */

void FUN_104387e4c(undefined1 *param_1,long *param_2)

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



/* Entry: 104387e8c; end: 104387ecf; -[SCMapStatusUpdate description] */

void FUN_104387e8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1043882d8();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104387ed0; end: 104387f17; -[SCMapStatusUpdate init] */

void FUN_104387ed0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapStatusUpdateWrapper.swift",0x32,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104387f18);
  (*pcVar1)();
}



/* Entry: 104387f18; end: 104387f1b; -[SCMapStatusUpdate copyWithZone:] */

void FUN_104387f18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104387f1c; end: 104387f73; +[SCMapStatusUpdate didLoadStatuses] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104387f1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113072b68) = 0;
  *(undefined8 *)(lVar1 + _DAT_113072b70) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104387f74; end: 104388043; +[SCMapStatusUpdate didLoadMyStatusWithStatuses:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104387f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  uVar1 = 0;
  FUN_104384ae4(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113072b68) = 1;
  *(undefined8 *)(lVar2 + _DAT_113072b70) = param_3;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104388044; end: 1043880ef; -[SCMapStatusUpdate matchDidLoadStatuses:didLoadMyStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388044(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_113072b68) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001043880e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  lVar3 = *(long *)(param_1 + _DAT_113072b70);
  if (lVar3 != 0) {
    uVar2 = 0;
    FUN_104384ae4(0);
    _objc_retain(param_1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
    (**(code **)(param_4 + 0x10))(param_4,lVar3);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043880f0);
  (*pcVar1)();
}



/* Entry: 1043880f0; end: 104388123;  */

void FUN_1043880f0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104388124; end: 104388133; -[SCMapStatusUpdate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113072b70));
  return;
}



/* Entry: 104388134; end: 1043882d7;  */

ulong FUN_104388134(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10438821c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104388220);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    (*param_3)(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
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
    uVar3 = 0;
    (*param_3)(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(param_4,param_5);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1043882d8);
  (*pcVar2)();
}



/* Entry: 1043882d8; end: 1043889e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1043882d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined1 auVar6 [8];
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  long alStack_110 [10];
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a7 [7];
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined *apuStack_90 [4];
  
  lVar8 = 0;
  FUN_10437f914();
  lStack_b8 = *(long *)(lVar8 + -8);
  lStack_b0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar8 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)alStack_110 + lVar8);
  apuStack_90[2] = (undefined *)0x0;
  if (*(char *)(param_1 + _DAT_113072b68) == '\x01') {
    uVar19 = *(ulong *)(param_1 + _DAT_113072b70);
    if (uVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1043889e8);
      (*pcVar7)();
    }
    uVar13 = uVar19 & 0xffffffffffffff8;
    if (uVar19 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar9 = uVar19;
      if (-1 < (long)uVar19) {
        uVar9 = uVar13;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    apuStack_90[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar9 != 0) {
      alStack_110[2] = uVar13;
      alStack_110[3] = uVar9;
      func_0x000104383094(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if (alStack_110[3] < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1043889e0);
        (*pcVar7)();
      }
      uVar13 = 0;
      alStack_110[6] = uVar19 & 0xc000000000000001;
      alStack_110[1] = uVar19 + 0x20;
      uVar9 = alStack_110[3];
      alStack_110[5] = uVar19;
      do {
        puStack_c0 = apuStack_90[2];
        alStack_110[9] = uVar13;
        if (alStack_110[6] == 0) {
          if (*(long *)(alStack_110[2] + 0x10) <= (long)uVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1043889cc);
            (*pcVar7)();
          }
          uVar13 = *(ulong *)(alStack_110[1] + uVar13 * 8);
          _objc_retain();
        }
        else {
          FUN_104388134(uVar13,alStack_110[5],FUN_104384ae4,0x617453794d70614d,0xef636a624f737574);
        }
        lVar16 = *(long *)(uVar13 + _DAT_113072958);
        if (lVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1043889e4);
          (*pcVar7)();
        }
        alStack_110[8] = *(undefined8 *)(uVar13 + _DAT_113072960);
        uVar19 = *(ulong *)(lVar16 + _DAT_113072a70);
        alStack_110[7] = uVar13;
        if (uVar19 == 0) {
          _objc_retain(lVar16);
          puVar21 = (undefined *)0x0;
        }
        else {
          if (uVar19 >> 0x3e == 0) {
            uVar13 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar13 = uVar19;
            if (-1 < (long)uVar19) {
              uVar13 = uVar19 & 0xffffffffffffff8;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar13 == 0) {
            _objc_retain(lVar16);
            puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            apuStack_90[1] = PTR___swiftEmptyArrayStorage_11034f1c8;
            _objc_retain(lVar16);
            func_0x000104383060(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
            if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1043889c8);
              (*pcVar7)();
            }
            uVar22 = 0;
            uStack_a8 = uVar19 & 0xc000000000000001;
            puVar21 = apuStack_90[1];
            alStack_110[4] = lVar16;
            auStack_a0 = (undefined1  [8])uVar13;
            uStack_98 = uVar19;
            do {
              if (uStack_a8 == 0) {
                uVar19 = *(ulong *)(uStack_98 + uVar22 * 8 + 0x20);
                _objc_retain();
              }
              else {
                uVar19 = uVar22;
                FUN_104388134(uVar22,uStack_98,FUN_104385a9c,0x757461745370614d,0xed0000636a624f73);
              }
              puVar1 = (undefined8 *)(uVar19 + _DAT_1130729a0);
              uVar18 = puVar1[1];
              uVar17 = *puVar1;
              *(undefined8 *)((long)alStack_110 + lVar8 + 8) = puVar1[1];
              *puVar15 = uVar17;
              *(undefined8 *)((long)alStack_110 + lVar8 + 0x10) =
                   *(undefined8 *)(uVar19 + _DAT_1130729a8);
              puVar1 = (undefined8 *)(uVar19 + _DAT_1130729b0);
              uVar20 = puVar1[1];
              uVar17 = *puVar1;
              *(undefined8 *)((long)alStack_110 + lVar8 + 0x20) = puVar1[1];
              *(undefined8 *)((long)alStack_110 + lVar8 + 0x18) = uVar17;
              uVar17 = *(undefined8 *)(uVar19 + _DAT_1130729b8);
              *(undefined8 *)((long)alStack_110 + lVar8 + 0x28) = uVar17;
              lVar16 = *(long *)(uVar19 + _DAT_1130729c0);
              if (lVar16 == 0) {
                *(undefined8 *)(auStack_a0 + lVar8 + 1) = 0;
                *(undefined8 *)(auStack_a7 + lVar8) = 0;
                *(undefined8 *)((long)&lStack_b8 + lVar8) = 0;
                *(undefined8 *)((long)&puStack_c0 + lVar8) = 0;
                *(undefined8 *)((long)&stack0xffffffffffffff58 + lVar8) = 0;
                *(undefined8 *)((long)&lStack_b0 + lVar8) = 0;
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x38) = 0;
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x30) = 0;
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x48) = 0;
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x40) = 0;
              }
              else {
                uVar10 = ((undefined8 *)(lVar16 + _DAT_113072870))[1];
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x30) =
                     *(undefined8 *)(lVar16 + _DAT_113072870);
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x38) = uVar10;
                uVar23 = ((undefined8 *)(lVar16 + _DAT_113072878))[1];
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x40) =
                     *(undefined8 *)(lVar16 + _DAT_113072878);
                *(undefined8 *)((long)alStack_110 + lVar8 + 0x48) = uVar23;
                uVar2 = ((undefined8 *)(lVar16 + _DAT_113072880))[1];
                *(undefined8 *)((long)&puStack_c0 + lVar8) =
                     *(undefined8 *)(lVar16 + _DAT_113072880);
                *(undefined8 *)((long)&lStack_b8 + lVar8) = uVar2;
                *(undefined1 *)((long)&lStack_b0 + lVar8) = *(undefined1 *)(lVar16 + _DAT_113072888)
                ;
                *(undefined8 *)((long)&stack0xffffffffffffff58 + lVar8) =
                     *(undefined8 *)(lVar16 + _DAT_113072890);
                *(undefined8 *)(auStack_a0 + lVar8) = *(undefined8 *)(lVar16 + _DAT_113072898);
                *(undefined1 *)((long)&uStack_98 + lVar8) = *(undefined1 *)(lVar16 + _DAT_1130728a0)
                ;
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(uVar10);
                _swift_bridgeObjectRetain(uVar23);
                _swift_bridgeObjectRetain(uVar2);
              }
              puVar1 = (undefined8 *)(uVar19 + _DAT_1130729c8);
              uVar10 = puVar1[1];
              uVar23 = *puVar1;
              *(undefined8 *)((long)apuStack_90 + lVar8 + 8) = puVar1[1];
              *(undefined8 *)((long)apuStack_90 + lVar8) = uVar23;
              *(undefined8 *)((long)apuStack_90 + lVar8 + 0x10) =
                   *(undefined8 *)(uVar19 + _DAT_1130729d0);
              *(undefined8 *)((long)apuStack_90 + lVar8 + 0x18) =
                   *(undefined8 *)(uVar19 + _DAT_1130729d8);
              lVar16 = *(long *)(uVar19 + _DAT_1130729e0);
              if (lVar16 == 0) {
                _swift_bridgeObjectRetain(uVar10);
                _swift_bridgeObjectRetain(uVar18);
                _swift_bridgeObjectRetain(uVar20);
                _swift_bridgeObjectRetain(uVar17);
                lVar16 = 1;
              }
              else {
                _swift_bridgeObjectRetain(uVar10);
                _objc_retain();
                _swift_bridgeObjectRetain(uVar18);
                _swift_bridgeObjectRetain(uVar20);
                _swift_bridgeObjectRetain(uVar17);
                FUN_1043834f4();
              }
              lVar5 = _DAT_113813460;
              *(long *)(&stack0xffffffffffffff90 + lVar8) = lVar16;
              puVar1 = (undefined8 *)(uVar19 + _DAT_1130729e8);
              puVar14 = (undefined *)puVar1[1];
              uVar17 = *puVar1;
              *(undefined8 *)(&stack0xffffffffffffffa0 + lVar8) = puVar1[1];
              *(undefined8 *)(&stack0xffffffffffffff98 + lVar8) = uVar17;
              (&stack0xffffffffffffffa8)[lVar8] = *(undefined1 *)(uVar19 + _DAT_1130729f0);
              puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(lStack_b0 + 0x3c));
              lVar16 = *(long *)(uVar19 + _DAT_1130729f8);
              if (lVar16 == 0) {
                lVar16 = 0;
                FUN_1043806e4();
                (**(code **)(*(long *)(lVar16 + -8) + 0x38))(puVar1,1,1,lVar16);
              }
              else {
                uVar17 = *(undefined8 *)(lVar16 + _DAT_113072a28);
                apuStack_90[0] = puVar14;
                *puVar1 = uVar17;
                puVar1[1] = *(undefined8 *)(lVar16 + _DAT_113072a30);
                lVar11 = 0;
                FUN_1043806e4();
                iVar4 = *(int *)(lVar11 + 0x18);
                lVar12 = 0;
                __s10Foundation4DateVMa();
                (**(code **)(*(long *)(lVar12 + -8) + 0x10))
                          ((long)puVar1 + (long)iVar4,lVar16 + lVar5,lVar12);
                (**(code **)(*(long *)(lVar11 + -8) + 0x38))(puVar1,0,1,lVar11);
                puVar14 = apuStack_90[0];
                _objc_retain(uVar17);
              }
              _swift_bridgeObjectRetain(puVar14);
              _objc_release(uVar19);
              auVar6 = auStack_a0;
              uVar19 = *(ulong *)(puVar21 + 0x10);
              apuStack_90[1] = puVar21;
              if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar19) {
                func_0x000104383060(1 < *(ulong *)(puVar21 + 0x18),uVar19 + 1,1);
              }
              puVar21 = apuStack_90[1];
              uVar22 = uVar22 + 1;
              *(ulong *)(apuStack_90[1] + 0x10) = uVar19 + 1;
              FUN_104386978(puVar15,apuStack_90[1] +
                                    *(long *)(lStack_b8 + 0x48) * uVar19 +
                                    ((ulong)*(byte *)(lStack_b8 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lStack_b8 + 0x50) ^ 0xffffffffffffffff)));
              uVar9 = alStack_110[3];
              lVar16 = alStack_110[4];
            } while (auVar6 != (undefined1  [8])uVar22);
          }
        }
        uVar20 = *(undefined8 *)(lVar16 + _DAT_113072a78);
        uVar17 = *(undefined8 *)(lVar16 + _DAT_113072a80);
        uVar18 = ((undefined8 *)(lVar16 + _DAT_113072a80))[1];
        uVar10 = *(undefined8 *)(lVar16 + _DAT_113072a88);
        uVar3 = *(undefined1 *)(lVar16 + _DAT_113072a90);
        _swift_bridgeObjectRetain(uVar18);
        _objc_release(lVar16);
        lVar16 = alStack_110[8];
        _swift_bridgeObjectRetain(alStack_110[8]);
        _objc_release(alStack_110[7]);
        apuStack_90[2] = puStack_c0;
        uVar19 = *(ulong *)(puStack_c0 + 0x10);
        if (*(ulong *)(puStack_c0 + 0x18) >> 1 <= uVar19) {
          func_0x000104383094(1 < *(ulong *)(puStack_c0 + 0x18),uVar19 + 1,1);
          uVar9 = alStack_110[3];
        }
        uVar13 = alStack_110[9] + 1;
        *(ulong *)(apuStack_90[2] + 0x10) = uVar19 + 1;
        *(undefined **)(apuStack_90[2] + uVar19 * 0x38 + 0x20) = puVar21;
        *(undefined8 *)(apuStack_90[2] + uVar19 * 0x38 + 0x28) = uVar20;
        *(undefined8 *)(apuStack_90[2] + uVar19 * 0x38 + 0x30) = uVar17;
        *(undefined8 *)(apuStack_90[2] + uVar19 * 0x38 + 0x38) = uVar18;
        *(undefined8 *)(apuStack_90[2] + uVar19 * 0x38 + 0x40) = uVar10;
        apuStack_90[2][uVar19 * 0x38 + 0x48] = uVar3;
        *(long *)(apuStack_90[2] + uVar19 * 0x38 + 0x50) = lVar16;
      } while (uVar13 != uVar9);
    }
  }
  return apuStack_90[2];
}



/* Entry: 1043889e8; end: 104388a07;  */

void FUN_1043889e8(void)

{
  _objc_opt_self(&PTR_PTR_1129a5010);
  return;
}



/* Entry: 104388a08; end: 104388b6f;  */

int FUN_104388a08(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104388a84;
        goto LAB_104388a68;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104388a68:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104388a84:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104388b70; end: 104388baf;  */

void FUN_104388b70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf21f8;
  _swift_getWitnessTable(&UNK_10dcf21f8,&UNK_110761728);
  puRam0000000113072ba0 = puVar1;
  return;
}



/* Entry: 104388bb0; end: 104388bbf; -[SCMapCallout type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104388bb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072ba8);
}



/* Entry: 104388bc0; end: 104388bcb; -[SCMapCallout title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388bc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072bb0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072bb0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104388bcc; end: 104388bd7; -[SCMapCallout subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388bcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072bb8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072bb8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104388bd8; end: 104388be3; -[SCMapCallout body] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388bd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072bc0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072bc0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104388be4; end: 104388bef; -[SCMapCallout imageName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388be4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072bc8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072bc8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104388bf0; end: 104388cc7; -[SCMapCallout displayDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388bf0(long param_1)

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
  FUN_104389774(param_1 + _DAT_113813468,puVar4,0x112d373d8,&UNK_10d9014c0);
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



/* Entry: 104388cc8; end: 104388cd7; -[SCMapCallout showsCaret] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104388cc8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813470);
}



/* Entry: 104388cd8; end: 104388ce7; -[SCMapCallout respondsToTouch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104388cd8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113813478);
}



/* Entry: 104388ce8; end: 104388cf7; -[SCMapCallout titleStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104388ce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813480);
}



/* Entry: 104388cf8; end: 104388d07; -[SCMapCallout subtitleStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104388cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813488);
}



/* Entry: 104388d08; end: 104388d17; -[SCMapCallout imageOnlyIconStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104388d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113813490);
}



/* Entry: 104388d18; end: 104388d23; -[SCMapCallout userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388d18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113813498))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113813498);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104388d24; end: 104388d33; -[SCMapCallout actionCalloutType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104388d24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1138134a0);
}



/* Entry: 104388d34; end: 104388d43; -[SCMapCallout exploreItemStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1138134a8));
  return;
}



/* Entry: 104388d44; end: 104388d4f; -[SCMapCallout avatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104388d44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138134b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138134b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104388d50; end: 104388da7;  */

void FUN_104388d50(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104388da8; end: 104389197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104388da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072ba8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bb0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bb8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bc0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bc8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  FUN_104389774(param_10,unaff_x20 + _DAT_113813468,0x112d373d8,&UNK_10d9014c0);
  *(undefined1 *)(unaff_x20 + _DAT_113813470) = (undefined1)param_11;
  *(undefined1 *)(unaff_x20 + _DAT_113813478) = param_11._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_113813480) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113813488) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113813490) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113813498);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_1138134a0) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_1138134a8) = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138134b0);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_10);
  return puVar2;
}



/* Entry: 104389198; end: 1043893f3; -[SCMapCallout initWithType:title:subtitle:body:imageName:displayDate:showsCaret:respondsToTouch:titleStyle:subtitleStyle:imageOnlyIconStyle:userId:actionCalloutType:exploreItemStatus:avatarId:] */

void FUN_104389198(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14,undefined8 param_15,undefined8 param_16,long param_17)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 auStack_140 [2];
  undefined1 auStack_130 [8];
  long alStack_128 [9];
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0x112d373d8;
  puVar7 = &UNK_10d9014c0;
  uStack_78 = param_3;
  uStack_70 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar10 = auStack_e0 + lVar2;
  if (param_4 == 0) {
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_90 = puVar7;
    lStack_88 = param_4;
  }
  if (param_5 == 0) {
    puStack_a0 = (undefined *)0x0;
    lStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_a0 = puVar7;
    lStack_98 = param_5;
  }
  if (param_6 == 0) {
    puStack_b0 = (undefined *)0x0;
    lStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_b0 = puVar7;
    lStack_a8 = param_6;
  }
  lVar6 = param_7;
  _objc_retain();
  lVar3 = param_8;
  _objc_retain();
  lVar4 = param_14;
  _objc_retain();
  _objc_retain();
  lVar5 = param_17;
  uStack_c0 = param_16;
  _objc_retain();
  lStack_d0 = lVar5;
  if (lVar6 == 0) {
    lStack_b8 = 0;
    puStack_c8 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_c8 = puVar7;
    lStack_b8 = param_7;
    _objc_release(lVar6);
  }
  if (lVar3 == 0) {
    lVar6 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar10,param_8);
    _objc_release(lVar3);
    lVar6 = 0;
    __s10Foundation4DateVMa();
  }
  uVar8 = (ulong)(lVar3 == 0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar10,uVar8,1);
  puStack_80 = puVar10;
  if (lVar4 == 0) {
    lStack_d8 = 0;
    uVar9 = 0;
    uVar11 = uVar8;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar11 = uVar8;
    lStack_d8 = param_14;
    _objc_release(lVar4);
    uVar9 = uVar8;
  }
  lVar6 = lStack_d0;
  if (lStack_d0 == 0) {
    param_17 = 0;
    uVar11 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar6);
  }
  *(long *)((long)alStack_128 + lVar2 + 0x38) = param_17;
  *(ulong *)((long)alStack_128 + lVar2 + 0x40) = uVar11;
  uVar1 = uStack_c0;
  *(undefined8 *)((long)alStack_128 + lVar2 + 0x28) = param_15;
  *(undefined8 *)((long)alStack_128 + lVar2 + 0x30) = uVar1;
  *(ulong *)((long)alStack_128 + lVar2 + 0x20) = uVar9;
  lVar6 = lStack_d8;
  *(undefined8 *)((long)alStack_128 + lVar2 + 0x10) = param_13;
  *(long *)((long)alStack_128 + lVar2 + 0x18) = lVar6;
  *(undefined8 *)((long)alStack_128 + lVar2) = param_11;
  *(undefined8 *)((long)alStack_128 + lVar2 + 8) = param_12;
  auStack_130[lVar2 + 1] = param_9._1_1_;
  auStack_130[lVar2] = (undefined1)param_9;
  *(undefined1 **)((long)auStack_140 + lVar2 + 8) = puStack_80;
  *(undefined **)((long)auStack_140 + lVar2) = puStack_c8;
  func_0x000104388fa4(uStack_78,lStack_88,puStack_90,lStack_98,puStack_a0,lStack_a8,puStack_b0,
                      lStack_b8);
  return;
}



/* Entry: 1043893f4; end: 104389423;  */

void FUN_1043893f4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104389424(param_1);
  return;
}



/* Entry: 104389424; end: 104389773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104389424(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _swift_getObjectType();
  lVar4 = 0;
  FUN_10437f914();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar8 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12;
  lVar5 = 0x113072218;
  func_0x0001000285a8(0x113072218,&UNK_10dcf1478);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_00;
  *(undefined8 *)(unaff_x20 + _DAT_113072ba8) = *param_1;
  uVar9 = param_1[2];
  uVar12 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bb0);
  puVar1[1] = param_1[2];
  *puVar1 = uVar12;
  uStack_90 = param_1[4];
  uVar12 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bb8);
  puVar1[1] = param_1[4];
  *puVar1 = uVar12;
  uStack_88 = param_1[6];
  uVar12 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bc0);
  puVar1[1] = param_1[6];
  *puVar1 = uVar12;
  uStack_80 = param_1[8];
  uVar12 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072bc8);
  puVar1[1] = param_1[8];
  *puVar1 = uVar12;
  lVar6 = 0;
  FUN_10437c228();
  FUN_104389774((long)param_1 + (long)*(int *)(lVar6 + 0x24),unaff_x20 + _DAT_113813468,0x112d373d8,
                &UNK_10d9014c0);
  *(undefined1 *)(unaff_x20 + _DAT_113813470) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
  *(undefined1 *)(unaff_x20 + _DAT_113813478) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x2c));
  *(undefined8 *)(unaff_x20 + _DAT_113813480) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  *(undefined8 *)(unaff_x20 + _DAT_113813488) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34));
  *(undefined8 *)(unaff_x20 + _DAT_113813490) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x3c));
  uVar12 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113813498);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar12;
  uVar12 = puVar1[1];
  *(undefined8 *)(unaff_x20 + _DAT_1138134a0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40));
  FUN_104389774((long)param_1 + (long)*(int *)(lVar6 + 0x44),lVar11,0x113072218,&UNK_10dcf1478);
  lVar5 = lVar11;
  (**(code **)(lVar13 + 0x30))(lVar11,1,lVar4);
  if ((int)lVar5 == 1) {
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uStack_90);
    _swift_bridgeObjectRetain(uStack_88);
    _swift_bridgeObjectRetain(uStack_80);
    lVar8 = 0;
  }
  else {
    FUN_104386978(lVar11,lVar10);
    FUN_104386898(lVar10,lVar8);
    FUN_104385a9c(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uStack_90);
    _swift_bridgeObjectRetain(uStack_88);
    _swift_bridgeObjectRetain(uStack_80);
    FUN_1043851f8();
    func_0x0001043897bc(lVar10,FUN_10437f914);
  }
  *(long *)(unaff_x20 + _DAT_1138134a8) = lVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x48));
  uVar9 = puVar1[1];
  uVar12 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138134b0);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar12;
  puVar3 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar9);
  puVar7 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar7,puVar3);
  func_0x0001043897bc(param_1,FUN_10437c228);
  return puVar7;
}



/* Entry: 104389774; end: 1043897f7;  */

undefined8 FUN_104389774(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1043897f8; end: 1043897fb; -[SCMapCallout copyWithZone:] */

void FUN_1043897f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1043897fc; end: 104389887; -[SCMapCallout description] */

void FUN_1043897fc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10437c228();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104389888(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001043897bc(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_10437c228);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104389888; end: 104389af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104389888(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = *(undefined8 *)(param_2 + _DAT_113072ba8);
  puVar1 = (undefined8 *)(param_2 + _DAT_113072bb0);
  uVar7 = puVar1[1];
  uVar4 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar4;
  puVar1 = (undefined8 *)(param_2 + _DAT_113072bb8);
  uVar6 = puVar1[1];
  uVar4 = *puVar1;
  param_1[4] = puVar1[1];
  param_1[3] = uVar4;
  puVar1 = (undefined8 *)(param_2 + _DAT_113072bc0);
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  param_1[6] = puVar1[1];
  param_1[5] = uVar4;
  puVar1 = (undefined8 *)(param_2 + _DAT_113072bc8);
  uVar4 = puVar1[1];
  uVar8 = *puVar1;
  param_1[8] = puVar1[1];
  param_1[7] = uVar8;
  lVar9 = _DAT_113813468;
  lVar3 = 0;
  FUN_10437c228();
  FUN_104389774(param_2 + lVar9,(long)param_1 + (long)*(int *)(lVar3 + 0x24),0x112d373d8,
                &UNK_10d9014c0);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28)) =
       *(undefined1 *)(param_2 + _DAT_113813470);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c)) =
       *(undefined1 *)(param_2 + _DAT_113813478);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) =
       *(undefined8 *)(param_2 + _DAT_113813480);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x34)) =
       *(undefined8 *)(param_2 + _DAT_113813488);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x38)) =
       *(undefined8 *)(param_2 + _DAT_113813490);
  puVar1 = (undefined8 *)(param_2 + _DAT_113813498);
  uVar8 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x3c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar8;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x40)) =
       *(undefined8 *)(param_2 + _DAT_1138134a0);
  uVar8 = puVar1[1];
  lVar10 = (long)*(int *)(lVar3 + 0x44);
  lVar9 = *(long *)(param_2 + _DAT_1138134a8);
  if (lVar9 == 0) {
    lVar9 = 0;
    FUN_10437f914();
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))((long)param_1 + lVar10,1,1,lVar9);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar4);
  }
  else {
    _swift_bridgeObjectRetain(uVar8);
    _objc_retain(lVar9);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar4);
    FUN_104385680((long)param_1 + lVar10,lVar9);
    lVar9 = 0;
    FUN_10437f914();
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))((long)param_1 + lVar10,0,1,lVar9);
  }
  uVar4 = *(undefined8 *)(param_2 + _DAT_1138134b0);
  uVar5 = ((undefined8 *)(param_2 + _DAT_1138134b0))[1];
  _swift_bridgeObjectRetain(uVar5);
  _objc_release(param_2);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x48));
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}



/* Entry: 104389af4; end: 104389b6f; -[SCMapCallout init] */

void FUN_104389af4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapStatusServices/SCMapCalloutWrapper.swift",0x2d,2,0x66,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104389b3c);
  (*pcVar1)();
}



/* Entry: 104389b70; end: 104389c1f; -[SCMapCallout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104389b70(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072bb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072bb8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072bc0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072bc8 + 8));
  func_0x0001000d1dcc(param_1 + _DAT_113813468);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113813498 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138134a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1138134b0 + 8))
  ;
  return;
}



/* Entry: 104389c20; end: 104389c27;  */

void FUN_104389c20(void)

{
  if (lRam0000000113072bf8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7ffe0c);
  return;
}



/* Entry: 104389c28; end: 104389c5f;  */

void FUN_104389c28(undefined8 param_1)

{
  if (lRam0000000113072bf8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ffe0c);
  return;
}



/* Entry: 104389c60; end: 104389d0f;  */

void FUN_104389c60(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a0 = &UNK_10dcf22b8;
  puStack_98 = &UNK_10dcf22b8;
  puStack_90 = &UNK_10dcf22b8;
  puStack_88 = &UNK_10dcf22b8;
  lVar2 = 0x13f;
  puStack_a8 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_80 = *(long *)(lVar2 + -8) + 0x40;
    puStack_78 = &UNK_10dcf22d0;
    puStack_70 = &UNK_10dcf22d0;
    puStack_50 = &UNK_10dcf22b8;
    puStack_40 = &UNK_10dcf22e8;
    puStack_38 = &UNK_10dcf22b8;
    puStack_68 = puVar1;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    puStack_48 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0xf,&puStack_a8,param_1 + 0x50);
  }
  return;
}



/* Entry: 104389d10; end: 104389d1f;  */

undefined1  [16] FUN_104389d10(void)

{
  return ZEXT816(0x110761820);
}



/* Entry: 104389d20; end: 104389d37;  */

bool FUN_104389d20(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104389d38; end: 104389d77;  */

void FUN_104389d38(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf2330;
  _swift_getWitnessTable(&UNK_10dcf2330,&UNK_110761848);
  puRam0000000113072c08 = puVar1;
  return;
}



/* Entry: 104389d78; end: 104389e23;  */

void FUN_104389d78(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104389e24; end: 104389e63;  */

void FUN_104389e24(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = 0;
  if (lVar2 == 3 || lVar2 == 0) {
    lVar1 = lVar2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = lVar2 != 3 && lVar2 != 0;
  return;
}



/* Entry: 104389e64; end: 104389f53;  */

long FUN_104389e64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104389f54; end: 104389f63; -[_TtC20SCMapBitmojiServices20SCMapBitmojiServices bitmojiAvatarGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104389f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072c10));
  return;
}



/* Entry: 104389f64; end: 104389f73; -[_TtC20SCMapBitmojiServices20SCMapBitmojiServices use3DActionmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104389f64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072c18);
}



/* Entry: 104389f74; end: 104389fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104389f74(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072c10) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113072c18) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104389fd8; end: 10438a037; -[_TtC20SCMapBitmojiServices20SCMapBitmojiServices init] */

void FUN_104389fd8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapBitmojiServices.SCMapBitmojiServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438a004);
  (*pcVar1)();
}



/* Entry: 10438a038; end: 10438a047; -[_TtC20SCMapBitmojiServices20SCMapBitmojiServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072c10));
  return;
}



/* Entry: 10438a048; end: 10438a057; -[SCMapStickerDynamicElement originX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10438a048(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113072c48);
}



/* Entry: 10438a058; end: 10438a067; -[SCMapStickerDynamicElement originY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10438a058(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113072c50);
}



/* Entry: 10438a068; end: 10438a077; -[SCMapStickerDynamicElement bottomRightX] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10438a068(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113072c58);
}



/* Entry: 10438a078; end: 10438a087; -[SCMapStickerDynamicElement bottomRightY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10438a078(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113072c60);
}



/* Entry: 10438a088; end: 10438a097; -[SCMapStickerDynamicElement dynamicContentOneOfCase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438a088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072c68);
}



/* Entry: 10438a098; end: 10438a0a7; -[SCMapStickerDynamicElement gameContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113072c70));
  return;
}



/* Entry: 10438a0a8; end: 10438a0b7; -[SCMapStickerDynamicElement drawOnNonClusteredSticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10438a0a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113072c78);
}



/* Entry: 10438a0b8; end: 10438a17b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a0b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_113072c48) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_113072c50) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_113072c58) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_113072c60) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113072c68) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113072c70) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_113072c78) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438a17c; end: 10438a24b; -[SCMapStickerDynamicElement initWithOriginX:originY:bottomRightX:bottomRightY:dynamicContentOneOfCase:gameContent:drawOnNonClusteredSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a17c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined4 *)(param_1 + _DAT_113072c48) = param_3;
  *(undefined4 *)(param_1 + _DAT_113072c50) = param_4;
  *(undefined4 *)(param_1 + _DAT_113072c58) = param_5;
  *(undefined4 *)(param_1 + _DAT_113072c60) = param_6;
  *(undefined8 *)(param_1 + _DAT_113072c68) = param_7;
  *(undefined8 *)(param_1 + _DAT_113072c70) = param_8;
  *(undefined1 *)(param_1 + _DAT_113072c78) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 10438a24c; end: 10438a3ab;  */

void FUN_10438a24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  _objc_allocWithZone();
  func_0x00010438a2a4(param_1,param_2,param_3,param_4 & 0x1ffffffffff);
  return;
}



/* Entry: 10438a3ac; end: 10438a3af; -[SCMapStickerDynamicElement copyWithZone:] */

void FUN_10438a3ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438a3b0; end: 10438a3cf; -[SCMapStickerDynamicElement description] */

void FUN_10438a3b0(void)

{
  func_0x00010438a45c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438a3d0; end: 10438a44b; -[SCMapStickerDynamicElement init] */

void FUN_10438a3d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapBitmojiServices/SCMapStickerDynamicElementWrapper.swift",0x3c,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438a418);
  (*pcVar1)();
}



/* Entry: 10438a44c; end: 10438a4eb; -[SCMapStickerDynamicElement .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113072c70));
  return;
}



/* Entry: 10438a4ec; end: 10438a50b;  */

void FUN_10438a4ec(void)

{
  _objc_opt_self(&PTR_PTR_1129a52e0);
  return;
}



/* Entry: 10438a50c; end: 10438a51f; -[SCMapGameElement score] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10438a50c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113072ca8);
}



/* Entry: 10438a520; end: 10438a56b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a520(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_113072ca8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438a56c; end: 10438a5b7; -[SCMapGameElement initWithScore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a56c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined4 *)(param_1 + _DAT_113072ca8) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438a5b8; end: 10438a5bb; -[SCMapGameElement copyWithZone:] */

void FUN_10438a5b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10438a5bc; end: 10438a5d7; -[SCMapGameElement description] */

void FUN_10438a5bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438a5d8; end: 10438a673; -[SCMapGameElement init] */

void FUN_10438a5d8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCMapBitmojiServices/SCMapGameElementWrapper.swift",0x32,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438a620);
  (*pcVar1)();
}



/* Entry: 10438a674; end: 10438a68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a674(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_113072ca8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438a68c; end: 10438a763;  */

void FUN_10438a68c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10438a764; end: 10438a783;  */

void FUN_10438a764(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10438a784; end: 10438a7c3;  */

void FUN_10438a784(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf2480;
  _swift_getWitnessTable(&UNK_10dcf2480,&UNK_1107619e0);
  puRam0000000113072cd8 = puVar1;
  return;
}



/* Entry: 10438a7c4; end: 10438a7eb;  */

undefined1  [16] FUN_10438a7c4(void)

{
  return ZEXT816(0x1107619e0);
}



/* Entry: 10438a7ec; end: 10438a82b;  */

void FUN_10438a7ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113072ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf2560;
  _swift_getWitnessTable(&UNK_10dcf2560,&UNK_110761a58);
  puRam0000000113072ce0 = puVar1;
  return;
}



/* Entry: 10438a82c; end: 10438a8d7;  */

void FUN_10438a82c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10438a8d8; end: 10438a913;  */

void FUN_10438a8d8(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 4U < 0xfffffffffffffffd;
  lVar1 = 0;
  if (!bVar2) {
    lVar1 = *param_2;
  }
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 10438a914; end: 10438a927; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope coordinate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10438a914(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_113072ce8);
}



/* Entry: 10438a928; end: 10438a983; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope address] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a928(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113072cf0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113072cf0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10438a984; end: 10438a993; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope travelMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10438a984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072cf8);
}



/* Entry: 10438a994; end: 10438a9b3; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope presentingContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a994(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113072d00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438a9b4; end: 10438a9fb; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope directionsSheetDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a9b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113072d08;
  _swift_beginAccess(param_1 + _DAT_113072d08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10438a9fc; end: 10438aa53; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope setDirectionsSheetDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438a9fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113072d08;
  _swift_beginAccess(param_1 + _DAT_113072d08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10438aa54; end: 10438ab63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10438aa54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  lVar3 = _DAT_113072d08;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113072d08,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072ce8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072cf0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113072cf8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113072d00) = param_6;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_6);
  puVar4 = auStack_88;
  _objc_msgSendSuper2(puVar4,puVar2);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  return puVar4;
}



/* Entry: 10438ab64; end: 10438ac6f; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope initWithCoordinate:address:travelMode:presentingContainer:directionsSheetDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ab64(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = param_3;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar4 = _DAT_113072d08;
  _swift_unknownObjectWeakInit(param_3 + _DAT_113072d08,0);
  puVar1 = (undefined8 *)(param_3 + _DAT_113072ce8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_3 + _DAT_113072cf0);
  *plVar2 = param_5;
  plVar2[1] = param_4;
  *(undefined8 *)(param_3 + _DAT_113072cf8) = param_6;
  *(undefined8 *)(param_3 + _DAT_113072d00) = param_7;
  _swift_beginAccess(param_3 + lVar4,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(param_3 + lVar4,param_8);
  puVar3 = PTR_s_init_1125d9248;
  lStack_88 = param_3;
  lStack_80 = lVar5;
  _swift_unknownObjectRetain(param_7);
  _objc_msgSendSuper2(&lStack_88,puVar3);
  return;
}



/* Entry: 10438ac70; end: 10438accf; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope init] */

void FUN_10438ac70(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapDirectionsSheetScope.SCMapDirectionsSheetScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438ac9c);
  (*pcVar1)();
}



/* Entry: 10438acd0; end: 10438ad3f; -[_TtC25SCMapDirectionsSheetScope25SCMapDirectionsSheetScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10438acd0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072cf0 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113072d00));
  param_1 = param_1 + _DAT_113072d08;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10438ad40; end: 10438adab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438ad40(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034141c();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113072d40) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10438adac; end: 10438adb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438adac(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034141c();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072d40) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10438adb4; end: 10438adff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10438adb4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072d40) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10438ae00; end: 10438af5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10438ae00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = 0;
  func_0x000100335b44();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_113072d08;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113072d08,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_113072ce8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113072cf0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_113072cf8) = param_5;
  *(undefined8 *)(lVar5 + _DAT_113072d00) = param_6;
  _swift_beginAccess(lVar5 + lVar3,auStack_88,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_98 = lVar5;
  lStack_90 = lVar4;
  _swift_bridgeObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  plVar6 = &lStack_98;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_b0[0] = plVar6;
  func_0x00010008a7c8(&uStack_a0,aplStack_b0);
  func_0x000100083b20(aplStack_b0);
  _swift_release(uStack_a0);
  _swift_unknownObjectRelease(aplStack_b0[0]);
  return plVar6;
}



/* Entry: 10438af60; end: 10438b02f; -[_TtC25SCMapDirectionsSheetScope33SCMapDirectionsSheetScopeServices buildWithCoordinate:address:travelMode:presentingContainer:directionsSheetDelegate:] */

void FUN_10438af60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_5 == 0) {
    param_5 = 0;
    param_4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_3);
  FUN_10438ae00(param_1,param_2,param_5,param_4,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_3);
  _swift_bridgeObjectRelease(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10438b030; end: 10438b08f; -[_TtC25SCMapDirectionsSheetScope33SCMapDirectionsSheetScopeServices init] */

void FUN_10438b030(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapDirectionsSheetScope.SCMapDirectionsSheetScopeServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10438b05c);
  (*pcVar1)();
}



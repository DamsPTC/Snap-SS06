/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e9c300; end: 103e9c31b;  */

void FUN_103e9c300(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x11302a6e0;
  plVar5 = (long *)&UNK_10dca5b10;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103e9d894();
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



/* Entry: 103e9c31c; end: 103e9c387;  */

void FUN_103e9c31c(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103e9c388; end: 103e9c3a3;  */

void FUN_103e9c388(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x11302a6c8;
  plVar5 = (long *)&UNK_10dca5af0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103e9da44();
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



/* Entry: 103e9c3a4; end: 103e9c567;  */

ulong FUN_103e9c3a4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9c488);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9c48c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_self(PTR__OBJC_CLASS___NSString_1126ae4d0);
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
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_self(PTR__OBJC_CLASS___NSString_1126ae4d0);
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
  FUN_103e9d738(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9c568);
  (*pcVar2)();
}



/* Entry: 103e9c568; end: 103e9c70f;  */

ulong FUN_103e9c568(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9c63c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9c640);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_103e9d894(0);
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
    FUN_103e9d894(0);
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
  __sSS6appendyySSF(0x65646f4d736e654c,0xed00006c65646f4d);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9c710);
  (*pcVar2)();
}



/* Entry: 103e9c710; end: 103e9d717;  */

undefined * FUN_103e9c710(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x11302a6d0,&UNK_10dca5b00);
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar1 = puVar11;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (puVar11 != (undefined *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      puVar12 = (undefined *)0x0;
      puVar7 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (puVar12 == puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9ca04);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(param_1 + (long)puVar12 * 8 + 0x20);
        uVar4 = *(ulong *)(puVar1 + 0x28);
        _objc_retain();
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_103e9d738(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            _objc_retain();
            uVar6 = uVar8;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(uVar8);
            if ((uVar6 & 1) != 0) {
              _objc_release(uVar5);
              goto LAB_103e9c910;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined8 *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar5;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9ca08);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
LAB_103e9c910:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar11);
    }
    else {
      puVar12 = (undefined *)0x0;
      do {
        puVar7 = puVar12;
        FUN_103e9c3a4(puVar12,param_1);
        bVar3 = SCARRY8((long)puVar12,1);
        puVar12 = puVar12 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9c9fc);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(puVar1 + 0x28);
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar10 = -1L << ((ulong)(byte)puVar1[0x20] & 0x3f);
        uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
        uVar6 = uVar4 >> 6;
        uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & uVar8) != 0) {
          FUN_103e9d738(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
          do {
            uVar8 = *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8);
            _objc_retain();
            uVar6 = uVar8;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
            _objc_release(uVar8);
            if ((uVar6 & 1) != 0) {
              _swift_unknownObjectRelease(puVar7);
              goto joined_r0x000103e9c7e8;
            }
            uVar4 = uVar4 + 1 & ~uVar10;
            uVar6 = uVar4 >> 6;
            uVar8 = *(ulong *)(puVar1 + uVar6 * 8 + 0x38);
            uVar9 = 1L << (uVar4 & 0x3f);
          } while ((uVar9 & uVar8) != 0);
        }
        *(ulong *)(puVar1 + uVar6 * 8 + 0x38) = uVar9 | uVar8;
        *(undefined **)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9ca00);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
joined_r0x000103e9c7e8:
      } while (puVar12 != puVar11);
    }
  }
  return puVar1;
}



/* Entry: 103e9d718; end: 103e9d737;  */

void FUN_103e9d718(void)

{
  _objc_opt_self(&PTR_PTR_11295e220);
  return;
}



/* Entry: 103e9d738; end: 103e9d777;  */

void FUN_103e9d738(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103e9d778; end: 103e9d7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d778(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a6e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a6f0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e9d7dc; end: 103e9d7eb; -[SCLensModeModel effect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a6e8));
  return;
}



/* Entry: 103e9d7ec; end: 103e9d7fb; -[SCLensModeModel identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a6f0));
  return;
}



/* Entry: 103e9d7fc; end: 103e9d85b; -[SCLensModeModel init] */

void FUN_103e9d7fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingLensMode.LensModeModel",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9d828);
  (*pcVar1)();
}



/* Entry: 103e9d85c; end: 103e9d893; -[SCLensModeModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d85c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a6e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a6f0));
  return;
}



/* Entry: 103e9d894; end: 103e9d8b3;  */

void FUN_103e9d894(void)

{
  _objc_opt_self(&PTR_PTR_11295e2e0);
  return;
}



/* Entry: 103e9d8b4; end: 103e9d927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a720) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a728) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302a730) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e9d928; end: 103e9d933; -[SCLensModeSortingResult applyLensModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d928(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a720);
  FUN_103e9d894(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9d934; end: 103e9d93f; -[SCLensModeSortingResult removeCameraModes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d934(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a728);
  FUN_103e9d894(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9d940; end: 103e9d98b;  */

void FUN_103e9d940(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  FUN_103e9d894(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9d98c; end: 103e9d99b; -[SCLensModeSortingResult effectLayerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a730));
  return;
}



/* Entry: 103e9d99c; end: 103e9d9fb; -[SCLensModeSortingResult init] */

void FUN_103e9d99c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingLensMode.LensModeSortingResult",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9d9c8);
  (*pcVar1)();
}



/* Entry: 103e9d9fc; end: 103e9da43; -[SCLensModeSortingResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9d9fc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a720));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a730));
  return;
}



/* Entry: 103e9da44; end: 103e9da63;  */

void FUN_103e9da44(void)

{
  _objc_opt_self(&PTR_PTR_11295e3a8);
  return;
}



/* Entry: 103e9da64; end: 103e9db03; +[SCLensEffectLayerModes overlaidEffectCameraModes] */

void FUN_103e9da64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_103e9c294();
  _swift_allocObject();
  param_1[3] = 3;
  param_1[2] = 1;
  puVar2 = param_1;
  FUN_103f6ca1c();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = uVar3;
  uVar3 = 0;
  func_0x0001000e2834(0);
  puVar2 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar3);
  _swift_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103e9db04; end: 103e9db47; +[SCLensEffectLayerModes underlaidEffectCameraModes] */

void FUN_103e9db04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103e9dbb8();
  uVar1 = 0;
  func_0x0001000e2834(0);
  uVar2 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e9db48; end: 103e9db83; -[SCLensEffectLayerModes init] */

void FUN_103e9db48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e9db84; end: 103e9dbb7;  */

void FUN_103e9db84(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e9dbb8; end: 103e9dd3f;  */

undefined8 * FUN_103e9dbb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_103e9c294();
  _swift_allocObject();
  param_1[3] = 0xf;
  param_1[2] = 7;
  puVar2 = param_1;
  FUN_103f6c93c();
  uVar3 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  _swift_bridgeObjectRetain(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,puVar2);
  _swift_bridgeObjectRelease();
  param_1[4] = uVar3;
  FUN_103f6c974();
  uVar3 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  _swift_bridgeObjectRetain(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,puVar2);
  _swift_bridgeObjectRelease();
  param_1[5] = uVar3;
  FUN_103f6c9ac();
  uVar3 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  _swift_bridgeObjectRetain(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,puVar2);
  _swift_bridgeObjectRelease();
  param_1[6] = uVar3;
  FUN_103f6c9e4();
  uVar3 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  _swift_bridgeObjectRetain(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,puVar2);
  _swift_bridgeObjectRelease();
  param_1[7] = uVar3;
  func_0x000103f6c8c8();
  uVar3 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  _swift_bridgeObjectRetain(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,puVar2);
  _swift_bridgeObjectRelease();
  param_1[8] = uVar3;
  FUN_103f6c904();
  uVar3 = *puVar2;
  puVar2 = (undefined8 *)puVar2[1];
  _swift_bridgeObjectRetain(puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,puVar2);
  _swift_bridgeObjectRelease();
  param_1[9] = uVar3;
  FUN_103f6ca54();
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 103e9dd40; end: 103e9dd5f;  */

void FUN_103e9dd40(void)

{
  _objc_opt_self(&PTR_PTR_11295e478);
  return;
}



/* Entry: 103e9dd60; end: 103e9e06b;  */

/* WARNING: Removing unreachable block (ram,0x000103e9e068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9dd60(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  lVar3 = param_2;
  func_0x000107c4adac();
  if ((0 < lVar2) && (func_0x000107c4adac(), 0 < param_3)) {
    lVar2 = param_1;
    func_0x000107c4b1dc();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar2);
    __sSS5countSivg(lVar5,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    if (0 < lVar5) {
      lVar3 = 0;
      FUN_103e9d894();
      lVar2 = lVar3;
      _objc_allocWithZone();
      *(long *)(lVar2 + _DAT_11302a6e8) = param_1;
      *(long *)(lVar2 + _DAT_11302a6f0) = param_2;
      puVar1 = PTR_s_init_1125d9248;
      lStack_a8 = lVar2;
      lStack_a0 = lVar3;
      _objc_retain(param_1);
      _objc_retain(param_2);
      plVar6 = &lStack_a8;
      _objc_msgSendSuper2(plVar6,puVar1);
      plVar7 = plVar6;
      FUN_103f6c904();
      lVar2 = *plVar7;
      lVar3 = plVar7[1];
      _swift_bridgeObjectRetain(lVar3);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar2,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      func_0x000107c4040c(param_2);
      _objc_release(lVar2);
      FUN_103e9e06c(plVar6,param_2);
      _objc_release(plVar6);
      return;
    }
  }
  lVar3 = 0;
  FUN_103e9d894();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_11302a6e8) = param_1;
  *(long *)(lVar2 + _DAT_11302a6f0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  lVar2 = _DAT_11302a788;
  _swift_beginAccess(unaff_x20 + _DAT_11302a788,auStack_68,0,0);
  lVar3 = _DAT_11302a790;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
  _swift_beginAccess(unaff_x20 + _DAT_11302a790,auStack_80,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  uStack_88 = uVar8;
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain();
  FUN_103e9ed9c();
  uVar8 = uStack_88;
  FUN_103e9c300();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(long **)(lVar3 + 0x20) = plVar4;
  lVar5 = 0;
  FUN_103e9da44();
  _objc_retain(plVar4);
  lVar2 = lVar5;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11302a720) = uVar8;
  *(long *)(lVar2 + _DAT_11302a728) = lVar3;
  *(undefined ***)(lVar2 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
  plVar6 = &lStack_98;
  lStack_98 = lVar2;
  lStack_90 = lVar5;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  plVar7 = plVar6;
  FUN_103e9c388();
  _objc_release(plVar4);
  _swift_allocObject(plVar7,((ulong)*(uint *)(plVar7 + 6) + 7 & 0x1fffffff8) + 8,
                     *(ushort *)((long)plVar7 + 0x34) | 7);
  plVar7[3] = 3;
  plVar7[2] = 1;
  plVar7[4] = (long)plVar6;
  return;
}



/* Entry: 103e9e06c; end: 103e9e94b;  */

/* WARNING: Removing unreachable block (ram,0x000103e9e934) */
/* WARNING: Removing unreachable block (ram,0x000103e9e940) */
/* WARNING: Removing unreachable block (ram,0x000103e9e92c) */
/* WARNING: Removing unreachable block (ram,0x000103e9e930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9e06c(long param_1,undefined1 *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  long lStack_e0;
  long lStack_d8;
  undefined8 auStack_d0 [4];
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  uVar2 = *(ulong *)(param_1 + _DAT_11302a6e8);
  if (uVar2 == 0) {
    FUN_103e9c388();
    _swift_allocObject();
    *(undefined8 *)(uVar2 + 0x18) = 3;
    *(undefined8 *)(uVar2 + 0x10) = 1;
    lVar5 = _DAT_11302a788;
    _swift_beginAccess(unaff_x20 + _DAT_11302a788,auStack_80,0,0);
    lVar11 = _DAT_11302a790;
    uVar19 = *(undefined8 *)(unaff_x20 + lVar5);
    _swift_beginAccess(unaff_x20 + _DAT_11302a790,auStack_98,0,0);
    uVar22 = *(undefined8 *)(unaff_x20 + lVar11);
    auStack_d0[0] = uVar19;
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar22);
    FUN_103e9ed9c();
    uVar19 = auStack_d0[0];
    lVar11 = 0;
    FUN_103e9da44();
    lVar5 = lVar11;
    _objc_allocWithZone();
    *(undefined8 *)(lVar5 + _DAT_11302a720) = uVar19;
    *(undefined **)(lVar5 + _DAT_11302a728) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined ***)(lVar5 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
    plVar6 = &lStack_a8;
    lStack_a8 = lVar5;
    lStack_a0 = lVar11;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    *(long **)(uVar2 + 0x20) = plVar6;
  }
  else {
    puVar13 = param_2;
    func_0x000107c4b1dc();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar2);
    lVar5 = _DAT_11302a788;
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar14 = auStack_80;
    _swift_beginAccess(unaff_x20 + _DAT_11302a788,puVar14,0,0);
    puVar21 = *(undefined1 **)(unaff_x20 + lVar5);
    if ((ulong)puVar21 >> 0x3e == 0) {
      puVar20 = *(undefined1 **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar20 = (undefined1 *)((ulong)puVar21 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar21) {
        puVar20 = puVar21;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar21);
    if (puVar20 != (undefined1 *)0x0) {
      uVar2 = 0;
      do {
        if (((ulong)puVar21 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9e82c);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(puVar21 + uVar2 * 8 + 0x20);
          _objc_retain();
          puVar15 = puVar14;
        }
        else {
          uVar3 = uVar2;
          puVar15 = puVar21;
          FUN_103e9c568();
        }
        if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9e1f0);
          (*pcVar1)();
        }
        puVar18 = (undefined1 *)(uVar2 + 1);
        uVar17 = *(ulong *)(uVar3 + _DAT_11302a6e8);
        puVar14 = puVar15;
        if (uVar17 != 0) {
          func_0x000107c4b1dc();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar17;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(uVar17);
          if (uVar4 == uVar16 && puVar15 == puVar13) {
            _swift_bridgeObjectRelease(puVar21);
            puVar21 = puVar15;
          }
          else {
            puVar14 = puVar15;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease(puVar15);
            if ((uVar4 & 1) == 0) goto LAB_103e9e12c;
          }
          _swift_bridgeObjectRelease(puVar21);
          _swift_beginAccess(unaff_x20 + lVar5,auStack_98,0x21,0);
          _swift_bridgeObjectRetain(puVar13);
          lVar11 = unaff_x20 + lVar5;
          FUN_103e9f284(lVar11,uVar16,puVar13);
          _swift_bridgeObjectRelease(puVar13);
          uVar2 = *(ulong *)(unaff_x20 + lVar5);
          if (uVar2 >> 0x3e == 0) {
            uVar17 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar17 = uVar2 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar2) {
              uVar17 = uVar2;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if ((long)uVar17 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9e8a0);
            (*pcVar1)();
          }
          FUN_103e9f034(lVar11);
          _swift_endAccess(auStack_98);
          _objc_retain();
          if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
            puVar7 = *(undefined **)
                      (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)
                     ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
              puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
          }
          puVar8 = (undefined *)0x0;
          func_0x000103ea24a0(0,puVar7 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
          uVar17 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar17 + 0x10);
          puVar7 = puVar8;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar2) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
            func_0x000103ea24a0(puVar7,uVar2 + 1,1,puVar8);
            uVar17 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar17 + 0x10) = uVar2 + 1;
          *(ulong *)(uVar17 + uVar2 * 8 + 0x20) = uVar3;
          _objc_release(uVar3);
          puStack_b0 = puVar7;
          goto LAB_103e9e418;
        }
LAB_103e9e12c:
        _objc_release();
        uVar2 = uVar2 + 1;
      } while (puVar18 != puVar20);
    }
    _swift_bridgeObjectRelease(puVar21);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103e9e418:
    lVar11 = _DAT_11302a790;
    puVar14 = auStack_98;
    _swift_beginAccess(unaff_x20 + _DAT_11302a790,puVar14,1,0);
    puVar21 = *(undefined1 **)(unaff_x20 + lVar11);
    if ((ulong)puVar21 >> 0x3e == 0) {
      puVar20 = *(undefined1 **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar20 = (undefined1 *)((ulong)puVar21 & 0xffffffffffffff8);
      if ((undefined1 *)0x7fffffffffffffff < puVar21) {
        puVar20 = puVar21;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(puVar21);
    if (puVar20 != (undefined1 *)0x0) {
      uVar2 = 0;
      do {
        if (((ulong)puVar21 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9e830);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(puVar21 + uVar2 * 8 + 0x20);
          _objc_retain();
          puVar15 = puVar14;
        }
        else {
          uVar3 = uVar2;
          puVar15 = puVar21;
          FUN_103e9c568();
        }
        if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9e530);
          (*pcVar1)();
        }
        puVar18 = (undefined1 *)(uVar2 + 1);
        uVar17 = *(ulong *)(uVar3 + _DAT_11302a6e8);
        puVar14 = puVar15;
        if (uVar17 != 0) {
          func_0x000107c4b1dc();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar17;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(uVar17);
          if (uVar4 == uVar16 && puVar15 == puVar13) {
            _swift_bridgeObjectRelease(puVar21);
            puVar21 = puVar15;
          }
          else {
            puVar14 = puVar15;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease(puVar15);
            if ((uVar4 & 1) == 0) goto LAB_103e9e46c;
          }
          _swift_bridgeObjectRelease(puVar21);
          _swift_beginAccess(unaff_x20 + lVar11,auStack_d0,0x21,0);
          _swift_bridgeObjectRetain(puVar13);
          lVar10 = unaff_x20 + lVar11;
          FUN_103e9f284(lVar10,uVar16,puVar13);
          _swift_bridgeObjectRelease(puVar13);
          uVar2 = *(ulong *)(unaff_x20 + lVar11);
          if (uVar2 >> 0x3e == 0) {
            uVar16 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar16 = uVar2 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar2) {
              uVar16 = uVar2;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if ((long)uVar16 < lVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9e8f4);
            (*pcVar1)();
          }
          FUN_103e9f034(lVar10);
          _swift_endAccess(auStack_d0);
          _swift_bridgeObjectRelease(puVar13);
          _objc_retain();
          puVar8 = puVar7;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar8 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar7) {
                puVar8 = puVar7;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar8);
            }
            puVar9 = (undefined *)0x0;
            func_0x000103ea24a0(0,puVar8 + 1,1,puVar7);
            puVar7 = puVar9;
          }
          uVar16 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar16 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar2) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
            func_0x000103ea24a0(puVar8,uVar2 + 1,1,puVar7);
            uVar16 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar16 + 0x10) = uVar2 + 1;
          *(ulong *)(uVar16 + uVar2 * 8 + 0x20) = uVar3;
          _objc_release(uVar3);
          puStack_b0 = puVar8;
          goto LAB_103e9e678;
        }
LAB_103e9e46c:
        _objc_release();
        uVar2 = uVar2 + 1;
      } while (puVar18 != puVar20);
    }
    _swift_bridgeObjectRelease(puVar13);
    _swift_bridgeObjectRelease(puVar21);
LAB_103e9e678:
    if (((ulong)param_2 & 1) == 0) {
      lVar10 = *(long *)(unaff_x20 + lVar11);
      _swift_bridgeObjectRetain();
      FUN_103e9ed9c();
      FUN_103e9c300();
      _swift_allocObject();
      *(undefined8 *)(lVar10 + 0x18) = 3;
      *(undefined8 *)(lVar10 + 0x10) = 1;
      *(long *)(lVar10 + 0x20) = param_1;
      uVar19 = *(undefined8 *)(unaff_x20 + lVar11);
      *(long *)(unaff_x20 + lVar11) = lVar10;
      _objc_retain(param_1);
      _swift_bridgeObjectRelease(uVar19);
    }
    else {
      _swift_beginAccess(unaff_x20 + lVar5,auStack_d0,0x21,0);
      FUN_103ea2cd8();
      uVar16 = *(ulong *)(unaff_x20 + lVar5);
      uVar3 = uVar16 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar3 + 0x10);
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar16 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x000103ea24a0(uVar16,uVar2 + 1,1);
        uVar3 = uVar16 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
      *(long *)(uVar3 + uVar2 * 8 + 0x20) = param_1;
      *(ulong *)(unaff_x20 + lVar5) = uVar16;
      _swift_endAccess(auStack_d0);
      _objc_retain(param_1);
    }
    auStack_d0[0] = *(undefined8 *)(unaff_x20 + lVar5);
    uVar19 = *(undefined8 *)(unaff_x20 + lVar11);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar19);
    FUN_103e9ed9c();
    puVar7 = puStack_b0;
    uVar19 = auStack_d0[0];
    lVar11 = 0;
    FUN_103e9da44();
    _swift_bridgeObjectRetain(puVar7);
    lVar5 = lVar11;
    _objc_allocWithZone();
    *(undefined8 *)(lVar5 + _DAT_11302a720) = uVar19;
    *(undefined **)(lVar5 + _DAT_11302a728) = puVar7;
    *(undefined ***)(lVar5 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
    plVar6 = &lStack_e0;
    lStack_e0 = lVar5;
    lStack_d8 = lVar11;
    _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
    plVar12 = plVar6;
    FUN_103e9c388();
    _swift_bridgeObjectRelease(puVar7);
    _swift_allocObject(plVar12,((ulong)*(uint *)(plVar12 + 6) + 7 & 0x1fffffff8) + 8,
                       *(ushort *)((long)plVar12 + 0x34) | 7);
    plVar12[3] = 3;
    plVar12[2] = 1;
    plVar12[4] = (long)plVar6;
  }
  return;
}



/* Entry: 103e9e94c; end: 103e9ea07; -[SCLensModesPreviewSortingStrategy lensModeEffectsWithApplying:for:effectLayerType:] */

void FUN_103e9e94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103e9dd60(param_3,param_4,param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103e9ea08; end: 103e9ebeb;  */

/* WARNING: Removing unreachable block (ram,0x000103e9ebe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9ea08(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x000107c4adac();
  if ((lVar1 < 1) || (func_0x000107c4adac(), (long)param_2 < 1)) {
    lVar1 = _DAT_11302a788;
    _swift_beginAccess(unaff_x20 + _DAT_11302a788,auStack_48,0,0);
    lVar2 = _DAT_11302a790;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    _swift_beginAccess(unaff_x20 + _DAT_11302a790,auStack_60,0,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    uStack_68 = uVar6;
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar5);
    FUN_103e9ed9c();
    uVar6 = uStack_68;
    lVar2 = 0;
    FUN_103e9da44();
    lVar1 = lVar2;
    _objc_allocWithZone();
    *(undefined8 *)(lVar1 + _DAT_11302a720) = uVar6;
    *(undefined **)(lVar1 + _DAT_11302a728) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined ***)(lVar1 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
    plVar3 = &lStack_78;
    lStack_78 = lVar1;
    lStack_70 = lVar2;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
    plVar4 = plVar3;
    FUN_103e9c388();
    _swift_allocObject();
    plVar4[3] = 3;
    plVar4[2] = 1;
    plVar4[4] = (long)plVar3;
  }
  else {
    FUN_103f6c904();
    uVar6 = *param_2;
    uVar5 = param_2[1];
    _swift_bridgeObjectRetain(uVar5);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    lVar1 = param_1;
    func_0x000107c4040c();
    _objc_release(uVar6);
    lVar2 = _DAT_11302a790;
    if ((int)lVar1 != 0) {
      lVar2 = _DAT_11302a788;
    }
    _swift_beginAccess(unaff_x20 + lVar2,auStack_48,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    _swift_bridgeObjectRetain(uVar6);
    FUN_103e9f90c(param_1);
    _swift_bridgeObjectRelease(uVar6);
  }
  return;
}



/* Entry: 103e9ebec; end: 103e9ec83; -[SCLensModesPreviewSortingStrategy lensModeEffectsWithRemoving:effectLayerType:] */

void FUN_103e9ebec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103e9ea08(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103e9ec84; end: 103e9ecdf; -[SCLensModesPreviewSortingStrategy init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9ec84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_1 + _DAT_11302a788) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(param_1 + _DAT_11302a790) = puVar1;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e9ece0; end: 103e9ed13;  */

void FUN_103e9ece0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e9ed14; end: 103e9ed9b; -[SCLensModesPreviewSortingStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9ed14(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a788));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302a790));
  return;
}



/* Entry: 103e9ed9c; end: 103e9ef37;  */

void FUN_103e9ed9c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000103e9ee88(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    func_0x000103ea5d34(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                        (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9ee84);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9ee88);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9ee80);
  (*pcVar1)();
}



/* Entry: 103e9ef38; end: 103e9f033;  */

void FUN_103e9ef38(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103e9f010);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_103e9d894(0);
  _swift_arrayDestroy(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103e9f014);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103e9f02c);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      _memmove(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103e9f030);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103e9f034);
    (*pcVar5)();
  }
  return;
}



/* Entry: 103e9f034; end: 103e9f0f7;  */

/* WARNING: Removing unreachable block (ram,0x000103e9f030) */

void FUN_103e9f034(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f0d4);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f0ec);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f0f0);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f0f8);
      (*pcVar3)();
    }
    func_0x000103e9ee88(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f010);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_103e9d894(0);
    _swift_arrayDestroy(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f014);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f02c);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        _memmove(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f030);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103e9f0f4);
  (*pcVar3)();
}



/* Entry: 103e9f0f8; end: 103e9f283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e9f0f8(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uStack_68;
  ulong uStack_58;
  
  uVar6 = param_2;
  if (param_1 >> 0x3e == 0) {
    uStack_58 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_58 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uStack_58 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uStack_68 = param_1 & 0xffffffffffffff8;
  uVar8 = 0;
  while( true ) {
    if (uStack_58 == uVar8) {
      uVar8 = 0;
      uVar5 = 1;
      goto LAB_103e9f238;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_68 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9f264);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar3 = uVar8;
      uVar6 = param_1;
      FUN_103e9c568();
    }
    uVar7 = *(ulong *)(uVar3 + _DAT_11302a6e8);
    if (uVar7 != 0) break;
    _objc_release();
LAB_103e9f150:
    bVar2 = SCARRY8(uVar8,1);
    uVar8 = uVar8 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9f268);
      (*pcVar1)();
    }
  }
  func_0x000107c4b1dc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar7);
  if (uVar4 == param_2 && uVar6 == param_3) {
    _objc_release(uVar3);
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    uVar7 = uVar6;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar4,uVar6,param_2,param_3,0);
    _objc_release(uVar3);
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uVar7;
    if ((uVar4 & 1) == 0) goto LAB_103e9f150;
  }
  uVar5 = 0;
LAB_103e9f238:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 103e9f284; end: 103e9f57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9f284(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  uint uVar12;
  ulong uVar13;
  
  uVar11 = *param_1;
  uVar4 = uVar11;
  uVar8 = param_2;
  FUN_103e9f0f8();
  if (unaff_x21 == 0) {
    if (((uint)uVar8 & 0xff) == 1) {
      if (uVar11 >> 0x3e != 0) {
        uVar4 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar4 = uVar11;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4);
      }
    }
    else {
      uVar13 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f2f4);
        (*pcVar2)();
      }
      while( true ) {
        uVar13 = uVar13 + 1;
        if (uVar11 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          uVar10 = uVar8;
        }
        else {
          uVar5 = uVar11 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar5 = uVar11;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          uVar10 = uVar8;
        }
        if (uVar13 == uVar5) break;
        if ((uVar11 & 0xc000000000000001) == 0) {
          if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f548);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f54c);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar5 = uVar13;
          uVar10 = uVar11;
          FUN_103e9c568();
        }
        uVar9 = *(ulong *)(uVar5 + _DAT_11302a6e8);
        if (uVar9 == 0) {
          _objc_release();
          uVar8 = uVar10;
joined_r0x000103e9f404:
          if (uVar4 != uVar13) {
            if ((uVar11 & 0xc000000000000001) == 0) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f55c);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f560);
                (*pcVar2)();
              }
              if (uVar5 <= uVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f564);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar11 + 0x20 + uVar4 * 8);
              uVar10 = *(ulong *)(uVar11 + 0x20 + uVar13 * 8);
              _objc_retain();
              _objc_retain();
            }
            else {
              uVar5 = uVar4;
              FUN_103e9c568(uVar4,uVar11);
              uVar10 = uVar13;
              uVar8 = uVar11;
              FUN_103e9c568();
            }
            uVar9 = uVar11;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if ((((int)uVar9 == 0) || ((long)uVar11 < 0)) || ((uVar11 >> 0x3e & 1) != 0)) {
              func_0x000103e9ed4c();
              uVar12 = (uint)(uVar11 >> 0x3e) & 1;
            }
            else {
              uVar12 = 0;
            }
            uVar9 = uVar11 & 0xffffffffffffff8;
            lVar1 = uVar9 + uVar4 * 8;
            uVar7 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar10;
            _objc_release(uVar7);
            if (((long)uVar11 < 0) || (uVar12 != 0)) {
              func_0x000103e9ed4c();
              uVar9 = uVar11 & 0xffffffffffffff8;
            }
            if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f51c);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f558);
              (*pcVar2)();
            }
            lVar1 = uVar9 + uVar13 * 8;
            uVar7 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar5;
            _objc_release(uVar7);
            *param_1 = uVar11;
          }
          bVar3 = SCARRY8(uVar4,1);
          uVar4 = uVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f554);
            (*pcVar2)();
          }
        }
        else {
          func_0x000107c4b1dc();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar9;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          uVar8 = uVar10;
          _objc_release(uVar9);
          if (uVar6 == param_2 && uVar10 == param_3) {
            _objc_release(uVar5);
            _swift_bridgeObjectRelease(uVar10);
          }
          else {
            uVar8 = uVar10;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar6,uVar10,param_2,param_3,0);
            _objc_release(uVar5);
            _swift_bridgeObjectRelease(uVar10);
            if ((uVar6 & 1) == 0) goto joined_r0x000103e9f404;
          }
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f550);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 103e9f580; end: 103e9f68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e9f580(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar8 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar6 = 0;
  do {
    if (uVar7 == uVar6) {
      uVar6 = 0;
      uVar5 = 1;
LAB_103e9f64c:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar6;
      return auVar9;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9f674);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar3 = uVar6;
      FUN_103e9c568(uVar6,param_1);
    }
    func_0x0001007bbbf8(0);
    uVar4 = *(ulong *)(uVar3 + _DAT_11302a6f0);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,param_2);
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar5 = 0;
      goto LAB_103e9f64c;
    }
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103e9f678);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 103e9f68c; end: 103e9f90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9f68c(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar9 = *param_1;
  uVar4 = uVar9;
  uVar7 = param_2;
  FUN_103e9f580();
  if (unaff_x21 == 0) {
    if (((uint)uVar7 & 0xff) == 1) {
      if (uVar9 >> 0x3e != 0) {
        uVar4 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar4 = uVar9;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4);
      }
    }
    else {
      uVar10 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f90c);
        (*pcVar2)();
      }
      while( true ) {
        uVar10 = uVar10 + 1;
        if (uVar9 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar9 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar9) {
            uVar5 = uVar9;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (uVar10 == uVar5) break;
        if ((uVar9 & 0xc000000000000001) == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8d0);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8d4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar9 + uVar10 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar5 = uVar10;
          FUN_103e9c568(uVar10,uVar9);
        }
        func_0x0001007bbbf8(0);
        uVar6 = *(ulong *)(uVar5 + _DAT_11302a6f0);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar6,param_2);
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          if (uVar4 != uVar10) {
            if ((uVar9 & 0xc000000000000001) == 0) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8e4);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8e8);
                (*pcVar2)();
              }
              if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8ec);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar9 + 0x20 + uVar4 * 8);
              uVar6 = *(ulong *)(uVar9 + 0x20 + uVar10 * 8);
              _objc_retain();
              _objc_retain();
            }
            else {
              uVar5 = uVar4;
              FUN_103e9c568(uVar4,uVar9);
              uVar6 = uVar10;
              FUN_103e9c568(uVar10,uVar9);
            }
            uVar8 = uVar9;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if ((((int)uVar8 == 0) || ((long)uVar9 < 0)) || ((uVar9 >> 0x3e & 1) != 0)) {
              func_0x000103e9ed4c();
              uVar11 = (uint)(uVar9 >> 0x3e) & 1;
            }
            else {
              uVar11 = 0;
            }
            uVar8 = uVar9 & 0xffffffffffffff8;
            lVar1 = uVar8 + uVar4 * 8;
            uVar7 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar6;
            _objc_release(uVar7);
            if (((long)uVar9 < 0) || (uVar11 != 0)) {
              func_0x000103e9ed4c();
              uVar8 = uVar9 & 0xffffffffffffff8;
            }
            if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8a4);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8e0);
              (*pcVar2)();
            }
            lVar1 = uVar8 + uVar10 * 8;
            uVar7 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar5;
            _objc_release(uVar7);
            *param_1 = uVar9;
          }
          bVar3 = SCARRY8(uVar4,1);
          uVar4 = uVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8dc);
            (*pcVar2)();
          }
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9f8d8);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 103e9f90c; end: 103e9fec7;  */

/* WARNING: Removing unreachable block (ram,0x000103e9febc) */
/* WARNING: Removing unreachable block (ram,0x000103e9feac) */
/* WARNING: Removing unreachable block (ram,0x000103e9feb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9f90c(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_c0;
  long lStack_b8;
  undefined8 auStack_b0 [4];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = _DAT_11302a788;
  _swift_beginAccess(unaff_x20 + _DAT_11302a788,auStack_78,0,0);
  uVar14 = *(ulong *)(unaff_x20 + lVar9);
  if (uVar14 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar15 = uVar14;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar14);
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9fdc4);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar14 + uVar16 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar3 = uVar16;
        FUN_103e9c568(uVar16,uVar14);
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9fdc0);
        (*pcVar2)();
      }
      func_0x0001007bbbf8(0);
      uVar4 = *(ulong *)(uVar3 + _DAT_11302a6f0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,param_1);
      if ((uVar4 & 1) != 0) {
        _swift_bridgeObjectRelease(uVar14);
        _swift_beginAccess(unaff_x20 + lVar9,auStack_90,0x21,0);
        uVar13 = param_1;
        _objc_retain(param_1);
        lVar8 = unaff_x20 + lVar9;
        FUN_103e9f68c(lVar8,uVar13);
        _objc_release(uVar13);
        uVar14 = *(ulong *)(unaff_x20 + lVar9);
        if (uVar14 >> 0x3e == 0) {
          uVar15 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar15 = uVar14 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar14) {
            uVar15 = uVar14;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if ((long)uVar15 < lVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9fe1c);
          (*pcVar2)();
        }
        FUN_103e9f034(lVar8);
        _swift_endAccess(auStack_90);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _objc_retain();
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar12) {
            puVar7 = puVar12;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar7);
        }
        puVar6 = (undefined *)0x0;
        func_0x000103ea24a0(0,puVar7 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar15 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar15 + 0x10);
        puVar12 = puVar6;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar14) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          func_0x000103ea24a0(puVar12,uVar14 + 1,1,puVar6);
          uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar14 + 1;
        *(ulong *)(uVar15 + uVar14 * 8 + 0x20) = uVar3;
        _objc_release(uVar3);
        goto LAB_103e9faf8;
      }
      _objc_release(uVar3);
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar15);
  }
  _swift_bridgeObjectRelease(uVar14);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_103e9faf8:
  lVar8 = _DAT_11302a790;
  _swift_beginAccess(unaff_x20 + _DAT_11302a790,auStack_90,0,0);
  uVar14 = *(ulong *)(unaff_x20 + lVar8);
  if (uVar14 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar15 = uVar14;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar14);
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9fdcc);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar14 + uVar16 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar3 = uVar16;
        FUN_103e9c568(uVar16,uVar14);
      }
      uVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9fdc8);
        (*pcVar2)();
      }
      func_0x0001007bbbf8(0);
      uVar4 = *(ulong *)(uVar3 + _DAT_11302a6f0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar4,param_1);
      if ((uVar4 & 1) != 0) {
        _swift_bridgeObjectRelease(uVar14);
        _swift_beginAccess(unaff_x20 + lVar8,auStack_b0,0x21,0);
        _objc_retain(param_1);
        lVar5 = unaff_x20 + lVar8;
        FUN_103e9f68c(lVar5,param_1);
        _objc_release(param_1);
        uVar14 = *(ulong *)(unaff_x20 + lVar8);
        if (uVar14 >> 0x3e == 0) {
          uVar15 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar15 = uVar14 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar14) {
            uVar15 = uVar14;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if ((long)uVar15 < lVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103e9fe74);
          (*pcVar2)();
        }
        FUN_103e9f034(lVar5);
        _swift_endAccess(auStack_b0);
        _objc_retain();
        puVar7 = puVar12;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar7 == 0) || ((long)puVar12 < 0)) ||
           (puVar7 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar6 = puVar12;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar6);
          }
          puVar7 = (undefined *)0x0;
          func_0x000103ea24a0(0,puVar6 + 1,1,puVar12);
        }
        uVar15 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar15 + 0x10);
        puVar12 = puVar7;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar14) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          func_0x000103ea24a0(puVar12,uVar14 + 1,1,puVar7);
          uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar14 + 1;
        *(ulong *)(uVar15 + uVar14 * 8 + 0x20) = uVar3;
        _objc_release(uVar3);
        goto LAB_103e9fcc0;
      }
      _objc_release(uVar3);
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar15);
  }
  _swift_bridgeObjectRelease(uVar14);
LAB_103e9fcc0:
  auStack_b0[0] = *(undefined8 *)(unaff_x20 + lVar9);
  uVar13 = *(undefined8 *)(unaff_x20 + lVar8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar13);
  FUN_103e9ed9c();
  uVar13 = auStack_b0[0];
  lVar8 = 0;
  FUN_103e9da44();
  _swift_bridgeObjectRetain(puVar12);
  lVar9 = lVar8;
  _objc_allocWithZone();
  *(undefined8 *)(lVar9 + _DAT_11302a720) = uVar13;
  *(undefined **)(lVar9 + _DAT_11302a728) = puVar12;
  *(undefined ***)(lVar9 + _DAT_11302a730) = &PTR____CFConstantStringClassReference_110f77198;
  plVar10 = &lStack_c0;
  lStack_c0 = lVar9;
  lStack_b8 = lVar8;
  _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
  plVar11 = plVar10;
  FUN_103e9c388();
  _swift_bridgeObjectRelease(puVar12);
  _swift_allocObject(plVar11,((ulong)*(uint *)(plVar11 + 6) + 7 & 0x1fffffff8) + 8,
                     *(ushort *)((long)plVar11 + 0x34) | 7);
  plVar11[3] = 3;
  plVar11[2] = 1;
  plVar11[4] = (long)plVar10;
  return;
}



/* Entry: 103e9fec8; end: 103e9fee7;  */

void FUN_103e9fec8(void)

{
  _objc_opt_self(&PTR_PTR_11295e528);
  return;
}



/* Entry: 103e9fee8; end: 103e9ffef;  */

uint FUN_103e9fee8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      func_0x0001000e2834(0);
      uVar2 = *(ulong *)(param_2 + 0x28);
      __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
      uVar5 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar2 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
        do {
          uVar3 = *(ulong *)(*(long *)(param_2 + 0x30) + uVar2 * 8);
          _objc_retain();
          uVar4 = uVar3;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar6 = (uint)uVar4;
          _objc_release(uVar3);
          if ((uVar4 & 1) != 0) break;
          uVar2 = uVar2 + 1 & ~uVar5;
        } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
        goto LAB_103e9ffd4;
      }
    }
    uVar6 = 0;
  }
  else {
    _objc_retain(param_1);
    uVar1 = param_1;
    __ss10__CocoaSetV8containsySbyXlF();
    uVar6 = (uint)uVar1;
    _objc_release(param_1);
  }
LAB_103e9ffd4:
  return uVar6 & 1;
}



/* Entry: 103e9fff0; end: 103ea00a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e9fff0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302a7c0;
  lVar2 = *(long *)(unaff_x20 + _DAT_11302a7c0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_11302a7e0);
    func_0x000107c5ba0c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    lVar2 = lVar3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(lVar3,uVar4);
    _objc_release(lVar3);
    lVar3 = lVar2;
    FUN_103ea00a8();
    _swift_bridgeObjectRelease(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = 0;
  }
  _swift_bridgeObjectRetain(lVar2);
  return lVar3;
}



/* Entry: 103ea00a8; end: 103ea01cf;  */

undefined * FUN_103ea00a8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar5 != 0) {
    func_0x000103ea276c(0,lVar5,0);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar2 = puStack_68;
      uStack_78 = *puVar6;
      _swift_bridgeObjectRetain();
      uVar3 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = 0x11302a820;
      func_0x0001000285a8(0x11302a820,&UNK_10dca5bc8);
      _swift_dynamicCast(&uStack_70,&uStack_78,uVar3,uVar4,7);
      uVar3 = uStack_70;
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000103ea276c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 8 + 0x20) = uVar3;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
  return puStack_68;
}



/* Entry: 103ea01d0; end: 103ea020f;  */

undefined8 FUN_103ea01d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103ea6290(param_1);
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Entry: 103ea0210; end: 103ea0493;  */

undefined * FUN_103ea0210(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 auStack_98 [4];
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  uVar1 = param_1 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar13 = *(ulong *)(param_1 + 0x10);
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    __ss17__CocoaDictionaryV5countSivg();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar9 = uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_103ea2740(0,uVar9,0);
    if (uVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 0x20);
      _swift_bridgeObjectRetain(param_1);
      uVar12 = param_1 + 0x40;
      __ss10_HashTableV11startBucketAB0D0Vvg(uVar12,~(-1L << ((ulong)bVar2 & 0x3f)));
      uVar9 = (ulong)*(uint *)(param_1 + 0x24);
      _swift_bridgeObjectRelease(param_1);
      cStack_68 = '\0';
    }
    else {
      uVar12 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar12 = param_1;
      }
      __ss17__CocoaDictionaryV10startIndexAB0D0Vvg();
      cStack_68 = '\x01';
    }
    uStack_78 = uVar12;
    uStack_70 = uVar9;
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea0490);
      (*pcVar6)();
    }
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    do {
      while( true ) {
        cVar5 = cStack_68;
        uVar4 = uStack_70;
        uVar12 = uStack_78;
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea048c);
          (*pcVar6)();
        }
        func_0x000103ea6004(auStack_98,uStack_78,uStack_70,cStack_68,param_1);
        _objc_release();
        uVar8 = auStack_98[0];
        uVar7 = *(ulong *)(puVar3 + 0x10);
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar7) {
          FUN_103ea2740(1 < *(ulong *)(puVar3 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar3 + uVar7 * 8 + 0x20) = uVar8;
        if (uVar1 == 0) break;
        if (cVar5 != '\x01') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea0494);
          (*pcVar6)();
        }
        __ss17__CocoaDictionaryV5IndexV16handleBitPatternSuvg(uVar12,uVar4);
        if (uVar12 == 0) {
          uVar12 = 1;
        }
        else {
          _swift_isUniquelyReferenced_nonNull_native();
        }
        uVar8 = 0x11302a838;
        func_0x0001000285a8(0x11302a838,&UNK_10dca5be8);
        pcVar6 = (code *)auStack_98;
        __sSD5IndexV8_asCocoas02__C10DictionaryVAAVvM(pcVar6,uVar8);
        __ss17__CocoaDictionaryV9formIndex5after8isUniqueyAB0D0Vz_SbtF(uVar8,uVar12,uVar9);
        (*pcVar6)(auStack_98,0);
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_103ea0454;
      }
      _swift_bridgeObjectRetain(param_1);
      uVar7 = uVar12;
      uVar10 = uVar4;
      cVar11 = cVar5;
      func_0x000103ea5ec0();
      FUN_103ea829c(uVar12,uVar4,cVar5);
      _swift_bridgeObjectRelease(param_1);
      uVar13 = uVar13 - 1;
      uStack_78 = uVar7;
      uStack_70 = uVar10;
      cStack_68 = cVar11;
    } while (uVar13 != 0);
LAB_103ea0454:
    FUN_103ea829c(uStack_78,uStack_70,cStack_68);
  }
  return puVar3;
}



/* Entry: 103ea0494; end: 103ea04d3; -[SCLensModesStackSortingStrategy initWithLensStackingConfiguration:] */

undefined8 FUN_103ea0494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_3;
  FUN_103ea6290(param_3);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Entry: 103ea04d4; end: 103ea084b;  */

/* WARNING: Removing unreachable block (ram,0x000103ea0838) */
/* WARNING: Removing unreachable block (ram,0x000103ea0818) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ea04d4(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *apuStack_78 [3];
  
  uVar11 = param_1;
  func_0x000107c4adac();
  if ((0 < (long)uVar11) &&
     (uVar11 = param_1, FUN_103ea084c(param_1,*(undefined8 *)(unaff_x20 + _DAT_11302a7d8)),
     lVar10 = _DAT_11302a7e8, puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8, (uVar11 & 1) != 0))
  {
    ppuVar7 = apuStack_78;
    _swift_beginAccess(unaff_x20 + _DAT_11302a7e8,ppuVar7,0x20,0);
    lVar10 = *(long *)(unaff_x20 + lVar10);
    if (*(long *)(lVar10 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar10);
      func_0x000101913e60();
      if (((ulong)ppuVar7 & 1) != 0) {
        puVar3 = *(undefined **)(*(long *)(lVar10 + 0x38) + param_1 * 8);
        _swift_bridgeObjectRetain();
        _swift_endAccess(apuStack_78);
        _swift_bridgeObjectRelease(lVar10);
        uVar11 = *(ulong *)(unaff_x20 + _DAT_11302a7f0);
        apuStack_78[0] = puVar12;
        _swift_bridgeObjectRetain(uVar11);
        func_0x000103ea27a4(0,0,0);
        puVar12 = apuStack_78[0];
        if (uVar11 >> 0x3e == 0) {
          uVar13 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar13 = uVar11 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar13 = uVar11;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (uVar13 != 0) {
          uVar14 = 0;
          do {
            if ((uVar11 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea06b8);
                (*pcVar2)();
              }
              uVar4 = *(ulong *)(uVar11 + uVar14 * 8 + 0x20);
              _objc_retain();
            }
            else {
              uVar4 = uVar14;
              FUN_103e9c3a4(uVar14,uVar11);
            }
            if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea06b4);
              (*pcVar2)();
            }
            uVar15 = uVar14 + 1;
            uVar1 = *(ulong *)(puVar12 + 0x10);
            apuStack_78[0] = puVar12;
            if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
              func_0x000103ea27a4(1 < *(ulong *)(puVar12 + 0x18),uVar1 + 1,1);
            }
            *(ulong *)(apuStack_78[0] + 0x10) = uVar1 + 1;
            *(ulong *)(apuStack_78[0] + uVar1 * 0x10 + 0x20) = uVar4;
            *(ulong *)(apuStack_78[0] + uVar1 * 0x10 + 0x28) = uVar14;
            uVar14 = uVar14 + 1;
            puVar12 = apuStack_78[0];
          } while (uVar15 != uVar13);
        }
        _swift_bridgeObjectRelease(uVar11);
        puVar9 = *(undefined **)(puVar12 + 0x10);
        puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
        if (puVar9 != (undefined *)0x0) {
          uVar5 = 0x11302a830;
          func_0x0001000285a8(0x11302a830,&UNK_10dca5bd8);
          __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar9,uVar5);
          puVar6 = puVar9;
        }
        apuStack_78[0] = puVar6;
        _swift_retain(puVar12);
        FUN_103ea30b8();
        _swift_release(puVar12);
        puVar12 = apuStack_78[0];
        FUN_103ea0a2c();
        puVar6 = puVar3;
        FUN_103ea0210();
        _swift_bridgeObjectRelease(puVar3);
        if ((ulong)puVar6 >> 0x3e == 0) {
          _swift_retain(puVar12);
          _swift_bridgeObjectRetain(puVar6);
          puVar9 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar3 = puVar6;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          _swift_retain(puVar12);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar3 != (undefined *)0x0) {
            _swift_bridgeObjectRetain(puVar6);
            puVar9 = puVar3;
            FUN_103ea25c8(puVar3,0);
            puVar8 = puVar6;
            func_0x000103ea5d34(puVar9 + 0x20,puVar3);
            _swift_bridgeObjectRelease();
            if (puVar8 != puVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea0808);
              (*pcVar2)();
            }
          }
        }
        apuStack_78[0] = puVar9;
        FUN_103ea7804(apuStack_78,puVar12);
        _swift_bridgeObjectRelease(puVar6);
        _swift_release_n(puVar12,2);
        return apuStack_78[0];
      }
      _swift_bridgeObjectRelease(lVar10);
    }
    _swift_endAccess(apuStack_78);
  }
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 103ea084c; end: 103ea0933;  */

bool FUN_103ea084c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar5 == uVar4) break;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea0920);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_2 + uVar4 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar2 = uVar4;
      FUN_103e9c3a4(uVar4,param_2);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea091c);
      (*pcVar1)();
    }
    func_0x0001000e2834(0);
    uVar3 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,param_1);
    _objc_release(uVar2);
    uVar2 = uVar4 + 1;
  } while ((uVar3 & 1) == 0);
  return uVar5 != uVar4;
}



/* Entry: 103ea0934; end: 103ea0a0b;  */

undefined8 FUN_103ea0934(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar3 = param_2;
      _swift_bridgeObjectRetain(param_2);
      func_0x000101913e60();
      if ((uVar3 & 1) != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        _objc_retain(uVar2);
        _swift_bridgeObjectRelease(param_2);
        return uVar2;
      }
      _swift_bridgeObjectRelease(param_2);
    }
  }
  else {
    _objc_retain();
    lVar1 = param_1;
    __ss17__CocoaDictionaryV6lookupyyXlSgyXlF();
    _objc_release(param_1);
    if (lVar1 != 0) {
      uVar2 = 0;
      lStack_30 = lVar1;
      FUN_103e9d894(0);
      _swift_dynamicCast(&uStack_28,&lStack_30,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_28;
    }
  }
  return 0;
}



/* Entry: 103ea0a0c; end: 103ea0a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103ea0a0c(undefined8 param_1,long *param_2)

{
  return *(long *)(*param_2 + _DAT_11302a6e8) != 0;
}



/* Entry: 103ea0a2c; end: 103ea0c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ** FUN_103ea0a2c(undefined8 **param_1,undefined8 ***param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 **ppuStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  ppuVar10 = (undefined8 **)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    ppuVar10 = param_1;
    FUN_103ea43ec();
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    ppuVar5 = (undefined8 **)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 **)0x7fffffffffffffff < param_1) {
      ppuVar5 = param_1;
    }
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    ppuVar6 = ppuVar5;
    __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
    if (ppuVar6 != (undefined8 **)0x0) {
      uVar7 = 0;
      func_0x0001000e2834(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        ppuStack_78 = ppuVar6;
        _swift_dynamicCast(&puStack_68,&ppuStack_78,puVar2 + 8,uVar7,7);
        uVar8 = 0;
        ppuStack_78 = param_2;
        FUN_103e9d894(0);
        param_2 = &ppuStack_78;
        _swift_dynamicCast(&lStack_70,param_2,puVar2 + 8,uVar8,7);
        ppuVar6 = (undefined8 **)puStack_68;
        lVar3 = lStack_70;
        if (*(long *)(lStack_70 + _DAT_11302a6e8) == 0) {
          _objc_release(lStack_70);
          _objc_release();
        }
        else {
          uVar12 = *(ulong *)((long)ppuVar10 + 0x10);
          if (uVar12 < *(ulong *)((long)ppuVar10 + 0x18)) {
            _objc_retain(puStack_68);
          }
          else {
            _objc_retain(puStack_68);
            param_2 = (undefined8 ***)0x1;
            FUN_103ea3cc4(uVar12 + 1);
          }
          uVar9 = *(ulong *)((long)ppuVar10 + 0x28);
          __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
          uVar13 = -1L << ((ulong)*(byte *)((long)ppuVar10 + 0x20) & 0x3f);
          uVar9 = uVar9 & (uVar13 ^ 0xffffffffffffffff);
          uVar11 = uVar9 >> 6;
          uVar12 = -1L << (uVar9 & 0x3f) &
                   (*(ulong *)((long)ppuVar10 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
          if (uVar12 == 0) {
            bVar1 = false;
            uVar12 = 0x3f - uVar13 >> 6;
            do {
              uVar9 = uVar11 + 1;
              if ((uVar9 == uVar12) && (bVar1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103ea0c90);
                (*pcVar4)();
              }
              uVar11 = 0;
              if (uVar9 != uVar12) {
                uVar11 = uVar9;
              }
              bVar1 = (bool)(uVar9 == uVar12 | bVar1);
            } while (*(ulong *)((long)ppuVar10 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
            uVar12 = ~*(ulong *)((long)ppuVar10 + uVar11 * 8 + 0x40);
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 << 6;
          }
          else {
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar9 & 0x7fffffffffffffc0;
          }
          uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)ppuVar10 + uVar11 + 0x40) =
               1L << (uVar12 & 0x3f) | *(ulong *)((long)ppuVar10 + uVar11 + 0x40);
          *(undefined8 ***)(*(long *)((long)ppuVar10 + 0x30) + uVar12 * 8) = ppuVar6;
          *(long *)(*(long *)((long)ppuVar10 + 0x38) + uVar12 * 8) = lVar3;
          _objc_release();
          *(long *)((long)ppuVar10 + 0x10) = *(long *)((long)ppuVar10 + 0x10) + 1;
        }
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      } while (ppuVar6 != (undefined8 **)0x0);
    }
    func_0x000100d7107c((ulong)ppuVar5 | 0x8000000000000000,0,0,0,0);
  }
  return ppuVar10;
}



/* Entry: 103ea0c90; end: 103ea0e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ea0c90(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puVar12 = *(undefined **)(unaff_x20 + _DAT_11302a7d8);
  if ((ulong)puVar12 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      puVar13 = puVar12;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    puVar10 = (undefined *)((ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU));
    func_0x000103ea27c0(0,puVar10,0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea0e74);
      (*pcVar3)();
    }
    puVar14 = (undefined *)0x0;
    do {
      puVar2 = puStack_68;
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        puVar4 = *(undefined **)(puVar12 + (long)puVar14 * 8 + 0x20);
        _objc_retain();
      }
      else {
        puVar4 = puVar14;
        puVar10 = puVar12;
        FUN_103e9c3a4();
      }
      puVar5 = puVar4;
      FUN_103ea04d4();
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (*(long *)(param_1 + 0x10) != 0) {
        _swift_bridgeObjectRetain(param_1);
        puVar6 = puVar4;
        func_0x000101913e60();
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (((ulong)puVar10 & 1) != 0) {
          puVar11 = *(undefined **)(*(long *)(param_1 + 0x38) + (long)puVar6 * 8);
          _swift_bridgeObjectRetain(puVar11);
        }
        _swift_bridgeObjectRelease(param_1);
      }
      lVar7 = 0;
      FUN_103e9da44();
      lVar8 = lVar7;
      _objc_allocWithZone();
      *(undefined **)(lVar8 + _DAT_11302a720) = puVar5;
      *(undefined **)(lVar8 + _DAT_11302a728) = puVar11;
      *(undefined **)(lVar8 + _DAT_11302a730) = puVar4;
      plVar9 = &lStack_78;
      puVar10 = PTR_s_init_1125d9248;
      lStack_78 = lVar8;
      lStack_70 = lVar7;
      _objc_msgSendSuper2();
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puVar4 = (undefined *)(uVar1 + 1);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        puVar10 = puVar4;
        func_0x000103ea27c0(1 < *(ulong *)(puVar2 + 0x18),puVar4,1);
      }
      puVar14 = puVar14 + 1;
      *(undefined **)(puStack_68 + 0x10) = puVar4;
      *(long **)(puStack_68 + uVar1 * 8 + 0x20) = plVar9;
    } while (puVar13 != puVar14);
  }
  return puStack_68;
}



/* Entry: 103ea0e74; end: 103ea0ed3; -[SCLensModesStackSortingStrategy init] */

void FUN_103ea0e74(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensProcessingLensMode.LensModesStackSortingStrategy",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea0ea0);
  (*pcVar1)();
}



/* Entry: 103ea0ed4; end: 103ea0f5b; -[SCLensModesStackSortingStrategy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea0ed4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a7c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a7c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a7d0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a7d8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a7e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a7e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302a7f0));
  return;
}



/* Entry: 103ea0f5c; end: 103ea12e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ea0f5c(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined *puVar13;
  long lVar14;
  long lStack_88;
  long lStack_80;
  undefined *apuStack_78 [3];
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103e9b704();
  lVar3 = param_1;
  func_0x000107c4adac();
  if (((lVar3 < 1) || (uVar4 = param_2, func_0x000107c4adac(), (long)uVar4 < 1)) ||
     (uVar4 = param_2, FUN_103ea084c(param_2,*(undefined8 *)(unaff_x20 + _DAT_11302a7d8)),
     lVar3 = _DAT_11302a7e8, (uVar4 & 1) == 0)) {
    puVar6 = puVar2;
    FUN_103ea0c90(puVar2);
    goto LAB_103ea10d0;
  }
  ppuVar10 = apuStack_78;
  _swift_beginAccess(unaff_x20 + _DAT_11302a7e8,ppuVar10,0x20,0);
  lVar14 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_103ea1108:
    _swift_endAccess(apuStack_78);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_bridgeObjectRetain(lVar14);
    uVar4 = param_2;
    func_0x000101913e60();
    if (((ulong)ppuVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      goto LAB_103ea1108;
    }
    puVar13 = *(undefined **)(*(long *)(lVar14 + 0x38) + uVar4 * 8);
    _swift_bridgeObjectRetain(puVar13);
    _swift_endAccess(apuStack_78);
    _swift_bridgeObjectRelease(lVar14);
    lVar14 = param_1;
    FUN_103ea0934(param_1,puVar13);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar14 != 0) {
      if (*(long *)(lVar14 + _DAT_11302a6e8) != 0) {
        _objc_retain();
        if ((ulong)puVar6 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            puVar5 = puVar6;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
        }
        puVar6 = (undefined *)0x0;
        func_0x000103ea24a0(0,puVar5 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar12 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar4 = *(ulong *)(uVar12 + 0x10);
        puVar5 = puVar6;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar4) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          func_0x000103ea24a0(puVar5,uVar4 + 1,1,puVar6);
          uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar4 + 1;
        *(long *)(uVar12 + uVar4 * 8 + 0x20) = lVar14;
      }
      _objc_release();
    }
    lVar7 = 0;
    FUN_103e9d894();
    lVar14 = lVar7;
    _objc_allocWithZone();
    *(undefined8 *)(lVar14 + _DAT_11302a6e8) = 0;
    *(long *)(lVar14 + _DAT_11302a6f0) = param_1;
    puVar6 = PTR_s_init_1125d9248;
    lStack_88 = lVar14;
    lStack_80 = lVar7;
    _objc_retain(param_1);
    plVar8 = &lStack_88;
    _objc_msgSendSuper2(plVar8,puVar6);
    puVar6 = puVar13;
    if (((ulong)puVar13 & 0xc000000000000001) != 0) {
      puVar6 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar13) {
        puVar6 = puVar13;
      }
      puVar13 = puVar6;
      __ss17__CocoaDictionaryV5countSivg();
      if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea12a8);
        (*pcVar1)();
      }
      FUN_103ea3400(puVar6,puVar13 + 1);
    }
    puVar13 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    apuStack_78[0] = puVar6;
    FUN_103ea377c(plVar8,param_1,puVar13);
    puVar6 = apuStack_78[0];
    _swift_bridgeObjectRetain(puVar5);
    puVar13 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar2);
    apuStack_78[0] = puVar2;
    FUN_103ea3624(puVar5,param_2,puVar13,0x11302a680,&UNK_10dca5aa8);
    puVar2 = apuStack_78[0];
    _swift_beginAccess(unaff_x20 + lVar3,apuStack_78,0x21,0);
    _objc_retain(param_2);
    _swift_retain(puVar6);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
    _swift_isUniquelyReferenced_nonNull_native(uVar9);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = 0x8000000000000000;
    FUN_103ea3624(puVar6,param_2,uVar9,0x11302a688,&UNK_10dca5ab0);
    _objc_release(param_2);
    *(undefined8 *)(unaff_x20 + lVar3) = uVar11;
    _swift_endAccess(apuStack_78);
    _swift_release(puVar6);
  }
  puVar6 = puVar2;
  FUN_103ea0c90(puVar2);
  _swift_bridgeObjectRelease(puVar5);
LAB_103ea10d0:
  _swift_bridgeObjectRelease(puVar2);
  return puVar6;
}



/* Entry: 103ea12e8; end: 103ea137f; -[SCLensModesStackSortingStrategy lensModeEffectsWithRemoving:effectLayerType:] */

void FUN_103ea12e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103ea0f5c(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ea1380; end: 103ea23e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ****** FUN_103ea1380(undefined8 param_1,undefined8 *****param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *****pppppuVar24;
  undefined8 ******ppppppuVar25;
  ulong uVar26;
  undefined8 ******ppppppuVar27;
  undefined8 ******ppppppuVar28;
  undefined8 ******ppppppuVar29;
  undefined8 *****pppppuStack_168;
  long lStack_140;
  undefined8 ****ppppuStack_138;
  long lStack_110;
  long lStack_108;
  undefined8 *****pppppuStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 *****apppppuStack_c0 [3];
  undefined8 auStack_a8 [3];
  undefined8 *****pppppuStack_90;
  undefined8 *****pppppuStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 ****ppppuStack_70;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pppppuStack_168 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103e9b704();
  pppppuVar24 = param_2;
  func_0x000107c4adac();
  ppppppuVar12 = (undefined8 ******)pppppuStack_168;
  if ((0 < (long)pppppuVar24) && (uVar8 = param_3, func_0x000107c4adac(), 0 < (long)uVar8)) {
    uVar19 = *(ulong *)(unaff_x20 + _DAT_11302a7d8);
    uVar8 = param_3;
    FUN_103ea084c();
    lVar5 = _DAT_11302a7e8;
    if ((uVar8 & 1) != 0) {
      ppppppuVar27 = &pppppuStack_90;
      _swift_beginAccess(unaff_x20 + _DAT_11302a7e8,ppppppuVar27,0x20,0);
      lVar21 = *(long *)(unaff_x20 + lVar5);
      if (*(long *)(lVar21 + 0x10) == 0) {
LAB_103ea1600:
        _swift_endAccess(&pppppuStack_90);
      }
      else {
        _swift_bridgeObjectRetain(lVar21);
        uVar8 = param_3;
        func_0x000101913e60();
        if (((ulong)ppppppuVar27 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar21);
          goto LAB_103ea1600;
        }
        ppppppuVar27 = *(undefined8 *******)(*(long *)(lVar21 + 0x38) + uVar8 * 8);
        _swift_bridgeObjectRetain(ppppppuVar27);
        _swift_endAccess(&pppppuStack_90);
        _swift_bridgeObjectRelease(lVar21);
        pppppuVar24 = param_2;
        FUN_103ea0934(param_2,ppppppuVar27);
        if (pppppuVar24 == (undefined8 *****)0x0) {
          FUN_103ea0c90(pppppuStack_168);
          _swift_bridgeObjectRelease(pppppuStack_168);
          pppppuStack_168 = ppppppuVar27;
          goto LAB_103ea15d0;
        }
        _objc_release();
        lVar9 = 0;
        FUN_103e9d894();
        lVar21 = lVar9;
        _objc_allocWithZone();
        *(undefined8 *)(lVar21 + _DAT_11302a6e8) = param_1;
        *(undefined8 ******)(lVar21 + _DAT_11302a6f0) = param_2;
        puVar4 = PTR_s_init_1125d9248;
        lStack_110 = lVar21;
        lStack_108 = lVar9;
        _objc_retain(param_1);
        pppppuVar24 = param_2;
        _objc_retain(param_2);
        plVar10 = &lStack_110;
        _objc_msgSendSuper2(plVar10,puVar4);
        ppppppuVar12 = ppppppuVar27;
        if (((ulong)ppppppuVar27 & 0xc000000000000001) != 0) {
          ppppppuVar12 = (undefined8 ******)((ulong)ppppppuVar27 & 0xffffffffffffff8);
          if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar27) {
            ppppppuVar12 = ppppppuVar27;
          }
          ppppppuVar27 = ppppppuVar12;
          __ss17__CocoaDictionaryV5countSivg();
          if (SCARRY8((long)ppppppuVar27,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea2190);
            (*pcVar6)();
          }
          FUN_103ea3400(ppppppuVar12,(undefined *)((long)ppppppuVar27 + 1));
        }
        ppppppuVar27 = ppppppuVar12;
        _swift_isUniquelyReferenced_nonNull_native(ppppppuVar12);
        pppppuStack_90 = ppppppuVar12;
        FUN_103ea377c(plVar10,pppppuVar24,ppppppuVar27);
        pppppuVar24 = pppppuStack_90;
        _swift_beginAccess(unaff_x20 + lVar5,&pppppuStack_90,0x21,0);
        _objc_retain(param_3);
        _swift_retain(pppppuVar24);
        uVar11 = *(undefined8 *)(unaff_x20 + lVar5);
        _swift_isUniquelyReferenced_nonNull_native(uVar11);
        auStack_a8[0] = *(undefined8 *)(unaff_x20 + lVar5);
        *(undefined8 *)(unaff_x20 + lVar5) = 0x8000000000000000;
        FUN_103ea3624(pppppuVar24,param_3,uVar11,0x11302a688,&UNK_10dca5ab0);
        _objc_release(param_3);
        *(undefined8 *)(unaff_x20 + lVar5) = auStack_a8[0];
        _swift_endAccess(&pppppuStack_90);
        _swift_release(pppppuVar24);
      }
      ppppppuVar12 = *(undefined8 *******)(unaff_x20 + _DAT_11302a7d0);
      FUN_103ea04d4();
      FUN_103ea04d4(*(undefined8 *)(unaff_x20 + _DAT_11302a7c8));
      pppppuStack_90 = ppppppuVar12;
      FUN_103e9ed9c();
      ppppppuVar12 = (undefined8 ******)pppppuStack_90;
      if ((ulong)pppppuStack_90 >> 0x3e == 0) {
        ppppppuVar27 = *(undefined8 *******)(((ulong)pppppuStack_90 & 0xffffffffffffff8) + 0x10);
        if (ppppppuVar27 != (undefined8 ******)0x0) goto LAB_103ea1658;
LAB_103ea17ec:
        _swift_bridgeObjectRelease(ppppppuVar12);
        ppppppuVar13 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppppuVar27 = (undefined8 ******)((ulong)pppppuStack_90 & 0xffffffffffffff8);
        if ((undefined8 ******)0x7fffffffffffffff < pppppuStack_90) {
          ppppppuVar27 = (undefined8 ******)pppppuStack_90;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (ppppppuVar27 == (undefined8 ******)0x0) goto LAB_103ea17ec;
LAB_103ea1658:
        pppppuStack_90 = (undefined8 *****)puVar3;
        func_0x000103ea27ec(0,(ulong)ppppppuVar27 &
                              ((long)ppppppuVar27 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)ppppppuVar27 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea2188);
          (*pcVar6)();
        }
        if (((ulong)ppppppuVar12 & 0xc000000000000001) == 0) {
          ppppppuVar25 = ppppppuVar12 + 4;
          ppppppuVar13 = (undefined8 ******)pppppuStack_90;
          do {
            lVar21 = _DAT_11302a6f0;
            pppppuVar24 = *ppppppuVar25;
            _swift_beginAccess((long)pppppuVar24 + _DAT_11302a6f0,auStack_a8,0,0);
            pppppuVar14 = *(undefined8 ******)((long)pppppuVar24 + lVar21);
            pppppuVar24 = ppppppuVar13[2];
            pppppuVar2 = ppppppuVar13[3];
            pppppuStack_90 = ppppppuVar13;
            _objc_retain();
            if ((undefined8 *****)((ulong)pppppuVar2 >> 1) <= pppppuVar24) {
              func_0x000103ea27ec((undefined8 *****)0x1 < pppppuVar2,
                                  (undefined8 *****)((long)pppppuVar24 + 1U),1);
              ppppppuVar13 = (undefined8 ******)pppppuStack_90;
            }
            ppppppuVar13[2] = (undefined8 *****)((long)pppppuVar24 + 1U);
            ppppppuVar13[(long)pppppuVar24 + 4] = pppppuVar14;
            ppppppuVar27 = (undefined8 ******)((long)ppppppuVar27 + -1);
            ppppppuVar25 = ppppppuVar25 + 1;
          } while (ppppppuVar27 != (undefined8 ******)0x0);
        }
        else {
          ppppppuVar25 = (undefined8 ******)0x0;
          do {
            pppppuVar2 = pppppuStack_90;
            ppppppuVar13 = ppppppuVar25;
            FUN_103e9c568(ppppppuVar25,ppppppuVar12);
            lVar21 = _DAT_11302a6f0;
            _swift_beginAccess((undefined *)((long)ppppppuVar13 + _DAT_11302a6f0),auStack_a8,0,0);
            pppppuVar14 = *(undefined8 ******)((long)ppppppuVar13 + lVar21);
            _objc_retain();
            _swift_unknownObjectRelease(ppppppuVar13);
            pppppuVar24 = (undefined8 *****)pppppuVar2[2];
            pppppuStack_90 = pppppuVar2;
            if ((undefined8 *****)((ulong)pppppuVar2[3] >> 1) <= pppppuVar24) {
              func_0x000103ea27ec((undefined8 *****)0x1 < pppppuVar2[3],
                                  (undefined8 *****)((long)pppppuVar24 + 1U),1);
            }
            ppppppuVar25 = (undefined8 ******)((long)ppppppuVar25 + 1);
            pppppuStack_90[2] = (undefined8 *****)((long)pppppuVar24 + 1U);
            pppppuStack_90[(long)pppppuVar24 + 4] = pppppuVar14;
            ppppppuVar13 = (undefined8 ******)pppppuStack_90;
          } while (ppppppuVar27 != ppppppuVar25);
        }
        _swift_bridgeObjectRelease(ppppppuVar12);
      }
      FUN_103e9fff0();
      ppppppuVar27 = ppppppuVar13;
      FUN_103ea7a88(ppppppuVar13,ppppppuVar12,param_2);
      _swift_bridgeObjectRelease(ppppppuVar12);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11302a7e0);
      ppppppuVar12 = ppppppuVar27;
      _swift_bridgeObjectRetain();
      FUN_103ea8150();
      _swift_bridgeObjectRelease(ppppppuVar27);
      ppppppuVar25 = ppppppuVar12;
      func_0x000103ea2190();
      _swift_bridgeObjectRelease(ppppppuVar12);
      ppppppuVar12 = ppppppuVar25;
      __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF
                (ppppppuVar25,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      _swift_bridgeObjectRelease(ppppppuVar25);
      func_0x000107c5c828(uVar11);
      _objc_release();
      if ((ulong)ppppppuVar27 >> 0x3e == 0) {
        if (*(long *)(((ulong)ppppppuVar27 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_103ea18f0;
      }
      else {
        ppppppuVar12 = (undefined8 ******)((ulong)ppppppuVar27 & 0xffffffffffffff8);
        if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar27) {
          ppppppuVar12 = ppppppuVar27;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        if (ppppppuVar12 != (undefined8 ******)0x0) goto LAB_103ea18f0;
        ppppppuVar12 = (undefined8 ******)0x0;
      }
      FUN_103e9c294();
      _swift_allocObject();
      ppppppuVar12[3] = (undefined8 *****)0x3;
      ppppppuVar12[2] = (undefined8 *****)0x1;
      _swift_bridgeObjectRelease(ppppppuVar27);
      ppppppuVar12[4] = param_2;
      _objc_retain(param_2);
      ppppppuVar27 = ppppppuVar12;
LAB_103ea18f0:
      lVar21 = _DAT_11302a7f0;
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11302a7f0);
      *(undefined8 *******)(unaff_x20 + _DAT_11302a7f0) = ppppppuVar27;
      _swift_bridgeObjectRetain(ppppppuVar27);
      _swift_bridgeObjectRelease(uVar11);
      uVar22 = *(ulong *)(unaff_x20 + lVar21);
      uVar8 = uVar22;
      _swift_bridgeObjectRetain();
      FUN_103ea8150();
      _swift_bridgeObjectRelease(uVar22);
      if ((ulong)ppppppuVar13 >> 0x3e == 0) {
        ppppppuVar12 = *(undefined8 *******)(((ulong)ppppppuVar13 & 0xffffffffffffff8) + 0x10);
        ppppppuVar25 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppppuVar12 = (undefined8 ******)((ulong)ppppppuVar13 & 0xffffffffffffff8);
        if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar13) {
          ppppppuVar12 = ppppppuVar13;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        ppppppuVar25 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)ppppppuVar25;
      if (ppppppuVar12 != (undefined8 ******)0x0) {
        ppppppuVar28 = (undefined8 ******)0x0;
        do {
          while( true ) {
            if (((ulong)ppppppuVar13 & 0xc000000000000001) == 0) {
              if (*(undefined8 *******)(((ulong)ppppppuVar13 & 0xffffffffffffff8) + 0x10) <=
                  ppppppuVar28) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea1b3c);
                (*pcVar6)();
              }
              ppppppuVar15 = (undefined8 ******)ppppppuVar13[(long)((long)ppppppuVar28 + 4)];
              _objc_retain();
            }
            else {
              ppppppuVar15 = ppppppuVar28;
              FUN_103e9c3a4(ppppppuVar28,ppppppuVar13);
            }
            bVar7 = SCARRY8((long)ppppppuVar28,1);
            ppppppuVar28 = (undefined8 ******)((long)ppppppuVar28 + 1);
            if (bVar7) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea1b38);
              (*pcVar6)();
            }
            if ((uVar8 & 0xc000000000000001) != 0) break;
            if (*(long *)(uVar8 + 0x10) != 0) {
              func_0x0001000e2834(0);
              uVar22 = *(ulong *)(uVar8 + 0x28);
              __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
              uVar20 = -1L << ((ulong)*(byte *)(uVar8 + 0x20) & 0x3f);
              uVar22 = uVar22 & (uVar20 ^ 0xffffffffffffffff);
              if ((*(ulong *)(uVar8 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0) {
                do {
                  uVar23 = *(ulong *)(*(long *)(uVar8 + 0x30) + uVar22 * 8);
                  _objc_retain();
                  uVar26 = uVar23;
                  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                  _objc_release(uVar23);
                  if ((uVar26 & 1) != 0) goto LAB_103ea19ec;
                  uVar22 = uVar22 + 1 & ~uVar20;
                } while ((*(ulong *)(uVar8 + 0x38 + (uVar22 >> 6) * 8) >> (uVar22 & 0x3f) & 1) != 0)
                ;
              }
            }
LAB_103ea1aa8:
            ppppppuVar29 = ppppppuVar25;
            _swift_isUniquelyReferenced_nonNull_native();
            pppppuStack_90 = ppppppuVar25;
            if (((ulong)ppppppuVar29 & 1) == 0) {
              func_0x000103ea27ec(0,(long)ppppppuVar25[2] + 1,1);
            }
            pppppuVar24 = (undefined8 *****)pppppuStack_90[2];
            if ((undefined8 *****)((ulong)pppppuStack_90[3] >> 1) <= pppppuVar24) {
              func_0x000103ea27ec((undefined8 *****)0x1 < pppppuStack_90[3],
                                  (undefined8 *****)((long)pppppuVar24 + 1U),1);
            }
            pppppuStack_90[2] = (undefined8 *****)((long)pppppuVar24 + 1U);
            pppppuStack_90[(long)pppppuVar24 + 4] = ppppppuVar15;
            ppppppuVar25 = (undefined8 ******)pppppuStack_90;
            if (ppppppuVar28 == ppppppuVar12) goto LAB_103ea1b78;
          }
          ppppppuVar29 = ppppppuVar15;
          _objc_retain();
          ppppppuVar16 = ppppppuVar29;
          __ss10__CocoaSetV8containsySbyXlF();
          _objc_release(ppppppuVar29);
          if (((ulong)ppppppuVar16 & 1) == 0) goto LAB_103ea1aa8;
LAB_103ea19ec:
          _objc_release(ppppppuVar15);
        } while (ppppppuVar28 != ppppppuVar12);
      }
LAB_103ea1b78:
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(ppppppuVar13);
      ppppppuVar12 = ppppppuVar25;
      FUN_103ea8150();
      _swift_release();
      if (((ulong)ppppppuVar12 & 0xc000000000000001) == 0) {
        lStack_78 = 0;
        uVar20 = -1L << ((ulong)*(byte *)(ppppppuVar12 + 4) & 0x3f);
        ppppppuVar13 = ppppppuVar12 + 7;
        uVar22 = ~uVar20;
        uVar20 = -uVar20;
        uVar8 = 0xffffffffffffffff;
        if (uVar20 < 0x40) {
          uVar8 = ~(-1L << (uVar20 & 0x3f));
        }
        ppppuStack_70 = (undefined8 ****)(uVar8 & (ulong)*ppppppuVar13);
      }
      else {
        ppppppuVar25 = (undefined8 ******)((ulong)ppppppuVar12 & 0xffffffffffffff8);
        if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar12) {
          ppppppuVar25 = ppppppuVar12;
        }
        __ss10__CocoaSetV12makeIteratorAB0D0CyF();
        uVar17 = 0;
        func_0x0001000e2834(0);
        uVar11 = uVar17;
        func_0x000101fd99f8();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC
                  (&pppppuStack_90,ppppppuVar25,uVar17,uVar11);
        ppppppuVar13 = (undefined8 ******)pppppuStack_88;
        uVar22 = uStack_80;
        ppppppuVar12 = (undefined8 ******)pppppuStack_90;
      }
      uVar20 = uVar19 & 0xffffffffffffff8;
      uVar8 = uVar20;
      if (0x7fffffffffffffff < uVar19) {
        uVar8 = uVar19;
      }
      lStack_140 = lStack_78;
      ppppuStack_138 = ppppuStack_70;
joined_r0x000103ea1c64:
      lVar21 = lStack_140;
      pppppuVar24 = (undefined8 *****)ppppuStack_138;
      if (-1 < (long)ppppppuVar12) goto joined_r0x000103ea1c90;
LAB_103ea1ce4:
      __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      if (ppppppuVar25 != (undefined8 ******)0x0) {
        uVar11 = 0;
        pppppuStack_100 = ppppppuVar25;
        func_0x0001000e2834(0);
        _swift_dynamicCast(apppppuStack_c0,&pppppuStack_100,PTR___syXlN_11034f1a0 + 8,uVar11,7);
        ppppppuVar28 = (undefined8 ******)apppppuStack_c0[0];
        lVar21 = lStack_140;
        pppppuVar24 = (undefined8 *****)ppppuStack_138;
        if ((undefined8 ******)apppppuStack_c0[0] != (undefined8 ******)0x0) {
LAB_103ea1d28:
          ppppuStack_138 = pppppuVar24;
          lStack_140 = lVar21;
          if (uVar19 >> 0x3e == 0) {
            uVar26 = *(ulong *)(uVar20 + 0x10);
          }
          else {
            uVar26 = uVar8;
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar26 != 0) {
            lVar21 = 4;
            do {
              uVar23 = lVar21 - 4;
              if ((uVar19 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar20 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea2180);
                  (*pcVar6)();
                }
                uVar18 = *(ulong *)(uVar19 + lVar21 * 8);
                _objc_retain();
              }
              else {
                uVar18 = uVar23;
                FUN_103e9c3a4(uVar23,uVar19);
              }
              uVar1 = lVar21 - 3;
              if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea217c);
                (*pcVar6)();
              }
              ppppppuVar15 = apppppuStack_c0;
              _swift_beginAccess(unaff_x20 + lVar5,ppppppuVar15,0x20,0);
              lVar9 = *(long *)(unaff_x20 + lVar5);
              if (*(long *)(lVar9 + 0x10) == 0) {
LAB_103ea1d50:
                _swift_endAccess(apppppuStack_c0);
                _objc_release(uVar18);
              }
              else {
                _swift_bridgeObjectRetain(lVar9);
                uVar23 = uVar18;
                func_0x000101913e60();
                if (((ulong)ppppppuVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(lVar9);
                  goto LAB_103ea1d50;
                }
                ppppppuVar29 = *(undefined8 *******)(*(long *)(lVar9 + 0x38) + uVar23 * 8);
                _swift_bridgeObjectRetain(ppppppuVar29);
                _swift_endAccess(apppppuStack_c0);
                _swift_bridgeObjectRelease(lVar9);
                if (((ulong)ppppppuVar29 & 0xc000000000000001) == 0) {
                  if (ppppppuVar29[2] != (undefined8 *****)0x0) {
                    _swift_bridgeObjectRetain(ppppppuVar29);
                    ppppppuVar25 = ppppppuVar28;
                    func_0x000101913e60();
                    if (((ulong)ppppppuVar15 & 1) != 0) {
                      apppppuStack_c0[0] = (undefined8 *****)ppppppuVar29[7][(long)ppppppuVar25];
                      _objc_retain();
                      ppppppuVar16 = ppppppuVar29;
                      _swift_bridgeObjectRelease();
                      pppppuVar24 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
                      ppppppuVar25 = (undefined8 ******)apppppuStack_c0[0];
                      goto joined_r0x000103ea1eac;
                    }
                    _swift_bridgeObjectRelease(ppppppuVar29);
                  }
LAB_103ea1ee0:
                  apppppuStack_c0[0] = (undefined8 ******)0x0;
LAB_103ea1ee4:
                  _swift_bridgeObjectRelease(ppppppuVar29);
                }
                else {
                  ppppppuVar25 = ppppppuVar28;
                  _objc_retain();
                  ppppppuVar15 = ppppppuVar25;
                  __ss17__CocoaDictionaryV6lookupyyXlSgyXlF();
                  _objc_release(ppppppuVar25);
                  if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_103ea1ee0;
                  uVar11 = 0;
                  pppppuStack_100 = ppppppuVar15;
                  FUN_103e9d894(0);
                  ppppppuVar16 = apppppuStack_c0;
                  ppppppuVar15 = &pppppuStack_100;
                  _swift_dynamicCast(ppppppuVar16,ppppppuVar15,PTR___syXlN_11034f1a0 + 8,uVar11,7);
                  pppppuVar24 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
                  ppppppuVar25 = (undefined8 ******)apppppuStack_c0[0];
joined_r0x000103ea1eac:
                  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)pppppuVar24;
                  apppppuStack_c0[0] = ppppppuVar25;
                  if (ppppppuVar25 == (undefined8 ******)0x0) goto LAB_103ea1ee4;
                  if (*(long *)((long)ppppppuVar25 + _DAT_11302a6e8) != 0) goto LAB_103ea1efc;
                  _swift_bridgeObjectRelease(ppppppuVar29);
                  _objc_release(ppppppuVar25);
                }
                _objc_release(uVar18);
              }
              lVar21 = lVar21 + 1;
              if (uVar1 == uVar26) break;
            } while( true );
          }
          _objc_release();
          ppppppuVar25 = ppppppuVar28;
          goto joined_r0x000103ea1c64;
        }
      }
LAB_103ea213c:
      func_0x000100d7107c(ppppppuVar12,ppppppuVar13,uVar22,lStack_140,ppppuStack_138);
      ppppppuVar12 = (undefined8 ******)pppppuStack_168;
      FUN_103ea0c90(pppppuStack_168);
      _swift_bridgeObjectRelease(pppppuStack_168);
      pppppuStack_168 = ppppppuVar27;
      goto LAB_103ea15d0;
    }
  }
  FUN_103ea0c90(pppppuStack_168);
LAB_103ea15d0:
  _swift_bridgeObjectRelease(pppppuStack_168);
  return ppppppuVar12;
LAB_103ea1efc:
  if ((undefined8 *****)pppppuStack_168[2] != (undefined8 *****)0x0) {
    _swift_bridgeObjectRetain(pppppuStack_168);
    uVar26 = uVar18;
    func_0x000101913e60();
    pppppuVar24 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)ppppppuVar15 & 1) != 0) {
      pppppuVar24 = (undefined8 *****)pppppuStack_168[7][uVar26];
      _swift_bridgeObjectRetain(pppppuVar24);
    }
    ppppppuVar16 = (undefined8 ******)pppppuStack_168;
    _swift_bridgeObjectRelease();
  }
  FUN_103e9c300();
  _swift_initStackObject();
  ppppppuVar16[3] = (undefined8 *****)0x3;
  ppppppuVar16[2] = (undefined8 *****)0x1;
  ppppppuVar16[4] = ppppppuVar25;
  apppppuStack_c0[0] = pppppuVar24;
  _objc_retain();
  FUN_103e9ed9c(ppppppuVar16);
  pppppuVar24 = apppppuStack_c0[0];
  _objc_retain(uVar18);
  ppppppuVar15 = (undefined8 ******)pppppuStack_168;
  _swift_isUniquelyReferenced_nonNull_native(pppppuStack_168);
  apppppuStack_c0[0] = pppppuStack_168;
  FUN_103ea3624(pppppuVar24,uVar18,ppppppuVar15,0x11302a680,&UNK_10dca5aa8);
  _objc_release(uVar18);
  pppppuStack_168 = apppppuStack_c0[0];
  lVar9 = 0;
  FUN_103e9d894();
  lVar21 = lVar9;
  _objc_allocWithZone();
  *(undefined8 *)(lVar21 + _DAT_11302a6e8) = 0;
  *(undefined8 *******)(lVar21 + _DAT_11302a6f0) = ppppppuVar28;
  puVar3 = PTR_s_init_1125d9248;
  lStack_f8 = lVar21;
  lStack_f0 = lVar9;
  _objc_retain(ppppppuVar28);
  plVar10 = &lStack_f8;
  _objc_msgSendSuper2(plVar10,puVar3);
  ppppppuVar15 = ppppppuVar29;
  if (((ulong)ppppppuVar29 & 0xc000000000000001) != 0) {
    ppppppuVar15 = (undefined8 ******)((ulong)ppppppuVar29 & 0xffffffffffffff8);
    if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar29) {
      ppppppuVar15 = ppppppuVar29;
    }
    ppppppuVar29 = ppppppuVar15;
    __ss17__CocoaDictionaryV5countSivg();
    if (SCARRY8((long)ppppppuVar29,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea218c);
      (*pcVar6)();
    }
    FUN_103ea3400(ppppppuVar15,(undefined *)((long)ppppppuVar29 + 1));
  }
  ppppppuVar29 = ppppppuVar15;
  _swift_isUniquelyReferenced_nonNull_native(ppppppuVar15);
  apppppuStack_c0[0] = ppppppuVar15;
  FUN_103ea377c(plVar10,ppppppuVar28,ppppppuVar29);
  pppppuVar24 = apppppuStack_c0[0];
  _swift_beginAccess(unaff_x20 + lVar5,apppppuStack_c0,0x21,0);
  _swift_retain(pppppuVar24);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  pppppuStack_100 = *(undefined8 ******)(unaff_x20 + lVar5);
  *(undefined8 *)(unaff_x20 + lVar5) = 0x8000000000000000;
  FUN_103ea3624(pppppuVar24,uVar18,uVar11,0x11302a688,&UNK_10dca5ab0);
  _objc_release(uVar18);
  *(undefined8 ******)(unaff_x20 + lVar5) = pppppuStack_100;
  _swift_endAccess(apppppuStack_c0);
  _swift_release(pppppuVar24);
  _objc_release(ppppppuVar28);
  _objc_release();
  lVar21 = lStack_140;
  pppppuVar24 = (undefined8 *****)ppppuStack_138;
  if ((long)ppppppuVar12 < 0) goto LAB_103ea1ce4;
joined_r0x000103ea1c90:
  while (pppppuVar24 == (undefined8 *****)0x0) {
    lVar9 = lVar21 + 1;
    if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea2184);
      (*pcVar6)();
    }
    if ((long)(uVar22 + 0x40 >> 6) <= lVar9) {
      ppppuStack_138 = (undefined8 *****)0x0;
      goto LAB_103ea213c;
    }
    lVar21 = lVar9;
    pppppuVar24 = ppppppuVar13[lVar9];
  }
  uVar26 = ((ulong)pppppuVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 |
           ((ulong)pppppuVar24 & 0x5555555555555555) << 1;
  uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
  uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
  uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
  ppppppuVar28 = (undefined8 ******)
                 ppppppuVar12[6][LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) + lVar21 * 0x40];
  _objc_retain(ppppppuVar28);
  pppppuVar24 = (undefined8 *****)((long)pppppuVar24 - 1U & (ulong)pppppuVar24);
  if (ppppppuVar28 == (undefined8 ******)0x0) goto LAB_103ea213c;
  goto LAB_103ea1d28;
}



/* Entry: 103ea23e4; end: 103ea25c7; -[SCLensModesStackSortingStrategy lensModeEffectsWithApplying:for:effectLayerType:] */

void FUN_103ea23e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103ea1380(param_3,param_4,param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  uVar2 = 0;
  FUN_103e9da44(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103ea25c8; end: 103ea2647;  */

undefined * FUN_103ea25c8(undefined *param_1,undefined *param_2)

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
    FUN_103e9c300();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103ea2648; end: 103ea273f;  */

long FUN_103ea2648(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea273c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea2740);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103e9d894(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103e9d894(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea2738);
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



/* Entry: 103ea2740; end: 103ea2817;  */

void FUN_103ea2740(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103ea2ba8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103ea2818; end: 103ea2ba7;  */

undefined * FUN_103ea2818(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea2948);
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
    puVar3 = (undefined *)0x11302a828;
    func_0x0001000285a8(0x11302a828,&UNK_10dca5bd0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x11302a820;
    func_0x0001000285a8(0x11302a820,&UNK_10dca5bc8);
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



/* Entry: 103ea2ba8; end: 103ea2cd7;  */

undefined *
FUN_103ea2ba8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             code *param_6)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea2cd8);
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
    (*param_5)();
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
    (*param_6)(0);
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



/* Entry: 103ea2cd8; end: 103ea2d47;  */

void FUN_103ea2cd8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
    }
    uVar2 = 0;
    func_0x000103ea24a0(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 103ea2d48; end: 103ea30b7;  */

void FUN_103ea2d48(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar10 = *param_3;
    uVar5 = param_2;
    _objc_retain();
    _objc_retain();
    uVar11 = uVar3;
    func_0x000101913e60();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_103ea2ffc:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea3000);
      (*pcVar2)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      uVar8 = (ulong)((uint)param_2 & 1);
      FUN_103ea3cc4(lVar1);
      uVar11 = uVar3;
      func_0x000101913e60();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_103ea2df4:
        func_0x0001000e2834(0);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea2e04);
        (*pcVar2)();
      }
    }
    else {
      uVar8 = uVar5;
      if ((param_2 & 1) == 0) {
        FUN_103ea38b0();
      }
    }
    if ((uVar5 & 1) != 0) {
LAB_103ea2e0c:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      _swift_allocError(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,0,
                        0);
      _swift_willThrow();
      _swift_errorRetain(puVar4);
      uVar13 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      _swift_dynamicCast();
      if ((uVar13 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        _objc_release(uVar3);
        _objc_release(uVar6);
        _swift_errorRelease(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1e);
      __sSS6appendyySSF(0xd00000000000001b,0x800000010efbd6e0);
      uVar6 = 0;
      uStack_78 = uVar3;
      func_0x0001000e2834(0);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&uStack_78,&uStack_70,uVar6,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,uStack_70,uStack_68,"Swift/arm64e-apple-ios.swiftinterface",
                 0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea30b8);
      (*pcVar2)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar11 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar11 & 0x3f);
    *(ulong *)(*(long *)(lVar7 + 0x30) + uVar11 * 8) = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar11 * 8) = uVar6;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_103ea3000:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea3004);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar13 != 1) {
      puVar12 = (undefined8 *)(param_1 + 0x38);
      uVar11 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea3008);
          (*pcVar2)();
        }
        uVar3 = puVar12[-1];
        uVar6 = *puVar12;
        lVar10 = *param_3;
        _objc_retain();
        _objc_retain();
        uVar5 = uVar3;
        func_0x000101913e60();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_103ea2ffc;
        uVar9 = uVar8;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          uVar9 = 1;
          FUN_103ea3cc4(lVar1);
          uVar5 = uVar3;
          func_0x000101913e60();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_103ea2df4;
        }
        if ((uVar8 & 1) != 0) goto LAB_103ea2e0c;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        *(ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 8) = uVar3;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar6;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_103ea3000;
        uVar11 = uVar11 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar12 = puVar12 + 2;
        uVar8 = uVar9;
      } while (uVar13 != uVar11);
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Entry: 103ea30b8; end: 103ea33ff;  */

void FUN_103ea30b8(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar10 = *param_3;
    uVar5 = param_2;
    _objc_retain();
    uVar11 = uVar3;
    func_0x000101913e60();
    lVar7 = *(long *)(lVar10 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar1 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) {
LAB_103ea3344:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea3348);
      (*pcVar2)();
    }
    if (*(long *)(lVar10 + 0x18) < lVar1) {
      uVar8 = (ulong)((uint)param_2 & 1);
      func_0x000103ea3f2c(lVar1);
      uVar11 = uVar3;
      func_0x000101913e60();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_103ea3154:
        func_0x0001000e2834(0);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea3164);
        (*pcVar2)();
      }
    }
    else {
      uVar8 = uVar5;
      if ((param_2 & 1) == 0) {
        func_0x000103ea3a14();
      }
    }
    if ((uVar5 & 1) != 0) {
LAB_103ea316c:
      puVar4 = PTR___ss11_MergeErrorON_11034e460;
      _swift_allocError(PTR___ss11_MergeErrorON_11034e460,PTR___ss11_MergeErrorOs0B0sWP_11034e468,0,
                        0);
      _swift_willThrow();
      _swift_errorRetain(puVar4);
      uVar13 = 0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      _swift_dynamicCast();
      if ((uVar13 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        _objc_release(uVar3);
        _swift_errorRelease(puVar4);
        return;
      }
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x1e);
      __sSS6appendyySSF(0xd00000000000001b,0x800000010efbd6e0);
      uVar6 = 0;
      uStack_78 = uVar3;
      func_0x0001000e2834(0);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&uStack_78,&uStack_70,uVar6,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,uStack_70,uStack_68,"Swift/arm64e-apple-ios.swiftinterface",
                 0x25,2,0x3c44,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea3400);
      (*pcVar2)();
    }
    lVar7 = *param_3;
    lVar1 = lVar7 + (uVar11 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar11 & 0x3f);
    *(ulong *)(*(long *)(lVar7 + 0x30) + uVar11 * 8) = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar11 * 8) = uVar6;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_103ea3348:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea334c);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    if (uVar13 != 1) {
      puVar12 = (undefined8 *)(param_1 + 0x38);
      uVar11 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea3350);
          (*pcVar2)();
        }
        uVar3 = puVar12[-1];
        uVar6 = *puVar12;
        lVar10 = *param_3;
        _objc_retain();
        uVar5 = uVar3;
        func_0x000101913e60();
        lVar7 = *(long *)(lVar10 + 0x10);
        uVar9 = (ulong)~(uint)uVar8 & 1;
        lVar1 = lVar7 + uVar9;
        if (SCARRY8(lVar7,uVar9)) goto LAB_103ea3344;
        uVar9 = uVar8;
        if (*(long *)(lVar10 + 0x18) < lVar1) {
          uVar9 = 1;
          func_0x000103ea3f2c(lVar1);
          uVar5 = uVar3;
          func_0x000101913e60();
          if (((uint)uVar8 & 1) != ((uint)uVar9 & 1)) goto LAB_103ea3154;
        }
        if ((uVar8 & 1) != 0) goto LAB_103ea316c;
        lVar7 = *param_3;
        lVar1 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
        *(ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 8) = uVar3;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar5 * 8) = uVar6;
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_103ea3348;
        uVar11 = uVar11 + 1;
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
        puVar12 = puVar12 + 2;
        uVar8 = uVar9;
      } while (uVar13 != uVar11);
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Entry: 103ea3400; end: 103ea3623;  */

undefined * FUN_103ea3400(undefined *param_1,undefined1 **param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined1 **)0x0) {
    _swift_unknownObjectRelease();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x11302a840,&UNK_10dca5bf8);
    puVar5 = param_1;
    __ss18_DictionaryStorageC7convert_8capacityAByxq_Gs07__CocoaA0V_SitFZ();
    puStack_68 = puVar5;
    __ss17__CocoaDictionaryV12makeIteratorAB0D0CyF();
    puVar7 = param_1;
    __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      func_0x0001000e2834(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        _swift_dynamicCast(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar8 = 0;
        puStack_80 = (undefined1 *)param_2;
        FUN_103e9d894(0);
        param_2 = &puStack_80;
        _swift_dynamicCast(&puStack_78,&puStack_80,puVar2 + 8,uVar8,7);
        uVar8 = uStack_70;
        puVar3 = puStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          param_2 = (undefined1 **)0x1;
          FUN_103ea3cc4(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
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
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103ea3624);
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
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = uVar8;
        *(undefined **)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = puVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        __ss17__CocoaDictionaryV8IteratorC4nextyXl3key_yXl5valuetSgyF();
      } while (puVar7 != (undefined *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar5;
}



/* Entry: 103ea3624; end: 103ea377b;  */

void FUN_103ea3624(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000101913e60();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea3700);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x000103ea418c(lVar5,param_3,param_4,param_5);
    uVar2 = param_2;
    func_0x000101913e60();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x0001000e2834(0);
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea36c8);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000103ea3b70(param_4,param_5);
    lVar5 = *unaff_x20;
    goto joined_r0x000103ea371c;
  }
  lVar5 = *unaff_x20;
joined_r0x000103ea371c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea377c);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 103ea377c; end: 103ea38af;  */

void FUN_103ea377c(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000101913e60();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea3840);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_103ea3cc4(lVar5);
    uVar2 = param_2;
    func_0x000101913e60();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x0001000e2834(0);
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea380c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_103ea38b0();
    lVar5 = *unaff_x20;
    goto joined_r0x000103ea3854;
  }
  lVar5 = *unaff_x20;
joined_r0x000103ea3854:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea38b0);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 103ea38b0; end: 103ea3cc3;  */

void FUN_103ea38b0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x0001000285a8(0x11302a840,&UNK_10dca5bf8);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      _memmove(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_103ea398c;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar9;
        _objc_retain();
        _objc_retain(uVar9);
        if (uVar5 != 0) break;
LAB_103ea398c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea3a14);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_103ea39ec;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_103ea39ec:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103ea3cc4; end: 103ea43eb;  */

void FUN_103ea3cc4(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x11302a840;
  func_0x0001000285a8(0x11302a840,&UNK_10dca5bf8);
  lVar4 = lVar12;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar12,lVar1,param_2,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_103ea3ef8:
    _swift_release(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea3f28);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar16 & 0x3f);
            }
            else {
              _bzero(puVar13,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_103ea3ef8;
        }
        uVar16 = puVar13[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      _objc_retain(uVar11);
      _objc_retain(uVar14);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea3f2c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 103ea43ec; end: 103ea45f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103ea43ec(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *unaff_x21;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_60;
  undefined *apuStack_58 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  uVar14 = uVar13 * 8;
  if ((param_1[0x20] & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    iVar4 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    _swift_retain(param_1);
    if ((iVar4 == 0) ||
       (uVar12 = uVar14, _swift_stdlib_isStackAllocationSafe(uVar14,8), (uVar12 & 1) == 0)) {
      _swift_slowAlloc(uVar14,0xffffffffffffffff);
      _swift_retain(param_1);
      FUN_103ea61c4(apuStack_58,uVar14,uVar13,param_1,FUN_103ea0a0c,0,&puStack_60);
      puVar5 = apuStack_58[0];
      if (unaff_x21 != (undefined *)0x0) {
        puVar5 = puStack_60;
      }
      puVar7 = (undefined *)0xffffffffffffffff;
      _swift_slowDealloc(uVar14,0xffffffffffffffff);
      puVar1 = puVar5;
      goto joined_r0x000103ea45ac;
    }
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined *)((long)apuStack_58 + (-8 - (uVar14 + 0xf & 0x3ffffffffffffff0)));
  _bzero(puVar5,uVar14);
  puVar7 = param_1;
  FUN_103ea45f4(puVar5,uVar13);
  puVar1 = unaff_x21;
joined_r0x000103ea45ac:
  if (unaff_x21 == (undefined *)0x0) {
    _swift_release();
  }
  else {
    iVar4 = 2;
    puVar7 = (undefined *)0x0;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      puVar7 = PTR___ss5ErrorWS_11034ee10;
      _swift_willThrowTypedImpl(&puStack_60,uVar6);
    }
    _swift_release();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar8 = 0;
  lVar9 = 0;
  uVar13 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(puVar7 + 0x40);
  do {
    lVar10 = lVar9;
    if (uVar14 == 0) {
      do {
        lVar9 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea46ec);
          (*pcVar2)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar9) {
          FUN_103ea4884();
          return param_1;
        }
        uVar14 = *(ulong *)((long)(puVar7 + 0x40) + lVar9 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar14 == 0);
      uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar9 * 0x40;
    }
    else {
      uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar9 << 6;
    }
    if (*(long *)(*(long *)(*(long *)(puVar7 + 0x38) + uVar12 * 8) + _DAT_11302a6e8) != 0) {
      uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar12 & 0x3f);
      bVar3 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea46d4);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 103ea45f4; end: 103ea46eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea45f4(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = 0;
  lVar4 = 0;
  uVar5 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(param_3 + 0x40);
  do {
    lVar7 = lVar4;
    if (uVar6 == 0) {
      do {
        lVar4 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea46ec);
          (*pcVar1)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar4) {
          FUN_103ea4884();
          return;
        }
        uVar6 = ((ulong *)(param_3 + 0x40))[lVar4];
        lVar7 = lVar7 + 1;
      } while (uVar6 == 0);
      uVar9 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar4 * 0x40;
    }
    else {
      uVar9 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar4 << 6;
    }
    if (*(long *)(*(long *)(*(long *)(param_3 + 0x38) + uVar9 * 8) + _DAT_11302a6e8) != 0) {
      uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar9 & 0x3f);
      bVar2 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea46d4);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 103ea46ec; end: 103ea4883;  */

void FUN_103ea46ec(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long lStack_90;
  ulong uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lStack_90 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uStack_78 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uStack_78 = ~(-1L << (uVar7 & 0x3f));
  }
  uStack_78 = uStack_78 & *(ulong *)(param_3 + 0x40);
  lVar6 = 0;
  do {
    if (uStack_78 == 0) {
      do {
        lVar9 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4884);
          (*pcVar1)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
          FUN_103ea4884(param_1,param_2,lStack_90,param_3);
          return;
        }
        uStack_78 = ((ulong *)(param_3 + 0x40))[lVar9];
        lVar6 = lVar6 + 1;
      } while (uStack_78 == 0);
      uVar5 = (uStack_78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_78 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_78 = uStack_78 - 1 & uStack_78;
    }
    else {
      uVar5 = (uStack_78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_78 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uStack_78 = uStack_78 - 1 & uStack_78;
      lVar9 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5);
    uVar8 = uVar5 | lVar9 << 6;
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x30) + uVar8 * 8);
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 8);
    uStack_68 = uVar10;
    uStack_58 = uVar3;
    _objc_retain();
    _objc_retain(uVar10);
    puVar4 = &uStack_58;
    (*param_4)(puVar4,&uStack_68);
    _objc_release(uVar3);
    _objc_release(uVar10);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar9;
    if (((ulong)puVar4 & 1) != 0) {
      uVar8 = (uVar5 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar5 & 0x3f);
      bVar2 = SCARRY8(lStack_90,1);
      lStack_90 = lStack_90 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea484c);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 103ea4884; end: 103ea4a9f;  */

undefined * FUN_103ea4884(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      _swift_retain(param_4);
      puVar3 = param_4;
    }
    else {
      func_0x0001000285a8(0x11302a840,&UNK_10dca5bf8);
      puVar3 = param_3;
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      if (param_2 < 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = *param_1;
      }
      lVar6 = 0;
      do {
        if (uVar9 == 0) {
          do {
            lVar12 = lVar6 + 1;
            if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4a98);
              (*pcVar1)();
            }
            if (param_2 <= lVar12) {
              return puVar3;
            }
            uVar9 = param_1[lVar12];
            lVar6 = lVar6 + 1;
          } while (uVar9 == 0);
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar12 = lVar6;
        }
        uVar5 = LZCOUNT(uVar5) | lVar12 << 6;
        uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar5 * 8);
        uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar5 * 8);
        uVar11 = *(ulong *)(puVar3 + 0x28);
        _objc_retain();
        _objc_retain();
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar11 = uVar11 & (uVar8 ^ 0xffffffffffffffff);
        uVar7 = uVar11 >> 6;
        uVar5 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar3 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar5 == 0) {
          bVar2 = false;
          uVar5 = 0x3f - uVar8 >> 6;
          do {
            uVar11 = uVar7 + 1;
            if ((uVar11 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4a9c);
              (*pcVar1)();
            }
            uVar7 = 0;
            if (uVar11 != uVar5) {
              uVar7 = uVar11;
            }
            bVar2 = (bool)(uVar11 == uVar5 | bVar2);
          } while (*(ulong *)(puVar3 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
          uVar5 = ~*(ulong *)(puVar3 + uVar7 * 8 + 0x40);
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
        }
        else {
          uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar7 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar3 + uVar7 + 0x40)
        ;
        *(undefined8 *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
        *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar10;
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        bVar2 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4aa0);
          (*pcVar1)();
        }
        lVar6 = lVar12;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar3;
}



/* Entry: 103ea4aa0; end: 103ea4c6f;  */

/* WARNING: Removing unreachable block (ram,0x000103ea4c1c) */
/* WARNING: Removing unreachable block (ram,0x000103ea4c2c) */

undefined1 * FUN_103ea4aa0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 *apuStack_78 [3];
  undefined8 *puStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &uStack_80;
  uVar6 = (1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar5 = uVar6 << 3;
  uStack_80 = param_1;
  lStack_58 = param_2;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 0xe) {
LAB_103ea4b00:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar3 = auStack_90 + -(uVar5 + 0xf & 0x1ffffffffffffff0);
    _bzero(puVar3);
    FUN_103ea4c70(puVar3,uVar6,param_1,param_2);
  }
  else {
    iVar2 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if ((iVar2 != 0) &&
       (uVar4 = uVar5, _swift_stdlib_isStackAllocationSafe(uVar5,8), (uVar4 & 1) != 0))
    goto LAB_103ea4b00;
    _swift_slowAlloc(uVar5,0xffffffffffffffff);
    if (uVar5 == 0) goto LAB_103ea4c18;
    _bzero();
    FUN_103ea82b0(apuStack_78,uVar5,uVar6);
    _swift_slowDealloc(uVar5,0xffffffffffffffff,0xffffffffffffffff);
    puVar3 = apuStack_78[0];
  }
  _swift_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
LAB_103ea4c18:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4c1c);
  (*pcVar1)();
}



/* Entry: 103ea4c70; end: 103ea4ea3;  */

void FUN_103ea4c70(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_80;
  ulong uStack_70;
  
  if (param_3 >> 0x3e == 0) {
    uStack_70 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_70 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uStack_70 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uStack_80 = param_3 & 0xffffffffffffff8;
  lVar7 = 0;
  uVar11 = 0;
  do {
    while( true ) {
      if (uVar11 == uStack_70) {
        _swift_retain(param_4);
        FUN_103ea5690(param_1,param_2,lVar7,param_4);
        return;
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uStack_80 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4e80);
          (*pcVar1)();
        }
        uVar3 = *(ulong *)(param_3 + 0x20 + uVar11 * 8);
        _objc_retain(uVar3);
      }
      else {
        uVar3 = uVar11;
        FUN_103e9c3a4(uVar11,param_3);
      }
      bVar2 = SCARRY8(uVar11,1);
      uVar11 = uVar11 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4e7c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x28);
      __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
      uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
      uVar4 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
      uVar10 = uVar4 >> 6;
      uVar9 = 1L << (uVar4 & 0x3f);
      if ((uVar9 & *(ulong *)(param_4 + 0x38 + uVar10 * 8)) != 0) break;
LAB_103ea4ce8:
      _objc_release(uVar3);
    }
    func_0x0001000e2834(0);
    uVar5 = *(ulong *)(*(long *)(param_4 + 0x30) + uVar4 * 8);
    _objc_retain();
    uVar6 = uVar5;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      do {
        uVar4 = uVar4 + 1 & ~uVar8;
        uVar10 = uVar4 >> 6;
        uVar9 = 1L << (uVar4 & 0x3f);
        if ((uVar9 & *(ulong *)(param_4 + 0x38 + uVar10 * 8)) == 0) goto LAB_103ea4ce8;
        uVar5 = *(ulong *)(*(long *)(param_4 + 0x30) + uVar4 * 8);
        _objc_retain();
        uVar6 = uVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        _objc_release(uVar5);
      } while ((uVar6 & 1) == 0);
    }
    _objc_release(uVar3);
    uVar3 = *(ulong *)(param_1 + uVar10 * 8);
    *(ulong *)(param_1 + uVar10 * 8) = uVar3 | uVar9;
    if (((uVar3 & uVar9) == 0) && (bVar2 = SCARRY8(lVar7,1), lVar7 = lVar7 + 1, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea4e38);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 103ea4ea4; end: 103ea5293;  */

undefined * FUN_103ea4ea4(undefined *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    func_0x0001000285a8(0x11302a6d0,&UNK_10dca5b00);
    puVar5 = param_1;
    __ss11_SetStorageC7convert_8capacityAByxGs07__CocoaA0V_SitFZ(param_1,param_2);
    puStack_68 = puVar5;
    __ss10__CocoaSetV12makeIteratorAB0D0CyF();
    puVar7 = param_1;
    __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      func_0x0001000e2834(0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        _swift_dynamicCast(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar3 = uStack_70;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          FUN_103ea53e4(*(ulong *)(puVar5 + 0x10) + 1);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
        uVar11 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar10 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103ea5090);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(puVar5 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar5 + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar8 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(puVar5 + uVar8 + 0x38)
        ;
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
      } while (puVar7 != (undefined *)0x0);
    }
    _swift_release(param_1);
  }
  return puVar5;
}



/* Entry: 103ea5294; end: 103ea53e3;  */

void FUN_103ea5294(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  func_0x0001000285a8(0x11302a6d0,&UNK_10dca5b00);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      _memmove(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    if (uVar5 == 0) goto LAB_103ea5370;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        _objc_retain();
        if (uVar5 != 0) break;
LAB_103ea5370:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea53e4);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_103ea53bc;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_103ea53bc:
  _swift_release(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103ea53e4; end: 103ea560f;  */

void FUN_103ea53e4(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x11302a6d0;
  func_0x0001000285a8(0x11302a6d0,&UNK_10dca5b00);
  lVar4 = lVar12;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar12,lVar1,1,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_103ea55e0:
    _swift_release(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea560c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar15 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
          if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
            *puVar13 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(puVar13,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar12 + 0x10) = 0;
          goto LAB_103ea55e0;
        }
        uVar15 = puVar13[lVar14];
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea5610);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Entry: 103ea5610; end: 103ea568f;  */

void FUN_103ea5610(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
  lVar1 = param_2 + 0x38;
  uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
  __ss10_HashTableV8nextHole9atOrAfterAB6BucketVAF_tF(uVar2,lVar1,~uVar3);
  uVar3 = uVar2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = 1L << (uVar2 & 0x3f) | *(ulong *)(lVar1 + uVar3);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar2 * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Entry: 103ea5690; end: 103ea5bef;  */

undefined * FUN_103ea5690(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    func_0x0001000285a8(0x11302a6d0,&UNK_10dca5b00);
    puVar3 = param_3;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    if (param_2 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_1;
    }
    lVar6 = 0;
    do {
      if (uVar11 == 0) {
        do {
          lVar10 = lVar6 + 1;
          if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea5878);
            (*pcVar1)();
          }
          if (param_2 <= lVar10) goto LAB_103ea5708;
          uVar11 = param_1[lVar10];
          lVar6 = lVar6 + 1;
        } while (uVar11 == 0);
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
      }
      else {
        uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = lVar6;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar5) | lVar10 << 6) * 8);
      uVar9 = *(ulong *)(puVar3 + 0x28);
      _objc_retain();
      __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar8 ^ 0xffffffffffffffff);
      uVar7 = uVar9 >> 6;
      uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar3 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar5 == 0) {
        bVar2 = false;
        uVar5 = 0x3f - uVar8 >> 6;
        do {
          uVar9 = uVar7 + 1;
          if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea587c);
            (*pcVar1)();
          }
          uVar7 = 0;
          if (uVar9 != uVar5) {
            uVar7 = uVar9;
          }
          bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        } while (*(ulong *)(puVar3 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
        uVar5 = ~*(ulong *)(puVar3 + uVar7 * 8 + 0x38);
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
      }
      else {
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x38) = 1L << (uVar5 & 0x3f) | *(ulong *)(puVar3 + uVar7 + 0x38);
      *(undefined8 *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea5880);
        (*pcVar1)();
      }
      lVar6 = lVar10;
    } while (param_3 != (undefined *)0x0);
  }
LAB_103ea5708:
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103ea5bf0; end: 103ea5e8b;  */

void FUN_103ea5bf0(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_98 [72];
  
  lVar9 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_98,*(undefined8 *)(lVar9 + 0x28));
  puVar4 = auStack_98;
  __sSS4hash4intoys6HasherVz_tF(puVar4,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  lVar1 = lVar9 + 0x38;
  uVar8 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar10 = (ulong)puVar4 & (uVar8 ^ 0xffffffffffffffff);
  uVar5 = uVar10 >> 6;
  uVar6 = *(ulong *)(lVar1 + uVar5 * 8);
  uVar7 = 1L << (uVar10 & 0x3f);
  if ((uVar7 & uVar6) != 0) {
    do {
      puVar2 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 0x10);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      if (uVar5 == param_1 && uVar6 == param_2) {
LAB_103ea5d08:
        *puVar2 = param_1;
        puVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
        return;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar5,uVar6,param_1,param_2,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = puVar2[1];
        goto LAB_103ea5d08;
      }
      uVar10 = uVar10 + 1 & ~uVar8;
      uVar5 = uVar10 >> 6;
      uVar6 = *(ulong *)(lVar1 + uVar5 * 8);
      uVar7 = 1L << (uVar10 & 0x3f);
    } while ((uVar7 & uVar6) != 0);
  }
  if (*(ulong *)(lVar9 + 0x18) <= *(ulong *)(lVar9 + 0x10)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea5d30);
    (*pcVar3)();
  }
  *(ulong *)(lVar1 + uVar5 * 8) = uVar7 | uVar6;
  puVar2 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 0x10);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  if (!SCARRY8(*(long *)(lVar9 + 0x10),1)) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea5d34);
  (*pcVar3)();
}



/* Entry: 103ea5e8c; end: 103ea5ebf;  */

void FUN_103ea5e8c(long param_1)

{
  FUN_103ea2ba8(0,*(undefined8 *)(param_1 + 0x10),0,param_1,FUN_103e9c300,FUN_103e9d894);
  return;
}



/* Entry: 103ea5ec0; end: 103ea61c3;  */

void FUN_103ea5ec0(ulong param_1,undefined8 param_2,char param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0;
  if (param_3 == '\x01') {
    uVar2 = param_1;
    __ss17__CocoaDictionaryV5IndexV3ages5Int32Vvg(param_1,param_2);
    if ((int)uVar2 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea5ff4);
      (*pcVar1)();
    }
    uVar2 = param_1;
    __ss17__CocoaDictionaryV5IndexV3keyyXlvg(param_1,param_2);
    uVar3 = 0;
    uStack_40 = uVar2;
    func_0x0001000e2834(0);
    _swift_dynamicCast(&uStack_38,&uStack_40,PTR___syXlN_11034f1a0 + 8,uVar3,7);
    func_0x000101913e60(uStack_38);
    _objc_release(uStack_38);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea6004);
      (*pcVar1)();
    }
    uVar4 = param_1;
    __ss17__CocoaDictionaryV5IndexV10dictionaryABvg(param_1,param_2);
    __ss17__CocoaDictionaryV5index5afterAB5IndexVAF_tF(param_1,param_2,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  else {
    uVar4 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    if (CARRY8(param_1,uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea5ff8);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_4 + 0x40 + (param_1 >> 6) * 8) >> (param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea5ffc);
      (*pcVar1)();
    }
    if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea6000);
      (*pcVar1)();
    }
    __ss10_HashTableV14occupiedBucket5afterAB0D0VAF_tF(param_1,param_4 + 0x40,~uVar4);
  }
  return;
}



/* Entry: 103ea61c4; end: 103ea628f;  */

void FUN_103ea61c4(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea6290);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      _bzero(param_2,param_3 << 3);
    }
    _swift_retain(param_4);
    FUN_103ea46ec(param_2,param_3,param_4,param_5,param_6);
    _swift_release(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      _swift_release(param_4);
    }
    else {
      *param_7 = unaff_x21;
      _swift_release(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea628c);
  (*pcVar1)();
}



/* Entry: 103ea6290; end: 103ea68c7;  */

/* WARNING: Removing unreachable block (ram,0x000103ea6898) */
/* WARNING: Removing unreachable block (ram,0x000103ea6894) */
/* WARNING: Removing unreachable block (ram,0x000103ea68a8) */
/* WARNING: Removing unreachable block (ram,0x000103ea6890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea6290(undefined8 param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 **ppuVar14;
  undefined8 ***pppuVar15;
  undefined8 uVar16;
  undefined8 ****ppppuVar17;
  undefined8 ***pppuVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuVar21;
  undefined1 auStack_e8 [16];
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ***apppuStack_c0 [4];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [48];
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_11302a7c0) = 0;
  lVar4 = _DAT_11302a7c8;
  *(undefined ***)(unaff_x20 + _DAT_11302a7c8) = &PTR____CFConstantStringClassReference_110f77198;
  lVar5 = _DAT_11302a7d0;
  *(undefined ***)(unaff_x20 + _DAT_11302a7d0) = &PTR____CFConstantStringClassReference_110f771d8;
  lVar6 = _DAT_11302a7e8;
  ppppuVar3 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103e9b6f0();
  *(undefined **)(unaff_x20 + lVar6) = puVar8;
  *(undefined8 *****)(unaff_x20 + _DAT_11302a7f0) = ppppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11302a7e0) = param_1;
  FUN_103e9c294();
  puVar9 = puVar8;
  _swift_allocObject();
  *(undefined8 *)(puVar9 + 0x18) = 5;
  *(undefined8 *)(puVar9 + 0x10) = 2;
  uVar19 = *(undefined8 *)(unaff_x20 + lVar5);
  puVar20 = *(undefined8 **)(unaff_x20 + lVar4);
  *(undefined8 *)(puVar9 + 0x20) = uVar19;
  *(undefined8 **)(puVar9 + 0x28) = puVar20;
  *(undefined **)(unaff_x20 + _DAT_11302a7d8) = puVar9;
  _swift_initStackObject(puVar8,auStack_90);
  *(undefined8 *)(puVar8 + 0x18) = 3;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  _swift_unknownObjectRetain(param_1);
  _objc_retain(uVar19);
  _objc_retain();
  FUN_103f6ca1c();
  ppuVar14 = (undefined8 **)*puVar20;
  uVar19 = puVar20[1];
  _swift_bridgeObjectRetain(uVar19);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar14,uVar19);
  _swift_bridgeObjectRelease(uVar19);
  *(undefined8 ***)(puVar8 + 0x20) = ppuVar14;
  apppuStack_c0[0] = ppppuVar3;
  func_0x000103ea2788(0,1,0);
  pppuVar18 = apppuStack_c0[0];
  if (((ulong)puVar8 & 0xc000000000000001) == 0) {
    _objc_retain();
  }
  else {
    ppuVar14 = (undefined8 **)0x0;
    FUN_103e9c3a4(0,puVar8);
  }
  ppuVar10 = (undefined8 **)0x0;
  FUN_103e9d894();
  ppuVar11 = ppuVar10;
  _objc_allocWithZone();
  *(undefined8 *)((long)ppuVar11 + _DAT_11302a6e8) = 0;
  *(undefined8 ***)((long)ppuVar11 + _DAT_11302a6f0) = ppuVar14;
  puVar9 = PTR_s_init_1125d9248;
  puStack_a0 = ppuVar11;
  puStack_98 = ppuVar10;
  _objc_retain();
  ppuVar11 = &puStack_a0;
  _objc_msgSendSuper2(ppuVar11,puVar9);
  ppuVar1 = pppuVar18[2];
  if ((undefined8 **)((ulong)pppuVar18[3] >> 1) <= ppuVar1) {
    func_0x000103ea2788((undefined8 **)0x1 < pppuVar18[3],(undefined8 **)((long)ppuVar1 + 1U),1);
    pppuVar18 = apppuStack_c0[0];
  }
  pppuVar18[2] = (undefined8 **)((long)ppuVar1 + 1U);
  pppuVar18[(long)ppuVar1 * 2 + 4] = ppuVar14;
  pppuVar18[(long)ppuVar1 * 2 + 5] = ppuVar11;
  _swift_setDeallocating(puVar8);
  uVar16 = *(undefined8 *)(puVar8 + 0x10);
  uVar19 = 0;
  func_0x0001000e2834(0);
  _swift_arrayDestroy(puVar8 + 0x20,uVar16,uVar19);
  ppppuVar17 = (undefined8 ****)pppuVar18[2];
  ppppuVar12 = (undefined8 ****)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (ppppuVar17 != (undefined8 ****)0x0) {
    func_0x0001000285a8(0x11302a840,&UNK_10dca5bf8);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    ppppuVar12 = ppppuVar17;
  }
  apppuStack_c0[0] = ppppuVar12;
  _swift_retain(pppuVar18);
  FUN_103ea2d48();
  _swift_release(pppuVar18);
  ppppuVar12 = (undefined8 ****)apppuStack_c0[0];
  if (((ulong)apppuStack_c0[0] & 0xc000000000000001) == 0) {
    ppppuVar17 = (undefined8 ****)apppuStack_c0[0][2];
  }
  else {
    ppppuVar17 = (undefined8 ****)apppuStack_c0[0];
    __ss17__CocoaDictionaryV5countSivg();
  }
  if (ppppuVar17 == (undefined8 ****)0x0) {
    _swift_release();
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x20 + lVar5);
    _swift_beginAccess(unaff_x20 + lVar6,apppuStack_c0,0x21,0);
    _objc_retain(uVar19);
    uVar16 = *(undefined8 *)(unaff_x20 + lVar6);
    _swift_isUniquelyReferenced_nonNull_native(uVar16);
    uStack_c8 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined8 *)(unaff_x20 + lVar6) = 0x8000000000000000;
    FUN_103ea3624(ppppuVar12,uVar19,uVar16,0x11302a688,&UNK_10dca5ab0);
    _objc_release(uVar19);
    *(undefined8 *)(unaff_x20 + lVar6) = uStack_c8;
    ppppuVar12 = apppuStack_c0;
    _swift_endAccess();
  }
  FUN_103e9dbb8();
  if ((ulong)ppppuVar12 >> 0x3e == 0) {
    ppppuVar17 = *(undefined8 *****)(((ulong)ppppuVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    ppppuVar17 = (undefined8 ****)((ulong)ppppuVar12 & 0xffffffffffffff8);
    if ((undefined8 ****)0x7fffffffffffffff < ppppuVar12) {
      ppppuVar17 = ppppuVar12;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (ppppuVar17 == (undefined8 ****)0x0) {
    _swift_bridgeObjectRelease();
    pppuVar18 = *(undefined8 ****)((long)ppppuVar3 + 0x10);
    pppuVar15 = (undefined8 ***)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    apppuStack_c0[0] = ppppuVar3;
    func_0x000103ea2788(0,(ulong)ppppuVar17 & ((long)ppppuVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)ppppuVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x103ea6890);
      (*pcVar7)();
    }
    ppppuVar21 = (undefined8 ****)0x0;
    do {
      pppuVar18 = apppuStack_c0[0];
      if (((ulong)ppppuVar12 & 0xc000000000000001) == 0) {
        ppppuVar13 = (undefined8 ****)ppppuVar12[(long)((long)ppppuVar21 + 4)];
        _objc_retain();
      }
      else {
        ppppuVar13 = ppppuVar21;
        FUN_103e9c3a4();
      }
      ppuVar14 = ppuVar10;
      _objc_allocWithZone();
      *(undefined8 *)((long)ppuVar14 + _DAT_11302a6e8) = 0;
      *(undefined8 *****)((long)ppuVar14 + _DAT_11302a6f0) = ppppuVar13;
      puVar8 = PTR_s_init_1125d9248;
      puStack_d8 = ppuVar14;
      puStack_d0 = ppuVar10;
      _objc_retain();
      pppuVar15 = (undefined8 ***)&puStack_d8;
      _objc_msgSendSuper2(pppuVar15,puVar8);
      pppuVar2 = (undefined8 ***)pppuVar18[2];
      apppuStack_c0[0] = pppuVar18;
      if ((undefined8 ***)((ulong)pppuVar18[3] >> 1) <= pppuVar2) {
        func_0x000103ea2788((undefined8 ***)0x1 < pppuVar18[3],(undefined8 ***)((long)pppuVar2 + 1U)
                            ,1);
      }
      ppppuVar3 = (undefined8 ****)apppuStack_c0[0];
      ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
      apppuStack_c0[0][2] = (undefined8 ***)((long)pppuVar2 + 1U);
      apppuStack_c0[0][(long)pppuVar2 * 2 + 4] = ppppuVar13;
      apppuStack_c0[0][(long)pppuVar2 * 2 + 5] = pppuVar15;
    } while (ppppuVar17 != ppppuVar21);
    _swift_bridgeObjectRelease(ppppuVar12);
    pppuVar18 = ppppuVar3[2];
    pppuVar15 = (undefined8 ***)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = (undefined *)pppuVar15;
  if (pppuVar18 != (undefined8 ***)0x0) {
    func_0x0001000285a8(0x11302a840,&UNK_10dca5bf8);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    pppuVar15 = pppuVar18;
  }
  apppuStack_c0[0] = pppuVar15;
  _swift_bridgeObjectRetain(ppppuVar3);
  FUN_103ea2d48();
  _swift_bridgeObjectRelease(ppppuVar3);
  pppuVar18 = apppuStack_c0[0];
  if (((ulong)apppuStack_c0[0] & 0xc000000000000001) == 0) {
    pppuVar15 = (undefined8 ***)apppuStack_c0[0][2];
  }
  else {
    pppuVar15 = apppuStack_c0[0];
    __ss17__CocoaDictionaryV5countSivg();
  }
  if (pppuVar15 == (undefined8 ***)0x0) {
    _swift_release(pppuVar18);
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x20 + lVar4);
    _swift_beginAccess(unaff_x20 + lVar6,apppuStack_c0,0x21,0);
    _objc_retain(uVar19);
    uVar16 = *(undefined8 *)(unaff_x20 + lVar6);
    _swift_isUniquelyReferenced_nonNull_native(uVar16);
    uStack_c8 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined8 *)(unaff_x20 + lVar6) = 0x8000000000000000;
    FUN_103ea3624(pppuVar18,uVar19,uVar16,0x11302a688,&UNK_10dca5ab0);
    _objc_release(uVar19);
    *(undefined8 *)(unaff_x20 + lVar6) = uStack_c8;
    _swift_endAccess(apppuStack_c0);
  }
  _objc_msgSendSuper2(auStack_e8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ea68c8; end: 103ea6d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ea68c8(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lStack_58;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar4 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar4 = lVar8;
  }
  lVar4 = lVar4 >> 3;
  lVar9 = (long)param_3 - (long)param_2;
  lVar6 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar6 = lVar9;
  }
  lVar6 = lVar6 >> 3;
  if (lVar4 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar4 <= param_4)) ||
       (plVar3 = param_2, param_4 != param_1)) {
      plVar3 = param_1;
      _memmove(param_4,param_1,lVar4 << 3);
    }
    plVar11 = param_4 + lVar4;
    plVar2 = param_1;
    if (7 < lVar8) {
      do {
        if (param_3 <= param_2) break;
        if (*(long *)(param_5 + 0x10) == 0) {
LAB_103ea6aa8:
          plVar7 = param_4 + 1;
          plVar10 = param_4;
        }
        else {
          lVar4 = *param_2;
          lVar8 = *param_4;
          lVar6 = *(long *)(lVar4 + _DAT_11302a6f0);
          _objc_retain();
          _objc_retain();
          _swift_bridgeObjectRetain(param_5);
          func_0x000101913e60();
          if (((ulong)plVar3 & 1) == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(long *)(*(long *)(param_5 + 0x38) + lVar6 * 8);
          }
          _swift_bridgeObjectRelease(param_5);
          if (*(long *)(param_5 + 0x10) == 0) {
            _objc_release(lVar4);
            _objc_release(lVar8);
            if (lVar6 < 0) goto LAB_103ea6a7c;
            goto LAB_103ea6aa8;
          }
          lVar9 = *(long *)(lVar8 + _DAT_11302a6f0);
          _swift_bridgeObjectRetain(param_5);
          func_0x000101913e60();
          if (((ulong)plVar3 & 1) == 0) {
            _objc_release(lVar4);
            _objc_release(lVar8);
            _swift_bridgeObjectRelease(param_5);
            if (-1 < lVar6) goto LAB_103ea6aa8;
          }
          else {
            lVar9 = *(long *)(*(long *)(param_5 + 0x38) + lVar9 * 8);
            _objc_release(lVar4);
            _objc_release(lVar8);
            _swift_bridgeObjectRelease(param_5);
            if (lVar9 <= lVar6) goto LAB_103ea6aa8;
          }
LAB_103ea6a7c:
          plVar7 = param_4;
          plVar10 = param_2;
          param_2 = param_2 + 1;
        }
        param_4 = plVar7;
        if (plVar2 != plVar10) {
          *plVar2 = *plVar10;
        }
        plVar2 = plVar2 + 1;
      } while (param_4 < plVar11);
    }
  }
  else {
    plVar3 = param_2;
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar6 << 3);
    }
    plVar10 = param_4 + lVar6;
    plVar2 = param_2;
    plVar11 = plVar10;
    if ((param_1 < param_2) && (7 < lVar9)) {
LAB_103ea6b38:
      plVar7 = param_2 + -1;
      do {
        plVar11 = plVar10 + -1;
        lVar4 = *plVar11;
        if (*(long *)(param_5 + 0x10) != 0) {
          lVar8 = *plVar7;
          lVar6 = *(long *)(lVar4 + _DAT_11302a6f0);
          _swift_bridgeObjectRetain(param_5);
          _objc_retain(lVar4);
          _objc_retain();
          func_0x000101913e60();
          if (((ulong)plVar3 & 1) == 0) {
            lStack_58 = 0;
          }
          else {
            lStack_58 = *(long *)(*(long *)(param_5 + 0x38) + lVar6 * 8);
          }
          _swift_bridgeObjectRelease(param_5);
          if (*(long *)(param_5 + 0x10) == 0) {
            _objc_release(lVar4);
            _objc_release(lVar8);
          }
          else {
            lVar6 = *(long *)(lVar8 + _DAT_11302a6f0);
            _swift_bridgeObjectRetain(param_5);
            func_0x000101913e60();
            if (((ulong)plVar3 & 1) != 0) {
              lVar6 = *(long *)(*(long *)(param_5 + 0x38) + lVar6 * 8);
              _objc_release(lVar4);
              _objc_release(lVar8);
              _swift_bridgeObjectRelease(param_5);
              if (lVar6 <= lStack_58) goto joined_r0x000103ea6b58;
              goto LAB_103ea6c94;
            }
            _objc_release(lVar4);
            _objc_release(lVar8);
            _swift_bridgeObjectRelease(param_5);
          }
          if (lStack_58 < 0) goto LAB_103ea6c94;
        }
joined_r0x000103ea6b58:
        if (plVar10 != param_3) {
          param_3[-1] = *plVar11;
        }
        param_3 = param_3 + -1;
        plVar2 = param_2;
        plVar10 = plVar11;
        if (plVar11 <= param_4) break;
      } while( true );
    }
  }
LAB_103ea6cd8:
  uVar5 = (long)plVar11 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar2 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar2)) {
    _memmove(plVar2,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
LAB_103ea6c94:
  if (param_3 != param_2) {
    param_3[-1] = *plVar7;
  }
  plVar2 = plVar7;
  plVar11 = plVar10;
  if ((plVar7 <= param_1) || (param_2 = plVar7, param_3 = param_3 + -1, plVar10 <= param_4))
  goto LAB_103ea6cd8;
  goto LAB_103ea6b38;
}



/* Entry: 103ea6d38; end: 103ea7023;  */

undefined8 FUN_103ea6d38(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar12 = *param_1;
  if (1 < *(ulong *)(uVar12 + 0x10)) {
    _swift_bridgeObjectRetain(param_4);
    uVar14 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar12;
    lVar1 = uVar12 + 0x20;
    uVar14 = *(ulong *)(uVar12 + 0x10);
    do {
      uVar10 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar12 + 0x28),*(long *)(uVar12 + 0x20));
          lVar8 = *(long *)(uVar12 + 0x28) - *(long *)(uVar12 + 0x20);
          goto LAB_103ea6e28;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6ff8);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar12 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_103ea6e88:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fe8);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar4 = plVar2[1];
        if (SBORROW8(lVar4,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6ff0);
          (*pcVar6)();
        }
        uVar11 = uVar10;
        if (lVar4 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fd0);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fd4);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar12 + uVar14 * 0x10);
        lVar4 = *plVar2;
        lVar13 = plVar2[1];
        lVar5 = lVar13 - lVar4;
        if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fdc);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fe4);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_103ea6e28:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fd8);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar12 + uVar14 * 0x10);
          lVar4 = *plVar2;
          lVar13 = plVar2[1];
          lVar9 = lVar13 - lVar4;
          if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fe0);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar10 * 0x10);
          lVar4 = *plVar2;
          lVar13 = plVar2[1];
          lVar5 = lVar13 - lVar4;
          if (SBORROW8(lVar13,lVar4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fec);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6ff4);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_103ea6e88;
          uVar11 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar11 = uVar10;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar10 * 0x10);
          lVar9 = *plVar2;
          lVar4 = plVar2[1];
          if (SBORROW8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6ffc);
            (*pcVar6)();
          }
          uVar11 = uVar14 - 2;
          if (lVar4 - lVar9 <= lVar8) {
            uVar11 = uVar10;
          }
        }
      }
      uVar10 = uVar11 - 1;
      if (uVar14 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fc0);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        _swift_bridgeObjectRelease(param_4);
        *param_1 = uVar12;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea7024);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar10 * 0x10);
      lVar13 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar11 * 0x10);
      lVar9 = *plVar3;
      lVar4 = plVar3[1];
      _swift_bridgeObjectRetain(param_4);
      FUN_103ea68c8(lVar8 + lVar13 * 8,lVar8 + lVar9 * 8,lVar8 + lVar4 * 8,param_2,param_4);
      _swift_bridgeObjectRelease(param_4);
      if (unaff_x21 != 0) {
        *param_1 = uVar12;
        _swift_bridgeObjectRelease(param_4);
        return 1;
      }
      if (lVar4 < lVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fc4);
        (*pcVar6)();
      }
      uVar15 = *(ulong *)(uVar12 + 0x10);
      if (uVar15 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fc8);
        (*pcVar6)();
      }
      *plVar2 = lVar13;
      plVar2[1] = lVar4;
      if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x103ea6fcc);
        (*pcVar6)();
      }
      uVar14 = uVar15 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar14 - uVar11) * 0x10);
      *(ulong *)(uVar12 + 0x10) = uVar14;
    } while (2 < uVar15);
    _swift_bridgeObjectRelease(param_4);
    *param_1 = uVar12;
  }
  return 1;
}



/* Entry: 103ea7024; end: 103ea7803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea7024(ulong *param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  long lStack_78;
  long lStack_70;
  undefined *puStack_58;
  
  lVar27 = param_3[1];
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar27 < 1) {
    _swift_bridgeObjectRetain_n(param_5,2);
  }
  else {
    uVar16 = 0;
    _swift_bridgeObjectRetain_n(param_5);
    lVar23 = 0;
    do {
      lVar13 = lVar23 + 1;
      if (lVar13 < lVar27) {
        lVar17 = *param_3;
        lVar25 = *(long *)(lVar17 + lVar13 * 8);
        lVar24 = *(long *)(lVar17 + lVar23 * 8);
        if (*(long *)(param_5 + 0x10) == 0) {
          _objc_retain(lVar25);
          _objc_retain(lVar24);
          lStack_70 = 0;
LAB_103ea7180:
          _objc_release(lVar25);
          _objc_release(lVar24);
          lStack_78 = 0;
        }
        else {
          lVar21 = *(long *)(lVar25 + _DAT_11302a6f0);
          _swift_bridgeObjectRetain(param_5);
          lVar14 = lVar25;
          _objc_retain(lVar25);
          lVar22 = lVar24;
          _objc_retain();
          func_0x000101913e60();
          if ((uVar16 & 1) == 0) {
            lStack_70 = 0;
          }
          else {
            lStack_70 = *(long *)(*(long *)(param_5 + 0x38) + lVar21 * 8);
          }
          _swift_bridgeObjectRelease(param_5);
          if (*(long *)(param_5 + 0x10) == 0) goto LAB_103ea7180;
          lVar24 = *(long *)(lVar22 + _DAT_11302a6f0);
          _swift_bridgeObjectRetain(param_5);
          func_0x000101913e60();
          if ((uVar16 & 1) == 0) {
            _objc_release(lVar14);
            _objc_release(lVar22);
            _swift_bridgeObjectRelease(param_5);
            lStack_78 = 0;
          }
          else {
            lStack_78 = *(long *)(*(long *)(param_5 + 0x38) + lVar24 * 8);
            _objc_release(lVar14);
            _objc_release(lVar22);
            _swift_bridgeObjectRelease(param_5);
          }
        }
        lVar24 = lVar23 * 8;
        plVar19 = (long *)(lVar17 + lVar24 + 0x10);
        lVar17 = lVar24;
        do {
          lVar25 = lVar13;
          lVar17 = lVar17 + 8;
          lVar13 = lVar25 + 1;
          if (lVar27 <= lVar13) break;
          lVar14 = plVar19[-1];
          lVar22 = *plVar19;
          if (*(long *)(param_5 + 0x10) == 0) {
            _objc_retain(lVar22);
            _objc_retain(lVar14);
            lVar21 = 0;
LAB_103ea71f0:
            _objc_release(lVar22);
            _objc_release(lVar14);
            lVar14 = 0;
          }
          else {
            lVar21 = *(long *)(lVar22 + _DAT_11302a6f0);
            _swift_bridgeObjectRetain(param_5);
            lVar15 = lVar22;
            _objc_retain();
            lVar5 = lVar14;
            _objc_retain();
            func_0x000101913e60();
            if ((uVar16 & 1) == 0) {
              lVar21 = 0;
            }
            else {
              lVar21 = *(long *)(*(long *)(param_5 + 0x38) + lVar21 * 8);
            }
            _swift_bridgeObjectRelease(param_5);
            if (*(long *)(param_5 + 0x10) == 0) goto LAB_103ea71f0;
            lVar14 = *(long *)(lVar5 + _DAT_11302a6f0);
            _swift_bridgeObjectRetain(param_5);
            func_0x000101913e60();
            if ((uVar16 & 1) == 0) {
              _objc_release(lVar15);
              _objc_release(lVar5);
              _swift_bridgeObjectRelease(param_5);
              lVar14 = 0;
            }
            else {
              lVar14 = *(long *)(*(long *)(param_5 + 0x38) + lVar14 * 8);
              _objc_release(lVar15);
              _objc_release(lVar5);
              _swift_bridgeObjectRelease(param_5);
            }
          }
          plVar19 = plVar19 + 1;
        } while (lStack_70 < lStack_78 != lVar14 <= lVar21);
        if (lStack_70 < lStack_78) {
          if (lVar13 < lVar23) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea779c);
            (*pcVar3)();
          }
          if (lVar23 < lVar13) {
            lVar14 = *param_3;
            puVar10 = (undefined8 *)(lVar14 + lVar17);
            puVar11 = (undefined8 *)(lVar14 + lVar24);
            lVar27 = lVar23;
            do {
              if (lVar27 != lVar25) {
                if (lVar14 == 0) {
                  _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea77d4);
                  (*pcVar3)();
                }
                uVar12 = *puVar11;
                *puVar11 = *puVar10;
                *puVar10 = uVar12;
              }
              lVar27 = lVar27 + 1;
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + 1;
              bVar4 = lVar27 < lVar25;
              lVar25 = lVar25 + -1;
            } while (bVar4);
          }
        }
      }
      lVar27 = param_3[1];
      lVar17 = lVar13;
      if (lVar13 < lVar27) {
        if (SBORROW8(lVar13,lVar23)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea7798);
          (*pcVar3)();
        }
        if (lVar13 - lVar23 < param_4) {
          if (SCARRY8(lVar23,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea77a0);
            (*pcVar3)();
          }
          lVar24 = lVar23 + param_4;
          if (lVar27 <= lVar23 + param_4) {
            lVar24 = lVar27;
          }
          if (lVar24 < lVar23) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea77a4);
            (*pcVar3)();
          }
          if (lVar13 != lVar24) {
            lVar25 = *param_3;
            plVar19 = (long *)(lVar25 + lVar13 * 8 + -8);
            lVar27 = lVar23 - lVar13;
            do {
              lVar14 = *(long *)(lVar25 + lVar13 * 8);
              lVar17 = lVar27;
              plVar20 = plVar19;
              do {
                if (*(long *)(param_5 + 0x10) == 0) break;
                lVar22 = *plVar20;
                lVar21 = *(long *)(lVar14 + _DAT_11302a6f0);
                _swift_bridgeObjectRetain(param_5);
                _objc_retain(lVar14);
                _objc_retain();
                func_0x000101913e60();
                if ((uVar16 & 1) == 0) {
                  lVar21 = 0;
                }
                else {
                  lVar21 = *(long *)(*(long *)(param_5 + 0x38) + lVar21 * 8);
                }
                _swift_bridgeObjectRelease(param_5);
                if (*(long *)(param_5 + 0x10) == 0) {
                  _objc_release(lVar14);
                  _objc_release(lVar22);
joined_r0x000103ea7500:
                  if (-1 < lVar21) break;
                }
                else {
                  lVar15 = *(long *)(lVar22 + _DAT_11302a6f0);
                  _swift_bridgeObjectRetain(param_5);
                  func_0x000101913e60();
                  if ((uVar16 & 1) == 0) {
                    _objc_release(lVar14);
                    _objc_release(lVar22);
                    _swift_bridgeObjectRelease(param_5);
                    goto joined_r0x000103ea7500;
                  }
                  lVar15 = *(long *)(*(long *)(param_5 + 0x38) + lVar15 * 8);
                  _objc_release(lVar14);
                  _objc_release(lVar22);
                  _swift_bridgeObjectRelease(param_5);
                  if (lVar15 <= lVar21) break;
                }
                if (lVar25 == 0) {
                  _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea77b4);
                  (*pcVar3)();
                }
                lVar22 = *plVar20;
                lVar14 = plVar20[1];
                *plVar20 = lVar14;
                plVar20[1] = lVar22;
                bVar4 = lVar17 != -1;
                lVar17 = lVar17 + 1;
                plVar20 = plVar20 + -1;
              } while (bVar4);
              lVar13 = lVar13 + 1;
              plVar19 = plVar19 + 1;
              lVar27 = lVar27 + -1;
              lVar17 = lVar24;
            } while (lVar13 != lVar24);
          }
        }
      }
      puVar8 = puStack_58;
      if (lVar17 < lVar23) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea7788);
        (*pcVar3)();
      }
      puVar6 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar16 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar16 + 1,1,puVar7);
        puVar7 = puVar8;
      }
      *(ulong *)(puVar7 + 0x10) = uVar16 + 1;
      *(long *)(puVar7 + uVar16 * 0x10 + 0x20) = lVar23;
      *(long *)(puVar7 + uVar16 * 0x10 + 0x28) = lVar17;
      uVar16 = *param_1;
      puStack_58 = puVar7;
      if (uVar16 == 0) {
        _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea77e4);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(param_5);
      FUN_103ea6d38(&puStack_58,uVar16,param_3,param_5);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(param_5);
        puVar8 = puStack_58;
        goto LAB_103ea774c;
      }
      _swift_bridgeObjectRelease(param_5);
      lVar27 = param_3[1];
      lVar23 = lVar17;
    } while (lVar17 < lVar27);
  }
  puVar8 = puStack_58;
  uVar16 = *param_1;
  if (uVar16 == 0) {
    _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea7804);
    (*pcVar3)();
  }
  puVar6 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar26 = (ulong *)(puVar8 + 0x10);
  uVar18 = *puVar26;
  while( true ) {
    if (uVar18 < 2) {
      _swift_bridgeObjectRelease_n(param_5,2);
      _swift_bridgeObjectRelease(puVar8);
      return;
    }
    lVar27 = *param_3;
    if (lVar27 == 0) {
      _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea77f4);
      (*pcVar3)();
    }
    plVar19 = (long *)(puVar8 + uVar18 * 0x10);
    lVar23 = *plVar19;
    puVar1 = puVar26 + uVar18 * 2;
    uVar9 = *puVar1;
    uVar2 = puVar1[1];
    _swift_bridgeObjectRetain(param_5);
    FUN_103ea68c8(lVar27 + lVar23 * 8,lVar27 + uVar9 * 8,lVar27 + uVar2 * 8,uVar16,param_5);
    if (unaff_x21 != 0) break;
    _swift_bridgeObjectRelease(param_5);
    if ((long)uVar2 < lVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea778c);
      (*pcVar3)();
    }
    uVar9 = *puVar26;
    if (uVar9 <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea7790);
      (*pcVar3)();
    }
    *plVar19 = lVar23;
    plVar19[1] = uVar2;
    lVar27 = uVar9 - uVar18;
    if (uVar9 < uVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103ea7794);
      (*pcVar3)();
    }
    uVar18 = uVar9 - 1;
    _memmove(puVar1,puVar1 + 2,lVar27 * 0x10);
    *puVar26 = uVar18;
  }
  _swift_bridgeObjectRelease(param_5);
LAB_103ea774c:
  _swift_bridgeObjectRelease_n(param_5,2);
  _swift_bridgeObjectRelease(puVar8);
  return;
}



/* Entry: 103ea7804; end: 103ea7a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ea7804(ulong *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined *puStack_80;
  undefined *puStack_78;
  long *plStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [8];
  
  uVar11 = *param_1;
  uVar5 = 3;
  _swift_bridgeObjectRetain_n(param_2);
  uVar6 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_103ea5e8c();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  uVar6 = uVar12;
  plStack_70 = plVar1;
  uStack_68 = uVar12;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar6 < (long)uVar12) {
    puVar14 = (undefined *)(uVar12 >> 1);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar12) {
      uVar3 = 0;
      FUN_103e9d894(0);
      puVar4 = puVar14;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar14,uVar3);
      *(undefined **)(puVar4 + 0x10) = puVar14;
    }
    puStack_80 = puVar4 + 0x20;
    puStack_78 = puVar14;
    _swift_bridgeObjectRetain(param_2);
    FUN_103ea7024(&puStack_80,auStack_58,&plStack_70,uVar6,param_2);
    _swift_bridgeObjectRelease(param_2);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_release(puVar4);
  }
  else if (1 < uVar12) {
    _swift_bridgeObjectRetain(param_2);
    lVar9 = -1;
    uVar6 = 1;
    plVar16 = plVar1;
    do {
      lVar7 = plVar1[uVar6];
      lVar10 = lVar9;
      plVar17 = plVar16;
      do {
        if (*(long *)(param_2 + 0x10) == 0) break;
        lVar13 = *plVar17;
        lVar15 = *(long *)(lVar7 + _DAT_11302a6f0);
        _swift_bridgeObjectRetain(param_2);
        _objc_retain(lVar7);
        _objc_retain();
        func_0x000101913e60();
        if ((uVar5 & 1) == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(*(long *)(param_2 + 0x38) + lVar15 * 8);
        }
        _swift_bridgeObjectRelease(param_2);
        if (*(long *)(param_2 + 0x10) == 0) {
          _objc_release(lVar7);
          _objc_release(lVar13);
joined_r0x000103ea7904:
          if (-1 < lVar15) break;
        }
        else {
          lVar8 = *(long *)(lVar13 + _DAT_11302a6f0);
          _swift_bridgeObjectRetain(param_2);
          func_0x000101913e60();
          if ((uVar5 & 1) == 0) {
            _objc_release(lVar7);
            _objc_release(lVar13);
            _swift_bridgeObjectRelease(param_2);
            goto joined_r0x000103ea7904;
          }
          lVar8 = *(long *)(*(long *)(param_2 + 0x38) + lVar8 * 8);
          _objc_release(lVar7);
          _objc_release(lVar13);
          _swift_bridgeObjectRelease(param_2);
          if (lVar8 <= lVar15) break;
        }
        lVar13 = *plVar17;
        lVar7 = plVar17[1];
        *plVar17 = lVar7;
        plVar17[1] = lVar13;
        bVar2 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        plVar17 = plVar17 + -1;
      } while (bVar2);
      uVar6 = uVar6 + 1;
      plVar16 = plVar16 + 1;
      lVar9 = lVar9 + -1;
    } while (uVar6 != uVar12);
    _swift_bridgeObjectRelease(param_2);
  }
  *param_1 = uVar11;
  _swift_bridgeObjectRelease_n(param_2,3);
  return;
}



/* Entry: 103ea7a88; end: 103ea814f;  */

undefined * FUN_103ea7a88(ulong param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar12 = *(ulong *)(param_2 + 0x10);
  puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar12 != 0) {
    uVar22 = 0;
LAB_103ea7ad0:
    uVar14 = uVar22;
    if (uVar22 <= uVar12) {
      uVar14 = uVar12;
    }
    do {
      if (uVar22 == uVar14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea814c);
        (*pcVar1)();
      }
      uVar17 = *(ulong *)(param_2 + 0x20 + uVar22 * 8);
      uVar23 = uVar17 & 0xffffffffffffff8;
      if (uVar17 >> 0x3e == 0) {
        uVar19 = *(ulong *)(uVar23 + 0x10);
      }
      else {
        uVar19 = uVar23;
        if (0x7fffffffffffffff < uVar17) {
          uVar19 = uVar17;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      uVar22 = uVar22 + 1;
      _swift_bridgeObjectRetain(uVar17);
      uVar21 = 0;
      while (uVar19 != uVar21) {
        if ((uVar17 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar23 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea8138);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uVar17 + uVar21 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar3 = uVar21;
          FUN_103e9c3a4(uVar21,uVar17);
        }
        if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea8134);
          (*pcVar1)();
        }
        func_0x0001000e2834(0);
        uVar4 = uVar3;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,param_3);
        _objc_release(uVar3);
        uVar21 = uVar21 + 1;
        if ((uVar4 & 1) != 0) {
          puVar5 = puVar20;
          _swift_isUniquelyReferenced_nonNull_native();
          puStack_68 = puVar20;
          if (((ulong)puVar5 & 1) == 0) {
            func_0x000103ea276c(0,*(long *)(puVar20 + 0x10) + 1,1);
          }
          uVar14 = *(ulong *)(puStack_68 + 0x10);
          if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar14) {
            func_0x000103ea276c(1 < *(ulong *)(puStack_68 + 0x18),uVar14 + 1,1);
          }
          *(ulong *)(puStack_68 + 0x10) = uVar14 + 1;
          *(ulong *)(puStack_68 + uVar14 * 8 + 0x20) = uVar17;
          puVar20 = puStack_68;
          if (uVar22 != uVar12) goto LAB_103ea7ad0;
          goto LAB_103ea7c38;
        }
      }
      _swift_bridgeObjectRelease(uVar17);
    } while (uVar22 != uVar12);
  }
LAB_103ea7c38:
  uVar12 = *(ulong *)(puVar20 + 0x10);
  if (uVar12 == 0) {
    _swift_release(puVar20);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar22 = 0;
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = 0;
    do {
      if (*(ulong *)(puVar20 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea8150);
        (*pcVar1)();
      }
      puVar18 = *(undefined **)(puVar20 + uVar22 * 8 + 0x20);
      if ((ulong)puVar18 >> 0x3e == 0) {
        puVar15 = *(undefined **)((undefined *)((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar15 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
        if (((ulong)puVar18 & 0x8000000000000000) != 0) {
          puVar15 = puVar18;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      uVar6 = 0;
      func_0x0001000e2834(0);
      uVar7 = uVar6;
      func_0x000101fd99f8();
      _swift_bridgeObjectRetain(puVar18);
      puVar5 = puVar15;
      __sSh15minimumCapacityShyxGSi_tcfC(puVar15,uVar6,uVar7);
      if ((ulong)puVar18 >> 0x3e == 0) {
        puVar16 = *(undefined **)((undefined *)((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar16 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
        if (((ulong)puVar18 & 0x8000000000000000) != 0) {
          puVar16 = puVar18;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar11 = puVar5;
      if (puVar16 != (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
        do {
          if (((ulong)puVar18 & 0xc000000000000001) == 0) {
            if (*(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10) <= puVar24) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea8144);
              (*pcVar1)();
            }
            puVar8 = *(undefined **)(puVar18 + (long)puVar24 * 8 + 0x20);
            _objc_retain();
          }
          else {
            puVar8 = puVar24;
            FUN_103e9c3a4(puVar24,puVar18);
          }
          bVar2 = SCARRY8((long)puVar24,1);
          puVar24 = puVar24 + 1;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea8140);
            (*pcVar1)();
          }
          if (((ulong)puVar11 & 0xc000000000000001) == 0) {
            uVar17 = *(ulong *)(puVar11 + 0x28);
            __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
            uVar23 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
            uVar17 = uVar17 & (uVar23 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar11 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) != 0) {
              do {
                uVar21 = *(ulong *)(*(long *)(puVar11 + 0x30) + uVar17 * 8);
                _objc_retain();
                uVar19 = uVar21;
                __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
                _objc_release(uVar21);
                if ((uVar19 & 1) != 0) {
                  _objc_release(puVar8);
                  puVar8 = *(undefined **)(*(long *)(puVar11 + 0x30) + uVar17 * 8);
                  puStack_68 = puVar8;
                  _objc_retain();
                  goto LAB_103ea7d70;
                }
                uVar17 = uVar17 + 1 & ~uVar23;
              } while ((*(ulong *)(puVar11 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) != 0)
              ;
            }
            _swift_isUniquelyReferenced_nonNull_native(puVar5);
            puStack_68 = puVar5;
            _objc_retain();
            func_0x000103ea5aa8();
            puVar5 = puStack_68;
            puVar11 = puStack_68;
            puStack_68 = puVar8;
          }
          else {
            puVar10 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar10 = puVar11;
            }
            _objc_retain();
            _swift_bridgeObjectRetain(puVar11);
            puVar9 = puVar8;
            __ss10__CocoaSetV6member3foryXlSgyXl_tF(puVar8,puVar10);
            _objc_release(puVar8);
            if (puVar9 == (undefined *)0x0) {
              puVar5 = puVar10;
              __ss10__CocoaSetV5countSivg();
              if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea8148);
                (*pcVar1)();
              }
              FUN_103ea4ea4(puVar10,puVar5 + 1);
              uVar17 = *(ulong *)(puVar10 + 0x10);
              puStack_70 = puVar10;
              if (uVar17 < *(ulong *)(puVar10 + 0x18)) {
                _objc_retain(puVar8);
              }
              else {
                _objc_retain(puVar8);
                FUN_103ea53e4(uVar17 + 1);
                puVar10 = puStack_70;
              }
              uVar19 = *(ulong *)(puVar10 + 0x28);
              __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
              uVar21 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
              uVar19 = uVar19 & (uVar21 ^ 0xffffffffffffffff);
              uVar23 = uVar19 >> 6;
              uVar17 = -1L << (uVar19 & 0x3f) &
                       (*(ulong *)(puVar10 + uVar23 * 8 + 0x38) ^ 0xffffffffffffffff);
              if (uVar17 == 0) {
                bVar2 = false;
                uVar17 = 0x3f - uVar21 >> 6;
                do {
                  uVar19 = uVar23 + 1;
                  if ((uVar19 == uVar17) && (bVar2)) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ea813c);
                    (*pcVar1)();
                  }
                  uVar23 = 0;
                  if (uVar19 != uVar17) {
                    uVar23 = uVar19;
                  }
                  bVar2 = (bool)(uVar19 == uVar17 | bVar2);
                } while (*(ulong *)(puVar10 + uVar23 * 8 + 0x38) == 0xffffffffffffffff);
                uVar17 = ~*(ulong *)(puVar10 + uVar23 * 8 + 0x38);
                uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | uVar23 << 6;
              }
              else {
                uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | uVar19 & 0x7fffffffffffffc0;
              }
              uVar23 = uVar17 >> 3 & 0x1ffffffffffffff8;
              *(ulong *)(puVar10 + uVar23 + 0x38) =
                   1L << (uVar17 & 0x3f) | *(ulong *)(puVar10 + uVar23 + 0x38);
              *(undefined **)(*(long *)(puVar10 + 0x30) + uVar17 * 8) = puVar8;
              *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
              _swift_bridgeObjectRelease(puVar11);
              puVar5 = puVar10;
              puVar11 = puVar10;
              puStack_68 = puVar8;
            }
            else {
              _swift_bridgeObjectRelease(puVar11);
              _objc_release(puVar8);
              puStack_70 = puVar9;
              _swift_dynamicCast(&puStack_68,&puStack_70,PTR___syXlN_11034f1a0 + 8,uVar6,7);
              puVar8 = puStack_68;
            }
          }
LAB_103ea7d70:
          _objc_release(puVar8);
        } while (puVar24 != puVar16);
      }
      puVar5 = puVar11;
      if (((ulong)puVar11 & 0xc000000000000001) != 0) {
        puVar5 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar11) {
          puVar5 = puVar11;
        }
        _swift_bridgeObjectRetain(puVar11);
        puVar16 = puVar5;
        __ss10__CocoaSetV5countSivg(puVar5);
        FUN_103ea4ea4(puVar5,puVar16);
        _swift_bridgeObjectRelease(puVar11);
      }
      uVar17 = param_1;
      FUN_103ea4aa0(param_1,puVar5);
      if ((uVar17 & 0xc000000000000001) == 0) {
        uVar17 = *(ulong *)(uVar17 + 0x10);
      }
      else {
        __ss10__CocoaSetV5countSivg();
      }
      _swift_release();
      puVar16 = puVar13;
      puVar5 = puVar18;
      uVar23 = uVar17;
      if (((long)uVar17 <= (long)uVar14) &&
         (puVar16 = puVar18, puVar5 = puVar13, uVar23 = uVar14, uVar17 == uVar14)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar11 = puVar13;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        puVar16 = puVar13;
        puVar5 = puVar18;
        if ((long)puVar15 <= (long)puVar11) {
          puVar16 = puVar18;
          puVar5 = puVar13;
        }
      }
      uVar22 = uVar22 + 1;
      _swift_bridgeObjectRelease(puVar16);
      puVar13 = puVar5;
      uVar14 = uVar23;
    } while (uVar22 != uVar12);
    _swift_release(puVar20);
  }
  return puVar5;
}



/* Entry: 103ea8150; end: 103ea827b;  */

void FUN_103ea8150(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = 0;
  func_0x0001000e2834(0);
  uVar4 = uVar3;
  func_0x000101fd99f8();
  __sSh15minimumCapacityShyxGSi_tcfC(uVar6,uVar3,uVar4);
  uStack_58 = uVar6;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar6 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea8268);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        _objc_retain(uVar5);
      }
      else {
        uVar5 = uVar7;
        FUN_103e9c3a4(uVar7,param_1);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ea8264);
        (*pcVar2)();
      }
      func_0x000103ea5880(&uStack_60,uVar5);
      _objc_release(uStack_60);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar6);
  }
  return;
}



/* Entry: 103ea827c; end: 103ea829b;  */

void FUN_103ea827c(void)

{
  _objc_opt_self(&PTR_PTR_11295e5e8);
  return;
}



/* Entry: 103ea829c; end: 103ea82af;  */

void FUN_103ea829c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



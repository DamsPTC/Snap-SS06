/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040b3c60; end: 1040b3d23;  */

void FUN_1040b3c60(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x10) = unaff_x29 | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = 0;
    __s2os12OSSignpostIDVMa();
    unaff_x22[3] = lVar1;
    lVar1 = *(long *)(lVar1 + -8);
    unaff_x22[4] = lVar1;
    uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    unaff_x22[5] = uVar2;
    lVar3 = 0;
    __sScMMa();
    lVar1 = lVar3;
    __sScM6sharedScMvgZ();
    unaff_x22[6] = lVar1;
    func_0x000100eea164();
    lVar4 = lVar3;
    __sScA15unownedExecutorScevgTj(lVar3,lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1040b3d24,lVar4,lVar1);
      return;
    }
    ___stack_chk_fail();
    *(long *)((long)register0x00000008 + -0x68) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x50) = lVar3;
    *(ulong *)((long)register0x00000008 + -0x40) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x38) = FUN_1040b3d24;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = unaff_x22[5];
    puVar5 = (undefined8 *)unaff_x22[6];
    lVar4 = unaff_x22[3];
    unaff_x24 = unaff_x22[4];
    _swift_release();
    __sSo18os_signpost_type_ta0A0E3endABvgZ();
    puVar6 = puVar5;
    func_0x000100c8bac0();
    unaff_x23 = *puVar6;
    _objc_retain();
    uVar7 = unaff_x23;
    func_0x0001044723bc();
    (**(code **)(unaff_x24 + 0x10))(lVar1,uVar7,lVar4);
    __s2os0A9_signpost_3dso3log4name0B2IDySo0a1_B7_type_ta_SVSo03OS_a1_D0Cs12StaticStringVAA010OSSignpostF0VtF
              (puVar5,0x100000000,unaff_x23,"POST_LOAD_GHOST_TO_SIGNAL",0x19,2,lVar1);
    _objc_release(unaff_x23);
    (**(code **)(unaff_x24 + 8))(lVar1,lVar4);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___MXMetricManager_1126a6dd0;
    _objc_opt_self();
    puVar6 = puVar5;
    func_0x0001044723b0();
    unaff_x19 = (long *)*puVar6;
    uVar7 = puVar6[1];
    _swift_bridgeObjectRetain(uVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(unaff_x19,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    plVar8 = unaff_x22 + 2;
    *plVar8 = 0;
    func_0x00010bfaf880();
    _objc_release(unaff_x19);
    unaff_x21 = (long *)*plVar8;
    if ((int)puVar5 == 0) {
      unaff_x19 = unaff_x21;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(unaff_x19);
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
    }
    else {
      _objc_retain();
      unaff_x21 = plVar8;
    }
    _swift_task_dealloc(unaff_x22[5]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
    break;
    ___stack_chk_fail();
    *(ulong *)((long)register0x00000008 + -0x90) =
         (ulong)((long)register0x00000008 + -0x40) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x88) = FUN_1040b3ea8;
    *(long **)((long)register0x00000008 + -0x98) = unaff_x22;
    plVar8 = (long *)0x40;
    _swift_task_alloc();
    unaff_x22[2] = (long)plVar8;
    *plVar8 = (long)unaff_x22;
    plVar8[1] = 0x1040b3eec;
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x29 = *(ulong *)((long)register0x00000008 + -0x90) & 0xefffffffffffffff;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x22 = plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040b3ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])();
  return;
}



/* Entry: 1040b3d24; end: 1040b3ea7;  */

void FUN_1040b3d24(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x38) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x10) = (ulong)unaff_x29 | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = unaff_x22[5];
    puVar4 = (undefined8 *)unaff_x22[6];
    lVar3 = unaff_x22[3];
    unaff_x24 = unaff_x22[4];
    _swift_release();
    __sSo18os_signpost_type_ta0A0E3endABvgZ();
    puVar5 = puVar4;
    func_0x000100c8bac0();
    unaff_x23 = *puVar5;
    _objc_retain();
    uVar6 = unaff_x23;
    func_0x0001044723bc();
    (**(code **)(unaff_x24 + 0x10))(lVar1,uVar6,lVar3);
    __s2os0A9_signpost_3dso3log4name0B2IDySo0a1_B7_type_ta_SVSo03OS_a1_D0Cs12StaticStringVAA010OSSignpostF0VtF
              (puVar4,0x100000000,unaff_x23,"POST_LOAD_GHOST_TO_SIGNAL",0x19,2,lVar1);
    _objc_release(unaff_x23);
    (**(code **)(unaff_x24 + 8))(lVar1,lVar3);
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___MXMetricManager_1126a6dd0;
    _objc_opt_self();
    puVar5 = puVar4;
    func_0x0001044723b0();
    plVar7 = (long *)*puVar5;
    uVar6 = puVar5[1];
    _swift_bridgeObjectRetain(uVar6);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(plVar7,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    plVar8 = unaff_x22 + 2;
    *plVar8 = 0;
    func_0x00010bfaf880();
    _objc_release(plVar7);
    unaff_x21 = (long *)*plVar8;
    if ((int)puVar4 == 0) {
      plVar7 = unaff_x21;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(plVar7);
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
    }
    else {
      _objc_retain();
      unaff_x21 = plVar8;
    }
    _swift_task_dealloc(unaff_x22[5]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x40))
    break;
    ___stack_chk_fail();
    *(ulong *)((long)register0x00000008 + -0x60) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x58) = FUN_1040b3ea8;
    *(long **)((long)register0x00000008 + -0x68) = unaff_x22;
    plVar8 = (long *)0x40;
    _swift_task_alloc();
    unaff_x22[2] = (long)plVar8;
    *plVar8 = (long)unaff_x22;
    plVar8[1] = 0x1040b3eec;
    *(long **)((long)register0x00000008 + -0x70) = plVar7;
    *(ulong *)((long)register0x00000008 + -0x60) =
         *(ulong *)((long)register0x00000008 + -0x60) & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    *(long **)((long)register0x00000008 + -0x68) = plVar8;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = 0;
    __s2os12OSSignpostIDVMa();
    plVar8[3] = lVar1;
    lVar1 = *(long *)(lVar1 + -8);
    plVar8[4] = lVar1;
    uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar8[5] = uVar2;
    unaff_x19 = 0;
    __sScMMa();
    lVar1 = unaff_x19;
    __sScM6sharedScMvgZ();
    plVar8[6] = lVar1;
    func_0x000100eea164();
    lVar3 = unaff_x19;
    __sScA15unownedExecutorScevgTj(unaff_x19,lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1040b3d24,lVar3,lVar1);
      return;
    }
    unaff_x30 = FUN_1040b3d24;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x22 = plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040b3ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])();
  return;
}



/* Entry: 1040b3ea8; end: 1040b3f27;  */

void FUN_1040b3ea8(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x19;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(ulong *)((long)register0x00000008 + -0x10) = (ulong)unaff_x29 | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x22;
    plVar8 = (long *)0x40;
    _swift_task_alloc();
    unaff_x22[2] = (long)plVar8;
    *plVar8 = (long)unaff_x22;
    plVar8[1] = 0x1040b3eec;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x10) =
         *(ulong *)((long)register0x00000008 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(long **)((long)register0x00000008 + -0x18) = plVar8;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = 0;
    __s2os12OSSignpostIDVMa();
    plVar8[3] = lVar1;
    lVar1 = *(long *)(lVar1 + -8);
    plVar8[4] = lVar1;
    uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar8[5] = uVar2;
    lVar3 = 0;
    __sScMMa();
    lVar1 = lVar3;
    __sScM6sharedScMvgZ();
    plVar8[6] = lVar1;
    func_0x000100eea164();
    lVar4 = lVar3;
    __sScA15unownedExecutorScevgTj(lVar3,lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1040b3d24,lVar4,lVar1);
      return;
    }
    ___stack_chk_fail();
    *(long *)((long)register0x00000008 + -0x68) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x50) = lVar3;
    *(ulong *)((long)register0x00000008 + -0x40) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x38) = FUN_1040b3d24;
    *(long **)((long)register0x00000008 + -0x48) = plVar8;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar1 = plVar8[5];
    puVar5 = (undefined8 *)plVar8[6];
    lVar4 = plVar8[3];
    unaff_x24 = plVar8[4];
    _swift_release();
    __sSo18os_signpost_type_ta0A0E3endABvgZ();
    puVar6 = puVar5;
    func_0x000100c8bac0();
    unaff_x23 = *puVar6;
    _objc_retain();
    uVar7 = unaff_x23;
    func_0x0001044723bc();
    (**(code **)(unaff_x24 + 0x10))(lVar1,uVar7,lVar4);
    __s2os0A9_signpost_3dso3log4name0B2IDySo0a1_B7_type_ta_SVSo03OS_a1_D0Cs12StaticStringVAA010OSSignpostF0VtF
              (puVar5,0x100000000,unaff_x23,"POST_LOAD_GHOST_TO_SIGNAL",0x19,2,lVar1);
    _objc_release(unaff_x23);
    (**(code **)(unaff_x24 + 8))(lVar1,lVar4);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___MXMetricManager_1126a6dd0;
    _objc_opt_self();
    puVar6 = puVar5;
    func_0x0001044723b0();
    unaff_x19 = (long *)*puVar6;
    uVar7 = puVar6[1];
    _swift_bridgeObjectRetain(uVar7);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(unaff_x19,uVar7);
    _swift_bridgeObjectRelease(uVar7);
    plVar9 = plVar8 + 2;
    *plVar9 = 0;
    func_0x00010bfaf880();
    _objc_release(unaff_x19);
    unaff_x21 = (long *)*plVar9;
    if ((int)puVar5 == 0) {
      unaff_x19 = unaff_x21;
      _objc_retain();
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _objc_release(unaff_x19);
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
    }
    else {
      _objc_retain();
      unaff_x21 = plVar9;
    }
    _swift_task_dealloc(plVar8[5]);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
    break;
    unaff_x30 = FUN_1040b3ea8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x22 = plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001040b3ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar8[1])();
  return;
}



/* Entry: 1040b3f28; end: 1040b4107;  */

undefined * FUN_1040b3f28(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    uVar12 = 0x112eb08a0;
    func_0x0001000285a8(0x112eb08a0,&UNK_10dac4ea8);
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ(puVar10,uVar12);
    puVar11 = puVar10;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar11);
  _swift_bridgeObjectRetain(param_1);
  lVar13 = 0;
  while( true ) {
    while (uVar14 != 0) {
      uVar3 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar7 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar13 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar7 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar7 * 8);
      _swift_bridgeObjectRetain(uVar2);
      _objc_retain();
      uVar7 = uVar3;
      uVar8 = uVar2;
      func_0x000100029284();
      if ((uVar8 & 1) == 0) {
        if (*(ulong *)(puVar11 + 0x18) <= *(ulong *)(puVar11 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1040b4104);
          (*pcVar4)();
        }
        uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar11 + uVar8 + 0x40) =
             *(ulong *)(puVar11 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar7 * 8) = uVar12;
        if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1040b4108);
          (*pcVar4)();
        }
        *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        _swift_bridgeObjectRelease(uVar8);
        uVar6 = *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar7 * 8) = uVar12;
        _objc_release(uVar6);
      }
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1040b4100);
      (*pcVar4)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar13) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  _swift_release(puVar11);
  _swift_release(param_1);
  return puVar11;
}



/* Entry: 1040b4108; end: 1040b413b;  */

void FUN_1040b4108(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b413c; end: 1040b5593;  */

undefined * FUN_1040b413c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  double dVar38;
  undefined1 auStack_110 [128];
  undefined *apuStack_90 [4];
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100937a8c();
  ppuVar23 = apuStack_90;
  _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
  lVar34 = *(long *)(param_1 + 0xb0);
  if (*(long *)(lVar34 + 0x10) == 0) {
LAB_1040b4858:
    _swift_endAccess(apuStack_90);
  }
  else {
    lVar5 = 0x37;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar5 = *(long *)(*(long *)(lVar34 + 0x38) + lVar5 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar34 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar34 + 0x10) == 0) goto LAB_1040b4858;
    lVar6 = 0x2f;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar6 = *(long *)(*(long *)(lVar34 + 0x38) + lVar6 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar34 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar34 + 0x10) == 0) goto LAB_1040b4858;
    lVar7 = 0x31;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar7 = *(long *)(*(long *)(lVar34 + 0x38) + lVar7 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar34 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar34 + 0x10) == 0) goto LAB_1040b4858;
    lVar8 = 0x55;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar8 = *(long *)(*(long *)(lVar34 + 0x38) + lVar8 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar34 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar34 + 0x10) == 0) goto LAB_1040b4858;
    lVar9 = 0x33;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar9 = *(long *)(*(long *)(lVar34 + 0x38) + lVar9 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar34 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar34 + 0x10) == 0) goto LAB_1040b4858;
    lVar10 = 0x34;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar10 = *(long *)(*(long *)(lVar34 + 0x38) + lVar10 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar34 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar34 + 0x10) == 0) goto LAB_1040b4858;
    lVar11 = 0x38;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar34 = *(long *)(*(long *)(lVar34 + 0x38) + lVar11 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar11 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_1040b4858;
    lVar12 = 0x39;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + lVar12 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar12 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_1040b4858;
    lVar13 = 0x35;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + lVar13 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar13 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_1040b4858;
    lVar14 = 0x36;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + lVar14 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb8,ppuVar23,0x20,0);
    lVar14 = *(long *)(param_1 + 0xb8);
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_1040b4858;
    lVar15 = 0x36;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    uVar31 = *(ulong *)(*(long *)(lVar14 + 0x38) + lVar15 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar14 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_1040b4858;
    lVar15 = 0x3f;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + lVar15 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb8,ppuVar23,0x20,0);
    lVar15 = *(long *)(param_1 + 0xb8);
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_1040b4858;
    lVar16 = 0x3f;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    uVar32 = *(ulong *)(*(long *)(lVar15 + 0x38) + lVar16 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar15 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_1040b4858;
    lVar16 = 0x40;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar15 = *(long *)(*(long *)(lVar15 + 0x38) + lVar16 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar16 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_1040b4858;
    lVar17 = 0x44;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar16 = *(long *)(*(long *)(lVar16 + 0x38) + lVar17 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb8,ppuVar23,0x20,0);
    lVar17 = *(long *)(param_1 + 0xb8);
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_1040b4858;
    lVar18 = 0x44;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    uVar33 = *(ulong *)(*(long *)(lVar17 + 0x38) + lVar18 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar17 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_1040b4858;
    lVar18 = 2;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + lVar18 * 8);
    _swift_endAccess(apuStack_90);
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar18 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_1040b4858;
    lVar19 = 0x45;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar18 = *(long *)(*(long *)(lVar18 + 0x38) + lVar19 * 8);
    _swift_endAccess(apuStack_90);
    if (lVar18 < 1) goto LAB_1040b4860;
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb8,ppuVar23,0x20,0);
    lVar19 = *(long *)(param_1 + 0xb8);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_1040b4858;
    lVar20 = 0x45;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    uVar35 = *(ulong *)(*(long *)(lVar19 + 0x38) + lVar20 * 8);
    _swift_endAccess(apuStack_90);
    if (uVar35 == 0) goto LAB_1040b4860;
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar19 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_1040b4858;
    lVar20 = 0x46;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar19 = *(long *)(*(long *)(lVar19 + 0x38) + lVar20 * 8);
    _swift_endAccess(apuStack_90);
    if (lVar19 < 1) goto LAB_1040b4860;
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb8,ppuVar23,0x20,0);
    lVar20 = *(long *)(param_1 + 0xb8);
    if (*(long *)(lVar20 + 0x10) == 0) goto LAB_1040b4858;
    lVar21 = 0x46;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    uVar36 = *(ulong *)(*(long *)(lVar20 + 0x38) + lVar21 * 8);
    _swift_endAccess(apuStack_90);
    if (uVar36 == 0) goto LAB_1040b4860;
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
    lVar20 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar20 + 0x10) == 0) goto LAB_1040b4858;
    lVar21 = 0x47;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    lVar20 = *(long *)(*(long *)(lVar20 + 0x38) + lVar21 * 8);
    _swift_endAccess(apuStack_90);
    if (lVar20 < 1) goto LAB_1040b4860;
    ppuVar23 = apuStack_90;
    _swift_beginAccess(param_1 + 0xb8,ppuVar23,0x20,0);
    lVar21 = *(long *)(param_1 + 0xb8);
    if (*(long *)(lVar21 + 0x10) == 0) goto LAB_1040b4858;
    lVar22 = 0x47;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) == 0) goto LAB_1040b4858;
    uVar37 = *(ulong *)(*(long *)(lVar21 + 0x38) + lVar22 * 8);
    _swift_endAccess(apuStack_90);
    if (uVar37 != 0) {
      ppuVar23 = apuStack_90;
      _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
      lVar21 = *(long *)(param_1 + 0xb0);
      if (*(long *)(lVar21 + 0x10) != 0) {
        lVar22 = 1;
        func_0x000100086a50();
        if (((ulong)ppuVar23 & 1) != 0) {
          lVar22 = *(long *)(*(long *)(lVar21 + 0x38) + lVar22 * 8);
          ppuVar23 = apuStack_90;
          _swift_endAccess(ppuVar23);
          lVar21 = lVar6 - lVar8;
          if (SBORROW8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5538);
            (*pcVar3)();
          }
          if (SBORROW8(lVar5,lVar21)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b553c);
            (*pcVar3)();
          }
          if (SBORROW8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5540);
            (*pcVar3)();
          }
          dVar38 = (double)(lVar5 - lVar21) / 1000.0;
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF
                    ((double)(lVar7 - lVar8) / 1000.0 + dVar38);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(ppuVar23,0x6e69616d657270,0xe700000000000000,puVar24);
          puVar4 = apuStack_90[0];
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(dVar38);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(ppuVar23,0xd000000000000014,0x800000010f1ed420,puVar24);
          puVar4 = apuStack_90[0];
          if (*(char *)(param_1 + 0xa8) == '\x01') {
            lVar8 = 0;
          }
          else {
            lVar8 = (long)*(int *)(param_1 + 0x8c);
          }
          __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(lVar8);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000001a,0x800000010f1ed440,puVar24);
          puVar4 = apuStack_90[0];
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)lVar21 / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000001c,0x800000010f1ed460,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5544);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar7 - lVar6) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000001c,0x800000010f1ed480,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar34,lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5548);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar34 - lVar7) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0x696e4974694b4955,0xe900000000000074,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b554c);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar9 - lVar7) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000002f,0x800000010f1ed4a0,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar10,lVar9)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5550);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar10 - lVar9) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd000000000000023,0x800000010f1ed4d0,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar34,lVar10)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5554);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar34 - lVar10) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd000000000000023,0x800000010f1ed500,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar11,lVar34)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5558);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar11 - lVar34) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000001d,0x800000010f1ed530,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b555c);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar14 - lVar12) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000003b,0x800000010f1ed550,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar18,lVar16)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5560);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar18 - lVar16) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000003f,0x800000010f1ed590,puVar24);
          puVar4 = apuStack_90[0];
          if (uVar35 < uVar33) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5564);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(uVar35 - uVar33) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000003f,0x800000010f1ed5d0,puVar24);
          puVar4 = apuStack_90[0];
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar19 - lVar18) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000004a,0x800000010f1ed610,puVar24);
          puVar4 = apuStack_90[0];
          if (uVar36 < uVar35) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5568);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(uVar36 - uVar35) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000004a,0x800000010f1ed660,puVar24);
          puVar4 = apuStack_90[0];
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar20 - lVar19) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000004d,0x800000010f1ed6b0,puVar24);
          puVar4 = apuStack_90[0];
          if (uVar37 < uVar36) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b556c);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(uVar37 - uVar36) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000004d,0x800000010f1ed700,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar14,lVar20)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5570);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar14 - lVar20) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd000000000000051,0x800000010f1ed750,puVar24);
          puVar4 = apuStack_90[0];
          if (uVar32 < uVar37) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5574);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(uVar32 - uVar37) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd000000000000051,0x800000010f1ed7b0,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar13,lVar14)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5578);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar13 - lVar14) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd000000000000039,0x800000010f1ed810,puVar24);
          puVar4 = apuStack_90[0];
          if (uVar31 < uVar32) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b557c);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(uVar31 - uVar32) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd000000000000039,0x800000010f1ed850,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar15,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5580);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar15 - lVar11) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000002c,0x800000010f1ed890,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar17,lVar11)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5584);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar17 - lVar11) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000002a,0x800000010f1ed8c0,puVar24);
          puVar4 = apuStack_90[0];
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5588);
            (*pcVar3)();
          }
          if (SCARRY8(lVar17 - lVar6,lVar5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b558c);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF
                    ((double)((lVar17 - lVar6) + lVar5) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd00000000000001a,0x800000010f1ed3d0,puVar24);
          puVar4 = apuStack_90[0];
          lVar34 = lVar22 - lVar6;
          if (SBORROW8(lVar22,lVar6)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5590);
            (*pcVar3)();
          }
          if (SCARRY8(lVar34,lVar5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b5594);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar34 + lVar5) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(lVar8,0xd000000000000024,0x800000010f1ed3f0,puVar24);
          puVar4 = apuStack_90[0];
          goto LAB_1040b4860;
        }
      }
      goto LAB_1040b4858;
    }
  }
LAB_1040b4860:
  ppuVar23 = apuStack_90;
  _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
  lVar34 = *(long *)(param_1 + 0xb0);
  if (*(long *)(lVar34 + 0x10) != 0) {
    lVar5 = 0x40;
    func_0x000100086a50();
    if (((ulong)ppuVar23 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar34 + 0x38) + lVar5 * 8);
      _swift_endAccess(apuStack_90);
      ppuVar23 = apuStack_90;
      _swift_beginAccess(param_1 + 0xb0,ppuVar23,0x20,0);
      lVar34 = *(long *)(param_1 + 0xb0);
      if (*(long *)(lVar34 + 0x10) != 0) {
        lVar6 = 0x41;
        func_0x000100086a50();
        if (((ulong)ppuVar23 & 1) != 0) {
          lVar34 = *(long *)(*(long *)(lVar34 + 0x38) + lVar6 * 8);
          ppuVar23 = apuStack_90;
          _swift_endAccess(ppuVar23);
          if (SBORROW8(lVar34,lVar5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b4ce4);
            (*pcVar3)();
          }
          __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF((double)(lVar34 - lVar5) / 1000.0);
          puVar24 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          apuStack_90[0] = puVar4;
          func_0x000101ceaca8(ppuVar23,0xd000000000000020,0x800000010f1ed8f0,puVar24);
          puVar4 = apuStack_90[0];
          goto LAB_1040b493c;
        }
      }
    }
  }
  ppuVar23 = apuStack_90;
  _swift_endAccess(ppuVar23);
LAB_1040b493c:
  dVar38 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x48));
  __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(dVar38 / 1000.0);
  puVar24 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  apuStack_90[0] = puVar4;
  func_0x000101ceaca8(ppuVar23,0xd000000000000015,0x800000010f1ed390,puVar24);
  puVar4 = apuStack_90[0];
  dVar38 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x50));
  __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(dVar38 / 1000.0);
  puVar24 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  apuStack_90[0] = puVar4;
  func_0x000101ceaca8(ppuVar23,0xd000000000000017,0x800000010f1ed3b0,puVar24);
  puVar4 = apuStack_90[0];
  __sSd10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(*(undefined8 *)(param_1 + 0x40));
  puVar24 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  apuStack_90[0] = puVar4;
  func_0x000101ceaca8(ppuVar23,0x5f6c6c617265766f,0xef79636e6574616c,puVar24);
  puVar4 = apuStack_90[0];
  if (*(char *)(param_1 + 0x84) == '\x01') {
    lVar34 = 0;
  }
  else {
    lVar34 = (long)*(int *)(param_1 + 0x68);
  }
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(lVar34);
  puVar24 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  apuStack_90[0] = puVar4;
  func_0x000101ceaca8(lVar34,0x5f6e695f65676170,0xed0000746e756f63,puVar24);
  puVar4 = apuStack_90[0];
  puVar24 = apuStack_90[0];
  FUN_1040b3f28(apuStack_90[0]);
  lVar34 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  puVar29 = auStack_110;
  _swift_initStackObject();
  *(undefined8 *)(lVar34 + 0x18) = 6;
  *(undefined8 *)(lVar34 + 0x10) = 3;
  *(undefined8 *)(lVar34 + 0x20) = 0x745f68636e75616c;
  *(undefined8 *)(lVar34 + 0x28) = 0xeb00000000657079;
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x0001005a8a60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b4ce8);
    (*pcVar3)();
  }
  lVar6 = lVar5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar30 = puVar29;
  _objc_release(lVar5);
  *(long *)(lVar34 + 0x30) = lVar6;
  *(undefined1 **)(lVar34 + 0x38) = puVar29;
  *(undefined8 *)(lVar34 + 0x40) = 0x65676170;
  *(undefined8 *)(lVar34 + 0x48) = 0xe400000000000000;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar25 = 0;
    puVar30 = (undefined1 *)0xe000000000000000;
  }
  else {
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000e48c0();
  }
  *(undefined8 *)(lVar34 + 0x50) = uVar25;
  *(undefined1 **)(lVar34 + 0x58) = puVar30;
  *(undefined8 *)(lVar34 + 0x60) = 0x737574617473;
  *(undefined8 *)(lVar34 + 0x68) = 0xe600000000000000;
  lVar5 = 2 - (ulong)(byte)(*(byte *)(param_1 + 0x60) + 3);
  if (*(byte *)(param_1 + 0x60) < 0xfd) {
    lVar5 = 3;
  }
  func_0x000100c8bfd4();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
    *(long *)(lVar34 + 0x70) = lVar6;
    *(undefined1 **)(lVar34 + 0x78) = puVar30;
    lVar5 = lVar34;
    func_0x0001001830b8(lVar34);
    _swift_setDeallocating(lVar34);
    uVar25 = 0x112d38308;
    func_0x0001000285a8(0x112d38308,&UNK_10d902040);
    _swift_arrayDestroy((undefined8 *)(lVar34 + 0x20),3,uVar25);
    puVar26 = PTR_PTR_1126b15f8;
    _objc_allocWithZone(PTR_PTR_1126b15f8);
    uVar25 = 0x4f545f54534f4847;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f545f54534f4847,0xef4c414e4749535f);
    uVar27 = 0;
    func_0x000100c8c768(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    puVar2 = PTR___sSSSHsWP_11034da90;
    puVar1 = PTR___sSSN_11034da80;
    puVar28 = puVar24;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar24,PTR___sSSN_11034da80,uVar27,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar24);
    lVar34 = lVar5;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(lVar5,puVar1,puVar1,puVar2);
    _swift_bridgeObjectRelease(lVar5);
    func_0x00010c010c80(puVar26);
    _swift_release(puVar4);
    _objc_release(uVar25);
    _objc_release(puVar28);
    _objc_release(lVar34);
    return puVar26;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b4cec);
  (*pcVar3)();
}



/* Entry: 1040b5594; end: 1040b55ab;  */

undefined8 * FUN_1040b5594(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1040b55ac; end: 1040b55fb;  */

undefined8 FUN_1040b55ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11305f7b0;
  func_0x0001000285a8(0x11305f7b0,&UNK_10dcd4c80);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1040b55fc; end: 1040b5693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b55fc(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001000834e4(unaff_x20 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x0001000c7938(unaff_x20 + _DAT_11305f908,0x112d3bc20,&UNK_10d904ef0);
  return;
}



/* Entry: 1040b5694; end: 1040b569b;  */

void FUN_1040b5694(void)

{
  if (lRam000000011305f938 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7eee98);
  return;
}



/* Entry: 1040b569c; end: 1040b5bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b569c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_98 = param_1;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar7 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d3bc20;
  lStack_a0 = lVar7;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = _DAT_11305f908;
  lVar6 = lVar8 - extraout_x12_00;
  _swift_beginAccess(unaff_x20 + _DAT_11305f908,auStack_78,0,0);
  func_0x0001000c78e8(unaff_x20 + lVar4,lVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar3 = *(long *)(unaff_x20 + 0x70);
  func_0x0001000a8868(unaff_x20 + 0x50,uVar1);
  (**(code **)(lVar3 + 8))(lVar8,uVar1,lVar3);
  (**(code **)(lVar5 + 0x38))(lVar8,0,1,lVar2);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_90,0x21,0);
  func_0x0001000c90cc(lVar8,unaff_x20 + lVar4);
  _swift_endAccess(auStack_90);
  func_0x0001000c78e8(lVar6,lVar7);
  lVar4 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar2);
  lVar3 = lStack_a0;
  if ((int)lVar4 == 1) {
    func_0x0001000c7938(lVar7,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lStack_a0,lVar7,lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
    lVar4 = *(long *)(unaff_x20 + 0x70);
    func_0x0001000a8868(unaff_x20 + 0x50,uVar1);
    (**(code **)(lVar4 + 0x10))(lVar3,uVar1,lVar4);
    (**(code **)(lVar5 + 8))(lVar3,lVar2);
  }
  func_0x0001000c2ae4(0);
  func_0x0001000c911c();
  func_0x000107c5982c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x0001000c7938(lVar6,0x112d3bc20,&UNK_10d904ef0);
  return;
}



/* Entry: 1040b5bfc; end: 1040b5d2b;  */

void FUN_1040b5bfc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    _swift_unknownObjectRetain(uVar1);
    _swift_release(param_1);
    _swift_getObjectType(uVar1);
    (**(code **)(lVar2 + 0x48))();
    _swift_unknownObjectRelease(uVar1);
  }
  return;
}



/* Entry: 1040b5d2c; end: 1040b5d33; -[_TtC17SCGhostToSignaler15GhostToSignaler unsetPageInt] */

undefined8 FUN_1040b5d2c(void)

{
  return 0;
}



/* Entry: 1040b5d34; end: 1040b5d6b; -[_TtC17SCGhostToSignaler15GhostToSignaler isCallKitStartup] */

bool FUN_1040b5d34(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  _swift_retain();
  iVar1 = (int)uVar2;
  func_0x0001040b5c7c();
  _swift_release(param_1);
  return iVar1 == 0x1e;
}



/* Entry: 1040b5d6c; end: 1040b5d83;  */

void FUN_1040b5d6c(void)

{
  FUN_1040b5bfc();
  return;
}



/* Entry: 1040b5d84; end: 1040b5daf;  */

void FUN_1040b5d84(long param_1,long param_2)

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



/* Entry: 1040b5db0; end: 1040b5db3; -[_TtC17SCGhostToSignaler15GhostToSignaler startupToPageInt] */

undefined8 FUN_1040b5db0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*(code *)0x1040b5c7c)();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 1040b5db4; end: 1040b5df3; -[_TtC17SCGhostToSignaler15GhostToSignaler startupToPage] */

undefined8 FUN_1040b5db4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*(code *)0x1040b5c7c)();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 1040b5df4; end: 1040b5e9f;  */

void FUN_1040b5df4(void)

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



/* Entry: 1040b5ea0; end: 1040b5ed3;  */

void FUN_1040b5ea0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1040b6178(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b5ed4; end: 1040b6137;  */

int FUN_1040b5ed4(uint3 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    if (param_2 + 0x1ffff03 >> 0x18 == 0) {
      uVar2 = (uint)*(ushort *)((long)param_1 + 3);
      if (*(ushort *)((long)param_1 + 3) == 0) goto LAB_1040b5f30;
    }
    else {
      uVar2 = (uint)*(byte *)((long)param_1 + 3);
      if (uVar2 == 0) goto LAB_1040b5f30;
    }
    return ((uint)*param_1 | uVar2 << 0x18) - 0xffff03;
  }
LAB_1040b5f30:
  iVar1 = (byte)*param_1 - 4;
  if ((byte)*param_1 < 4) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 1040b6138; end: 1040b6177;  */

void FUN_1040b6138(void)

{
  undefined *puVar1;
  
  if (puRam000000011305fda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd4f00;
  _swift_getWitnessTable(&UNK_10dcd4f00,&UNK_110743988);
  puRam000000011305fda8 = puVar1;
  return;
}



/* Entry: 1040b6178; end: 1040b619b;  */

undefined8 FUN_1040b6178(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1040b619c; end: 1040b61b3;  */

void FUN_1040b619c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1040b7c54(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040b61b4; end: 1040b61c7;  */

bool FUN_1040b61b4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1040b61c8; end: 1040b6273;  */

void FUN_1040b61c8(void)

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



/* Entry: 1040b6274; end: 1040b627b;  */

undefined8 FUN_1040b6274(void)

{
  return 1;
}



/* Entry: 1040b627c; end: 1040b631b;  */

void FUN_1040b627c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040b631c; end: 1040b63cb;  */

ulong FUN_1040b631c(ulong param_1,undefined8 param_2,char param_3,ulong param_4)

{
  ulong uVar1;
  
  if (param_3 == '\0') {
    if (lRam000000011305feb8 != -1) {
      _swift_once(0x11305feb8,&UNK_100877594);
    }
    uVar1 = param_4;
    func_0x000100877840(param_4,uRam0000000113813108);
    if ((int)param_4 != (int)param_1) {
      param_1 = param_4;
    }
    if ((uVar1 & 1) != 0) {
      param_4 = param_1;
    }
    return param_4;
  }
  return 0;
}



/* Entry: 1040b63cc; end: 1040b63ff;  */

void FUN_1040b63cc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1040b65dc(unaff_x20 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b6400; end: 1040b6407;  */

void FUN_1040b6400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1040b6408; end: 1040b6483;  */

undefined1 * FUN_1040b6408(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Entry: 1040b6484; end: 1040b65db;  */

int FUN_1040b6484(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040b65dc; end: 1040b65ff;  */

undefined8 FUN_1040b65dc(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1040b6600; end: 1040b6617;  */

void FUN_1040b6600(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1040b7ce4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040b6618; end: 1040b6827;  */

void FUN_1040b6618(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112d7b088;
  func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,0,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1040b67f0:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b6824);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) goto LAB_1040b67f0;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar7;
    }
    uVar14 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar14;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b6828);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar14;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1040b6828; end: 1040b6967;  */

void FUN_1040b6828(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  __ss11_SetStorageC4copy8originalAByxGs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      _memmove(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1040b6968);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1040b6948;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_1040b6948:
  _swift_release(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1040b6968; end: 1040b6bbb;  */

void FUN_1040b6968(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112d7b088;
  func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
  lVar5 = lVar13;
  __ss11_SetStorageC6resize8original8capacity4moveAByxGs05__RawaB0C_SiSbtFZ(lVar13,lVar1,1,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1040b6b88:
    _swift_release(lVar13);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar14;
  lVar1 = lVar5 + 0x38;
  lVar7 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b6bb8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          uVar12 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar14 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(puVar14,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_1040b6b88;
        }
        uVar12 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar12 == 0);
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar7;
    }
    uVar15 = *(ulong *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    uVar10 = uVar15;
    __ss6HasherV8_combineyySuF();
    __ss6HasherV9_finalizeSiyF();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar10 >> 6;
    uVar6 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar10 = uVar8 + 1;
        if ((uVar10 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1040b6bbc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar10 != uVar6) {
          uVar8 = uVar10;
        }
        bVar2 = (bool)(uVar10 == uVar6 | bVar2);
        uVar10 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 1040b6bbc; end: 1040b6e77;  */

int FUN_1040b6bbc(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1040b6e78; end: 1040b6eb7;  */

void FUN_1040b6e78(void)

{
  undefined *puVar1;
  
  if (puRam000000011305fec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5098;
  _swift_getWitnessTable(&UNK_10dcd5098,&UNK_110743c90);
  puRam000000011305fec8 = puVar1;
  return;
}



/* Entry: 1040b6eb8; end: 1040b6ebb;  */

void FUN_1040b6eb8(void)

{
  undefined *puVar1;
  
  if (puRam000000011305fed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5100;
  _swift_getWitnessTable(&UNK_10dcd5100,&UNK_110743c00);
  puRam000000011305fed0 = puVar1;
  return;
}



/* Entry: 1040b6ebc; end: 1040b6efb;  */

void FUN_1040b6ebc(void)

{
  undefined *puVar1;
  
  if (puRam000000011305fed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5100;
  _swift_getWitnessTable(&UNK_10dcd5100,&UNK_110743c00);
  puRam000000011305fed0 = puVar1;
  return;
}



/* Entry: 1040b6efc; end: 1040b6f07;  */

undefined8 FUN_1040b6efc(void)

{
  undefined8 in_x3;
  
  if (lRam000000011305feb8 != -1) {
    func_0x000107c61568(0x11305feb8,&UNK_100877594);
  }
  func_0x000100877840(in_x3,uRam0000000113813108);
  return in_x3;
}



/* Entry: 1040b6f08; end: 1040b6f8b;  */

void FUN_1040b6f08(void)

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



/* Entry: 1040b6f8c; end: 1040b700b;  */

undefined1  [16] FUN_1040b6f8c(undefined8 param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 1;
  if (*param_3 != (int)param_1) {
    uVar1 = 2;
  }
  if (*(ulong *)(param_3 + 6) >> 0x3d != 1 || param_2 != '\x01') {
    param_1 = 0;
    uVar1 = 1;
  }
  auVar2._8_4_ = uVar1;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = 0;
  return auVar2;
}



/* Entry: 1040b700c; end: 1040b703f;  */

void FUN_1040b700c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_1040b723c(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b7040; end: 1040b7047;  */

void FUN_1040b7040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1040b7048; end: 1040b7103;  */

undefined2 * FUN_1040b7048(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = uVar2;
  _swift_retain(uVar1);
  return param_1;
}



/* Entry: 1040b7104; end: 1040b723b;  */

int FUN_1040b7104(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040b723c; end: 1040b725f;  */

undefined8 FUN_1040b723c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1040b7260; end: 1040b7277;  */

void FUN_1040b7260(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1040b7d64(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1040b7278; end: 1040b72a3;  */

long FUN_1040b7278(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1040b72a4; end: 1040b72d3;  */

void FUN_1040b72a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (3 < (uint)((ulong)param_4 >> 0x3d) - 2) {
    return;
  }
  if ((char)param_4 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
  return;
}



/* Entry: 1040b72d4; end: 1040b73a3;  */

undefined8 * FUN_1040b72d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  FUN_1040b72a4(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  return param_1;
}



/* Entry: 1040b73a4; end: 1040b73e7;  */

undefined8 * FUN_1040b73a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = param_2[4];
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  param_1[4] = uVar6;
  func_0x0001002ab5d8(uVar5,uVar1,uVar3,uVar2,uVar4);
  return param_1;
}



/* Entry: 1040b73e8; end: 1040b7777;  */

int FUN_1040b73e8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 6) >> 2);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 1040b7778; end: 1040b77b7;  */

void FUN_1040b7778(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ffb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5298;
  _swift_getWitnessTable(&UNK_10dcd5298,&UNK_110743f98);
  puRam000000011305ffb8 = puVar1;
  return;
}



/* Entry: 1040b77b8; end: 1040b77bb;  */

void FUN_1040b77b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ffc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5300;
  _swift_getWitnessTable(&UNK_10dcd5300,&UNK_110743f08);
  puRam000000011305ffc0 = puVar1;
  return;
}



/* Entry: 1040b77bc; end: 1040b77fb;  */

void FUN_1040b77bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011305ffc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5300;
  _swift_getWitnessTable(&UNK_10dcd5300,&UNK_110743f08);
  puRam000000011305ffc0 = puVar1;
  return;
}



/* Entry: 1040b77fc; end: 1040b79ff;  */

undefined1  [16] FUN_1040b77fc(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  
  if (param_3[3] >> 0x3d == 0) {
    auVar1._0_8_ = *param_3;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(0);
}



/* Entry: 1040b7a00; end: 1040b7aa7;  */

void FUN_1040b7a00(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_1040b7a94;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_1040b7a94:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 1040b7aa8; end: 1040b7afb;  */

void FUN_1040b7aa8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1040b7c1c(unaff_x20 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b7afc; end: 1040b7b0f;  */

undefined1  [16] FUN_1040b7afc(void)

{
  return ZEXT816(0x110743ff8);
}



/* Entry: 1040b7b10; end: 1040b7b4f;  */

void FUN_1040b7b10(void)

{
  undefined *puVar1;
  
  if (puRam00000001130600a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5410;
  _swift_getWitnessTable(&UNK_10dcd5410,&UNK_110743ff8);
  puRam00000001130600a0 = puVar1;
  return;
}



/* Entry: 1040b7b50; end: 1040b7b53;  */

void FUN_1040b7b50(void)

{
  undefined *puVar1;
  
  if (puRam00000001130600a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd53e0;
  _swift_getWitnessTable(&UNK_10dcd53e0,&UNK_110743ff8);
  puRam00000001130600a8 = puVar1;
  return;
}



/* Entry: 1040b7b54; end: 1040b7b93;  */

void FUN_1040b7b54(void)

{
  undefined *puVar1;
  
  if (puRam00000001130600a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd53e0;
  _swift_getWitnessTable(&UNK_10dcd53e0,&UNK_110743ff8);
  puRam00000001130600a8 = puVar1;
  return;
}



/* Entry: 1040b7b94; end: 1040b7b97;  */

void FUN_1040b7b94(void)

{
  undefined *puVar1;
  
  if (puRam00000001130600b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5500;
  _swift_getWitnessTable(&UNK_10dcd5500,&UNK_110743ff8);
  puRam00000001130600b0 = puVar1;
  return;
}



/* Entry: 1040b7b98; end: 1040b7bd7;  */

void FUN_1040b7b98(void)

{
  undefined *puVar1;
  
  if (puRam00000001130600b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5500;
  _swift_getWitnessTable(&UNK_10dcd5500,&UNK_110743ff8);
  puRam00000001130600b0 = puVar1;
  return;
}



/* Entry: 1040b7bd8; end: 1040b7bdb;  */

void FUN_1040b7bd8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130600b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5438;
  _swift_getWitnessTable(&UNK_10dcd5438,&UNK_110743ff8);
  puRam00000001130600b8 = puVar1;
  return;
}



/* Entry: 1040b7bdc; end: 1040b7c1b;  */

void FUN_1040b7bdc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130600b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcd5438;
  _swift_getWitnessTable(&UNK_10dcd5438,&UNK_110743ff8);
  puRam00000001130600b8 = puVar1;
  return;
}



/* Entry: 1040b7c1c; end: 1040b7c3f;  */

undefined8 FUN_1040b7c1c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 1040b7c40; end: 1040b7c53;  */

void FUN_1040b7c40(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined1 *)(lVar1 + 0xb8) = 2;
  return;
}



/* Entry: 1040b7c54; end: 1040b7ce3;  */

void FUN_1040b7c54(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_e0 [96];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  lVar1 = *param_1;
  uStack_78 = *(undefined8 *)(lVar1 + 0x18);
  uStack_80 = *(undefined8 *)(lVar1 + 0x10);
  uStack_68 = *(undefined8 *)(lVar1 + 0x28);
  uStack_70 = *(undefined8 *)(lVar1 + 0x20);
  uStack_58 = *(undefined8 *)(lVar1 + 0x38);
  uStack_60 = *(undefined8 *)(lVar1 + 0x30);
  uStack_48 = *(undefined8 *)(lVar1 + 0x48);
  uStack_50 = *(undefined8 *)(lVar1 + 0x40);
  uStack_40 = *(undefined8 *)(lVar1 + 0x50);
  uStack_2c = *(undefined8 *)(lVar1 + 100);
  uStack_30 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x5c) >> 0x20);
  uStack_38 = (undefined4)*(undefined8 *)(lVar1 + 0x58);
  uStack_34 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x58) >> 0x20);
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  uVar8 = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined8 *)(lVar1 + 100) = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)(lVar1 + 0x5c) = uVar8;
  uVar10 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(lVar1 + 0x18) = param_2[1];
  *(undefined8 *)(lVar1 + 0x10) = uVar10;
  *(undefined8 *)(lVar1 + 0x28) = uVar9;
  *(undefined8 *)(lVar1 + 0x20) = uVar8;
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  *(undefined8 *)(lVar1 + 0x40) = uVar4;
  *(undefined8 *)(lVar1 + 0x58) = uVar7;
  *(undefined8 *)(lVar1 + 0x50) = uVar6;
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  func_0x00010008718c(param_2,auStack_e0);
  func_0x000100087254(&uStack_80);
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined1 *)(lVar1 + 0xb8) = 0xfd;
  return;
}



/* Entry: 1040b7ce4; end: 1040b7d63;  */

void FUN_1040b7ce4(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  _swift_beginAccess(lVar2 + 0x70,auStack_48,1,0);
  if (*(char *)(lVar2 + 0x78) == '\x01') {
    *(undefined8 *)(lVar2 + 0x70) = param_2;
    *(undefined1 *)(lVar2 + 0x78) = 0;
    uVar1 = 2;
    param_2 = 1;
  }
  else {
    *(undefined8 *)(lVar2 + 0xc0) = param_2;
    *(undefined1 *)(lVar2 + 200) = 0;
    uVar1 = 1;
  }
  *(undefined8 *)(lVar2 + 0xb0) = param_2;
  *(undefined1 *)(lVar2 + 0xb8) = uVar1;
  return;
}



/* Entry: 1040b7d64; end: 1040b7ddb;  */

void FUN_1040b7d64(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(lVar1 + 0x70,auStack_58,1,0);
  *(undefined1 *)(lVar1 + 0x88) = 1;
  *(undefined8 *)(lVar1 + 0x80) = param_2;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined1 *)(lVar1 + 0xb8) = 0xfe;
  *(undefined8 *)(lVar1 + 0xc0) = param_3;
  *(undefined1 *)(lVar1 + 200) = 0;
  return;
}



/* Entry: 1040b7ddc; end: 1040b7f43;  */

void FUN_1040b7ddc(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x11305f7b8,&UNK_10dcd4ba0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1040b7eb8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x10);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x10);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_1040b7eb8:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1040b7f44);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1040b7f1c;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_1040b7f1c:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1040b7f44; end: 1040b7f6b;  */

void FUN_1040b7f44(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x11305f7d0,&UNK_10dcd4c90);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto code_r0x000100089978;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
code_r0x000100089978:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000899ec);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto code_r0x0001000899cc;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
code_r0x0001000899cc:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1040b7f6c; end: 1040b7fdb;  */

uint FUN_1040b7f6c(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 1) == '\x02') {
    if (((*(long *)(*(long *)(param_1 + 0x40) + 0x10) == 0) ||
        (uVar2 = param_2, func_0x000100086b70(0x3a), (uVar2 & 1) == 0)) &&
       (*(long *)(*(long *)(param_2 + 0x40) + 0x10) != 0)) {
      func_0x000100086b70(0x3a);
      uVar1 = (uint)param_2;
    }
    else {
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
  return 0;
}



/* Entry: 1040b7fdc; end: 1040b7ffb;  */

bool FUN_1040b7fdc(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 1040b7ffc; end: 1040b804b;  */

undefined8 FUN_1040b7ffc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130600e8;
  func_0x0001000285a8(0x1130600e8,&UNK_10dcd5638);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1040b804c; end: 1040b817f;  */

void FUN_1040b804c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x90));
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000100075034(unaff_x22 + 0xc0,FUN_1040b85e8,unaff_x22 + 0x10,PTR___sSbN_11034dd40);
  if (*(char *)(unaff_x22 + 0xc0) == '\x01') {
    lVar1 = *(long *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar4 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(uVar2,uVar7,lVar4);
    _swift_storeEnumTagMultiPayload(uVar2,uVar5,1);
    uVar5 = 0x113060140;
    func_0x0001000285a8(0x113060140,&UNK_10dcd5728);
    __sScS12ContinuationV5yieldyAB11YieldResultOyx__GxnF(uVar3,uVar2,uVar5);
    (**(code **)(lVar1 + 8))(uVar3,uVar6);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001040b817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1040b8180; end: 1040b825b;  */

void FUN_1040b8180(byte *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar2 = param_3;
  _swift_bridgeObjectRetain(uVar3);
  func_0x0001000c8928();
  _swift_bridgeObjectRelease(uVar3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = *param_2;
    if ((uVar3 & 1) == 0) {
      FUN_1040b83b8();
    }
    lVar5 = *(long *)(uVar4 + 0x30);
    lVar1 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 8))
              (lVar5 + *(long *)(*(long *)(lVar1 + -8) + 0x48) * param_3,lVar1);
    uVar6 = *(undefined8 *)(*(long *)(uVar4 + 0x38) + param_3 * 8);
    func_0x000100c87a2c(param_3,uVar4);
    _swift_release(uVar6);
    *param_2 = uVar4;
  }
  *param_1 = (byte)uVar2 & 1;
  return;
}



/* Entry: 1040b825c; end: 1040b8303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040b825c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113813110;
  lVar2 = 0x112da1578;
  func_0x0001000285a8(0x112da1578,&UNK_10dcd5b50);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_113060138;
  lVar2 = 0x113060140;
  func_0x0001000285a8(0x113060140,&UNK_10dcd5728);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113060150));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_113060128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040b8304; end: 1040b8377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040b8304(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x0001000c74f0(&uStack_38);
  uVar1 = uStack_38;
  func_0x0001000f3768(uStack_38);
  _swift_bridgeObjectRelease(uStack_38);
  uVar2 = uVar1;
  func_0x0001000f394c(uVar1);
  _swift_bridgeObjectRelease(uVar1);
  return uVar2;
}



/* Entry: 1040b8378; end: 1040b83b7;  */

void FUN_1040b8378(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001040b83b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1040b83b8; end: 1040b85cf;  */

void FUN_1040b83b8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  ulong uStack_68;
  
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x0001000285a8(0x1130600f0,&UNK_10dcd5640);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar9 + 0x10) == 0) {
    _swift_release(lVar9);
LAB_1040b85a8:
    *unaff_x20 = lVar4;
    return;
  }
  lVar1 = lVar9 + 0x40;
  uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar4 != lVar9) || (lVar1 + uVar6 * 8 <= lVar4 + 0x40U)) {
    _memmove(lVar4 + 0x40U,lVar1,uVar6 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
  uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uStack_68 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uStack_68 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_68 = uStack_68 & *(ulong *)(lVar9 + 0x40);
  if (uStack_68 == 0) goto LAB_1040b84ec;
  do {
    uVar7 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uStack_68 = uStack_68 - 1 & uStack_68;
    while( true ) {
      uVar7 = LZCOUNT(uVar7) | lVar11 << 6;
      lVar8 = *(long *)(lVar5 + 0x48) * uVar7;
      (**(code **)(lVar5 + 0x10))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(lVar9 + 0x30) + lVar8,lVar3);
      uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar7 * 8);
      (**(code **)(lVar5 + 0x20))
                (*(long *)(lVar4 + 0x30) + lVar8,
                 auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar10;
      _swift_retain(uVar10);
      if (uStack_68 != 0) break;
LAB_1040b84ec:
      do {
        lVar8 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1040b85d0);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar8) {
          _swift_release(lVar9);
          goto LAB_1040b85a8;
        }
        uStack_68 = *(ulong *)(lVar1 + lVar8 * 8);
        lVar11 = lVar11 + 1;
      } while (uStack_68 == 0);
      uVar7 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uStack_68 = uStack_68 - 1 & uStack_68;
      lVar11 = lVar8;
    }
  } while( true );
}



/* Entry: 1040b85d0; end: 1040b85e7;  */

undefined1  [16] FUN_1040b85d0(void)

{
  return ZEXT816(0x110744288);
}



/* Entry: 1040b85e8; end: 1040b85ff;  */

void FUN_1040b85e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1040b8180(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040b8600; end: 1040b863f;  */

void FUN_1040b8600(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1040b8640; end: 1040b8653;  */

void FUN_1040b8640(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1040b8654; end: 1040b86fb;  */

void FUN_1040b8654(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0x113060278;
  func_0x0001000285a8(0x113060278,&UNK_10dcd58c0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  __sScS12ContinuationV6finishyyF(uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 1040b86fc; end: 1040b8703;  */

void FUN_1040b86fc(void)

{
  if (lRam00000001130602c0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7ef370);
  return;
}



/* Entry: 1040b8704; end: 1040b882b;  */

long * FUN_1040b8704(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 1) {
      lVar6 = 0;
      __s10Foundation4UUIDVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      uVar4 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
        return param_1;
      }
      lVar6 = 0;
      __s10Foundation4UUIDVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      lVar6 = 0x113060238;
      func_0x0001000285a8(0x113060238,&UNK_10dcd57b0);
      iVar2 = *(int *)(lVar6 + 0x40);
      lVar6 = 0;
      __s8Dispatch0A4TimeVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040b882c; end: 1040b88bf;  */

void FUN_1040b882c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar1 == 1) {
    lVar1 = 0;
    __s10Foundation4UUIDVMa();
  }
  else {
    if ((int)lVar1 != 0) {
      return;
    }
    lVar1 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
    lVar1 = 0x113060238;
    func_0x0001000285a8(0x113060238,&UNK_10dcd57b0);
    param_1 = param_1 + *(int *)(lVar1 + 0x40);
    lVar1 = 0;
    __s8Dispatch0A4TimeVMa();
  }
                    /* WARNING: Could not recover jumptable at 0x0001040b88b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 1040b88c0; end: 1040b8acf;  */

long FUN_1040b88c0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    uVar3 = 1;
  }
  else {
    if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    lVar2 = 0x113060238;
    func_0x0001000285a8(0x113060238,&UNK_10dcd57b0);
    iVar1 = *(int *)(lVar2 + 0x40);
    lVar2 = 0;
    __s8Dispatch0A4TimeVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar2);
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Entry: 1040b8ad0; end: 1040b8b0b;  */

undefined8 FUN_1040b8ad0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001000c2d68();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1040b8b0c; end: 1040b8d1b;  */

long FUN_1040b8b0c(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar3 = 1;
  }
  else {
    if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar2 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    lVar2 = 0x113060238;
    func_0x0001000285a8(0x113060238,&UNK_10dcd57b0);
    iVar1 = *(int *)(lVar2 + 0x40);
    lVar2 = 0;
    __s8Dispatch0A4TimeVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar2);
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Entry: 1040b8d1c; end: 1040b8d53;  */

void FUN_1040b8d1c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001040b8d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 1040b8d54; end: 1040b8dbb;  */

undefined8 * FUN_1040b8d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 1040b8dbc; end: 1040b8e4b;  */

int FUN_1040b8dbc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



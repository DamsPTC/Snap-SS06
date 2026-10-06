/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c0d910; end: 103c0d95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_103c0d910(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  long unaff_x20;
  long lVar23;
  undefined *puVar24;
  long *plVar25;
  long *unaff_x22;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lStack_60;
  
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
    func_0x000107c60e78();
    UNRECOVERED_JUMPTABLE = (code *)&lStack_60;
    func_0x000107c610f8();
    func_0x000100bf260c(param_1,unaff_x20 + _DAT_112ff7a70);
    func_0x000100bf260c(param_2,unaff_x20 + _DAT_112ff7a78);
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
    func_0x0001000834e4(param_2);
    func_0x0001000834e4(param_1);
    return UNRECOVERED_JUMPTABLE;
  }
  lStack_60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = unaff_x22[0x15];
  if (lVar18 == 0) {
    (**(code **)(unaff_x22[0x1d] + 8))(unaff_x22[0x1e],unaff_x22[0x1c]);
LAB_103c0c214:
    func_0x000107c615c0(unaff_x22[0x1e]);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
                    /* WARNING: Could not recover jumptable at 0x000103c0c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
  }
  else {
    unaff_x22[0x20] = lVar18;
    lVar17 = unaff_x22[0x1a] + 0x10;
    func_0x000107c61618();
    unaff_x22[0x21] = lVar17;
    if (lVar17 == 0) {
LAB_103c0c1e8:
      lVar17 = unaff_x22[0x1d];
      lVar15 = unaff_x22[0x1e];
      lVar21 = unaff_x22[0x1c];
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x10));
      (**(code **)(lVar17 + 8))(lVar15,lVar21);
      func_0x000107c61574(lVar18);
      goto LAB_103c0c214;
    }
    lVar15 = *(long *)(lVar17 + _DAT_112ff7a10);
    unaff_x22[0x22] = lVar15;
    if (lVar15 == 0) {
LAB_103c0c1e4:
      func_0x000107c61170();
      goto LAB_103c0c1e8;
    }
    lVar21 = *(long *)(lVar17 + _DAT_112ff7a08);
    unaff_x22[0x23] = lVar21;
    if (lVar21 == 0) goto LAB_103c0c1e4;
    lVar23 = *(long *)(lVar17 + _DAT_112ff79f8);
    unaff_x22[0x24] = lVar23;
    if (lVar23 == 0) goto LAB_103c0c1e4;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar4 = lVar23;
    func_0x0001000f11b0();
    unaff_x22[0x25] = lVar4;
    unaff_x22[0x16] = 0;
    plVar25 = unaff_x22 + 0x16;
    iVar3 = 0;
    func_0x000107c60ad8(0,lVar21);
    lVar4 = unaff_x22[0x16];
    unaff_x22[0x26] = lVar4;
    if (iVar3 != 0 || lVar4 == 0) {
LAB_103c0c260:
      lVar4 = unaff_x22[0x1d];
      lVar6 = unaff_x22[0x1e];
      lVar13 = unaff_x22[0x1c];
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x10));
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar21);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar17);
      (**(code **)(lVar4 + 8))(lVar6,lVar13);
      func_0x000107c61574(lVar18);
LAB_103c0c324:
      func_0x000107c61170(unaff_x22[0x16]);
      goto LAB_103c0c214;
    }
    uVar22 = *(ulong *)(lVar18 + 0x10);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar5 = uVar22;
    FUN_103c0d0c0();
    func_0x000107c61170(uVar22);
    if ((uVar5 & 1) == 0) {
      func_0x000107c61170(lVar4);
      goto LAB_103c0c260;
    }
    lVar6 = *(long *)(lVar18 + 0x18);
    lVar13 = 1000000;
    func_0x000107c600c8();
    unaff_x22[0x27] = lVar6;
    unaff_x22[0x28] = lVar13;
    unaff_x22[0x29] = (long)plVar25;
    unaff_x22[0x17] = 0;
    iVar3 = 0;
    func_0x000107c60ad8(0,lVar15,unaff_x22 + 0x17);
    puVar24 = (undefined *)unaff_x22[0x17];
    unaff_x22[0x2a] = (long)puVar24;
    if ((iVar3 != 0) || (puVar24 == (undefined *)0x0)) {
LAB_103c0c2c8:
      lVar6 = unaff_x22[0x1d];
      lVar13 = unaff_x22[0x1e];
      lVar29 = unaff_x22[0x1c];
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x10));
      func_0x000107c61170(lVar15);
      func_0x000107c61170(lVar21);
      func_0x000107c61170(lVar23);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar4);
      (**(code **)(lVar6 + 8))(lVar13,lVar29);
      func_0x000107c61574(lVar18);
      func_0x000107c61170(unaff_x22[0x17]);
      goto LAB_103c0c324;
    }
    puVar7 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    func_0x000107c61174();
    unaff_x22[0x30] = lVar6;
    *(int *)(unaff_x22 + 0x31) = (int)lVar13;
    uVar20 = (undefined4)((ulong)lVar13 >> 0x20);
    *(undefined4 *)((long)unaff_x22 + 0x18c) = uVar20;
    unaff_x22[0x32] = (long)plVar25;
    func_0x000107c45a78();
    unaff_x22[0x2b] = (long)puVar7;
    if (puVar7 == (undefined *)0x0) {
LAB_103c0c2c0:
      func_0x000107c61170(puVar24);
      goto LAB_103c0c2c8;
    }
    puVar8 = PTR__OBJC_CLASS___VTFrameProcessorFrame_1126ad990;
    func_0x000107c610f8();
    unaff_x22[0x33] = lVar6;
    *(int *)(unaff_x22 + 0x34) = (int)lVar13;
    *(undefined4 *)((long)unaff_x22 + 0x1a4) = uVar20;
    unaff_x22[0x35] = (long)plVar25;
    func_0x000107c45a78();
    unaff_x22[0x2c] = (long)puVar8;
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c61170(puVar24);
      puVar24 = puVar7;
      goto LAB_103c0c2c0;
    }
    puVar24 = PTR__OBJC_CLASS___VTLowLatencySuperResolutionScalerParameters_1126ad998;
    func_0x000107c610f8();
    func_0x000107c488d4();
    unaff_x22[0x2d] = (long)puVar24;
    unaff_x22[7] = (long)(unaff_x22 + 0x18);
    unaff_x22[2] = (long)unaff_x22;
    unaff_x22[3] = (long)FUN_103c0c334;
    plVar25 = unaff_x22 + 2;
    func_0x000107c61448(plVar25,1);
    lVar18 = 0x112ff7a58;
    func_0x0001000285a8(0x112ff7a58,&UNK_10dc653b0);
    unaff_x22[10] = (long)PTR___NSConcreteStackBlock_11034bd00;
    unaff_x22[0x11] = lVar18;
    unaff_x22[0xb] = 0x42000000;
    unaff_x22[0xc] = (long)FUN_103c0c7a4;
    unaff_x22[0xd] = (long)&UNK_1106e8748;
    unaff_x22[0xe] = (long)plVar25;
    func_0x000107c61174(puVar24);
    func_0x000107c4f2dc(lVar23);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_60) {
      UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  func_0x000107c60e78();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25 = (long *)*unaff_x22;
  lVar17 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x170) = lVar17;
  if (lVar17 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
      UNRECOVERED_JUMPTABLE = FUN_103c0c3d0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    UNRECOVERED_JUMPTABLE = FUN_103c0c5b8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = plVar25[0x2d];
  lVar15 = plVar25[0x25];
  func_0x000107c615e8(plVar25[0x18]);
  func_0x000107c61170();
  func_0x0001000f11b0();
  if (SBORROW8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x103c0c5b4);
    (*UNRECOVERED_JUMPTABLE)();
  }
  lVar21 = plVar25[0x2c];
  lVar16 = plVar25[0x2d];
  lVar23 = plVar25[0x2a];
  lVar26 = plVar25[0x2b];
  lVar4 = plVar25[0x28];
  lVar14 = plVar25[0x29];
  lVar6 = plVar25[0x26];
  lVar28 = plVar25[0x27];
  lVar13 = plVar25[0x23];
  lVar30 = plVar25[0x24];
  lVar29 = plVar25[0x21];
  lVar1 = plVar25[0x22];
  lVar27 = plVar25[0x20];
  lVar9 = plVar25[0x1b];
  uVar12 = *(undefined8 *)(lVar9 + 0x18);
  lVar2 = *(long *)(lVar9 + 0x20);
  func_0x000103c0d85c(lVar9,uVar12);
  (**(code **)(lVar2 + 0x10))
            ((double)(lVar18 - lVar15) / 1000000.0,lVar28,lVar4,lVar14,uVar12,lVar2);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar27 + 0x20);
  uVar12 = *(undefined8 *)(lVar27 + 0x28);
  func_0x000107c6157c(uVar12);
  lVar18 = lVar21;
  func_0x000107c3ecb8();
  func_0x000107c61180();
  (*UNRECOVERED_JUMPTABLE)();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar18);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(lVar27);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(plVar25[0x17]);
  func_0x000107c61170(plVar25[0x16]);
  puVar10 = (undefined8 *)
            (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4);
  func_0x000107c615b8();
  plVar25[0x2f] = (long)puVar10;
  *puVar10 = plVar25;
  puVar10[1] = FUN_103c0c730;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    func_0x000107c60e78();
    lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = plVar25[0x2d];
    lVar23 = plVar25[0x2e];
    lVar17 = plVar25[0x2b];
    lVar6 = plVar25[0x2c];
    lVar28 = plVar25[0x2a];
    lVar30 = plVar25[0x26];
    lVar15 = plVar25[0x23];
    lVar13 = plVar25[0x24];
    lVar21 = plVar25[0x21];
    lVar29 = plVar25[0x22];
    lVar26 = plVar25[0x20];
    func_0x000107c61654();
    func_0x000107c61170(lVar29);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar30);
    func_0x000107c61170(lVar28);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(plVar25[0x17]);
    func_0x000107c61170(plVar25[0x16]);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar26 + 0x20);
    uVar12 = *(undefined8 *)(lVar26 + 0x28);
    uVar19 = *(undefined8 *)(lVar26 + 0x10);
    func_0x000107c6157c(uVar12);
    uVar11 = uVar19;
    func_0x000107c61174();
    (*UNRECOVERED_JUMPTABLE)(uVar19);
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(lVar26);
    func_0x000107c614ac(lVar23);
    puVar10 = (undefined8 *)
              (ulong)*(uint *)(PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaFTu_11034fd70 + 4)
    ;
    func_0x000107c615b8();
    plVar25[0x2f] = (long)puVar10;
    *puVar10 = plVar25;
    puVar10[1] = FUN_103c0c730;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *(long *)(*plVar25 + 0x178);
      func_0x000107c615c0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
        func_0x000107c60e78();
        plVar25 = (long *)(lVar18 + 0x20);
        func_0x000103c0d85c(plVar25,*(undefined8 *)(lVar18 + 0x38));
        UNRECOVERED_JUMPTABLE = (code *)*plVar25;
        if (lVar14 != 0) {
          uVar12 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          plVar25 = (long *)PTR___ss5ErrorWS_11034ee10;
          func_0x000107c613f8();
          *plVar25 = lVar14;
          func_0x000107c61174(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)
                    (UNRECOVERED_JUMPTABLE,uVar12);
          return UNRECOVERED_JUMPTABLE;
        }
        **(long **)(*(long *)(UNRECOVERED_JUMPTABLE + 0x40) + 0x28) = lVar4;
        func_0x000107c615f0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_throwingResume_110350088)(UNRECOVERED_JUMPTABLE);
        return UNRECOVERED_JUMPTABLE;
      }
      UNRECOVERED_JUMPTABLE = FUN_103c0d910;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)(plVar25 + 0x15);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4next9isolationxSgScA_pSgYi_tYaF_11034fd68)
            (puVar10,UNRECOVERED_JUMPTABLE,0,0);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 103c0d960; end: 103c0d9ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c0d960(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x000100bf260c(param_1,unaff_x20 + _DAT_112ff7a70);
  func_0x000100bf260c(param_2,unaff_x20 + _DAT_112ff7a78);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103c0d9f0; end: 103c0da4f; -[SCPlaybackPlayerServices init] */

void FUN_103c0d9f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServices.PlaybackPlayerServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0da1c);
  (*pcVar1)();
}



/* Entry: 103c0da50; end: 103c0da87; -[SCPlaybackPlayerServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c0da6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0da70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0da50(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112ff7a70))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff7a70));
  return;
}



/* Entry: 103c0da88; end: 103c0da9b;  */

bool FUN_103c0da88(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c0da9c; end: 103c0db47;  */

void FUN_103c0da9c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c0db48; end: 103c0db4b;  */

void FUN_103c0db48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65420;
  func_0x000107c61520(&UNK_10dc65420,&UNK_1106e8918);
  puRam0000000112ff7aa8 = puVar1;
  return;
}



/* Entry: 103c0db4c; end: 103c0db8b;  */

void FUN_103c0db4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7aa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65420;
  func_0x000107c61520(&UNK_10dc65420,&UNK_1106e8918);
  puRam0000000112ff7aa8 = puVar1;
  return;
}



/* Entry: 103c0db8c; end: 103c0de67;  */

void FUN_103c0db8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c0de68; end: 103c0decf;  */

undefined8 * FUN_103c0de68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000101e67db4(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000101e596c4(uVar1);
  return param_1;
}



/* Entry: 103c0ded0; end: 103c0dfeb;  */

int FUN_103c0ded0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c0dfec; end: 103c0e203;  */

void FUN_103c0dfec(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 103c0e204; end: 103c0e21f;  */

uint FUN_103c0e204(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  double dVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  uint uVar10;
  
  dVar6 = *param_1;
  dVar1 = param_1[1];
  dVar9 = *param_2;
  dVar2 = param_2[1];
  cVar3 = *(char *)(param_2 + 2);
  bVar4 = *(byte *)(param_1 + 2);
  if (bVar4 < 2) {
    if ((bVar4 == 0) && (cVar3 == '\0')) {
      uVar10 = 0;
      if (dVar6 == dVar9) {
        uVar10 = (uint)(dVar1 == dVar2);
      }
      goto LAB_103c0e3c8;
    }
  }
  else if (bVar4 == 2) {
    if (cVar3 == '\x02') {
      func_0x000101e67d60();
      puVar8 = &UNK_1106e89a8;
      puVar7 = puVar8;
      dVar9 = dVar6;
      func_0x000107c60640();
      func_0x000107c60640();
      if (puVar7 == puVar8 && dVar9 == dVar6) {
        uVar10 = 1;
      }
      else {
        func_0x000107c605b8(puVar7,dVar9,puVar8,dVar6,0);
        uVar10 = (uint)puVar7;
      }
      func_0x000107c6142c(dVar9);
      func_0x000107c6142c(dVar6);
      goto LAB_103c0e3c8;
    }
  }
  else {
    uVar5 = (long)dVar1 + (ulong)((ulong)dVar6 >= 2);
    if ((long)-uVar5 < 0 == SCARRY8(~uVar5,(ulong)((ulong)dVar6 < 2))) {
      if (dVar6 == 0.0 && dVar1 == 0.0) {
        if ((cVar3 == '\x03') && (dVar2 == 0.0 && dVar9 == 0.0)) {
LAB_103c0e3bc:
          uVar10 = 1;
          goto LAB_103c0e3c8;
        }
      }
      else if ((cVar3 == '\x03') && (dVar9 == 4.94065645841247e-324)) goto LAB_103c0e3b8;
    }
    else if (dVar6 == 9.88131291682493e-324 && dVar1 == 0.0) {
      if ((cVar3 == '\x03') && (dVar9 == 9.88131291682493e-324)) goto LAB_103c0e3b8;
    }
    else if (dVar6 == 1.48219693752374e-323 && dVar1 == 0.0) {
      if ((cVar3 == '\x03') && (dVar9 == 1.48219693752374e-323)) {
LAB_103c0e3b8:
        if (dVar2 == 0.0) goto LAB_103c0e3bc;
      }
    }
    else if ((cVar3 == '\x03') && (dVar9 == 1.97626258336499e-323)) goto LAB_103c0e3b8;
  }
  uVar10 = 0;
LAB_103c0e3c8:
  return uVar10 & 1;
}



/* Entry: 103c0e220; end: 103c0e3e3;  */

uint FUN_103c0e220(double param_1,double param_2,byte param_3,double param_4,double param_5,
                  char param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  uint uVar5;
  
  if (param_3 < 2) {
    if ((param_3 == 0) && (param_6 == '\0')) {
      uVar5 = 0;
      if (param_1 == param_4) {
        uVar5 = (uint)(param_2 == param_5);
      }
      goto LAB_103c0e3c8;
    }
  }
  else if (param_3 == 2) {
    if (param_6 == '\x02') {
      func_0x000101e67d60();
      puVar3 = &UNK_1106e89a8;
      puVar2 = puVar3;
      dVar4 = param_1;
      func_0x000107c60640();
      func_0x000107c60640();
      if (puVar2 == puVar3 && dVar4 == param_1) {
        uVar5 = 1;
      }
      else {
        func_0x000107c605b8(puVar2,dVar4,puVar3,param_1,0);
        uVar5 = (uint)puVar2;
      }
      func_0x000107c6142c(dVar4);
      func_0x000107c6142c(param_1);
      goto LAB_103c0e3c8;
    }
  }
  else {
    uVar1 = (long)param_2 + (ulong)((ulong)param_1 >= 2);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)((ulong)param_1 < 2))) {
      if (param_1 == 0.0 && param_2 == 0.0) {
        if ((param_6 == '\x03') && (param_5 == 0.0 && param_4 == 0.0)) {
LAB_103c0e3bc:
          uVar5 = 1;
          goto LAB_103c0e3c8;
        }
      }
      else if ((param_6 == '\x03') && (param_4 == 4.94065645841247e-324)) goto LAB_103c0e3b8;
    }
    else if (param_1 == 9.88131291682493e-324 && param_2 == 0.0) {
      if ((param_6 == '\x03') && (param_4 == 9.88131291682493e-324)) goto LAB_103c0e3b8;
    }
    else if (param_1 == 1.48219693752374e-323 && param_2 == 0.0) {
      if ((param_6 == '\x03') && (param_4 == 1.48219693752374e-323)) {
LAB_103c0e3b8:
        if (param_5 == 0.0) goto LAB_103c0e3bc;
      }
    }
    else if ((param_6 == '\x03') && (param_4 == 1.97626258336499e-323)) goto LAB_103c0e3b8;
  }
  uVar5 = 0;
LAB_103c0e3c8:
  return uVar5 & 1;
}



/* Entry: 103c0e3e4; end: 103c0e407;  */

void FUN_103c0e3e4(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((char)param_1[2] != '\x02') {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      return;
    }
    uVar1 = uVar1 & 0x3fffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar1,param_1[1]);
  return;
}



/* Entry: 103c0e408; end: 103c0e4a3;  */

undefined8 * FUN_103c0e408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101e67da0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103c0e4a4; end: 103c0e4e7;  */

undefined8 * FUN_103c0e4a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000103c0e3f4(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103c0e4e8; end: 103c0e607;  */

int FUN_103c0e4e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c0e608; end: 103c0e677;  */

undefined8 * FUN_103c0e608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103c0e678; end: 103c0e723;  */

int FUN_103c0e678(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c0e724; end: 103c0e89b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c0e724(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112ff7ab0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ff7ab8,0);
  func_0x000107c61428(lVar1,auStack_58,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  puVar2 = auStack_68;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 103c0e89c; end: 103c0e8fb; -[_TtC24SCPlaybackPlayerServices39VideoPlayerSampleBufferPlaybackDelegate init] */

void FUN_103c0e89c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServices.VideoPlayerSampleBufferPlaybackDelegate",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c0e8c8);
  (*pcVar1)();
}



/* Entry: 103c0e8fc; end: 103c0e933; -[_TtC24SCPlaybackPlayerServices39VideoPlayerSampleBufferPlaybackDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0e8fc(long param_1)

{
  func_0x000101e5f674(param_1 + _DAT_112ff7ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ff7ab8);
  return;
}



/* Entry: 103c0e934; end: 103c0e9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0e934(undefined8 param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = unaff_x20 + _DAT_112ff7ab0;
  lVar1 = lVar3;
  if ((param_2 & 1) == 0) {
    func_0x000107c61428(lVar3,auStack_48,0,0);
    func_0x000107c61618();
    if (lVar1 == 0) goto LAB_103c0e9e0;
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c614f0();
    pcVar2 = *(code **)(*(long *)(lVar3 + 0x18) + 0x28);
  }
  else {
    func_0x000107c61428(lVar3,auStack_48,0,0);
    func_0x000107c61618();
    if (lVar1 == 0) goto LAB_103c0e9e0;
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c614f0();
    pcVar2 = *(code **)(*(long *)(lVar3 + 0x18) + 0x20);
  }
  (*pcVar2)();
  func_0x000107c615e8(lVar1);
LAB_103c0e9e0:
  func_0x000107c49910(param_1);
  return;
}



/* Entry: 103c0e9fc; end: 103c0ea53; -[_TtC24SCPlaybackPlayerServices39VideoPlayerSampleBufferPlaybackDelegate pictureInPictureController:setPlaying:] */

/* WARNING: Possible PIC construction at 0x000103c0ea3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0ea40) */

void FUN_103c0e9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103c0e934(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c0ea54; end: 103c0eae3; -[_TtC24SCPlaybackPlayerServices39VideoPlayerSampleBufferPlaybackDelegate pictureInPictureControllerTimeRangeForPlayback:] */

void FUN_103c0ea54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_103c0f0f0(&uStack_70);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  *param_1 = uStack_70;
  param_1[1] = uStack_68;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = uStack_50;
  param_1[5] = uStack_48;
  return;
}



/* Entry: 103c0eae4; end: 103c0eae7; -[_TtC24SCPlaybackPlayerServices39VideoPlayerSampleBufferPlaybackDelegate pictureInPictureController:didTransitionToRenderSize:] */

void FUN_103c0eae4(void)

{
  return;
}



/* Entry: 103c0eae8; end: 103c0eb97; -[_TtC24SCPlaybackPlayerServices39VideoPlayerSampleBufferPlaybackDelegate pictureInPictureControllerIsPlaybackPaused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103c0eae8(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + _DAT_112ff7ab0;
  func_0x000107c61428(lVar2,auStack_58,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    lVar4 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar5 = *(code **)(lVar4 + 0x40);
    func_0x000107c61174(param_1);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 103c0eb98; end: 103c0ef83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0eb98(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long unaff_x20;
  char *pcVar13;
  code *pcVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  double dVar18;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  ulong uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  puVar1 = &UNK_1106e8c80;
  func_0x000107c613fc(&UNK_1106e8c80,0x11,7);
  pcVar13 = puVar1 + 0x10;
  *pcVar13 = '\0';
  puVar2 = &UNK_1106e8ca8;
  func_0x000107c613fc(&UNK_1106e8ca8,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(code **)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(code **)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  uVar4 = unaff_x20 + _DAT_112ff7ab0;
  uVar10 = 0;
  func_0x000107c61428(uVar4,auStack_80,0,0);
  uVar3 = uVar4;
  func_0x000107c61618();
  if (uVar3 == 0) {
    func_0x000107c61428(pcVar13,&uStack_98,1,0);
    if (*pcVar13 == '\x01') {
      func_0x000107c6157c(param_7);
      func_0x000107c6157c(param_5);
      goto LAB_103c0ef5c;
    }
    puVar1[0x10] = 1;
    func_0x000107c6157c(param_7);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(puVar1);
    (*param_4)();
    (*param_6)();
  }
  else {
    lVar15 = *(long *)(uVar4 + 8);
    uVar4 = uVar3;
    func_0x000107c614f0();
    lVar17 = *(long *)(lVar15 + 0x20);
    pcVar14 = *(code **)(lVar17 + 0x10);
    uStack_98 = uVar3;
    func_0x000107c6157c(param_7);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(puVar1);
    uVar5 = uVar4;
    (*pcVar14)(uVar4,lVar17);
    func_0x000107c600d8();
    if ((uVar5 & 1) == 0) {
      func_0x000107c61428(pcVar13,&uStack_98,1,0);
      if (*pcVar13 != '\x01') {
        puVar1[0x10] = 1;
        (*param_4)();
        (*param_6)();
      }
      func_0x000107c61574(puVar1);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(uVar3);
      return;
    }
    dVar9 = *(double *)(lVar15 + 8);
    uVar6 = uVar4;
    uStack_98 = uVar3;
    (**(code **)((long)dVar9 + 0x10))();
    uVar5 = uVar4;
    uVar11 = uVar10;
    uStack_a0 = uVar3;
    (*pcVar14)();
    uStack_b8 = param_1;
    dStack_b0 = (double)param_2;
    uStack_a8 = param_3;
    uStack_98 = uVar5;
    lStack_90 = lVar17;
    uStack_88 = uVar11;
    func_0x000107c60a34(&uStack_d0,&uStack_98,&uStack_b8);
    uStack_b8 = *(ulong *)PTR__kCMTimeZero_110348670;
    uStack_a8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_98 = uStack_d0;
    uStack_88 = uStack_c0;
    dVar18 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
    dStack_b0 = dVar18;
    func_0x000107c60a48(&uStack_d0,&uStack_98,&uStack_b8);
    uStack_d8 = uStack_c0;
    uVar12 = uStack_c4;
    uVar16 = uStack_c8;
    uVar5 = uStack_d0;
    uVar7 = uVar6;
    func_0x000107c600d8(uVar6,dVar9,uVar10);
    if ((uVar7 & 1) == 0) {
    }
    else {
      func_0x000107c600d4(uVar6,dVar9,uVar10);
      if (dVar18 <= 0.0) {
      }
      else {
        uStack_98 = uVar5;
        uStack_88 = uStack_d8;
        uStack_b8 = uVar6;
        dStack_b0 = dVar9;
        uStack_a8 = uVar10;
        func_0x000107c60a4c(&uStack_d0,&uStack_98,&uStack_b8);
        uStack_d8 = uStack_c0;
        uVar5 = uStack_d0;
        uVar16 = uStack_c8;
        uVar12 = uStack_c4;
      }
    }
    puVar8 = &UNK_1106e8cd0;
    uStack_98 = uVar3;
    func_0x000107c613fc(&UNK_1106e8cd0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x103c0f29c;
    *(undefined **)(puVar8 + 0x18) = puVar2;
    lVar17 = *(long *)(lVar15 + 0x18);
    pcVar14 = *(code **)(lVar17 + 0x38);
    func_0x000107c6157c(puVar2);
    (*pcVar14)(uVar5,CONCAT44(uVar12,uVar16),uStack_d8,FUN_103c0f2a0,puVar8,uVar4,lVar17);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(uVar3);
    puVar1 = puVar8;
  }
  func_0x000107c61574(puVar1);
LAB_103c0ef5c:
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 103c0ef84; end: 103c0f067; -[_TtC24SCPlaybackPlayerServices39VideoPlayerSampleBufferPlaybackDelegate pictureInPictureController:skipByInterval:completionHandler:] */

/* WARNING: Possible PIC construction at 0x000103c0f040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c0f044) */

void FUN_103c0ef84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar5 = param_4[2];
  func_0x000107c60bc4();
  puVar3 = &UNK_1106e8c30;
  func_0x000107c613fc(&UNK_1106e8c30,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  puVar4 = &UNK_1106e8c58;
  func_0x000107c613fc(&UNK_1106e8c58,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_103c0eb98(uVar1,uVar2,uVar5,FUN_103c0f288,puVar3,0x103c0f294,puVar4);
  func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c0f068; end: 103c0f0ef;  */

void FUN_103c0f068(long param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_70,1,0);
    *(undefined1 *)(param_1 + 0x10) = 1;
    (*param_2)();
    (*param_4)();
  }
  return;
}



/* Entry: 103c0f0f0; end: 103c0f267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0f0f0(ulong *param_1,double param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulong uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  
  uVar2 = unaff_x20 + _DAT_112ff7ab0;
  uVar4 = 0;
  func_0x000107c61428(uVar2,auStack_b8,0,0);
  uVar1 = uVar2;
  func_0x000107c61618();
  if (uVar1 == 0) {
    uStack_a0 = *(ulong *)PTR__kCMTimeZero_110348670;
    uStack_98 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_94 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uStack_90 = *(ulong *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_78 = uStack_90;
    uStack_88 = uStack_a0;
    uStack_80 = uStack_98;
    uStack_7c = uStack_94;
  }
  else {
    lVar5 = *(long *)(uVar2 + 8);
    uVar2 = uVar1;
    func_0x000107c614f0();
    lVar5 = *(long *)(lVar5 + 8);
    uVar6 = uVar1;
    (**(code **)(lVar5 + 0x10))();
    uVar3 = uVar2;
    func_0x000107c600d8();
    if ((uVar3 & 1) == 0) {
      func_0x000107c5ff30(&uStack_a0,*(undefined8 *)PTR__kCMTimeNegativeInfinity_110348650,
                          *(undefined8 *)(PTR__kCMTimeNegativeInfinity_110348650 + 8),
                          *(undefined8 *)(PTR__kCMTimeNegativeInfinity_110348650 + 0x10),
                          *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658,
                          *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8),
                          *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10),in_x6,in_x7
                          ,uVar6);
      func_0x000107c615e8(uVar1);
    }
    else {
      func_0x000107c600d4(uVar2,lVar5,uVar4);
      uStack_a0 = *(ulong *)PTR__kCMTimeZero_110348670;
      uStack_98 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_94 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      uStack_90 = *(ulong *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x000107c615e8(uVar1);
      uStack_78 = uVar4;
      uStack_88 = uVar2;
      uStack_80 = (int)lVar5;
      uStack_7c = (int)((ulong)lVar5 >> 0x20);
      if (param_2 <= 0.0) {
        uStack_78 = uStack_90;
        uStack_88 = uStack_a0;
        uStack_80 = uStack_98;
        uStack_7c = uStack_94;
      }
    }
  }
  *param_1 = uStack_a0;
  *(undefined4 *)(param_1 + 1) = uStack_98;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_94;
  param_1[2] = uStack_90;
  param_1[3] = uStack_88;
  *(undefined4 *)(param_1 + 4) = uStack_80;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_7c;
  param_1[5] = uStack_78;
  return;
}



/* Entry: 103c0f268; end: 103c0f287;  */

void FUN_103c0f268(void)

{
  func_0x000107c61168(&PTR_PTR_1129463e8);
  return;
}



/* Entry: 103c0f288; end: 103c0f29f;  */

void FUN_103c0f288(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c0f290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103c0f2a0; end: 103c0f2bf;  */

void FUN_103c0f2a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c0f2c0; end: 103c0f2f3;  */

void FUN_103c0f2c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c0f2f4; end: 103c0f317;  */

void FUN_103c0f2f4(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  pcVar3 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x30));
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_70,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    (*pcVar2)();
    (*pcVar3)();
  }
  return;
}



/* Entry: 103c0f318; end: 103c0f3c3;  */

void FUN_103c0f318(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c0f3c4; end: 103c0f443;  */

void FUN_103c0f3c4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103c0f444; end: 103c0f483;  */

void FUN_103c0f444(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65760;
  func_0x000107c61520(&UNK_10dc65760,&UNK_1106e8d68);
  puRam0000000112ff7ae8 = puVar1;
  return;
}



/* Entry: 103c0f484; end: 103c0f63b;  */

ulong FUN_103c0f484(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_2[1];
  if (param_1[1] == 0) {
    return (ulong)(uVar2 == 0);
  }
  if (uVar2 != 0) {
    uVar1 = *param_1;
    if (uVar1 != *param_2 || param_1[1] != uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return uVar1;
    }
    return 1;
  }
  return 0;
}



/* Entry: 103c0f63c; end: 103c0f6ab;  */

undefined8 * FUN_103c0f63c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103c0f6ac; end: 103c0f7a3;  */

int FUN_103c0f6ac(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 103c0f7a4; end: 103c0f87f;  */

long FUN_103c0f7a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c0f880; end: 103c0f8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c0f880(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  func_0x0001006bf3cc(param_1,unaff_x20 + _DAT_112ff7af0);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103c0f8f0; end: 103c0f923;  */

void FUN_103c0f8f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c0f924; end: 103c0f933; -[_TtC33PerceptualGenerativeModelServices33PerceptualGenerativeModelServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c0f924(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112ff7af0))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff7af0));
  return;
}



/* Entry: 103c0f934; end: 103c0f9db;  */

int FUN_103c0f934(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x11] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c0f9dc; end: 103c0fbab;  */

/* WARNING: Possible PIC construction at 0x000103c0fbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c0fc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c10134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c10190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c10030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c1007c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c100b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c100e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c0ff8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c100e4) */
/* WARNING: Removing unreachable block (ram,0x000103c100b4) */
/* WARNING: Removing unreachable block (ram,0x000103c10080) */
/* WARNING: Removing unreachable block (ram,0x000103c100e8) */
/* WARNING: Removing unreachable block (ram,0x000103c10034) */
/* WARNING: Removing unreachable block (ram,0x000103c10194) */
/* WARNING: Removing unreachable block (ram,0x000103c10138) */
/* WARNING: Removing unreachable block (ram,0x000103c0fc90) */
/* WARNING: Removing unreachable block (ram,0x000103c0fbf4) */
/* WARNING: Removing unreachable block (ram,0x000103c0ff90) */

undefined1  [16] FUN_103c0f9dc(ulong param_1,undefined8 param_2,code *param_3)

{
  code cVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  char *pcVar6;
  code *unaff_x19;
  code *unaff_x20;
  code *unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  code *in_stack_00000000;
  code *in_stack_00000008;
  long in_stack_00000020;
  code *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  code *in_stack_00000040;
  code *in_stack_00000048;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [64];
  
  pcVar5 = (code *)0xee00726f72724565;
  pcVar3 = (code *)0x636e657265666e69;
  pcVar6 = (char *)(param_1 & 0xff);
  pcVar4 = pcVar3;
  pcVar2 = (code *)pcVar6;
  switch(pcVar6) {
  default:
    pcVar6 = "cationFailed";
  case (char *)0x40:
  case (char *)0x4e:
  case (char *)0x8e:
  case (char *)0xc6:
    pcVar6 = pcVar6 + 0xa0;
  case (char *)0x33:
  case (char *)0x47:
  case (char *)0x5b:
  case (char *)0x6f:
  case (char *)0x77:
  case (char *)0x7f:
  case (char *)0x87:
  case (char *)0x9b:
  case (char *)0xaf:
  case (char *)0xb7:
  case (char *)0xbf:
  case (char *)0xd3:
  case (char *)0xe7:
  case (char *)0xef:
  case (char *)0xf7:
  case (char *)0xff:
    pcVar6 = pcVar6 + -0x20;
  case (char *)0x3e:
  case (char *)0x66:
  case (char *)0xa6:
  case (char *)0xa8:
  case (char *)0xde:
    pcVar5 = (code *)((ulong)pcVar6 | 0x8000000000000000);
  case (char *)0x34:
  case (char *)0x68:
  case (char *)0x88:
  case (char *)0xe0:
    pcVar6 = (char *)0x11;
  case (char *)0x57:
  case (char *)0x97:
  case (char *)0xcf:
    auVar7._0_8_ = (ulong)pcVar6 | 0xd000000000000006;
    auVar7._8_8_ = pcVar5;
    return auVar7;
  case (char *)0x1:
  case (char *)0xe:
    pcVar6 = "missingFeatureValue";
  case (char *)0x31:
  case (char *)0x45:
  case (char *)0x59:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x7d:
  case (char *)0x85:
  case (char *)0x99:
  case (char *)0xad:
  case (char *)0xb5:
  case (char *)0xbd:
  case (char *)0xd1:
  case (char *)0xe5:
  case (char *)0xed:
  case (char *)0xf5:
  case (char *)0xfd:
    pcVar5 = (code *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
    pcVar6 = (char *)0xd000000000000011;
  case (char *)0x5d:
  case (char *)0x9d:
  case (char *)0xd5:
    pcVar3 = (code *)((ulong)pcVar6 | 2);
  case (char *)0x35:
    auVar14._8_8_ = pcVar5;
    auVar14._0_8_ = pcVar3;
    return auVar14;
  case (char *)0x2:
  case (char *)0xf:
    pcVar6 = "cationFailed";
  case (char *)0x71:
    auVar12._8_8_ = (ulong)(pcVar6 + 0x40) | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000019;
    return auVar12;
  case (char *)0x4:
  case (char *)0x11:
  case (char *)0x95:
  case (char *)0xcd:
  case (char *)0xf0:
    pcVar5 = (code *)0x800000010f1af020;
  case (char *)0xe8:
    auVar9._8_8_ = pcVar5;
    auVar9._0_8_ = 0xd000000000000016;
    return auVar9;
  case (char *)0x5:
  case (char *)0x12:
    auVar15._8_8_ = 0x800000010f1aeff0;
    auVar15._0_8_ = 0xd000000000000020;
    return auVar15;
  case (char *)0x6:
  case (char *)0x13:
  case (char *)0xd4:
    auVar16._8_8_ = 0x800000010f1aefd0;
    auVar16._0_8_ = 0xd00000000000001c;
    return auVar16;
  case (char *)0x7:
  case (char *)0x14:
  case (char *)0xb8:
    pcVar5 = (code *)0x800000010f1aefb0;
    pcVar6 = (char *)0x11;
  case (char *)0xb0:
    pcVar6 = (char *)((ulong)pcVar6 | 0xd000000000000000);
  case (char *)0xb1:
    auVar13._8_8_ = pcVar5;
    auVar13._0_8_ = pcVar6 + 7;
    return auVar13;
  case (char *)0x8:
  case (char *)0x15:
    auVar18._8_8_ = 0x800000010f1aef90;
    auVar18._0_8_ = 0xd000000000000011;
    return auVar18;
  case (char *)0x9:
  case (char *)0x16:
    auVar11._8_8_ = 0x800000010f1aef70;
    auVar11._0_8_ = 0xd000000000000012;
    return auVar11;
  case (char *)0xa:
  case (char *)0x17:
    pcVar5 = (code *)0x800000010f1aef50;
  case (char *)0xc0:
    auVar17._8_8_ = pcVar5;
    auVar17._0_8_ = 0xd00000000000001d;
    return auVar17;
  case (char *)0xb:
  case (char *)0x18:
    pcVar6 = "ads_ios_enable_sponsored_snap_story_ad_tracks_to_populate_promo_info";
  case (char *)0x24:
    pcVar5 = (code *)((ulong)(pcVar6 + 0xf20) | 0x8000000000000000);
  case (char *)0xf8:
    pcVar3 = (code *)0xd000000000000026;
  case (char *)0x55:
    auVar8._8_8_ = pcVar5;
    auVar8._0_8_ = pcVar3;
    return auVar8;
  case (char *)0xc:
  case (char *)0x19:
    pcVar5 = (code *)0x800000010f1aef00;
  case (char *)0x94:
    pcVar3 = (code *)0xd000000000000015;
  case (char *)0x3:
  case (char *)0x10:
    auVar10._8_8_ = pcVar5;
    auVar10._0_8_ = pcVar3;
    return auVar10;
  case (char *)0x21:
code_r0x000103c0fd7c:
    pcVar5 = (code *)((ulong)(pcVar6 + 0x20) | 0x8000000000000000);
code_r0x000103c0fd88:
    pcVar6 = (char *)0x11;
  case (char *)0x54:
  case (char *)0x5c:
    auVar24._8_8_ = pcVar5;
    auVar24._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) + 5;
    return auVar24;
  case (char *)0x22:
code_r0x000103c0fd20:
    pcVar5 = (code *)0xee00726f72724565;
    pcVar3 = (code *)0x636e657265666e69;
    pcVar4 = pcVar3;
    switch((ulong)(byte)pcVar6[0x10dc659cd] * 4 + 0x103c0fd38) {
    case 0x103c0fcfc:
      goto FUN_103c0fcfc;
    default:
      pcVar6 = "cationFailed";
    case 0x103c0fd3c:
      goto code_r0x000103c0fd3c;
    case 0x103c0fd40:
      goto code_r0x000103c0fd40;
    case 0x103c0fd44:
      goto code_r0x000103c0fd44;
    case 0x103c0fd48:
      goto code_r0x000103c0fd48;
    case 0x103c0fd4c:
      goto code_r0x000103c0fd4c;
    case 0x103c0fd58:
      pcVar6 = "ads_ios_enable_sponsored_snap_story_ad_tracks_to_populate_promo_info";
    case 0x103c0fd5c:
      pcVar5 = (code *)((ulong)(pcVar6 + 0xf20) | 0x8000000000000000);
code_r0x000103c0fd68:
      pcVar3 = (code *)0xd000000000000026;
      goto code_r0x000103c0fd74;
    case 0x103c0fd68:
      goto code_r0x000103c0fd68;
    case 0x103c0fd74:
      goto code_r0x000103c0fd74;
    case 0x103c0fd78:
      pcVar6 = "cationFailed";
      goto code_r0x000103c0fd7c;
    case 0x103c0fd88:
      goto code_r0x000103c0fd88;
    case 0x103c0fd98:
      pcVar5 = (code *)0x800000010f1aef00;
    case 0x103c0fda8:
      pcVar3 = (code *)0xd000000000000015;
code_r0x000103c0fdb4:
      auVar25._8_8_ = pcVar5;
      auVar25._0_8_ = pcVar3;
      return auVar25;
    case 0x103c0fdb4:
      goto code_r0x000103c0fdb4;
    case 0x103c0fdb8:
      goto code_r0x000103c0fdb8;
    case 0x103c0fdd8:
      pcVar6 = "cationFailed";
    case 0x103c0fddc:
      pcVar5 = (code *)((ulong)(pcVar6 + 0x40) | 0x8000000000000000);
      pcVar6 = (char *)0xd000000000000011;
      goto code_r0x000103c0fdf0;
    case 0x103c0fdf8:
      pcVar6 = "failedCbCrScaling";
      goto code_r0x000103c0fe04;
    case 0x103c0fe0c:
      goto code_r0x000103c0fe0c;
    case 0x103c0fe10:
code_r0x000103c0fe10:
      auVar28._8_8_ = pcVar5;
      auVar28._0_8_ = pcVar6 + 7;
      return auVar28;
    case 0x103c0fe18:
      pcVar6 = "missingFeatureValue";
    case 0x103c0fe20:
      pcVar5 = (code *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
      pcVar6 = (char *)0xd000000000000011;
code_r0x000103c0fe30:
      pcVar3 = (code *)((ulong)pcVar6 | 2);
code_r0x000103c0fe34:
      auVar29._8_8_ = pcVar5;
      auVar29._0_8_ = pcVar3;
      return auVar29;
    case 0x103c0fe30:
      goto code_r0x000103c0fe30;
    case 0x103c0fe34:
      goto code_r0x000103c0fe34;
    case 0x103c0fe38:
      auVar30._8_8_ = 0x800000010f1aeff0;
      auVar30._0_8_ = 0xd000000000000020;
      return auVar30;
    case 0x103c0fe58:
      auVar31._8_8_ = 0x800000010f1aefd0;
      auVar31._0_8_ = 0xd00000000000001c;
      return auVar31;
    case 0x103c0fe78:
      pcVar5 = (code *)0x800000010f1aef50;
    case 0x103c0fe88:
      auVar32._8_8_ = pcVar5;
      auVar32._0_8_ = 0xd00000000000001d;
      return auVar32;
    case 0x103c0fe98:
      auVar33._8_8_ = 0x800000010f1aef90;
      auVar33._0_8_ = 0xd000000000000011;
      return auVar33;
    case 0x103c0fec8:
      pcVar3 = unaff_x20 + 8;
    case 0x103c0fecc:
      func_0x000103c10594(pcVar3,&stack0x00000008);
      if (in_stack_00000020 == 0) {
        func_0x000103c105e4(&stack0x00000008);
      }
      else {
        func_0x0001000285a8(0x112dd8c00,&UNK_10d99c000);
code_r0x000103c0fefc:
        pcVar3 = (code *)register0x00000008;
code_r0x000103c0ff08:
        func_0x000107c6147c();
        unaff_x19 = in_stack_00000000;
        if (((ulong)pcVar3 & 1) != 0) {
          unaff_x20 = in_stack_00000000;
          func_0x000107c42210();
          func_0x000107c61180();
          pcVar3 = unaff_x20;
          func_0x000107c5faec();
code_r0x000103c0ff2c:
          func_0x000107c61170(unaff_x20);
          in_stack_00000008 = pcVar3;
          func_0x000107c5fb78(0x2e,0xe100000000000000);
          pcVar3 = unaff_x19;
          func_0x000107c3fcb0();
          in_stack_00000000 = pcVar3;
code_r0x000103c0ff5c:
          pcVar5 = (code *)PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          unaff_x21 = pcVar5;
code_r0x000103c0ff78:
          pcVar4 = unaff_x19;
          func_0x000107c5fb78();
code_r0x000103c0ff84:
          pcVar3 = unaff_x21;
          func_0x000107c61170(pcVar4);
code_r0x000103c0ff8c:
          break;
        }
      }
      pcVar3 = (code *)0x0;
      pcVar5 = (code *)0x0;
LAB_103c0ffa8:
      auVar34._8_8_ = pcVar5;
      auVar34._0_8_ = pcVar3;
      return auVar34;
    case 0x103c0fefc:
      goto code_r0x000103c0fefc;
    case 0x103c0ff08:
      goto code_r0x000103c0ff08;
    case 0x103c0ff2c:
      goto code_r0x000103c0ff2c;
    case 0x103c0ff5c:
      goto code_r0x000103c0ff5c;
    case 0x103c0ff78:
      goto code_r0x000103c0ff78;
    case 0x103c0ff84:
      goto code_r0x000103c0ff84;
    case 0x103c0ff8c:
      goto code_r0x000103c0ff8c;
    case 0x103c0ffa8:
      goto LAB_103c0ffa8;
    case 0x103c0ffbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
      auVar38._8_8_ = pcVar5;
      auVar38._0_8_ = pcVar3;
      return auVar38;
    case 0x103c0ffc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss5ErrorPsE5_codeSivg_11034edf0)();
      auVar37._8_8_ = pcVar5;
      auVar37._0_8_ = pcVar3;
      return auVar37;
    case 0x103c0ffc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss5ErrorPsE19_getEmbeddedNSErroryXlSgyF_11034ede8)();
      auVar36._8_8_ = pcVar5;
      auVar36._0_8_ = pcVar3;
      return auVar36;
    case 0x103c0ffd8:
      register0x00000008 = (BADSPACEBASE *)auStack_80;
    case 0x103c0ffec:
      pcVar5 = (code *)register0x00000008;
      func_0x000103c10594(unaff_x20 + 8,register0x00000008);
      if (*(long *)((long)register0x00000008 + 0x18) == 0) {
LAB_103c10090:
        func_0x000103c105e4(register0x00000008);
code_r0x000103c10098:
        *(undefined8 *)((long)register0x00000008 + 0x28) = 0;
        *(undefined8 *)((long)register0x00000008 + 0x30) = 0xe000000000000000;
        pcVar3 = (code *)0x1e;
code_r0x000103c100a8:
        func_0x000107c602fc(pcVar3);
        pcVar3 = *(code **)((long)register0x00000008 + 0x30);
      }
      else {
code_r0x000103c1000c:
        pcVar5 = (code *)((long)register0x00000008 + 0x28);
        FUN_103c1062c(register0x00000008,pcVar5);
        pcVar6 = (char *)0xe000000000000000;
code_r0x000103c1001c:
        *(undefined8 *)register0x00000008 = 0;
        *(char **)((long)register0x00000008 + 8) = pcVar6;
        func_0x000107c602fc(0x1e);
        pcVar3 = *(code **)((long)register0x00000008 + 8);
      }
      break;
    case 0x103c1000c:
      goto code_r0x000103c1000c;
    case 0x103c1001c:
      goto code_r0x000103c1001c;
    case 0x103c1003c:
      in_stack_00000008 = (code *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
      in_stack_00000000 = unaff_x21;
      func_0x0001000a8868(&stack0x00000028,in_stack_00000040);
      pcVar6 = *(char **)(in_stack_00000048 + 0x10);
      pcVar4 = in_stack_00000040;
      pcVar5 = in_stack_00000048;
    case 0x103c10068:
      pcVar3 = pcVar5;
      (*(code *)pcVar6)(pcVar4,pcVar3);
      pcVar5 = pcVar3;
      func_0x000107c5fb78();
      break;
    case 0x103c10090:
      goto LAB_103c10090;
    case 0x103c10098:
      goto code_r0x000103c10098;
    case 0x103c100a8:
      goto code_r0x000103c100a8;
    case 0x103c100d4:
      func_0x000107c5fb78();
      pcVar3 = unaff_x19;
      break;
    case 0x103c100f0:
      auVar35._8_8_ = 0xee00726f72724565;
      auVar35._0_8_ = 0x636e657265666e69;
      return auVar35;
    case 0x103c1010c:
      pcVar6 = (char *)0xe000000000000000;
      in_stack_00000028 = unaff_x19;
      in_stack_00000030 = unaff_x29;
      in_stack_00000038 = unaff_x30;
code_r0x000103c10120:
      in_stack_00000000 = (code *)0x0;
      in_stack_00000008 = (code *)pcVar6;
      func_0x000107c602fc(0x13);
      pcVar3 = in_stack_00000008;
      break;
    case 0x103c10120:
      goto code_r0x000103c10120;
    }
  case (char *)0x30:
    goto code_r0x000103c0fd00;
  case (char *)0x36:
  case (char *)0x5e:
  case (char *)0x9e:
  case (char *)0xd6:
    auVar21._8_8_ = 0xee00726f72724565;
    auVar21._0_8_ = 0x636e657265666e69;
    return auVar21;
  case (char *)0x48:
    cVar1 = *unaff_x20;
    func_0x000107c6068c(&stack0x00000008);
    unaff_x19 = (code *)(ulong)(byte)cVar1;
  case (char *)0x56:
  case (char *)0x96:
  case (char *)0xce:
    pcVar4 = unaff_x19;
    FUN_103c0f9dc(pcVar4);
  case (char *)0x6c:
  case (char *)0x74:
  case (char *)0x7c:
  case (char *)0x84:
    pcVar3 = pcVar5;
    func_0x000107c5fb58(&stack0x00000008,pcVar4,pcVar3);
    pcVar5 = pcVar4;
  case (char *)0x9c:
    break;
  case (char *)0x49:
  case (char *)0x58:
  case (char *)0x79:
  case (char *)0x81:
  case (char *)0x89:
  case (char *)0xb9:
  case (char *)0xc1:
    auVar19._8_8_ = 0xee00726f72724565;
    auVar19._0_8_ = 0x636e657265666e69;
    return auVar19;
  case (char *)0x4a:
  case (char *)0x7a:
  case (char *)0x82:
  case (char *)0x8a:
  case (char *)0xba:
  case (char *)0xc2:
  case (char *)0xea:
  case (char *)0xf2:
  case (char *)0xfa:
code_r0x000103c0fe04:
    pcVar5 = (code *)((ulong)pcVar6 | 0x8000000000000000);
    pcVar6 = (char *)0x11;
code_r0x000103c0fe0c:
    pcVar6 = (char *)((ulong)pcVar6 | 0xd000000000000000);
    goto code_r0x000103c0fe10;
  case (char *)0x4b:
  case (char *)0x7b:
  case (char *)0x83:
  case (char *)0x8b:
  case (char *)0xbb:
  case (char *)0xc3:
  case (char *)0xeb:
  case (char *)0xf3:
  case (char *)0xfb:
code_r0x000103c0fdf0:
    auVar27._0_8_ = (ulong)pcVar6 | 8;
    auVar27._8_8_ = pcVar5;
    return auVar27;
  case (char *)0x70:
code_r0x000103c0fdb8:
    pcVar5 = (code *)0x800000010f1aef70;
    pcVar3 = (code *)0xd000000000000012;
  case (char *)0x20:
    auVar26._8_8_ = pcVar5;
    auVar26._0_8_ = pcVar3;
    return auVar26;
  case (char *)0x72:
  case (char *)0xb2:
code_r0x000103c0fd74:
    auVar23._8_8_ = pcVar5;
    auVar23._0_8_ = pcVar3;
    return auVar23;
  case (char *)0x80:
    goto code_r0x000103c0fd4c;
  case (char *)0xac:
  case (char *)0xb4:
  case (char *)0xbc:
    pcVar4 = (code *)(ulong)(byte)*unaff_x20;
    pcVar3 = pcVar5;
    FUN_103c0f9dc(pcVar4);
    func_0x000107c5fb58(0x636e657265666e69,pcVar4,pcVar3);
    pcVar5 = pcVar4;
  case (char *)0x98:
    break;
  case (char *)0xcc:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0xe4:
  case (char *)0xec:
  case (char *)0xf4:
  case (char *)0xfc:
    *(code **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(code **)((long)register0x00000008 + 0x58) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    param_3 = (code *)(ulong)(byte)*unaff_x20;
    func_0x000107c6068c((undefined1 *)((long)register0x00000008 + 8),0);
    FUN_103c0f9dc(param_3);
    pcVar3 = (code *)((long)register0x00000008 + 8);
    unaff_x19 = pcVar5;
  case (char *)0xd0:
    pcVar5 = param_3;
    func_0x000107c5fb58(pcVar3,pcVar5,unaff_x19);
  case (char *)0x78:
    pcVar3 = unaff_x19;
    break;
  case (char *)0xe9:
  case (char *)0xf1:
  case (char *)0xf9:
    pcVar5 = pcRam636e657265666e71;
    pcVar2 = pcRam636e657265666e69;
    unaff_x19 = (code *)pcVar6;
  case (char *)0x32:
  case (char *)0x46:
  case (char *)0x5a:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0x7e:
  case (char *)0x86:
  case (char *)0x9a:
  case (char *)0xae:
  case (char *)0xb6:
  case (char *)0xbe:
  case (char *)0xd2:
  case (char *)0xe6:
  case (char *)0xee:
  case (char *)0xf6:
  case (char *)0xfe:
    pcVar3 = pcVar2;
    FUN_103c10530(pcVar3,pcVar5);
    *unaff_x19 = SUB81(pcVar3,0);
  case (char *)0x44:
    auVar20._8_8_ = pcVar5;
    auVar20._0_8_ = pcVar3;
    return auVar20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  auVar39._8_8_ = pcVar5;
  auVar39._0_8_ = pcVar3;
  return auVar39;
FUN_103c0fcfc:
  pcVar6 = (char *)(ulong)(byte)*unaff_x20;
code_r0x000103c0fd00:
  goto code_r0x000103c0fd20;
code_r0x000103c0fd3c:
  pcVar6 = pcVar6 + 0xa0;
code_r0x000103c0fd40:
  pcVar6 = pcVar6 + -0x20;
code_r0x000103c0fd44:
  pcVar5 = (code *)((ulong)pcVar6 | 0x8000000000000000);
code_r0x000103c0fd48:
  pcVar6 = (char *)0x11;
code_r0x000103c0fd4c:
  auVar22._0_8_ = (ulong)pcVar6 | 0xd000000000000006;
  auVar22._8_8_ = pcVar5;
  return auVar22;
}



/* Entry: 103c0fbac; end: 103c0fcfb;  */

void FUN_103c0fbac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_103c0f9dc(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c0fcfc; end: 103c0feb3;  */

undefined1  [16] FUN_103c0fcfc(void)

{
  undefined1 auVar1 [16];
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte *in_stack_00000000;
  code *in_stack_00000008;
  byte *in_stack_00000010;
  long in_stack_00000020;
  undefined1 auStack_80 [80];
  
code_r0x000103c0fcfc:
  pcVar5 = (char *)(ulong)*unaff_x20;
  pbVar4 = (byte *)0xee00726f72724565;
  pbVar2 = (byte *)0x636e657265666e69;
  pbVar3 = pbVar2;
  switch(*unaff_x20) {
  default:
    pcVar5 = "cationFailed";
  case 0x33:
  case 0x41:
  case 0x81:
  case 0xb9:
  case 0xf9:
    pcVar5 = pcVar5 + 0xa0;
  case 0x26:
  case 0x3a:
  case 0x4e:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x7a:
  case 0x8e:
  case 0xa2:
  case 0xaa:
  case 0xb2:
  case 0xc6:
  case 0xda:
  case 0xe2:
  case 0xea:
  case 0xf2:
    pcVar5 = pcVar5 + -0x20;
  case 0x31:
  case 0x59:
  case 0x99:
  case 0x9b:
  case 0xd1:
    pbVar4 = (byte *)((ulong)pcVar5 | 0x8000000000000000);
  case 0x27:
  case 0x5b:
  case 0x7b:
  case 0xd3:
    pcVar5 = (char *)0x11;
  case 0x4a:
  case 0x8a:
  case 0xc2:
    auVar6._0_8_ = (ulong)pcVar5 | 0xd000000000000006;
    auVar6._8_8_ = pbVar4;
    return auVar6;
  case 1:
    pcVar5 = "missingFeatureValue";
  case 0x24:
  case 0x38:
  case 0x4c:
  case 0x60:
  case 0x68:
  case 0x70:
  case 0x78:
  case 0x8c:
  case 0xa0:
  case 0xa8:
  case 0xb0:
  case 0xc4:
  case 0xd8:
  case 0xe0:
  case 0xe8:
  case 0xf0:
    pbVar4 = (byte *)((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
    pcVar5 = (char *)0xd000000000000011;
  case 0x50:
  case 0x90:
  case 200:
    pbVar2 = (byte *)((ulong)pcVar5 | 2);
code_r0x000103c0fe34:
    auVar13._8_8_ = pbVar4;
    auVar13._0_8_ = pbVar2;
    return auVar13;
  case 2:
    pcVar5 = "cationFailed";
  case 100:
    auVar11._8_8_ = (ulong)(pcVar5 + 0x40) | 0x8000000000000000;
    auVar11._0_8_ = 0xd000000000000019;
    return auVar11;
  case 3:
    goto code_r0x000103c0fdb4;
  case 4:
  case 0x88:
  case 0xc0:
  case 0xe3:
    pbVar4 = (byte *)0x800000010f1af020;
  case 0xdb:
    auVar8._8_8_ = pbVar4;
    auVar8._0_8_ = 0xd000000000000016;
    return auVar8;
  case 5:
    auVar14._8_8_ = 0x800000010f1aeff0;
    auVar14._0_8_ = 0xd000000000000020;
    return auVar14;
  case 6:
  case 199:
    auVar15._8_8_ = 0x800000010f1aefd0;
    auVar15._0_8_ = 0xd00000000000001c;
    return auVar15;
  case 7:
  case 0xab:
    pbVar4 = (byte *)0x800000010f1aefb0;
    pcVar5 = (char *)0x11;
  case 0xa3:
    pcVar5 = (char *)((ulong)pcVar5 | 0xd000000000000000);
code_r0x000103c0fe10:
    auVar12._8_8_ = pbVar4;
    auVar12._0_8_ = pcVar5 + 7;
    return auVar12;
  case 8:
    auVar17._8_8_ = 0x800000010f1aef90;
    auVar17._0_8_ = 0xd000000000000011;
    return auVar17;
  case 9:
    auVar10._8_8_ = 0x800000010f1aef70;
    auVar10._0_8_ = 0xd000000000000012;
    return auVar10;
  case 10:
    pbVar4 = (byte *)0x800000010f1aef50;
  case 0xb3:
    auVar16._8_8_ = pbVar4;
    auVar16._0_8_ = 0xd00000000000001d;
    return auVar16;
  case 0xb:
  case 0xf3:
    pcVar5 = "ads_ios_enable_sponsored_snap_story_ad_tracks_to_populate_promo_info";
  case 0x17:
    pbVar4 = (byte *)((ulong)(pcVar5 + 0xf20) | 0x8000000000000000);
  case 0xeb:
    pbVar2 = (byte *)0xd000000000000026;
code_r0x000103c0fd74:
    auVar7._8_8_ = pbVar4;
    auVar7._0_8_ = pbVar2;
    return auVar7;
  case 0xc:
    pbVar4 = (byte *)0x800000010f1aef00;
  case 0x87:
    pbVar2 = (byte *)0xd000000000000015;
code_r0x000103c0fdb4:
    auVar9._8_8_ = pbVar4;
    auVar9._0_8_ = pbVar2;
    return auVar9;
  case 0x13:
    goto code_r0x000103c100f0;
  case 0x14:
    goto code_r0x000103c10098;
  case 0x15:
    goto code_r0x000103c1003c;
  case 0x23:
    goto code_r0x000103c1001c;
  case 0x25:
  case 0x39:
  case 0x4d:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x79:
  case 0x8d:
  case 0xa1:
  case 0xa9:
  case 0xb1:
  case 0xc5:
  case 0xd9:
  case 0xe1:
  case 0xe9:
  case 0xf1:
    register0x00000008 = (BADSPACEBASE *)auStack_80;
  case 0x37:
    unaff_x21 = (byte *)0xd00000000000001c;
    pbVar4 = (byte *)register0x00000008;
    func_0x000103c10594(unaff_x20 + 8,register0x00000008);
    unaff_x19 = unaff_x20;
    if (*(long *)((long)register0x00000008 + 0x18) == 0) {
LAB_103c10090:
      func_0x000103c105e4(register0x00000008);
code_r0x000103c10098:
      *(undefined8 *)((long)register0x00000008 + 0x28) = 0;
      *(undefined8 *)((long)register0x00000008 + 0x30) = 0xe000000000000000;
      pbVar2 = (byte *)0x1e;
code_r0x000103c100a8:
      func_0x000107c602fc(pbVar2);
      func_0x000107c6142c(*(undefined8 *)((long)register0x00000008 + 0x30));
      *(byte **)((long)register0x00000008 + 0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + 0x30) = 0x800000010f1af0a0;
      FUN_103c0f9dc(*unaff_x19);
      unaff_x19 = pbVar4;
code_r0x000103c100d4:
      func_0x000107c5fb78();
      func_0x000107c6142c(unaff_x19);
      pbVar2 = *(byte **)((long)register0x00000008 + 0x28);
      pbVar4 = *(byte **)((long)register0x00000008 + 0x30);
    }
    else {
code_r0x000103c1000c:
      FUN_103c1062c(register0x00000008,(undefined1 *)((long)register0x00000008 + 0x28));
      pcVar5 = (char *)0xe000000000000000;
code_r0x000103c1001c:
      *(undefined8 *)register0x00000008 = 0;
      *(char **)((long)register0x00000008 + 8) = pcVar5;
      func_0x000107c602fc(0x1e);
      func_0x000107c6142c(*(undefined8 *)((long)register0x00000008 + 8));
      pcVar5 = "[PerceptualGenerativeModel] ";
code_r0x000103c1003c:
      *(byte **)register0x00000008 = unaff_x21;
      *(ulong *)((long)register0x00000008 + 8) = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
      pbVar2 = *(byte **)((long)register0x00000008 + 0x40);
      pbVar4 = *(byte **)((long)register0x00000008 + 0x48);
      func_0x0001000a8868((undefined8 *)((long)register0x00000008 + 0x28),pbVar2);
      pcVar5 = *(char **)(pbVar4 + 0x10);
code_r0x000103c10068:
      (*(code *)pcVar5)(pbVar2,pbVar4);
      func_0x000107c5fb78();
      func_0x000107c6142c(pbVar4);
      pbVar2 = *(byte **)register0x00000008;
      pbVar4 = *(byte **)((long)register0x00000008 + 8);
      func_0x0001000834e4((undefined8 *)((long)register0x00000008 + 0x28));
    }
code_r0x000103c100f0:
    auVar19._8_8_ = pbVar4;
    auVar19._0_8_ = pbVar2;
    return auVar19;
  case 0x28:
    goto code_r0x000103c0fe34;
  case 0x29:
  case 0x51:
  case 0x91:
  case 0xc9:
    goto code_r0x000103c1000c;
  case 0x3b:
    goto code_r0x000103c0ff78;
  case 0x3c:
  case 0x4b:
  case 0x6c:
  case 0x74:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
    auVar22._8_8_ = pbVar4;
    auVar22._0_8_ = pbVar2;
    return auVar22;
  case 0x3e:
  case 0x6e:
  case 0x76:
  case 0x7e:
  case 0xae:
  case 0xb6:
  case 0xde:
  case 0xe6:
  case 0xee:
  case 0xf6:
    pcVar5 = (char *)0xe000000000000000;
    unaff_x19 = pbVar2;
  case 0x3d:
  case 0x6d:
  case 0x75:
  case 0x7d:
  case 0xad:
  case 0xb5:
  case 0xdd:
  case 0xe5:
  case 0xed:
  case 0xf5:
    in_stack_00000000 = (byte *)0x0;
    in_stack_00000008 = (code *)pcVar5;
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(in_stack_00000008);
    in_stack_00000000 = (byte *)0xd000000000000011;
    in_stack_00000008 = (code *)0x800000010f1af0c0;
    func_0x000107c417f0(unaff_x19);
    func_0x000107c61180();
    pbVar2 = unaff_x19;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x19);
    func_0x000107c5fb78(pbVar2,pbVar4);
    func_0x000107c6142c(pbVar4);
    auVar1._8_8_ = in_stack_00000008;
    auVar1._0_8_ = in_stack_00000000;
    return auVar1;
  case 0x47:
  case 0x4f:
    goto code_r0x000103c100a8;
  case 0x48:
    goto code_r0x000103c0fd74;
  case 0x49:
  case 0x89:
  case 0xc1:
    goto code_r0x000103c0ff84;
  case 0x5f:
  case 0x67:
  case 0x6f:
  case 0x77:
    goto code_r0x000103c0ff8c;
  case 99:
    goto code_r0x000103c100d4;
  case 0x65:
  case 0xa5:
    goto LAB_103c10090;
  case 0x6b:
    goto code_r0x000103c0ff08;
  case 0x73:
    goto code_r0x000103c10068;
  case 0x7c:
  case 0xac:
  case 0xb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss5ErrorPsE5_codeSivg_11034edf0)();
    auVar21._8_8_ = pbVar4;
    auVar21._0_8_ = pbVar2;
    return auVar21;
  case 0x8b:
    goto code_r0x000103c0ff5c;
  case 0x8f:
    goto LAB_103c0ffa8;
  case 0x9f:
  case 0xa7:
  case 0xaf:
    goto code_r0x000103c0ff2c;
  case 0xa4:
    goto code_r0x000103c0fe10;
  case 0xbf:
    goto code_r0x000103c0fec8;
  case 0xc3:
    goto code_r0x000103c0fefc;
  case 0xd7:
  case 0xdf:
  case 0xe7:
  case 0xef:
    goto code_r0x000103c0fecc;
  case 0xdc:
  case 0xe4:
  case 0xec:
  case 0xf4:
    break;
  case 0xff:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss5ErrorPsE19_getEmbeddedNSErroryXlSgyF_11034ede8)();
    auVar20._8_8_ = pbVar4;
    auVar20._0_8_ = pbVar2;
    return auVar20;
  }
  goto code_r0x000103c0fcfc;
code_r0x000103c0fec8:
  pbVar2 = unaff_x20 + 8;
code_r0x000103c0fecc:
  func_0x000103c10594(pbVar2,&stack0x00000008);
  if (in_stack_00000020 == 0) {
    func_0x000103c105e4(&stack0x00000008);
  }
  else {
    func_0x0001000285a8(0x112dd8c00,&UNK_10d99c000);
code_r0x000103c0fefc:
    pbVar4 = (byte *)&stack0x00000008;
    pbVar2 = (byte *)register0x00000008;
code_r0x000103c0ff08:
    func_0x000107c6147c();
    unaff_x19 = in_stack_00000000;
    if (((ulong)pbVar2 & 1) != 0) {
      unaff_x20 = in_stack_00000000;
      func_0x000107c42210();
      func_0x000107c61180();
      pbVar2 = unaff_x20;
      func_0x000107c5faec();
code_r0x000103c0ff2c:
      func_0x000107c61170(unaff_x20);
      in_stack_00000008 = (code *)pbVar2;
      in_stack_00000010 = pbVar4;
      func_0x000107c5fb78(0x2e,0xe100000000000000);
      pbVar2 = unaff_x19;
      func_0x000107c3fcb0();
      in_stack_00000000 = pbVar2;
code_r0x000103c0ff5c:
      unaff_x21 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
code_r0x000103c0ff78:
      pbVar3 = unaff_x19;
      func_0x000107c5fb78();
code_r0x000103c0ff84:
      pbVar2 = unaff_x21;
      func_0x000107c61170(pbVar3);
code_r0x000103c0ff8c:
      func_0x000107c6142c(pbVar2);
      pbVar2 = (byte *)in_stack_00000008;
      pbVar4 = in_stack_00000010;
      goto LAB_103c0ffa8;
    }
  }
  pbVar2 = (byte *)0x0;
  pbVar4 = (byte *)0x0;
LAB_103c0ffa8:
  auVar18._8_8_ = pbVar4;
  auVar18._0_8_ = pbVar2;
  return auVar18;
}



/* Entry: 103c0feb4; end: 103c0ffbb;  */

undefined1  [16] FUN_103c0feb4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  long lStack_40;
  
  uVar2 = 0;
  func_0x000103c10594(unaff_x20 + 8,&uStack_58);
  if (lStack_40 == 0) {
    func_0x000103c105e4(&uStack_58);
  }
  else {
    uVar1 = 0x112dd8c00;
    func_0x0001000285a8(0x112dd8c00,&UNK_10d99c000);
    puVar4 = &uStack_58;
    func_0x000107c6147c(&uStack_60,puVar4,uVar1,&UNK_1106e92e8,6);
    if ((uVar2 & 1) != 0) {
      uVar1 = uStack_60;
      func_0x000107c42210();
      func_0x000107c61180();
      uVar3 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uStack_58 = uVar3;
      puStack_50 = puVar4;
      func_0x000107c5fb78(0x2e,0xe100000000000000);
      func_0x000107c3fcb0();
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c61170(uStack_60);
      func_0x000107c6142c(puVar5);
      goto LAB_103c0ffa8;
    }
  }
  uStack_58 = 0;
  puStack_50 = (undefined8 *)0x0;
LAB_103c0ffa8:
  auVar6._8_8_ = puStack_50;
  auVar6._0_8_ = uStack_58;
  return auVar6;
}



/* Entry: 103c0ffbc; end: 103c0ffd7;  */

void FUN_103c0ffbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103c0ffd8; end: 103c101ab;  */

undefined1  [16] FUN_103c0ffd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *unaff_x20;
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar3 = &uStack_80;
  func_0x000103c10594(unaff_x20 + 8,&uStack_80);
  if (lStack_68 == 0) {
    func_0x000103c105e4(&uStack_80);
    uStack_58 = 0;
    uStack_50 = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(uStack_50);
    uStack_58 = 0xd00000000000001c;
    uStack_50 = 0x800000010f1af0a0;
    FUN_103c0f9dc(*unaff_x20);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
  }
  else {
    FUN_103c1062c(&uStack_80,&uStack_58);
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0xd00000000000001c;
    uStack_78 = 0x800000010f1af0a0;
    func_0x0001000a8868(&uStack_58,uStack_40);
    lVar4 = lStack_38;
    (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar4);
    uVar2 = uStack_78;
    uVar1 = uStack_80;
    func_0x0001000834e4(&uStack_58);
    uStack_58 = uVar1;
    uStack_50 = uVar2;
  }
  auVar5._8_8_ = uStack_50;
  auVar5._0_8_ = uStack_58;
  return auVar5;
}



/* Entry: 103c101ac; end: 103c101b3;  */

undefined1  [16] FUN_103c101ac(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c417f0(uVar3);
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c5fb78(uVar2,param_2);
  func_0x000107c6142c(param_2);
  auVar1._8_8_ = 0x800000010f1af0c0;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 103c101b4; end: 103c10243;  */

undefined1  [16] FUN_103c101b4(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
  func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                      PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af0e0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 103c10244; end: 103c1025b;  */

undefined1  [16] FUN_103c10244(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x29);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030;
  func_0x000107c6057c(PTR___ss6UInt32VN_11034f020,
                      PTR___ss6UInt32Vs23CustomStringConvertiblesWP_11034f030);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af0e0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 103c1025c; end: 103c102eb;  */

undefined1  [16] FUN_103c1025c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af110;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 103c102ec; end: 103c102f3;  */

undefined1  [16] FUN_103c102ec(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x17);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af110;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 103c102f4; end: 103c10383;  */

undefined1  [16] FUN_103c102f4(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af130;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Entry: 103c10384; end: 103c1038b;  */

undefined1  [16] FUN_103c10384(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af130;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Entry: 103c1038c; end: 103c1041b;  */

undefined1  [16] FUN_103c1038c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x27);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af150;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 103c1041c; end: 103c10423;  */

undefined1  [16] FUN_103c1041c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  func_0x000107c602fc(0x27);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010f1af150;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 103c10424; end: 103c10517;  */

undefined1  [16] FUN_103c10424(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(0xe000000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x746867696568202c,0xe90000000000003d);
  func_0x000107c6057c(puVar2,puVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  auVar1._8_8_ = 0x800000010f1af180;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Entry: 103c10518; end: 103c1052f;  */

undefined1  [16] FUN_103c10518(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(0xe000000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c5fb78(0x746867696568202c,0xe90000000000003d);
  func_0x000107c6057c(puVar2,puVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  auVar1._8_8_ = 0x800000010f1af180;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Entry: 103c10530; end: 103c1062b;  */

ulong FUN_103c10530(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (0xc < uVar1) {
    uVar1 = 0xd;
  }
  return uVar1;
}



/* Entry: 103c1062c; end: 103c10647;  */

undefined8 * FUN_103c1062c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103c10648; end: 103c10687;  */

void FUN_103c10648(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc659f0;
  func_0x000107c61520(&UNK_10dc659f0,&UNK_1106e92c8);
  puRam0000000112ff7b20 = puVar1;
  return;
}



/* Entry: 103c10688; end: 103c106cf;  */

void FUN_103c10688(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000101e95c20();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c106d0; end: 103c1070f;  */

void FUN_103c106d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65b24;
  func_0x000107c61520(&UNK_10dc65b24,&UNK_1106e92e8);
  puRam0000000112ff7b28 = puVar1;
  return;
}



/* Entry: 103c10710; end: 103c10733;  */

void FUN_103c10710(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c10734();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c10734; end: 103c10773;  */

void FUN_103c10734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65b80;
  func_0x000107c61520(&UNK_10dc65b80,&UNK_1106e9310);
  puRam0000000112ff7b30 = puVar1;
  return;
}



/* Entry: 103c10774; end: 103c10797;  */

void FUN_103c10774(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c10798();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c10798; end: 103c107d7;  */

void FUN_103c10798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65bdc;
  func_0x000107c61520(&UNK_10dc65bdc,&UNK_1106e9338);
  puRam0000000112ff7b38 = puVar1;
  return;
}



/* Entry: 103c107d8; end: 103c107fb;  */

void FUN_103c107d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c107fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c107fc; end: 103c1083b;  */

void FUN_103c107fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65c38;
  func_0x000107c61520(&UNK_10dc65c38,&UNK_1106e9360);
  puRam0000000112ff7b40 = puVar1;
  return;
}



/* Entry: 103c1083c; end: 103c1085f;  */

void FUN_103c1083c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c10860();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c10860; end: 103c1089f;  */

void FUN_103c10860(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65c94;
  func_0x000107c61520(&UNK_10dc65c94,&UNK_1106e9388);
  puRam0000000112ff7b48 = puVar1;
  return;
}



/* Entry: 103c108a0; end: 103c108c3;  */

void FUN_103c108a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c108c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c108c4; end: 103c10903;  */

void FUN_103c108c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff7b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc65cf0;
  func_0x000107c61520(&UNK_10dc65cf0,&UNK_1106e9408);
  puRam0000000112ff7b50 = puVar1;
  return;
}



/* Entry: 103c10904; end: 103c1092f;  */

long FUN_103c10904(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c10930; end: 103c10943;  */

void FUN_103c10930(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103c10944; end: 103c10a9f;  */

undefined1 * FUN_103c10944(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_1 + 0x20) = lVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 8,param_2 + 8);
    return param_1;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



/* Entry: 103c10aa0; end: 103c10dd3;  */

int FUN_103c10aa0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
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



/* Entry: 103c10dd4; end: 103c10e1b;  */

void FUN_103c10dd4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc65ff0,0xcb,2);
  uRam000000011380d108 = uStack_38;
  uRam000000011380d100 = uStack_40;
  uRam000000011380d118 = uStack_28;
  uRam000000011380d110 = uStack_30;
  uRam000000011380d128 = uStack_18;
  uRam000000011380d120 = uStack_20;
  return;
}



/* Entry: 103c10e1c; end: 103c10f47;  */

void FUN_103c10e1c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x138);
          }
          else {
            if (lVar1 != 4) goto LAB_103c10f24;
            pcVar3 = *(code **)(param_3 + 0x138);
          }
          goto LAB_103c10f14;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x78);
          goto LAB_103c10f14;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x138);
          goto LAB_103c10f14;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x138);
          }
          else {
            if (lVar1 != 6) goto LAB_103c10f24;
            pcVar3 = *(code **)(param_3 + 0x138);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 8) goto LAB_103c10f24;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_103c10f14:
        (*pcVar3)();
      }
LAB_103c10f24:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c10f48; end: 103c110bb;  */

void FUN_103c10f48(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if (((((((*unaff_x20 == 0) ||
          ((**(code **)(param_3 + 0x28))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
         (((char)unaff_x20[1] != '\x01' ||
          ((**(code **)(param_3 + 0x68))(1,2,param_2,param_3), unaff_x21 == 0)))) &&
        ((*(char *)((long)unaff_x20 + 5) != '\x01' ||
         ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(char *)((long)unaff_x20 + 6) != '\x01' ||
        ((**(code **)(param_3 + 0x68))(1,4,param_2,param_3), unaff_x21 == 0)))) &&
      ((((*(char *)((long)unaff_x20 + 7) != '\x01' ||
         ((**(code **)(param_3 + 0x68))(1,5,param_2,param_3), unaff_x21 == 0)) &&
        (((char)unaff_x20[2] != '\x01' ||
         ((**(code **)(param_3 + 0x68))(1,6,param_2,param_3), unaff_x21 == 0)))) &&
       ((unaff_x20[3] == 0 ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[3],7,param_2,param_3), unaff_x21 == 0)))))) &&
     (((char)unaff_x20[4] != '\x01' ||
      ((**(code **)(param_3 + 0x68))(1,8,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103c110bc; end: 103c110ff;  */

void FUN_103c110bc(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 103c11100; end: 103c1112f;  */

undefined1  [16] FUN_103c11100(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103c11130; end: 103c11163;  */

void FUN_103c11130(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103c11164; end: 103c11177;  */

undefined1  [16] FUN_103c11164(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103c11174;
  return auVar1;
}



/* Entry: 103c11178; end: 103c1119f;  */

void FUN_103c11178(void)

{
  FUN_103c10e1c();
  return;
}



/* Entry: 103c111a0; end: 103c111a3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c111a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103c111a4; end: 103c111db;  */

uint FUN_103c111a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_103c11844();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103c111dc; end: 103c11223;  */

uint FUN_103c111dc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_103c1144c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c11224; end: 103c112c3;  */

/* WARNING: Possible PIC construction at 0x000103c11270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c11280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c11274) */
/* WARNING: Removing unreachable block (ram,0x000103c11284) */

void FUN_103c11224(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ff7cb8 != -1) {
    func_0x000107c61568(0x112ff7cb8,FUN_103c10dd4);
  }
  uVar5 = uRam000000011380d128;
  uVar4 = uRam000000011380d120;
  uVar3 = uRam000000011380d118;
  uVar2 = uRam000000011380d110;
  uVar1 = uRam000000011380d108;
  *param_1 = uRam000000011380d100;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c112c4; end: 103c112ff;  */

void FUN_103c112c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ff7cd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ff7cd8,&UNK_10dc65fe0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c11300; end: 103c11403;  */

void FUN_103c11300(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c11404; end: 103c1144b;  */

uint FUN_103c11404(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_103c1144c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c1144c; end: 103c114e7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c1144c(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if ((((((*param_1 != *param_2) || (((*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1)) & 1) != 0))
        || (((*(byte *)((long)param_1 + 5) ^ *(byte *)((long)param_2 + 5)) & 1) != 0)) ||
       ((((*(byte *)((long)param_1 + 6) ^ *(byte *)((long)param_2 + 6)) & 1) != 0 ||
        (((*(byte *)((long)param_1 + 7) ^ *(byte *)((long)param_2 + 7)) & 1) != 0)))) ||
      (((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) != 0)) ||
     ((param_1[3] != param_2[3] || (((*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1) != 0))))
  {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(param_1 + 6);
  pbVar25 = *(byte **)(param_1 + 8);
  lVar24 = *(long *)(param_2 + 6);
  uVar16 = *(ulong *)(param_2 + 8);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



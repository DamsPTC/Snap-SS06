/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012b6e5c; end: 1012b6e8b;  */

void FUN_1012b6e5c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1012b6e8c; end: 1012b6ecf;  */

void FUN_1012b6e8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012b6ed0; end: 1012b6efb;  */

void FUN_1012b6ed0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  FUN_1012b6efc();
  param_1[3] = param_2;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1012b6efc; end: 1012b6f1b;  */

void FUN_1012b6efc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3438);
  return;
}



/* Entry: 1012b6f1c; end: 1012b6f47; -[SCProfileCalendarEventCellViewModel init] */

void FUN_1012b6f1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarEventCellViewModel",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b6f48);
  (*pcVar1)();
}



/* Entry: 1012b6f48; end: 1012b6f53;  */

void FUN_1012b6f48(void)

{
  FUN_1012b6efc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012b6f54; end: 1012b6ff3; -[SCProfileCalendarEventCellViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012b6f74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b6f78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b6f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d6f828 + 8))
  ;
  return;
}



/* Entry: 1012b6ff4; end: 1012b7013;  */

void FUN_1012b6ff4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3550);
  return;
}



/* Entry: 1012b7014; end: 1012b711b;  */

/* WARNING: Possible PIC construction at 0x0001012b704c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012b70ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b7050) */
/* WARNING: Removing unreachable block (ram,0x0001012b70b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1012b7014(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6f850);
  if (lVar2 == *(long *)(param_1 + _DAT_112d6f850) &&
      ((long *)(unaff_x20 + _DAT_112d6f850))[1] == ((long *)(param_1 + _DAT_112d6f850))[1]) {
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112d6f858);
    if ((uVar1 != *(ulong *)(param_1 + _DAT_112d6f858) ||
         ((ulong *)(unaff_x20 + _DAT_112d6f858))[1] != ((ulong *)(param_1 + _DAT_112d6f858))[1]) &&
       (func_0x000107c605b8(), (uVar1 & 1) == 0)) {
      return 0;
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112d6f860);
    if (lVar2 == *(long *)(param_1 + _DAT_112d6f860) &&
        ((long *)(unaff_x20 + _DAT_112d6f860))[1] == ((long *)(param_1 + _DAT_112d6f860))[1]) {
      if (*(long *)(unaff_x20 + _DAT_112d6f918) != *(long *)(param_1 + _DAT_112d6f918)) {
        return 0;
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_112d6f868);
      if ((lVar2 == *(long *)(param_1 + _DAT_112d6f868)) &&
         (((long *)(unaff_x20 + _DAT_112d6f868))[1] == ((long *)(param_1 + _DAT_112d6f868))[1])) {
        return 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )();
  return lVar2;
}



/* Entry: 1012b711c; end: 1012b7147; -[SCProfileCalendarCountdownCellViewModel init] */

void FUN_1012b711c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarCountdownCellViewModel",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b7148);
  (*pcVar1)();
}



/* Entry: 1012b7148; end: 1012b7153;  */

void FUN_1012b7148(void)

{
  FUN_1012b6ff4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012b7154; end: 1012b723f; -[SCProfileCalendarCountdownCellViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012b71d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b71d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7154(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f850 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f858 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f860 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f868 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6f870));
  if (*(long *)(param_1 + _DAT_112d6f878) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d6f878))[1]);
    return;
  }
  return;
}



/* Entry: 1012b7240; end: 1012b725f;  */

void FUN_1012b7240(void)

{
  func_0x000107c61168(&PTR_PTR_1127c36b8);
  return;
}



/* Entry: 1012b7260; end: 1012b730b;  */

/* WARNING: Possible PIC construction at 0x0001012b7298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b729c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1012b7260(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d6f898);
  if (uVar1 != *(ulong *)(param_1 + _DAT_112d6f898) ||
      ((ulong *)(unaff_x20 + _DAT_112d6f898))[1] != ((ulong *)(param_1 + _DAT_112d6f898))[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return uVar1;
  }
  uVar2 = ((ulong *)(unaff_x20 + _DAT_112d6f8a0))[1];
  uVar3 = ((ulong *)(param_1 + _DAT_112d6f8a0))[1];
  uVar1 = (ulong)(uVar2 == 0 && uVar3 == 0);
  if (uVar2 != 0 && uVar3 != 0) {
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112d6f8a0);
    if (uVar1 != *(ulong *)(param_1 + _DAT_112d6f8a0) || uVar2 != uVar3) goto code_r0x000107c605b8;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1012b730c; end: 1012b7337; -[SCProfileCalendarCreateCellViewModel init] */

void FUN_1012b730c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarCreateCellViewModel",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b7338);
  (*pcVar1)();
}



/* Entry: 1012b7338; end: 1012b7343;  */

void FUN_1012b7338(void)

{
  FUN_1012b7240();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012b7344; end: 1012b73f3; -[SCProfileCalendarCreateCellViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012b7388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b738c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7344(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f898 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6f8a0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f8a8));
  return;
}



/* Entry: 1012b73f4; end: 1012b7413;  */

void FUN_1012b73f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c37c8);
  return;
}



/* Entry: 1012b7414; end: 1012b743f; -[SCProfileCalendarViewAllCellViewModel init] */

void FUN_1012b7414(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarViewAllCellViewModel",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b7440);
  (*pcVar1)();
}



/* Entry: 1012b7440; end: 1012b744b;  */

void FUN_1012b7440(void)

{
  FUN_1012b73f4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012b744c; end: 1012b747b;  */

void FUN_1012b744c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012b747c; end: 1012b74c7; -[SCProfileCalendarViewAllCellViewModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012b7498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b749c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b747c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f8c8));
  return;
}



/* Entry: 1012b74c8; end: 1012b74cb; -[SCProfileCalendarCountdownCellViewModel copyWithZone:] */

void FUN_1012b74c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1012b74cc; end: 1012b74cf; -[SCProfileCalendarEventCellViewModel copyWithZone:] */

void FUN_1012b74cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1012b74d0; end: 1012b74d3; -[SCProfileCalendarCreateCellViewModel copyWithZone:] */

void FUN_1012b74d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1012b74d4; end: 1012b74d7; -[SCProfileCalendarViewAllCellViewModel copyWithZone:] */

void FUN_1012b74d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1012b74d8; end: 1012b752f;  */

undefined8 FUN_1012b74d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_1012b7744(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1012b7530; end: 1012b7593; -[SCProfileCalendarParticipantInfo initWithCurrentUser:profileUser:] */

undefined8
FUN_1012b7530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  FUN_1012b7744(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 1012b7594; end: 1012b762b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7594(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6f9a0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d6f9a8);
  FUN_1012b78a8();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  uVar1 = uVar3;
  FUN_1012b7744(uVar3,uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  param_1[3] = param_2;
  *param_1 = uVar1;
  return;
}



/* Entry: 1012b762c; end: 1012b76af; -[SCProfileCalendarParticipantInfo copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012b762c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d6f9a0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d6f9a8);
  FUN_1012b78a8();
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar1 = uVar2;
  FUN_1012b7744(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return uVar1;
}



/* Entry: 1012b76b0; end: 1012b770b; -[SCProfileCalendarParticipantInfo init] */

void FUN_1012b76b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarParticipantInfo",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b76dc);
  (*pcVar1)();
}



/* Entry: 1012b770c; end: 1012b7743; -[SCProfileCalendarParticipantInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012b7728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b772c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b770c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6f9a0));
  return;
}



/* Entry: 1012b7744; end: 1012b78a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7744(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  byte bVar4;
  long lVar5;
  
  *(long *)(unaff_x20 + _DAT_112d6f9a0) = param_1;
  *(long *)(unaff_x20 + _DAT_112d6f9a8) = param_2;
  lVar1 = param_2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar5 = 0;
    lVar3 = 0;
    lVar2 = lVar1;
  }
  else {
    lVar5 = param_1;
    func_0x000107c5faec();
    lVar2 = lVar1;
    func_0x000107c61170(param_1);
    lVar3 = lVar1;
  }
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_2 == 0) {
    if (lVar3 == 0) {
LAB_1012b7834:
      bVar4 = 1;
      goto LAB_1012b7868;
    }
LAB_1012b781c:
    bVar4 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170();
    if (lVar3 == 0) {
      if (lVar2 == 0) goto LAB_1012b7834;
      bVar4 = 0;
    }
    else {
      if (lVar2 == 0) goto LAB_1012b781c;
      if ((lVar5 == param_2) && (lVar3 == lVar2)) {
        func_0x000107c6142c(lVar3);
        bVar4 = 1;
      }
      else {
        func_0x000107c605b8(lVar5,lVar3,param_2,lVar2,0);
        bVar4 = (byte)lVar5;
        func_0x000107c6142c(lVar3);
      }
    }
  }
  func_0x000107c6142c();
LAB_1012b7868:
  *(byte *)(unaff_x20 + _DAT_112d6f9b0) = bVar4 & 1;
  FUN_1012b78a8();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012b78a8; end: 1012b78c7;  */

void FUN_1012b78a8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c38c0);
  return;
}



/* Entry: 1012b78c8; end: 1012b78e7; -[SCProfileCalendarEmptySectionDataProvider dataProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b78c8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d6f9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012b78e8; end: 1012b78fb; -[SCProfileCalendarEmptySectionDataProvider setDataProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b78e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d6f9e0,param_3);
  return;
}



/* Entry: 1012b78fc; end: 1012b791b; -[SCProfileCalendarEmptySectionDataProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b78fc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6f9e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012b791c; end: 1012b7927; -[SCProfileCalendarEmptySectionDataProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b791c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6f9e8);
  *(undefined8 *)(param_1 + _DAT_112d6f9e8) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012b7928; end: 1012b7947; -[SCProfileCalendarEmptySectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7928(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6f9f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012b7948; end: 1012b7953; -[SCProfileCalendarEmptySectionDataProvider setSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d6f9f0);
  *(undefined8 *)(param_1 + _DAT_112d6f9f0) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012b7954; end: 1012b7983;  */

void FUN_1012b7954(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1012b7984; end: 1012b798b; -[SCProfileCalendarEmptySectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_1012b7984(void)

{
  return 0;
}



/* Entry: 1012b798c; end: 1012b79b3; -[SCProfileCalendarEmptySectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1012b798c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1012b7de0(0);
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012b79b4; end: 1012b7a2b; -[SCProfileCalendarEmptySectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_1012b79b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112d6fa20 != -1) {
    func_0x000107c61568(0x112d6fa20,FUN_1012b7b8c);
  }
  uVar1 = uRam00000001137ff300;
  uVar2 = 0x112d6cac8;
  func_0x0001000285a8(0x112d6cac8,&UNK_10d9312f0);
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012b7a2c; end: 1012b7a2f; -[SCProfileCalendarEmptySectionDataProvider addListener:] */

void FUN_1012b7a2c(void)

{
  return;
}



/* Entry: 1012b7a30; end: 1012b7a33; -[SCProfileCalendarEmptySectionDataProvider removeListener:] */

void FUN_1012b7a30(void)

{
  return;
}



/* Entry: 1012b7a34; end: 1012b7a5f; +[SCProfileCalendarEmptySectionDataProvider announcerIdentifier] */

void FUN_1012b7a34(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010d9312a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012b7a60; end: 1012b7acb; -[SCProfileCalendarEmptySectionDataProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7a60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6f9e0,0);
  *(undefined8 *)(param_1 + _DAT_112d6f9e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d6f9f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012b7acc; end: 1012b7aff;  */

void FUN_1012b7acc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012b7b00; end: 1012b7b6b; -[SCProfileCalendarEmptySectionDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012b7b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b7b30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7b00(long param_1)

{
  func_0x0001012b7b48(param_1 + _DAT_112d6f9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d6f9e8));
  return;
}



/* Entry: 1012b7b6c; end: 1012b7b8b;  */

void FUN_1012b7b6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3998);
  return;
}



/* Entry: 1012b7b8c; end: 1012b7ddf;  */

void FUN_1012b7b8c(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = 0;
  uVar4 = 0;
  FUN_1012c3598();
  uVar5 = 0;
  FUN_1012c4518();
  uVar6 = 0;
  FUN_1012c2648();
  uVar7 = 0;
  FUN_1012c5aec();
  func_0x0001000285a8(0x112d6b2d0,&UNK_10d932bd0);
  lVar8 = 4;
  func_0x000107c60498();
  func_0x000107c6157c();
  uVar9 = 0xd000000000000016;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7dc4);
    (*pcVar3)();
  }
  lVar1 = lVar8 + 0x40;
  uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar9 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
  *puVar2 = 0xd000000000000016;
  puVar2[1] = 0x800000010ef33d80;
  *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7dc8);
    (*pcVar3)();
  }
  uVar10 = 0;
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  uVar9 = 0xd000000000000013;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7dcc);
    (*pcVar3)();
  }
  uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar9 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
  *puVar2 = 0xd000000000000013;
  puVar2[1] = 0x800000010ef33da0;
  *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 8) = uVar5;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7dd0);
    (*pcVar3)();
  }
  uVar9 = 0;
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  uVar10 = 0xd000000000000017;
  func_0x000100029284();
  if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7dd4);
    (*pcVar3)();
  }
  uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) | 1L << (uVar10 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar10 * 0x10);
  *puVar2 = 0xd000000000000017;
  puVar2[1] = 0x800000010ef33dc0;
  *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar10 * 8) = uVar6;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7dd8);
    (*pcVar3)();
  }
  uVar10 = 0;
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  uVar9 = 0xd000000000000016;
  func_0x000100029284();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7ddc);
    (*pcVar3)();
  }
  uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar9 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar9 * 0x10);
  *puVar2 = 0xd000000000000016;
  puVar2[1] = 0x800000010ef33de0;
  *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar9 * 8) = uVar7;
  func_0x000107c61574(lVar8);
  if (!SCARRY8(*(long *)(lVar8 + 0x10),1)) {
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lRam00000001137ff300 = lVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1012b7de0);
  (*pcVar3)();
}



/* Entry: 1012b7de0; end: 1012b7e23;  */

void FUN_1012b7de0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d6fa28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aea98;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d6fa28 = puVar1;
  return;
}



/* Entry: 1012b7e24; end: 1012b7e67; -[SCProfileCalendarSection initWithSupplementaryViewProvider:] */

void FUN_1012b7e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001012b7e98();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithSupplementaryViewProvide_1125f1810,param_3);
  return;
}



/* Entry: 1012b7e68; end: 1012b7eb7;  */

void FUN_1012b7e68(void)

{
  func_0x0001012b7e98();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012b7eb8; end: 1012b7fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b7eb8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar5 = &stack0xffffffffffffffa0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6fa60);
  func_0x000107c51b58();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5d5bc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      puVar7 = &UNK_11039d368;
      func_0x000107c613fc(&UNK_11039d368,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar10 = &UNK_11039d390;
      func_0x000107c613fc(&UNK_11039d390,0x20,7);
      *(undefined **)(puVar10 + 0x10) = puVar7;
      *(long *)(puVar10 + 0x18) = param_1;
      func_0x000107c60bc4(&stack0xffffffffffffffa0);
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar10);
      func_0x000107c4e590(lVar4);
      func_0x000107c60bd0(puVar5);
      func_0x000107c615e8(lVar4);
      return;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6fa68);
  uVar6 = *(undefined8 *)(lVar3 + _DAT_112d6f3c8);
  *(long *)(lVar3 + _DAT_112d6f3c8) = param_1;
  func_0x000107c61170(uVar6);
  puVar7 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar6 = 0xd000000000000038;
  uVar17 = 0x800000010ef33a10;
  func_0x000107c5fadc(0xd000000000000038,0x800000010ef33a10);
  func_0x000107c46d50();
  func_0x000107c61170();
  if (puVar7 != (undefined *)0x0) {
    if (*(char *)(param_1 + _DAT_112d6f9b0) == '\x01') {
      FUN_1012c86fc();
    }
    else {
      func_0x0001012c87c8();
    }
    uVar9 = uVar17;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar17);
    func_0x0001012c8894();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
    uVar8 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef33ea0);
    uVar9 = uVar6;
    func_0x000108f72910(uVar6,uVar17,uVar8,puVar7,1);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar8);
    if (*(long *)(unaff_x20 + _DAT_112d6fa70) != 0) {
      func_0x000107c5d4a8();
    }
    puVar10 = &UNK_11039d3e0;
    func_0x000107c613fc(&UNK_11039d3e0,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,lVar3);
    puVar11 = &UNK_11039d368;
    func_0x000107c613fc(&UNK_11039d368,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,unaff_x20);
    puVar12 = &UNK_11039d408;
    func_0x000107c613fc(&UNK_11039d408,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar11;
    *(long *)(puVar12 + 0x18) = param_1;
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa98);
    func_0x000107c61174();
    func_0x000107c6157c(puVar10);
    func_0x000107c40840();
    func_0x000107c61180();
    uVar6 = uVar17;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d6fae0);
    uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112d6faa0);
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d6faa8);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d6fad8);
    lVar13 = 0;
    FUN_1012bf72c();
    lVar4 = lVar13;
    func_0x000107c610f8();
    func_0x000107c61614(lVar4 + _DAT_112d6fb80,0);
    *(undefined8 *)(lVar4 + _DAT_112d6fb88) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d6fb90) = 0;
    lVar3 = _DAT_112d6fbc8;
    func_0x000107c61614(lVar4 + _DAT_112d6fbc8,0);
    *(undefined8 *)(lVar4 + _DAT_112d6fc00) = 2;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + _DAT_112d6fbe8) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar4 + _DAT_112d6fbf0) = puVar11;
    *(undefined8 *)(lVar4 + _DAT_112d6fbf8) = 0;
    *(undefined1 *)(lVar4 + _DAT_112d6fc08) = 0;
    *(undefined1 *)(lVar4 + _DAT_112d6fc10) = 0;
    *(long *)(lVar4 + _DAT_112d6fb98) = param_1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d6fba0);
    *puVar1 = FUN_1012bcf48;
    puVar1[1] = puVar10;
    *(undefined8 *)(lVar4 + _DAT_112d6fbd8) = uVar6;
    *(undefined8 *)(lVar4 + _DAT_112d6fbe0) = uVar18;
    *(undefined8 *)(lVar4 + _DAT_112d6fba8) = uVar20;
    *(undefined8 *)(lVar4 + _DAT_112d6fbb0) = uVar19;
    *(undefined8 *)(lVar4 + _DAT_112d6fbb8) = uVar17;
    puVar1 = (undefined8 *)(lVar4 + _DAT_112d6fbc0);
    *puVar1 = 0x1012bcf7c;
    puVar1[1] = puVar12;
    func_0x000107c61604(lVar4 + lVar3,unaff_x20);
    uVar8 = 0;
    func_0x0001012b3f24(0);
    func_0x000107c613fc();
    func_0x000107c615f0(uVar17);
    func_0x000107c61580(puVar12,2);
    func_0x000107c615f4(uVar6,2);
    uVar17 = uVar18;
    func_0x000107c61174(uVar18);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar10);
    func_0x000107c61174(uVar17);
    func_0x000107c61174(uVar20);
    func_0x000107c61174(uVar19);
    uVar17 = uVar6;
    func_0x0001012aebb0(uVar6,uVar18,FUN_1012bd988,0);
    *(undefined8 *)(lVar4 + _DAT_112d6fbd0) = uVar17;
    plVar14 = &lStack_70;
    lStack_70 = lVar4;
    lStack_68 = lVar13;
    func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
    uVar17 = *(undefined8 *)((long)plVar14 + _DAT_112d6fbd8);
    uVar18 = *(undefined8 *)((long)plVar14 + _DAT_112d6fbe0);
    puVar11 = &UNK_11039d430;
    func_0x000107c613fc(&UNK_11039d430,0x18,7);
    func_0x000107c61614(puVar11 + 0x10,plVar14);
    func_0x000107c613fc(uVar8,0xa8,7);
    func_0x000107c61174(uVar18);
    plVar15 = plVar14;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0();
    func_0x0001012aebb0();
    func_0x000107c61574(puVar10);
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(puVar12);
    uVar6 = *(undefined8 *)((long)plVar15 + _DAT_112d6fbd0);
    *(undefined8 *)((long)plVar15 + _DAT_112d6fbd0) = uVar17;
    func_0x000107c61170(plVar15);
    func_0x000107c61574(uVar6);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa60);
    func_0x000107c58d74(uVar8);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa78);
    *(long **)(unaff_x20 + _DAT_112d6fa78) = plVar14;
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d6faf8);
    func_0x000106639468(uVar6,0);
    func_0x000107c61180();
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d6faf0);
    *(undefined8 *)(unaff_x20 + _DAT_112d6faf0) = uVar6;
    func_0x000107c61170(uVar17);
    puVar11 = &UNK_11039d458;
    func_0x000107c613fc(&UNK_11039d458,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar8;
    *(long *)(puVar11 + 0x18) = unaff_x20;
    uStack_80 = 0x1012bcfa4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11039d470;
    ppuVar16 = &puStack_a0;
    puStack_78 = puVar11;
    func_0x000107c60bc4();
    puVar11 = puStack_78;
    func_0x000107c61174(uVar8);
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar11);
    func_0x0001000d76cc(&UNK_10d931320,ppuVar16);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar9);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar12);
    func_0x000107c61170(plVar15);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b90d0);
  (*pcVar2)();
}



/* Entry: 1012b7fe8; end: 1012b80f3;  */

void FUN_1012b7fe8(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61550();
  if ((((int)uVar1 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_1012b5df4();
  }
  uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  lStack_50 = (uVar4 & 0xffffffffffffff8) + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_1012aeb90(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_1012b9900(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1012ba0f0(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1012b80f4; end: 1012b8113; -[SCProfileCalendarSectionCreator lifecycleAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b80f4(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112d6fa58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012b8114; end: 1012b8127; -[SCProfileCalendarSectionCreator setLifecycleAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b8114(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112d6fa58,param_3);
  return;
}



/* Entry: 1012b8128; end: 1012b815b; -[SCProfileCalendarSectionCreator order] */

undefined8 FUN_1012b8128(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1012b815c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1012b815c; end: 1012b8223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012b815c(void)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  
  bVar2 = *(byte *)(unaff_x20 + _DAT_112d6fb38);
  cVar3 = *(char *)(unaff_x20 + _DAT_112d6fb28);
  lVar5 = *(long *)(unaff_x20 + _DAT_112d6fa80);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar6 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010ef33e80);
    lVar7 = lVar5;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar6);
    uVar6 = 0x2a;
    if (cVar3 == '\0') {
      uVar6 = 0x3b;
    }
    uVar1 = 0x13;
    if (((uint)lVar7 & (uint)bVar2) == 0) {
      uVar1 = uVar6;
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1012b8224);
  (*pcVar4)();
}



/* Entry: 1012b8224; end: 1012b8233; -[SCProfileCalendarSectionCreator section] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b8224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6fa60));
  return;
}



/* Entry: 1012b8234; end: 1012b8243; -[SCProfileCalendarSectionCreator actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b8234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6fa68));
  return;
}



/* Entry: 1012b8244; end: 1012b8253; -[SCProfileCalendarSectionCreator configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b8244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6faf0));
  return;
}



/* Entry: 1012b8254; end: 1012b82c3;  */

void FUN_1012b8254(undefined8 *param_1,long param_2)

{
  undefined1 auStack_88 [24];
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
  
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1012b82c4(&uStack_70);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1012b82c4; end: 1012b83df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b82c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar5 = 0x4000000000000000;
  if (*(ulong *)(param_1 + 0x38) >> 0x3e != 0) {
    uVar5 = 0x3fb999999999999a;
  }
  FUN_1012b83e0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6fa60);
  func_0x000107c51b58();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5d5bc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_11039d368;
      func_0x000107c613fc(&UNK_11039d368,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      uStack_50 = 0x1012bcfac;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11039d498;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c4e528(uVar5,lVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1012b83e0; end: 1012b880f;  */

/* WARNING: Removing unreachable block (ram,0x0001012b87f8) */
/* WARNING: Removing unreachable block (ram,0x0001012b8804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b83e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long unaff_x20;
  long lVar23;
  undefined1 auStack_e8 [80];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  
  uVar2 = *param_1;
  uVar5 = param_1[1];
  bVar9 = *(byte *)((long)param_1 + 0x3f) >> 6;
  if (bVar9 == 0) {
    uVar18 = param_1[2];
    uVar6 = param_1[3];
    uVar3 = param_1[4];
    uVar7 = param_1[5];
    uVar21 = param_1[6];
    uVar4 = param_1[8];
    uVar8 = param_1[9];
    bVar9 = *(byte *)(param_1 + 7);
    func_0x000107c61428(unaff_x20 + _DAT_112d6fb10,auStack_e8,0x21,0);
    func_0x000107c61434(uVar8);
    func_0x000107c61438(uVar5,2);
    func_0x000107c61434(uVar3);
    func_0x000100403b00(&uStack_98,uVar2,uVar5);
    func_0x000107c614a8(auStack_e8);
    func_0x000107c6142c(uStack_90);
    lVar11 = _DAT_112d6f3d0;
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    lVar23 = *(long *)(unaff_x20 + _DAT_112d6fa68);
    func_0x000107c61428(lVar23 + _DAT_112d6f3d0,auStack_e8,0x21,0);
    func_0x000107c61434(uVar5);
    lVar15 = lVar23 + lVar11;
    FUN_1012bbc64(lVar15,uVar2,uVar5,&uStack_98);
    func_0x000107c6142c(uVar5);
    uVar20 = *(ulong *)(lVar23 + lVar11);
    if (uVar20 >> 0x3e == 0) {
      uVar19 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar19 = uVar20 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar20) {
        uVar19 = uVar20;
      }
      func_0x000107c60480();
    }
    if ((long)uVar19 < lVar15) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1012b87d8);
      (*pcVar14)();
    }
    FUN_1012bb794(lVar15);
    func_0x000107c614a8(auStack_e8);
    uVar13 = uStack_90;
    uVar12 = uStack_98;
    lVar16 = 0;
    FUN_1012aeb90();
    lVar15 = lVar16;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar15 + _DAT_112d6f630);
    *puVar1 = uVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar18;
    puVar1[3] = uVar6;
    puVar1[4] = uVar3;
    puVar1[6] = 0xa400000000000000;
    puVar1[5] = 0x85939ff0;
    puVar1[7] = uVar7;
    puVar1[8] = uVar21;
    puVar1[9] = (ulong)bVar9 & 1;
    puVar1[10] = uVar4;
    puVar1[0xb] = uVar8;
    puVar1[0xc] = uVar12;
    puVar1[0xd] = uVar13;
    puVar10 = PTR_s_init_1125d9248;
    lStack_80 = lVar15;
    lStack_78 = lVar16;
    func_0x000107c61434(uVar13);
    plVar17 = &lStack_80;
    func_0x000107c61154(plVar17,puVar10);
    func_0x000107c61428(lVar23 + lVar11,auStack_e8,0x21,0);
    func_0x000107c61174();
    FUN_1012b4400();
    uVar19 = *(ulong *)(lVar23 + lVar11);
    uVar22 = uVar19 & 0xffffffffffffff8;
    uVar20 = *(ulong *)(uVar22 + 0x10);
    if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar20) {
      uVar19 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
      FUN_1012bf74c(uVar19,uVar20 + 1,1);
      uVar22 = uVar19 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar22 + 0x10) = uVar20 + 1;
    *(long **)(uVar22 + uVar20 * 8 + 0x20) = plVar17;
    *(ulong *)(lVar23 + lVar11) = uVar19;
    func_0x000107c614a8(auStack_e8);
    func_0x000107c61428(lVar23 + lVar11,auStack_e8,0x21,0);
    FUN_1012b7fe8(lVar23 + lVar11);
    func_0x000107c614a8(auStack_e8);
    FUN_1012b8888();
    func_0x000107c6142c(uVar13);
    func_0x000107c61170(plVar17);
  }
  else if (bVar9 == 1) {
    func_0x000107c61428(unaff_x20 + _DAT_112d6fb10,auStack_e8,0x21,0);
    uVar18 = uVar5;
    FUN_1010af1e4(uVar2,uVar5);
    func_0x000107c614a8(auStack_e8);
    func_0x000107c6142c(uVar18);
    func_0x000107c61428(unaff_x20 + _DAT_112d6fb08,auStack_e8,0x21,0);
    func_0x000107c61434(uVar5);
    func_0x000100403b00(&uStack_98,uVar2,uVar5);
    func_0x000107c614a8(auStack_e8);
    func_0x000107c6142c(uStack_90);
    lVar11 = _DAT_112d6f3d0;
    lVar23 = *(long *)(unaff_x20 + _DAT_112d6fa68);
    func_0x000107c61428(lVar23 + _DAT_112d6f3d0,&uStack_98,0x21,0);
    FUN_1012bcfb4(param_1,auStack_e8);
    lVar15 = lVar23 + lVar11;
    FUN_1012bb3dc(lVar15,uVar2,uVar5);
    func_0x0001012bcff0(param_1);
    uVar20 = *(ulong *)(lVar23 + lVar11);
    if (uVar20 >> 0x3e == 0) {
      uVar19 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar19 = uVar20 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar20) {
        uVar19 = uVar20;
      }
      func_0x000107c60480();
    }
    if ((long)uVar19 < lVar15) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1012b87b8);
      (*pcVar14)();
    }
    FUN_1012bb794(lVar15);
    func_0x000107c614a8(&uStack_98);
    FUN_1012b8888();
  }
  return;
}



/* Entry: 1012b8810; end: 1012b8887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b8810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112d6fa78);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      FUN_1012bd158();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1012b8888; end: 1012b8a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b8888(void)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112d6f3d0;
  ppuVar4 = &puStack_a0;
  lVar5 = *(long *)(unaff_x20 + _DAT_112d6fa78);
  if (lVar5 != 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112d6fa68);
    func_0x000107c61428(lVar7 + _DAT_112d6f3d0,auStack_58,0,0);
    uVar8 = *(undefined8 *)(lVar7 + lVar1);
    func_0x000107c61174(lVar5);
    func_0x000107c61434(uVar8);
    FUN_1012bd328();
    func_0x000107c61170(lVar5);
    func_0x000107c6142c(uVar8);
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112d6fa68);
  FUN_1012a9614();
  lVar1 = _DAT_112d6f3d0;
  func_0x000107c61428(lVar5 + _DAT_112d6f3d0,auStack_70,0,0);
  uVar6 = *(undefined8 *)(lVar5 + lVar1);
  uVar8 = uVar6;
  func_0x000107c61434();
  bVar2 = (byte)uVar8;
  FUN_1012bb858();
  func_0x000107c6142c(uVar6);
  *(byte *)(unaff_x20 + _DAT_112d6fb38) = bVar2 & 1;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa60);
  puVar3 = &UNK_11039d4d0;
  func_0x000107c613fc(&UNK_11039d4d0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  pcStack_80 = FUN_1012bd024;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11039d4e8;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar3 = puStack_78;
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar3);
  func_0x0001000d76cc(&UNK_10d931320,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1012b8a18; end: 1012b8a5f;  */

void FUN_1012b8a18(long param_1)

{
  func_0x000107c4168c();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c3fdac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1012b8a60; end: 1012b90cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b8a60(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar17 = *(long *)(unaff_x20 + _DAT_112d6fa68);
  uVar3 = *(undefined8 *)(lVar17 + _DAT_112d6f3c8);
  *(long *)(lVar17 + _DAT_112d6f3c8) = param_1;
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126b02a8;
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar3 = 0xd000000000000038;
  uVar15 = 0x800000010ef33a10;
  func_0x000107c5fadc(0xd000000000000038,0x800000010ef33a10);
  func_0x000107c46d50();
  func_0x000107c61170();
  if (puVar4 != (undefined *)0x0) {
    if (*(char *)(param_1 + _DAT_112d6f9b0) == '\x01') {
      FUN_1012c86fc();
    }
    else {
      func_0x0001012c87c8();
    }
    uVar6 = uVar15;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar15);
    func_0x0001012c8894();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
    uVar5 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010ef33ea0);
    uVar6 = uVar3;
    func_0x000108f72910(uVar3,uVar15,uVar5,puVar4,1);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar5);
    if (*(long *)(unaff_x20 + _DAT_112d6fa70) != 0) {
      func_0x000107c5d4a8();
    }
    puVar7 = &UNK_11039d3e0;
    func_0x000107c613fc(&UNK_11039d3e0,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,lVar17);
    puVar8 = &UNK_11039d368;
    func_0x000107c613fc(&UNK_11039d368,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar9 = &UNK_11039d408;
    func_0x000107c613fc(&UNK_11039d408,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(long *)(puVar9 + 0x18) = param_1;
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa98);
    func_0x000107c61174();
    func_0x000107c6157c(puVar7);
    func_0x000107c40840();
    func_0x000107c61180();
    uVar3 = uVar15;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d6fae0);
    uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112d6faa0);
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d6faa8);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d6fad8);
    lVar10 = 0;
    FUN_1012bf72c();
    lVar11 = lVar10;
    func_0x000107c610f8();
    func_0x000107c61614(lVar11 + _DAT_112d6fb80,0);
    *(undefined8 *)(lVar11 + _DAT_112d6fb88) = 0;
    *(undefined8 *)(lVar11 + _DAT_112d6fb90) = 0;
    lVar17 = _DAT_112d6fbc8;
    func_0x000107c61614(lVar11 + _DAT_112d6fbc8,0);
    *(undefined8 *)(lVar11 + _DAT_112d6fc00) = 2;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar11 + _DAT_112d6fbe8) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(lVar11 + _DAT_112d6fbf0) = puVar8;
    *(undefined8 *)(lVar11 + _DAT_112d6fbf8) = 0;
    *(undefined1 *)(lVar11 + _DAT_112d6fc08) = 0;
    *(undefined1 *)(lVar11 + _DAT_112d6fc10) = 0;
    *(long *)(lVar11 + _DAT_112d6fb98) = param_1;
    puVar1 = (undefined8 *)(lVar11 + _DAT_112d6fba0);
    *puVar1 = FUN_1012bcf48;
    puVar1[1] = puVar7;
    *(undefined8 *)(lVar11 + _DAT_112d6fbd8) = uVar3;
    *(undefined8 *)(lVar11 + _DAT_112d6fbe0) = uVar16;
    *(undefined8 *)(lVar11 + _DAT_112d6fba8) = uVar19;
    *(undefined8 *)(lVar11 + _DAT_112d6fbb0) = uVar18;
    *(undefined8 *)(lVar11 + _DAT_112d6fbb8) = uVar15;
    puVar1 = (undefined8 *)(lVar11 + _DAT_112d6fbc0);
    *puVar1 = 0x1012bcf7c;
    puVar1[1] = puVar9;
    func_0x000107c61604(lVar11 + lVar17);
    uVar5 = 0;
    func_0x0001012b3f24(0);
    func_0x000107c613fc();
    func_0x000107c615f0(uVar15);
    func_0x000107c61580(puVar9,2);
    func_0x000107c615f4(uVar3,2);
    uVar15 = uVar16;
    func_0x000107c61174(uVar16);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(uVar15);
    func_0x000107c61174(uVar19);
    func_0x000107c61174(uVar18);
    uVar15 = uVar3;
    func_0x0001012aebb0(uVar3,uVar16,FUN_1012bd988,0);
    *(undefined8 *)(lVar11 + _DAT_112d6fbd0) = uVar15;
    plVar12 = &lStack_70;
    lStack_70 = lVar11;
    lStack_68 = lVar10;
    func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
    uVar15 = *(undefined8 *)((long)plVar12 + _DAT_112d6fbd8);
    uVar16 = *(undefined8 *)((long)plVar12 + _DAT_112d6fbe0);
    puVar8 = &UNK_11039d430;
    func_0x000107c613fc(&UNK_11039d430,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,plVar12);
    func_0x000107c613fc(uVar5,0xa8,7);
    func_0x000107c61174(uVar16);
    plVar13 = plVar12;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0();
    func_0x0001012aebb0();
    func_0x000107c61574(puVar7);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(puVar9);
    uVar3 = *(undefined8 *)((long)plVar13 + _DAT_112d6fbd0);
    *(undefined8 *)((long)plVar13 + _DAT_112d6fbd0) = uVar15;
    func_0x000107c61170(plVar13);
    func_0x000107c61574(uVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa60);
    func_0x000107c58d74(uVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa78);
    *(long **)(unaff_x20 + _DAT_112d6fa78) = plVar12;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d6faf8);
    func_0x000106639468(uVar3,0);
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112d6faf0);
    *(undefined8 *)(unaff_x20 + _DAT_112d6faf0) = uVar3;
    func_0x000107c61170(uVar15);
    puVar8 = &UNK_11039d458;
    func_0x000107c613fc(&UNK_11039d458,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar5;
    *(long *)(puVar8 + 0x18) = unaff_x20;
    uStack_80 = 0x1012bcfa4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11039d470;
    ppuVar14 = &puStack_a0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(ppuVar14);
    puVar8 = puStack_78;
    func_0x000107c61174(uVar5);
    func_0x000107c61174();
    func_0x000107c61574(puVar8);
    func_0x0001000d76cc(&UNK_10d931320,ppuVar14);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c61170(plVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012b90d0);
  (*pcVar2)();
}



/* Entry: 1012b90d0; end: 1012b9233;  */

void FUN_1012b90d0(long param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_3)(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012b9234; end: 1012b92af;  */

/* WARNING: Possible PIC construction at 0x0001012b9258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b925c) */
/* WARNING: Removing unreachable block (ram,0x0001012b9270) */
/* WARNING: Removing unreachable block (ram,0x0001012b9274) */
/* WARNING: Removing unreachable block (ram,0x0001012b9288) */

void FUN_1012b9234(long param_1)

{
  func_0x000107c4168c();
  func_0x000107c61180();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1012b92b0; end: 1012b930f; -[SCProfileCalendarSectionCreator init] */

void FUN_1012b92b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCProfileCalendarSection.ProfileCalendarSectionCreator",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012b92dc);
  (*pcVar1)();
}



/* Entry: 1012b9310; end: 1012b94eb; -[SCProfileCalendarSectionCreator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012b94ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012b94b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b9310(long param_1)

{
  func_0x0001012b94c8(param_1 + _DAT_112d6fa58);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa70));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fa98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6faa0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6faa8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fab0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fab8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fac0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fac8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fad0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fad8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fae0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6fae8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6faf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6faf8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6fb00));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6fb08));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d6fb10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6fb18));
  return;
}



/* Entry: 1012b94ec; end: 1012b950b;  */

void FUN_1012b94ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127c3b28);
  return;
}



/* Entry: 1012b950c; end: 1012b9863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b950c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = _DAT_112d6fb38;
  lVar3 = _DAT_112d6fb30;
  cVar1 = *(char *)(param_1 + _DAT_112d6fb30);
  cVar2 = *(char *)(param_1 + _DAT_112d6fb38);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112d6faf8);
  *(undefined8 *)(param_1 + _DAT_112d6faf8) = param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  lVar9 = _DAT_112d6f3d0;
  lVar13 = *(long *)(param_1 + _DAT_112d6fa68);
  func_0x000107c61428(lVar13 + _DAT_112d6f3d0,auStack_78,0,0);
  lVar7 = _DAT_112d6fb08;
  uVar12 = *(undefined8 *)(lVar13 + lVar9);
  func_0x000107c61428(param_1 + _DAT_112d6fb08,auStack_90,0x21,0);
  lVar9 = _DAT_112d6fb10;
  func_0x000107c61428(param_1 + _DAT_112d6fb10,auStack_a8,0x21,0);
  func_0x000107c61434(uVar12);
  FUN_1012bbf70(param_4,uVar12,param_1 + lVar7,param_1 + lVar9);
  func_0x000107c614a8(auStack_a8);
  func_0x000107c614a8(auStack_90);
  func_0x000107c6142c(uVar12);
  lVar9 = _DAT_112d6f3d0;
  func_0x000107c61428(param_3 + _DAT_112d6f3d0,auStack_90,1,0);
  uVar12 = *(undefined8 *)(param_3 + lVar9);
  *(undefined8 *)(param_3 + lVar9) = param_4;
  func_0x000107c6142c(uVar12);
  func_0x000106639468(param_2,0);
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112d6faf0);
  *(undefined8 *)(param_1 + _DAT_112d6faf0) = param_2;
  func_0x000107c61170(uVar12);
  lVar7 = *(long *)(param_1 + _DAT_112d6fa78);
  if (lVar7 != 0) {
    uVar12 = *(undefined8 *)(param_3 + lVar9);
    func_0x000107c61174();
    func_0x000107c61434(uVar12);
    FUN_1012bd328();
    func_0x000107c61170(lVar7);
    func_0x000107c6142c(uVar12);
  }
  FUN_1012a9614();
  uVar10 = *(ulong *)(param_3 + lVar9);
  if (uVar10 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar8 = uVar10;
    }
    func_0x000107c60480();
  }
  *(bool *)(param_1 + lVar3) = uVar8 != 0;
  uVar11 = *(undefined8 *)(param_3 + lVar9);
  uVar12 = uVar11;
  func_0x000107c61434();
  bVar6 = (byte)uVar12;
  FUN_1012bb858();
  func_0x000107c6142c(uVar11);
  *(byte *)(param_1 + lVar4) = bVar6 & 1;
  lVar9 = param_5;
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar9 == 0) {
    if ((cVar1 != *(char *)(param_1 + lVar3)) || (cVar2 != *(char *)(param_1 + lVar4))) {
      *(undefined1 *)(param_1 + _DAT_112d6fb40) = 1;
    }
  }
  else {
    func_0x000107c615e8();
    if (((cVar1 == *(char *)(param_1 + lVar3)) && (cVar2 == *(char *)(param_1 + lVar4))) &&
       (*(char *)(param_1 + _DAT_112d6fb40) != '\x01')) {
      uVar10 = *(ulong *)(param_1 + _DAT_112d6fa80);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012b9864);
        (*pcVar5)();
      }
      uVar12 = 0xd000000000000035;
      func_0x000107c5fadc(0xd000000000000035,0x800000010ef33e00);
      uVar8 = uVar10;
      func_0x000107c3ebd4();
      func_0x000107c615e8(uVar10);
      func_0x000107c61170(uVar12);
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112d6fb40) = 0;
    }
    func_0x000107c4168c();
    func_0x000107c61180();
    if (param_5 != 0) {
      func_0x000107c3fdac();
      func_0x000107c615e8(param_5);
    }
  }
  return;
}



/* Entry: 1012b9864; end: 1012b98ff; -[SCProfileCalendarSectionCreator calendarDataProviderDidReceiveUpdateWithCountdown:hasItems:items:hasMoreEvents:loadMore:] */

void FUN_1012b9864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_7);
  uVar1 = 0;
  FUN_1012aeb90(0);
  func_0x000107c5fc54(param_5,uVar1);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012bcde8(param_3,param_5);
  func_0x000107c60bd0(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 1012b9900; end: 1012ba0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012b9900(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x21;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar7 = 0;
    do {
      lVar17 = lVar7 + 1;
      lVar14 = lVar17;
      if (lVar17 < lVar8) {
        lVar12 = *param_3;
        uVar3 = *(ulong *)(lVar12 + lVar17 * 8);
        uVar15 = *(undefined8 *)(lVar12 + lVar7 * 8);
        func_0x000107c61174();
        func_0x000107c61174(uVar15);
        uVar13 = uVar3;
        FUN_1012b6010(uVar3,uVar15);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar15);
        lVar14 = lVar7 + 2;
        if (lVar14 < lVar8) {
          plVar16 = (long *)(lVar12 + lVar7 * 8 + 0x10);
          lVar17 = lVar14;
          do {
            lVar14 = plVar16[-1];
            lVar12 = *plVar16;
            plVar18 = (long *)(lVar12 + _DAT_112d6f630);
            lStack_c8 = plVar18[3];
            lStack_d0 = plVar18[2];
            lStack_b8 = plVar18[5];
            lVar10 = plVar18[4];
            lVar19 = plVar18[1];
            lVar24 = *plVar18;
            lVar20 = plVar18[0xb];
            lStack_90 = plVar18[10];
            lVar22 = plVar18[0xd];
            lStack_80 = plVar18[0xc];
            lStack_158 = plVar18[7];
            lVar21 = plVar18[6];
            lStack_98 = plVar18[9];
            lStack_a0 = plVar18[8];
            lStack_e0 = lVar24;
            lStack_d8 = lVar19;
            lStack_c0 = lVar10;
            lStack_b0 = lVar21;
            lStack_a8 = lStack_158;
            lStack_88 = lVar20;
            lStack_78 = lVar22;
            if (lStack_98 < 0) {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar24 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0e4);
                (*pcVar2)();
              }
              lVar10 = lVar24;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar24);
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0e0);
                (*pcVar2)();
              }
              lStack_158 = lVar10;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_e0);
              func_0x000107c61170(lVar10);
            }
            else {
              func_0x000107c61174(lVar12);
              func_0x000107c61174(lVar14);
              FUN_1012ac38c(&lStack_e0,&lStack_150);
              func_0x000107c6142c(lVar19);
              func_0x000107c6142c(lVar10);
              func_0x000107c6142c(lVar21);
              func_0x000107c6142c(lVar22);
              func_0x000107c6142c(lVar20);
            }
            plVar18 = (long *)(lVar14 + _DAT_112d6f630);
            lVar20 = plVar18[0xb];
            lStack_100 = plVar18[10];
            lStack_e8 = plVar18[0xd];
            lStack_f0 = plVar18[0xc];
            lVar24 = plVar18[7];
            lStack_120 = plVar18[6];
            lStack_108 = plVar18[9];
            lStack_110 = plVar18[8];
            lStack_138 = plVar18[3];
            lStack_140 = plVar18[2];
            lStack_128 = plVar18[5];
            lStack_130 = plVar18[4];
            lStack_148 = plVar18[1];
            lVar10 = *plVar18;
            lStack_150 = lVar10;
            lStack_118 = lVar24;
            lStack_f8 = lVar20;
            if (lStack_108 < 0) {
              func_0x000107c61174();
              func_0x000107c40834();
              func_0x000107c61180();
              if (lVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0dc);
                (*pcVar2)();
              }
              lVar20 = lVar10;
              func_0x000107c5bbf4();
              func_0x000107c61180();
              func_0x000107c61170(lVar10);
              if (lVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0d8);
                (*pcVar2)();
              }
              lVar24 = lVar20;
              func_0x000107c51b2c();
              FUN_1012a9dfc(&lStack_150);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c61170(lVar20);
            }
            else {
              func_0x000107c61434(lVar20);
              func_0x000107c61170(lVar12);
              func_0x000107c61170(lVar14);
              func_0x000107c6142c(lVar20);
            }
            lVar14 = lVar17;
            if ((((uint)uVar13 ^ (uint)(lVar24 <= lStack_158)) & 1) == 0) break;
            plVar16 = plVar16 + 1;
            lVar17 = lVar17 + 1;
            lVar14 = lVar8;
          } while (lVar8 != lVar17);
          lVar17 = lVar17 + -1;
        }
        if ((uVar13 & 1) != 0) {
          if (lVar14 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0a4);
            (*pcVar2)();
          }
          if (lVar7 <= lVar17) {
            lVar12 = *param_3;
            puVar9 = (undefined8 *)(lVar12 + lVar14 * 8);
            puVar11 = (undefined8 *)(lVar12 + lVar7 * 8);
            lVar17 = lVar14;
            lVar8 = lVar7;
            do {
              puVar9 = puVar9 + -1;
              lVar17 = lVar17 + -1;
              if (lVar8 != lVar17) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0d4);
                  (*pcVar2)();
                }
                uVar15 = *puVar11;
                *puVar11 = *puVar9;
                *puVar9 = uVar15;
              }
              lVar8 = lVar8 + 1;
              puVar11 = puVar11 + 1;
            } while (lVar8 < lVar17);
          }
        }
      }
      lVar8 = param_3[1];
      lVar17 = lVar14;
      if (lVar14 < lVar8) {
        if (SBORROW8(lVar14,lVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0a0);
          (*pcVar2)();
        }
        if (lVar14 - lVar7 < param_4) {
          if (SCARRY8(lVar7,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0a8);
            (*pcVar2)();
          }
          lVar12 = lVar7 + param_4;
          if (lVar8 <= lVar7 + param_4) {
            lVar12 = lVar8;
          }
          if (lVar12 < lVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0ac);
            (*pcVar2)();
          }
          if (lVar14 != lVar12) {
            lVar10 = *param_3;
            plVar16 = (long *)(lVar10 + lVar14 * 8);
            lVar8 = (lVar7 - lVar14) + 1;
            plVar18 = plVar16;
            lVar24 = lVar8;
LAB_1012b9c84:
            do {
              lVar17 = plVar16[-1];
              lVar20 = *plVar16;
              plVar1 = (long *)(lVar20 + _DAT_112d6f630);
              lStack_c8 = plVar1[3];
              lStack_d0 = plVar1[2];
              lStack_b8 = plVar1[5];
              lVar19 = plVar1[4];
              lVar25 = plVar1[1];
              lVar22 = *plVar1;
              lVar21 = plVar1[0xb];
              lStack_90 = plVar1[10];
              lVar23 = plVar1[0xd];
              lStack_80 = plVar1[0xc];
              lStack_158 = plVar1[7];
              lVar26 = plVar1[6];
              lStack_98 = plVar1[9];
              lStack_a0 = plVar1[8];
              lStack_e0 = lVar22;
              lStack_d8 = lVar25;
              lStack_c0 = lVar19;
              lStack_b0 = lVar26;
              lStack_a8 = lStack_158;
              lStack_88 = lVar21;
              lStack_78 = lVar23;
              if (lStack_98 < 0) {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0c8);
                  (*pcVar2)();
                }
                lVar19 = lVar22;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar22);
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0c4);
                  (*pcVar2)();
                }
                lStack_158 = lVar19;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_e0);
                func_0x000107c61170(lVar19);
              }
              else {
                func_0x000107c61174(lVar20);
                func_0x000107c61174(lVar17);
                FUN_1012ac38c(&lStack_e0,&lStack_150);
                func_0x000107c6142c(lVar25);
                func_0x000107c6142c(lVar19);
                func_0x000107c6142c(lVar26);
                func_0x000107c6142c(lVar23);
                func_0x000107c6142c(lVar21);
              }
              plVar1 = (long *)(lVar17 + _DAT_112d6f630);
              lVar21 = plVar1[0xb];
              lStack_100 = plVar1[10];
              lStack_e8 = plVar1[0xd];
              lStack_f0 = plVar1[0xc];
              lVar22 = plVar1[7];
              lStack_120 = plVar1[6];
              lStack_108 = plVar1[9];
              lStack_110 = plVar1[8];
              lStack_138 = plVar1[3];
              lStack_140 = plVar1[2];
              lStack_128 = plVar1[5];
              lStack_130 = plVar1[4];
              lStack_148 = plVar1[1];
              lVar19 = *plVar1;
              lStack_150 = lVar19;
              lStack_118 = lVar22;
              lStack_f8 = lVar21;
              if (lStack_108 < 0) {
                func_0x000107c61174();
                func_0x000107c40834();
                func_0x000107c61180();
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0d0);
                  (*pcVar2)();
                }
                lVar21 = lVar19;
                func_0x000107c5bbf4();
                func_0x000107c61180();
                func_0x000107c61170(lVar19);
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0cc);
                  (*pcVar2)();
                }
                lVar22 = lVar21;
                func_0x000107c51b2c();
                FUN_1012a9dfc(&lStack_150);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c61170(lVar21);
              }
              else {
                func_0x000107c61434(lVar21);
                func_0x000107c61170(lVar20);
                func_0x000107c61170(lVar17);
                func_0x000107c6142c(lVar21);
              }
              if (lStack_158 < lVar22) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0b0);
                  (*pcVar2)();
                }
                lVar17 = plVar16[-1];
                plVar16[-1] = *plVar16;
                *plVar16 = lVar17;
                if (lVar8 != 0) {
                  lVar8 = lVar8 + 1;
                  plVar16 = plVar16 + -1;
                  goto LAB_1012b9c84;
                }
              }
              lVar14 = lVar14 + 1;
              plVar16 = plVar18 + 1;
              lVar8 = lVar24 + -1;
              lVar17 = lVar12;
              plVar18 = plVar16;
              lVar24 = lVar8;
            } while (lVar14 != lVar12);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar17 < lVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba094);
        (*pcVar2)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar13 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar13 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar13 + 1;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x20) = lVar7;
      *(long *)(puVar6 + uVar13 * 0x10 + 0x28) = lVar17;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0e8);
        (*pcVar2)();
      }
      FUN_1012ba3b0(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1012ba064;
      lVar8 = param_3[1];
      lVar7 = lVar17;
    } while (lVar17 < lVar8);
  }
  puVar6 = puStack_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0f0);
    (*pcVar2)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar13 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar13) {
    lVar7 = *param_3;
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba0ec);
      (*pcVar2)();
    }
    lVar12 = uVar13 - 1;
    lVar14 = *(long *)(puVar6 + uVar13 * 0x10);
    lVar17 = *(long *)(puVar6 + lVar12 * 0x10 + 0x28);
    FUN_1012ba618(lVar7 + lVar14 * 8,lVar7 + *(long *)(puVar6 + lVar12 * 0x10 + 0x20) * 8,
                  lVar7 + lVar17 * 8,lVar8);
    if (unaff_x21 != 0) break;
    if (lVar17 < lVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba098);
      (*pcVar2)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba09c);
      (*pcVar2)();
    }
    *(long *)(puVar6 + uVar13 * 0x10) = lVar14;
    *(long *)((long)(puVar6 + uVar13 * 0x10) + 8) = lVar17;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar12);
    puVar6 = puStack_58;
    uVar13 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1012ba064:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1012ba0f0; end: 1012ba3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012ba0f0(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_58;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    plVar5 = (long *)(lVar3 + param_3 * 8 + -8);
    lVar4 = (param_1 - param_3) + 1;
    do {
      lVar7 = *(long *)(lVar3 + param_3 * 8);
      plVar6 = plVar5;
      lVar9 = lVar4;
      while( true ) {
        lVar8 = *plVar6;
        plVar1 = (long *)(lVar7 + _DAT_112d6f630);
        lVar10 = plVar1[0xb];
        lStack_90 = plVar1[10];
        lVar11 = plVar1[0xd];
        lStack_80 = plVar1[0xc];
        lStack_58 = plVar1[7];
        lVar12 = plVar1[6];
        lStack_98 = plVar1[9];
        lStack_a0 = plVar1[8];
        lStack_c8 = plVar1[3];
        lStack_d0 = plVar1[2];
        lStack_b8 = plVar1[5];
        lVar14 = plVar1[4];
        lVar15 = plVar1[1];
        lVar13 = *plVar1;
        lStack_e0 = lVar13;
        lStack_d8 = lVar15;
        lStack_c0 = lVar14;
        lStack_b0 = lVar12;
        lStack_a8 = lStack_58;
        lStack_88 = lVar10;
        lStack_78 = lVar11;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba3a8);
            (*pcVar2)();
          }
          lVar10 = lVar13;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar13);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba3a4);
            (*pcVar2)();
          }
          lStack_58 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar8);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar12);
          func_0x000107c6142c(lVar11);
          func_0x000107c6142c(lVar10);
        }
        plVar1 = (long *)(lVar8 + _DAT_112d6f630);
        lVar11 = plVar1[0xb];
        lStack_100 = plVar1[10];
        lStack_e8 = plVar1[0xd];
        lStack_f0 = plVar1[0xc];
        lVar13 = plVar1[7];
        lStack_120 = plVar1[6];
        lStack_108 = plVar1[9];
        lStack_110 = plVar1[8];
        lStack_138 = plVar1[3];
        lStack_140 = plVar1[2];
        lStack_128 = plVar1[5];
        lStack_130 = plVar1[4];
        lStack_148 = plVar1[1];
        lVar10 = *plVar1;
        lStack_150 = lVar10;
        lStack_118 = lVar13;
        lStack_f8 = lVar11;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba3b0);
            (*pcVar2)();
          }
          lVar11 = lVar10;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar10);
          if (lVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba3ac);
            (*pcVar2)();
          }
          lVar13 = lVar11;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar11);
        }
        else {
          func_0x000107c61434(lVar11);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar8);
          func_0x000107c6142c(lVar11);
        }
        if (lVar13 <= lStack_58) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012ba3a0);
          (*pcVar2)();
        }
        lVar13 = *plVar6;
        lVar7 = plVar6[1];
        *plVar6 = lVar7;
        plVar6[1] = lVar13;
        if (lVar9 == 0) break;
        lVar9 = lVar9 + 1;
        plVar6 = plVar6 + -1;
      }
      param_3 = param_3 + 1;
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1012ba3b0; end: 1012ba617;  */

undefined8 FUN_1012ba3b0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1012ba484;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba600);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1012ba4e8:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5f0);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5f8);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5d8);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5dc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5e4);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5ec);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1012ba484:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5e0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5e8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5f4);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5fc);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1012ba4e8;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba604);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5cc);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba618);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1012ba618(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5d0);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012ba5d4);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1012ba618; end: 1012bacbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012ba618(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar3 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar3 = lVar9;
  }
  lVar3 = lVar3 >> 3;
  lVar10 = (long)param_3 - (long)param_2;
  lVar6 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar3 << 3);
    }
    plVar4 = param_4 + lVar3;
    plVar11 = param_1;
    if (7 < lVar9) {
      do {
        plVar11 = param_1;
        if (param_3 <= param_2) break;
        lVar6 = *param_2;
        lVar9 = *param_4;
        plVar11 = (long *)(lVar6 + _DAT_112d6f630);
        lStack_c8 = plVar11[3];
        lStack_d0 = plVar11[2];
        lStack_b8 = plVar11[5];
        lVar10 = plVar11[4];
        lVar15 = plVar11[1];
        lVar3 = *plVar11;
        lVar13 = plVar11[0xb];
        lStack_90 = plVar11[10];
        lVar14 = plVar11[0xd];
        lStack_80 = plVar11[0xc];
        lStack_160 = plVar11[7];
        lVar16 = plVar11[6];
        lStack_98 = plVar11[9];
        lStack_a0 = plVar11[8];
        lStack_e0 = lVar3;
        lStack_d8 = lVar15;
        lStack_c0 = lVar10;
        lStack_b0 = lVar16;
        lStack_a8 = lStack_160;
        lStack_88 = lVar13;
        lStack_78 = lVar14;
        if (lStack_98 < 0) {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bacbc);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bacb4);
            (*pcVar2)();
          }
          lStack_160 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_e0);
          func_0x000107c61170(lVar10);
        }
        else {
          func_0x000107c61174(lVar6);
          func_0x000107c61174(lVar9);
          FUN_1012ac38c(&lStack_e0,&lStack_150);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(lVar10);
          func_0x000107c6142c(lVar16);
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(lVar13);
        }
        plVar11 = (long *)(lVar9 + _DAT_112d6f630);
        lVar10 = plVar11[0xb];
        lStack_100 = plVar11[10];
        lStack_e8 = plVar11[0xd];
        lStack_f0 = plVar11[0xc];
        lVar13 = plVar11[7];
        lStack_120 = plVar11[6];
        lStack_108 = plVar11[9];
        lStack_110 = plVar11[8];
        lStack_138 = plVar11[3];
        lStack_140 = plVar11[2];
        lStack_128 = plVar11[5];
        lStack_130 = plVar11[4];
        lStack_148 = plVar11[1];
        lVar3 = *plVar11;
        lStack_150 = lVar3;
        lStack_118 = lVar13;
        lStack_f8 = lVar10;
        if (lStack_108 < 0) {
          func_0x000107c61174();
          func_0x000107c40834();
          func_0x000107c61180();
          if (lVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bacac);
            (*pcVar2)();
          }
          lVar10 = lVar3;
          func_0x000107c5bbf4();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bacc0);
            (*pcVar2)();
          }
          lVar3 = lVar10;
          func_0x000107c51b2c();
          FUN_1012a9dfc(&lStack_150);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(lVar10);
          if (lVar3 <= lStack_160) goto LAB_1012ba924;
LAB_1012ba898:
          plVar12 = param_2 + 1;
          plVar11 = param_4;
        }
        else {
          func_0x000107c61434(lVar10);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar9);
          func_0x000107c6142c(lVar10);
          if (lStack_160 < lVar13) goto LAB_1012ba898;
LAB_1012ba924:
          plVar12 = param_2;
          plVar11 = param_4 + 1;
          param_2 = param_4;
        }
        param_4 = plVar11;
        if (param_1 != param_2) {
          *param_1 = *param_2;
        }
        param_1 = param_1 + 1;
        plVar11 = param_1;
        param_2 = plVar12;
      } while (param_4 < plVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar6 << 3);
    }
    plVar4 = param_4 + lVar6;
    plVar11 = param_2;
    if ((param_1 < param_2) && (7 < lVar10)) {
      do {
        plVar7 = param_2 + -1;
        plVar12 = param_3;
        while( true ) {
          param_3 = plVar12 + -1;
          plVar8 = plVar4 + -1;
          lVar6 = *plVar8;
          lVar9 = *plVar7;
          plVar11 = (long *)(lVar6 + _DAT_112d6f630);
          lStack_c8 = plVar11[3];
          lStack_d0 = plVar11[2];
          lStack_b8 = plVar11[5];
          lVar10 = plVar11[4];
          lVar15 = plVar11[1];
          lVar3 = *plVar11;
          lVar13 = plVar11[0xb];
          lStack_90 = plVar11[10];
          lVar14 = plVar11[0xd];
          lStack_80 = plVar11[0xc];
          lStack_160 = plVar11[7];
          lVar16 = plVar11[6];
          lStack_98 = plVar11[9];
          lStack_a0 = plVar11[8];
          lStack_e0 = lVar3;
          lStack_d8 = lVar15;
          lStack_c0 = lVar10;
          lStack_b0 = lVar16;
          lStack_a8 = lStack_160;
          lStack_88 = lVar13;
          lStack_78 = lVar14;
          if (lStack_98 < 0) {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012baca4);
              (*pcVar2)();
            }
            lVar10 = lVar3;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar3);
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bacb8);
              (*pcVar2)();
            }
            lStack_160 = lVar10;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_e0);
            func_0x000107c61170(lVar10);
          }
          else {
            func_0x000107c61174(lVar6);
            func_0x000107c61174(lVar9);
            FUN_1012ac38c(&lStack_e0,&lStack_150);
            func_0x000107c6142c(lVar15);
            func_0x000107c6142c(lVar10);
            func_0x000107c6142c(lVar16);
            func_0x000107c6142c(lVar14);
            func_0x000107c6142c(lVar13);
          }
          plVar11 = (long *)(lVar9 + _DAT_112d6f630);
          lVar13 = plVar11[0xb];
          lStack_100 = plVar11[10];
          lStack_e8 = plVar11[0xd];
          lStack_f0 = plVar11[0xc];
          lVar3 = plVar11[7];
          lStack_120 = plVar11[6];
          lStack_108 = plVar11[9];
          lStack_110 = plVar11[8];
          lStack_138 = plVar11[3];
          lStack_140 = plVar11[2];
          lStack_128 = plVar11[5];
          lStack_130 = plVar11[4];
          lStack_148 = plVar11[1];
          lVar10 = *plVar11;
          lStack_150 = lVar10;
          lStack_118 = lVar3;
          lStack_f8 = lVar13;
          if (lStack_108 < 0) {
            func_0x000107c61174();
            func_0x000107c40834();
            func_0x000107c61180();
            if (lVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bacb0);
              (*pcVar2)();
            }
            lVar13 = lVar10;
            func_0x000107c5bbf4();
            func_0x000107c61180();
            func_0x000107c61170(lVar10);
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1012baca8);
              (*pcVar2)();
            }
            lVar3 = lVar13;
            func_0x000107c51b2c();
            FUN_1012a9dfc(&lStack_150);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c61170(lVar13);
          }
          else {
            func_0x000107c61434(lVar13);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar9);
            func_0x000107c6142c(lVar13);
          }
          if (lStack_160 < lVar3) break;
          if (plVar12 != plVar4) {
            *param_3 = *plVar8;
          }
          plVar4 = plVar8;
          plVar11 = param_2;
          plVar12 = param_3;
          if (plVar8 <= param_4) goto LAB_1012bac30;
        }
        if (plVar12 != param_2) {
          *param_3 = *plVar7;
        }
        plVar11 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar4));
    }
  }
LAB_1012bac30:
  uVar5 = (long)plVar4 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar11 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar11)) {
    func_0x000107c610b8(plVar11,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1012bacc0; end: 1012bae2f;  */

void FUN_1012bacc0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112d6fb78,&UNK_10d931360);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1012bad9c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_1012bad9c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1012bae30);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1012bae08;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1012bae08:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1012bae30; end: 1012bb0cb;  */

void FUN_1012bae30(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d6fb78;
  func_0x0001000285a8(0x112d6fb78,&UNK_10d931360);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1012bb098:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bb0c8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1012bb098;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bb0cc);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1012bb0cc; end: 1012bb17b;  */

void FUN_1012bb0cc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_1012bf74c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1012bb17c; end: 1012bb27b;  */

undefined * FUN_1012bb17c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d6fb78,&UNK_10d931360);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012bb278);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1012bb27c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1012bb27c; end: 1012bb3db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1012bb27c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    uVar6 = 0;
    uVar5 = 1;
  }
  else {
    uVar6 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bb390);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar6;
        FUN_1012bfd08(uVar6,param_1);
      }
      puVar1 = (ulong *)(uVar3 + _DAT_112d6f630);
      if (-1 < (long)puVar1[9]) {
        uVar4 = *puVar1;
        if (uVar4 == param_2 && puVar1[1] == param_3) {
          func_0x000107c61170();
        }
        else {
          func_0x000107c605b8(uVar4,puVar1[1],param_2,param_3,0);
          func_0x000107c61170(uVar3);
          if ((uVar4 & 1) == 0) goto joined_r0x0001012bb338;
        }
        uVar5 = 0;
        goto LAB_1012bb3bc;
      }
      func_0x000107c61170();
joined_r0x0001012bb338:
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012bb394);
        (*pcVar2)();
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
    uVar6 = 0;
    uVar5 = 1;
  }
LAB_1012bb3bc:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 1012bb3dc; end: 1012bb697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bb3dc(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x21;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar9 = *param_1;
  uVar5 = uVar9;
  uVar11 = param_2;
  FUN_1012bb27c();
  if (unaff_x21 == 0) {
    if (((uint)uVar11 & 0xff) == 1) {
      if (uVar9 >> 0x3e != 0) {
        uVar5 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar5 = uVar9;
        }
        func_0x000107c60480(uVar5);
      }
    }
    else {
      uVar11 = uVar5;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb698);
        (*pcVar3)();
      }
      while( true ) {
        uVar11 = uVar11 + 1;
        if (uVar9 >> 0x3e == 0) {
          uVar6 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar6 = uVar9 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar9) {
            uVar6 = uVar9;
          }
          func_0x000107c60480();
        }
        if (uVar11 == uVar6) break;
        if ((uVar9 & 0xc000000000000001) == 0) {
          if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb65c);
            (*pcVar3)();
          }
          if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb660);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar11;
          FUN_1012bfd08(uVar11,uVar9);
        }
        puVar1 = (ulong *)(uVar6 + _DAT_112d6f630);
        if ((long)puVar1[9] < 0) {
          func_0x000107c61170();
joined_r0x0001012bb520:
          if (uVar5 != uVar11) {
            if ((uVar9 & 0xc000000000000001) == 0) {
              if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb670);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
              if (uVar6 <= uVar5) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb674);
                (*pcVar3)();
              }
              if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb678);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(uVar9 + 0x20 + uVar5 * 8);
              uVar12 = *(ulong *)(uVar9 + 0x20 + uVar11 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar5;
              FUN_1012bfd08(uVar5,uVar9);
              uVar12 = uVar11;
              FUN_1012bfd08(uVar11,uVar9);
            }
            uVar8 = uVar9;
            func_0x000107c61550();
            if ((((int)uVar8 == 0) || ((long)uVar9 < 0)) || ((uVar9 >> 0x3e & 1) != 0)) {
              FUN_1012b5df4();
              uVar10 = (uint)(uVar9 >> 0x3e) & 1;
            }
            else {
              uVar10 = 0;
            }
            uVar8 = uVar9 & 0xffffffffffffff8;
            lVar2 = uVar8 + uVar5 * 8;
            uVar7 = *(undefined8 *)(lVar2 + 0x20);
            *(ulong *)(lVar2 + 0x20) = uVar12;
            func_0x000107c61170(uVar7);
            if (((long)uVar9 < 0) || (uVar10 != 0)) {
              FUN_1012b5df4();
              uVar8 = uVar9 & 0xffffffffffffff8;
            }
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb630);
              (*pcVar3)();
            }
            if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb66c);
              (*pcVar3)();
            }
            lVar2 = uVar8 + uVar11 * 8;
            uVar7 = *(undefined8 *)(lVar2 + 0x20);
            *(ulong *)(lVar2 + 0x20) = uVar6;
            func_0x000107c61170(uVar7);
            *param_1 = uVar9;
          }
          bVar4 = SCARRY8(uVar5,1);
          uVar5 = uVar5 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb668);
            (*pcVar3)();
          }
        }
        else {
          uVar12 = *puVar1;
          if (uVar12 == param_2 && puVar1[1] == param_3) {
            func_0x000107c61170();
          }
          else {
            func_0x000107c605b8(uVar12,puVar1[1],param_2,param_3,0);
            func_0x000107c61170(uVar6);
            if ((uVar12 & 1) == 0) goto joined_r0x0001012bb520;
          }
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb664);
          (*pcVar3)();
        }
      }
    }
  }
  return;
}



/* Entry: 1012bb698; end: 1012bb793;  */

void FUN_1012bb698(long param_1,long param_2,long param_3)

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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bb770);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_1012aeb90(0);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bb774);
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
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bb78c);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bb790);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bb794);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1012bb794; end: 1012bb857;  */

/* WARNING: Removing unreachable block (ram,0x0001012bb790) */

void FUN_1012bb794(long param_1,long param_2)

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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb834);
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
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb84c);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb850);
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
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb858);
      (*pcVar3)();
    }
    FUN_1012bb0cc(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb770);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_1012aeb90(0);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb774);
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
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb78c);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb790);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bb854);
  (*pcVar3)();
}



/* Entry: 1012bb858; end: 1012bba97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012bb858(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  long lVar11;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  double dStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lVar4 = 0;
  uStack_f8 = param_2;
  func_0x000107c5eea4();
  lStack_108 = *(long *)(lVar4 + -8);
  lStack_100 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bba50);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar9;
        FUN_1012bfd08(uVar9,param_1);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bba4c);
        (*pcVar3)();
      }
      plVar2 = (long *)(uVar5 + _DAT_112d6f630);
      lStack_98 = plVar2[0xb];
      dVar10 = (double)plVar2[10];
      lStack_88 = plVar2[0xd];
      lStack_90 = plVar2[0xc];
      lVar4 = plVar2[7];
      lStack_c0 = plVar2[6];
      lStack_a8 = plVar2[9];
      lStack_b0 = plVar2[8];
      lStack_d8 = plVar2[3];
      lStack_e0 = plVar2[2];
      lStack_c8 = plVar2[5];
      lStack_d0 = plVar2[4];
      lStack_e8 = plVar2[1];
      lVar11 = *plVar2;
      lStack_f0 = lVar11;
      lStack_b8 = lVar4;
      dStack_a0 = dVar10;
      if (lStack_a8 < 0) {
        func_0x000107c61174();
        func_0x000107c40834();
        func_0x000107c61180();
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bba98);
          (*pcVar3)();
        }
        lVar6 = lVar11;
        func_0x000107c5bbf4();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012bba94);
          (*pcVar3)();
        }
        lVar4 = lVar6;
        func_0x000107c51b2c();
        FUN_1012a9dfc(&lStack_f0);
        func_0x000107c61170(lVar6);
      }
      else {
        func_0x000107c61434(lStack_98);
        func_0x000107c6142c();
      }
      uVar7 = uStack_f8;
      func_0x000107c40ef8(uStack_f8);
      func_0x000107c61180();
      func_0x000107c5ee94(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c61170(uVar7);
      func_0x000107c5ee8c();
      func_0x000107c61170(uVar5);
      (**(code **)(lStack_108 + 8))
                (auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_100);
      if ((dVar10 + -86400.0 <= (double)lVar4) && ((double)lVar4 <= dVar10 + 86400.0)) {
        return 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
  }
  return 0;
}



/* Entry: 1012bba98; end: 1012bbc63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1012bba98(ulong param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbc10);
          (*pcVar5)();
        }
        uVar6 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar9;
        FUN_1012bfd08(uVar9,param_1);
      }
      puVar1 = (ulong *)(uVar6 + _DAT_112d6f630);
      if (-1 < (long)puVar1[9]) {
        uVar7 = *puVar1;
        uVar3 = puVar1[1];
        uVar2 = puVar1[0xc];
        uVar4 = puVar1[0xd];
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar3);
        if (uVar7 == param_2 && uVar3 == param_3) {
          func_0x000107c6142c(uVar3);
        }
        else {
          func_0x000107c605b8(uVar7,uVar3,param_2,param_3,0);
          func_0x000107c6142c(uVar3);
          if ((uVar7 & 1) == 0) {
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(uVar4);
            goto joined_r0x0001012bbba8;
          }
        }
        uVar10 = param_4[1];
        *param_4 = uVar2;
        param_4[1] = uVar4;
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(uVar10);
        uVar8 = 0;
        goto LAB_1012bbc3c;
      }
      func_0x000107c61170();
joined_r0x0001012bbba8:
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbc14);
        (*pcVar5)();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  uVar9 = 0;
  uVar8 = 1;
LAB_1012bbc3c:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar9;
  return auVar11;
}



/* Entry: 1012bbc64; end: 1012bbf6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bbc64(ulong *param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x21;
  ulong uVar13;
  uint uVar14;
  
  uVar13 = *param_1;
  uVar7 = uVar13;
  uVar10 = param_2;
  FUN_1012bba98();
  if (unaff_x21 == 0) {
    if (((uint)uVar10 & 0xff) != 1) {
      uVar10 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbce4);
        (*pcVar5)();
      }
      do {
        while( true ) {
          if (uVar13 >> 0x3e == 0) {
            uVar8 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar8 = uVar13 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar13) {
              uVar8 = uVar13;
            }
            func_0x000107c60480();
          }
          if (uVar10 == uVar8) {
            return;
          }
          if ((uVar13 & 0xc000000000000001) == 0) {
            if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf38);
              (*pcVar5)();
            }
            if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf3c);
              (*pcVar5)();
            }
            uVar8 = *(ulong *)(uVar13 + uVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar10;
            FUN_1012bfd08(uVar10,uVar13);
          }
          puVar1 = (ulong *)(uVar8 + _DAT_112d6f630);
          if (-1 < (long)puVar1[9]) break;
          func_0x000107c61170();
joined_r0x0001012bbdc8:
          if (uVar7 != uVar10) {
            if ((uVar13 & 0xc000000000000001) == 0) {
              if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf4c);
                (*pcVar5)();
              }
              uVar8 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
              if (uVar8 <= uVar7) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf50);
                (*pcVar5)();
              }
              if (uVar8 <= uVar10) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf54);
                (*pcVar5)();
              }
              uVar8 = *(ulong *)(uVar13 + 0x20 + uVar7 * 8);
              uVar11 = *(ulong *)(uVar13 + 0x20 + uVar10 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              uVar8 = uVar7;
              FUN_1012bfd08(uVar7,uVar13);
              uVar11 = uVar10;
              FUN_1012bfd08(uVar10,uVar13);
            }
            uVar12 = uVar13;
            func_0x000107c61550();
            if ((((int)uVar12 == 0) || ((long)uVar13 < 0)) || ((uVar13 >> 0x3e & 1) != 0)) {
              FUN_1012b5df4();
              uVar14 = (uint)(uVar13 >> 0x3e) & 1;
            }
            else {
              uVar14 = 0;
            }
            uVar12 = uVar13 & 0xffffffffffffff8;
            lVar2 = uVar12 + uVar7 * 8;
            uVar9 = *(undefined8 *)(lVar2 + 0x20);
            *(ulong *)(lVar2 + 0x20) = uVar11;
            func_0x000107c61170(uVar9);
            if (((long)uVar13 < 0) || (uVar14 != 0)) {
              FUN_1012b5df4();
              uVar12 = uVar13 & 0xffffffffffffff8;
            }
            if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf0c);
              (*pcVar5)();
            }
            if (*(ulong *)(uVar12 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf48);
              (*pcVar5)();
            }
            lVar2 = uVar12 + uVar10 * 8;
            uVar9 = *(undefined8 *)(lVar2 + 0x20);
            *(ulong *)(lVar2 + 0x20) = uVar8;
            func_0x000107c61170(uVar9);
            *param_1 = uVar13;
          }
          bVar6 = SCARRY8(uVar7,1);
          uVar7 = uVar7 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf44);
            (*pcVar5)();
          }
          bVar6 = SCARRY8(uVar10,1);
          uVar10 = uVar10 + 1;
          if (bVar6) goto LAB_1012bbf3c;
        }
        uVar11 = *puVar1;
        uVar3 = puVar1[1];
        uVar12 = puVar1[0xc];
        uVar4 = puVar1[0xd];
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar3);
        if (uVar11 == param_2 && uVar3 == param_3) {
          func_0x000107c6142c(uVar3);
        }
        else {
          func_0x000107c605b8(uVar11,uVar3,param_2,param_3,0);
          func_0x000107c6142c(uVar3);
          if ((uVar11 & 1) == 0) {
            func_0x000107c61170(uVar8);
            func_0x000107c6142c(uVar4);
            goto joined_r0x0001012bbdc8;
          }
        }
        uVar11 = param_4[1];
        *param_4 = uVar12;
        param_4[1] = uVar4;
        func_0x000107c61170(uVar8);
        func_0x000107c6142c(uVar11);
        bVar6 = SCARRY8(uVar10,1);
        uVar10 = uVar10 + 1;
      } while (!bVar6);
LAB_1012bbf3c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bbf40);
      (*pcVar5)();
    }
    if (uVar13 >> 0x3e != 0) {
      uVar7 = uVar13 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar13) {
        uVar7 = uVar13;
      }
      func_0x000107c60480(uVar7);
    }
  }
  return;
}



/* Entry: 1012bbf70; end: 1012bcde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012bbf70(ulong param_1,ulong param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined *puStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined *apuStack_70 [2];
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1012bb17c();
  if (param_2 >> 0x3e == 0) {
    uVar26 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar26 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar26 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar26 != 0) {
    lVar24 = 4;
    do {
      uVar19 = lVar24 - 4;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bc198);
          (*pcVar5)();
        }
        uVar27 = *(ulong *)(param_2 + lVar24 * 8);
        func_0x000107c61174();
      }
      else {
        uVar27 = uVar19;
        FUN_1012bfd08(uVar19,param_2);
      }
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bc190);
        (*pcVar5)();
      }
      uVar19 = lVar24 - 3;
      puVar1 = (ulong *)(uVar27 + _DAT_112d6f630);
      if ((long)puVar1[9] < 0) {
        func_0x000107c61170();
      }
      else {
        uVar20 = puVar1[0xb];
        uVar17 = *puVar1;
        uVar16 = puVar1[1];
        func_0x000107c61434(uVar20);
        func_0x000107c61434(uVar16);
        func_0x000107c6142c(uVar20);
        func_0x000107c61174();
        puVar13 = puVar7;
        func_0x000107c61558();
        uVar20 = uVar17;
        uVar25 = uVar16;
        puStack_f0 = puVar7;
        func_0x000100029284();
        uVar18 = (ulong)~(uint)uVar25 & 1;
        lVar10 = *(long *)(puVar7 + 0x10) + uVar18;
        if (SCARRY8(*(long *)(puVar7 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bc194);
          (*pcVar5)();
        }
        if (*(long *)(puVar7 + 0x18) < lVar10) {
          FUN_1012bae30(lVar10,puVar13);
          uVar20 = uVar17;
          uVar18 = uVar16;
          func_0x000100029284();
          puVar7 = puStack_f0;
          if (((uint)uVar25 & 1) != ((uint)uVar18 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bcde8);
            (*pcVar5)();
          }
        }
        else {
          puVar7 = puStack_f0;
          if (((ulong)puVar13 & 1) == 0) {
            FUN_1012bacc0();
            puVar7 = puStack_f0;
          }
        }
        puStack_f0 = puVar7;
        if ((uVar25 & 1) == 0) {
          *(ulong *)(puVar7 + (uVar20 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar7 + (uVar20 >> 6) * 8 + 0x40) | 1L << (uVar20 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar20 * 0x10);
          *puVar1 = uVar17;
          puVar1[1] = uVar16;
          *(ulong *)(*(long *)(puVar7 + 0x38) + uVar20 * 8) = uVar27;
          func_0x000107c61170(uVar27);
          if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bc19c);
            (*pcVar5)();
          }
          *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        }
        else {
          uVar23 = *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar20 * 8);
          *(ulong *)(*(long *)(puVar7 + 0x38) + uVar20 * 8) = uVar27;
          func_0x000107c61170(uVar27);
          func_0x000107c6142c(uVar16);
          func_0x000107c61170(uVar23);
        }
      }
      lVar24 = lVar24 + 1;
    } while (uVar19 != uVar26);
  }
  apuStack_70[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar26 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar26 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar26 = param_1;
    }
    func_0x000107c60480();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
  puVar12 = apuStack_70[0];
  if (uVar26 != 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar19 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      if (uVar19 != 0) {
        uVar27 = 0;
        do {
          lVar24 = *(long *)(param_1 + 0x20 + uVar27 * 8);
          puVar2 = (undefined8 *)(lVar24 + _DAT_112d6f630);
          uStack_d8 = puVar2[3];
          lVar10 = puVar2[2];
          uStack_c8 = puVar2[5];
          uVar23 = puVar2[4];
          uVar17 = puVar2[1];
          puVar12 = (undefined *)*puVar2;
          uVar28 = puVar2[0xb];
          uStack_a0 = puVar2[10];
          uVar29 = puVar2[0xd];
          uStack_90 = puVar2[0xc];
          uStack_b8 = puVar2[7];
          uVar30 = puVar2[6];
          lStack_a8 = puVar2[9];
          uStack_b0 = puVar2[8];
          puStack_f0 = puVar12;
          uStack_e8 = uVar17;
          lStack_e0 = lVar10;
          uStack_d0 = uVar23;
          uStack_c0 = uVar30;
          uStack_98 = uVar28;
          uStack_88 = uVar29;
          if (lStack_a8 < 0) {
            func_0x000107c61174();
            func_0x000107c61174();
            puVar12 = puVar13;
            func_0x000107c61550();
            if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0))
            {
              if ((ulong)puVar13 >> 0x3e == 0) goto LAB_1012bc830;
LAB_1012bc7ac:
              puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar13) {
                puVar12 = puVar13;
              }
              func_0x000107c60480(puVar12);
LAB_1012bc838:
              puVar11 = (undefined *)0x0;
              FUN_1012bf74c(0,puVar12 + 1,1,puVar13);
              puVar13 = puVar11;
            }
LAB_1012bc850:
            uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
            uVar17 = *(ulong *)(uVar16 + 0x10);
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
              puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_1012bf74c(puVar12,uVar17 + 1,1,puVar13);
              uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
              puVar13 = puVar12;
            }
            *(ulong *)(uVar16 + 0x10) = uVar17 + 1;
            *(long *)(uVar16 + uVar17 * 8 + 0x20) = lVar24;
            func_0x000107c61170(lVar24);
            apuStack_70[0] = puVar13;
          }
          else {
            func_0x000107c61174();
            FUN_1012ac38c(&puStack_f0,auStack_160);
            func_0x000107c6142c(uVar23);
            func_0x000107c6142c(uVar30);
            func_0x000107c6142c(uVar29);
            func_0x000107c6142c(uVar28);
            func_0x000107c61434(uVar17);
            func_0x000100403b00(auStack_160,puVar12,uVar17);
            func_0x000107c6142c(uStack_158);
            lVar21 = *param_3;
            if (*(long *)(lVar21 + 0x10) != 0) {
              func_0x000107c6068c(auStack_160,*(undefined8 *)(lVar21 + 0x28));
              puVar14 = auStack_160;
              func_0x000107c5fb58(puVar14,puVar12,uVar17);
              func_0x000107c606a8();
              uVar16 = -1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
              uVar20 = (ulong)puVar14 & (uVar16 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar21 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0) {
                do {
                  plVar3 = (long *)(*(long *)(lVar21 + 0x30) + uVar20 * 0x10);
                  puVar11 = (undefined *)*plVar3;
                  uVar25 = plVar3[1];
                  if ((puVar11 == puVar12 && uVar17 == uVar25) ||
                     (func_0x000107c605b8(puVar11,uVar25,puVar12,uVar17,0),
                     ((ulong)puVar11 & 1) != 0)) {
                    func_0x000107c61170(lVar24);
                    func_0x000107c6142c(uVar17);
                    goto LAB_1012bc87c;
                  }
                  uVar20 = uVar20 + 1 & ~uVar16;
                } while ((*(ulong *)(lVar21 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0
                        );
              }
            }
            if (*(long *)(puVar7 + 0x10) == 0) {
              func_0x000107c6142c(uVar17);
LAB_1012bc7fc:
              func_0x000107c61174();
              puVar12 = puVar13;
              func_0x000107c61550();
              if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) ||
                 (((ulong)puVar13 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar13 >> 0x3e != 0) goto LAB_1012bc7ac;
LAB_1012bc830:
                puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
                goto LAB_1012bc838;
              }
              goto LAB_1012bc850;
            }
            func_0x000107c61434(puVar7);
            uVar16 = uVar17;
            func_0x000100029284();
            if ((uVar16 & 1) == 0) {
              func_0x000107c6142c(uVar17);
              func_0x000107c6142c(puVar7);
              goto LAB_1012bc7fc;
            }
            lVar15 = *(long *)(*(long *)(puVar7 + 0x38) + (long)puVar12 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(puVar7);
            func_0x000107c6142c(uVar17);
            lVar21 = lVar15 + _DAT_112d6f630;
            if (*(long *)(lVar21 + 0x48) < 0) {
LAB_1012bc778:
              func_0x000107c61170(lVar15);
              goto LAB_1012bc7fc;
            }
            lVar22 = *(long *)(lVar21 + 0x10);
            func_0x000107c61434(*(undefined8 *)(lVar21 + 0x58));
            func_0x000107c6142c();
            if (lVar22 < lVar10) goto LAB_1012bc778;
            func_0x000107c61174();
            puVar12 = puVar13;
            func_0x000107c61550();
            if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) ||
               (puVar12 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar13) {
                  puVar11 = puVar13;
                }
                func_0x000107c60480(puVar11);
              }
              puVar12 = (undefined *)0x0;
              FUN_1012bf74c(0,puVar11 + 1,1,puVar13);
            }
            uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
            uVar17 = *(ulong *)(uVar16 + 0x10);
            puVar13 = puVar12;
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
              puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_1012bf74c(puVar13,uVar17 + 1,1,puVar12);
              uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar16 + 0x10) = uVar17 + 1;
            *(long *)(uVar16 + uVar17 * 8 + 0x20) = lVar15;
            func_0x000107c61170(lVar15);
            func_0x000107c61170(lVar24);
            apuStack_70[0] = puVar13;
          }
LAB_1012bc87c:
          uVar27 = uVar27 + 1;
          puVar12 = apuStack_70[0];
          if (uVar27 == uVar26) goto LAB_1012bc9a4;
        } while (uVar27 != uVar19);
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bc980);
      (*pcVar5)();
    }
    uVar19 = 0;
    do {
      uVar27 = uVar19;
      FUN_1012bfd08(uVar19,param_1);
      bVar6 = SCARRY8(uVar19,1);
      uVar19 = uVar19 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bc97c);
        (*pcVar5)();
      }
      puVar1 = (ulong *)(uVar27 + _DAT_112d6f630);
      if ((long)puVar1[9] < 0) {
LAB_1012bc410:
        func_0x000107c61174();
        puVar12 = puVar13;
        func_0x000107c61550();
        if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) ||
           (puVar12 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar13 >> 0x3e == 0) {
            puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar13) {
              puVar11 = puVar13;
            }
            func_0x000107c60480(puVar11);
          }
          puVar12 = (undefined *)0x0;
          FUN_1012bf74c(0,puVar11 + 1,1,puVar13);
        }
        uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar17 = *(ulong *)(uVar16 + 0x10);
        puVar13 = puVar12;
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
          FUN_1012bf74c(puVar13,uVar17 + 1,1,puVar12);
          uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar16 + 0x10) = uVar17 + 1;
        *(ulong *)(uVar16 + uVar17 * 8 + 0x20) = uVar27;
      }
      else {
        uVar17 = *puVar1;
        uVar16 = puVar1[1];
        uVar25 = puVar1[2];
        uVar20 = puVar1[0xb];
        func_0x000107c61434(uVar20);
        func_0x000107c61434(uVar16);
        func_0x000107c6142c(uVar20);
        func_0x000107c61434(uVar16);
        func_0x000100403b00(&puStack_f0,uVar17,uVar16);
        func_0x000107c6142c(uStack_e8);
        lVar24 = *param_3;
        if (*(long *)(lVar24 + 0x10) != 0) {
          func_0x000107c6068c(&puStack_f0,*(undefined8 *)(lVar24 + 0x28));
          ppuVar8 = &puStack_f0;
          func_0x000107c5fb58(ppuVar8,uVar17,uVar16);
          func_0x000107c606a8();
          uVar20 = -1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
          uVar18 = (ulong)ppuVar8 & (uVar20 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar24 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(lVar24 + 0x30) + uVar18 * 0x10);
              uVar9 = *puVar1;
              uVar4 = puVar1[1];
              if ((uVar9 == uVar17 && uVar16 == uVar4) ||
                 (func_0x000107c605b8(uVar9,uVar4,uVar17,uVar16,0), (uVar9 & 1) != 0)) {
                func_0x000107c615e8(uVar27);
                func_0x000107c6142c(uVar16);
                goto joined_r0x0001012bc224;
              }
              uVar18 = uVar18 + 1 & ~uVar20;
            } while ((*(ulong *)(lVar24 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0);
          }
        }
        if (*(long *)(puVar7 + 0x10) == 0) {
          func_0x000107c6142c(uVar16);
          goto LAB_1012bc410;
        }
        func_0x000107c61434(puVar7);
        uVar20 = uVar16;
        func_0x000100029284();
        if ((uVar20 & 1) == 0) {
          func_0x000107c6142c(uVar16);
          func_0x000107c6142c(puVar7);
          goto LAB_1012bc410;
        }
        lVar10 = *(long *)(*(long *)(puVar7 + 0x38) + uVar17 * 8);
        func_0x000107c61174();
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(uVar16);
        lVar24 = lVar10 + _DAT_112d6f630;
        if (*(long *)(lVar24 + 0x48) < 0) {
          func_0x000107c61170(lVar10);
          goto LAB_1012bc410;
        }
        lVar21 = *(long *)(lVar24 + 0x10);
        func_0x000107c61434(*(undefined8 *)(lVar24 + 0x58));
        func_0x000107c6142c();
        if (lVar21 < (long)uVar25) {
          func_0x000107c61170();
          goto LAB_1012bc410;
        }
        func_0x000107c61174();
        puVar12 = puVar13;
        func_0x000107c61550();
        if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) ||
           (puVar12 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar13 >> 0x3e == 0) {
            puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar13) {
              puVar11 = puVar13;
            }
            func_0x000107c60480(puVar11);
          }
          puVar12 = (undefined *)0x0;
          FUN_1012bf74c(0,puVar11 + 1,1,puVar13);
        }
        uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar17 = *(ulong *)(uVar16 + 0x10);
        puVar13 = puVar12;
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar17) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
          FUN_1012bf74c(puVar13,uVar17 + 1,1,puVar12);
          uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar16 + 0x10) = uVar17 + 1;
        *(long *)(uVar16 + uVar17 * 8 + 0x20) = lVar10;
        func_0x000107c61170(lVar10);
      }
      func_0x000107c615e8(uVar27);
joined_r0x0001012bc224:
      puVar12 = puVar13;
    } while (uVar19 != uVar26);
  }
LAB_1012bc9a4:
  apuStack_70[0] = puVar12;
  uVar19 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar26 = 0xffffffffffffffff;
  if ((puVar7[0x20] & 0x3f) < 6) {
    uVar26 = ~(-1L << (uVar19 & 0x3f));
  }
  uVar26 = uVar26 & *(ulong *)(puVar7 + 0x40);
  func_0x000107c61434(puVar7);
  lVar24 = 0;
  puVar12 = puStack_78;
joined_r0x0001012bc9fc:
  do {
    while (uVar26 == 0) {
      bVar6 = SCARRY8(lVar24,1);
      lVar24 = lVar24 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1012bcdd8);
        (*pcVar5)();
      }
      if ((long)(uVar19 + 0x3f >> 6) <= lVar24) {
        func_0x000107c61574(puVar7);
        puVar13 = puStack_78;
        puVar12 = puStack_78;
        FUN_101157854(puStack_78,*param_3);
        *param_3 = (long)puVar12;
        puVar12 = puVar13;
        FUN_101157854(puVar13,*param_4);
        *param_4 = (long)puVar12;
        FUN_1012b7fe8(apuStack_70);
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(puVar13);
        return apuStack_70[0];
      }
      uVar26 = *(ulong *)((long)(puVar7 + 0x40) + lVar24 * 8);
    }
    uVar27 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
    uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
    uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
    uVar26 = uVar26 - 1 & uVar26;
    uVar16 = LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) | lVar24 << 6;
    puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar16 * 0x10);
    uVar27 = *puVar1;
    uVar17 = puVar1[1];
    uVar23 = *(undefined8 *)(*(long *)(puVar7 + 0x38) + uVar16 * 8);
    if (*(long *)(puVar12 + 0x10) == 0) {
      func_0x000107c61434(uVar17);
      func_0x000107c61174(uVar23);
    }
    else {
      func_0x000107c6068c(&puStack_f0,*(undefined8 *)(puVar12 + 0x28));
      func_0x000107c61434(uVar17);
      uVar28 = uVar23;
      func_0x000107c61174();
      ppuVar8 = &puStack_f0;
      func_0x000107c5fb58(ppuVar8,uVar27,uVar17);
      func_0x000107c606a8();
      uVar16 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar20 = (ulong)ppuVar8 & (uVar16 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar12 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar20 * 0x10);
          uVar25 = *puVar1;
          uVar18 = puVar1[1];
          if ((uVar25 == uVar27 && uVar18 == uVar17) ||
             (func_0x000107c605b8(uVar25,uVar18,uVar27,uVar17,0), (uVar25 & 1) != 0)) {
            func_0x000107c6142c(uVar17);
            func_0x000107c61170(uVar28);
            goto joined_r0x0001012bc9fc;
          }
          uVar20 = uVar20 + 1 & ~uVar16;
        } while ((*(ulong *)(puVar12 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0);
      }
    }
    lVar10 = *param_3;
    if (*(long *)(lVar10 + 0x10) != 0) {
      func_0x000107c6068c(&puStack_f0,*(undefined8 *)(lVar10 + 0x28));
      ppuVar8 = &puStack_f0;
      func_0x000107c5fb58(ppuVar8,uVar27,uVar17);
      func_0x000107c606a8();
      uVar16 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
      uVar20 = (ulong)ppuVar8 & (uVar16 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar10 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar10 + 0x30) + uVar20 * 0x10);
          uVar25 = *puVar1;
          uVar18 = puVar1[1];
          if ((uVar25 == uVar27 && uVar18 == uVar17) ||
             (func_0x000107c605b8(uVar25,uVar18,uVar27,uVar17,0), (uVar25 & 1) != 0))
          goto LAB_1012bcc5c;
          uVar20 = uVar20 + 1 & ~uVar16;
        } while ((*(ulong *)(lVar10 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0);
      }
    }
    lVar10 = *param_4;
    if (*(long *)(lVar10 + 0x10) != 0) {
      func_0x000107c6068c(&puStack_f0,*(undefined8 *)(lVar10 + 0x28));
      ppuVar8 = &puStack_f0;
      func_0x000107c5fb58(ppuVar8,uVar27,uVar17);
      func_0x000107c606a8();
      uVar16 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
      uVar20 = (ulong)ppuVar8 & (uVar16 ^ 0xffffffffffffffff);
      if ((*(ulong *)(lVar10 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (ulong *)(*(long *)(lVar10 + 0x30) + uVar20 * 0x10);
          uVar25 = *puVar1;
          uVar18 = puVar1[1];
          if ((uVar25 == uVar27 && uVar18 == uVar17) ||
             (func_0x000107c605b8(uVar25,uVar18,uVar27,uVar17,0), (uVar25 & 1) != 0)) {
            func_0x000107c6142c(uVar17);
            func_0x000107c61174();
            puVar12 = puVar13;
            func_0x000107c61550();
            if (((int)puVar12 == 0) || (((long)puVar13 < 0 || (((ulong)puVar13 >> 0x3e & 1) != 0))))
            {
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar13) {
                  puVar12 = puVar13;
                }
                func_0x000107c60480(puVar12);
              }
              puVar11 = (undefined *)0x0;
              FUN_1012bf74c(0,puVar12 + 1,1,puVar13);
              puVar13 = puVar11;
            }
            uVar17 = (ulong)puVar13 & 0xffffffffffffff8;
            uVar27 = *(ulong *)(uVar17 + 0x10);
            puVar11 = puVar13;
            if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar27) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
              FUN_1012bf74c(puVar11,uVar27 + 1,1,puVar13);
              uVar17 = (ulong)puVar11 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar17 + 0x10) = uVar27 + 1;
            *(undefined8 *)(uVar17 + uVar27 * 8 + 0x20) = uVar23;
            func_0x000107c61170(uVar23);
            apuStack_70[0] = puVar11;
            puVar12 = puStack_78;
            puVar13 = puVar11;
            goto joined_r0x0001012bc9fc;
          }
          uVar20 = uVar20 + 1 & ~uVar16;
        } while ((*(ulong *)(lVar10 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0);
      }
      func_0x000107c61170(uVar23);
      func_0x000107c6142c(uVar17);
      goto joined_r0x0001012bc9fc;
    }
LAB_1012bcc5c:
    func_0x000107c6142c(uVar17);
    func_0x000107c61170(uVar23);
  } while( true );
}



/* Entry: 1012bcde8; end: 1012bcefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bcde8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa60);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6fa68);
  puVar2 = &UNK_11039d318;
  func_0x000107c613fc(&UNK_11039d318,0x40,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(long *)(puVar2 + 0x38) = lVar1;
  pcStack_60 = FUN_1012bcefc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11039d330;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c61434(param_2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x0001000d76cc(&UNK_10d931320,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1012bcefc; end: 1012bcf27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bcefc(void)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = _DAT_112d6fb38;
  lVar5 = _DAT_112d6fb30;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  cVar2 = *(char *)(lVar1 + _DAT_112d6fb30);
  cVar3 = *(char *)(lVar1 + _DAT_112d6fb38);
  uVar16 = *(undefined8 *)(lVar1 + _DAT_112d6faf8);
  *(undefined8 *)(lVar1 + _DAT_112d6faf8) = uVar15;
  func_0x000107c61174();
  func_0x000107c61170(uVar16);
  lVar4 = _DAT_112d6f3d0;
  lVar17 = *(long *)(lVar1 + _DAT_112d6fa68);
  func_0x000107c61428(lVar17 + _DAT_112d6f3d0,auStack_78,0,0);
  lVar9 = _DAT_112d6fb08;
  uVar16 = *(undefined8 *)(lVar17 + lVar4);
  func_0x000107c61428(lVar1 + _DAT_112d6fb08,auStack_90,0x21,0);
  lVar4 = _DAT_112d6fb10;
  func_0x000107c61428(lVar1 + _DAT_112d6fb10,auStack_a8,0x21,0);
  func_0x000107c61434(uVar16);
  FUN_1012bbf70(uVar13,uVar16,lVar1 + lVar9,lVar1 + lVar4);
  func_0x000107c614a8(auStack_a8);
  func_0x000107c614a8(auStack_90);
  func_0x000107c6142c(uVar16);
  lVar4 = _DAT_112d6f3d0;
  func_0x000107c61428(lVar11 + _DAT_112d6f3d0,auStack_90,1,0);
  uVar16 = *(undefined8 *)(lVar11 + lVar4);
  *(undefined8 *)(lVar11 + lVar4) = uVar13;
  func_0x000107c6142c(uVar16);
  func_0x000106639468(uVar15,0);
  func_0x000107c61180();
  uVar13 = *(undefined8 *)(lVar1 + _DAT_112d6faf0);
  *(undefined8 *)(lVar1 + _DAT_112d6faf0) = uVar15;
  func_0x000107c61170(uVar13);
  lVar9 = *(long *)(lVar1 + _DAT_112d6fa78);
  if (lVar9 != 0) {
    uVar15 = *(undefined8 *)(lVar11 + lVar4);
    func_0x000107c61174();
    func_0x000107c61434(uVar15);
    FUN_1012bd328();
    func_0x000107c61170(lVar9);
    func_0x000107c6142c(uVar15);
  }
  FUN_1012a9614();
  uVar14 = *(ulong *)(lVar11 + lVar4);
  if (uVar14 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar10 = uVar14;
    }
    func_0x000107c60480();
  }
  *(bool *)(lVar1 + lVar5) = uVar10 != 0;
  uVar13 = *(undefined8 *)(lVar11 + lVar4);
  uVar15 = uVar13;
  func_0x000107c61434();
  bVar8 = (byte)uVar15;
  FUN_1012bb858();
  func_0x000107c6142c(uVar13);
  *(byte *)(lVar1 + lVar6) = bVar8 & 1;
  lVar11 = lVar12;
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar11 == 0) {
    if ((cVar2 != *(char *)(lVar1 + lVar5)) || (cVar3 != *(char *)(lVar1 + lVar6))) {
      *(undefined1 *)(lVar1 + _DAT_112d6fb40) = 1;
    }
  }
  else {
    func_0x000107c615e8();
    if (((cVar2 == *(char *)(lVar1 + lVar5)) && (cVar3 == *(char *)(lVar1 + lVar6))) &&
       (*(char *)(lVar1 + _DAT_112d6fb40) != '\x01')) {
      uVar14 = *(ulong *)(lVar1 + _DAT_112d6fa80);
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (uVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1012b9864);
        (*pcVar7)();
      }
      uVar15 = 0xd000000000000035;
      func_0x000107c5fadc(0xd000000000000035,0x800000010ef33e00);
      uVar10 = uVar14;
      func_0x000107c3ebd4();
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(uVar15);
      if ((uVar10 & 1) != 0) {
        return;
      }
    }
    else {
      *(undefined1 *)(lVar1 + _DAT_112d6fb40) = 0;
    }
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar12 != 0) {
      func_0x000107c3fdac();
      func_0x000107c615e8(lVar12);
    }
  }
  return;
}



/* Entry: 1012bcf28; end: 1012bcf47;  */

void FUN_1012bcf28(void)

{
  long unaff_x20;
  
  FUN_1012b90d0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_1012b8a60);
  return;
}



/* Entry: 1012bcf48; end: 1012bcf4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012bcf48(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d6f3a0;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5ce94(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1012bcf50; end: 1012bcf9b;  */

void FUN_1012bcf50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012bcf9c; end: 1012bcfb3;  */

void FUN_1012bcf9c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1012bdac0(param_1,param_2,param_3 & 1);
    func_0x000107c61170(lVar1);
  }
  return;
}



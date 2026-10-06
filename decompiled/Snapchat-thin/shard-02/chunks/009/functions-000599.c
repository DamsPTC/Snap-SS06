/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022bb094; end: 1022bb113;  */

ulong FUN_1022bb094(ulong param_1)

{
  ulong uVar1;
  
  func_0x000107c42b44();
  func_0x000107c61180();
  uVar1 = param_1;
  FUN_1022baca8();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3f474(param_1);
  }
  func_0x0001000285a8(0x112e28778,&UNK_10da10b18);
  uVar1 = param_1;
  func_0x000103edf20c(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1022bb114; end: 1022bb16f;  */

void FUN_1022bb114(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1022bab08(param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1022bb170; end: 1022bb1cf; -[_TtC31FaceTaggingBackfillServicesImpl19BackfillTriggerImpl init] */

void FUN_1022bb170(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingBackfillServicesImpl.BackfillTriggerImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bb19c);
  (*pcVar1)();
}



/* Entry: 1022bb1d0; end: 1022bb217; -[_TtC31FaceTaggingBackfillServicesImpl19BackfillTriggerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bb1d0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7af68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7af58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7af60));
  return;
}



/* Entry: 1022bb218; end: 1022bb27f;  */

/* WARNING: Possible PIC construction at 0x0001022bb248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022bb24c) */
/* WARNING: Removing unreachable block (ram,0x0001022bb250) */

void FUN_1022bb218(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112e7b048;
    plVar5 = (long *)&UNK_10da85708;
  }
  else {
    puVar3 = (ulong *)0x112e7b040;
    plVar5 = (long *)&UNK_10da85700;
    unaff_x30 = 0x1022bb24c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1022bb280; end: 1022bb2ef;  */

void FUN_1022bb280(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
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
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1022bb318(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1022bb2f0; end: 1022bb317;  */

void FUN_1022bb2f0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1022ba7c4(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1022bb318; end: 1022bb43f;  */

ulong FUN_1022bb318(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bb440);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1022bb460(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bb43c);
      (*pcVar1)();
    }
    FUN_1022bb4e0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1022bb440; end: 1022bb45f;  */

void FUN_1022bb440(void)

{
  func_0x000107c61168(&PTR_PTR_112832d90);
  return;
}



/* Entry: 1022bb460; end: 1022bb4df;  */

undefined * FUN_1022bb460(undefined *param_1,undefined *param_2)

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
    FUN_1022bb218();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1022bb4e0; end: 1022bb603;  */

long FUN_1022bb4e0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bb600);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bb604);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e7b040;
        func_0x0001000285a8(0x112e7b040,&UNK_10da85700);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e7b040;
      func_0x0001000285a8(0x112e7b040,&UNK_10da85700);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bb5fc);
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



/* Entry: 1022bb604; end: 1022bb647;  */

void FUN_1022bb604(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1022bae5c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1022bb648; end: 1022bb64f;  */

void FUN_1022bb648(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1022bab08(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1022bb650; end: 1022bb80f;  */

ulong FUN_1022bb650(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bb734);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bb738);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b1588;
    func_0x000107c61168(PTR_PTR_1126b1588);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b1588;
    func_0x000107c61168(PTR_PTR_1126b1588);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001000285a8(0x112e7b040,&UNK_10da85700);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bb810);
  (*pcVar2)();
}



/* Entry: 1022bb810; end: 1022bb817;  */

ulong FUN_1022bb810(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  func_0x000107c42b44(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61180();
  uVar1 = param_1;
  FUN_1022baca8();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3f474(param_1);
  }
  func_0x0001000285a8(0x112e28778,&UNK_10da10b18);
  uVar1 = param_1;
  func_0x000103edf20c(param_1);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1022bb818; end: 1022bb8af;  */

void FUN_1022bb818(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 1022bb8b0; end: 1022bb8db;  */

void FUN_1022bb8b0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022bb8dc; end: 1022bb8ff;  */

void FUN_1022bb8dc(void)

{
  long unaff_x20;
  
  FUN_1022bab08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1022bb900; end: 1022bb9af;  */

void FUN_1022bb900(long param_1)

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
  FUN_1022bb318();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1022bb9b0; end: 1022bb9ff;  */

/* WARNING: Removing unreachable block (ram,0x0001022bb34c) */
/* WARNING: Removing unreachable block (ram,0x0001022bb370) */
/* WARNING: Removing unreachable block (ram,0x0001022bb354) */
/* WARNING: Removing unreachable block (ram,0x0001022bb43c) */
/* WARNING: Removing unreachable block (ram,0x0001022bb360) */
/* WARNING: Removing unreachable block (ram,0x0001022bb368) */
/* WARNING: Removing unreachable block (ram,0x0001022bb3ac) */
/* WARNING: Removing unreachable block (ram,0x0001022bb3c0) */
/* WARNING: Removing unreachable block (ram,0x0001022bb3cc) */
/* WARNING: Removing unreachable block (ram,0x0001022bb3d4) */

ulong FUN_1022bb9b0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_1022bb460(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_1022bb4e0(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bb43c);
  (*pcVar1)();
}



/* Entry: 1022bba00; end: 1022bbaef;  */

undefined1  [16] FUN_1022bba00(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  do {
    if (uVar6 == uVar3) {
      uVar3 = 0;
      uVar4 = 1;
LAB_1022bbaac:
      auVar8._8_8_ = uVar4;
      auVar8._0_8_ = uVar3;
      return auVar8;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bbac8);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(param_1 + uVar3 * 8 + 0x20);
    }
    else {
      uVar5 = uVar3;
      FUN_1022bb650(uVar3,param_1);
      func_0x000107c615e8();
    }
    if (uVar5 == param_2) {
      uVar4 = 0;
      goto LAB_1022bbaac;
    }
    bVar2 = SCARRY8(uVar3,1);
    uVar3 = uVar3 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bbacc);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 1022bbaf0; end: 1022bbd1b;  */

void FUN_1022bbaf0(ulong *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_1;
  uVar4 = uVar8;
  uVar9 = param_2;
  FUN_1022bba00();
  if (unaff_x21 == 0) {
    if (((uint)uVar9 & 0xff) == 1) {
      if (uVar8 >> 0x3e != 0) {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar4 = uVar8;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar9 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbb58);
        (*pcVar2)();
      }
      while( true ) {
        uVar9 = uVar9 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar5 = uVar8;
          }
          func_0x000107c60480();
        }
        if (uVar9 == uVar5) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbce8);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          if (uVar5 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbcec);
            (*pcVar2)();
          }
          uVar10 = *(ulong *)(uVar8 + 0x20 + uVar9 * 8);
          if (uVar10 != param_2) {
            if (uVar4 != uVar9) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbcf8);
                (*pcVar2)();
              }
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbcfc);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
LAB_1022bbbe8:
              uVar11 = uVar8;
              func_0x000107c61550();
              if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
                FUN_1022bb9b0();
                uVar7 = (uint)(uVar8 >> 0x3e) & 1;
              }
              else {
                uVar7 = 0;
              }
              uVar11 = uVar8 & 0xffffffffffffff8;
              lVar1 = uVar11 + uVar4 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar10;
              func_0x000107c61170(uVar6);
              if (((long)uVar8 < 0) || (uVar7 != 0)) {
                FUN_1022bb9b0();
                uVar11 = uVar8 & 0xffffffffffffff8;
              }
              if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbcc0);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbd00);
                (*pcVar2)();
              }
              lVar1 = uVar11 + uVar9 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              func_0x000107c61170(uVar6);
              *param_1 = uVar8;
            }
LAB_1022bbb6c:
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbcf4);
              (*pcVar2)();
            }
          }
        }
        else {
          uVar5 = uVar9;
          FUN_1022bb650(uVar9,uVar8);
          func_0x000107c615e8();
          if (uVar5 != param_2) {
            if (uVar4 != uVar9) {
              uVar5 = uVar4;
              FUN_1022bb650(uVar4,uVar8);
              uVar10 = uVar9;
              FUN_1022bb650(uVar9,uVar8);
              goto LAB_1022bbbe8;
            }
            goto LAB_1022bbb6c;
          }
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bbcf0);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 1022bbd1c; end: 1022bbe23;  */

void FUN_1022bbd1c(long param_1,long param_2,long param_3)

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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1022bbe00);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0x112e7b040;
  func_0x0001000285a8(0x112e7b040,&UNK_10da85700);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1022bbe04);
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1022bbe1c);
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1022bbe20);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1022bbe24);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1022bbe24; end: 1022bbf8b;  */

/* WARNING: Removing unreachable block (ram,0x0001022bbe20) */

void FUN_1022bbe24(long param_1,long param_2)

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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbec4);
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbedc);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbee0);
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbee8);
      (*pcVar3)();
    }
    FUN_1022bb900(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbe00);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0x112e7b040;
    func_0x0001000285a8(0x112e7b040,&UNK_10da85700);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbe04);
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbe1c);
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbe20);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1022bbee4);
  (*pcVar3)();
}



/* Entry: 1022bbf8c; end: 1022bbfa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bbf8c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  lVar2 = 0;
  FUN_1022bb440();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e7af58;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e7af60) = 0;
  *(undefined8 *)(lVar3 + _DAT_112e7af68) = uStack_48;
  plVar5 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1022bbfa4; end: 1022bc027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bbfa4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1022bc304();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e7b068) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e7b070) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1022bc028; end: 1022bc02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bc028(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1022bc304();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112e7b068) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e7b070) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1022bc030; end: 1022bc20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bc030(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7b068) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b070) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022bc210; end: 1022bc237; -[_TtC31FaceTaggingBackfillServicesImpl27FaceTaggingBackfillProvider triggerBackfillIfEligible] */

void FUN_1022bc210(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001022bc094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022bc238; end: 1022bc25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bc238(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((param_1 & 1) != 0) {
      func_0x000100083b20(&uStack_50);
      func_0x000107c5cfe4(uStack_50);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(uStack_50);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1022bc25c; end: 1022bc2bb; -[_TtC31FaceTaggingBackfillServicesImpl27FaceTaggingBackfillProvider init] */

void FUN_1022bc25c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FaceTaggingBackfillServicesImpl.FaceTaggingBackfillProvider",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bc288);
  (*pcVar1)();
}



/* Entry: 1022bc2bc; end: 1022bc2cb;  */

undefined1  [16] FUN_1022bc2bc(void)

{
  return ZEXT816(0x1104f09b8);
}



/* Entry: 1022bc2cc; end: 1022bc303; -[_TtC31FaceTaggingBackfillServicesImpl27FaceTaggingBackfillProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022bc2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022bc2ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bc2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7b070));
  return;
}



/* Entry: 1022bc304; end: 1022bc323;  */

void FUN_1022bc304(void)

{
  func_0x000107c61168(&PTR_PTR_112832e60);
  return;
}



/* Entry: 1022bc324; end: 1022bc4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022bc324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0a0) = 0;
  lVar2 = _DAT_112e7b0a8;
  func_0x000107c61614(unaff_x20 + _DAT_112e7b0a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0c8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0d0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0d8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0e0) = param_5;
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return puVar3;
}



/* Entry: 1022bc4c8; end: 1022bc4e7;  */

void FUN_1022bc4c8(void)

{
  func_0x000107c61168(&PTR_PTR_112832f28);
  return;
}



/* Entry: 1022bc4e8; end: 1022bc60b; +[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler handlerWithActionHandler:quickCutExposer:previewEditExposer:valdiRuntimeProvider:myEyesOnlySetupFlowExposer:sendViewPresenter:mergedDataSource:presentingViewController:] */

void FUN_1022bc4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174();
  uVar2 = param_5;
  func_0x000107c61174();
  uVar3 = param_6;
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  uVar4 = param_8;
  func_0x000107c61174(param_8);
  uVar5 = param_9;
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  uVar6 = param_3;
  FUN_1022bdfe4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1022bc60c; end: 1022bc65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022bc60c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e7b0b0);
  func_0x000107c5fadc();
  func_0x000107c41738(uVar1,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1022bc65c; end: 1022bc683; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler deleteSnapWithSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bc65c(long param_1)

{
  func_0x000107c41738(*(undefined8 *)(param_1 + _DAT_112e7b0b0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022bc684; end: 1022bc6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022bc684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e7b0b0);
  func_0x000107c5fadc();
  func_0x000107c44134(uVar1,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1022bc6d4; end: 1022bc6fb; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler getMemDataIdFromEntryIdWithEntryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bc6d4(long param_1)

{
  func_0x000107c44134(*(undefined8 *)(param_1 + _DAT_112e7b0b0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022bc6fc; end: 1022bc8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022bc6fc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined1 auStack_a0 [80];
  
  puVar6 = auStack_a0;
  puVar7 = *(undefined **)(unaff_x20 + _DAT_112e7b0b0);
  puVar1 = puVar7;
  func_0x000107c61150(puVar7,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_favoriteSnapsWithSnapIds_favorit_1125c5e08);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
    func_0x000107c42e18();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (puVar7 != (undefined *)0x0) {
      return puVar7;
    }
  }
  puVar7 = PTR_PTR_1126b1588;
  func_0x000107c610f8(PTR_PTR_1126b1588);
  func_0x000107c453e4();
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = 0xd00000000000001b;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010f080830;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010da85790);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  puVar1 = puVar5;
  func_0x000107c5ed2c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c43b70(puVar7);
  func_0x000107c61170(puVar1);
  return puVar7;
}



/* Entry: 1022bc8ec; end: 1022bc957; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler favoriteSnapsWithSnapIds:favorited:] */

void FUN_1022bc8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1022bc6fc(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022bc958; end: 1022bcac7;  */

void FUN_1022bc958(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c614f0();
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x17);
    uVar1 = uStack_68;
    uVar6 = 0;
    func_0x000107c60714();
    func_0x000107c6142c(uVar1);
    puStack_70 = unaff_x20;
    uStack_68 = uVar6;
    func_0x000107c5fb78(0xd000000000000015,0x800000010f080850);
    uVar1 = uStack_68;
    puVar5 = puStack_70;
    puVar2 = &UNK_1104f0a80;
    func_0x000107c613fc(&UNK_1104f0a80,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104f0aa8;
    func_0x000107c613fc(&UNK_1104f0aa8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = param_1;
    pcStack_50 = FUN_1022be144;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1104f0ac0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c5fb28(puVar5,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x0001000d76cc(puVar5 + 0x20,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 1022bcac8; end: 1022bcad3; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler createVideoFromSnapsWithSnapIds:] */

void FUN_1022bcac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  FUN_1022bc958(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1022bcad4; end: 1022bcc27;  */

void FUN_1022bcad4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    func_0x000107c614f0();
    uVar6 = 0;
    func_0x000107c60714();
    puStack_70 = unaff_x20;
    uStack_68 = uVar6;
    func_0x000107c5fb78(0x616e53746964652e,0xe900000000000070);
    uVar6 = uStack_68;
    puVar5 = puStack_70;
    puVar2 = &UNK_1104f0a80;
    func_0x000107c613fc(&UNK_1104f0a80,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104f0af8;
    func_0x000107c613fc(&UNK_1104f0af8,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong *)(puVar3 + 0x18) = param_1;
    *(ulong *)(puVar3 + 0x20) = param_2;
    pcStack_50 = FUN_1022be3dc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1104f0b10;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c5fb28(puVar5,uVar6);
    func_0x000107c6142c(uVar6);
    func_0x0001000d76cc(puVar5 + 0x20,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 1022bcc28; end: 1022bcc83; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler editSnapWithSnapId:] */

void FUN_1022bcc28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1022bcad4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022bcc84; end: 1022bcd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bcc84(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e7b0b0);
    lVar1 = lVar2;
    func_0x000107c614f0();
    func_0x000107c61440();
    if (lVar1 != 0 && lVar2 != 0) {
      pcVar3 = *(code **)(lVar1 + 8);
      func_0x000107c615f0(lVar2);
      (*pcVar3)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1022bcd30; end: 1022bcdf3; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler moveSnapsToMyEyesOnlyWithSnapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bcd30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  if (*(long *)(param_3 + 0x10) != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112e7b0b0);
    lVar1 = lVar3;
    func_0x000107c614f0();
    lVar2 = lVar1;
    func_0x000107c61440();
    if (lVar2 != 0 && lVar3 != 0) {
      pcVar4 = *(code **)(lVar2 + 8);
      func_0x000107c61174(param_1);
      func_0x000107c615f0(lVar3);
      (*pcVar4)(param_3,param_1,&PTR_DAT_1104f0b88,lVar1,lVar2);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1022bcdf4; end: 1022bce7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022bcdf4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20 + _DAT_112e7b0a8;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c4f078();
    func_0x000107c61180();
    while (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c49aa0();
      if ((int)lVar2 != 0) {
        func_0x000107c61170(lVar1);
        return lVar3;
      }
      func_0x000107c61170(lVar3);
      lVar2 = lVar1;
      func_0x000107c4f078();
      func_0x000107c61180();
      lVar3 = lVar1;
      lVar1 = lVar2;
    }
  }
  return lVar3;
}



/* Entry: 1022bce7c; end: 1022bceef;  */

void FUN_1022bce7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022bcef0,uVar1,uVar2);
  return;
}



/* Entry: 1022bcef0; end: 1022bcfe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bcef0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x80) + _DAT_112e7b0a8;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0001022bcf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  lVar3 = lVar1;
  func_0x000107c4f078();
  func_0x000107c61180();
  do {
    if (lVar3 == 0) {
LAB_1022bcf8c:
      *(long *)(unaff_x22 + 0xb0) = lVar1;
      func_0x000107c5fce8();
      *(long *)(unaff_x22 + 0xb8) = lVar3;
      if (lVar3 == 0) {
        lVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
        func_0x000107c614f0();
        func_0x000107c5fca8();
      }
      *(long *)(unaff_x22 + 0xc0) = lVar3;
      *(undefined8 *)(unaff_x22 + 200) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1022bcfe8,lVar3);
      return;
    }
    lVar2 = lVar3;
    func_0x000107c49aa0();
    if ((int)lVar2 != 0) {
      func_0x000107c61170();
      goto LAB_1022bcf8c;
    }
    func_0x000107c61170(lVar1);
    lVar2 = lVar3;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar1 = lVar3;
    lVar3 = lVar2;
  } while( true );
}



/* Entry: 1022bcfe8; end: 1022bd1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bcfe8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1022bd1a4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  lVar6 = _DAT_112e7b0a0;
  lVar2 = *(long *)(lVar7 + _DAT_112e7b0a0);
  if (lVar2 != 0) {
    **(undefined1 **)(*(long *)(lVar2 + 0x40) + 0x28) = 0;
    func_0x000107c6144c();
  }
  lVar2 = *(long *)(unaff_x22 + 0x80);
  *(long *)(lVar7 + lVar6) = lVar1;
  puVar3 = PTR_PTR_1126c3220;
  func_0x000107c610f8();
  func_0x000107c46aa8();
  lVar6 = *(long *)(lVar2 + _DAT_112e7b0e0);
  lVar1 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar6;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      puVar4 = &UNK_1104f0a80;
      func_0x000107c613fc(&UNK_1104f0a80,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,uVar8);
      puVar5 = &UNK_1104f0bb0;
      func_0x000107c613fc(&UNK_1104f0bb0,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = lVar6;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x1022becf0;
      *(undefined **)(unaff_x22 + 0x78) = puVar5;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1104f0bc8;
      lVar2 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar2);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c61174(lVar6);
      func_0x000107c61174(puVar3);
      func_0x000107c61574(uVar8);
      func_0x000107c5e2a4(lVar1);
      func_0x000107c60bd0(lVar2);
      func_0x000107c615e8(lVar1);
      goto LAB_1022bd180;
    }
  }
  func_0x000107c42c1c(lVar6);
LAB_1022bd180:
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1022bd1a4; end: 1022bd257;  */

void FUN_1022bd1a4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1022bd1e0,*(undefined8 *)(*unaff_x22 + 0xc0),*(undefined8 *)(*unaff_x22 + 200));
  return;
}



/* Entry: 1022bd258; end: 1022bd25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bd258(long param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7b0e0);
  lVar3 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c436fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if ((lVar1 != 0) && (func_0x000107c61170(lVar1), lVar1 != param_1)) {
      return;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112e7b0a0);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0a0) = 0;
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  **(undefined1 **)(*(long *)(lVar3 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1022bd260; end: 1022bd2af; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler privateGallerySetupFlowDidCancel:] */

/* WARNING: Possible PIC construction at 0x0001022bd298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022bd29c) */

void FUN_1022bd260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1022bd258(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1022bd2b0; end: 1022bd2b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bd2b0(long param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7b0e0);
  lVar3 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c436fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if ((lVar1 != 0) && (func_0x000107c61170(lVar1), lVar1 != param_1)) {
      return;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112e7b0a0);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0a0) = 0;
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  **(undefined1 **)(*(long *)(lVar3 + 0x40) + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1022bd2b8; end: 1022bd39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bd2b8(long param_1,undefined1 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7b0e0);
  lVar3 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c436fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if ((lVar1 != 0) && (func_0x000107c61170(lVar1), lVar1 != param_1)) {
      return;
    }
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112e7b0a0);
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112e7b0a0) = 0;
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  **(undefined1 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1022bd39c; end: 1022bd483; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler privateGallerySetupFlowDidFinish:] */

/* WARNING: Possible PIC construction at 0x0001022bd3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022bd3d8) */

void FUN_1022bd39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1022bd2b0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1022bd484; end: 1022bd553; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler removeQuickCutScopeWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bd484(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_112e7b0b8);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x0001038e0838(0);
    uVar2 = param_3;
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000107c60118();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
    if ((uVar3 & 1) != 0) {
      func_0x000107c4ffe8(lVar4);
      func_0x000107c61180();
      goto LAB_1022bd52c;
    }
  }
  lVar4 = 0;
LAB_1022bd52c:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1022bd554; end: 1022bd5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bd554(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7b0c0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1022bd5ac; end: 1022bd62f; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler memoriesSnapPreviewEditScopeWillDismiss] */

/* WARNING: Possible PIC construction at 0x0001022bd5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022bd604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022bd5ec) */
/* WARNING: Removing unreachable block (ram,0x0001022bd608) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bd5ac(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022bd630; end: 1022bd7d3;  */

/* WARNING: Possible PIC construction at 0x0001022bd75c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022bd760) */

void FUN_1022bd630(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *unaff_x20;
  undefined *puStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  func_0x000107c614f0();
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1022bd83c();
  if (param_1 >> 0x3e == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) goto code_r0x000107c6142c;
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    uVar4 = uVar5;
    func_0x000107c60480();
    if (uVar4 == 0) goto code_r0x000107c6142c;
    func_0x000107c60480(uVar5);
  }
  uVar5 = 0;
  func_0x000107c60714();
  puStack_70 = unaff_x20;
  uStack_68 = uVar5;
  func_0x000107c5fb78(0x6e5365726168732e,0xeb00000000737061);
  uVar5 = uStack_68;
  puVar1 = puStack_70;
  puVar2 = &UNK_1104f0a80;
  func_0x000107c613fc(&UNK_1104f0a80,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104f0b48;
  func_0x000107c613fc(&UNK_1104f0b48,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_1;
  pcStack_50 = FUN_1022be644;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104f0b60;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c5fb28(puVar1,uVar5);
  param_1 = uVar5;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 1022bd7d4; end: 1022bd7df; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler shareSnapsWithSnapIds:] */

void FUN_1022bd7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  FUN_1022bd630(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1022bd7e0; end: 1022bd83b;  */

void FUN_1022bd7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1022bd83c; end: 1022bd9b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022bd83c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112e7b0d8);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = param_1;
      func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
      puVar3 = puVar1;
      func_0x000107c4310c();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar3 != (undefined *)0x0) {
        uVar4 = 0x112d508c0;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        puVar2 = puVar3;
        func_0x000107c5fc54(puVar3,uVar4);
        func_0x000107c61170(puVar3);
      }
      uVar4 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      puVar3 = puVar2;
      func_0x000107c5fc48(puVar2,uVar4);
      puVar5 = puVar1;
      func_0x000107c42f94(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      uVar4 = 0x112d511e8;
      func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
      puVar3 = puVar5;
      func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(puVar5);
      FUN_1022be7a0(param_1,puVar2,puVar3);
      func_0x000107c615e8(puVar1);
      func_0x000107c6142c(puVar2);
      func_0x000107c6142c(puVar3);
      puVar2 = param_1;
    }
  }
  return puVar2;
}



/* Entry: 1022bd9b8; end: 1022bdc1b;  */

/* WARNING: Possible PIC construction at 0x0001022bda10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022bdab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022bdad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022bdb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022bdbe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022bdbf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022bda34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022bdbe8) */
/* WARNING: Removing unreachable block (ram,0x0001022bdadc) */
/* WARNING: Removing unreachable block (ram,0x0001022bdb2c) */
/* WARNING: Removing unreachable block (ram,0x0001022bdae4) */
/* WARNING: Removing unreachable block (ram,0x0001022bdb30) */
/* WARNING: Removing unreachable block (ram,0x0001022bdb8c) */
/* WARNING: Removing unreachable block (ram,0x0001022bdba0) */
/* WARNING: Removing unreachable block (ram,0x0001022bdb60) */
/* WARNING: Removing unreachable block (ram,0x0001022bdb94) */
/* WARNING: Removing unreachable block (ram,0x0001022bdb80) */
/* WARNING: Removing unreachable block (ram,0x0001022bdb98) */
/* WARNING: Removing unreachable block (ram,0x0001022bdab4) */
/* WARNING: Removing unreachable block (ram,0x0001022bda14) */
/* WARNING: Removing unreachable block (ram,0x0001022bda2c) */
/* WARNING: Removing unreachable block (ram,0x0001022bdbf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bd9b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112e7b0a8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112e7b0d0);
      lVar2 = lVar1;
      if (lVar3 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          FUN_1022bdc1c(param_1);
          puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
          lVar2 = param_1;
          func_0x000107c5fc48(param_1,PTR___sypN_11034f1a8 + 8);
          func_0x000107c6142c(param_1);
          func_0x000107c45788(puVar4);
        }
      }
    }
    else {
      lVar3 = lVar2;
      func_0x000107c49aa0();
      if ((int)lVar3 == 0) {
        lVar2 = lVar1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1022bdc1c; end: 1022bde0b;  */

undefined * FUN_1022bdc1c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bde0c);
      (*pcVar2)();
    }
    puVar6 = puStack_68;
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c615f0();
        uVar4 = 0x112d508c0;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x000100fb0ba0(uVar7,param_1);
        uVar4 = 0x112d508c0;
        uStack_90 = uVar3;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1022bde0c; end: 1022bde3b;  */

void FUN_1022bde0c(void)

{
  FUN_1022bc4c8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022bde3c; end: 1022bdf5b; -[_TtC33FaceTaggingItemActionPresentation38FaceTaggingItemActionPresentingHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bde3c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e7b0b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7b0b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7b0c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7b0c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7b0d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7b0d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7b0e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112e7b0a8);
  return;
}



/* Entry: 1022bdf5c; end: 1022bdfe3;  */

void FUN_1022bdf5c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1022bdfa0;
  plVar3[0x10] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x11] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x12] = lVar2;
  func_0x000100eea164();
  plVar3[0x13] = lVar2;
  func_0x000107c5fca8();
  plVar3[0x14] = lVar1;
  plVar3[0x15] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022bcef0,lVar1,lVar2);
  return;
}



/* Entry: 1022bdfe4; end: 1022be143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_1022bdfe4(undefined8 ***param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  
  if (((param_1 == (undefined8 ***)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    func_0x000107c615f0(param_1);
  }
  else {
    pppuVar3 = param_1;
    FUN_1022bc4c8();
    pppuVar4 = pppuVar3;
    func_0x000107c610f8();
    *(undefined8 *)((long)pppuVar4 + _DAT_112e7b0a0) = 0;
    lVar2 = _DAT_112e7b0a8;
    func_0x000107c61614((long)pppuVar4 + _DAT_112e7b0a8,0);
    *(undefined8 ****)((long)pppuVar4 + _DAT_112e7b0b0) = param_1;
    *(long *)((long)pppuVar4 + _DAT_112e7b0b8) = param_2;
    *(long *)((long)pppuVar4 + _DAT_112e7b0c0) = param_3;
    *(undefined8 *)((long)pppuVar4 + _DAT_112e7b0c8) = param_4;
    *(undefined8 *)((long)pppuVar4 + _DAT_112e7b0d0) = param_6;
    *(undefined8 *)((long)pppuVar4 + _DAT_112e7b0d8) = param_7;
    *(undefined8 *)((long)pppuVar4 + _DAT_112e7b0e0) = param_5;
    func_0x000107c61604((long)pppuVar4 + lVar2,param_8);
    puVar1 = PTR_s_init_1125d9248;
    ppuStack_70 = pppuVar4;
    ppuStack_68 = pppuVar3;
    func_0x000107c615f0(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_5);
    param_1 = &ppuStack_70;
    func_0x000107c61154(param_1,puVar1);
  }
  return param_1;
}



/* Entry: 1022be144; end: 1022be3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022be144(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_98,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112e7b0a8;
  func_0x000107c61618();
  if (lVar2 == 0) goto LAB_1022be39c;
  lVar3 = lVar2;
  func_0x000107c4f078();
  func_0x000107c61180();
  while (lVar3 != 0) {
    lVar9 = lVar3;
    func_0x000107c49aa0();
    if ((int)lVar9 != 0) {
      func_0x000107c61170(lVar3);
      break;
    }
    func_0x000107c61170(lVar2);
    lVar9 = lVar3;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar2 = lVar3;
    lVar3 = lVar9;
  }
  uVar4 = 0;
  func_0x0001038e3280(0);
  func_0x0001038e2644(lVar5,uVar4);
  puVar6 = PTR_PTR_1126aff58;
  func_0x000107c610f8(PTR_PTR_1126aff58);
  func_0x000107c48080();
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112e7b0c8);
  func_0x0001038e0838(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  func_0x0001038defd0(lVar5,puVar6,lVar1,0,0,0,0,uVar4);
  lVar9 = *(long *)(lVar1 + _DAT_112e7b0b8);
  lVar3 = lVar9;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
LAB_1022be380:
    func_0x000107c42c1c(lVar9);
  }
  else {
    func_0x000107c61170();
    lVar3 = lVar9;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_1022be380;
    puVar6 = &UNK_1104f0a80;
    func_0x000107c613fc(&UNK_1104f0a80,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar1);
    puVar7 = &UNK_1104f0c50;
    func_0x000107c613fc(&UNK_1104f0c50,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar9;
    *(long *)(puVar7 + 0x20) = lVar5;
    pcStack_60 = FUN_1022bec48;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_1104f0c68;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_58;
    func_0x000107c61174(lVar9);
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c5e2a4(lVar3);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = lVar5;
LAB_1022be39c:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1022be3c0; end: 1022be3db;  */

void FUN_1022be3c0(long param_1,long param_2)

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



/* Entry: 1022be3dc; end: 1022be617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022be3dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_98,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112e7b0a8;
  func_0x000107c61618();
  if (lVar2 == 0) goto LAB_1022be5f4;
  lVar3 = lVar2;
  func_0x000107c4f078();
  func_0x000107c61180();
  while (lVar3 != 0) {
    lVar10 = lVar3;
    func_0x000107c49aa0();
    if ((int)lVar10 != 0) {
      func_0x000107c61170(lVar3);
      break;
    }
    func_0x000107c61170(lVar2);
    lVar10 = lVar3;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar2 = lVar3;
    lVar3 = lVar10;
  }
  puVar4 = PTR_PTR_1126ce998;
  func_0x000107c610f8();
  func_0x000107c61174(lVar2);
  func_0x000107c5fadc(uVar5,uVar9);
  func_0x000107c48798();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar2);
  lVar10 = *(long *)(lVar1 + _DAT_112e7b0c0);
  lVar3 = lVar10;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 == 0) {
LAB_1022be5d8:
    func_0x000107c42c1c(lVar10);
  }
  else {
    func_0x000107c61170();
    lVar3 = lVar10;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_1022be5d8;
    puVar6 = &UNK_1104f0a80;
    func_0x000107c613fc(&UNK_1104f0a80,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,lVar1);
    puVar7 = &UNK_1104f0c00;
    func_0x000107c613fc(&UNK_1104f0c00,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar10;
    *(undefined **)(puVar7 + 0x20) = puVar4;
    uStack_60 = 0x1022becf4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_1104f0c18;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_58;
    func_0x000107c61174(lVar10);
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c5e2a4(lVar3);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar2);
LAB_1022be5f4:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1022be618; end: 1022be643;  */

void FUN_1022be618(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022be644; end: 1022be6a3;  */

void FUN_1022be644(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1022bd9b8(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1022be6a4; end: 1022be79f;  */

undefined * FUN_1022be6a4(long param_1)

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
    func_0x0001000285a8(0x112d508b8,&UNK_10d9172e0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022be79c);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022be7a0);
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



/* Entry: 1022be7a0; end: 1022bec13;  */

undefined * FUN_1022be7a0(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = param_2;
  FUN_1022be6a4();
  if (param_2 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar16 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar16 != 0) {
    lVar17 = 4;
    do {
      uVar12 = lVar17 - 4;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bea50);
          (*pcVar2)();
        }
        uVar10 = *(ulong *)(param_2 + lVar17 * 8);
        func_0x000107c615f0(uVar10);
        uVar8 = uVar11;
      }
      else {
        uVar10 = uVar12;
        uVar8 = param_2;
        func_0x000100fb0ba0();
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bea4c);
        (*pcVar2)();
      }
      uVar15 = lVar17 - 3;
      uVar12 = uVar10;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      uVar11 = uVar8;
      if (uVar12 == 0) {
LAB_1022be820:
        func_0x000107c615e8(uVar10);
      }
      else {
        uVar4 = uVar12;
        func_0x000107c5faec();
        uVar11 = uVar8;
        func_0x000107c61170(uVar12);
        if (*(long *)(param_3 + 0x10) != 0) {
          func_0x000107c61434(param_3);
          uVar12 = uVar4;
          uVar11 = uVar8;
          func_0x000100029284();
          if ((uVar11 & 1) != 0) {
            uVar13 = *(ulong *)(*(long *)(param_3 + 0x38) + uVar12 * 8);
            func_0x000107c615f0(uVar13);
            func_0x000107c6142c(param_3);
            uVar12 = uVar13;
            func_0x000107c4a274();
            if ((uVar12 & 1) != 0) {
              func_0x000107c615e8(uVar13);
              func_0x000107c6142c(uVar8);
              goto LAB_1022be820;
            }
            func_0x000107c615f0(uVar10);
            puVar7 = puVar3;
            func_0x000107c61558();
            uVar12 = uVar4;
            uVar9 = uVar8;
            func_0x000100029284();
            uVar11 = (ulong)~(uint)uVar9 & 1;
            lVar1 = *(long *)(puVar3 + 0x10) + uVar11;
            if (SCARRY8(*(long *)(puVar3 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bea54);
              (*pcVar2)();
            }
            if (*(long *)(puVar3 + 0x18) < lVar1) {
              func_0x000100fb636c(lVar1,puVar7);
              uVar12 = uVar4;
              uVar11 = uVar8;
              func_0x000100029284();
              if (((uint)uVar9 & 1) != ((uint)uVar11 & 1)) {
                func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bec14);
                (*pcVar2)();
              }
            }
            else {
              uVar11 = uVar9;
              if (((ulong)puVar7 & 1) == 0) {
                func_0x000100fb5c8c();
              }
            }
            if ((uVar9 & 1) == 0) {
              *(ulong *)(puVar3 + (uVar12 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar3 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
              puVar18 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar12 * 0x10);
              *puVar18 = uVar4;
              puVar18[1] = uVar8;
              *(ulong *)(*(long *)(puVar3 + 0x38) + uVar12 * 8) = uVar10;
              func_0x000107c615e8(uVar10);
              func_0x000107c615e8(uVar13);
              if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bec04);
                (*pcVar2)();
              }
              *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
            }
            else {
              uVar14 = *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar12 * 8);
              *(ulong *)(*(long *)(puVar3 + 0x38) + uVar12 * 8) = uVar10;
              func_0x000107c615e8(uVar10);
              func_0x000107c6142c(uVar8);
              func_0x000107c615e8(uVar13);
              func_0x000107c615e8(uVar14);
            }
            goto LAB_1022be828;
          }
          func_0x000107c6142c(param_3);
        }
        func_0x000107c615e8(uVar10);
        func_0x000107c6142c(uVar8);
      }
LAB_1022be828:
      lVar17 = lVar17 + 1;
    } while (uVar15 != uVar16);
  }
  uVar11 = *(ulong *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 == 0) {
LAB_1022bebd0:
    func_0x000107c6142c(puVar3);
    return puVar7;
  }
  uVar16 = 0;
LAB_1022bea90:
  uVar12 = uVar16;
  if (uVar16 <= uVar11) {
    uVar12 = uVar11;
  }
  puVar18 = (ulong *)(param_1 + 0x28 + uVar16 * 0x10);
  uVar16 = uVar16 + 1;
  do {
    if (uVar16 - uVar12 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022bec00);
      (*pcVar2)();
    }
    if (*(long *)(puVar3 + 0x10) != 0) {
      uVar10 = puVar18[-1];
      uVar8 = *puVar18;
      func_0x000107c61434(uVar8);
      func_0x000107c61434(puVar3);
      uVar15 = uVar8;
      func_0x000100029284();
      if ((uVar15 & 1) != 0) break;
      func_0x000107c6142c(puVar3);
      func_0x000107c6142c(uVar8);
    }
    uVar16 = uVar16 + 1;
    puVar18 = puVar18 + 2;
    if (uVar16 - uVar11 == 1) goto LAB_1022bebd0;
  } while( true );
  uVar14 = *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar10 * 8);
  func_0x000107c615f0(uVar14);
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(uVar8);
  puVar6 = puVar7;
  func_0x000107c61550();
  if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
     (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        puVar5 = puVar7;
      }
      func_0x000107c60480(puVar5);
    }
    puVar6 = (undefined *)0x0;
    FUN_1022a8674(0,puVar5 + 1,1,puVar7);
  }
  uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
  uVar12 = *(ulong *)(uVar10 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar12) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_1022a8674(puVar7,uVar12 + 1,1,puVar6);
    uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar12 + 1;
  *(undefined8 *)(uVar10 + uVar12 * 8 + 0x20) = uVar14;
  if (uVar16 == uVar11) goto LAB_1022bebd0;
  goto LAB_1022bea90;
}



/* Entry: 1022bec14; end: 1022bec47;  */

void FUN_1022bec14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1022bec48; end: 1022bec4b;  */

void FUN_1022bec48(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61170();
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c42c1c(lVar1);
    }
    else {
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 1022bec4c; end: 1022becc7;  */

void FUN_1022bec4c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61170();
    lVar2 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c42c1c(lVar1);
    }
    else {
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 1022becc8; end: 1022becf7;  */

void FUN_1022becc8(long param_1,long param_2)

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



/* Entry: 1022becf8; end: 1022bed03; -[SCMemoriesSearchPreTypeScope searchPreTypeViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022becf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b110;
  func_0x000107c61428(param_1 + _DAT_112e7b110,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022bed04; end: 1022bed0f; -[SCMemoriesSearchPreTypeScope setSearchPreTypeViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bed04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b110;
  func_0x000107c61428(param_1 + _DAT_112e7b110,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022bed10; end: 1022bed1b; -[SCMemoriesSearchPreTypeScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bed10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b118;
  func_0x000107c61428(param_1 + _DAT_112e7b118,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022bed1c; end: 1022bed27; -[SCMemoriesSearchPreTypeScope setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bed1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b118;
  func_0x000107c61428(param_1 + _DAT_112e7b118,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022bed28; end: 1022bed33; -[SCMemoriesSearchPreTypeScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bed28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b120;
  func_0x000107c61428(param_1 + _DAT_112e7b120,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022bed34; end: 1022bed77;  */

void FUN_1022bed34(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022bed78; end: 1022bed83; -[SCMemoriesSearchPreTypeScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bed78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b120;
  func_0x000107c61428(param_1 + _DAT_112e7b120,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022bed84; end: 1022bedd7;  */

void FUN_1022bed84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1022bedd8; end: 1022bee87; -[SCMemoriesSearchPreTypeScope dismissKeyboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bedd8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112e7b128);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104f0d40;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1022bee88; end: 1022bef43; -[SCMemoriesSearchPreTypeScope setDismissKeyboard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bee88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1104f0d28;
    func_0x000107c613fc(&UNK_1104f0d28,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_1022bf3c4;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112e7b128);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022bef44; end: 1022befbb; -[SCMemoriesSearchPreTypeScope memSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bef44(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e7b130);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1022befbc; end: 1022bf033; -[SCMemoriesSearchPreTypeScope setMemSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022befbc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112e7b130);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 1022bf034; end: 1022bf077; -[SCMemoriesSearchPreTypeScope autoPushPeopleInMySnapsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1022bf034(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7b138;
  func_0x000107c61428(param_1 + _DAT_112e7b138,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1022bf078; end: 1022bf12f; -[SCMemoriesSearchPreTypeScope setAutoPushPeopleInMySnapsView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bf078(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7b138;
  func_0x000107c61428(param_1 + _DAT_112e7b138,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1022bf130; end: 1022bf1a7; -[SCMemoriesSearchPreTypeScope initWithSearchPreTypeViewContainer:uiContainer:delegate:] */

undefined8
FUN_1022bf130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_3;
  FUN_1022bf278(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 1022bf1a8; end: 1022bf207; -[SCMemoriesSearchPreTypeScope init] */

void FUN_1022bf1a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSearchPreTypeScope.SCMemoriesSearchPreTypeScope",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022bf1d4);
  (*pcVar1)();
}



/* Entry: 1022bf208; end: 1022bf277; -[SCMemoriesSearchPreTypeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bf208(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7b110);
  func_0x000100cec830(param_1 + _DAT_112e7b118);
  func_0x000100cec830(param_1 + _DAT_112e7b120);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112e7b128),
                      ((undefined8 *)(param_1 + _DAT_112e7b128))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e7b130 + 8))
  ;
  return;
}



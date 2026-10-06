/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010267d4; end: 1010267df; -[SCSnapEditorDrawingPluginEntryPoint setScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010267d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55810;
  func_0x000107c61428(param_1 + _DAT_112d55810,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010267e0; end: 1010267eb; -[SCSnapEditorDrawingPluginEntryPoint creativeToolsABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010267e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55818;
  func_0x000107c61428(param_1 + _DAT_112d55818,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010267ec; end: 1010267f7; -[SCSnapEditorDrawingPluginEntryPoint setCreativeToolsABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010267ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55818;
  func_0x000107c61428(param_1 + _DAT_112d55818,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010267f8; end: 101026803; -[SCSnapEditorDrawingPluginEntryPoint emojiBrushResourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010267f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55820;
  func_0x000107c61428(param_1 + _DAT_112d55820,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101026804; end: 101026847;  */

void FUN_101026804(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101026848; end: 101026853; -[SCSnapEditorDrawingPluginEntryPoint setEmojiBrushResourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101026848(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55820;
  func_0x000107c61428(param_1 + _DAT_112d55820,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101026854; end: 1010268a7;  */

void FUN_101026854(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010268a8; end: 101026b43;  */

/* WARNING: Possible PIC construction at 0x00010102699c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101026a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101026aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101026ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101026ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101026b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101026abc) */
/* WARNING: Removing unreachable block (ram,0x000101026aac) */
/* WARNING: Removing unreachable block (ram,0x000101026a9c) */
/* WARNING: Removing unreachable block (ram,0x0001010269a0) */
/* WARNING: Removing unreachable block (ram,0x000101026aa4) */
/* WARNING: Removing unreachable block (ram,0x000101026a18) */
/* WARNING: Removing unreachable block (ram,0x000101026b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010268a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c40c98();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        func_0x000107c42500();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar3 = 0;
          FUN_101026790();
          func_0x000107c610f8();
          *(long *)(lVar3 + _DAT_112d557c0) = lVar1;
          *(long *)(lVar3 + _DAT_112d557c8) = lVar2;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c42500(unaff_x20);
          func_0x000107c61180();
          func_0x000107c424fc();
          func_0x000107c61180();
          lVar1 = unaff_x20;
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101026b44; end: 101026b6b; -[SCSnapEditorDrawingPluginEntryPoint begin] */

void FUN_101026b44(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010268a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101026b6c; end: 101026baf; -[SCSnapEditorDrawingPluginEntryPoint end] */

void FUN_101026b6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101026bb0; end: 101026e1f;  */

void FUN_101026bb0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x65706f6373;
    if (((param_2 == 0x65706f6373) && (param_3 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x65706f6373,0xe500000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58c58();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e36b0)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef1c950,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10df770)) &&
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef20890,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SnapEditorDrawingPluginEntryPoint/SCSnapEditorDrawingPluginEntryPoint.swift"
                                ,0x4b,2,0x34,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101026e20);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54470();
          goto LAB_101026c3c;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53ae0();
    }
  }
LAB_101026c3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101026e20; end: 101026ecb; -[SCSnapEditorDrawingPluginEntryPoint setValue:forIvarName:] */

void FUN_101026e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101026bb0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101026ecc; end: 101026f67; -[SCSnapEditorDrawingPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101026ecc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d55808,0);
  func_0x000107c61614(param_1 + _DAT_112d55810,0);
  func_0x000107c61614(param_1 + _DAT_112d55818,0);
  func_0x000107c61614(param_1 + _DAT_112d55820,0);
  *(undefined8 *)(param_1 + _DAT_112d55828) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101026f68; end: 101026f9b;  */

void FUN_101026f68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101026f9c; end: 101027003; -[SCSnapEditorDrawingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101026f9c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d55808);
  func_0x000107c61610(param_1 + _DAT_112d55810);
  func_0x000107c61610(param_1 + _DAT_112d55818);
  func_0x000107c61610(param_1 + _DAT_112d55820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55828));
  return;
}



/* Entry: 101027004; end: 101027023;  */

void FUN_101027004(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8f00);
  return;
}



/* Entry: 101027024; end: 10102710b;  */

undefined * FUN_101027024(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126a61d0;
  func_0x000107c610f8(PTR_PTR_1126a61d0);
  func_0x000107c453e4();
  puVar2 = &UNK_1103782b8;
  func_0x000107c613fc(&UNK_1103782b8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  pcStack_40 = FUN_10102804c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101027210;
  puStack_48 = &UNK_1103782d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c5440c(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a61d8;
  func_0x000107c610f8(PTR_PTR_1126a61d8);
  func_0x000107c453e4();
  func_0x000107c56188();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 10102710c; end: 1010272af;  */

/* WARNING: Possible PIC construction at 0x0001010271f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010271f4) */

void FUN_10102710c(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_2 & 1) != 0) {
    (*param_3)(0);
    return;
  }
  puVar1 = &UNK_110378330;
  func_0x000107c613fc(&UNK_110378330,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_5);
  puVar2 = &UNK_110378358;
  func_0x000107c613fc(&UNK_110378358,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(code **)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(4,2,0x2c,3,0,0,&UNK_10d91c8a8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1010272b0; end: 1010272cb;  */

void FUN_1010272b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010272cc,0,0);
  return;
}



/* Entry: 1010272cc; end: 1010273b7;  */

void FUN_1010272cc(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x101027360;
    plVar1[8] = *(long *)(unaff_x22 + 0x48);
    plVar1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101027560,0,0);
    return;
  }
  (**(code **)(unaff_x22 + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x00010102735c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1010273b8; end: 10102746f;  */

void FUN_1010273b8(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  if (lVar4 == 0) {
    (**(code **)(unaff_x22 + 0x50))(0);
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x28,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x78) = lVar2;
    if (lVar2 != 0) {
      plVar1 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x80) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_101027470;
      plVar1[3] = lVar4;
      plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101027a40,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(unaff_x22 + 0x50))();
    func_0x000107c61170(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010102746c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101027470; end: 1010274c7;  */

void FUN_101027470(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010274c8,0,0);
  return;
}



/* Entry: 1010274c8; end: 101027547;  */

void FUN_1010274c8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  pcVar1 = *(code **)(unaff_x22 + 0x50);
  if (lVar4 == 0) {
    (*pcVar1)(0);
  }
  else {
    lVar2 = lVar4;
    func_0x000107c61174(lVar4);
    (*pcVar1)(lVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101027544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101027548; end: 10102755f;  */

void FUN_101027548(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101027560,0,0);
  return;
}



/* Entry: 101027560; end: 1010276af;  */

/* WARNING: Removing unreachable block (ram,0x0001010275ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101027560(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c3eea8();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar4 = lVar5;
    FUN_1010282b0(lVar5,param_2);
    *(long *)(unaff_x22 + 0x50) = lVar4;
    func_0x00010006c090(lVar5,param_2);
    if (lVar4 != 0) {
      func_0x0001000d224c(unaff_x22 + 0x10);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar3 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
      piVar7 = *(int **)(lVar3 + 8);
      iVar1 = *piVar7;
      plVar6 = (long *)(ulong)(uint)piVar7[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1010276b0;
                    /* WARNING: Could not recover jumptable at 0x0001010276ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar7))(lVar4,1,0,uVar2,lVar3);
      return;
    }
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010102761c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1010276b0; end: 10102771b;  */

void FUN_1010276b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  *(undefined8 *)(lVar2 + 0x68) = param_2;
  *(undefined8 *)(lVar2 + 0x70) = param_3;
  *(undefined8 *)(lVar2 + 0x78) = param_4;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10102771c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1010279e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10102771c; end: 101027877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102771c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x48);
  func_0x0001000834e4(unaff_x22 + 0x10);
  lVar6 = *(long *)(lVar6 + _DAT_112d55858);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar4 = lVar6;
    func_0x000107c49884();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x80) = lVar4;
    func_0x000107c615e8(lVar6);
    func_0x000107c4ee24(lVar4);
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    func_0x000107c44254();
    func_0x000107c61180();
    lVar6 = lVar4;
    func_0x000100759c94();
    *(long *)(unaff_x22 + 0x88) = lVar6;
    func_0x000107c61170(lVar4);
    plVar5 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101027878;
                    /* WARNING: Could not recover jumptable at 0x00010102781c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_100f96304();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar3);
  func_0x0001000b44c0(uVar1,uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101027874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101027878; end: 1010278cb;  */

void FUN_101027878(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined1 *)(lVar1 + 0xa0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010278cc,0,0);
  return;
}



/* Entry: 1010278cc; end: 1010279df;  */

void FUN_1010278cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(char *)(unaff_x22 + 0xa0) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
    iVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar5 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x38,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
    FUN_100ca0a2c(uVar6,1);
    uVar6 = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c5be70(uVar3);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x0001000b44c0(uVar4,uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001010279dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6);
  return;
}



/* Entry: 1010279e0; end: 101027a27;  */

void FUN_1010279e0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101027a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101027a28; end: 101027a3f;  */

void FUN_101027a28(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101027a40,0,0);
  return;
}



/* Entry: 101027a40; end: 101027b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101027a40(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  puVar3 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  puVar2 = PTR__kCMTimeZero_110348670;
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  func_0x000107c5d19c();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  func_0x0001000285a8(0x112d558a8,&UNK_10d91c8c0);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112d55868);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c3d5d4();
  func_0x000107c61180();
  uVar6 = uVar4;
  func_0x000100759c94();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  func_0x000107c61170(uVar4);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101027b44;
                    /* WARNING: Could not recover jumptable at 0x000101027b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101028174();
  return;
}



/* Entry: 101027b44; end: 101027b97;  */

void FUN_101027b44(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  *(undefined1 *)(lVar1 + 0x68) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101027b98,0,0);
  return;
}



/* Entry: 101027b98; end: 101027f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101027b98(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  
  lVar14 = *(long *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x68) == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar14;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar12 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar12,PTR___ss5ErrorWS_11034ee10);
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    FUN_100ca0a2c(uVar15,1);
    func_0x000107c61170(uVar12);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    if (lVar14 == 0) {
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x28));
    }
    else {
      lVar16 = *(long *)(unaff_x22 + 0x48);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
      puVar4 = PTR_PTR_1126b25d0;
      func_0x000107c610f8(PTR_PTR_1126b25d0);
      func_0x000107c453e4();
      func_0x000107c563e8();
      puVar9 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c4b838();
      func_0x000107c61180();
      func_0x000107c3d7f4();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      lVar14 = lVar16;
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar14 == 0) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar1 = *(undefined1 *)(unaff_x22 + 0x68);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar17);
      }
      else {
        lVar5 = lVar14;
        func_0x000107c5ee30();
        uVar15 = param_2;
        func_0x000107c61170(lVar14);
        lVar14 = lVar16;
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101027f64);
          (*pcVar2)();
        }
        lVar6 = *(long *)(unaff_x22 + 0x30);
        func_0x000107c4ca08();
        func_0x000107c61180();
        func_0x000107c61170(lVar14);
        if (lVar6 != 0) {
          lVar14 = lVar6;
          func_0x000107c41214();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar14 != 0) {
            lVar18 = *(long *)(unaff_x22 + 0x20);
            lVar6 = lVar14;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar14);
            lVar14 = _DAT_112d55878;
            lVar7 = *(long *)(lVar18 + _DAT_112d55878);
            if (lVar7 != 0) {
              uVar17 = *(undefined8 *)(unaff_x22 + 0x30);
              func_0x000107c61174();
              func_0x000107c4170c(uVar17);
              func_0x000107c61180();
              func_0x000107c61170();
              func_0x000107c61170(lVar7);
            }
            lVar7 = _DAT_112d55870;
            lVar13 = *(long *)(unaff_x22 + 0x20);
            lVar8 = *(long *)(lVar13 + _DAT_112d55870);
            if (lVar8 != 0) {
              uVar17 = *(undefined8 *)(unaff_x22 + 0x30);
              func_0x000107c61174();
              func_0x000107c41718(uVar17);
              func_0x000107c61180();
              func_0x000107c61170();
              func_0x000107c61170(lVar8);
            }
            uVar17 = *(undefined8 *)(unaff_x22 + 0x48);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
            uVar1 = *(undefined1 *)(unaff_x22 + 0x68);
            func_0x000107c4c99c();
            func_0x000107c61180();
            uVar11 = *(undefined8 *)(lVar18 + lVar14);
            *(long *)(lVar18 + lVar14) = lVar16;
            func_0x000107c61170(uVar11);
            uVar11 = *(undefined8 *)(lVar13 + lVar7);
            *(undefined8 *)(lVar13 + lVar7) = uVar12;
            func_0x000107c61174(uVar12);
            func_0x000107c61170(uVar11);
            puVar9 = PTR_PTR_1126a61e0;
            func_0x000107c610f8(PTR_PTR_1126a61e0);
            lVar14 = lVar6;
            func_0x000107c5ee20(lVar6,uVar15);
            lVar16 = lVar5;
            func_0x000107c5ee20(lVar5,param_2);
            func_0x000107c47694(puVar9);
            func_0x000107c61170(lVar16);
            func_0x000107c61170(lVar14);
            func_0x00010006c090(lVar5,param_2);
            func_0x00010006c090(lVar6,uVar15);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(uVar10);
            FUN_100ca0a2c(uVar17,uVar1);
            goto LAB_101027f3c;
          }
        }
        uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x28);
        uVar1 = *(undefined1 *)(unaff_x22 + 0x68);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar17);
        func_0x00010006c090(lVar5,param_2);
        func_0x000107c61170(uVar12);
      }
      FUN_100ca0a2c(uVar15,uVar1);
    }
  }
  puVar9 = (undefined *)0x0;
LAB_101027f3c:
                    /* WARNING: Could not recover jumptable at 0x000101027f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar9);
  return;
}



/* Entry: 101027f64; end: 101027fc3; -[_TtC37SnapEditorMagicEraserPluginEntryPoint25MagicEraserPluginProvider init] */

void FUN_101027f64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMagicEraserPluginEntryPoint.MagicEraserPluginProvider",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101027f90);
  (*pcVar1)();
}



/* Entry: 101027fc4; end: 10102802b; -[_TtC37SnapEditorMagicEraserPluginEntryPoint25MagicEraserPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101027fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101028010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101027fe4) */
/* WARNING: Removing unreachable block (ram,0x000101028014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101027fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55858));
  return;
}



/* Entry: 10102802c; end: 10102804b;  */

void FUN_10102802c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8fd8);
  return;
}



/* Entry: 10102804c; end: 10102807f;  */

/* WARNING: Possible PIC construction at 0x0001010271f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010271f4) */

void FUN_10102804c(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_2 & 1) != 0) {
    (*param_3)(0);
    return;
  }
  puVar1 = &UNK_110378330;
  func_0x000107c613fc(&UNK_110378330,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  puVar2 = &UNK_110378358;
  func_0x000107c613fc(&UNK_110378358,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(code **)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001001ca524(4,2,0x2c,3,0,0,&UNK_10d91c8a8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101028080; end: 1010280f7;  */

void FUN_101028080(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1010280f8;
  plVar5[10] = lVar2;
  plVar5[0xb] = lVar4;
  plVar5[8] = lVar1;
  plVar5[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010272cc,0,0);
  return;
}



/* Entry: 1010280f8; end: 101028173;  */

void FUN_1010280f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101028130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101028174; end: 10102818b;  */

void FUN_101028174(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102818c,0,0);
  return;
}



/* Entry: 10102818c; end: 101028253;  */

void FUN_10102818c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001010281d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101028254;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110378380;
  func_0x000107c613fc(&UNK_110378380,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x1010282a4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101028254; end: 101028293;  */

void FUN_101028254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101028294,0,0);
  return;
}



/* Entry: 101028294; end: 1010282af;  */

void FUN_101028294(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001010282a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1010282b0; end: 10102836f;  */

long FUN_1010282b0(undefined8 param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  puVar2 = (undefined8 *)0x0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *puVar2;
  uVar1 = *(undefined1 *)(puVar2 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return lVar3;
}



/* Entry: 101028370; end: 1010283bf;  */

void FUN_101028370(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1010283c0; end: 1010283c7;  */

void FUN_1010283c0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001010282a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1010283c8; end: 101028557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010283c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  ppuVar6 = &puStack_80;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d558b0);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d558b8);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d558c0);
  lVar1 = 0;
  FUN_10102802c();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112d55870) = 0;
  *(undefined8 *)(lVar2 + _DAT_112d55878) = 0;
  *(undefined8 *)(lVar2 + _DAT_112d55858) = uVar8;
  *(undefined8 *)(lVar2 + _DAT_112d55860) = uVar9;
  *(undefined8 *)(lVar2 + _DAT_112d55868) = uVar7;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c615f0(uVar7);
  plVar3 = &lStack_50;
  func_0x000107c61154(plVar3,puVar4);
  puVar4 = &UNK_1103783a8;
  func_0x000107c613fc(&UNK_1103783a8,0x18,7);
  *(long **)(puVar4 + 0x10) = plVar3;
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_60 = FUN_101028670;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101016bdc;
  puStack_68 = &UNK_1103783c0;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61174(plVar3);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_58);
  func_0x000107c5618c(param_1);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101028558; end: 1010285a7; -[_TtC37SnapEditorMagicEraserPluginEntryPoint27SnapEditorMagicEraserPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x000101028590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101028594) */

void FUN_101028558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1010283c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010285a8; end: 101028607; -[_TtC37SnapEditorMagicEraserPluginEntryPoint27SnapEditorMagicEraserPlugin init] */

void FUN_1010285a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMagicEraserPluginEntryPoint.SnapEditorMagicEraserPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010285d4);
  (*pcVar1)();
}



/* Entry: 101028608; end: 10102864f; -[_TtC37SnapEditorMagicEraserPluginEntryPoint27SnapEditorMagicEraserPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101028608(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d558b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d558b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d558c0));
  return;
}



/* Entry: 101028650; end: 10102866f;  */

void FUN_101028650(void)

{
  func_0x000107c61168(&PTR_PTR_1127a90b8);
  return;
}



/* Entry: 101028670; end: 10102868f;  */

void FUN_101028670(void)

{
  FUN_101027024();
  return;
}



/* Entry: 101028690; end: 1010286ab;  */

void FUN_101028690(long param_1,long param_2)

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



/* Entry: 1010286ac; end: 101028853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1010286ac(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  lVar8 = _DAT_11302ecd0;
  if (*(int *)(param_2 + _DAT_11302bb18) == 0) {
    iVar2 = (int)*(undefined8 *)(param_3 + _DAT_11302ecd0);
    func_0x000107c4a470();
    if (iVar2 != 0) {
      uVar4 = *(ulong *)(param_3 + lVar8);
      func_0x000107c4a248();
      if ((uVar4 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + _DAT_11302ba70);
        func_0x000107c61174();
        uVar6 = param_4;
        func_0x000107c4d6b0();
        func_0x000107c61180();
        uVar10 = *(undefined8 *)(param_5 + _DAT_11303c290);
        uVar11 = *(undefined8 *)(param_2 + _DAT_11302bad8);
        lVar7 = 0;
        FUN_101028650();
        lVar8 = lVar7;
        func_0x000107c610f8();
        *(undefined8 *)(lVar8 + _DAT_112d558b0) = uVar6;
        *(undefined8 *)(lVar8 + _DAT_112d558b8) = uVar10;
        *(undefined8 *)(lVar8 + _DAT_112d558c0) = uVar11;
        puVar1 = PTR_s_init_1125d9248;
        lStack_80 = lVar8;
        lStack_78 = lVar7;
        func_0x000107c6157c(uVar10);
        func_0x000107c615f0(uVar11);
        plVar9 = &lStack_80;
        func_0x000107c61154(plVar9,puVar1);
        func_0x000107c4fba8(uVar5);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(plVar9);
      }
    }
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return puVar3;
}



/* Entry: 101028854; end: 1010288b3; -[_TtC37SnapEditorMagicEraserPluginEntryPoint37SnapEditorMagicEraserPluginEntryPoint init] */

void FUN_101028854(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMagicEraserPluginEntryPoint.SnapEditorMagicEraserPluginEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101028880);
  (*pcVar1)();
}



/* Entry: 1010288b4; end: 1010288bf;  */

void FUN_1010288b4(void)

{
  return;
}



/* Entry: 1010288c0; end: 1010288df;  */

void FUN_1010288c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9188);
  return;
}



/* Entry: 1010288e0; end: 1010288eb; -[SCSnapEditorMagicEraserPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010288e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55918;
  func_0x000107c61428(param_1 + _DAT_112d55918,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010288ec; end: 1010288f7; -[SCSnapEditorMagicEraserPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010288ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55918;
  func_0x000107c61428(param_1 + _DAT_112d55918,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010288f8; end: 101028903; -[SCSnapEditorMagicEraserPluginEntryPoint scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010288f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55920;
  func_0x000107c61428(param_1 + _DAT_112d55920,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101028904; end: 10102890f; -[SCSnapEditorMagicEraserPluginEntryPoint setScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101028904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55920;
  func_0x000107c61428(param_1 + _DAT_112d55920,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101028910; end: 10102891b; -[SCSnapEditorMagicEraserPluginEntryPoint creativeToolsABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101028910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55928;
  func_0x000107c61428(param_1 + _DAT_112d55928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102891c; end: 101028927; -[SCSnapEditorMagicEraserPluginEntryPoint setCreativeToolsABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102891c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55928;
  func_0x000107c61428(param_1 + _DAT_112d55928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101028928; end: 101028933; -[SCSnapEditorMagicEraserPluginEntryPoint ngsmePlaybackServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101028928(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55930;
  func_0x000107c61428(param_1 + _DAT_112d55930,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101028934; end: 10102893f; -[SCSnapEditorMagicEraserPluginEntryPoint setNgsmePlaybackServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101028934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55930;
  func_0x000107c61428(param_1 + _DAT_112d55930,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101028940; end: 10102894b; -[SCSnapEditorMagicEraserPluginEntryPoint snapRendererConverterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101028940(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55938;
  func_0x000107c61428(param_1 + _DAT_112d55938,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10102894c; end: 10102898f;  */

void FUN_10102894c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101028990; end: 10102899b; -[SCSnapEditorMagicEraserPluginEntryPoint setSnapRendererConverterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101028990(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55938;
  func_0x000107c61428(param_1 + _DAT_112d55938,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10102899c; end: 1010289ef;  */

void FUN_10102899c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010289f0; end: 101028c7f;  */

/* WARNING: Possible PIC construction at 0x000101028bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101028bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101028bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101028bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101028c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101028c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101028c38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101028c5c) */
/* WARNING: Removing unreachable block (ram,0x000101028c4c) */
/* WARNING: Removing unreachable block (ram,0x000101028be0) */
/* WARNING: Removing unreachable block (ram,0x000101028bd0) */
/* WARNING: Removing unreachable block (ram,0x000101028bc0) */
/* WARNING: Removing unreachable block (ram,0x000101028bb0) */
/* WARNING: Removing unreachable block (ram,0x000101028c3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010289f0(void)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar10 = unaff_x20;
    func_0x000107c5194c();
    func_0x000107c61180();
    lVar9 = lVar4;
    if (lVar10 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c40c98();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar4);
        lVar9 = lVar10;
      }
      else {
        lVar6 = unaff_x20;
        func_0x000107c4d6ac();
        func_0x000107c61180();
        if (lVar6 == 0) {
          func_0x000107c61170(lVar4);
          lVar9 = lVar10;
        }
        else {
          func_0x000107c5b3b0();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            uVar7 = 0;
            FUN_1010288c0();
            uVar11 = uVar7;
            func_0x000107c610f8();
            uStack_70 = uVar11;
            uStack_68 = uVar7;
            func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
            lVar2 = _DAT_11302ecd0;
            lVar9 = lVar10;
            if (*(int *)(lVar10 + _DAT_11302bb18) == 0) {
              iVar3 = (int)*(undefined8 *)(lVar5 + _DAT_11302ecd0);
              func_0x000107c4a470();
              if (iVar3 != 0) {
                uVar8 = *(ulong *)(lVar5 + lVar2);
                func_0x000107c4a248();
                if ((uVar8 & 1) == 0) {
                  lVar9 = *(long *)(lVar4 + _DAT_11302ba70);
                  func_0x000107c61174();
                  func_0x000107c4d6b0();
                  func_0x000107c61180();
                  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11303c290);
                  uVar7 = *(undefined8 *)(lVar10 + _DAT_11302bad8);
                  lVar10 = 0;
                  FUN_101028650();
                  lVar4 = lVar10;
                  func_0x000107c610f8();
                  *(long *)(lVar4 + _DAT_112d558b0) = lVar6;
                  *(undefined8 *)(lVar4 + _DAT_112d558b8) = uVar11;
                  *(undefined8 *)(lVar4 + _DAT_112d558c0) = uVar7;
                  puVar1 = PTR_s_init_1125d9248;
                  lStack_80 = lVar4;
                  lStack_78 = lVar10;
                  func_0x000107c6157c(uVar11);
                  func_0x000107c615f0(uVar7);
                  func_0x000107c61154(&lStack_80,puVar1);
                  func_0x000107c4fba8(lVar9);
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar9);
    return;
  }
  return;
}



/* Entry: 101028c80; end: 101028ca7; -[SCSnapEditorMagicEraserPluginEntryPoint begin] */

void FUN_101028c80(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010289f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101028ca8; end: 101028ceb; -[SCSnapEditorMagicEraserPluginEntryPoint end] */

void FUN_101028ca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101028cec; end: 101028fc7;  */

void FUN_101028cec(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x65706f6373;
    if (((param_2 == 0x65706f6373) && (param_3 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x65706f6373,0xe500000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58c58();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e36b0)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef1c950,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a70)) {
            uVar2 = 0xd000000000000015;
            func_0x000107c605b8(0xd000000000000015,0x800000010ef1f590,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd00000000000001d;
              if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10df620)) &&
                 (func_0x000107c605b8(0xd00000000000001d,0x800000010ef209e0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SnapEditorMagicEraserPluginEntryPoint/SCSnapEditorMagicEraserPluginEntryPoint.swift"
                                    ,0x53,2,0x35,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101028fc8);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5944c();
              goto LAB_101028d78;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56aac();
          goto LAB_101028d78;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53ae0();
    }
  }
LAB_101028d78:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101028fc8; end: 101029073; -[SCSnapEditorMagicEraserPluginEntryPoint setValue:forIvarName:] */

void FUN_101028fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101028cec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101029074; end: 101029123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101029074(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d55918,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55920,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55928,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55930,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d55938,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d55940) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101029124; end: 101029143; -[SCSnapEditorMagicEraserPluginEntryPoint init] */

void FUN_101029124(void)

{
  FUN_101029074();
  return;
}



/* Entry: 101029144; end: 101029177;  */

void FUN_101029144(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101029178; end: 1010291ef; -[SCSnapEditorMagicEraserPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101029178(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d55918);
  func_0x000107c61610(param_1 + _DAT_112d55920);
  func_0x000107c61610(param_1 + _DAT_112d55928);
  func_0x000107c61610(param_1 + _DAT_112d55930);
  func_0x000107c61610(param_1 + _DAT_112d55938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55940));
  return;
}



/* Entry: 1010291f0; end: 10102920f;  */

void FUN_1010291f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127a9240);
  return;
}



/* Entry: 101029210; end: 101029223;  */

bool FUN_101029210(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101029224; end: 1010292cf;  */

void FUN_101029224(void)

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



/* Entry: 1010292d0; end: 1010292df;  */

void FUN_1010292d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1010292e0; end: 101029563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010292e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar9 = *(long *)(unaff_x20 + _DAT_112d559a0);
  if (lVar9 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x000107c61168();
    func_0x000107c43d80();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3f78c();
    func_0x000107c61170(puVar2);
    *(undefined **)(unaff_x20 + _DAT_112d559c0) = puVar3;
  }
  else {
    func_0x000107c4e454(lVar9);
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x000107c61168();
    func_0x000107c43d80();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3f78c();
    func_0x000107c61170(puVar2);
    *(undefined **)(unaff_x20 + _DAT_112d559c0) = puVar3;
    func_0x000107c50714(lVar9);
  }
  puVar2 = &UNK_1103787b8;
  func_0x000107c613fc(&UNK_1103787b8,0x11,7);
  puVar2[0x10] = 0;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d55998);
  uVar4 = uVar10;
  func_0x000107c41b80(uVar10);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_10102e7b0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100c1de60;
  puStack_78 = &UNK_1103787d0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar3);
  uVar6 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c3e924(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c419f0(uVar10);
  func_0x000107c61180();
  puVar3 = &UNK_1103785b0;
  func_0x000107c613fc(&UNK_1103785b0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar7 = &UNK_110378808;
  func_0x000107c613fc(&UNK_110378808,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar2;
  *(undefined **)(puVar7 + 0x18) = puVar3;
  pcStack_70 = FUN_10102e828;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100c1de60;
  puStack_78 = &UNK_110378820;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar3);
  uVar4 = uVar10;
  func_0x000107c5c320(uVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c3e924(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101029564; end: 1010295b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101029564(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112d559d0));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010295b4; end: 10102961b; -[_TtC33SnapEditorScissorPluginEntryPoint21ScissorPluginProvider dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010295b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d559d0);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10102961c; end: 1010296f3; -[_TtC33SnapEditorScissorPluginEntryPoint21ScissorPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101029638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101029658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101029678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010296a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010296d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010296ac) */
/* WARNING: Removing unreachable block (ram,0x00010102967c) */
/* WARNING: Removing unreachable block (ram,0x00010102965c) */
/* WARNING: Removing unreachable block (ram,0x00010102963c) */
/* WARNING: Removing unreachable block (ram,0x0001010296dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10102961c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55970));
  return;
}



/* Entry: 1010296f4; end: 10102995f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1010296f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar1 = PTR_PTR_1126a61e8;
  func_0x000107c610f8(PTR_PTR_1126a61e8);
  func_0x000107c453e4();
  puVar2 = &UNK_1103784c0;
  func_0x000107c613fc(&UNK_1103784c0,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_10102ddc0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101029ac4;
  puStack_68 = &UNK_1103784d8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c54830(puVar1);
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126a61f0;
  func_0x000107c610f8(PTR_PTR_1126a61f0);
  func_0x000107c453e4();
  puVar2 = &UNK_110378510;
  func_0x000107c613fc(&UNK_110378510,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  pcStack_60 = FUN_10102dde4;
  puStack_80 = puVar7;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)0x101029e00;
  puStack_68 = &UNK_110378528;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c54e80(puVar4);
  func_0x000107c60bd0(ppuVar5);
  puVar2 = &UNK_110378560;
  func_0x000107c613fc(&UNK_110378560,0x18,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  pcStack_60 = (code *)0x10102de04;
  puStack_80 = puVar7;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10102a070;
  puStack_68 = &UNK_110378578;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c53dc4(puVar4);
  func_0x000107c60bd0(ppuVar6);
  puVar2 = PTR_PTR_1126a61f8;
  func_0x000107c610f8(PTR_PTR_1126a61f8);
  func_0x000107c453e4();
  func_0x000107c59344();
  func_0x000107c53dc8(puVar2);
  puVar7 = PTR_PTR_1126a6200;
  func_0x000107c610f8(PTR_PTR_1126a6200);
  func_0x000107c453e4();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d559c8);
  func_0x000107c5cb24(uVar8);
  func_0x000107c61180();
  func_0x000107c53d34(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c53d38(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  return puVar2;
}



/* Entry: 101029960; end: 101029ac3;  */

undefined8
FUN_101029960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d55a00,&UNK_10d91c9b8);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_1103785b0;
  func_0x000107c613fc(&UNK_1103785b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_7);
  puVar3 = &UNK_110378740;
  func_0x000107c613fc(&UNK_110378740,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(long *)(puVar3 + 0x38) = lVar1;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(lVar1);
  func_0x000107c61174(param_4);
  uVar4 = 2;
  func_0x0001001ca524(2,2,0x2c,3,0,0,&UNK_10d91ca38,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = uVar5;
  func_0x000107c6157c(uVar5);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 101029ac4; end: 101029bb3;  */

void FUN_101029ac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = param_2;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_4);
  uVar3 = param_6;
  func_0x000107c61174(param_6);
  uVar4 = param_2;
  (*pcVar1)(param_2,param_3,uVar5,param_4,param_5,param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x00010006c090(param_3,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 101029bb4; end: 101029e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101029bb4(ulong param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined *apuStack_48 [3];
  
  func_0x0001000285a8(0x112d55a28,&UNK_10dbfa640);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  uVar3 = param_1;
  FUN_10102c314();
  if ((uVar3 & 1) == 0) {
LAB_101029cdc:
    FUN_10102e830(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    lVar9 = _DAT_112d559b8;
    if (iVar1 == 0) goto LAB_101029cdc;
    ppuVar8 = apuStack_48;
    func_0x000107c61428(unaff_x20 + _DAT_112d559b8,ppuVar8,0x20,0);
    lVar9 = *(long *)(unaff_x20 + lVar9);
    if ((*(long *)(lVar9 + 0x10) == 0) ||
       (uVar3 = param_1, FUN_100f89a68(), ((ulong)ppuVar8 & 1) == 0)) {
      func_0x000107c614a8(apuStack_48);
LAB_101029d2c:
      puVar5 = &UNK_1103785b0;
      func_0x000107c613fc(&UNK_1103785b0,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1103786a0;
      func_0x000107c613fc(&UNK_1103786a0,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(long *)(puVar6 + 0x18) = lVar2;
      *(ulong *)(puVar6 + 0x20) = param_1;
      func_0x000107c6157c(lVar2);
      uVar7 = 2;
      func_0x0001001ca524(2,2,0x2c,3,0,0,&UNK_10d91c9f8,puVar6,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar7);
      goto LAB_101029dc4;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + uVar3 * 8);
    func_0x000107c614a8(apuStack_48);
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_101029d2c;
    lVar4 = lVar9;
    func_0x000107c61434(lVar9);
    FUN_10102c3b8();
    func_0x000107c6142c(lVar9);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8();
    lVar9 = lVar4;
    func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(lVar4);
    func_0x000107c45788();
    func_0x000107c61170(lVar9);
  }
  apuStack_48[0] = puVar5;
  func_0x000100b60084(apuStack_48);
  func_0x000107c61170(puVar5);
LAB_101029dc4:
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = uVar10;
  func_0x000107c6157c(uVar10);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar2);
  func_0x000107c61574(uVar10);
  return uVar7;
}



/* Entry: 101029e48; end: 10102a06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101029e48(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_68 [24];
  
  func_0x0001000285a8(0x112d55a00,&UNK_10d91c9b8);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  lVar8 = _DAT_112d559b8;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10102a068);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10102a06c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10102a070);
    (*pcVar1)();
  }
  puVar6 = auStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112d559b8,puVar6,0x20,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if ((*(long *)(lVar8 + 0x10) == 0) || (lVar3 = param_2, FUN_100f89a68(), ((ulong)puVar6 & 1) == 0)
     ) {
    puVar6 = auStack_68;
    func_0x000107c614a8();
  }
  else {
    lVar10 = (long)param_1;
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + lVar3 * 8);
    puVar6 = auStack_68;
    func_0x000107c614a8();
    if ((-1 < lVar10) && (lVar10 < *(long *)(lVar8 + 0x10))) {
      lVar8 = lVar8 + lVar10 * 0x10;
      uVar5 = *(undefined8 *)(lVar8 + 0x20);
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      puVar7 = &UNK_1103785b0;
      func_0x000107c613fc(&UNK_1103785b0,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      puVar4 = &UNK_1103785d8;
      func_0x000107c613fc(&UNK_1103785d8,0x38,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar5;
      *(undefined8 *)(puVar4 + 0x18) = uVar9;
      *(undefined **)(puVar4 + 0x20) = puVar7;
      *(long *)(puVar4 + 0x28) = param_2;
      *(long *)(puVar4 + 0x30) = lVar2;
      func_0x000107c61434(uVar9);
      func_0x000107c6157c(lVar2);
      uVar5 = 2;
      func_0x0001001ca524(2,2,0x2c,3,0,0,&UNK_10d91c9c8,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
      goto LAB_10102a020;
    }
  }
  FUN_10102de24();
  puVar7 = &UNK_1103789c0;
  func_0x000107c613f8(&UNK_1103789c0,puVar6,0,0);
  *puVar6 = 6;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar7);
LAB_10102a020:
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar5 = uVar9;
  func_0x000107c6157c(uVar9);
  func_0x000103edf0bc();
  func_0x000107c61574(lVar2);
  func_0x000107c61574(uVar9);
  return uVar5;
}



/* Entry: 10102a070; end: 10102a0c7;  */

void FUN_10102a070(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10102a0c8; end: 10102a0eb;  */

void FUN_10102a0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_7;
  *(undefined8 *)(unaff_x22 + 0x140) = param_8;
  *(undefined8 *)(unaff_x22 + 0x128) = param_5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = param_4;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102a0ec,0,0);
  return;
}



/* Entry: 10102a0ec; end: 10102a207;  */

void FUN_10102a0ec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long unaff_x22;
  
  puVar5 = *(undefined1 **)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c5ee20(puVar5,uVar2);
  func_0x000107c4635c();
  *(undefined **)(unaff_x22 + 0x148) = puVar3;
  func_0x000107c61170();
  if (puVar3 != (undefined *)0x0) {
    lVar6 = *(long *)(unaff_x22 + 0x120);
    func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x70,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x150) = lVar6;
    if (lVar6 != 0) {
      plVar4 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x158) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_10102a208;
      lVar1 = *(long *)(unaff_x22 + 0x128);
      plVar4[10] = *(long *)(unaff_x22 + 0x130);
      plVar4[0xb] = lVar6;
      plVar4[9] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10102ab14,0,0);
      return;
    }
    puVar5 = *(undefined1 **)(unaff_x22 + 0x148);
    func_0x000107c61170();
  }
  FUN_10102de24();
  puVar3 = &UNK_1103789c0;
  func_0x000107c613f8(&UNK_1103789c0,puVar5,0,0);
  *puVar5 = 4;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010102a204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102a208; end: 10102a25f;  */

void FUN_10102a208(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x150);
  *(undefined8 *)(lVar2 + 0x160) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x158));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102a260,0,0);
  return;
}



/* Entry: 10102a260; end: 10102a38b;  */

void FUN_10102a260(void)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x160) == 0) {
    puVar2 = *(undefined1 **)(unaff_x22 + 0x148);
    func_0x000107c61170();
    FUN_10102de24();
    puVar3 = &UNK_1103789c0;
    func_0x000107c613f8(&UNK_1103789c0,puVar2,0,0);
    *puVar2 = 4;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x120);
    func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x88,0,0);
    puVar2 = (undefined1 *)(lVar5 + 0x10);
    func_0x000107c61618();
    *(undefined1 **)(unaff_x22 + 0x168) = puVar2;
    if (puVar2 != (undefined1 *)0x0) {
      plVar1 = (long *)0x40;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x170) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_10102a38c;
      plVar1[5] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10102ad04,0,0);
      return;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
    FUN_10102de24();
    puVar3 = &UNK_1103789c0;
    func_0x000107c613f8(&UNK_1103789c0,puVar2,0,0);
    *puVar2 = 3;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010102a388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102a38c; end: 10102a3e3;  */

void FUN_10102a38c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x168);
  *(undefined8 *)(lVar2 + 0x178) = param_1;
  *(undefined8 *)(lVar2 + 0x180) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x170));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10102a3e4,0,0);
  return;
}



/* Entry: 10102a3e4; end: 10102a5c3;  */

void FUN_10102a3e4(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  
  puVar11 = *(undefined1 **)(unaff_x22 + 0x180);
  if (puVar11 == (undefined1 *)0x0) {
    uVar13 = 3;
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x120);
    func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0xa0,0,0);
    lVar9 = lVar9 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x188) = lVar9;
    if (lVar9 != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
      func_0x000107c5e304(*(undefined8 *)(unaff_x22 + 0x140));
      puVar4 = &UNK_1103785b0;
      func_0x000107c613fc(&UNK_1103785b0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar9);
      *(undefined **)(unaff_x22 + 0x20) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
      *(undefined1 **)(unaff_x22 + 0x40) = puVar11;
      *(undefined8 *)(unaff_x22 + 0x48) = param_1;
      uVar10 = 0x112d55a48;
      func_0x0001000285a8(0x112d55a48,&UNK_10d91ca48);
      pcVar2 = FUN_10102e72c;
      func_0x00010488bc98(FUN_10102e72c,unaff_x22 + 0x10,uVar10);
      *(code **)(unaff_x22 + 400) = pcVar2;
      func_0x000107c61574(puVar4);
      *(code **)(unaff_x22 + 0x100) = pcVar2;
      plVar3 = (long *)0x40;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x198) = plVar3;
      uVar10 = 0x112d55a50;
      func_0x0001000285a8(0x112d55a50,&UNK_10d91ca50);
      lVar9 = 0x112d55a58;
      FUN_10102e764(0x112d55a58,0x112d55a50,&UNK_10d91ca50);
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10102a5c4;
      plVar3[3] = unaff_x22 + 0x50;
      uVar14 = 0xff;
      _swift_getAssociatedTypeWitness(0xff,lVar9,uVar10,&UNK_10e821f58,&UNK_10e821f60);
      uVar12 = 0x112d393f0;
      func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
      lVar5 = 0;
      __ss6ResultOMa(0,uVar14,uVar12,PTR___ss5ErrorWS_11034ee10);
      plVar3[4] = lVar5;
      uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar3[5] = uVar6;
      piVar8 = *(int **)(lVar9 + 0x10);
      iVar1 = *piVar8;
      plVar7 = (long *)(ulong)(uint)piVar8[1];
      _swift_task_alloc();
      plVar3[6] = (long)plVar7;
      *plVar7 = (long)plVar3;
      plVar7[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar8))(plVar7,uVar6,uVar10,lVar9);
      return;
    }
    func_0x000107c6142c();
    uVar13 = 1;
    param_2 = puVar11;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x148);
  FUN_10102de24();
  puVar4 = &UNK_1103789c0;
  func_0x000107c613f8(&UNK_1103789c0,param_2,0,0);
  *param_2 = uVar13;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010102a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10102a5c4; end: 10102a623;  */

void FUN_10102a5c4(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x198));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10102a6c0;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_10102a624;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



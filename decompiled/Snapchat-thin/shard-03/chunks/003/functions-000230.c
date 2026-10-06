/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027738bc; end: 10277391b;  */

void FUN_1027738bc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x1a0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x120);
    uVar3 = *(undefined8 *)(lVar4 + 0x128);
    pcVar1 = (code *)0x1027750ac;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x120);
    uVar3 = *(undefined8 *)(lVar4 + 0x128);
    pcVar1 = FUN_102773a54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277391c; end: 102773963;  */

void FUN_10277391c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102773960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102773964; end: 1027739c3;  */

void FUN_102773964(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x1b0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x120);
    uVar3 = *(undefined8 *)(lVar4 + 0x128);
    pcVar1 = FUN_1027739c4;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x120);
    uVar3 = *(undefined8 *)(lVar4 + 0x128);
    pcVar1 = FUN_10277509c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1027739c4; end: 102773a53;  */

void FUN_1027739c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c61654();
  func_0x000107c615e8(uVar4);
  func_0x00010006c090(uVar1,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000102774e60(unaff_x22 + 0x38,0x112d53858,&UNK_10d91a180);
                    /* WARNING: Could not recover jumptable at 0x000102773a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102773a54; end: 102773b33;  */

void FUN_102773a54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x0001000834e4(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar9 = *(undefined1 *)(unaff_x22 + 0x1b8);
  func_0x000107c5d0f0(uVar10);
  func_0x000107c61170(uVar5);
  FUN_102774ea0(uVar10,uVar9);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x00010006c090(uVar3,uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000102774e60(unaff_x22 + 0x38,0x112d53858,&UNK_10d91a180);
                    /* WARNING: Could not recover jumptable at 0x000102773b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102773b34; end: 102773ba3;  */

void FUN_102773b34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102773ba4,uVar1,uVar2);
  return;
}



/* Entry: 102773ba4; end: 102773d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102773ba4(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  uVar3 = *(ulong *)(unaff_x22 + 200);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar6);
  (**(code **)(lVar2 + 8))(uVar3,uVar6,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if ((uVar3 & 1) != 0) {
    func_0x000100083b20(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
    piVar7 = *(int **)(lVar2 + 0x18);
    iVar1 = *piVar7;
    plVar4 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102773d48;
                    /* WARNING: Could not recover jumptable at 0x000102773c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(*(undefined8 *)(unaff_x22 + 200),uVar6,lVar2);
    return;
  }
  puVar8 = *(undefined1 **)(unaff_x22 + 200);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar8 != (undefined1 *)0x0) {
    puVar9 = *(undefined8 **)(unaff_x22 + 0xc0);
    puVar5 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
    puVar9[4] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x000102773cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar5,uVar6);
    return;
  }
  func_0x000102774c38();
  func_0x000107c613f8(&UNK_110546500,puVar8,0,0);
  *puVar8 = 2;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102773d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102773d48; end: 102773db3;  */

void FUN_102773d48(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xf0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x100) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    uVar3 = *(undefined8 *)(lVar4 + 0xe8);
    pcVar1 = FUN_102773db4;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    uVar3 = *(undefined8 *)(lVar4 + 0xe8);
    pcVar1 = FUN_1027740b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102773db4; end: 102773f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102773db4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x100);
  lVar2 = lVar7;
  func_0x000107c5b198();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x108) = lVar2;
  func_0x000107c615e8(lVar7);
  func_0x0001000834e4(unaff_x22 + 0x38);
  lVar7 = lVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar3 = lVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar7);
    *(long *)(unaff_x22 + 0x110) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x118) = param_2;
    func_0x000100083b20(unaff_x22 + 0xb0);
    lVar7 = *(long *)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_11303eae0);
    func_0x000107c6157c(uVar8);
    func_0x000107c61170(lVar7);
    func_0x0001000d224c(unaff_x22 + 0x88);
    func_0x000107c61574(uVar8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar7 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar8);
    piVar6 = *(int **)(lVar7 + 0x20);
    iVar1 = *piVar6;
    plVar4 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x120) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102773f64;
                    /* WARNING: Could not recover jumptable at 0x000102773f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              (unaff_x22 + 0x60,lVar2,"effectiveSnapDoc(for:)",0x16,0x9000000000000002,0x96,
               unaff_x22 + 0xb8,uVar8,lVar7);
    return;
  }
  puVar5 = *(undefined1 **)(unaff_x22 + 0xd8);
  func_0x000107c61574();
  func_0x000102774c38();
  func_0x000107c613f8(&UNK_110546500,puVar5,0,0);
  *puVar5 = 2;
  func_0x000107c61654();
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000102773f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102773f64; end: 102773fc3;  */

void FUN_102773f64(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x120));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    uVar3 = *(undefined8 *)(lVar4 + 0xe8);
    pcVar1 = FUN_102774054;
  }
  else {
    *(undefined8 *)(lVar4 + 0x128) = *(undefined8 *)(lVar4 + 0xb8);
    uVar2 = *(undefined8 *)(lVar4 + 0xe0);
    uVar3 = *(undefined8 *)(lVar4 + 0xe8);
    pcVar1 = FUN_102773fc4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102773fc4; end: 102774053;  */

void FUN_102773fc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  puVar3 = *(undefined8 **)(unaff_x22 + 0xd8);
  func_0x000107c61574();
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,puVar3,0,0);
  *puVar3 = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c61170(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000102774050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102774054; end: 1027740af;  */

void FUN_102774054(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c61574(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x88);
  func_0x000100fb8694(unaff_x22 + 0x60,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001027740ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x118));
  return;
}



/* Entry: 1027740b0; end: 1027740eb;  */

void FUN_1027740b0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001027740e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027740ec; end: 102774117; -[_TtC38MemTwoOperaContextPluginImplementation43MemTwoOperaPostSpotlightActionHandlerPlugin init] */

void FUN_1027740ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaContextPluginImplementation.MemTwoOperaPostSpotlightActionHandlerPlugin"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102774118);
  (*pcVar1)();
}



/* Entry: 102774118; end: 10277411b;  */

void FUN_102774118(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10277411c; end: 102774193; -[_TtC38MemTwoOperaContextPluginImplementation43MemTwoOperaPostSpotlightActionHandlerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102774148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102774168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010277414c) */
/* WARNING: Removing unreachable block (ram,0x00010277416c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277411c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebcd58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebcd68));
  return;
}



/* Entry: 102774194; end: 1027741a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102774194(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + _DAT_112ebcd58));
  return;
}



/* Entry: 1027741a8; end: 1027741cb;  */

void FUN_1027741a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10277494c(param_1,param_2,param_4);
  return;
}



/* Entry: 1027741cc; end: 1027741cf; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate sendDidReturnPromise:] */

void FUN_1027741cc(void)

{
  return;
}



/* Entry: 1027741d0; end: 1027741df; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate uiViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027741d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebcdb8));
  return;
}



/* Entry: 1027741e0; end: 1027741e7; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate mediaSource] */

undefined8 FUN_1027741e0(void)

{
  return 1;
}



/* Entry: 1027741e8; end: 1027741ef; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate shouldSendAsExternalMedia] */

undefined8 FUN_1027741e8(void)

{
  return 0;
}



/* Entry: 1027741f0; end: 10277421b; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate init] */

void FUN_1027741f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaContextPluginImplementation.SpotlightSendFlowDelegate",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10277421c);
  (*pcVar1)();
}



/* Entry: 10277421c; end: 10277422b; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277421c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebcdb8));
  return;
}



/* Entry: 10277422c; end: 10277423b; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525422SpotlightSnapDocBundle original] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277422c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebcde8));
  return;
}



/* Entry: 10277423c; end: 10277426f; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525422SpotlightSnapDocBundle setOriginal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277423c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebcde8);
  *(undefined8 *)(param_1 + _DAT_112ebcde8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102774270; end: 1027742db; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525422SpotlightSnapDocBundle multisnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102774270(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ebcdf0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_102774eb4(0,0x112d54e00,&PTR_PTR_1126bcf68);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1027742dc; end: 10277433f; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525422SpotlightSnapDocBundle setMultisnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027742dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_102774eb4(0,0x112d54e00,&PTR_PTR_1126bcf68);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebcdf0);
  *(long *)(param_1 + _DAT_112ebcdf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102774340; end: 10277436b; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525422SpotlightSnapDocBundle init] */

void FUN_102774340(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaContextPluginImplementation.SpotlightSnapDocBundle",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10277436c);
  (*pcVar1)();
}



/* Entry: 10277436c; end: 1027743a3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525422SpotlightSnapDocBundle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277436c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebcde8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebcdf0));
  return;
}



/* Entry: 1027743a4; end: 1027743b3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters sendToType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1027743a4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112ebce20);
}



/* Entry: 1027743b4; end: 1027743c3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setSendToType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027743b4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_112ebce20) = param_3;
  return;
}



/* Entry: 1027743c4; end: 102774423; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters commonMetricLoggingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027743c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebce28);
  FUN_102774eb4(0,0x112ebb480,&PTR_PTR_1126c4258);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102774424; end: 10277447b; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setCommonMetricLoggingParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102774424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102774eb4(0,0x112ebb480,&PTR_PTR_1126c4258);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebce28);
  *(undefined8 *)(param_1 + _DAT_112ebce28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10277447c; end: 10277448f; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters saveReplaceIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277447c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebce30);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102774490; end: 1027744a3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setSaveReplaceIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102774490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebce30);
  *(undefined8 *)(param_1 + _DAT_112ebce30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1027744a4; end: 1027744b3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters isLinkShareAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027744a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebce38);
}



/* Entry: 1027744b4; end: 1027744c3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setIsLinkShareAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027744b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebce38) = param_3;
  return;
}



/* Entry: 1027744c4; end: 1027744d3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters isLinkShareGenerated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027744c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebce40);
}



/* Entry: 1027744d4; end: 1027744e3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setIsLinkShareGenerated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027744d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebce40) = param_3;
  return;
}



/* Entry: 1027744e4; end: 1027744f7; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters selectedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027744e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ebce48);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027744f8; end: 10277453b;  */

void FUN_1027744f8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10277453c; end: 10277454f; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setSelectedItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277453c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___s10Foundation4DataVN_110350ae0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebce48);
  *(undefined8 *)(param_1 + _DAT_112ebce48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102774550; end: 10277458b;  */

void FUN_102774550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + *param_5);
  *(undefined8 *)(param_1 + *param_5) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10277458c; end: 10277459b; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters forceDirectSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10277458c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebce50);
}



/* Entry: 10277459c; end: 1027745ab; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setForceDirectSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277459c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebce50) = param_3;
  return;
}



/* Entry: 1027745ac; end: 1027745bb; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters isPromptLensWithRestrictedDestinations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1027745ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ebce58);
}



/* Entry: 1027745bc; end: 1027745cb; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setIsPromptLensWithRestrictedDestinations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027745bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112ebce58) = param_3;
  return;
}



/* Entry: 1027745cc; end: 1027745db; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters createPostABConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027745cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebce60));
  return;
}



/* Entry: 1027745dc; end: 10277460f; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters setCreatePostABConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027745dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebce60);
  *(undefined8 *)(param_1 + _DAT_112ebce60) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102774610; end: 1027746d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102774610(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined4 *)(unaff_x20 + _DAT_112ebce20) = 3;
  lVar2 = _DAT_112ebce28;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112ebce28) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112ebce30) = puVar1;
  *(undefined1 *)(unaff_x20 + _DAT_112ebce38) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebce40) = 0;
  *(undefined **)(unaff_x20 + _DAT_112ebce48) = puVar1;
  *(undefined1 *)(unaff_x20 + _DAT_112ebce50) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ebce58) = 0;
  lVar3 = _DAT_112ebce60;
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined8 *)(unaff_x20 + lVar3) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027746d8; end: 102774737; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters init] */

void FUN_1027746d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoOperaContextPluginImplementation.SpotlightSendParameters",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102774704);
  (*pcVar1)();
}



/* Entry: 102774738; end: 10277478f; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525423SpotlightSendParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102774738(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebce28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebce30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebce48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebce60));
  return;
}



/* Entry: 102774790; end: 1027747a3;  */

bool FUN_102774790(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1027747a4; end: 10277484f;  */

void FUN_1027747a4(void)

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



/* Entry: 102774850; end: 102774883;  */

void FUN_102774850(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102774884; end: 1027748fb;  */

void FUN_102774884(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102774eb4(0,param_1,param_2);
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



/* Entry: 1027748fc; end: 10277493b;  */

void FUN_1027748fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277493c,0,0);
  return;
}



/* Entry: 10277493c; end: 10277494b;  */

void FUN_10277493c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102774948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10277494c; end: 102774ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277494c(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  long alStack_90 [6];
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_112ebcd58));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar7 = uVar1;
    func_0x000100029284(lVar2);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(param_3);
      alStack_90[1] = 0;
      alStack_90[0] = 0;
      alStack_90[3] = 0;
      alStack_90[2] = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar2 * 0x20,alStack_90);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (alStack_90[3] != 0) {
        plVar4 = &lStack_60;
        func_0x000107c6147c(plVar4,alStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar4 & 1) != 0) {
          func_0x000100083b20(alStack_90);
          lVar2 = alStack_90[3];
          func_0x0001000a8868(alStack_90,alStack_90[3]);
          lVar3 = lStack_60;
          (**(code **)(alStack_90[4] + 0x20))(lStack_60,uStack_58,lVar2,alStack_90[4]);
          func_0x000107c6142c(uStack_58);
          plVar4 = alStack_90;
          if (lVar3 != 0) {
            func_0x0001000834e4();
            if ((*(byte *)(unaff_x20 + _DAT_112ebcd60) & 1) != 0) {
              func_0x000107c61170(lVar3);
              return;
            }
            *(undefined1 *)(unaff_x20 + _DAT_112ebcd60) = 1;
            puVar5 = &UNK_110546468;
            func_0x000107c613fc(&UNK_110546468,0x20,7);
            *(long *)(puVar5 + 0x10) = unaff_x20;
            *(long *)(puVar5 + 0x18) = lVar3;
            func_0x000107c61174();
            func_0x000107c61174(lVar3);
            uVar6 = 0xc1;
            func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad7048,puVar5,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61170(lVar3);
            func_0x000107c61574(puVar5);
            func_0x000107c61574(uVar6);
            return;
          }
          func_0x0001000834e4();
        }
        goto LAB_102774ac4;
      }
    }
  }
  plVar4 = alStack_90;
  func_0x000102774e60(plVar4,0x112d387f8,&UNK_10d902650);
LAB_102774ac4:
  func_0x000102774c38();
  func_0x000107c613f8(&UNK_110546500,plVar4,0,0);
  *(undefined1 *)plVar4 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 102774ba8; end: 102774bb7;  */

undefined1  [16] FUN_102774ba8(void)

{
  return ZEXT816(0x110546448);
}



/* Entry: 102774bb8; end: 102774c77;  */

void FUN_102774bb8(void)

{
  func_0x000107c61168(&PTR_PTR_11285fbf0);
  return;
}



/* Entry: 102774c78; end: 102774cdb;  */

void FUN_102774c78(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102774cdc;
  plVar5[2] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar5[3] = lVar1;
  func_0x000107c5fce8();
  plVar5[4] = lVar1;
  plVar2 = (long *)0x1c0;
  func_0x000107c615b8();
  plVar5[5] = (long)plVar2;
  *plVar2 = (long)plVar5;
  plVar2[1] = (long)FUN_102772d10;
  plVar2[0x21] = lVar3;
  plVar2[0x22] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x23] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x24] = lVar3;
  plVar2[0x25] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102772e88,lVar3,lVar4);
  return;
}



/* Entry: 102774cdc; end: 102774d17;  */

void FUN_102774cdc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102774d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102774d18; end: 102774e0f;  */

undefined * FUN_102774d18(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c81e8;
  func_0x000107c610f8(PTR_PTR_1126c81e8);
  func_0x000107c453e4();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efcc840);
  func_0x000107c5925c(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59260(puVar1);
  func_0x000107c61170(puVar3);
  uVar2 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efcc870);
  func_0x000107c52a7c(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c52a80(puVar1);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 102774e10; end: 102774e9f;  */

undefined8 FUN_102774e10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d53858;
  func_0x0001000285a8(0x112d53858,&UNK_10d91a180);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102774ea0; end: 102774eb3;  */

void FUN_102774ea0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102774eb4; end: 102774ef3;  */

void FUN_102774eb4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 102774ef4; end: 10277505b;  */

int FUN_102774ef4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102774f70;
        goto LAB_102774f54;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102774f54:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102774f70:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10277505c; end: 10277509b;  */

void FUN_10277505c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebcea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad70dc;
  func_0x000107c61520(&UNK_10dad70dc,&UNK_110546500);
  puRam0000000112ebcea0 = puVar1;
  return;
}



/* Entry: 10277509c; end: 10277509f;  */

void FUN_10277509c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x0001000834e4(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c61654();
  func_0x000107c615e8(uVar4);
  func_0x00010006c090(uVar1,uVar3);
  func_0x000107c61170(uVar2);
  func_0x000102774e60(unaff_x22 + 0x38,0x112d53858,&UNK_10d91a180);
                    /* WARNING: Could not recover jumptable at 0x000102773a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027750a0; end: 1027750a3; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate commonLoggingParams] */

void FUN_1027750a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1027750a4; end: 1027750a7; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate uiContainer] */

void FUN_1027750a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1027750a8; end: 1027750bb; -[_TtC38MemTwoOperaContextPluginImplementationP33_7C057B2D1EBA0E9D646D548C7280525425SpotlightSendFlowDelegate lensAssetUploadInfo] */

void FUN_1027750a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1027750bc; end: 102775107;  */

void FUN_1027750bc(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027751f8,param_1);
  return;
}



/* Entry: 102775108; end: 1027751f7;  */

void FUN_102775108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar2 = param_2;
  FUN_1027758c0();
  puVar3 = puVar2;
  func_0x000107c613fc();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar5 = param_2;
  func_0x000107c6157c();
  func_0x000103bb57b8();
  puVar6 = (undefined8 *)puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 **)(lVar4 + 0x28) = puVar6;
  func_0x000107c61434();
  func_0x000103bb447c();
  uVar1 = puVar6[1];
  *(undefined8 *)(lVar4 + 0x30) = *puVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  func_0x000107c61434();
  lVar7 = lVar4;
  func_0x000100111634();
  func_0x000107c61588(lVar4);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,PTR___sSSN_11034da80);
  puVar3[2] = lVar7;
  puVar3[3] = param_2;
  param_1[3] = puVar2;
  param_1[4] = &PTR_DAT_110546578;
  *param_1 = puVar3;
  return;
}



/* Entry: 1027751f8; end: 1027751ff;  */

void FUN_1027751f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  
  puVar2 = unaff_x20;
  FUN_1027758c0();
  puVar3 = puVar2;
  func_0x000107c613fc();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar5 = unaff_x20;
  func_0x000107c6157c();
  func_0x000103bb57b8();
  puVar6 = (undefined8 *)puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 **)(lVar4 + 0x28) = puVar6;
  func_0x000107c61434();
  func_0x000103bb447c();
  uVar1 = puVar6[1];
  *(undefined8 *)(lVar4 + 0x30) = *puVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar1;
  func_0x000107c61434();
  lVar7 = lVar4;
  func_0x000100111634();
  func_0x000107c61588(lVar4);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,PTR___sSSN_11034da80);
  puVar3[2] = lVar7;
  puVar3[3] = unaff_x20;
  param_1[3] = puVar2;
  param_1[4] = &PTR_DAT_110546578;
  *param_1 = puVar3;
  return;
}



/* Entry: 102775200; end: 1027752cb;  */

long FUN_102775200(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb57b8();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb447c();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000107c61408(puVar2 + 4,2,PTR___sSSN_11034da80);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 1027752cc; end: 10277533b;  */

void FUN_1027752cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277533c,uVar1,uVar2);
  return;
}



/* Entry: 10277533c; end: 1027753c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277533c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x28);
  plVar5 = (long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ebd9d0);
  lVar1 = *plVar5;
  lVar3 = plVar5[1];
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1027753c4;
  lVar2 = *(long *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  plVar5[7] = 0;
  plVar5[8] = lVar6;
  plVar5[5] = lVar3;
  plVar5[6] = lVar7;
  plVar5[3] = lVar4;
  plVar5[4] = lVar1;
  plVar5[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787c30,0,0);
  return;
}



/* Entry: 1027753c4; end: 10277541b;  */

void FUN_1027753c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10277541c;
  }
  else {
    pcVar1 = (code *)0x10277544c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 10277541c; end: 1027754b3;  */

void FUN_10277541c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000102775448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027754b4; end: 1027754bf;  */

void FUN_1027754b4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1027754c0; end: 1027754e3;  */

void FUN_1027754c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1027755b4(param_1,param_2,param_4);
  return;
}



/* Entry: 1027754e4; end: 1027754f7;  */

bool FUN_1027754e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1027754f8; end: 1027755a3;  */

void FUN_1027754f8(void)

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



/* Entry: 1027755a4; end: 1027755b3;  */

void FUN_1027755a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1027755b4; end: 1027758af;  */

void FUN_1027755b4(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long alStack_90 [6];
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar9 = uVar1;
    func_0x000100029284(lVar2);
    if ((uVar9 & 1) == 0) {
      func_0x000107c6142c(param_3);
      alStack_90[1] = 0;
      alStack_90[0] = 0;
      alStack_90[3] = 0;
      alStack_90[2] = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar2 * 0x20,alStack_90);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (alStack_90[3] != 0) {
        plVar8 = &lStack_60;
        func_0x000107c6147c(plVar8,alStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar8 & 1) != 0) {
          func_0x000100083b20(alStack_90);
          lVar2 = alStack_90[3];
          func_0x0001000a8868(alStack_90,alStack_90[3]);
          lVar3 = lStack_60;
          uVar10 = uStack_58;
          (**(code **)(alStack_90[4] + 0x20))(lStack_60,uStack_58,lVar2,alStack_90[4]);
          func_0x000107c6142c(uStack_58);
          plVar8 = alStack_90;
          if (lVar3 != 0) {
            func_0x0001000834e4();
            FUN_102787314();
            plVar4 = plVar8;
            func_0x000107c41214();
            func_0x000107c61180();
            func_0x000107c61170();
            if (plVar4 == (long *)0x0) {
              func_0x0001027758e0();
              func_0x000107c613f8(&UNK_110546658,plVar8,0,0);
              *(undefined1 *)plVar8 = 1;
              func_0x000107c61654();
            }
            else {
              plVar8 = plVar4;
              func_0x000107c5ee30();
              uVar7 = uVar10;
              func_0x000107c61170(plVar4);
              puVar5 = PTR_PTR_1126c81d8;
              func_0x000107c610f8();
              func_0x000107c453e4();
              puVar6 = PTR_PTR_1133bb5a0;
              func_0x000107c5faec(PTR_PTR_1133bb5a0);
              func_0x000107c5fadc();
              func_0x000107c6142c(uVar7);
              func_0x000107c576ec(puVar5);
              func_0x000107c61170(puVar6);
              puVar6 = &UNK_1105465c0;
              func_0x000107c613fc(&UNK_1105465c0,0x30,7);
              *(long *)(puVar6 + 0x10) = lVar3;
              *(long **)(puVar6 + 0x18) = plVar8;
              *(undefined8 *)(puVar6 + 0x20) = uVar10;
              *(undefined **)(puVar6 + 0x28) = puVar5;
              func_0x000107c61174(lVar3);
              func_0x00010006c00c(plVar8,uVar10);
              func_0x000107c61174(puVar5);
              uVar7 = 0xc1;
              func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad71e8,puVar6,PTR___sytN_11034f1b0 + 8);
              func_0x000107c61170(puVar5);
              func_0x000107c61574(puVar6);
              func_0x000107c61574(uVar7);
              func_0x00010006c090(plVar8,uVar10);
            }
            func_0x000107c61170(lVar3);
            return;
          }
          func_0x0001000834e4();
        }
        goto LAB_102775820;
      }
    }
  }
  plVar8 = alStack_90;
  func_0x00010006e7f4();
LAB_102775820:
  func_0x0001027758e0();
  func_0x000107c613f8(&UNK_110546658,plVar8,0,0);
  *(undefined1 *)plVar8 = 0;
  func_0x000107c61654();
  return;
}



/* Entry: 1027758b0; end: 1027758bf;  */

undefined1  [16] FUN_1027758b0(void)

{
  return ZEXT816(0x1105465a0);
}



/* Entry: 1027758c0; end: 10277591f;  */

void FUN_1027758c0(void)

{
  func_0x000107c61168(&PTR_PTR_112ebcee8);
  return;
}



/* Entry: 102775920; end: 102775997;  */

void FUN_102775920(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102775998;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[7] = lVar3;
  plVar5[8] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277533c,lVar3,lVar4);
  return;
}



/* Entry: 102775998; end: 1027759d3;  */

void FUN_102775998(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027759d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027759d4; end: 102775b3b;  */

int FUN_1027759d4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102775a50;
        goto LAB_102775a34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102775a34:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102775a50:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102775b3c; end: 102775b7b;  */

void FUN_102775b3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebcf58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad7258;
  func_0x000107c61520(&UNK_10dad7258,&UNK_110546658);
  puRam0000000112ebcf58 = puVar1;
  return;
}



/* Entry: 102775b7c; end: 102775c9f;  */

void FUN_102775b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  puVar1 = &UNK_1105466e0;
  func_0x000107c613fc(&UNK_1105466e0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102775ca0,puVar1);
  return;
}



/* Entry: 102775ca0; end: 102775cab;  */

void FUN_102775ca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = uVar1;
  FUN_1027768f8();
  uVar4 = uVar3;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  FUN_102775d00(uVar1,uVar2,uVar5);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_1105466f8;
  *param_1 = uVar4;
  return;
}



/* Entry: 102775cac; end: 102775cff;  */

undefined8 FUN_102775cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102775d00(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102775d00; end: 102775dcb;  */

void FUN_102775d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb485c();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb4894();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000107c61408(puVar2 + 4,2,PTR___sSSN_11034da80);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 102775dcc; end: 102775e07;  */

void FUN_102775dcc(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102775e08; end: 102775e13;  */

void FUN_102775e08(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102744158; end: 1027441f3;  */

void FUN_102744158(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001027441f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027441f4; end: 10274423f;  */

long FUN_1027441f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c5ee20();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 102744240; end: 10274425b;  */

void FUN_102744240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274425c,0,0);
  return;
}



/* Entry: 10274425c; end: 10274430b;  */

void FUN_10274425c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  (*pcVar1)(uVar2,uVar3);
  uVar3 = uVar2;
  func_0x000103edf4f0();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  func_0x000107c61170(uVar2);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10274430c;
                    /* WARNING: Could not recover jumptable at 0x000102744308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 10274430c; end: 10274435f;  */

void FUN_10274430c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744360,0,0);
  return;
}



/* Entry: 102744360; end: 1027443fb;  */

void FUN_102744360(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x60) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001027443f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027443fc; end: 102744413;  */

void FUN_1027443fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744414,0,0);
  return;
}



/* Entry: 102744414; end: 1027444af;  */

void FUN_102744414(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x30);
  uVar2 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  (*pcVar1)();
  uVar3 = uVar2;
  func_0x000103edf4f0();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  func_0x000107c61170(uVar2);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1027444b0;
                    /* WARNING: Could not recover jumptable at 0x0001027444ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 1027444b0; end: 102744503;  */

void FUN_1027444b0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x50) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744504,0,0);
  return;
}



/* Entry: 102744504; end: 10274459f;  */

void FUN_102744504(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010274459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027445a0; end: 1027445b7;  */

void FUN_1027445a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027445b8,0,0);
  return;
}



/* Entry: 1027445b8; end: 102744653;  */

void FUN_1027445b8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x18);
  uVar2 = 0x112d3bf00;
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  (*pcVar1)();
  uVar3 = uVar2;
  func_0x000103edf20c();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  func_0x000107c61170(uVar2);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102744654;
                    /* WARNING: Could not recover jumptable at 0x000102744650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101bb444c)();
  return;
}



/* Entry: 102744654; end: 1027446a7;  */

void FUN_102744654(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027446a8,0,0);
  return;
}



/* Entry: 1027446a8; end: 10274476b;  */

void FUN_1027446a8(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    uVar3 = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    uVar3 = uVar4;
    func_0x000107c3ebcc(uVar4);
    func_0x000100d03708(uVar4,cVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102744768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}



/* Entry: 10274476c; end: 102744787;  */

void FUN_10274476c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined1 *)(unaff_x22 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744788,0,0);
  return;
}



/* Entry: 102744788; end: 10274482f;  */

void FUN_102744788(void)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x18);
  uVar4 = (ulong)*(byte *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  (*pcVar1)();
  uVar2 = uVar4;
  func_0x000103edf20c();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  func_0x000107c61170(uVar4);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102744830;
                    /* WARNING: Could not recover jumptable at 0x00010274482c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101bb444c)();
  return;
}



/* Entry: 102744830; end: 102744883;  */

void FUN_102744830(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x41) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744884,0,0);
  return;
}



/* Entry: 102744884; end: 102744947;  */

void FUN_102744884(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x41);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (cVar1 == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    uVar3 = 0;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    uVar3 = uVar4;
    func_0x000107c3ebcc(uVar4);
    func_0x000100d03708(uVar4,cVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102744944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar3);
  return;
}



/* Entry: 102744948; end: 1027449bb;  */

void FUN_102744948(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027449bc; end: 102744a1b;  */

void FUN_1027449bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102744a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102744a1c; end: 102744a7b;  */

void FUN_102744a1c(void)

{
  func_0x000107c61168(&PTR_PTR_112ebbb50);
  return;
}



/* Entry: 102744a7c; end: 102744a8b;  */

void FUN_102744a7c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102744a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102744a8c; end: 102744b27;  */

void FUN_102744a8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102746240,0,0);
  return;
}



/* Entry: 102744b28; end: 102744c4b;  */

undefined * FUN_102744b28(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102744c4c);
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
    FUN_102744c4c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
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
    func_0x000102788508(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102744c4c; end: 102744ca7;  */

void FUN_102744c4c(void)

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
    func_0x000102788508();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ebbbd8;
  plVar5 = (long *)&UNK_10dad4a90;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102744ca8; end: 102744d8b;  */

code * FUN_102744ca8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c3f00c();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c4da60();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    pcVar4 = (code *)0x0;
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5cb2c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x0001000b637c(lVar3);
    func_0x000107c61170(lVar3);
    pcVar4 = FUN_102743d9c;
    func_0x0001000bfde0(FUN_102743d9c,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c60bd0(lVar1);
  }
  return pcVar4;
}



/* Entry: 102744d8c; end: 102744ee7;  */

void FUN_102744d8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x000107c3f00c();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c5d4d4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar4 == 0) {
    if (param_3 == 0) {
      FUN_102744ca8(param_1);
    }
    else {
      lVar4 = 0;
      func_0x00010274690c();
      func_0x000107c613fc();
      func_0x00010006a340(0);
      func_0x000107c613fc();
      lVar1 = param_3;
      func_0x000107c61434();
      func_0x00010006a360();
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(long *)(lVar4 + 0x18) = param_3;
      *(long *)(lVar4 + 0x20) = lVar1;
      *(undefined8 *)(lVar4 + 0x10) = param_2;
      func_0x0001000285a8(0x112dc70e0,&UNK_10d9878b0);
      func_0x000107c613fc();
      func_0x000107c6157c(lVar4);
      func_0x0001000b64ac(FUN_102746160,lVar4);
    }
  }
  else {
    puVar2 = &UNK_110543070;
    func_0x000107c613fc(&UNK_110543070,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar4;
    puVar3 = &UNK_110543098;
    func_0x000107c613fc(&UNK_110543098,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1027461b8;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    FUN_102744ca8(param_1);
  }
  return;
}



/* Entry: 102744ee8; end: 10274564f;  */

undefined * FUN_102744ee8(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x21;
  undefined *puStack_110;
  undefined *puStack_108;
  
  puVar1 = param_1;
  lVar10 = param_2;
  func_0x000107c5b198();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  puVar3 = puVar2;
  func_0x0001010282b0(puVar2,lVar10);
  func_0x00010006c090(puVar2,lVar10);
  if (unaff_x21 != 0) {
    return puVar1;
  }
  puVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_isPrivate_1125fc6a0);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = param_1;
    func_0x000107c4a274();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c3ebcc();
      func_0x000107c61170(puVar1);
    }
  }
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  lVar10 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar11);
  puVar1 = puVar3;
  (**(code **)(lVar10 + 0x10))();
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  puVar2 = param_1;
  uVar12 = uVar11;
  lVar14 = lVar10;
  FUN_102744d8c();
  puVar4 = param_1;
  uVar13 = uVar12;
  func_0x000107c44fcc();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5faec();
  func_0x000107c61170(puVar4);
  puVar4 = param_1;
  puStack_110 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_snapId_11266deb0);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = param_1;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puStack_108 = puVar4;
      func_0x000107c5faec();
      func_0x000107c61170(puVar4);
      goto LAB_1027450b4;
    }
  }
  puStack_110 = (undefined *)0x0;
  puStack_108 = (undefined *)0x0;
LAB_1027450b4:
  puVar4 = param_1;
  puVar8 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_thumbnailData_1126790a8);
  func_0x000107c6157c(puVar2);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = param_1;
    func_0x000107c5c924();
    func_0x000107c61180();
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      func_0x000107c5faec();
      func_0x000107c61170(puVar6);
      puVar6 = puVar4;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar6);
        func_0x000107c5ee24(0,puVar7,puVar8);
        func_0x00010006c090(puVar7,puVar8);
      }
      puVar6 = puVar4;
      func_0x000107c4a804();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c61170(puVar4);
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar6);
        func_0x000107c5ee24(0,puVar7,puVar8);
        func_0x000107c61170(puVar4);
        func_0x00010006c090(puVar7,puVar8);
      }
    }
  }
  puVar4 = param_1;
  func_0x000107c3f00c();
  func_0x000107c61180();
  puVar8 = puVar4;
  func_0x000107c5cb68();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c60bd0(puVar8);
  }
  FUN_102745ea0(uVar12,lVar14);
  puVar4 = param_1;
  func_0x000107c3f00c();
  func_0x000107c61180();
  puVar8 = puVar4;
  func_0x000107c4ab2c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar8 != (undefined *)0x0) {
    puVar4 = &UNK_110543020;
    func_0x000107c613fc(&UNK_110543020,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar8;
    puVar8 = &UNK_110543048;
    func_0x000107c613fc(&UNK_110543048,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_1027460c0;
    *(undefined **)(puVar8 + 0x18) = puVar4;
  }
  puVar4 = param_1;
  func_0x000107c3f00c();
  func_0x000107c61180();
  puVar8 = puVar4;
  func_0x000107c4ab78();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar8 != (undefined *)0x0) {
    puVar4 = &UNK_110542fd0;
    func_0x000107c613fc(&UNK_110542fd0,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar8;
    puVar8 = &UNK_110542ff8;
    func_0x000107c613fc(&UNK_110542ff8,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_102746050;
    *(undefined **)(puVar8 + 0x18) = puVar4;
  }
  puVar4 = param_1;
  func_0x000107c3f00c();
  func_0x000107c61180();
  puVar8 = puVar4;
  func_0x000107c4ab20();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar8 != (undefined *)0x0) {
    puVar4 = &UNK_110542f80;
    func_0x000107c613fc(&UNK_110542f80,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar8;
    puVar8 = &UNK_110542fa8;
    func_0x000107c613fc(&UNK_110542fa8,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_102745fe0;
    *(undefined **)(puVar8 + 0x18) = puVar4;
  }
  puVar4 = param_1;
  func_0x000107c3f00c();
  func_0x000107c61180();
  puVar8 = puVar4;
  func_0x000107c445e4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar8 != (undefined *)0x0) {
    puVar4 = &UNK_110542f30;
    func_0x000107c613fc(&UNK_110542f30,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar8;
    puVar8 = &UNK_110542f58;
    func_0x000107c613fc(&UNK_110542f58,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x10274624c;
    *(undefined **)(puVar8 + 0x18) = puVar4;
  }
  puVar4 = param_1;
  func_0x000107c3f00c();
  func_0x000107c61180();
  puVar8 = puVar4;
  func_0x000107c5cb68();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar8 != (undefined *)0x0) {
    puVar4 = &UNK_110542ee0;
    func_0x000107c613fc(&UNK_110542ee0,0x18,7);
    *(undefined **)(puVar4 + 0x10) = puVar8;
    puVar8 = &UNK_110542f08;
    func_0x000107c613fc(&UNK_110542f08,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x102746250;
    *(undefined **)(puVar8 + 0x18) = puVar4;
  }
  func_0x000107c3f00c();
  func_0x000107c61180();
  puVar4 = param_1;
  func_0x000107c4dc48();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar4 != (undefined *)0x0) {
    puVar8 = &UNK_110542e90;
    func_0x000107c613fc(&UNK_110542e90,0x18,7);
    *(undefined **)(puVar8 + 0x10) = puVar4;
    puVar4 = &UNK_110542eb8;
    func_0x000107c613fc(&UNK_110542eb8,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x102745ec0;
    *(undefined **)(puVar4 + 0x18) = puVar8;
  }
  uVar9 = 0;
  func_0x000102788508(0);
  func_0x000107c610f8();
  func_0x0001027875f8(uVar9,puVar5,uVar13,puStack_108,puStack_110,puVar3,puVar2,uVar11,lVar10,
                      ((ulong)puVar1 & 0xff) == 1 && lVar10 != 0);
  func_0x000107c61574(puVar2);
  func_0x000102745eb0(uVar12,lVar14);
  return puVar5;
}



/* Entry: 102745650; end: 102745667;  */

void FUN_102745650(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102745668,0,0);
  return;
}



/* Entry: 102745668; end: 10274574f;  */

void FUN_102745668(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xd0);
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  func_0x000107c3f00c();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c441ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c61180();
  func_0x000107c60bd0(lVar1);
  lVar1 = lVar3;
  func_0x000103edf20c();
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  func_0x000107c61170(lVar3);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102745750;
                    /* WARNING: Could not recover jumptable at 0x00010274574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101bb468c)();
  return;
}



/* Entry: 102745750; end: 1027457a3;  */

void FUN_102745750(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xf0) = param_1;
  *(undefined1 *)(lVar1 + 0xf8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027457a4,0,0);
  return;
}



/* Entry: 1027457a4; end: 102745e1f;  */

void FUN_1027457a4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x22;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_80;
  long lStack_78;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  if (*(char *)(unaff_x22 + 0xf8) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar11;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    if (iVar3 != 0) {
      uVar17 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xc0,uVar17,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar11);
LAB_102745df8:
                    /* WARNING: Could not recover jumptable at 0x000102745e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar10 = *(undefined **)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c4dec8();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1133ba638;
  puVar20 = puVar10;
  func_0x000107c5faec();
  lVar16 = param_2;
  func_0x000107c5faec();
  if (puVar20 == puVar4 && param_2 == lVar16) {
    puVar20 = (undefined *)0x1;
  }
  else {
    func_0x000107c605b8(puVar20,param_2,puVar4,lVar16,0);
  }
  func_0x000107c61170(puVar10);
  func_0x000107c6142c(lVar16);
  func_0x000107c6142c(param_2);
  uVar17 = uVar11;
  func_0x000107c40808();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61174(uVar11);
  func_0x000102744b0c(0,0,0);
  lVar16 = 0x112ebbbb8;
  func_0x0001000285a8(0x112ebbbb8,&UNK_10dad49f0);
  uVar5 = *(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000107c600f4(uVar5);
  iVar3 = *(int *)(lVar16 + 0x24);
  *(undefined8 *)(uVar5 + (long)iVar3) = 0;
  uVar6 = 0;
  func_0x000107c5ed50();
  uVar11 = uVar6;
  func_0x000100e15a08();
  func_0x000107c601c0(unaff_x22 + 0x80,uVar6,uVar11);
  if (*(long *)(unaff_x22 + 0x98) != 0) {
    lVar16 = 0;
    if (((ulong)puVar20 & 1) == 0) {
      uVar17 = 0;
    }
    do {
      func_0x000100102924(unaff_x22 + 0x80,unaff_x22 + 0x60);
      *(long *)(unaff_x22 + 0x38) = lVar16;
      func_0x000100102924(unaff_x22 + 0x60,unaff_x22 + 0x40);
      if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102745e20);
        (*pcVar2)();
      }
      *(long *)(uVar5 + (long)iVar3) = lVar16 + 1;
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x58);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x10);
      func_0x0001000bb420(unaff_x22 + 0x18,unaff_x22 + 0xa0);
      uVar19 = 0x112ebbbc0;
      func_0x0001000285a8(0x112ebbbc0,&UNK_10dad4a00);
      lVar9 = unaff_x22 + 200;
      func_0x000107c6147c(lVar9,unaff_x22 + 0xa0,PTR___sypN_11034f1a8 + 8,uVar19,6);
      if ((int)lVar9 == 0) {
        FUN_102745e20();
        func_0x000107c613f8(&UNK_110547d58,lVar9,0,0);
        func_0x0001000bb420(unaff_x22 + 0x18);
        func_0x000107c61654();
        uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar18 = *(undefined1 *)(unaff_x22 + 0xf8);
        func_0x000100d03708(uVar11,uVar18);
        func_0x000100d03708(uVar11,uVar18);
        FUN_102745e60(unaff_x22 + 0x10,0x112ebbbd0,&UNK_10dad4a08);
        FUN_102745e60(uVar5,0x112ebbbb8,&UNK_10dad49f0);
        func_0x000107c61574(puVar4);
        func_0x000107c615c0(uVar5);
        goto LAB_102745df8;
      }
      uVar19 = *(undefined8 *)(unaff_x22 + 200);
      if (((ulong)puVar20 & 1) == 0) {
        uVar12 = 0;
      }
      uVar7 = uVar19;
      FUN_102744ee8(uVar19,*(undefined8 *)(unaff_x22 + 0xd8),uVar12,uVar17,
                    ((uint)puVar20 ^ 0xffffffff) & 1);
      func_0x000107c615e8(uVar19);
      FUN_102745e60(unaff_x22 + 0x10,0x112ebbbd0,&UNK_10dad4a08);
      uVar8 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar8) {
        func_0x000102744b0c(1 < *(ulong *)(puVar4 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar8 + 1;
      *(undefined8 *)(puVar4 + uVar8 * 8 + 0x20) = uVar7;
      func_0x000107c601c0(unaff_x22 + 0x80,uVar6,uVar11);
      lVar16 = lVar16 + 1;
    } while (*(long *)(unaff_x22 + 0x98) != 0);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar13 = *(ulong *)(unaff_x22 + 0xd0);
  uVar15 = (ulong)*(byte *)(unaff_x22 + 0xf8);
  FUN_102745e60(uVar5,0x112ebbbb8,&UNK_10dad49f0);
  FUN_102745e60(unaff_x22 + 0x80,0x112d387f8,&UNK_10d902650);
  func_0x000100d03708(uVar11,uVar15);
  func_0x000107c615c0(uVar5);
  uVar5 = uVar13;
  func_0x000107c44fcc(uVar13);
  func_0x000107c61180();
  uVar8 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  uVar5 = uVar13;
  func_0x000107c4dec8();
  func_0x000107c61180();
  puStack_80 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_storyId_112674158);
  puVar20 = puStack_80;
  if ((uVar13 & 1) == 0) {
LAB_102745b98:
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
  }
  else {
    lVar16 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c5bfec();
    func_0x000107c61180();
    puVar20 = puStack_80;
    if (lVar16 == 0) goto LAB_102745b98;
    lStack_78 = lVar16;
    func_0x000107c5faec();
    puVar20 = puStack_80;
    func_0x000107c61170(lVar16);
  }
  lVar9 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c4e940();
  func_0x000107c61180();
  lVar16 = lVar9;
  func_0x000107c5cab0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar16 == 0) {
    lVar9 = 0;
    puVar20 = (undefined *)0x0;
  }
  else {
    lVar9 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
  }
  uVar13 = *(ulong *)(unaff_x22 + 0xd0);
  puStack_a0 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_subtitle_112675d98);
  if ((uVar13 & 1) == 0) {
LAB_102745c34:
    puStack_a0 = (undefined *)0x0;
    lStack_98 = 0;
  }
  else {
    lVar16 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c5c38c();
    func_0x000107c61180();
    if (lVar16 == 0) goto LAB_102745c34;
    lStack_98 = lVar16;
    func_0x000107c5faec();
    func_0x000107c61170(lVar16);
  }
  uVar13 = *(ulong *)(unaff_x22 + 0xd0);
  func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_storyType_1126747f0);
  if ((uVar13 & 1) != 0) {
    lVar16 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c5c080();
    func_0x000107c61180();
    if (lVar16 != 0) {
      lVar14 = lVar16;
      func_0x000107c49820();
      func_0x000107c61170(lVar16);
      uVar18 = 0;
      goto LAB_102745c90;
    }
  }
  lVar14 = 0;
  uVar18 = 1;
LAB_102745c90:
  uVar13 = *(ulong *)(unaff_x22 + 0xd0);
  func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_firstPlaylistItemId_1125ca048
                     );
  if ((uVar13 & 1) != 0) {
    lVar16 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c43640();
    func_0x000107c61180();
    if (lVar16 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(lVar16);
    }
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xf8);
  uVar11 = 0;
  FUN_102787194(0);
  func_0x000107c610f8();
  func_0x000102786f34(uVar11,uVar8,uVar15,puVar4,uVar5,lStack_78,puStack_80,lVar9,puVar20,lStack_98,
                      puStack_a0,lVar14,uVar18);
  func_0x000100d03708(uVar17,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102745d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 102745e20; end: 102745e5f;  */

void FUN_102745e20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad88a8;
  func_0x000107c61520(&UNK_10dad88a8,&UNK_110547d58);
  puRam0000000112ebbbc8 = puVar1;
  return;
}



/* Entry: 102745e60; end: 102745e9f;  */

undefined8 FUN_102745e60(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102745ea0; end: 102745ecb;  */

void FUN_102745ea0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102745ecc; end: 102745eeb;  */

void FUN_102745ecc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102745eec; end: 102745f4b;  */

void FUN_102745eec(undefined1 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102745f4c;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
  *(undefined1 *)(plVar3 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744788,0,0);
  return;
}



/* Entry: 102745f4c; end: 102745f8f;  */

void FUN_102745f4c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102745f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102745f90; end: 102745fdf;  */

void FUN_102745f90(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102746248;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027445b8,0,0);
  return;
}



/* Entry: 102745fe0; end: 102745fff;  */

void FUN_102745fe0(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102746000; end: 10274604f;  */

void FUN_102746000(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102746254;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102744414,0,0);
  return;
}



/* Entry: 102746050; end: 102746057;  */

long FUN_102746050(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ee20();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 102746058; end: 1027460bf;  */

void FUN_102746058(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102746258;
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
  plVar3[6] = param_1;
  plVar3[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274425c,0,0);
  return;
}



/* Entry: 1027460c0; end: 1027460c7;  */

long FUN_1027460c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ee20();
  func_0x000107c5fadc(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_5,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return lVar1;
}



/* Entry: 1027460c8; end: 10274615f;  */

void FUN_1027460c8(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10274625c;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
  plVar3[10] = param_5;
  plVar3[0xb] = param_6;
  plVar3[8] = param_3;
  plVar3[9] = param_4;
  plVar3[6] = param_1;
  plVar3[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274402c,0,0);
  return;
}



/* Entry: 102746160; end: 102746167;  */

void FUN_102746160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112ebbc90,&UNK_10dad4af0);
  func_0x000100087bd4(&lStack_40,FUN_102746c54);
  if (lStack_40 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    func_0x000107c61170();
    uVar1 = 0x112ebbca0;
    lStack_40 = param_1;
    func_0x0001000285a8(0x112ebbca0,&UNK_10dad4af8);
    uVar2 = uVar1;
    FUN_102746a1c();
    func_0x00010042e924(&lStack_40,uVar1,uVar2);
    func_0x000107c61574(uStack_38);
  }
  return;
}



/* Entry: 102746168; end: 1027461b7;  */

void FUN_102746168(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102746260;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_102743d60;
  plVar1[0x12] = unaff_x20;
  *(undefined1 *)(plVar1 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102746284,0,0);
  return;
}



/* Entry: 1027461b8; end: 1027461df;  */

void FUN_1027461b8(uint param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1027461e0; end: 10274623f;  */

void FUN_1027461e0(undefined1 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102746264;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
  *(undefined1 *)(plVar3 + 10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102743de0,0,0);
  return;
}



/* Entry: 102746240; end: 102746283;  */

void FUN_102746240(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102744a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102746284; end: 102746453;  */

void FUN_102746284(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = 0x112ebbc90;
  func_0x0001000285a8(0x112ebbc90,&UNK_10dad4af0);
  uVar2 = 0x102746958;
  func_0x000100087bd4(unaff_x22 + 0x50,0x102746958,uVar6,uVar8);
  lVar7 = *(long *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x50);
  if (lVar7 != 0) {
    uVar1 = *(undefined1 *)(unaff_x22 + 0xc0);
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x000107c61168();
    func_0x000107c5aa1c();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0xa8) = puVar3;
    puVar4 = &UNK_1105430c8;
    func_0x000107c613fc(&UNK_1105430c8,0x19,7);
    *(long *)(puVar4 + 0x10) = lVar7;
    puVar4[0x18] = uVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_1027469b0;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105430e0;
    lVar5 = unaff_x22 + 0x50;
    func_0x000107c60bc4();
    *(long *)(unaff_x22 + 0xb0) = lVar5;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61174(lVar7);
    func_0x000107c61574(uVar8);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102746454;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,1);
    uVar8 = 0x112d61d38;
    func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
    *(undefined **)(unaff_x22 + 0x50) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1027466c4;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110543108;
    *(long *)(unaff_x22 + 0x70) = lVar7;
    func_0x000107c4e558(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000102746970();
  func_0x000107c613f8(&UNK_1105431b0,uVar2,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102746450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102746454; end: 1027464ab;  */

void FUN_102746454(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1027464ac;
  }
  else {
    pcVar1 = FUN_102746518;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027464ac; end: 102746517;  */

void FUN_1027464ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined1 *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c60bd0(uVar2);
  *(undefined1 *)(unaff_x22 + 0x50) = uVar4;
  func_0x0001007d6d78();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102746514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102746518; end: 102746583;  */

void FUN_102746518(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61654();
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c60bd0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102746580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102746584; end: 102746677;  */

void FUN_102746584(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0x112ebbc90;
  func_0x0001000285a8(0x112ebbc90,&UNK_10dad4af0);
  func_0x000100087bd4(&lStack_40,FUN_102746c54,param_2,uVar1);
  if (lStack_40 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    func_0x000107c61170();
    uVar1 = 0x112ebbca0;
    lStack_40 = param_1;
    func_0x0001000285a8(0x112ebbca0,&UNK_10dad4af8);
    uVar2 = uVar1;
    FUN_102746a1c();
    func_0x00010042e924(&lStack_40,uVar1,uVar2);
    func_0x000107c61574(uStack_38);
  }
  return;
}



/* Entry: 102746678; end: 1027466c3;  */

void FUN_102746678(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948);
  func_0x000107c3f79c();
  func_0x000107c61180();
  func_0x000107c548bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1027466c4; end: 10274675b;  */

void FUN_1027466c4(long param_1,int param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(param_1 + 0x20);
  func_0x0001006732c8(puVar2,*(undefined8 *)(param_1 + 0x38));
  uVar5 = *puVar2;
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(uVar5);
    return;
  }
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar4 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar4 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar5,uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10274675c);
  (*pcVar1)();
}



/* Entry: 10274675c; end: 1027468d7;  */

void FUN_10274675c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 uStack_51;
  
  lVar1 = *(long *)(param_2 + 0x28);
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168();
    lVar6 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar6 + 0x28) = uVar3;
    func_0x000107c61434();
    lVar7 = lVar6;
    func_0x000107c5fc48(lVar6,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar6);
    func_0x000107c42fcc();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar8 = puVar5;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar8 == (undefined *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar5 = puVar8;
      func_0x000107c49d58();
      uStack_51 = SUB81(puVar5,0);
      func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
      func_0x000107c613fc();
      puVar9 = &uStack_51;
      func_0x00010042e6a0();
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      *(undefined **)(param_2 + 0x28) = puVar8;
      *(undefined1 **)(param_2 + 0x30) = puVar9;
      func_0x000107c61174(puVar8);
      func_0x000107c6157c(puVar9);
      FUN_10274692c(uVar3,uVar4);
      *param_1 = (long)puVar8;
      param_1[1] = (long)puVar9;
    }
  }
  else {
    *param_1 = lVar1;
    param_1[1] = lVar2;
  }
  FUN_1027469f0(lVar1,lVar2);
  return;
}



/* Entry: 1027468d8; end: 10274692b;  */

void FUN_1027468d8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10274692c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10274692c; end: 102746957;  */

void FUN_10274692c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102746958; end: 1027469af;  */

void FUN_102746958(void)

{
  FUN_10274675c();
  return;
}



/* Entry: 1027469b0; end: 1027469ef;  */

void FUN_1027469b0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948);
  func_0x000107c3f79c();
  func_0x000107c61180();
  func_0x000107c548bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1027469f0; end: 102746a1b;  */

void FUN_1027469f0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 102746a1c; end: 102746a6b;  */

void FUN_102746a1c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ebbca8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ebbca0;
  func_0x00010002969c(0x112ebbca0,&UNK_10dad4af8);
  puVar2 = &DAT_10dd3c860;
  func_0x000107c61520(&DAT_10dd3c860,uVar1);
  puRam0000000112ebbca8 = puVar2;
  return;
}



/* Entry: 102746a6c; end: 102746b5b;  */

uint FUN_102746a6c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102746b5c; end: 102746b9b;  */

void FUN_102746b5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbcb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4b6c;
  func_0x000107c61520(&UNK_10dad4b6c,&UNK_1105431b0);
  puRam0000000112ebbcb0 = puVar1;
  return;
}



/* Entry: 102746b9c; end: 102746ba3;  */

undefined8 FUN_102746b9c(void)

{
  return 1;
}



/* Entry: 102746ba4; end: 102746c43;  */

void FUN_102746ba4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102746c44; end: 102746c53;  */

void FUN_102746c44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102746c54; end: 102746c67;  */

void FUN_102746c54(void)

{
  FUN_102746958();
  return;
}



/* Entry: 102746c68; end: 102746d0b;  */

void FUN_102746c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebbcb8,&UNK_10dad4be0);
  puVar1 = &UNK_1105432d8;
  func_0x000107c613fc(&UNK_1105432d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102746d0c,puVar1);
  return;
}



/* Entry: 102746d0c; end: 102746e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102746d0c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  long unaff_x20;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  
  puVar5 = auStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_102748718();
  lVar4 = param_2;
  func_0x000107c610f8();
  lVar3 = _DAT_112ebbcc0;
  lStack_70 = 0;
  lStack_68 = 0;
  FUN_10274719c(&lStack_70,auStack_80);
  func_0x0001000285a8(0x112ebbcd0,&UNK_10dad4bf0);
  func_0x000107c613fc();
  func_0x00010006c248();
  func_0x0001027471ec(&lStack_70);
  *(undefined1 **)(lVar4 + lVar3) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112ebbcd8) = uVar6;
  func_0x000107c6157c(uVar6);
  uVar6 = 0x112ebbce0;
  func_0x0001000285a8(0x112ebbce0,&UNK_10dad4bf8);
  pcVar7 = FUN_102747234;
  func_0x00010072927c(FUN_102747234,0,uVar6);
  *(code **)(lVar4 + _DAT_112ebbce8) = pcVar7;
  uVar6 = 0x112ebbcf0;
  func_0x0001000285a8(0x112ebbcf0,&UNK_10dad4c00);
  pcVar7 = FUN_102747240;
  func_0x00010072927c(FUN_102747240,0,uVar6);
  *(code **)(lVar4 + _DAT_112ebbcf8) = pcVar7;
  *(undefined8 *)(lVar4 + _DAT_112ebbd00) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = param_2;
  func_0x000107c6157c(uVar1);
  plVar8 = &lStack_70;
  func_0x000107c61154(plVar8,puVar2);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 102746e70; end: 102746fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102746e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = auStack_80;
  func_0x000107c610f8();
  lVar1 = _DAT_112ebbcc0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10274719c(&uStack_60,auStack_70);
  func_0x0001000285a8(0x112ebbcd0,&UNK_10dad4bf0);
  func_0x000107c613fc();
  puVar2 = auStack_70;
  func_0x00010006c248();
  func_0x0001027471ec(&uStack_60);
  *(undefined1 **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebbcd8) = param_2;
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ebbce0;
  func_0x0001000285a8(0x112ebbce0,&UNK_10dad4bf8);
  pcVar4 = FUN_102747234;
  func_0x00010072927c(FUN_102747234,0,uVar3);
  *(code **)(unaff_x20 + _DAT_112ebbce8) = pcVar4;
  uVar3 = 0x112ebbcf0;
  func_0x0001000285a8(0x112ebbcf0,&UNK_10dad4c00);
  pcVar4 = FUN_102747240;
  func_0x00010072927c(FUN_102747240,0,uVar3);
  *(code **)(unaff_x20 + _DAT_112ebbcf8) = pcVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebbd00) = param_4;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return puVar5;
}



/* Entry: 102746fe0; end: 1027470cb;  */

undefined1  [16] FUN_102746fe0(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar1 = 0x800000010f0b97c0;
  uVar5 = 0xd00000000000001a;
  if (param_1 != 4) {
    uVar1 = 0xef6465746e656d65;
    uVar5 = 0x6c706d6920746f4e;
  }
  uVar2 = 0x800000010f0b97e0;
  uVar6 = 0xd000000000000014;
  if (param_1 != 3) {
    uVar2 = uVar1;
    uVar6 = uVar5;
  }
  pcVar3 = "Launch already in progress";
  uVar5 = 0xd000000000000017;
  if (param_1 != 1) {
    pcVar3 = "Launcher deallocated";
    uVar5 = 0xd00000000000001a;
  }
  pcVar4 = "Failed to parse SnapDoc";
  uVar7 = 0xd000000000000017;
  if (param_1 != 0) {
    pcVar4 = pcVar3;
    uVar7 = uVar5;
  }
  if (param_1 < 3) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar6 = uVar7;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 1027470cc; end: 102747177;  */

void FUN_1027470cc(void)

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



/* Entry: 102747178; end: 10274719b;  */

undefined1  [16] FUN_102747178(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  undefined1 auVar9 [16];
  
  bVar3 = *unaff_x20;
  uVar1 = 0x800000010f0b97c0;
  uVar6 = 0xd00000000000001a;
  if (bVar3 != 4) {
    uVar1 = 0xef6465746e656d65;
    uVar6 = 0x6c706d6920746f4e;
  }
  uVar2 = 0x800000010f0b97e0;
  uVar7 = 0xd000000000000014;
  if (bVar3 != 3) {
    uVar2 = uVar1;
    uVar7 = uVar6;
  }
  pcVar4 = "Launch already in progress";
  uVar6 = 0xd000000000000017;
  if (bVar3 != 1) {
    pcVar4 = "Launcher deallocated";
    uVar6 = 0xd00000000000001a;
  }
  pcVar5 = "Failed to parse SnapDoc";
  uVar8 = 0xd000000000000017;
  if (bVar3 != 0) {
    pcVar5 = pcVar4;
    uVar8 = uVar6;
  }
  if (bVar3 < 3) {
    uVar2 = (ulong)pcVar5 | 0x8000000000000000;
    uVar7 = uVar8;
  }
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 10274719c; end: 102747233;  */

undefined8 FUN_10274719c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ebbcc8;
  func_0x0001000285a8(0x112ebbcc8,&UNK_10dad4be8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102747234; end: 10274723f;  */

void FUN_102747234(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 102747240; end: 1027472bb;  */

void FUN_102747240(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x0001000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1027472bc; end: 1027476e3;  */

/* WARNING: Removing unreachable block (ram,0x00010274736c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1027472bc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long unaff_x20;
  undefined8 uVar9;
  byte abStack_b8 [40];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar8 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar8 == 0) {
      if ((param_2 & 0xff000000000000) == 0) {
LAB_1027473c8:
        puVar4 = (undefined1 *)0x112d51a30;
        func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
        FUN_102748350();
        puVar7 = &UNK_110543408;
        func_0x000107c613f8(&UNK_110543408,puVar4,0,0);
        *puVar4 = 0;
        goto LAB_102747404;
      }
    }
    else if ((long)(int)param_1 == param_1 >> 0x20) goto LAB_1027473c8;
  }
  else if ((uVar8 != 2) || (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)))
  goto LAB_1027473c8;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(param_1,param_2);
  lVar2 = param_1;
  func_0x0001010282b0(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  if (lVar2 != 0) {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    uVar3 = 0;
    func_0x00010095c380();
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ebbcc0);
    uStack_80 = uVar3;
    uStack_78 = param_6;
    func_0x000107c6157c(uVar9);
    func_0x000100075034(abStack_b8,FUN_102748390,auStack_90,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar9);
    puVar4 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    if ((abStack_b8[0] & 1) == 0) {
      FUN_102748350();
      puVar7 = &UNK_110543408;
      func_0x000107c613f8(&UNK_110543408,puVar4,0,0);
      *puVar4 = 2;
      puVar6 = puVar7;
      func_0x00010488904c();
      func_0x000107c614ac(puVar7);
    }
    else {
      puVar7 = &UNK_110543300;
      func_0x000107c613fc(&UNK_110543300,0x18,7);
      func_0x000107c61614(puVar7 + 0x10);
      func_0x000100083b20(auStack_90);
      FUN_102743634(auStack_90,abStack_b8);
      puVar6 = &UNK_110543328;
      func_0x000107c613fc(&UNK_110543328,0x60,7);
      FUN_102743634(abStack_b8,puVar6 + 0x10);
      *(long *)(puVar6 + 0x38) = lVar2;
      *(undefined **)(puVar6 + 0x40) = puVar7;
      *(undefined8 *)(puVar6 + 0x48) = param_3;
      *(undefined8 *)(puVar6 + 0x50) = param_4;
      *(undefined8 *)(puVar6 + 0x58) = param_5;
      func_0x000107c61174(param_5);
      func_0x000107c61174(lVar2);
      func_0x000107c61434(param_4);
      uVar9 = 0x40;
      func_0x000104887c7c(0x40,0,0x48,3,0xd00000000000004d,0x800000010f0b9720,&UNK_10dad4c10,puVar6)
      ;
      func_0x000107c61574(puVar6);
      puVar7 = &UNK_110543350;
      func_0x000107c613fc(&UNK_110543350,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_1027484d8;
      *(undefined8 *)(puVar7 + 0x18) = uVar3;
      func_0x000107c6157c(uVar3);
      uVar5 = 0;
      func_0x0001048898b8(0,1,FUN_1027484e0,puVar7,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar9);
      func_0x000107c61574(puVar7);
      puVar7 = &UNK_110543300;
      func_0x000107c613fc(&UNK_110543300,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,unaff_x20);
      func_0x000107c6157c(puVar7);
      puVar6 = (undefined *)0x0;
      func_0x00010488a3ec(0,1,FUN_102748508,puVar7);
      func_0x000107c61574(uVar5);
      func_0x000107c61578(puVar7,2);
    }
    func_0x000103edf384();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar6);
    return puVar7;
  }
  puVar4 = (undefined1 *)0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  FUN_102748350();
  puVar7 = &UNK_110543408;
  func_0x000107c613f8(&UNK_110543408,puVar4,0,0);
  *puVar4 = 1;
LAB_102747404:
  puVar6 = puVar7;
  func_0x00010488904c();
  func_0x000107c614ac(puVar7);
  func_0x000103edf384();
  func_0x000107c61574(puVar6);
  return puVar7;
}



/* Entry: 1027476e4; end: 102747703;  */

void FUN_1027476e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102747704,0,0);
  return;
}



/* Entry: 102747704; end: 102747783;  */

void FUN_102747704(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102747784;
                    /* WARNING: Could not recover jumptable at 0x000102747780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x30),uVar2,lVar3);
  return;
}



/* Entry: 102747784; end: 1027477eb;  */

void FUN_102747784(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(long *)(lVar1 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001027477c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027477ec,0,0);
  return;
}



/* Entry: 1027477ec; end: 1027478f7;  */

void FUN_1027477ec(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  puVar2 = (undefined1 *)(lVar4 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x70) = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    uVar3 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    uVar5 = uVar3;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
    uVar5 = 0x112d45220;
    func_0x000102748b98(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1027478f8,uVar3,uVar5);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_102748350();
  func_0x000107c613f8(&UNK_110543408,puVar2,0,0);
  *puVar2 = 3;
  func_0x000107c61654();
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001027478f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027478f8; end: 10274797f;  */

void FUN_1027478f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  FUN_102747a00(uVar1,uVar6,uVar2,uVar4);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  if (lVar3 == 0) {
    pcVar5 = FUN_102747980;
  }
  else {
    pcVar5 = (code *)0x1027479c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 102747980; end: 1027479ff;  */

void FUN_102747980(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001027479bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102747a00; end: 102747fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102747a00(undefined8 param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 auStack_f0 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *apuStack_70 [2];
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ebbcc0);
  func_0x000107c6157c(uVar16);
  func_0x0001000c74f0(apuStack_70);
  func_0x000107c61574(uVar16);
  puVar5 = apuStack_70[0];
  ppuVar4 = apuStack_70;
  func_0x0001027471ec();
  if (puVar5 == (undefined *)0x0) {
    FUN_102748350();
    func_0x000107c613f8(&UNK_110543408,ppuVar4,0,0);
    *(undefined1 *)ppuVar4 = 4;
    func_0x000107c61654();
  }
  else {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_90 = param_1;
    func_0x000100faca28();
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar6 = PTR_PTR_1126d2670;
      func_0x000107c610f8(PTR_PTR_1126d2670);
      func_0x000107c453e4();
      puVar7 = PTR_PTR_1126b3540;
      func_0x000107c61168(PTR_PTR_1126b3540);
      func_0x000107c5fadc(param_2,param_3);
      func_0x000107c5061c(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c57d40(puVar6);
      func_0x000107c61170(puVar7);
      func_0x0001002ed07c(0);
      uVar16 = 1;
      func_0x000107c6010c(1);
      func_0x000107c56fec(puVar6);
      func_0x000107c61170(uVar16);
      puVar7 = PTR_PTR_1133bb560;
      func_0x000107c61174(puVar6);
      puVar14 = puVar5;
      func_0x000107c61558(puVar5);
      apuStack_70[0] = puVar5;
      func_0x000100fb6efc(puVar6,puVar7,puVar14);
      func_0x000107c61170(puVar6);
      puVar5 = apuStack_70[0];
    }
    puVar6 = PTR_PTR_1126c81a0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar7 = PTR_PTR_1126c4258;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puStack_98 = puVar7;
    func_0x000107c560f8(puVar6);
    puVar7 = PTR_PTR_1133bb550;
    func_0x000107c61174();
    puVar14 = puVar5;
    func_0x000107c61558(puVar5);
    puStack_a0 = puVar6;
    apuStack_70[0] = puVar5;
    func_0x000100fb6efc(puVar6,puVar7,puVar14);
    puVar5 = apuStack_70[0];
    puVar7 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar7 = PTR_PTR_1126c81d8;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    func_0x000107c61174(param_4);
    puVar6 = puVar7;
    func_0x000107c4ea00();
    func_0x000107c61180();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar6 != (undefined *)0x0) {
      uVar16 = 0;
      func_0x000100f99ab0(0);
      puVar14 = puVar6;
      func_0x000107c5fc54(puVar6,uVar16);
      func_0x000107c61170(puVar6);
      func_0x000107c61434(puVar14);
    }
    puVar6 = PTR_PTR_1133bb590;
    puVar8 = PTR_PTR_1133bb590;
    FUN_1027481a0(PTR_PTR_1133bb590,puVar14);
    func_0x000107c6142c(puVar14);
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000107c61174();
      puVar8 = puVar14;
      func_0x000107c61558();
      puVar13 = puVar14;
      if (((ulong)puVar8 & 1) == 0) {
        puVar13 = (undefined *)0x0;
        func_0x000100fb551c(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
      }
      uVar1 = *(ulong *)(puVar13 + 0x10);
      puVar14 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
        func_0x000100fb551c(puVar14,uVar1 + 1,1,puVar13);
      }
      *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar14 + uVar1 * 8 + 0x20) = puVar6;
    }
    uVar9 = 0;
    func_0x000100f99ab0(0);
    puStack_a8 = puVar14;
    func_0x000107c5fc48(puVar14,uVar9);
    func_0x000107c57538(puVar7);
    func_0x000107c61170(puVar14);
    puVar8 = PTR_PTR_1126c4588;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5e7ec();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000100083b20(apuStack_70);
    puVar6 = apuStack_70[0];
    uVar16 = 0x112d50630;
    func_0x000102748b98(0x112d50630,&SUB_100f99ab0,&UNK_10d916e60);
    puVar13 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar9,PTR___syXlN_11034f1a0 + 8,uVar16);
    puVar10 = puVar13;
    func_0x000100083b20(apuStack_70);
    puVar14 = apuStack_70[0];
    func_0x000107c5eec4(auStack_b0 + lVar2);
    func_0x000107c5eeac();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
    (**(code **)(lVar15 + 8))(auStack_b0 + lVar2,lVar3);
    puVar11 = puVar8;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    *(undefined8 *)((long)auStack_f0 + lVar2 + 0x30) = 0;
    *(undefined8 *)((long)auStack_f0 + lVar2 + 0x28) = 0;
    *(undefined8 *)((long)auStack_f0 + lVar2 + 0x20) = 0;
    *(undefined8 *)((long)auStack_f0 + lVar2 + 0x18) = 0;
    *(undefined8 *)((long)auStack_f0 + lVar2 + 8) = 0;
    *(undefined **)((long)auStack_f0 + lVar2 + 0x10) = puVar11;
    *(undefined **)((long)auStack_f0 + lVar2) = puVar10;
    puVar12 = puVar6;
    func_0x000107c3ed88(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar13);
    func_0x000107c615e8(puVar14);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
    func_0x000100083b20(apuStack_70);
    puVar6 = apuStack_70[0];
    puVar14 = apuStack_70[0];
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar14 != (undefined *)0x0) {
      func_0x000107c61170(puVar14);
      func_0x000100083b20(apuStack_70);
      puVar6 = apuStack_70[0];
      puVar14 = apuStack_70[0];
      func_0x000107c4ffe8(apuStack_70[0]);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(puVar14);
    }
    func_0x000100083b20(apuStack_70);
    puVar6 = apuStack_70[0];
    func_0x000107c42c1c(apuStack_70[0]);
    func_0x000107c61574(puVar5);
    func_0x000107c6142c(puStack_a8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puStack_a0);
    func_0x000107c61170(puStack_98);
  }
  return;
}



/* Entry: 102747ff0; end: 10274801b;  */

void FUN_102747ff0(undefined8 *param_1)

{
  func_0x0001027471ec();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10274801c; end: 102748123; -[_TtC45MemTwoLandingPageSendToLauncherImplementation31MemTwoLandingPageSendToLauncher launchEditWithSnapDoc:memoriesReplaceId:snapEditorConfig:lifecycleDelegate:] */

void FUN_10274801c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
  uVar4 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  uVar3 = param_3;
  FUN_1027472bc(param_3,param_2,uVar1,uVar4,param_5,param_6);
  func_0x000107c6142c(uVar4);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102748124; end: 10274819f; -[_TtC45MemTwoLandingPageSendToLauncherImplementation31MemTwoLandingPageSendToLauncher launchFullScreenSendToWithParams:] */

void FUN_102748124(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined1 *)0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  FUN_102748350();
  puVar2 = &UNK_110543408;
  func_0x000107c613f8(&UNK_110543408,puVar1,0,0);
  *puVar1 = 5;
  puVar3 = puVar2;
  func_0x00010488904c();
  func_0x000107c614ac(puVar2);
  func_0x000103edf384();
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1027481a0; end: 10274825b;  */

bool FUN_1027481a0(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  
  lVar6 = *(long *)(param_2 + 0x10);
  puVar7 = (ulong *)(param_2 + 0x20);
  while( true ) {
    bVar1 = lVar6 != 0;
    lVar6 = lVar6 + -1;
    if (!bVar1) {
      return false;
    }
    uVar2 = *puVar7;
    func_0x000107c5faec();
    uVar3 = param_1;
    lVar4 = param_2;
    func_0x000107c5faec();
    if (uVar2 == uVar3 && param_2 == lVar4) break;
    lVar5 = param_2;
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar4);
    param_2 = lVar5;
    puVar7 = puVar7 + 1;
    if ((uVar2 & 1) != 0) {
      return bVar1;
    }
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar4);
  return true;
}



/* Entry: 10274825c; end: 10274828b;  */

void FUN_10274825c(undefined8 param_1,undefined8 *param_2)

{
  func_0x000102748b48(param_2,param_1);
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10274828c; end: 1027482b3; -[_TtC45MemTwoLandingPageSendToLauncherImplementation31MemTwoLandingPageSendToLauncher snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

void FUN_10274828c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102748598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027482b4; end: 1027482e7;  */

void FUN_1027482b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027482e8; end: 10274834f; -[_TtC45MemTwoLandingPageSendToLauncherImplementation31MemTwoLandingPageSendToLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102748304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102748324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102748308) */
/* WARNING: Removing unreachable block (ram,0x000102748328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027482e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebbcd8));
  return;
}



/* Entry: 102748350; end: 10274838f;  */

void FUN_102748350(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbd08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4d7c;
  func_0x000107c61520(&UNK_10dad4d7c,&UNK_110543408);
  puRam0000000112ebbd08 = puVar1;
  return;
}



/* Entry: 102748390; end: 102748423;  */

void FUN_102748390(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long alStack_50 [2];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10274719c(param_2,alStack_50);
  if (alStack_50[0] == 0) {
    func_0x0001027471ec(param_2);
    func_0x0001027471ec(alStack_50);
    *param_2 = uVar1;
    func_0x000107c61614(param_2 + 1,uVar2);
    func_0x000107c6157c(uVar1);
  }
  else {
    func_0x0001027471ec(alStack_50);
  }
  *(bool *)param_1 = alStack_50[0] == 0;
  return;
}



/* Entry: 102748424; end: 10274849b;  */

void FUN_102748424(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  lVar6 = *(long *)(unaff_x20 + 0x58);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10274849c;
  plVar5[9] = lVar4;
  plVar5[10] = lVar6;
  plVar5[7] = lVar3;
  plVar5[8] = lVar2;
  plVar5[5] = unaff_x20 + 0x10;
  plVar5[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102747704,0,0);
  return;
}



/* Entry: 10274849c; end: 1027484d7;  */

void FUN_10274849c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027484d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027484d8; end: 1027484df;  */

void FUN_1027484d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



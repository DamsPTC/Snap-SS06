/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00500234; end: 00500237;  */

void FUN_00500234(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00501d48();
  if (((ulong)param_1 & 1) != 0) {
    func_0x00501fc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00501fb4();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x00501f8c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x00501d34();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00501e04();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00500238; end: 0050025f;  */

undefined8 FUN_00500238(undefined8 param_1)

{
  func_0x00501cdc();
  func_0x00501f10();
  return param_1;
}



/* Entry: 00500260; end: 00500273;  */

void FUN_00500260(void)

{
  FUN_00500238();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00500274; end: 0050027f;  */

undefined ** FUN_00500274(void)

{
  return &PTR_DAT_009f91a8;
}



/* Entry: 00500280; end: 005002ab;  */

void FUN_00500280(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00501dd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 005002ac; end: 00500327;  */

long * FUN_005002ac(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00501ce4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_005002f0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_005002f0;
  func_0x00501f00();
  func_0x00501cb0();
  unaff_x19 = unaff_x22;
LAB_005002f0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00501dc0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      unaff_x19 = unaff_x20;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 00500328; end: 0050037f;  */

void FUN_00500328(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00501d5c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00501f48();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 00500380; end: 00500383;  */

void FUN_00500380(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00501c80();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00501fd8();
    }
    func_0x00501f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00501d1c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00500384; end: 005003a7;  */

undefined8 FUN_00500384(undefined8 param_1)

{
  func_0x00501cdc();
  return param_1;
}



/* Entry: 005003a8; end: 005003bb;  */

void FUN_005003a8(void)

{
  FUN_00500384();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005003bc; end: 005003db;  */

undefined ** FUN_005003bc(void)

{
  return &PTR_DAT_009f91f0;
}



/* Entry: 005003dc; end: 0050043b;  */

long * FUN_005003dc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00501c0c();
  if ((int)param_1[2] != 0) {
    func_0x00501bf4();
    func_0x00501c98();
    func_0x00501cd0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00501dc0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 0050043c; end: 0050046b;  */

long FUN_0050043c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00501e24();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 0050046c; end: 00500493;  */

undefined8 FUN_0050046c(undefined8 param_1)

{
  func_0x00501cdc();
  func_0x00501f10();
  return param_1;
}



/* Entry: 00500494; end: 005004a7;  */

void FUN_00500494(void)

{
  FUN_0050046c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005004a8; end: 005004b3;  */

undefined ** FUN_005004a8(void)

{
  return &PTR_DAT_009f9240;
}



/* Entry: 005004b4; end: 005004e3;  */

void FUN_005004b4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00501dd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 005004e4; end: 005005b3;  */

long * FUN_005004e4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar4 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar4 + 0x17);
  plVar5 = param_3;
  if (lVar2 < 0) {
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_0050054c;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_0050054c;
  }
  func_0x00501f00(plVar1,lVar2,param_3,"snapchat.messaging.LiveGameInfo.game_name");
  plVar1 = param_3;
  FUN_00435e9c(param_3,1,plVar4,param_2);
  plVar5 = plVar4;
  param_2 = plVar1;
LAB_0050054c:
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar4 = param_3;
    func_0x00487c24(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    func_0x00501f28();
    func_0x00487ce8(param_2,plVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00501dc0();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x0054f690();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar2);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 005005b4; end: 0050062f;  */

void FUN_005005b4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00501d5c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00501f48();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 00500630; end: 00500633;  */

void FUN_00500630(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00501c80();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00501fd8();
    }
    func_0x00501f08();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00501d1c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00500634; end: 0050065b;  */

undefined8 FUN_00500634(undefined8 param_1)

{
  func_0x00501cdc();
  func_0x00501f10();
  return param_1;
}



/* Entry: 0050065c; end: 0050066f;  */

void FUN_0050065c(void)

{
  FUN_00500634();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00500670; end: 0050067b;  */

undefined ** FUN_00500670(void)

{
  return &PTR_DAT_009f9280;
}



/* Entry: 0050067c; end: 005006a7;  */

void FUN_0050067c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00501dd8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 005006a8; end: 00500723;  */

long * FUN_005006a8(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00501ce4();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_005006ec;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_005006ec;
  func_0x00501f00();
  func_0x00501cb0();
  unaff_x19 = unaff_x22;
LAB_005006ec:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00501dc0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      unaff_x19 = unaff_x20;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 00500724; end: 0050077b;  */

void FUN_00500724(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00501d5c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00501f48();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 0050077c; end: 0050077f;  */

void FUN_0050077c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00501c80();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00501fd8();
    }
    func_0x00501f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00501d1c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00500780; end: 005007b3;  */

long FUN_00500780(long param_1)

{
  func_0x00501cdc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 005007b4; end: 005007c7;  */

void FUN_005007b4(void)

{
  FUN_00500780();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005007c8; end: 005007d3;  */

undefined ** FUN_005007c8(void)

{
  return &PTR_DAT_009f92c8;
}



/* Entry: 005007d4; end: 005008b3;  */

void FUN_005007d4(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00501eec();
  if ((extraout_x8 & 1) != 0) {
    func_0x00501f7c();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 005008b4; end: 005008b7;  */

void FUN_005008b4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00501d48();
  if (((ulong)param_1 & 1) != 0) {
    func_0x00501fc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00501fb4();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x00501f8c();
    }
  }
  func_0x00501d34();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00501e04();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 005008b8; end: 005008db;  */

undefined8 FUN_005008b8(undefined8 param_1)

{
  func_0x00501cdc();
  return param_1;
}



/* Entry: 005008dc; end: 005008ef;  */

void FUN_005008dc(void)

{
  FUN_005008b8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005008f0; end: 0050090f;  */

undefined ** FUN_005008f0(void)

{
  return &PTR_DAT_009f9310;
}



/* Entry: 00500910; end: 0050096f;  */

long * FUN_00500910(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00501c0c();
  if ((int)param_1[2] != 0) {
    func_0x00501bf4();
    func_0x00501c98();
    func_0x00501cd0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00501dc0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 00500970; end: 0050099f;  */

long FUN_00500970(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00501e24();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 005009a0; end: 005009d3;  */

long FUN_005009a0(long param_1)

{
  func_0x00501cdc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 005009d4; end: 005009d7;  */

long FUN_005009d4(long param_1)

{
  func_0x00501cdc();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 005009d8; end: 005009eb;  */

void FUN_005009d8(void)

{
  FUN_005009a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005009ec; end: 005009f7;  */

undefined ** FUN_005009ec(void)

{
  return &PTR_DAT_009f9358;
}



/* Entry: 005009f8; end: 00500a33;  */

void FUN_005009f8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00501eec();
  if ((extraout_x8 & 1) != 0) {
    func_0x00501f7c();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00500a34; end: 00500ab3;  */

long * FUN_00500a34(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00501c0c();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x00501c5c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00501bf4();
    func_0x00501f28();
    func_0x00501dcc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00501dc0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00500ab4; end: 00500b0b;  */

void FUN_00500ab4(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00501eec();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00501f84();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x00501d00();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00501f48();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 00500b0c; end: 00500b6f;  */

void FUN_00500b0c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00501d48();
  if (((ulong)param_1 & 1) != 0) {
    func_0x00501fc0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00501fb4();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x00501f8c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00501d34();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00501e04();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00500b70; end: 00500bab;  */

long FUN_00500b70(long param_1)

{
  func_0x00501cdc();
  FUN_004ddab4(param_1 + 0x40);
  FUN_00501018(param_1 + 0x28);
  FUN_00501048(param_1 + 0x10);
  return param_1;
}



/* Entry: 00500bac; end: 00500bbf;  */

void FUN_00500bac(void)

{
  FUN_00500b70();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00500bc0; end: 00500bcb;  */

undefined ** FUN_00500bc0(void)

{
  return &PTR_DAT_009f93a8;
}



/* Entry: 00500bcc; end: 00500c1b;  */

void FUN_00500bcc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  FUN_00501ba8(param_1 + 0x28);
  FUN_004ddfbc(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00500c1c; end: 00500da3;  */

long * FUN_00500c1c(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00501c0c();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x00501c40();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00501c5c();
    func_0x00501fa8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x30);
  while (iVar3 != 0) {
    func_0x00501c40();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00501e14(2);
    func_0x00501fa8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x48);
  while (iVar3 != 0) {
    func_0x00501c40();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x00501e14(3);
    func_0x00501fa8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00501dc0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00500da4; end: 00500dc7;  */

void FUN_00500da4(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00501e4c();
  FUN_00500da4(param_1 + 0x10,param_2 + 0x10);
  func_0x00500db8(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  FUN_004dbabc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00501d1c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00500dc8; end: 00500deb;  */

undefined8 FUN_00500dc8(undefined8 param_1)

{
  func_0x00501cdc();
  return param_1;
}



/* Entry: 00500dec; end: 00500dff;  */

void FUN_00500dec(void)

{
  FUN_00500dc8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00500e00; end: 00500e23;  */

undefined ** FUN_00500e00(void)

{
  return &PTR_DAT_009f93f8;
}



/* Entry: 00500e24; end: 00500ecf;  */

dword * FUN_00500e24(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00501c0c();
  if (*(long *)(param_1 + 4) != 0) {
    func_0x00501bf4();
    func_0x00501e6c();
    func_0x00501e98();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00501bf4();
    func_0x00501f28();
    func_0x00501e98();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00501bf4();
    param_4 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x00501cd0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00501dc0();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00500ed0; end: 00500feb;  */

ulong FUN_00500ed0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x24) = (int)uVar1;
  return uVar1;
}



/* Entry: 00500fec; end: 00501017;  */

undefined8 * FUN_00500fec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  func_0x00500db8(param_1,param_3);
  return param_1;
}



/* Entry: 00501018; end: 00501047;  */

long * FUN_00501018(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00501048; end: 00501077;  */

long * FUN_00501048(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00501078; end: 00501487;  */

void FUN_00501078(long param_1)

{
  if (param_1 == 0) {
    func_0x00501da8();
  }
  else {
    func_0x00501c68();
  }
  func_0x00501fcc(&PTR_DAT_009f8910);
  return;
}



/* Entry: 00501488; end: 005014d3;  */

void FUN_00501488(long param_1)

{
  ulong extraout_x8;
  
  func_0x00501e4c();
  if (param_1 == 0) {
    func_0x00501d70();
  }
  else {
    func_0x00501c00();
  }
  func_0x00501f30();
  func_0x00501f3c(&PTR_FUN_009f8be0);
  if ((extraout_x8 & 1) != 0) {
    func_0x00501c34();
  }
  func_0x00501ea4();
  func_0x00501f54();
  return;
}



/* Entry: 005014d4; end: 00501503;  */

undefined8 * FUN_005014d4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00501eb0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501ef8();
  }
  else {
    func_0x00501e74();
  }
  func_0x00501f64();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f1018;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00487c6c(lVar1,param_2);
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00487c6c(lVar1,param_2);
  param_1[4] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004d927c(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 00501504; end: 0050155f;  */

undefined8 * FUN_00501504(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00501e60();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501da8();
  }
  else {
    func_0x00501c74();
  }
  *param_1 = &PTR_DAT_009f89b0;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_004ff418();
  return param_1;
}



/* Entry: 00501560; end: 005015cb;  */

void FUN_00501560(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00501e4c();
  if (param_1 == 0) {
    func_0x00501d70();
  }
  else {
    func_0x00501c00();
  }
  func_0x00501f30();
  func_0x00501f3c(&PTR_DAT_009f8e60);
  if ((extraout_x8 & 1) != 0) {
    func_0x00501c34();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_00501b6c();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  return;
}



/* Entry: 005015cc; end: 005015fb;  */

undefined8 * FUN_005015cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00501eb0();
  if (param_1 == 0) {
    func_0x00501ef8();
  }
  else {
    func_0x00501e74();
  }
  func_0x00501f64();
  lVar1 = param_3;
  func_0x00501e4c();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_009f8d20;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00501c34();
  }
  FUN_004dda88(unaff_x19 + 2,unaff_x20,param_3 + 0x10);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return unaff_x19;
}



/* Entry: 005015fc; end: 0050165f;  */

undefined8 * FUN_005015fc(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00501e60();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501d70();
  }
  else {
    param_1 = unaff_x21;
    func_0x005510c4();
  }
  *param_1 = &PTR_DAT_009f8a50;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_004ff4cc();
  return param_1;
}



/* Entry: 00501660; end: 00501693;  */

undefined8 * FUN_00501660(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  func_0x00501eb0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501e80();
  }
  else {
    func_0x00501e88();
    param_1 = unaff_x20;
  }
  func_0x00501f64();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f0b28;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 00501694; end: 005016eb;  */

undefined8 * FUN_00501694(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x00501e60();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501da8();
  }
  else {
    func_0x00501c74();
  }
  *param_1 = &PTR_DAT_009f8c80;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  func_0x004ff4e8();
  return param_1;
}



/* Entry: 005016ec; end: 0050173f;  */

long FUN_005016ec(long param_1)

{
  func_0x00501e60();
  if (param_1 == 0) {
    func_0x00501da8();
  }
  else {
    func_0x00501c74();
  }
  func_0x00501fe4(&PTR_DAT_009f8a00);
  func_0x004ff500();
  return param_1;
}



/* Entry: 00501740; end: 0050180b;  */

undefined8 * FUN_00501740(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00501eb0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501e80();
  }
  else {
    param_1 = unaff_x20;
    func_0x00501e88();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_009f8dc0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00501c34();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    func_0x004d3428();
  }
  param_1[3] = unaff_x20;
  param_1[4] = *(undefined8 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 0050180c; end: 0050185f;  */

long FUN_0050180c(long param_1)

{
  func_0x00501e60();
  if (param_1 == 0) {
    func_0x00501da8();
  }
  else {
    func_0x00501c74();
  }
  func_0x00501fe4(&PTR_DAT_009f8910);
  FUN_004ff5d4();
  return param_1;
}



/* Entry: 00501860; end: 005018b3;  */

long FUN_00501860(long param_1)

{
  func_0x00501e60();
  if (param_1 == 0) {
    func_0x00501da8();
  }
  else {
    func_0x00501c74();
  }
  func_0x00501fe4(&PTR_DAT_009f8af0);
  func_0x004ff5f0();
  return param_1;
}



/* Entry: 005018b4; end: 005018e3;  */

undefined8 * FUN_005018b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00501eb0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501ef8();
  }
  else {
    func_0x00501e74();
  }
  func_0x00501f64();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009fd328;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_0051129c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 005018e4; end: 0050198b;  */

void FUN_005018e4(long param_1)

{
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00501e4c();
  if (param_1 == 0) {
    __Znwm(0x60);
  }
  else {
    func_0x00501f94();
  }
  func_0x00501f30();
  func_0x00501f3c(&PTR_DAT_009f8e10);
  if ((extraout_x8 & 1) != 0) {
    func_0x00501c34();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = 0;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x20) = unaff_x19;
  FUN_00500da4((undefined8 *)(unaff_x21 + 0x10),unaff_x20 + 0x10);
  FUN_00500fec(unaff_x21 + 0x28);
  FUN_004dda88(unaff_x21 + 0x40);
  *(undefined4 *)(unaff_x21 + 0x58) = 0;
  return;
}



/* Entry: 0050198c; end: 00501ab7;  */

undefined8 * FUN_0050198c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00501eb0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501d70();
  }
  else {
    param_1 = unaff_x20;
    func_0x005510c4();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_009f8b40;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00501c34();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x00487c6c();
  param_1[2] = lVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(unaff_x19 + 0x18);
  return param_1;
}



/* Entry: 00501ab8; end: 00501b17;  */

undefined8 * FUN_00501ab8(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00501e60();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00501e80();
  }
  else {
    param_1 = unaff_x21;
    func_0x00501e88();
  }
  *param_1 = &PTR_DAT_009f8aa0;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_004ff750();
  return param_1;
}



/* Entry: 00501b18; end: 00501b6b;  */

long FUN_00501b18(long param_1)

{
  func_0x00501e60();
  if (param_1 == 0) {
    func_0x00501da8();
  }
  else {
    func_0x00501c74();
  }
  func_0x00501fe4(&PTR_DAT_009f8960);
  func_0x004ff784();
  return param_1;
}



/* Entry: 00501b6c; end: 00501ba7;  */

dword * FUN_00501b6c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  dword *unaff_x20;
  
  func_0x00501eb0();
  if (param_1 == 0) {
    unaff_x20 = &section_00000068.flags;
    __Znwm();
  }
  else {
    param_2 = 0xa8;
    func_0x005510c4();
  }
  func_0x00501f64();
  *(undefined8 *)(unaff_x20 + 2) = param_2;
  *(undefined ***)unaff_x20 = &PTR_FUN_00a00160;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  unaff_x20[4] = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)(unaff_x20 + 7) = 0;
  *(undefined8 *)(unaff_x20 + 5) = 0;
  unaff_x20[9] = 0;
  *(undefined8 *)(unaff_x20 + 10) = param_2;
  FUN_005219f8(unaff_x20 + 6,param_3 + 0x18);
  FUN_00500fec(unaff_x20 + 0xc,param_2,param_3 + 0x30);
  lVar2 = param_3 + 0x48;
  func_0x005232c8();
  *(long *)(unaff_x20 + 0x12) = lVar2;
  lVar2 = param_3 + 0x50;
  func_0x005232c8();
  *(long *)(unaff_x20 + 0x14) = lVar2;
  lVar2 = param_3 + 0x58;
  func_0x005232c8();
  *(long *)(unaff_x20 + 0x16) = lVar2;
  lVar2 = param_3 + 0x60;
  func_0x005232c8();
  *(long *)(unaff_x20 + 0x18) = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x005232c8();
  *(long *)(unaff_x20 + 0x1a) = lVar2;
  uVar1 = unaff_x20[4];
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_00522f28(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  *(undefined8 *)(unaff_x20 + 0x1c) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_00522fa4(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  *(undefined8 *)(unaff_x20 + 0x1e) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00523010(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00523040(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  *(undefined8 *)(unaff_x20 + 0x22) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0052307c(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  *(undefined8 *)(unaff_x20 + 0x24) = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)((long)unaff_x20 + 0x9e) = *(undefined8 *)(param_3 + 0x9e);
  *(undefined8 *)(unaff_x20 + 0x26) = uVar3;
  return unaff_x20;
}



/* Entry: 00501ba8; end: 00502003;  */

void FUN_00501ba8(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 00502004; end: 00502057;  */

void FUN_00502004(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_00504c30();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 00502058; end: 0050208b;  */

long FUN_00502058(long param_1)

{
  func_0x0050266c();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00502004(param_1);
  }
  return param_1;
}



/* Entry: 0050208c; end: 0050208f;  */

long FUN_0050208c(long param_1)

{
  func_0x0050266c();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00502004(param_1);
  }
  return param_1;
}



/* Entry: 00502090; end: 005020a3;  */

void FUN_00502090(void)

{
  FUN_00502058();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005020a4; end: 005020af;  */

undefined ** FUN_005020a4(void)

{
  return &PTR_DAT_009f96a8;
}



/* Entry: 005020b0; end: 005020e3;  */

void FUN_005020b0(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00502004();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 005020e4; end: 005021c3;  */

long * FUN_005020e4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  func_0x00502654();
  plVar6 = param_1;
  if (param_1[2] != 0) {
    func_0x005025f0();
    plVar6 = *(long **)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x00487cbc(8,param_1);
    func_0x00487cf0(plVar6,uVar2);
    param_4 = plVar6;
  }
  if (*(int *)(unaff_x20 + 0x24) == 3) {
    func_0x005025f0();
    if (*(int *)(unaff_x20 + 0x24) == 3) {
      param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x18;
    func_0x00487cbc(0x18,plVar6);
    func_0x00487cbc(param_4,uVar2);
  }
  else if (*(int *)(unaff_x20 + 0x24) == 2) {
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0050264c(2,*(long *)(unaff_x20 + 0x18),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar4;
        uVar1 = iVar7 - iVar8;
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 005021c4; end: 0050224f;  */

ulong FUN_005021c4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar3 = uVar3 + 2;
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_004dff90();
    uVar3 = uVar3 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x20) = (int)uVar3;
  return uVar3;
}



/* Entry: 00502250; end: 0050231f;  */

void FUN_00502250(void)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00502680();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    *(long *)(unaff_x21 + 0x10) = *(long *)(unaff_x20 + 0x10);
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x24);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_00502004();
      }
      *(int *)(unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined1 *)(unaff_x21 + 0x18) = *(undefined1 *)(unaff_x20 + 0x18);
    }
    else if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar1 = *(undefined ***)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x24) != 2) {
          ppuVar1 = &PTR_PTR_00b16708;
        }
        FUN_005052ac(*(undefined8 *)(unaff_x21 + 0x18),ppuVar1);
      }
      else {
        func_0x004e035c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00502320; end: 0050234b;  */

long FUN_00502320(long param_1)

{
  func_0x0050266c();
  FUN_00502538(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050234c; end: 0050234f;  */

long FUN_0050234c(long param_1)

{
  func_0x0050266c();
  FUN_00502538(param_1 + 0x10);
  return param_1;
}



/* Entry: 00502350; end: 00502363;  */

void FUN_00502350(void)

{
  FUN_00502320();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00502364; end: 0050236f;  */

undefined ** FUN_00502364(void)

{
  return &PTR_DAT_009f9708;
}



/* Entry: 00502370; end: 005023af;  */

void FUN_00502370(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 005023b0; end: 005024d7;  */

long * FUN_005023b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00502654();
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0050264c(1,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)uVar4;
        uVar2 = iVar6 - iVar7;
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 005024d8; end: 00502527;  */

void FUN_005024d8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x0054d484(param_1 + 0x10,param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00502528; end: 00502537;  */

void FUN_00502528(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x005510c4(param_2,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f9618;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 00502538; end: 00502567;  */

long * FUN_00502538(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00502568; end: 005025ef;  */

void FUN_00502568(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f9618;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 005025f0; end: 005026a7;  */

ulong * FUN_005025f0(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 005026a8; end: 0050282b;  */

void FUN_005026a8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_005032d8();
    }
    break;
  default:
    goto LAB_005027c0;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00504c30();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00506a58();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_004e5a24();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_004e7820();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_005031a0();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00503818();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x005043fc();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_005027c0;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_00502e58();
    }
  }
  __ZdlPv();
LAB_005027c0:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



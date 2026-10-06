/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10598d208; end: 10598d21b;  */

void FUN_10598d208(void)

{
  FUN_10598d19c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598d21c; end: 10598d227;  */

undefined ** FUN_10598d21c(void)

{
  return &PTR_DAT_1108c6600;
}



/* Entry: 10598d228; end: 10598d297;  */

void FUN_10598d228(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  func_0x00010598f060();
  func_0x00010029b2d4(unaff_x19 + 0x20);
  func_0x00010029b2d4(unaff_x19 + 0x28);
  func_0x00010598f040();
  func_0x00010029b2d4(unaff_x19 + 0x38);
  func_0x00010029b2d4(unaff_x19 + 0x40);
  func_0x00010029b2d4(unaff_x19 + 0x48);
  func_0x00010029b2d4(unaff_x19 + 0x50);
  func_0x00010029b2d4(unaff_x19 + 0x58);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10598d298; end: 10598d5d3;  */

long * FUN_10598d298(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010598eed4();
  func_0x00010598edd4(param_1[2]);
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10598d2d0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10598d2d0:
      param_4 = (long *)&UNK_10f31791f;
      func_0x00010598eda0();
      func_0x00010598ef88();
      func_0x00010598ec6c();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10598d30c;
  }
  else if ((int)param_2 != 0) {
LAB_10598d30c:
    param_4 = (long *)&UNK_10f317950;
    func_0x00010598eda0();
    param_2 = (long *)0x2;
    param_1 = unaff_x19;
    func_0x00010598ec6c();
    unaff_x21 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10598d34c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10598d34c:
      param_4 = (long *)&UNK_10f317986;
      func_0x00010598eda0();
      func_0x00010598f0b8();
      func_0x00010598ec6c();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10598d388;
  }
  else if ((int)param_2 != 0) {
LAB_10598d388:
    param_4 = (long *)&UNK_10f3179bc;
    func_0x00010598eda0();
    param_2 = (long *)0x4;
    param_1 = unaff_x19;
    func_0x00010598ec6c();
    unaff_x21 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x30));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10598d3c8;
  }
  else if ((int)param_2 != 0) {
LAB_10598d3c8:
    param_4 = (long *)&UNK_10f3179f6;
    func_0x00010598eda0();
    param_2 = (long *)0x5;
    param_1 = unaff_x19;
    func_0x00010598ec6c();
    unaff_x21 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x38));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10598d408;
  }
  else if ((int)param_2 != 0) {
LAB_10598d408:
    param_4 = (long *)&UNK_10f317a30;
    func_0x00010598eda0();
    param_2 = (long *)0x6;
    param_1 = unaff_x19;
    func_0x00010598ec6c();
    unaff_x21 = param_1;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x40));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10598d448;
  }
  else if ((int)param_2 != 0) {
LAB_10598d448:
    param_4 = (long *)&UNK_10f317a69;
    func_0x00010598eda0();
    param_2 = (long *)0x7;
    param_1 = unaff_x19;
    func_0x00010598ec6c();
    unaff_x21 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    func_0x00010598eca4();
    plVar2 = (long *)0x40;
    func_0x0001001a59d0();
    func_0x00010598ecfc();
    param_2 = param_1;
    unaff_x21 = plVar2;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x48));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10598d4b0;
  }
  else if ((int)param_2 != 0) {
LAB_10598d4b0:
    param_4 = (long *)&UNK_10f317aa7;
    func_0x00010598eda0();
    param_2 = (long *)0x9;
    plVar2 = unaff_x19;
    func_0x00010598ec6c();
    unaff_x21 = plVar2;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x50));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10598d4f0;
  }
  else if ((int)param_2 != 0) {
LAB_10598d4f0:
    param_4 = (long *)&UNK_10f317adf;
    func_0x00010598eda0();
    param_2 = (long *)0xa;
    plVar2 = unaff_x19;
    func_0x00010598ec6c();
    unaff_x21 = plVar2;
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x20 + 0x58));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598d54c;
  }
  else if ((int)param_2 == 0) goto LAB_10598d54c;
  param_4 = (long *)&UNK_10f317b22;
  func_0x00010598eda0();
  func_0x00010598ec6c();
  plVar2 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_10598d54c:
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x61) == '\x01') {
    func_0x00010598eca4();
    plVar3 = (long *)0x60;
    func_0x0001001a59d0(0x60,plVar2);
    func_0x00010598ecfc();
    unaff_x21 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)(unaff_x20 + 100) != 0) {
    func_0x00010598eca4();
    plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 100);
    uVar4 = 0x68;
    func_0x0001001a59d0(0x68,plVar3);
    func_0x0001001a59fc(plVar2,uVar4);
    unaff_x21 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010598ee78();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010598f0c4();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10598d5d4; end: 10598d8fb;  */

void FUN_10598d5d4(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  
  func_0x00010598ec58();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    unaff_w20 = 0;
  }
  else {
    FUN_10598f13c();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x40));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x48));
  lVar2 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x50));
  lVar2 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x58));
  lVar2 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    FUN_10598ed14();
  }
  iVar1 = unaff_w20 + (uint)*(byte *)(unaff_x19 + 0x60) * 2 + (uint)*(byte *)(unaff_x19 + 0x61) * 2;
  if (*(int *)(unaff_x19 + 100) != 0) {
    func_0x00010598efdc();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598eff4();
    lVar2 = extraout_x8_09;
    if (extraout_x8_09 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x68) = iVar1;
  return;
}



/* Entry: 10598d8fc; end: 10598d933;  */

long FUN_10598d8fc(long param_1)

{
  func_0x00010598eda8();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 10598d934; end: 10598d947;  */

void FUN_10598d934(void)

{
  FUN_10598d8fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598d948; end: 10598d953;  */

undefined ** FUN_10598d948(void)

{
  return &PTR_DAT_1108c6650;
}



/* Entry: 10598d954; end: 10598d993;  */

void FUN_10598d954(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_1053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10598d994; end: 10598da23;  */

long * FUN_10598d994(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010598ee38();
  iVar6 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar5 * 8 + 7);
    }
    param_3 = (ulong)*(uint *)(*puVar1 + 0x68);
    param_4 = (long *)0x1;
    func_0x00010598ee20();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ee78();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar2 = iVar5 - iVar6;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10598da24; end: 10598da87;  */

long FUN_10598da24(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010598ee48();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10598da88();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010598eff4();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10598da88; end: 10598da9f;  */

void FUN_10598da88(void)

{
  FUN_10598d5d4();
  FUN_10598ec04();
  return;
}



/* Entry: 10598daa0; end: 10598dab3;  */

void FUN_10598daa0(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x00010598ee60();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10598daa0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*puVar1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598dab4; end: 10598dae7;  */

long FUN_10598dab4(long param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  func_0x00010598ef9c();
  func_0x000100067de0(param_1 + 0x20);
  return param_1;
}



/* Entry: 10598dae8; end: 10598dafb;  */

void FUN_10598dae8(void)

{
  FUN_10598dab4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598dafc; end: 10598db07;  */

undefined ** FUN_10598dafc(void)

{
  return &PTR_DAT_1108c66a0;
}



/* Entry: 10598db08; end: 10598db43;  */

void FUN_10598db08(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  func_0x00010598f060();
  func_0x00010029b2d4(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10598db44; end: 10598dc6f;  */

long * FUN_10598db44(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010598ee28();
  func_0x00010598edd4(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10598db7c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10598db7c:
      param_4 = (long *)&UNK_10f317b5b;
      func_0x00010598eda0();
      func_0x00010598ef88();
      func_0x00010598ecf0();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10598dbb8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10598dbb8:
      param_4 = (long *)&UNK_10f317b83;
      func_0x00010598eda0();
      func_0x00010598ec44();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010598edd4(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10598dc08;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10598dc08;
  param_4 = (long *)&UNK_10f317bac;
  func_0x00010598eda0();
  func_0x00010598f0b8();
  func_0x00010598ecf0();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10598dc08:
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x0001001a597c();
    param_1 = (long *)(ulong)*(uint *)(unaff_x21 + 0x28);
    uVar3 = 0x20;
    func_0x0001001a59d0(0x20,unaff_x19);
    func_0x0001001a59fc(param_1,uVar3);
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010598ee78();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010598efd0();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10598dc70; end: 10598dd0b;  */

long FUN_10598dc70(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010598ec58();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10598f13c();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_10598ed14();
  }
  func_0x00010598edb0(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_10598ed14();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010598efdc();
    unaff_x20 = unaff_x20 + extraout_x8_02 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598eff4();
    lVar1 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10598dd0c; end: 10598dd0f;  */

void FUN_10598dd0c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010598ecb0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598ef30();
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598f058();
  }
  func_0x00010598edc8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x0001001a53d4();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598dd10; end: 10598dd37;  */

undefined8 FUN_10598dd10(undefined8 param_1)

{
  func_0x00010598eda8();
  func_0x00010598eea4();
  return param_1;
}



/* Entry: 10598dd38; end: 10598dd4b;  */

void FUN_10598dd38(void)

{
  FUN_10598dd10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598dd4c; end: 10598dd57;  */

undefined ** FUN_10598dd4c(void)

{
  return &PTR_DAT_1108c66e0;
}



/* Entry: 10598dd58; end: 10598de43;  */

void FUN_10598dd58(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010598ed08();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10598de44; end: 10598dec7;  */

void FUN_10598de44(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010598ecb0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010598edbc();
    }
    func_0x00010598ef30();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010598ed70();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598dec8; end: 10598df1b;  */

int * FUN_10598dec8(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_10598df1c(param_1,0,iVar1);
    *param_1 = iVar1;
    func_0x00010598e0b8(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 10598df1c; end: 10598df1f;  */

void FUN_10598df1c(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar11 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_10598df90;
  }
  else {
    plVar11 = (long *)plVar11[-1];
    if ((int)param_3 < 1) {
LAB_10598df90:
      uVar12 = 1;
      goto LAB_10598df94;
    }
    if (0x3ffffffb < iVar1) {
      uVar12 = 0x7fffffff;
      goto LAB_10598df94;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar12 = (ulong)param_3;
LAB_10598df94:
  plVar7 = (long *)(uVar12 * 8 + 8);
  if (plVar11 == (long *)0x0) {
    uVar12 = param_2;
    func_0x000100064708();
    uVar12 = uVar12 - 8 >> 3;
    if (0x7ffffffe < uVar12) {
      uVar12 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar5 = aplStack_58;
    aplStack_58[0] = plVar7;
    func_0x0001053abb00(pplVar5,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar5 != (long **)0x0) {
      plVar11 = (long *)(long)*(char *)((long)pplVar5 + 0x17);
      pplVar8 = pplVar5;
      if ((long)plVar11 < 0) {
        pplVar8 = (long **)*pplVar5;
        plVar11 = pplVar5[1];
      }
      func_0x00010bdb2a08(aplStack_58,&UNK_10f317bd9,0x10a,pplVar8,plVar11);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar5 = aplStack_58;
      func_0x00010ae6c700();
      plVar11 = pplVar5[1] + -1;
      if (*plVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar11);
        return;
      }
      uVar12 = (long)*(int *)((long)pplVar5 + 4) * 8 + 8;
      ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
      (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar11);
      if (ppuVar3[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar4 = ppuVar3[2];
      uVar9 = 0x3b - LZCOUNT(uVar12);
      bVar2 = puVar4[0x50];
      if (uVar9 < bVar2) {
        lVar10 = *(long *)(puVar4 + 0x58);
        *plVar11 = *(long *)(lVar10 + uVar9 * 8);
        *(long **)(lVar10 + uVar9 * 8) = plVar11;
      }
      else {
        if (bVar2 == 0) {
          lVar10 = 0;
        }
        else {
          _memmove(plVar11,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
          lVar10 = (ulong)(byte)puVar4[0x50] << 3;
        }
        uVar9 = uVar12 >> 3;
        if (0 < (long)((uVar12 & 0xfffffffffffffff8) - lVar10)) {
          _bzero((long)plVar11 + lVar10);
        }
        *(long **)(puVar4 + 0x58) = plVar11;
        if (0x3f < uVar9) {
          uVar9 = 0x40;
        }
        puVar4[0x50] = (char)uVar9;
      }
      return;
    }
    plVar6 = plVar11;
    func_0x0001053abb54(plVar11,plVar7,1);
    plVar7 = plVar6;
  }
  *plVar7 = (long)plVar11;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar7 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    FUN_10598e090(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar12;
  *(long **)(param_1 + 8) = plVar7 + 1;
  return;
}



/* Entry: 10598df20; end: 10598e08f;  */

void FUN_10598df20(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar1 = *(int *)(param_1 + 4);
  plVar11 = *(long **)(param_1 + 8);
  if (iVar1 == 0) {
    if ((int)param_3 < 1) goto LAB_10598df90;
  }
  else {
    plVar11 = (long *)plVar11[-1];
    if ((int)param_3 < 1) {
LAB_10598df90:
      uVar12 = 1;
      goto LAB_10598df94;
    }
    if (0x3ffffffb < iVar1) {
      uVar12 = 0x7fffffff;
      goto LAB_10598df94;
    }
  }
  if ((int)param_3 < (int)(iVar1 << 1 | 1U)) {
    param_3 = iVar1 * 2 + 1;
  }
  uVar12 = (ulong)param_3;
LAB_10598df94:
  plVar7 = (long *)(uVar12 * 8 + 8);
  if (plVar11 == (long *)0x0) {
    uVar12 = param_2;
    func_0x000100064708();
    uVar12 = uVar12 - 8 >> 3;
    if (0x7ffffffe < uVar12) {
      uVar12 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar5 = aplStack_58;
    aplStack_58[0] = plVar7;
    func_0x0001053abb00(pplVar5,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar5 != (long **)0x0) {
      plVar11 = (long *)(long)*(char *)((long)pplVar5 + 0x17);
      pplVar8 = pplVar5;
      if ((long)plVar11 < 0) {
        pplVar8 = (long **)*pplVar5;
        plVar11 = pplVar5[1];
      }
      func_0x00010bdb2a08(aplStack_58,&UNK_10f317bd9,0x10a,pplVar8,plVar11);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar5 = aplStack_58;
      func_0x00010ae6c700();
      plVar11 = pplVar5[1] + -1;
      if (*plVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar11);
        return;
      }
      uVar12 = (long)*(int *)((long)pplVar5 + 4) * 8 + 8;
      ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
      (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar11);
      if (ppuVar3[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar4 = ppuVar3[2];
      uVar9 = 0x3b - LZCOUNT(uVar12);
      bVar2 = puVar4[0x50];
      if (uVar9 < bVar2) {
        lVar10 = *(long *)(puVar4 + 0x58);
        *plVar11 = *(long *)(lVar10 + uVar9 * 8);
        *(long **)(lVar10 + uVar9 * 8) = plVar11;
      }
      else {
        if (bVar2 == 0) {
          lVar10 = 0;
        }
        else {
          _memmove(plVar11,*(undefined8 *)(puVar4 + 0x58),(ulong)bVar2 << 3);
          lVar10 = (ulong)(byte)puVar4[0x50] << 3;
        }
        uVar9 = uVar12 >> 3;
        if (0 < (long)((uVar12 & 0xfffffffffffffff8) - lVar10)) {
          _bzero((long)plVar11 + lVar10);
        }
        *(long **)(puVar4 + 0x58) = plVar11;
        if (0x3f < uVar9) {
          uVar9 = 0x40;
        }
        puVar4[0x50] = (char)uVar9;
      }
      return;
    }
    plVar6 = plVar11;
    func_0x0001053abb54(plVar11,plVar7,1);
    plVar7 = plVar6;
  }
  *plVar7 = (long)plVar11;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar7 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 3);
    }
    FUN_10598e090(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar12;
  *(long **)(param_1 + 8) = plVar7 + 1;
  return;
}



/* Entry: 10598e090; end: 10598e0e3;  */

void FUN_10598e090(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) * 8 + 8;
  ppuVar2 = &PTR___tlv_bootstrap_11340dac8;
  (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 10598e0e4; end: 10598e117;  */

long FUN_10598e0e4(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_10598e118(param_1);
  }
  return param_1;
}



/* Entry: 10598e118; end: 10598e12b;  */

void FUN_10598e118(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598e12c; end: 10598e157;  */

undefined8 * FUN_10598e12c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10598c954(param_1,param_3);
  return param_1;
}



/* Entry: 10598e158; end: 10598e187;  */

long * FUN_10598e158(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001000681a0(param_1);
  }
  return param_1;
}



/* Entry: 10598e188; end: 10598e59b;  */

void FUN_10598e188(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x00010598eef0();
  }
  else {
    func_0x00010598ed80();
  }
  func_0x00010598ed40(&PTR_DAT_1108c5dc8);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10598e59c; end: 10598e5af;  */

void FUN_10598e59c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10598e5b0; end: 10598e6db;  */

void FUN_10598e5b0(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010598ee60();
  if (param_1 == 0) {
    func_0x00010598ee9c();
  }
  else {
    func_0x00010598ece4();
  }
  func_0x00010598ef58();
  func_0x00010598ef64(&PTR_FUN_1108c5e18);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010598ec98();
  }
  func_0x00010598ed8c();
  *(long *)(unaff_x21 + 0x10) = param_1;
  func_0x00010598f080();
  *(long *)(unaff_x21 + 0x18) = param_1;
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  return;
}



/* Entry: 10598e6dc; end: 10598e77f;  */

undefined8 * FUN_10598e6dc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010598f0fc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010598ef10();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010598ef18();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x21;
  *param_1 = &PTR_DAT_1108c6228;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598ec98();
  }
  func_0x00010598eef8();
  func_0x00010598f034();
  param_1[6] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010598ef94();
  }
  param_1[7] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010598ef94();
  }
  param_1[8] = puVar2;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(unaff_x19 + 0x48);
  return param_1;
}



/* Entry: 10598e780; end: 10598e8b7;  */

void FUN_10598e780(long param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x21;
  
  func_0x00010598ee60();
  if (param_1 == 0) {
    func_0x00010598ee9c();
  }
  else {
    func_0x00010598ece4();
  }
  func_0x00010598ef58();
  func_0x00010598ef64(&PTR_DAT_1108c6188);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010598ec98();
  }
  func_0x00010598ed8c();
  func_0x00010598eec0();
  if (extraout_w8 == 1) {
    FUN_10598eb44();
    *(undefined8 *)(unaff_x21 + 0x18) = unaff_x19;
  }
  return;
}



/* Entry: 10598e8b8; end: 10598e95b;  */

undefined8 * FUN_10598e8b8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x00010598f0fc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010598ef10();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010598ef18();
  }
  puVar2 = param_1 + 1;
  *puVar2 = unaff_x21;
  *param_1 = &PTR_DAT_1108c60e8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598ec98();
  }
  func_0x00010598eef8();
  func_0x00010598f034();
  param_1[6] = puVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010598ef94();
  }
  param_1[7] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010598ef94();
  }
  param_1[8] = puVar2;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(unaff_x19 + 0x48);
  return param_1;
}



/* Entry: 10598e95c; end: 10598e9af;  */

void FUN_10598e95c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010598ee60();
  if (param_1 == 0) {
    func_0x00010598eef0();
  }
  else {
    func_0x00010598ed80();
  }
  func_0x00010598ef58();
  func_0x00010598ef64(&PTR_DAT_1108c5dc8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010598ec98();
  }
  func_0x00010598ed8c();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 10598e9b0; end: 10598ea33;  */

void FUN_10598e9b0(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010598ee60();
  if (param_1 == 0) {
    __Znwm(0x40);
  }
  else {
    func_0x00010598f00c();
  }
  func_0x00010598ef58();
  func_0x00010598ef64(&PTR_DAT_1108c5eb8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010598ec98();
  }
  FUN_10598dec8(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  FUN_10598dec8(unaff_x21 + 0x28);
  *(undefined8 *)(unaff_x21 + 0x38) = 0;
  return;
}



/* Entry: 10598ea34; end: 10598eab3;  */

undefined8 * FUN_10598ea34(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010598f0f0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010598ef28();
  }
  else {
    func_0x00010598f018();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_1108c5ff8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010598ec98();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x00010598f048();
  param_1[2] = lVar1;
  lVar1 = unaff_x19 + 0x18;
  func_0x00010598f048();
  param_1[3] = lVar1;
  lVar1 = unaff_x19 + 0x20;
  func_0x00010598f048();
  param_1[4] = lVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(unaff_x19 + 0x28);
  return param_1;
}



/* Entry: 10598eab4; end: 10598eaeb;  */

undefined8 * FUN_10598eab4(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010598f0f0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010598ef10();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010598ef18();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_1108c68b0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10598f6d4(param_1 + 3);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_10598f798();
  }
  param_1[6] = unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(unaff_x19 + 0x48);
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 10598eaec; end: 10598eb07;  */

void FUN_10598eaec(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar12 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 1) goto LAB_10598df90;
  }
  else {
    plVar12 = (long *)plVar12[-1];
    if ((int)param_2 < 1) {
LAB_10598df90:
      uVar13 = 1;
      goto LAB_10598df94;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar13 = 0x7fffffff;
      goto LAB_10598df94;
    }
  }
  if ((int)param_2 < (int)(uVar1 << 1 | 1)) {
    param_2 = uVar1 * 2 + 1;
  }
  uVar13 = (ulong)param_2;
LAB_10598df94:
  plVar8 = (long *)(uVar13 * 8 + 8);
  if (plVar12 == (long *)0x0) {
    uVar13 = (ulong)uVar2;
    func_0x000100064708();
    uVar13 = uVar13 - 8 >> 3;
    if (0x7ffffffe < uVar13) {
      uVar13 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar6 = aplStack_58;
    aplStack_58[0] = plVar8;
    func_0x0001053abb00(pplVar6,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar6 != (long **)0x0) {
      plVar12 = (long *)(long)*(char *)((long)pplVar6 + 0x17);
      pplVar9 = pplVar6;
      if ((long)plVar12 < 0) {
        pplVar9 = (long **)*pplVar6;
        plVar12 = pplVar6[1];
      }
      func_0x00010bdb2a08(aplStack_58,&UNK_10f317bd9,0x10a,pplVar9,plVar12);
      func_0x0001053abb1c(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar6 = aplStack_58;
      func_0x00010ae6c700();
      plVar12 = pplVar6[1] + -1;
      if (*plVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar12);
        return;
      }
      uVar13 = (long)*(int *)((long)pplVar6 + 4) * 8 + 8;
      ppuVar4 = &PTR___tlv_bootstrap_11340dac8;
      (*(code *)PTR___tlv_bootstrap_11340dac8)(*plVar12);
      if (ppuVar4[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar5 = ppuVar4[2];
      uVar10 = 0x3b - LZCOUNT(uVar13);
      bVar3 = puVar5[0x50];
      if (uVar10 < bVar3) {
        lVar11 = *(long *)(puVar5 + 0x58);
        *plVar12 = *(long *)(lVar11 + uVar10 * 8);
        *(long **)(lVar11 + uVar10 * 8) = plVar12;
      }
      else {
        if (bVar3 == 0) {
          lVar11 = 0;
        }
        else {
          _memmove(plVar12,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
          lVar11 = (ulong)(byte)puVar5[0x50] << 3;
        }
        uVar10 = uVar13 >> 3;
        if (0 < (long)((uVar13 & 0xfffffffffffffff8) - lVar11)) {
          _bzero((long)plVar12 + lVar11);
        }
        *(long **)(puVar5 + 0x58) = plVar12;
        if (0x3f < uVar10) {
          uVar10 = 0x40;
        }
        puVar5[0x50] = (char)uVar10;
      }
      return;
    }
    plVar7 = plVar12;
    func_0x0001053abb54(plVar12,plVar8,1);
    plVar8 = plVar7;
  }
  *plVar8 = (long)plVar12;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      _memcpy(plVar8 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 3);
    }
    FUN_10598e090(param_1);
  }
  param_1[1] = (uint)uVar13;
  *(long **)(param_1 + 2) = plVar8 + 1;
  return;
}



/* Entry: 10598eb08; end: 10598eb43;  */

long FUN_10598eb08(long param_1)

{
  long unaff_x20;
  
  func_0x00010598f0f0();
  if (param_1 == 0) {
    func_0x00010598eef0();
  }
  else {
    func_0x00010b4d80e0();
    param_1 = unaff_x20;
  }
  func_0x00010bcec234(&PTR_DAT_110d9b410);
  func_0x00010bceb748();
  return param_1;
}



/* Entry: 10598eb44; end: 10598eba3;  */

undefined8 * FUN_10598eb44(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010598f0fc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010598ef78();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010598ef80();
  }
  *param_1 = &PTR_FUN_1108c5fa8;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_10598cc20();
  return param_1;
}



/* Entry: 10598eba4; end: 10598ec03;  */

undefined8 * FUN_10598eba4(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010598f0fc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010598ef78();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010598ef80();
  }
  *param_1 = &PTR_FUN_1108c6048;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_10598cedc();
  return param_1;
}



/* Entry: 10598ec04; end: 10598ed13;  */

long FUN_10598ec04(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10598ed14; end: 10598ed2b;  */

void FUN_10598ed14(void)

{
  func_0x0001001a5744();
  return;
}



/* Entry: 10598ed2c; end: 10598f13b;  */

void FUN_10598ed2c(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x0001001a597c();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar1,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 10598f13c; end: 10598f14f;  */

void FUN_10598f13c(void)

{
  func_0x0001001a5744();
  return;
}



/* Entry: 10598f150; end: 10598f1e3;  */

undefined8 * FUN_10598f150(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1108c68b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10598f6d4(param_1 + 3,param_2,param_3 + 0x18);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10598f798(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0x48);
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 10598f1e4; end: 10598f213;  */

long FUN_10598f1e4(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_10598f214(param_1);
  return param_1;
}



/* Entry: 10598f214; end: 10598f243;  */

long * FUN_10598f214(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 10598f244; end: 10598f247;  */

long FUN_10598f244(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_10598f214(param_1);
  return param_1;
}



/* Entry: 10598f248; end: 10598f25b;  */

void FUN_10598f248(void)

{
  FUN_10598f1e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598f25c; end: 10598f267;  */

undefined ** FUN_10598f25c(void)

{
  return &PTR_DAT_1108c68f0;
}



/* Entry: 10598f268; end: 10598f2bf;  */

void FUN_10598f268(long param_1)

{
  ulong *puVar1;
  
  FUN_10598f784(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10599e3ec(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10598f2c0; end: 10598f43b;  */

long * FUN_10598f2c0(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  plVar2 = param_1;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x000100601864(1,param_1[6],*(undefined4 *)(param_1[6] + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  if ((int)param_1[7] != 0) {
    plVar2 = param_3;
    FUN_10598f43c(param_3,(int)param_1[7],param_2);
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    plVar2 = param_3;
    func_0x0001001a5b64(param_3,*(int *)((long)param_1 + 0x3c),param_2);
    param_2 = plVar2;
  }
  lVar4 = param_1[4];
  for (iVar8 = 0; (int)lVar4 != iVar8; iVar8 = iVar8 + 1) {
    uVar5 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
    }
    plVar2 = (long *)0x4;
    func_0x000100601864(4,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
    param_2 = plVar2;
  }
  plVar7 = plVar2;
  if ((int)param_1[8] != 0) {
    func_0x00010598f7f0();
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 8);
    uVar3 = 0x28;
    func_0x0001001a59d0(0x28,plVar2);
    func_0x0001001a59fc(plVar7,uVar3);
    param_2 = plVar7;
  }
  if (*(char *)((long)param_1 + 0x44) == '\x01') {
    func_0x00010598f7f0();
    param_2 = (long *)(ulong)*(byte *)((long)param_1 + 0x44);
    uVar3 = 0x30;
    func_0x0001001a59d0(0x30,plVar7);
    func_0x0001001a59d0(param_2,uVar3);
  }
  plVar2 = param_2;
  if ((int)param_1[9] != 0) {
    plVar2 = param_3;
    func_0x00010598f468(param_3,(int)param_1[9],param_2);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar8);
    }
    _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  return plVar2;
}



/* Entry: 10598f43c; end: 10598f493;  */

void FUN_10598f43c(undefined8 param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int unaff_w19;
  
  func_0x0001001a5b58();
  pbVar2 = (byte *)0x10;
  func_0x0001001a59d0(0x10,param_1);
  for (uVar1 = (ulong)unaff_w19; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  return;
}



/* Entry: 10598f494; end: 10598f59f;  */

void FUN_10598f494(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  lVar5 = (long)iVar3;
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10598f5a0();
    lVar5 = uVar4 + lVar5;
    iVar3 = (int)lVar5;
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
    FUN_10598f5a0();
    iVar3 = iVar3 + iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x40)) * -9 + 0x280U >> 6) + 1;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x44) * 2;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10598f5a0; end: 10598f5cb;  */

long FUN_10598f5a0(long param_1)

{
  func_0x00010599e4a4();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10598f5cc; end: 10598f5cf;  */

void FUN_10598f5cc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10598f6bc(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10598f798(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10599e510();
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598f5d0; end: 10598f6bb;  */

void FUN_10598f5d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  FUN_10598f6bc(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10598f798(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10599e510();
    }
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598f6bc; end: 10598f6d3;  */

void FUN_10598f6bc(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10598f6d4; end: 10598f6ff;  */

undefined8 * FUN_10598f6d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10598f6bc(param_1,param_3);
  return param_1;
}



/* Entry: 10598f700; end: 10598f72f;  */

long * FUN_10598f700(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001000681a0(param_1);
  }
  return param_1;
}



/* Entry: 10598f730; end: 10598f783;  */

void FUN_10598f730(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_FUN_1108c68b0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  return;
}



/* Entry: 10598f784; end: 10598f797;  */

void FUN_10598f784(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10598f798; end: 10598f7db;  */

undefined8 * FUN_10598f798(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_1108c9350;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_2 = param_2 + 0x10;
  func_0x0001002a0e60(param_2,param_1);
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 10598f7dc; end: 10598f7fb;  */

void FUN_10598f7dc(void)

{
  return;
}



/* Entry: 10598f7fc; end: 10598f897;  */

undefined8 * FUN_10598f7fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1108c6960;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10598fd00(param_1 + 2,param_2,param_3 + 0x10);
  lVar1 = param_3 + 0x28;
  func_0x0001002a0e60(lVar1,param_2);
  param_1[5] = lVar1;
  param_3 = param_3 + 0x30;
  func_0x0001002a0e60(param_3,param_2);
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



/* Entry: 10598f898; end: 10598f8c7;  */

long FUN_10598f898(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_10598f8c8(param_1);
  return param_1;
}



/* Entry: 10598f8c8; end: 10598f8f7;  */

long * FUN_10598f8c8(long param_1)

{
  long *plVar1;
  
  func_0x000100067de0(param_1 + 0x28);
  func_0x000100067de0(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10598f8f8; end: 10598f8fb;  */

long FUN_10598f8f8(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  FUN_10598f8c8(param_1);
  return param_1;
}



/* Entry: 10598f8fc; end: 10598f90f;  */

void FUN_10598f8fc(void)

{
  FUN_10598f898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598f910; end: 10598f91b;  */

undefined ** FUN_10598f910(void)

{
  return &PTR_DAT_1108c69a0;
}



/* Entry: 10598f91c; end: 10598f967;  */

void FUN_10598f91c(long param_1)

{
  ulong *puVar1;
  
  func_0x0001000636c0(param_1 + 0x10);
  func_0x00010029b2d4(param_1 + 0x28);
  func_0x00010029b2d4(param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10598f968; end: 10598fb5b;  */

long * FUN_10598f968(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10598f9b8;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10598f9b8:
    func_0x0001006281b4(puVar8,lVar4,1,&UNK_10f317c76);
    param_2 = param_3;
    FUN_10598fddc(param_3,1);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10598fa20;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10598fa20;
  func_0x0001006281b4(puVar8,lVar4,1,&UNK_10f317ca3);
  param_2 = param_3;
  FUN_10598fddc(param_3,2);
LAB_10598fa20:
  lVar4 = 8;
  for (uVar11 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + lVar4 + -1);
    }
    puVar9 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)puVar9 + 0x17);
    puVar8 = puVar9;
    if (lVar5 < 0) {
      lVar5 = puVar9[1];
      puVar8 = (undefined8 *)*puVar9;
    }
    func_0x0001006281b4(puVar8,lVar5,1,&UNK_10f317cda);
    lVar5 = (long)*(char *)((long)puVar9 + 0x17);
    if (((lVar5 < 0) && (lVar5 = puVar9[1], 0x7f < lVar5)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar5)) {
      plVar3 = param_3;
      func_0x00010b4d5120(param_3,3,puVar9,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x1a;
      *(char *)((long)param_2 + 1) = (char)lVar5;
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        puVar9 = (undefined8 *)*puVar9;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar9,lVar5);
      plVar3 = (long *)((undefined1 *)((long)param_2 + 2) + lVar5);
    }
    lVar4 = lVar4 + 8;
    param_2 = plVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar11 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar11 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar11 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(int)uVar11 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar4,uVar11 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar11);
  }
  while( true ) {
    iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar7 = (int)uVar11;
    uVar11 = (ulong)(uint)(iVar7 - iVar10);
    if (iVar7 - iVar10 == 0 || iVar7 < iVar10) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar10);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar7);
}



/* Entry: 10598fb5c; end: 10598fc37;  */

ulong FUN_10598fb5c(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x0001001a5744();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x0001001a5744();
    uVar4 = uVar4 + uVar5 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x0001001a5744();
    uVar4 = uVar4 + uVar5 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x38) = (int)uVar4;
  return uVar4;
}



/* Entry: 10598fc38; end: 10598fc3b;  */

void FUN_10598fc38(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10598fce8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x30,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598fc3c; end: 10598fce7;  */

void FUN_10598fc3c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10598fce8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x28,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x30,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10598fce8; end: 10598fcff;  */

void FUN_10598fce8(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x19;
  int unaff_w20;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lStack_58;
  
  if ((int)param_2[1] != 0) {
    func_0x000100361ce4();
    puVar1 = param_2;
    if ((*param_2 & 1) != 0) {
      puVar1 = (ulong *)(*param_2 + 7);
    }
    uVar2 = param_2[1];
    plVar4 = param_1;
    func_0x000100361e44();
    iVar3 = (int)param_2[1];
    if ((int)plVar4 <= (int)param_2[1]) {
      iVar3 = (int)plVar4;
    }
    for (puVar7 = puVar1; puVar7 < puVar1 + iVar3; puVar7 = puVar7 + 1) {
      plVar4 = (long *)*param_1;
      func_0x000107c60ca4(plVar4,*puVar7);
      param_1 = param_1 + 1;
    }
    lVar6 = unaff_x19[2];
    if (lVar6 == 0) {
      lVar6 = 0;
      while( true ) {
        iVar3 = (int)plVar4;
        if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar6)) break;
        plVar5 = (long *)0x18;
        func_0x000107c60e20();
        plVar4 = plVar5;
        func_0x000107c60c94();
        *(long **)((long)param_1 + lVar6) = plVar5;
        lVar6 = lVar6 + 8;
      }
    }
    else {
      lVar8 = 0;
      while( true ) {
        iVar3 = (int)plVar4;
        if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar8)) break;
        plVar4 = &lStack_58;
        lStack_58 = lVar6;
        func_0x000107c303c8(plVar4,*(ulong *)((long)puVar7 + lVar8));
        *(long **)((long)param_1 + lVar8) = plVar4;
        lVar8 = lVar8 + 8;
      }
    }
    func_0x000100361e74();
    if (iVar3 < unaff_w20) {
      *(int *)(*unaff_x19 + -1) = unaff_w20;
    }
    return;
  }
  return;
}



/* Entry: 10598fd00; end: 10598fd83;  */

undefined8 * FUN_10598fd00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10598fce8(param_1,param_3);
  return param_1;
}



/* Entry: 10598fd84; end: 10598fddb;  */

void FUN_10598fd84(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    func_0x0001001a5598(puVar2[lVar4]);
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10598fddc; end: 10598fde7;  */

long * FUN_10598fddc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x20;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10598fde8; end: 10598fe6b;  */

undefined8 * FUN_10598fde8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1108c6ab8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000105990a04();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10598f798(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10599081c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10598fe6c; end: 10598fe97;  */

undefined8 FUN_10598fe6c(undefined8 param_1)

{
  func_0x000105990a88();
  FUN_10598fe98(param_1);
  return param_1;
}



/* Entry: 10598fe98; end: 10598fecf;  */

void FUN_10598fe98(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10599e398();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_105990514();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598fed0; end: 10598fed3;  */

undefined8 FUN_10598fed0(undefined8 param_1)

{
  func_0x000105990a88();
  FUN_10598fe98(param_1);
  return param_1;
}



/* Entry: 10598fed4; end: 10598fee7;  */

void FUN_10598fed4(void)

{
  FUN_10598fe6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598fee8; end: 10598fef3;  */

undefined ** FUN_10598fee8(void)

{
  return &PTR_DAT_1108c6af8;
}



/* Entry: 10598fef4; end: 10598ffc3;  */

void FUN_10598fef4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10599e3ec(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010598ff48(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10598ffc4; end: 1059900c3;  */

long * FUN_10598ffc4(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *in_x3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar5;
  int iVar6;
  
  func_0x000105990aa4();
  if ((unaff_w21 & 1) != 0) {
    in_x3 = (long *)0x1;
    func_0x0001059909f4(1,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x18));
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    in_x3 = (long *)0x2;
    func_0x0001059909f4(2,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)in_x3 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)in_x3) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        in_x3 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)in_x3 + (long)iVar5);
    }
    _memcpy(in_x3,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)in_x3 + (long)(int)uVar3);
  }
  return in_x3;
}



/* Entry: 1059900c4; end: 1059900db;  */

void FUN_1059900c4(void)

{
  func_0x000105990678();
  func_0x0001059909b8();
  return;
}



/* Entry: 1059900dc; end: 1059900df;  */

void FUN_1059900dc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000105990a5c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10598f798();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10599e510();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10599081c();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010599017c();
      }
    }
  }
  func_0x000105990a10();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000105990a4c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1059900e0; end: 105990267;  */

void FUN_1059900e0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000105990a5c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10598f798();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10599e510();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10599081c();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010599017c();
      }
    }
  }
  func_0x000105990a10();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x000105990a4c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 105990268; end: 1059902a3;  */

long FUN_105990268(long param_1)

{
  func_0x000105990a88();
  func_0x000100067de0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059902a4; end: 1059902a7;  */

long FUN_1059902a4(long param_1)

{
  func_0x000105990a88();
  func_0x000100067de0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10598f898();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1059902a8; end: 1059902bb;  */

void FUN_1059902a8(void)

{
  FUN_105990268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



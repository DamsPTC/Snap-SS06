/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10898bd08; end: 10898bd1b;  */

void FUN_10898bd08(void)

{
  FUN_10898bcdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898bd1c; end: 10898bd4b;  */

void FUN_10898bd1c(void)

{
  func_0x00010898be6c();
  func_0x00010898bf00();
  func_0x00010898be34();
  return;
}



/* Entry: 10898bd4c; end: 10898bd9b;  */

void FUN_10898bd4c(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  undefined *puVar2;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dcc0;
  (*(code *)PTR___tlv_bootstrap_11340dcc0)(param_1);
  puVar2 = *ppuVar1;
  *ppuVar1 = extraout_x8;
  (**(code **)(param_2 + 0x18))(param_2);
  *ppuVar1 = puVar2;
  return;
}



/* Entry: 10898bd9c; end: 10898bdc3;  */

undefined8 FUN_10898bd9c(undefined8 param_1)

{
  func_0x00010898be80(&PTR_FUN_110aa2998);
  return param_1;
}



/* Entry: 10898bdc4; end: 10898bdcf;  */

void FUN_10898bdc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010898be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(1,param_1 + 0x10,param_1 + 0x10);
  return;
}



/* Entry: 10898bdd0; end: 10898bdff;  */

void FUN_10898bdd0(void)

{
  func_0x00010898be6c();
  func_0x00010898bf00();
  func_0x00010898be34();
  return;
}



/* Entry: 10898be00; end: 10898be27;  */

undefined8 FUN_10898be00(undefined8 param_1)

{
  func_0x00010898be80(&PTR_FUN_110aa29b0);
  return param_1;
}



/* Entry: 10898be28; end: 10898bf2b;  */

void FUN_10898be28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010898be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(1,param_1 + 0x10,param_1 + 0x10);
  return;
}



/* Entry: 10898bf2c; end: 10898bf83;  */

undefined8 FUN_10898bf2c(void)

{
  func_0x00010898bfd0();
  func_0x00010898bff4();
  func_0x00010894b400();
  func_0x00010898bf9c();
  return 1;
}



/* Entry: 10898bf84; end: 10898bf87;  */

undefined8 * FUN_10898bf84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa29d8;
  func_0x00010897b3e4(param_1 + 1);
  return param_1;
}



/* Entry: 10898bf88; end: 10898bf9b;  */

void FUN_10898bf88(void)

{
  func_0x00010897f638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898bf9c; end: 10898c00b;  */

void FUN_10898bf9c(undefined8 param_1)

{
  long *unaff_x20;
  undefined8 uStack0000000000000010;
  undefined2 uStack0000000000000018;
  undefined1 uStack000000000000001a;
  undefined8 uStack000000000000001c;
  undefined1 uStack0000000000000024;
  undefined1 uStack0000000000000026;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000018 = 0;
  uStack000000000000001a = 0;
  uStack0000000000000026 = 0;
  uStack000000000000001c = 0;
  uStack0000000000000024 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000010 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010898bfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0xb8))();
  return;
}



/* Entry: 10898c00c; end: 10898c103;  */

void FUN_10898c00c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = (undefined8 *)0xc8;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110aa2a80;
  puVar1 = puVar4 + 3;
  FUN_10894a0e0(puVar1,param_3,param_4);
  lVar5 = puVar4[5];
  if ((lVar5 == 0) || (*(long *)(lVar5 + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar6 = puVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_50 = puVar4[4];
    puVar4[4] = puVar1;
    puVar4[5] = puVar4;
    puStack_70 = puVar1;
    puStack_68 = puVar4;
    puStack_60 = puVar1;
    puStack_58 = puVar4;
    lStack_48 = lVar5;
    FUN_10894af04(&uStack_50);
    func_0x00010894af28(&puStack_60);
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  puStack_70 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  func_0x00010894af28(&puStack_70);
  return;
}



/* Entry: 10898c104; end: 10898c11f;  */

void FUN_10898c104(void)

{
  return;
}



/* Entry: 10898c120; end: 10898c133;  */

void FUN_10898c120(void)

{
  func_0x00010898c144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898c134; end: 10898c1eb;  */

void FUN_10898c134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010898c13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10898c1ec; end: 10898c227;  */

undefined8 * FUN_10898c1ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2ad0;
  FUN_10898c6cc(param_1 + 3);
  FUN_10898c6a4(param_1 + 1);
  return param_1;
}



/* Entry: 10898c228; end: 10898c22b;  */

undefined8 * FUN_10898c228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2ad0;
  FUN_10898c6cc(param_1 + 3);
  FUN_10898c6a4(param_1 + 1);
  return param_1;
}



/* Entry: 10898c22c; end: 10898c23f;  */

void FUN_10898c22c(void)

{
  FUN_10898c1ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898c240; end: 10898c53f;  */

long * FUN_10898c240(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  undefined8 uVar5;
  int extraout_w9;
  int extraout_w9_00;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  long lVar7;
  ulong uStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined ***pppuStack_40;
  long lStack_38;
  int iVar4;
  
  plVar1 = param_1;
  switch((char)param_1[8]) {
  case '\x01':
    func_0x00010898c8d4((int)param_1[0xf] / 2);
    *(int *)(param_1 + 0xd) = extraout_w10;
    *(int *)((long)param_1 + 0x6c) = extraout_w8_00;
    *(int *)(param_1 + 0xe) = extraout_w8_00;
    func_0x00010898c8b4(extraout_w8_00 + extraout_w10);
    lVar7 = param_1[9] + (long)*(int *)((long)param_1 + 0x7c) * (long)(int)param_1[0xd];
    lVar6 = lVar7 + (*(int *)((long)param_1 + 0x6c) * *(int *)((long)param_1 + 0x7c)) / 2;
    goto code_r0x00010898c34c;
  case '\x02':
    func_0x00010898c8d4((int)param_1[0xf] / 2);
    *(int *)(param_1 + 0xd) = extraout_w10_00;
    *(int *)((long)param_1 + 0x6c) = extraout_w8_01;
    *(int *)(param_1 + 0xe) = extraout_w8_01;
    func_0x00010898c8b4(extraout_w10_00 + extraout_w8_01 * 2);
    lVar7 = param_1[9] + (long)*(int *)((long)param_1 + 0x7c) * (long)(int)param_1[0xd];
    lVar6 = lVar7 + (long)*(int *)((long)param_1 + 0x6c) * (long)*(int *)((long)param_1 + 0x7c);
code_r0x00010898c34c:
    param_1[10] = lVar7;
    param_1[0xb] = lVar6;
LAB_10898c350:
    return plVar1;
  case '\x03':
    iVar4 = (int)param_1[0xf] * 3;
    break;
  case '\x04':
  case '\b':
    iVar4 = (int)param_1[0xf] << 2;
    break;
  case '\x05':
    func_0x00010898c8d4((int)param_1[0xf]);
    *(int *)(param_1 + 0xd) = extraout_w8;
    *(int *)((long)param_1 + 0x6c) = extraout_w8;
    FUN_10898c540(param_1,extraout_w9 * extraout_w8 + (extraout_w9 * extraout_w8 >> 1));
    param_1[10] = param_1[9] + (long)*(int *)((long)param_1 + 0x7c) * (long)(int)param_1[0xd];
    return plVar1;
  case '\x06':
    iVar4 = (int)param_1[0xf] << 1;
    break;
  case '\a':
    goto code_r0x00010898c370;
  default:
    goto LAB_10898c350;
  }
  func_0x00010898c8d4(iVar4);
  *(int *)(param_1 + 0xd) = extraout_w8_02;
  param_2 = extraout_w8_02 * extraout_w9_00;
code_r0x00010898c370:
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_2;
  if (param_2 == *(uint *)(param_1 + 0x10)) goto LAB_10898c658;
  lVar7 = param_1[1];
  uStack_88 = (ulong)param_2;
  lVar6 = lVar7 + 0x18;
  FUN_10898f8d4(lVar6,&uStack_88);
  ppuStack_58 = &PTR_FUN_110aa2b10;
  pppuStack_40 = &ppuStack_58;
  uStack_48 = uStack_88;
  ppuStack_78 = &PTR_FUN_110aa2b10;
  uStack_68 = uStack_88;
  lStack_80 = lVar6;
  lStack_70 = lVar7;
  pppuStack_60 = &ppuStack_78;
  lStack_50 = lVar7;
  FUN_10898c73c(&ppuStack_58);
  lVar6 = lStack_80;
  lStack_80 = 0;
  lVar7 = param_1[3];
  param_1[3] = lVar6;
  if (lVar7 != 0) {
    FUN_10898c708(param_1[7]);
  }
  uVar3 = (uint)lVar7;
  plVar1 = param_1 + 4;
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 == plVar1) {
    uVar5 = 0x20;
LAB_10898c608:
    func_0x00010898c8a8(uVar5);
  }
  else if (plVar2 != (long *)0x0) {
    uVar5 = 0x28;
    goto LAB_10898c608;
  }
  if (pppuStack_60 == (undefined ***)0x0) {
    param_1[7] = 0;
  }
  else if (pppuStack_60 == &ppuStack_78) {
    param_1[7] = (long)plVar1;
    (*(code *)(*pppuStack_60)[3])();
    uVar3 = (uint)plVar1;
  }
  else {
    param_1[7] = (long)pppuStack_60;
    pppuStack_60 = (undefined ***)0x0;
  }
  plVar1 = &lStack_80;
  FUN_10898c6cc(plVar1);
  *(uint *)(param_1 + 0x10) = param_2;
  param_1[9] = param_1[3];
LAB_10898c658:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (uVar3 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    return (long *)0x0;
  }
  return plVar1;
}



/* Entry: 10898c540; end: 10898c69b;  */

long * FUN_10898c540(long *param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined ***pppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == *(uint *)(param_1 + 0x10)) goto LAB_10898c658;
  lVar6 = param_1[1];
  uStack_88 = (ulong)param_2;
  lVar1 = lVar6 + 0x18;
  FUN_10898f8d4(lVar1,&uStack_88);
  ppuStack_58 = &PTR_FUN_110aa2b10;
  pppuStack_40 = &ppuStack_58;
  uStack_48 = uStack_88;
  ppuStack_78 = &PTR_FUN_110aa2b10;
  uStack_68 = uStack_88;
  lStack_80 = lVar1;
  lStack_70 = lVar6;
  pppuStack_60 = &ppuStack_78;
  lStack_50 = lVar6;
  FUN_10898c73c(&ppuStack_58);
  lVar1 = lStack_80;
  lStack_80 = 0;
  lVar6 = param_1[3];
  param_1[3] = lVar1;
  if (lVar6 != 0) {
    FUN_10898c708(param_1[7]);
  }
  uVar4 = (uint)lVar6;
  plVar3 = param_1 + 4;
  plVar2 = (long *)param_1[7];
  param_1[7] = 0;
  if (plVar2 == plVar3) {
    uVar5 = 0x20;
LAB_10898c608:
    func_0x00010898c8a8(uVar5);
  }
  else if (plVar2 != (long *)0x0) {
    uVar5 = 0x28;
    goto LAB_10898c608;
  }
  if (pppuStack_60 == (undefined ***)0x0) {
    param_1[7] = 0;
  }
  else if (pppuStack_60 == &ppuStack_78) {
    param_1[7] = (long)plVar3;
    (*(code *)(*pppuStack_60)[3])();
    uVar4 = (uint)plVar3;
  }
  else {
    param_1[7] = (long)pppuStack_60;
    pppuStack_60 = (undefined ***)0x0;
  }
  plVar3 = &lStack_80;
  FUN_10898c6cc(plVar3);
  *(uint *)(param_1 + 0x10) = param_2;
  param_1[9] = param_1[3];
LAB_10898c658:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (uVar4 != 0) {
      func_0x000104bd46a0();
    }
    __Unwind_Resume();
    return (long *)0x0;
  }
  return plVar3;
}



/* Entry: 10898c69c; end: 10898c6a3;  */

undefined8 FUN_10898c69c(void)

{
  return 0;
}



/* Entry: 10898c6a4; end: 10898c6cb;  */

long FUN_10898c6a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10898c6cc; end: 10898c707;  */

long * FUN_10898c6cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10898c708(param_1[4]);
  }
  FUN_10898c73c(param_1 + 1);
  return param_1;
}



/* Entry: 10898c708; end: 10898c73b;  */

long * FUN_10898c708(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_18);
    return param_1;
  }
  func_0x000104bfeb48();
  if ((long *)param_1[3] == param_1) {
    uVar1 = 0x20;
  }
  else {
    if ((long *)param_1[3] == (long *)0x0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010898c8a8(uVar1);
  return param_1;
}



/* Entry: 10898c73c; end: 10898c777;  */

long FUN_10898c73c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010898c8a8(uVar1);
  return param_1;
}



/* Entry: 10898c778; end: 10898c77f;  */

void FUN_10898c778(void)

{
  return;
}



/* Entry: 10898c780; end: 10898c7b3;  */

void FUN_10898c780(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110aa2b10;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10898c7b4; end: 10898c7f3;  */

void FUN_10898c7b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110aa2b10;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10898c7f4; end: 10898c82b;  */

long FUN_10898c7f4(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110aa2b80);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10898c82c; end: 10898c8df;  */

undefined ** FUN_10898c82c(void)

{
  return &PTR_DAT_110aa2b80;
}



/* Entry: 10898c8e0; end: 10898c92b;  */

void FUN_10898c8e0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10898c9e0(param_1,0,0,param_2);
  plVar1[1] = (long)param_1;
  lVar2 = *param_1;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *param_1 = (long)plVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10898c92c; end: 10898c98b;  */

void FUN_10898c92c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1[2] != 0) {
    plVar2 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar2 = (long *)plVar2[1];
      FUN_10898c98c(param_1);
    }
  }
  return;
}



/* Entry: 10898c98c; end: 10898c9df;  */

void FUN_10898c98c(undefined8 param_1,long param_2)

{
  func_0x00010898c9b4(param_2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10898c9e0; end: 10898ca97;  */

undefined8 *
FUN_10898c9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar4 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = 1;
  FUN_10898ca98(auStack_50);
  puVar5 = puStack_40;
  *puStack_40 = param_2;
  puStack_40[1] = param_3;
  puStack_40[2] = *param_4;
  lVar7 = param_4[1];
  puStack_40[3] = lVar7;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_40 = (undefined8 *)0x0;
  FUN_10898cae0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar4[1] = uVar6;
  puVar5 = puVar4;
  FUN_10898cac4();
  puVar4[2] = puVar5;
  return puVar4;
}



/* Entry: 10898ca98; end: 10898cac3;  */

long FUN_10898ca98(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10898cac4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10898cac4; end: 10898cadf;  */

void FUN_10898cac4(long param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10898cae0; end: 10898caef;  */

void FUN_10898cae0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10898caf0; end: 10898cd17;  */

undefined8 *
FUN_10898caf0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2ba0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  puVar5 = param_1 + 6;
  param_1[7] = 0;
  *puVar5 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = *param_4;
  lVar4 = param_4[1];
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x00010898d4e8();
    } while (extraout_w10 != 0);
  }
  FUN_108997998(param_1 + 0xc,param_3);
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110aa2c48;
  puVar2[3] = &PTR_DAT_110aa2c98;
  puVar2[4] = 0;
  puVar2[5] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  param_1[8] = puVar2 + 3;
  param_1[9] = puVar2;
  func_0x00010898d27c(&uStack_80);
  func_0x00010898d27c(&uStack_60);
  uVar1 = (int)param_3 - 1;
  if (uVar1 < 4) {
    puVar3 = (&PTR_DAT_110aa2d38)[uVar1];
  }
  else {
    puVar3 = &DAT_10df7c664;
  }
  plVar6 = (long *)*param_2;
  func_0x000107c278b8(&uStack_98,puVar3);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  uStack_70 = uStack_88;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  if (param_1[9] != 0) {
    do {
      func_0x00010898d4e8();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar6 + 0x18))(&uStack_60,plVar6,&uStack_80,&uStack_b0);
  FUN_10898cd18(puVar5,&uStack_60);
  func_0x00010898d1dc(&uStack_60);
  FUN_108944fa8(&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  func_0x000108997150(param_1[10],puVar5);
  return param_1;
}



/* Entry: 10898cd18; end: 10898cdb7;  */

undefined8 * FUN_10898cd18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010898d1dc(&uStack_30);
  return param_1;
}



/* Entry: 10898cdb8; end: 10898cdbb;  */

undefined8 * FUN_10898cdb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2ba0;
  func_0x00010898d200(param_1 + 0xc);
  func_0x00010894c74c(param_1 + 10);
  func_0x00010898d27c(param_1 + 8);
  func_0x00010898d1dc(param_1 + 6);
  func_0x00010898d258(param_1 + 3);
  func_0x00010898d234(param_1 + 1);
  return param_1;
}



/* Entry: 10898cdbc; end: 10898cdcf;  */

void FUN_10898cdbc(void)

{
  func_0x00010898cd5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898cdd0; end: 10898ce67;  */

void FUN_10898cdd0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = *(undefined8 *)(lVar4 + 0x10);
  uStack_30 = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)(lVar4 + 0x10) = uVar6;
  *(undefined8 *)(lVar4 + 8) = uVar5;
  func_0x00010898d234(&uStack_30);
  func_0x00010898d234(&uStack_40);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010898d4e8();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  func_0x00010898d258(&uStack_30);
  return;
}



/* Entry: 10898ce68; end: 10898ce87;  */

void FUN_10898ce68(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)(param_1 + 0x29) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010898ce84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  return;
}



/* Entry: 10898ce88; end: 10898d033;  */

undefined8
FUN_10898ce88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  FUN_108996d48(*(undefined8 *)(param_1 + 0x50));
  FUN_108996fe4(*(undefined8 *)(param_1 + 0x50));
  pbVar1 = (byte *)(param_1 + 0x29);
  do {
    bVar4 = *pbVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (((param_6 & 1) == 0) && ((bVar4 & 1) == 0)) {
    bVar4 = *(byte *)(param_1 + 0x28) ^ 1;
  }
  else {
    bVar4 = 0;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (((param_5 & 1) == 0) && ((bVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 0;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
              (&lStack_70,*(long **)(param_1 + 0x60),param_2,param_3,param_5);
    if ((lStack_70 == lStack_68) && (lStack_58 == lStack_50)) {
      uVar5 = 0;
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    else {
      plVar6 = *(long **)(param_1 + 0x30);
      FUN_10898d070(&uStack_d0,&lStack_70);
      FUN_10898d070(&uStack_f0,&lStack_58);
      uStack_88 = uStack_e0;
      uStack_a8 = uStack_c8;
      uStack_b0 = uStack_d0;
      uStack_a0 = uStack_c0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_90 = uStack_e8;
      uStack_98 = uStack_f0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_80 = param_4;
      (**(code **)(*plVar6 + 0x10))(plVar6,&uStack_b0);
      func_0x00010898d19c(&uStack_b0);
      func_0x00010894593c(&uStack_f0);
      func_0x00010894593c(&uStack_d0);
      uVar5 = 1;
    }
    func_0x00010898d1bc(&lStack_70);
  }
  return uVar5;
}



/* Entry: 10898d034; end: 10898d063;  */

void FUN_10898d034(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010899792c();
  if (*(char *)(unaff_x19 + 0xb0) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(unaff_x19 + 0xc0) =
         *(long *)(unaff_x19 + 0xc0) + (lVar1 - *(long *)(unaff_x19 + 0xa8));
    if (*(char *)(unaff_x19 + 0xb0) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0xb0) = 0;
    }
    *(long *)(unaff_x19 + 0xb8) = lVar1 - *(long *)(unaff_x19 + 0x98);
    FUN_108996e14(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 10898d064; end: 10898d06f;  */

void FUN_10898d064(void)

{
  return;
}



/* Entry: 10898d070; end: 10898d0a7;  */

undefined8 * FUN_10898d070(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10898d0a8(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  return param_1;
}



/* Entry: 10898d0a8; end: 10898d133;  */

void FUN_10898d0a8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  lStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10898d134(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  uStack_38 = 1;
  func_0x00010898d170(&lStack_40);
  return;
}



/* Entry: 10898d134; end: 10898d29f;  */

long * FUN_10898d134(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    func_0x0001089479e0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return plVar1;
  }
  FUN_108947904();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_108945970(param_1);
  }
  return param_1;
}



/* Entry: 10898d2a0; end: 10898d2a3;  */

void FUN_10898d2a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2c48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898d2a4; end: 10898d2b7;  */

void FUN_10898d2a4(void)

{
  FUN_10898d460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898d2b8; end: 10898d2c3;  */

void FUN_10898d2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010898d514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10898d2c4; end: 10898d2d7;  */

void FUN_10898d2c4(void)

{
  FUN_10898d3d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898d2d8; end: 10898d2db;  */

void FUN_10898d2d8(void)

{
  return;
}



/* Entry: 10898d2dc; end: 10898d39b;  */

void FUN_10898d2dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lStack_50;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x00010898d4cc();
  if (lStack_50 != 0) {
    plVar3 = *(long **)(lStack_50 + 0x18);
    puVar1 = (undefined8 *)0x40;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1 + 3;
    *puVar1 = &PTR_DAT_110aa2cf8;
    FUN_1089908f0(puVar2,param_2);
    puStack_40 = puVar2;
    puStack_38 = puVar1;
    (**(code **)(*plVar3 + 8))(plVar3,&puStack_40);
    FUN_10898d4a0(&puStack_40);
    func_0x00010899700c(*(undefined8 *)(lStack_50 + 0x50),0);
  }
  func_0x00010898d504();
  return;
}



/* Entry: 10898d39c; end: 10898d3cf;  */

void FUN_10898d39c(void)

{
  undefined8 uStack_20;
  
  func_0x00010898d4cc();
  if (uStack_20 != 0) {
    *(undefined1 *)(uStack_20 + 0x29) = 1;
  }
  func_0x00010898d504();
  return;
}



/* Entry: 10898d3d0; end: 10898d45f;  */

undefined8 * FUN_10898d3d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa2c98;
  func_0x00010898d234(param_1 + 1);
  return param_1;
}



/* Entry: 10898d460; end: 10898d473;  */

void FUN_10898d460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2c48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898d474; end: 10898d487;  */

void FUN_10898d474(void)

{
  func_0x00010898d490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898d488; end: 10898d49f;  */

void FUN_10898d488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010898d514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10898d4a0; end: 10898d4c3;  */

void FUN_10898d4a0(long param_1)

{
  func_0x00010898d4dc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10898d4c4; end: 10898d51f;  */

void FUN_10898d4c4(void)

{
  return;
}



/* Entry: 10898d520; end: 10898d737;  */

undefined8 *
FUN_10898d520(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  *param_1 = &PTR_FUN_110aa2d68;
  func_0x000107c278b8(&uStack_70,&UNK_10f4edefb);
  FUN_10898d738(param_1 + 1,&uStack_70,0x40);
  func_0x00010898e790();
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  puVar3 = param_1 + 10;
  param_1[0xb] = 0;
  *puVar3 = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = *param_4;
  lVar2 = param_4[1];
  param_1[0xf] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010898e724();
    } while (extraout_w10 != 0);
  }
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110aa2ec0;
  puVar1[3] = &PTR_DAT_110aa2f10;
  puVar1[4] = param_1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  param_1[0xc] = puVar1 + 3;
  param_1[0xd] = puVar1;
  func_0x00010898e3b8(&uStack_70);
  func_0x00010898e3b8(&uStack_80);
  plVar4 = (long *)*param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_98,param_3);
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  if (param_1[0xd] != 0) {
    do {
      func_0x00010898e724();
    } while (extraout_w10_00 != 0);
  }
  (**(code **)(*plVar4 + 0x18))(&uStack_80,plVar4,&uStack_70,&uStack_b0);
  FUN_10898cd18(puVar3,&uStack_80);
  func_0x00010898d1dc(&uStack_80);
  FUN_108944fa8(&uStack_b0);
  func_0x00010898e790();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  func_0x000108997150(param_1[0xe],puVar3);
  return param_1;
}



/* Entry: 10898d738; end: 10898d75b;  */

void FUN_10898d738(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10898dda4(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 10898d75c; end: 10898d8eb;  */

void FUN_10898d75c(long param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long alStack_70 [3];
  long *plStack_58;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plStack_58 = alStack_70;
  plVar5 = alStack_70;
  plVar3 = alStack_70;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)param_2[3];
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else if (plVar2 == param_2) {
    func_0x00010898e7cc();
    (*extraout_x8)();
    param_2 = plVar5;
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    plStack_58 = plVar2;
  }
  iVar4 = (int)param_2;
  plVar5 = (long *)(param_1 + 0x18);
  uVar1 = plVar5 == alStack_70;
  if (!(bool)uVar1) {
    plVar2 = *(long **)(param_1 + 0x30);
    if (plStack_58 == alStack_70) {
      uVar1 = plVar2 == plVar5;
      if ((bool)uVar1) {
        func_0x00010898e7cc();
        (*extraout_x8_01)();
        func_0x00010898e6d4(plStack_58);
        plStack_58 = (long *)0x0;
        func_0x00010898e7cc(*(undefined8 *)(param_1 + 0x30));
        (*extraout_x8_02)();
        func_0x00010898e6d4(*(undefined8 *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0x30) = 0;
        plVar2 = plVar5;
        plStack_58 = alStack_70;
        (**(code **)(alStack_50[0] + 0x18))(alStack_50);
        iVar4 = (int)plVar2;
        (**(code **)(alStack_50[0] + 0x20))(alStack_50);
      }
      else {
        func_0x00010898e7cc();
        plVar2 = plVar5;
        (*extraout_x8_00)();
        iVar4 = (int)plVar2;
        func_0x00010898e6d4(plStack_58);
        plStack_58 = *(long **)(param_1 + 0x30);
      }
      *(long **)(param_1 + 0x30) = plVar5;
    }
    else {
      uVar1 = plVar2 == plVar5;
      if ((bool)uVar1) {
        iVar4 = (int)alStack_70;
        (**(code **)(*plVar2 + 0x18))(plVar2);
        func_0x00010898e6d4(*(undefined8 *)(param_1 + 0x30));
        *(long **)(param_1 + 0x30) = plStack_58;
        plStack_58 = alStack_70;
      }
      else {
        *(long **)(param_1 + 0x30) = plStack_58;
        plStack_58 = plVar2;
      }
    }
  }
  func_0x00010898e374();
  func_0x00010898e6e0(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *(undefined1 *)((long)plVar3 + 0x38) = 0;
  *(undefined1 *)((long)plVar3 + 0x48) = 0;
  *(undefined8 *)((long)plVar3 + 0x40) = 0;
  return;
}



/* Entry: 10898d8ec; end: 10898d8ff;  */

void FUN_10898d8ec(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10898d900; end: 10898da33;  */

void FUN_10898d900(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long *extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar5 = (undefined8 *)*param_2;
  lStack_58 = param_2[1];
  puStack_60 = puVar5;
  if (lStack_58 == 0) {
    uStack_48 = 0;
  }
  else {
    do {
      func_0x00010898e7a8();
    } while (extraout_w11 != 0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
      if (bVar4) {
        *extraout_x9 = *extraout_x9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      uStack_48 = extraout_x8;
    } while (cVar3 != '\0');
  }
  uStack_40 = 1;
  puStack_50 = puVar5;
  FUN_10898f710();
  puStack_38 = puVar5;
  FUN_10898e12c(&puStack_60);
  uStack_30 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puStack_38 = &PTR_DAT_110aa2f60;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  puStack_38[3] = uStack_30;
  puStack_38[4] = lVar2;
  if (lVar2 == 0) {
    uStack_28 = 0;
    puVar5 = puStack_38;
  }
  else {
    do {
      func_0x00010898e7a8();
    } while (extraout_w11_00 != 0);
    uStack_28 = extraout_x8_00[4];
    uStack_30 = extraout_x8_00[3];
    puVar5 = extraout_x8_00;
    if (extraout_x8_00[4] != 0) {
      do {
        func_0x00010898e7a8();
        puVar5 = extraout_x8_01;
      } while (extraout_w11_01 != 0);
    }
  }
  func_0x00010898c154(puVar5 + 5,param_2 + 2);
  FUN_10898e12c(&uStack_30);
  func_0x00010898e788();
  puVar5 = puStack_38;
  puStack_38 = (undefined8 *)0x0;
  *param_1 = (long)(puVar5 + 5);
  param_1[1] = (long)puVar5;
  FUN_10898e12c(&puStack_50);
  return;
}



/* Entry: 10898da34; end: 10898daeb;  */

void FUN_10898da34(long param_1,ulong param_2,long param_3,int param_4,uint param_5,uint param_6,
                  int param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_4 == 1) {
    for (; param_7 != 0; param_7 = param_7 + -1) {
      _memcpy(param_1,param_3,param_6);
      param_1 = param_1 + (param_2 & 0xffffffff);
      param_3 = param_3 + (ulong)param_5;
    }
  }
  else {
    for (iVar1 = 0; iVar1 != param_7; iVar1 = iVar1 + 1) {
      uVar2 = 0;
      for (uVar3 = 0; param_6 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(param_1 + uVar3) = *(undefined1 *)(param_3 + uVar2);
        uVar2 = (ulong)(uint)((int)uVar2 + param_4);
      }
      param_1 = param_1 + (param_2 & 0xffffffff);
      param_3 = param_3 + (ulong)param_5;
    }
  }
  return;
}



/* Entry: 10898daec; end: 10898dd03;  */

undefined8 FUN_10898daec(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long **pplVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_74;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  FUN_108996d48(*(undefined8 *)(param_1 + 0x70));
  FUN_108996fe4(*(undefined8 *)(param_1 + 0x70));
  pbVar1 = (byte *)(param_1 + 0x48);
  do {
    bVar2 = *pbVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((bVar2 & 1) == 0) && (*(char *)((long)param_2 + 0x11) != '\x01')) {
    uVar7 = 1;
    if (*(byte *)(param_2 + 2) <= *(byte *)(param_1 + 0x38)) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      plStack_68 = (long *)0x0;
      plStack_60 = (long *)0x0;
      plStack_58 = (long *)0x0;
      for (puVar11 = param_2 + 4; puVar11 = (undefined8 *)*puVar11, puVar11 != param_2 + 3;
          puVar11 = puVar11 + 1) {
        lVar3 = *(long *)puVar11[2];
        uVar12 = ((long *)puVar11[2])[1] - lVar3;
        if (plStack_60 < plStack_58) {
          plVar9 = plStack_60 + 2;
          *plStack_60 = lVar3;
          plStack_60[1] = uVar12 & 0xffffffff;
        }
        else {
          pplVar8 = &plStack_68;
          FUN_108947b44(pplVar8,((long)plStack_60 - (long)plStack_68 >> 4) + 1);
          FUN_108947998(&plStack_a0,pplVar8,(long)plStack_60 - (long)plStack_68 >> 4,&plStack_58);
          *plStack_90 = lVar3;
          plStack_90[1] = uVar12 & 0xffffffff;
          plStack_90 = plStack_90 + 2;
          plVar10 = (long *)((long)plStack_98 - ((long)plStack_60 - (long)plStack_68));
          _memcpy(plVar10);
          plVar6 = plStack_58;
          plVar9 = plStack_90;
          plStack_58 = plStack_88;
          plStack_60 = plStack_90;
          plStack_90 = plStack_68;
          plStack_88 = plVar6;
          plStack_a0 = plStack_68;
          plStack_98 = plStack_68;
          plStack_68 = plVar10;
          FUN_108947a20(&plStack_a0);
        }
        plStack_60 = plVar9;
      }
      plVar9 = *(long **)(param_1 + 0x50);
      FUN_10898d070(&plStack_c0,&plStack_68);
      uStack_80 = *param_2;
      uStack_78 = *(char *)(param_2 + 2) == '\0';
      plStack_98 = (long *)uStack_b8;
      plStack_a0 = plStack_c0;
      plStack_90 = (long *)uStack_b0;
      plStack_88 = (long *)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      plStack_c0 = (long *)0x0;
      uStack_74 = 0;
      (**(code **)(*plVar9 + 0x18))(plVar9,&plStack_a0);
      func_0x00010894593c(&plStack_a0);
      func_0x00010894593c(&plStack_c0);
      func_0x00010894593c(&plStack_68);
      uVar7 = 3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar7 = 1;
  }
  return uVar7;
}



/* Entry: 10898dd04; end: 10898dd2b;  */

void FUN_10898dd04(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10898e6d4(*(undefined8 *)(param_1 + 0x50));
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010899792c();
  if (*(char *)(unaff_x19 + 0xb0) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(long *)(unaff_x19 + 0xc0) =
         *(long *)(unaff_x19 + 0xc0) + (lVar1 - *(long *)(unaff_x19 + 0xa8));
    if (*(char *)(unaff_x19 + 0xb0) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0xb0) = 0;
    }
    *(long *)(unaff_x19 + 0xb8) = lVar1 - *(long *)(unaff_x19 + 0x98);
    FUN_108996e14(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x58);
  return;
}



/* Entry: 10898dd2c; end: 10898dd2f;  */

undefined8 * FUN_10898dd2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2d68;
  func_0x00010894c74c(param_1 + 0xe);
  func_0x00010898e3b8(param_1 + 0xc);
  func_0x00010898d1dc(param_1 + 10);
  func_0x00010898e374(param_1 + 3);
  func_0x00010898e350(param_1 + 1);
  return param_1;
}



/* Entry: 10898dd30; end: 10898dd43;  */

void FUN_10898dd30(void)

{
  FUN_10898dd50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898dd44; end: 10898dd4f;  */

void FUN_10898dd44(void)

{
  return;
}



/* Entry: 10898dd50; end: 10898dda3;  */

undefined8 * FUN_10898dd50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2d68;
  func_0x00010894c74c(param_1 + 0xe);
  func_0x00010898e3b8(param_1 + 0xc);
  func_0x00010898d1dc(param_1 + 10);
  func_0x00010898e374(param_1 + 3);
  func_0x00010898e350(param_1 + 1);
  return param_1;
}



/* Entry: 10898dda4; end: 10898ddc3;  */

void FUN_10898dda4(void)

{
  func_0x00010898e798();
  FUN_10898ddc4();
  return;
}



/* Entry: 10898ddc4; end: 10898de3f;  */

undefined1 *
FUN_10898ddc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010898e734();
  FUN_10898de40(auStack_50,1);
  FUN_10898de98(puStack_40,param_2,param_3,param_4);
  func_0x00010898e70c();
  FUN_10898e340();
  func_0x00010898e6e0(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  FUN_10898e340();
  func_0x00010898e770();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_10898de68();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10898de40; end: 10898de67;  */

long FUN_10898de40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10898de68();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10898de68; end: 10898de97;  */

undefined8 * FUN_10898de68(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2dd0;
  param_1[1] = 0;
  FUN_10898defc(param_1 + 3);
  return param_1;
}



/* Entry: 10898de98; end: 10898ded7;  */

undefined8 * FUN_10898de98(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2dd0;
  param_1[1] = 0;
  FUN_10898defc(param_1 + 3,param_2,*param_3);
  return param_1;
}



/* Entry: 10898ded8; end: 10898dedb;  */

void FUN_10898ded8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2dd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898dedc; end: 10898deef;  */

void FUN_10898dedc(void)

{
  func_0x00010898e30c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898def0; end: 10898defb;  */

undefined8 FUN_10898def0(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 0x18;
  FUN_10898c6a4(param_1 + 0x28);
  func_0x00010898e7c0();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10898defc; end: 10898dfa7;  */

undefined8 * FUN_10898defc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  FUN_10898dfa8(&uStack_40,param_2,&uStack_28);
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  if (lStack_38 != 0) {
    do {
      func_0x00010898e724();
    } while (extraout_w10 != 0);
  }
  func_0x00010898e788();
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_40,&UNK_10f4edf10,param_2);
  func_0x00010898dfc4(param_1 + 2,&uStack_40,&uStack_28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_40);
  return param_1;
}



/* Entry: 10898dfa8; end: 10898dfdf;  */

void FUN_10898dfa8(void)

{
  func_0x00010898e798();
  FUN_10898dfe0();
  return;
}



/* Entry: 10898dfe0; end: 10898e053;  */

undefined1 * FUN_10898dfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010898e734();
  FUN_10898e054(auStack_50,1);
  FUN_10898e0a8(puStack_40,param_2,param_3);
  func_0x00010898e70c();
  func_0x00010898e11c();
  func_0x00010898e6e0(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  func_0x00010898e11c();
  func_0x00010898e770();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_10898e07c();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10898e054; end: 10898e07b;  */

long FUN_10898e054(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10898e07c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10898e07c; end: 10898e0a7;  */

undefined8 * FUN_10898e07c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x155555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2e20;
  param_1[1] = 0;
  func_0x00010898e108(param_1 + 3);
  return param_1;
}



/* Entry: 10898e0a8; end: 10898e0e3;  */

undefined8 * FUN_10898e0a8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2e20;
  param_1[1] = 0;
  func_0x00010898e108(param_1 + 3);
  return param_1;
}



/* Entry: 10898e0e4; end: 10898e0e7;  */

void FUN_10898e0e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2e20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898e0e8; end: 10898e0fb;  */

void FUN_10898e0e8(void)

{
  func_0x00010898e110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898e0fc; end: 10898e12b;  */

void FUN_10898e0fc(long param_1)

{
  undefined8 *puVar1;
  
  while (*(long *)(param_1 + 0xb0) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x88);
    func_0x00010898fd68();
    _free(*puVar1);
    func_0x00010898fccc(param_1 + 0x88);
  }
  FUN_10898fa1c(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10898e12c; end: 10898e14f;  */

void FUN_10898e12c(long param_1)

{
  func_0x00010898e7c0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10898e150; end: 10898e1c3;  */

undefined1 * FUN_10898e150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010898e734();
  FUN_10898e1c4(auStack_50,1);
  FUN_10898e21c(puStack_40,param_2,param_3);
  func_0x00010898e70c();
  FUN_10898e2fc();
  func_0x00010898e6e0(uStack_38);
  if ((bool)in_ZR) {
    return puStack_40;
  }
  ___stack_chk_fail();
  FUN_10898e2fc();
  func_0x00010898e770();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_10898e1ec();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10898e1c4; end: 10898e1eb;  */

long FUN_10898e1c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10898e1ec();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10898e1ec; end: 10898e21b;  */

undefined8 * FUN_10898e1ec(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x12f684bda12f685) {
    puVar1 = (undefined8 *)(param_2 * 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2e70;
  param_1[1] = 0;
  func_0x00010898e27c(param_1 + 3);
  return param_1;
}



/* Entry: 10898e21c; end: 10898e257;  */

undefined8 * FUN_10898e21c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aa2e70;
  param_1[1] = 0;
  func_0x00010898e27c(param_1 + 3);
  return param_1;
}



/* Entry: 10898e258; end: 10898e25b;  */

void FUN_10898e258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa2e70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10898e25c; end: 10898e26f;  */

void FUN_10898e25c(void)

{
  FUN_10898e2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10898e270; end: 10898e283;  */

void FUN_10898e270(long param_1)

{
  FUN_10898f87c(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



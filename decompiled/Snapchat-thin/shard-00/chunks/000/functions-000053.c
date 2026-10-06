/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10015ab48; end: 10015ab73;  */

void FUN_10015ab48(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    puVar1 = puVar1 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10015ab74; end: 10015ab9f;  */

long FUN_10015ab74(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_100154128(param_1);
  }
  return param_1;
}



/* Entry: 10015aba0; end: 10015abaf;  */

void FUN_10015aba0(void)

{
  return;
}



/* Entry: 10015abb0; end: 10015abe3;  */

undefined8 FUN_10015abb0(undefined8 param_1)

{
  FUN_10015aa90();
  FUN_10015abe4();
  return param_1;
}



/* Entry: 10015abe4; end: 10015ac3f;  */

void FUN_10015abe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10015aad4();
    FUN_10015ac40();
    func_0x0001001539c4();
    FUN_10015ac78();
  }
  uStack_38 = 1;
  FUN_10015ac98(&uStack_40);
  return;
}



/* Entry: 10015ac40; end: 10015ac77;  */

void FUN_10015ac40(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    FUN_100154538();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 2);
    return;
  }
  func_0x0001068887c4();
  puVar2 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar3 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar3;
    puVar2 = puVar2 + 2;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10015ac78; end: 10015ac97;  */

void FUN_10015ac78(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10015ac98; end: 10015acc3;  */

long FUN_10015ac98(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1001540e4(param_1);
  }
  return param_1;
}



/* Entry: 10015acc4; end: 10015ad1f;  */

void FUN_10015acc4(void)

{
  return;
}



/* Entry: 10015ad20; end: 10015ad53;  */

void FUN_10015ad20(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100152260();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x0001001540b8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10015ad54; end: 10015add3;  */

void FUN_10015ad54(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10015add4; end: 10015adf7;  */

void FUN_10015add4(long param_1)

{
  long unaff_x19;
  
  func_0x0001001522cc();
  func_0x000100153e08();
  *(long *)(unaff_x19 + 8) = param_1 + 0x60;
  return;
}



/* Entry: 10015adf8; end: 10015ae23;  */

void FUN_10015adf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xfffffc18;
  return;
}



/* Entry: 10015ae24; end: 10015ae7f;  */

void FUN_10015ae24(void)

{
  func_0x000100154084();
  func_0x00010015ae48();
  return;
}



/* Entry: 10015ae80; end: 10015aecb;  */

void FUN_10015ae80(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100152260(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    func_0x0001001540b8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10015aecc; end: 10015afe7;  */

void FUN_10015aecc(long *param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_4[6];
  func_0x00010015ae98(param_1,(param_4[1] - *param_4) / 0x18);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  plVar5 = (long *)*param_4;
  lVar7 = param_4[1] - (long)plVar5;
  puVar6 = (undefined1 *)(lVar2 + 0x10);
  for (uVar4 = 0; (lVar3 - lVar2) / 0x18 != uVar4; uVar4 = uVar4 + 1) {
    plVar1 = plVar5;
    if ((ulong)(lVar7 / 0x18) <= uVar4) {
      plVar1 = param_4 + 3;
    }
    *(long *)(puVar6 + -0x10) = param_2 + (*plVar1 - lVar8);
    *(long *)(puVar6 + -8) = param_2 + (plVar1[1] - lVar8);
    *puVar6 = (char)plVar1[2];
    plVar5 = plVar5 + 3;
    puVar6 = puVar6 + 0x18;
  }
  param_1[3] = param_3;
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  lVar2 = param_2 + (param_4[6] - lVar8);
  param_1[6] = lVar2;
  param_1[7] = param_2 + (param_4[7] - lVar8);
  *(char *)(param_1 + 8) = (char)param_4[8];
  param_1[9] = param_2 + (param_4[9] - lVar8);
  param_1[10] = param_2 + (param_4[10] - lVar8);
  *(char *)(param_1 + 0xb) = (char)param_4[0xb];
  if ((param_5 & 1) == 0) {
    param_1[0xd] = lVar2;
  }
  *(char *)(param_1 + 0xc) = (char)param_4[0xc];
  return;
}



/* Entry: 10015afe8; end: 10015b08f;  */

void FUN_10015afe8(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  FUN_100153c68();
  func_0x000100154278(*(undefined8 *)(param_1 + 8));
  if (!(bool)in_CY) {
    FUN_10015b090();
    FUN_100153d48();
    FUN_10015b0b0(auStack_58);
    FUN_10015b128(auStack_58);
    func_0x000100153e64();
    func_0x00010015b15c();
    FUN_10015b194(auStack_58);
    return;
  }
  puVar2 = *(undefined8 **)(unaff_x19 + 8);
  puVar1 = puVar2 + unaff_x20 * 3;
  for (lVar3 = unaff_x20 * 0x18; lVar3 != 0; lVar3 = lVar3 + -0x18) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 3;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  return;
}



/* Entry: 10015b090; end: 10015b0af;  */

ulong FUN_10015b090(long *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x00010688c93c();
    func_0x000100153d58();
    if (param_2 == 0) {
      param_4 = 0;
    }
    else {
      FUN_10015b108(param_4);
    }
    FUN_100153de8(0x18);
    return param_4;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    uVar2 = 0xaaaaaaaaaaaaaaa;
  }
  return uVar2;
}



/* Entry: 10015b0b0; end: 10015b0e3;  */

void FUN_10015b0b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100153d58();
  if (param_2 != 0) {
    FUN_10015b108(param_4);
  }
  FUN_100153de8(0x18);
  return;
}



/* Entry: 10015b0e4; end: 10015b107;  */

void FUN_10015b0e4(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_10015b0e4();
  return;
}



/* Entry: 10015b108; end: 10015b127;  */

void FUN_10015b108(void)

{
  FUN_10015b0e4();
  return;
}



/* Entry: 10015b128; end: 10015b193;  */

void FUN_10015b128(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar2 + param_2 * 3;
  for (param_2 = param_2 * 0x18; param_2 != 0; param_2 = param_2 + -0x18) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 3;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 10015b194; end: 10015b1bf;  */

long * FUN_10015b194(long *param_1)

{
  func_0x00010015b18c();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10015b1c0; end: 10015b227;  */

void FUN_10015b1c0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10015b228; end: 10015b28b;  */

undefined8 FUN_10015b228(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 in_CY;
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000100154934();
  if (!(bool)in_CY) {
    uVar2 = param_4;
    FUN_100153c68();
    if (uVar2 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)param_4;
    }
    else {
      func_0x0001001549a8();
      func_0x0001001549b8();
      func_0x0001001549c0();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0001001549d4();
      func_0x000107c610b8();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
    return param_1;
  }
  func_0x000104bd47d4();
  uVar2 = 0;
  uVar3 = 5;
  lVar1 = unaff_x19;
  FUN_10015b29c();
  if (unaff_x19 + 8 != lVar1) {
    func_0x000107c36ae0();
    uVar3 = extraout_x8;
    func_0x00010017798c(extraout_x8);
    if ((uVar2 & 1) == 0) {
      uVar3 = 5;
    }
  }
  return uVar3;
}



/* Entry: 10015b28c; end: 10015b29b;  */

undefined8 FUN_10015b28c(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar3 = 5;
  lVar1 = unaff_x19;
  FUN_10015b29c();
  if (unaff_x19 + 8 != lVar1) {
    func_0x000107c36ae0();
    uVar3 = extraout_x8;
    func_0x00010017798c(extraout_x8);
    if ((uVar2 & 1) == 0) {
      uVar3 = 5;
    }
  }
  return uVar3;
}



/* Entry: 10015b29c; end: 10015b317;  */

long * FUN_10015b29c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x0001004b5f8c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x0001004b5f8c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10015b318; end: 10015b3eb;  */

undefined8 FUN_10015b318(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  
  lVar1 = param_1;
  FUN_10015b29c();
  uVar2 = param_3;
  if (param_1 + 8 != lVar1) {
    func_0x000107c36ae0();
    uVar2 = extraout_x8;
    func_0x00010017798c(extraout_x8);
    if ((param_2 & 1) == 0) {
      uVar2 = param_3;
    }
  }
  return uVar2;
}



/* Entry: 10015b3ec; end: 10015b40f;  */

void FUN_10015b3ec(void)

{
  func_0x000100154084();
  FUN_10015b410();
  return;
}



/* Entry: 10015b410; end: 10015b423;  */

void FUN_10015b410(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10015b424; end: 10015b44b;  */

void FUN_10015b424(long param_1)

{
  FUN_1001522d8(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16localeD1Ev_110346830)(param_1);
  return;
}



/* Entry: 10015b44c; end: 10015b4ff;  */

void FUN_10015b44c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_10012dbd0(auStack_38,&UNK_10e589dd0);
  FUN_10012dbd0(auStack_50,"");
  FUN_10015b5fc(param_1,param_2,auStack_38,auStack_50);
  func_0x000107c60ca0(auStack_50);
  func_0x000107c60ca0(auStack_38);
  return;
}



/* Entry: 10015b500; end: 10015b523;  */

void FUN_10015b500(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010015b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10015b524; end: 10015b557;  */

long FUN_10015b524(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    FUN_10015b56c();
  }
  return param_1;
}



/* Entry: 10015b558; end: 10015b56b;  */

void FUN_10015b558(void)

{
  FUN_10015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10015b56c; end: 10015b577;  */

void FUN_10015b56c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010015b574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10015b578; end: 10015b58b;  */

void FUN_10015b578(void)

{
  FUN_10015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10015b58c; end: 10015b5bf;  */

long FUN_10015b58c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_110945e38);
  if (*(long *)(lVar1 + 0x10) != 0) {
    FUN_10015b56c();
  }
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    FUN_10015b56c();
  }
  return param_1;
}



/* Entry: 10015b5c0; end: 10015b5fb;  */

void FUN_10015b5c0(void)

{
  FUN_10015b58c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10015b5fc; end: 10015b647;  */

void FUN_10015b5fc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10015b29c(param_2,param_3);
  if (param_2 + 8 != lVar1) {
    param_4 = lVar1 + 0x38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,param_4);
  return;
}



/* Entry: 10015b648; end: 10015b64b;  */

void FUN_10015b648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10015b64c; end: 10015b793;  */

void FUN_10015b64c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10015b794; end: 10015b79b;  */

long FUN_10015b794(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    FUN_10015b56c();
  }
  return param_1;
}



/* Entry: 10015b79c; end: 10015b7a7;  */

undefined1 * FUN_10015b79c(void)

{
  func_0x000107c613d0();
  func_0x000107c60c50(&stack0x00000008);
  return &stack0x00000008;
}



/* Entry: 10015b7a8; end: 10015b7fb;  */

void FUN_10015b7a8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  FUN_100152a88();
  *param_1 = extraout_x8;
  FUN_1000e30f4(param_1 + 0x11);
  FUN_10015b810(unaff_x19 + 0x70);
  func_0x00010015b888(unaff_x19 + 0x58);
  FUN_10015b8c8(unaff_x19 + 0x40);
  FUN_10015b8c8(unaff_x19 + 0x28);
  func_0x000107c60db0(param_1 + 2);
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(unaff_x19 + 8) != 0) {
    FUN_10015b56c();
  }
  return;
}



/* Entry: 10015b7fc; end: 10015b80f;  */

void FUN_10015b7fc(void)

{
  FUN_10015b7a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10015b810; end: 10015b833;  */

void FUN_10015b810(void)

{
  func_0x000100154084();
  FUN_10015b834();
  return;
}



/* Entry: 10015b834; end: 10015b853;  */

void FUN_10015b834(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10015b854; end: 10015b8b3;  */

void FUN_10015b854(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010015b848();
  if (*param_1 != 0) {
    func_0x0001006a5d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*unaff_x19);
    return;
  }
  return;
}



/* Entry: 10015b8b4; end: 10015b8c7;  */

void FUN_10015b8b4(void)

{
  return;
}



/* Entry: 10015b8c8; end: 10015b8eb;  */

void FUN_10015b8c8(void)

{
  func_0x000100154084();
  FUN_10015b8ec();
  return;
}



/* Entry: 10015b8ec; end: 10015b903;  */

void FUN_10015b8ec(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10015b904; end: 10015b94f;  */

void FUN_10015b904(void)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = unaff_x19;
  FUN_10015b29c();
  puVar1 = &stack0x00000008;
  if (unaff_x19 + 8 != lVar2) {
    puVar1 = (undefined1 *)(lVar2 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (&stack0x00000038,puVar1);
  return;
}



/* Entry: 10015b950; end: 10015b95f;  */

void FUN_10015b950(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10015b960; end: 10015bb43;  */

byte * FUN_10015b960(byte *param_1,uint param_2,int param_3,byte param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  byte *pbVar8;
  ulong uVar9;
  byte bVar10;
  uint unaff_w21;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_1 + 8);
  pbVar8 = *(byte **)param_1;
  if (-1 < (char)param_1[0x17]) {
    uVar11 = (ulong)param_1[0x17];
    pbVar8 = param_1;
  }
  pbVar3 = param_1;
  if (param_3 == 0) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      FUN_10015bb44();
      bVar10 = param_4;
      if (unaff_w21 == 0x5f || (int)pbVar3 != 0) {
        pbVar3 = (byte *)(ulong)*pbVar8;
        FUN_10015bbd4();
        if ((int)pbVar3 == 0) {
          pbVar3 = (byte *)(long)(char)*pbVar8;
          func_0x000107c60e80();
          bVar10 = (byte)pbVar3;
          goto LAB_10015ba24;
        }
      }
      else {
LAB_10015ba24:
        *pbVar8 = bVar10;
      }
      pbVar8 = pbVar8 + 1;
    }
  }
  else {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      FUN_10015bb44();
      if ((((int)pbVar3 == 0) && ((unaff_w21 & 0xff) != 0x5f)) &&
         (bVar10 = param_4, (unaff_w21 & 0xff) != 0x2e)) {
LAB_10015b9e4:
        *pbVar8 = bVar10;
      }
      else {
        pbVar3 = (byte *)(ulong)*pbVar8;
        FUN_10015bbd4();
        if ((int)pbVar3 == 0) {
          pbVar3 = (byte *)(long)(char)*pbVar8;
          func_0x000107c60e80();
          bVar10 = (byte)pbVar3;
          goto LAB_10015b9e4;
        }
      }
      pbVar8 = pbVar8 + 1;
    }
  }
  bVar10 = param_1[0x17];
  uVar6 = (ulong)bVar10;
  pbVar3 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  uVar11 = uVar9;
  pbVar8 = pbVar3;
  if (-1 < (char)bVar10) {
    uVar11 = uVar6;
    pbVar8 = param_1;
  }
  pbVar5 = pbVar8 + uVar11;
  bVar7 = param_4;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *pbVar8;
    pbVar4 = pbVar8;
    if (bVar1 == param_4 && bVar7 == bVar1) goto LAB_10015ba88;
    pbVar8 = pbVar8 + 1;
    bVar7 = bVar1;
  }
LAB_10015babc:
  if (-1 < (char)bVar10) {
    uVar9 = uVar6;
    pbVar3 = param_1;
  }
  pbVar8 = param_1;
  FUN_10015bbdc(param_1,pbVar5,pbVar3 + uVar9);
  bVar10 = param_1[0x17];
  if ((char)bVar10 < 0) {
    uVar11 = *(ulong *)(param_1 + 8);
    if (uVar11 <= param_2) {
      return pbVar8;
    }
    pbVar8 = *(byte **)param_1;
  }
  else {
    if ((uint)(int)(char)bVar10 <= param_2) {
      return pbVar8;
    }
    uVar11 = (ulong)(int)(char)bVar10;
    pbVar8 = param_1;
  }
  pbVar3 = pbVar8 + param_2;
  pbVar5 = param_1;
  if ((char)param_1[0x17] < '\0') {
    pbVar5 = *(byte **)param_1;
  }
  func_0x000107c60c4c(param_1,(long)pbVar3 - (long)pbVar5,pbVar8 + (uVar11 - (long)pbVar3));
  return pbVar3;
LAB_10015ba88:
  while (pbVar8 = pbVar8 + 1, pbVar8 != pbVar5) {
    bVar10 = *pbVar8;
    bVar2 = bVar7 != param_4;
    bVar7 = bVar10;
    if (bVar2 || bVar10 != param_4) {
      *pbVar4 = bVar10;
      pbVar4 = pbVar4 + 1;
    }
  }
  bVar10 = param_1[0x17];
  uVar6 = (ulong)bVar10;
  pbVar3 = *(byte **)param_1;
  uVar9 = *(ulong *)(param_1 + 8);
  pbVar5 = pbVar4;
  goto LAB_10015babc;
}



/* Entry: 10015bb44; end: 10015bb57;  */

bool FUN_10015bb44(void)

{
  byte bVar1;
  int iVar2;
  byte *unaff_x24;
  
  bVar1 = *unaff_x24;
  iVar2 = (int)(char)bVar1;
  if (0x7f < bVar1) {
    func_0x000107c60e64();
    return iVar2 != 0;
  }
  return (*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + ((long)(char)bVar1 & 0xffffffffU) * 4 + 0x3c
                   ) & 0x500) != 0;
}



/* Entry: 10015bb58; end: 10015bb97;  */

bool FUN_10015bb58(uint param_1,uint param_2)

{
  if (0x7f < param_1) {
    func_0x000107c60e64();
    return param_1 != 0;
  }
  return (param_2 & *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)param_1 * 4 + 0x3c)) != 0;
}



/* Entry: 10015bb98; end: 10015bbd3;  */

long FUN_10015bb98(double param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 * 1000.0;
  lVar1 = 0;
  if (-9.223372036854776e+18 <= param_1) {
    lVar1 = 0x7fffffffffffffff;
  }
  lVar2 = (long)param_1;
  if (9.223372036854775e+18 < param_1) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 10015bbd4; end: 10015bbdb;  */

bool FUN_10015bbd4(uint param_1)

{
  if (0x7f < param_1) {
    func_0x000107c60e64();
    return param_1 != 0;
  }
  return (*(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)param_1 * 4 + 0x3c) & 0x1000) != 0;
}



/* Entry: 10015bbdc; end: 10015bc13;  */

long FUN_10015bbdc(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    puVar1 = (undefined8 *)*param_1;
  }
  func_0x000107c60c4c(param_1,param_2 - (long)puVar1,param_3 - param_2);
  return param_2;
}



/* Entry: 10015bc14; end: 10015bc1b;  */

void FUN_10015bc14(void)

{
  return;
}



/* Entry: 10015bc1c; end: 10015bc7f;  */

void FUN_10015bc1c(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100151c5c();
  FUN_100066230();
  FUN_100066230(unaff_x20 + 0x18,unaff_x19 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined4 *)(unaff_x20 + 0x40) = *(undefined4 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 10015bc80; end: 10015bc97;  */

void FUN_10015bc80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10015bc98; end: 10015bcc3;  */

void FUN_10015bc98(void)

{
  FUN_10015bc80();
  FUN_10015bcc4();
  return;
}



/* Entry: 10015bcc4; end: 10015bd17;  */

void FUN_10015bcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_100163898();
    FUN_10007e1a0();
    func_0x0001001638b0();
    FUN_100163960();
  }
  uStack_38 = 1;
  FUN_10007e37c(&uStack_40);
  return;
}



/* Entry: 10015bd18; end: 10015bd27;  */

void FUN_10015bd18(void)

{
  return;
}



/* Entry: 10015bd28; end: 10015bd97;  */

void FUN_10015bd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10007e450();
    func_0x000107c301bc();
    func_0x000107c301c0();
  }
  uStack_38 = 1;
  func_0x00010015bdd4(&uStack_40);
  return;
}



/* Entry: 10015bd98; end: 10015bdff;  */

undefined8 * FUN_10015bd98(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10015bd28(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x18);
  return param_1;
}



/* Entry: 10015be00; end: 10015be07;  */

void FUN_10015be00(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100151c5c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    FUN_100164334();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10015be08; end: 10015bf0b;  */

void FUN_10015be08(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_10015be00();
  FUN_10015bf40(param_1,(param_2[1] - *param_2) / 0x18);
  for (uVar5 = 0; uVar5 < (ulong)((param_2[1] - *param_2) / 0x18); uVar5 = uVar5 + 1) {
    plVar2 = param_2;
    func_0x000107c30218(param_2,uVar5);
    uVar3 = param_3;
    func_0x000107c30218(param_3,uVar5);
    plVar4 = param_4;
    func_0x000107c3021c(param_4,uVar5);
    FUN_100163a14(plVar2,0x20);
    FUN_100163a14(uVar3,0x20);
    lVar1 = plVar4[1];
    for (lVar6 = *plVar4; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
      FUN_100163a14(lVar6,0x40);
    }
    func_0x000107c30220(param_1,plVar2,uVar3,plVar4);
  }
  return;
}



/* Entry: 10015bf0c; end: 10015bf3f;  */

void FUN_10015bf0c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100151c5c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x48;
    FUN_100164334();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10015bf40; end: 10015bfcb;  */

long * FUN_10015bf40(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long alStack_48 [5];
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2) / 0x48) < param_2) {
    if (0x38e38e38e38e38e < param_2) {
      func_0x000107c30230();
      func_0x000107c39884();
      func_0x000107c39880();
      if (param_1[1] != 0) {
        func_0x0001000df548();
      }
      return param_1;
    }
    plVar1 = param_1 + 1;
    param_1 = alStack_48;
    func_0x000107c30234(param_1,param_2,(*plVar1 - lVar2) / 0x48);
    func_0x000107c3988c();
    func_0x000107c39884();
  }
  return param_1;
}



/* Entry: 10015bfcc; end: 10015bff3;  */

long FUN_10015bfcc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10015bff4; end: 10015c18b;  */

/* WARNING: Removing unreachable block (ram,0x00010015c0bc) */
/* WARNING: Removing unreachable block (ram,0x00010015c074) */
/* WARNING: Removing unreachable block (ram,0x00010015c104) */

long FUN_10015bff4(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_1 + 0x88);
  if (plVar4 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x90);
    plVar3 = plVar4;
    if (plVar4 != plVar5) {
      do {
        plVar3 = plVar5 + -3;
        lVar6 = *plVar3;
        if (lVar6 != 0) {
          lVar7 = plVar5[-2];
          lVar2 = lVar6;
          if (lVar6 != lVar7) {
            do {
              lVar7 = lVar7 + -0x18;
            } while (lVar7 != lVar6);
            lVar2 = *plVar3;
          }
          plVar5[-2] = lVar6;
          func_0x000107c60e14(lVar2);
        }
        plVar5 = plVar3;
      } while (plVar4 != plVar3);
      plVar3 = *(long **)(param_1 + 0x88);
    }
    *(long **)(param_1 + 0x90) = plVar4;
    func_0x000107c60e14(plVar3);
  }
  lVar6 = *(long *)(param_1 + 0x70);
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x78);
    lVar2 = lVar6;
    if (lVar6 != lVar7) {
      do {
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != lVar6);
      lVar2 = *(long *)(param_1 + 0x70);
    }
    *(long *)(param_1 + 0x78) = lVar6;
    func_0x000107c60e14(lVar2);
  }
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x60);
    lVar2 = lVar6;
    if (lVar6 != lVar7) {
      do {
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != lVar6);
      lVar2 = *(long *)(param_1 + 0x58);
    }
    *(long *)(param_1 + 0x60) = lVar6;
    func_0x000107c60e14(lVar2);
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x40));
    cVar1 = *(char *)(param_1 + 0x37);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x20));
    cVar1 = *(char *)(param_1 + 0x1f);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1f);
  }
  if (cVar1 < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 8));
    return param_1;
  }
  return param_1;
}



/* Entry: 10015c18c; end: 10015c19b;  */

void FUN_10015c18c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10015c19c; end: 10015c217;  */

undefined8 FUN_10015c19c(void)

{
  int iVar1;
  
  if ((bRam0000000113409ab8 & 1) == 0) {
    iVar1 = 0x13409ab8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e20(0x68);
      FUN_1000de5e4();
      FUN_10015c258(0x113409aa8);
      func_0x000107c60e4c(0x113409ab8);
    }
  }
  return 0x113409aa8;
}



/* Entry: 10015c218; end: 10015c257;  */

void FUN_10015c218(long *param_1,undefined8 *param_2,code *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = param_1;
  FUN_10015c19c();
  lVar2 = *plVar1;
  lStack_50 = lVar2 + 0x28;
  uStack_48 = 1;
  func_0x000107c60d88();
  uStack_58 = *param_2;
  lStack_60 = *param_1;
  lVar3 = lVar2;
  FUN_10015c3e8(lVar2,&lStack_60);
  if (lVar3 != 0) {
    lVar4 = lVar3 + 0x20;
    func_0x000107c61148();
    FUN_1004a53c4();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar4 != 0) goto LAB_10015c39c;
    FUN_1004a54dc(lVar2,lVar3);
  }
  (*param_3)(&lStack_60,param_2);
  lStack_70 = *param_1;
  uStack_68 = uStack_58;
  func_0x00010015c9c4(lVar2,&lStack_70,&lStack_60);
  lVar4 = lStack_60;
  func_0x000107c61174(lStack_60);
  func_0x000107c61170(lVar4);
LAB_10015c39c:
  FUN_1000df5a0(&lStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10015c258; end: 10015c29f;  */

void FUN_10015c258(void)

{
  FUN_1000de658();
  func_0x000107c60e20(0x20);
  func_0x0001000de66c(&PTR_DAT_110d9e8c8);
  FUN_10015c2a0();
  return;
}



/* Entry: 10015c2a0; end: 10015c2bf;  */

void FUN_10015c2a0(void)

{
  FUN_1000de6a4();
  FUN_10015c2c0();
  return;
}



/* Entry: 10015c2c0; end: 10015c2d7;  */

void FUN_10015c2c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010bd47498(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10015c2d8; end: 10015c3e7;  */

void FUN_10015c2d8(long param_1,long *param_2,undefined8 *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lStack_50 = param_1 + 0x28;
  uStack_48 = 1;
  func_0x000107c60d88();
  uStack_58 = *param_3;
  lStack_60 = *param_2;
  lVar1 = param_1;
  FUN_10015c3e8(param_1,&lStack_60);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x20;
    func_0x000107c61148();
    FUN_1004a53c4();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar2 != 0) goto LAB_10015c39c;
    FUN_1004a54dc(param_1,lVar1);
  }
  (*param_4)(&lStack_60,param_3);
  lStack_70 = *param_2;
  uStack_68 = uStack_58;
  func_0x00010015c9c4(param_1,&lStack_70,&lStack_60);
  lVar2 = lStack_60;
  func_0x000107c61174(lStack_60);
  func_0x000107c61170(lVar2);
LAB_10015c39c:
  FUN_1000df5a0(&lStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10015c3e8; end: 10015c4af;  */

long FUN_10015c3e8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    FUN_10015c9dc();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_1004a5330(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10015c4b0; end: 10015c523;  */

void FUN_10015c4b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bc8d0;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10015c18c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010015c5e4(&uStack_30);
  return;
}



/* Entry: 10015c524; end: 10015c563; -[SCNGrapheneClientMetricsProcessor .cxx_construct] */

undefined8 * FUN_10015c524(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10015c18c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10015c564; end: 10015c56b;  */

void FUN_10015c564(void)

{
  return;
}



/* Entry: 10015c56c; end: 10015c60b; -[SCNGrapheneClientMetricsProcessor initWithCpp:] */

undefined1 * FUN_10015c56c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705dd8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10015c18c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010015c5e4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10015c60c; end: 10015c617;  */

void FUN_10015c60c(void)

{
  return;
}



/* Entry: 10015c618; end: 10015c9a3;  */

undefined1  [16] FUN_10015c618(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  ulong uVar7;
  ulong extraout_x9_00;
  long *plVar8;
  long *plVar9;
  long *extraout_x10;
  long *plVar10;
  long *plVar11;
  long *extraout_x11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x26;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar8 = param_1;
  FUN_10015c9dc();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x26 = (long *)(uVar16 & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar15 <= plVar8) {
        uVar7 = 0;
        if (plVar15 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar7 * (long)plVar15);
      }
    }
    plVar14 = *(long **)(*param_1 + (long)unaff_x26 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_10015c6e0;
          plVar6 = (long *)plVar14[1];
          if (plVar6 != plVar8) break;
          plVar6 = plVar14 + 2;
          FUN_1004a5330(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10015c96c;
          }
        }
        if (((ulong)plVar15 & uVar16) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar16);
        }
        else if (plVar15 <= plVar6) {
          uVar7 = 0;
          if (plVar15 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar15;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar15);
        }
      } while (plVar6 == unaff_x26);
    }
  }
LAB_10015c6e0:
  uVar5 = *param_4;
  plVar6 = param_1 + 2;
  plVar14 = (long *)0x28;
  func_0x000107c60e20();
  *plVar14 = 0;
  plVar14[1] = (long)plVar8;
  lVar4 = *param_3;
  plVar14[3] = param_3[1];
  plVar14[2] = lVar4;
  func_0x000107c61144(plVar14 + 4,uVar5);
  if ((plVar15 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar15)) goto LAB_10015c8f0;
  bVar2 = (long *)0x2 < plVar15;
  bVar3 = plVar15 == (long *)0x3;
  func_0x0001000df4ac((long)plVar15 << 1);
  plVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar13 = extraout_x9;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    func_0x000107c60c44();
  }
  plVar15 = (long *)param_1[1];
  if (plVar15 < plVar13) {
LAB_10015c78c:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10015c998);
      (*pcVar1)();
    }
    lVar4 = (long)plVar13 << 3;
    func_0x000107c60e20(lVar4);
    FUN_10015ca74(param_1,lVar4);
    param_1[1] = (long)plVar13;
    lVar4 = *param_1;
    for (plVar15 = (long *)0x0; plVar13 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar15 * 8) = 0;
    }
    plVar9 = (long *)*plVar6;
    plVar15 = plVar13;
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)plVar9[1];
      uVar7 = (long)plVar13 - 1;
      uVar16 = 0;
      if (plVar13 != (long *)0x0) {
        uVar16 = (ulong)plVar10 / (ulong)plVar13;
      }
      plVar11 = plVar10;
      if (plVar13 <= plVar10) {
        plVar11 = (long *)((long)plVar10 - uVar16 * (long)plVar13);
      }
      if (((ulong)plVar13 & uVar7) == 0) {
        plVar11 = (long *)((ulong)plVar10 & uVar7);
      }
      *(long **)(lVar4 + (long)plVar11 * 8) = plVar6;
      while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
        plVar12 = (long *)plVar9[1];
        if (((ulong)plVar13 & uVar7) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar7);
        }
        else if (plVar13 <= plVar12) {
          uVar16 = 0;
          if (plVar13 != (long *)0x0) {
            uVar16 = (ulong)plVar12 / (ulong)plVar13;
          }
          plVar12 = (long *)((long)plVar12 - uVar16 * (long)plVar13);
        }
        if (plVar12 != plVar11) {
          if (*(long *)(lVar4 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar12 * 8) = plVar10;
            plVar11 = plVar12;
          }
          else {
            FUN_10044fa84();
            lVar4 = extraout_x8_00;
            uVar7 = extraout_x9_00;
            plVar9 = extraout_x10;
            plVar11 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar13 < plVar15) {
    plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c3a948();
    }
    if (plVar13 <= plVar9) {
      plVar13 = plVar9;
    }
    if (plVar13 < plVar15) {
      if (plVar13 != (long *)0x0) goto LAB_10015c78c;
      FUN_10015ca74(param_1,0);
      param_1[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar15 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x26 = plVar8;
    if (plVar15 <= plVar8) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar8 / (ulong)plVar15;
      }
      unaff_x26 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
    }
  }
LAB_10015c8f0:
  lVar4 = *param_1;
  plVar8 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar14 = *plVar6;
    *plVar6 = (long)plVar14;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*plVar14 != 0) {
      plVar8 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar8) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar8 / (ulong)plVar15;
        }
        plVar8 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
      }
      *(long **)(lVar4 + (long)plVar8 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010015ca8c();
  uVar5 = 1;
LAB_10015c96c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10015c9a4; end: 10015c9db;  */

void FUN_10015c9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10015c618(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10015c9dc; end: 10015c9e7;  */

ulong FUN_10015c9dc(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong unaff_x20;
  
  uVar1 = *(ulong *)(*param_2 + 8);
  FUN_1000df138(uVar1,param_2[1]);
  FUN_1000df184();
  return uVar1 ^ unaff_x20;
}



/* Entry: 10015c9e8; end: 10015ca0f;  */

ulong FUN_10015c9e8(ulong param_1)

{
  ulong unaff_x20;
  
  FUN_1000df138();
  FUN_1000df184();
  return param_1 ^ unaff_x20;
}



/* Entry: 10015ca10; end: 10015ca73;  */

bool FUN_10015ca10(void)

{
  ulong uVar1;
  bool bVar2;
  long unaff_x20;
  ulong unaff_x21;
  
  func_0x00010014a4c8(&stack0x00000038);
  func_0x000107c613d0();
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (unaff_x21 == uVar1) {
    func_0x000107c60bf4();
    bVar2 = (int)unaff_x20 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10015ca74; end: 10015ca93;  */

void FUN_10015ca74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10015ca94; end: 10015cab3;  */

void FUN_10015ca94(void)

{
  FUN_1000de6a4();
  FUN_10015cab4();
  return;
}



/* Entry: 10015cab4; end: 10015cad3;  */

void FUN_10015cab4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c61120(lVar1 + 0x20);
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10015cad4; end: 10015cb0f; -[SCNGrapheneStartupConfiguration .cxx_destruct] */

void FUN_10015cad4(long param_1)

{
  FUN_10015cb10(param_1 + 0x28);
  FUN_10015cb10(param_1 + 0x20);
  FUN_10015cb10(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10015cb10; end: 10015cb17;  */

void FUN_10015cb10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10015cb18; end: 10015cb53; -[SCNGrapheneApplicationInformation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010015cb30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010015cb34) */

void FUN_10015cb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10015cb54; end: 10015cc3b; -[SCGrapheneManager onResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10015cb54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = (long)_DAT_1127272cc;
  func_0x000107c611ec(param_1 + lVar3);
  lVar5 = (long)_DAT_1127272e4;
  func_0x000107c498f8(*(undefined8 *)(param_1 + lVar5));
  lVar4 = (long)_DAT_1127272e0;
  func_0x000107c498f8(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR_PTR_1126bc890;
  func_0x000107c51928(0x404e000000000000,PTR_PTR_1126bc890,param_2,param_1,PTR_s_flush_1125ca570,1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  func_0x000107c61170(uVar2);
  puVar1 = PTR_PTR_1126bc890;
  func_0x000107c51928(0x4014000000000000,PTR_PTR_1126bc890,param_2,param_1,PTR_s_compact_1125ae618,1
                     );
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar3);
  return;
}



/* Entry: 10015cc3c; end: 10015d983;  */

undefined1 * FUN_10015cc3c(void)

{
  func_0x000107c613d0();
  func_0x000107c60c50(&stack0x00000020);
  return &stack0x00000020;
}



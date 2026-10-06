/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9297d8; end: 10b92984b;  */

void FUN_10b9297d8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b92bce8();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10b9298e0(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b92984c; end: 10b929857;  */

long * FUN_10b92984c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b9298a0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b929858; end: 10b9298c3;  */

long * FUN_10b929858(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b9298a0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b9298c4; end: 10b9298df;  */

void FUN_10b9298c4(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  ulong unaff_x20;
  
  if (param_2 >> 0x3c != 0) {
    func_0x000104bfe188();
    func_0x00010b92bfe4();
    for (; param_2 != unaff_x19; param_2 = param_2 + 0x10) {
      FUN_10b9269fc(param_4,param_2);
      param_4 = param_4 + 0x10;
    }
    for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x10) {
      FUN_10b9244a4();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 4);
  return;
}



/* Entry: 10b9298e0; end: 10b929943;  */

void FUN_10b9298e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b92bfe4();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x10) {
    FUN_10b9269fc(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x10) {
    FUN_10b9244a4();
  }
  return;
}



/* Entry: 10b929944; end: 10b92999f;  */

void FUN_10b929944(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_10b9244a4();
  }
  return;
}



/* Entry: 10b9299a0; end: 10b9299a7;  */

void FUN_10b9299a0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b92bce8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_10b9244a4();
  }
  return;
}



/* Entry: 10b9299a8; end: 10b929a07;  */

void FUN_10b9299a8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b92bce8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_10b9244a4();
  }
  return;
}



/* Entry: 10b929a08; end: 10b929a57;  */

void FUN_10b929a08(long param_1)

{
  func_0x00010b92befc(param_1 + 8);
  FUN_10b8d6f08();
  return;
}



/* Entry: 10b929a58; end: 10b929a77;  */

void FUN_10b929a58(void)

{
  func_0x00010b92befc();
  FUN_10b8d6f08();
  return;
}



/* Entry: 10b929a78; end: 10b929c0f;  */

void FUN_10b929a78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long lStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined1 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  func_0x00010b92bbfc();
  plVar4 = *(long **)(param_1 + 0x10);
  lVar1 = plVar4[2];
  lVar2 = plVar4[3];
  uStack_48 = extraout_x8;
  if (*(long *)(lVar1 + 0x20) != 0) {
    func_0x00010b92bdb8();
    func_0x00010b92bf08(&lStack_a8);
    if ((lStack_a8 != 0) && (*(int *)(lStack_a8 + 0xc) != 0)) {
      FUN_10b9a8bb4(&lStack_90,&lStack_a8);
      uStack_78 = 1;
      func_0x00010b92b0e4(&lStack_70,&lStack_90);
      FUN_10b9a8cb4(&lStack_90);
      func_0x000107c278f8(lStack_a8);
      goto LAB_10b929b88;
    }
    param_1 = lStack_a8;
    func_0x000107c278f8();
  }
  func_0x000107c31084();
  lVar3 = param_1;
  func_0x00010b92bdb8();
  lStack_60 = *plVar4 + 0x10;
  puStack_68 = &UNK_1003ab990;
  puStack_58 = &UNK_1003ab990;
  lStack_70 = lVar3;
  func_0x000107c2793c(&UNK_10f7cddb0);
  func_0x000107c3173c(&lStack_90);
  func_0x000107c31080(&lStack_98,param_1,&lStack_90);
  FUN_10b99f560(&lStack_a8,&lStack_98);
  lStack_70 = 2;
  puStack_68 = (undefined *)lStack_a8;
  lStack_a8 = 0;
  func_0x000107c278f8(lStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_90);
LAB_10b929b88:
  lVar1 = lVar1 + 0x58;
  uStack_88 = 1;
  lStack_90 = lVar1;
  func_0x00010b92be7c();
  func_0x00010b92bcbc(&lStack_98);
  if (lStack_98 != 0) {
    in_ZR = *(long *)(lStack_98 + 0x78) == lVar2;
    if ((bool)in_ZR) {
      func_0x00010b928b80(lStack_98,&lStack_70);
      uStack_a0 = 1;
      lStack_a8 = lVar1;
      func_0x00010b92bfb0();
      func_0x00010b92bc34();
      func_0x00010b92bdf8();
    }
  }
  func_0x00010b92be00();
  func_0x00010b92be24();
  plVar4 = &lStack_70;
  FUN_10b92a4d8();
  func_0x00010b92bbd4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (plVar4[1] != 0) {
    func_0x00010b928b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b929c10; end: 10b929c2f;  */

void FUN_10b929c10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b928b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b929c30; end: 10b929c33;  */

void FUN_10b929c30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b929c34; end: 10b929ccf;  */

void FUN_10b929c34(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  int extraout_w11;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_110d76da8;
  lVar1 = 0x20;
  __Znwm();
  func_0x00010b92bf44();
  lVar2 = *(long *)(lVar4 + 0x10);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b92bc90();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  *(long *)(lVar1 + 0x10) = lVar2;
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b929cd0; end: 10b929cf3;  */

void FUN_10b929cd0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b92bd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b929cf4; end: 10b929d0f;  */

void FUN_10b929cf4(long param_1)

{
  FUN_10b929d10();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10b929d10; end: 10b929efb;  */

undefined8 * FUN_10b929d10(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0x13;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_10bd3f3dc(param_1 + 7,param_2,0x13);
  FUN_10b9a7630(param_1);
  return param_1;
}



/* Entry: 10b929efc; end: 10b929f4b;  */

void FUN_10b929efc(long param_1)

{
  func_0x00010b92befc(param_1 + 8);
  FUN_10b8d6f08();
  return;
}



/* Entry: 10b929f4c; end: 10b929f7f;  */

void FUN_10b929f4c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b92bce8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_10b9244a4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b929f80; end: 10b929f9f;  */

void FUN_10b929f80(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b9244a4();
  }
  return;
}



/* Entry: 10b929fa0; end: 10b929fbf;  */

void FUN_10b929fa0(void)

{
  func_0x00010b92befc();
  FUN_10b929fc0();
  return;
}



/* Entry: 10b929fc0; end: 10b929fcb;  */

void FUN_10b929fc0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b929fcc; end: 10b929feb;  */

void FUN_10b929fcc(void)

{
  func_0x00010b92befc();
  FUN_10b929fec();
  return;
}



/* Entry: 10b929fec; end: 10b92a04f;  */

void FUN_10b929fec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b92bd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b92a050; end: 10b92a06b;  */

void FUN_10b92a050(void)

{
  undefined1 uStack_11;
  
  FUN_10b92a06c(&uStack_11);
  return;
}



/* Entry: 10b92a06c; end: 10b92a0c3;  */

void FUN_10b92a06c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  int extraout_w11;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010b92bbe8();
  lVar2 = 1;
  FUN_10b92a0d4(auStack_40);
  FUN_10b92a12c(uStack_30);
  func_0x00010b92be94();
  FUN_10b92a0c4(param_1);
  FUN_10b92a208();
  func_0x00010b92bbd4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b92c030();
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    if (*(long *)(puVar1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a0c4; end: 10b92a0d3;  */

void FUN_10b92a0c4(long param_1,long param_2)

{
  int extraout_w11;
  
  func_0x00010b92c030();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a0d4; end: 10b92a0fb;  */

long FUN_10b92a0d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b92a0fc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b92a0fc; end: 10b92a12b;  */

void FUN_10b92a0fc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_DAT_110d76e38;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110d76958;
  param_1[6] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = &UNK_10dd5b8b0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 10b92a12c; end: 10b92a18b;  */

void FUN_10b92a12c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d76e38;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110d76958;
  param_1[6] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = &UNK_10dd5b8b0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 10b92a18c; end: 10b92a19f;  */

void FUN_10b92a18c(void)

{
  func_0x00010b92a1a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92a1a0; end: 10b92a1b3;  */

void FUN_10b92a1a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b92bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b92a1b4; end: 10b92a207;  */

void FUN_10b92a1b4(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a208; end: 10b92a217;  */

void FUN_10b92a208(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92a218; end: 10b92a23b;  */

void FUN_10b92a218(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b92a23c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b92a23c; end: 10b92a2a3;  */

void FUN_10b92a23c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010b92bfe4();
  func_0x00010b92bbe8();
  FUN_10b92a2b4(auStack_50,1);
  FUN_10b92a308(uStack_40);
  func_0x00010b92be94();
  FUN_10b92a2a4(extraout_x8);
  FUN_10b92a438();
  func_0x00010b92bbd4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b92c030();
  if ((unaff_x20 != 0) &&
     ((*(long *)(unaff_x20 + 8) == 0 || (*(long *)(*(long *)(unaff_x20 + 8) + 8) == -1)))) {
    if (*(long *)(puVar1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a2a4; end: 10b92a2b3;  */

void FUN_10b92a2a4(long param_1,long param_2)

{
  int extraout_w11;
  
  func_0x00010b92c030();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a2b4; end: 10b92a2db;  */

long FUN_10b92a2b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b92a2dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b92a2dc; end: 10b92a307;  */

undefined8 * FUN_10b92a2dc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x333333333333334) {
    puVar1 = (undefined8 *)(param_2 * 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d76e88;
  FUN_10b92a358(param_1 + 3);
  return param_1;
}



/* Entry: 10b92a308; end: 10b92a337;  */

undefined8 * FUN_10b92a308(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d76e88;
  FUN_10b92a358(param_1 + 3);
  return param_1;
}



/* Entry: 10b92a338; end: 10b92a33b;  */

void FUN_10b92a338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76e88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b92a33c; end: 10b92a34f;  */

void FUN_10b92a33c(void)

{
  FUN_10b92a3d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92a350; end: 10b92a357;  */

void FUN_10b92a350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b92bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b92a358; end: 10b92a3d7;  */

undefined8 FUN_10b92a358(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *param_2;
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    do {
      func_0x00010b92bc90();
      lStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_10b93b42c(param_1,&lStack_28,&uStack_40);
  func_0x000104bfe1e0(&uStack_40);
  func_0x0001080cbf40(lStack_28);
  return param_1;
}



/* Entry: 10b92a3d8; end: 10b92a3e3;  */

void FUN_10b92a3d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76e88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b92a3e4; end: 10b92a437;  */

void FUN_10b92a3e4(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a438; end: 10b92a477;  */

void FUN_10b92a438(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92a478; end: 10b92a4d7;  */

void FUN_10b92a478(long param_1)

{
  func_0x00010b92c018();
  if (param_1 != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b92a4d8; end: 10b92a4ff;  */

/* WARNING: Possible PIC construction at 0x00010b9a8cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9a8ccc) */

long * FUN_10b92a4d8(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    func_0x00010007e5d0(param_1 + 3);
    func_0x0001003a8cb8();
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b92a500; end: 10b92a547;  */

void FUN_10b92a500(long *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = (uint)param_1;
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    func_0x00010b92bdc8();
    pcVar2 = (char *)(*param_1 + (ulong)uVar1);
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + (ulong)uVar1 * 0x18;
  }
  return;
}



/* Entry: 10b92a548; end: 10b92a553;  */

void FUN_10b92a548(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b92a554; end: 10b92a61f;  */

void FUN_10b92a554(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b92bcf4();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b92bcf4();
        } while (extraout_w10 != 0);
      }
    }
    func_0x00010b92bd9c();
  }
  return;
}



/* Entry: 10b92a620; end: 10b92a643;  */

void FUN_10b92a620(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b92a644(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b92a644; end: 10b92a6ab;  */

void FUN_10b92a644(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  func_0x00010b92bfe4();
  func_0x00010b92bbe8();
  FUN_10b92a6bc(auStack_50,1);
  FUN_10b92a710(uStack_40);
  func_0x00010b92be94();
  FUN_10b92a6ac(extraout_x8);
  FUN_10b92a800();
  func_0x00010b92bbd4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b92c030();
  if ((unaff_x20 != 0) &&
     ((*(long *)(unaff_x20 + 8) == 0 || (*(long *)(*(long *)(unaff_x20 + 8) + 8) == -1)))) {
    if (*(long *)(puVar1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a6ac; end: 10b92a6bb;  */

void FUN_10b92a6ac(long param_1,long param_2)

{
  int extraout_w11;
  
  func_0x00010b92c030();
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a6bc; end: 10b92a6e3;  */

long FUN_10b92a6bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b92a6e4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b92a6e4; end: 10b92a70f;  */

undefined8 * FUN_10b92a6e4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    puVar1 = (undefined8 *)(param_2 * 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d76ed8;
  FUN_10b92a760(param_1 + 3);
  return param_1;
}



/* Entry: 10b92a710; end: 10b92a73f;  */

undefined8 * FUN_10b92a710(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d76ed8;
  FUN_10b92a760(param_1 + 3);
  return param_1;
}



/* Entry: 10b92a740; end: 10b92a743;  */

void FUN_10b92a740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76ed8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b92a744; end: 10b92a757;  */

void FUN_10b92a744(void)

{
  FUN_10b92a7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92a758; end: 10b92a75f;  */

void FUN_10b92a758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b92bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b92a760; end: 10b92a79f;  */

undefined8 FUN_10b92a760(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x00010b934694(param_1,param_2,&uStack_30);
  func_0x00010b92a5fc(&uStack_30);
  return param_1;
}



/* Entry: 10b92a7a0; end: 10b92a7ab;  */

void FUN_10b92a7a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76ed8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b92a7ac; end: 10b92a7ff;  */

void FUN_10b92a7ac(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b92bc90();
      } while (extraout_w11 != 0);
    }
    func_0x00010b92bd44();
    func_0x00010b92bd9c();
    return;
  }
  return;
}



/* Entry: 10b92a800; end: 10b92a80f;  */

void FUN_10b92a800(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92a810; end: 10b92a8e7;  */

void FUN_10b92a810(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b92bcf4();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b92bcf4();
        } while (extraout_w10 != 0);
      }
    }
    func_0x00010b92bd9c();
  }
  return;
}



/* Entry: 10b92a8e8; end: 10b92a90b;  */

void FUN_10b92a8e8(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b92a9bc(&lStack_18);
  return;
}



/* Entry: 10b92a90c; end: 10b92a9bb;  */

bool FUN_10b92a90c(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar5 = 0;
  uVar8 = param_3 >> 7;
  uVar6 = param_1[3];
  lVar7 = *param_1;
  while( true ) {
    uVar8 = uVar8 & uVar6;
    uVar10 = *(ulong *)(lVar7 + uVar8);
    uVar9 = uVar10 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar1 = *param_2;
    lVar2 = param_2[1];
    for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar3 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar8 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar6;
      *param_4 = uVar3;
      plVar4 = (long *)(param_1[1] + uVar3 * 0x18);
      if ((*plVar4 == lVar1) && (plVar4[1] == lVar2)) goto LAB_10b92a9b0;
    }
    if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar8 = lVar5 + uVar8;
  }
LAB_10b92a9b0:
  return uVar9 != 0;
}



/* Entry: 10b92a9bc; end: 10b92a9f7;  */

void FUN_10b92a9bc(undefined8 *param_1)

{
  func_0x00010b92a9dc(*param_1);
  func_0x00010b92bf88();
  return;
}



/* Entry: 10b92a9f8; end: 10b92aa27;  */

/* WARNING: Possible PIC construction at 0x00010b92ab6c: Changing call to branch */

long * FUN_10b92a9f8(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar5;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *plVar6;
  long *plVar7;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  if ((param_1 != (long *)0x0) && (plVar6 = param_1, FUN_10b9a5818(), ((ulong)plVar6 & 1) == 0)) {
    FUN_10b9a5890();
    plVar4 = &lStack_d0;
    func_0x00010b92bbfc();
    plVar7 = *(long **)(param_2 + 0x10);
    lStack_c8 = plVar6[1];
    lStack_d0 = *plVar6;
    *plVar6 = 0;
    uStack_58 = extraout_x8;
    func_0x00010b92abcc(&pcStack_88,plVar7 + 2);
    pcVar2 = pcStack_88;
    pcStack_88 = (code *)0x0;
    ppuStack_80 = (undefined **)0x0;
    func_0x00010b92a5d8(&pcStack_88);
    if (pcVar2 == (code *)0x0) {
      FUN_10b8d6f08(0);
      FUN_10b92b010(&lStack_d0);
      func_0x00010b92bbd4(uStack_58);
      if ((bool)in_ZR) {
        return plVar4;
      }
      ___stack_chk_fail();
    }
    else {
      plVar6 = *(long **)(pcVar2 + 0x40);
      lStack_b8 = 0;
      if (*plVar7 != 0) {
        do {
          func_0x00010b92bc78();
          lStack_b8 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      lStack_b0 = 0;
      if (plVar7[1] != 0) {
        do {
          func_0x00010b92bd34();
          lStack_b0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      if (*(long *)(pcVar2 + 0x10) != 0) {
        do {
          func_0x00010b92bcf4();
        } while (extraout_w10 != 0);
      }
      pcStack_a8 = pcVar2;
      FUN_10b92ac08(&uStack_a0,lStack_d0,lStack_c8);
      lStack_90 = plVar7[4];
      pcStack_88 = FUN_10b92ac60;
      ppuStack_80 = &PTR_FUN_110d76f18;
      puVar3 = (undefined8 *)0x30;
      __Znwm();
      uVar5 = 0;
      if (lStack_b8 != 0) {
        do {
          func_0x00010b92bc78();
          uVar5 = extraout_x8_02;
        } while (extraout_w11_01 != 0);
      }
      *puVar3 = uVar5;
      uVar5 = 0;
      if (lStack_b0 != 0) {
        do {
          func_0x00010b92bd34();
          uVar5 = extraout_x8_03;
        } while (extraout_w11_02 != 0);
      }
      uVar1 = uStack_a0;
      puVar3[1] = uVar5;
      puVar3[2] = pcStack_a8;
      pcStack_a8 = (code *)0x0;
      uStack_a0 = 0;
      puVar3[4] = uStack_98;
      puVar3[3] = uVar1;
      puVar3[5] = lStack_90;
      puStack_78 = puVar3;
      (**(code **)(*plVar6 + 0x28))(plVar6,&pcStack_88);
      (*(code *)*ppuStack_80)(&ppuStack_80);
      plVar4 = &lStack_b8;
    }
    FUN_10b92b010(plVar4 + 3);
    FUN_10b929a58(plVar4 + 2);
    func_0x000107c278f4(plVar4 + 1);
    func_0x0001080d5efc(plVar4);
    func_0x0001080d5af4();
    return (long *)pcVar2;
  }
  return param_1;
}



/* Entry: 10b92aa28; end: 10b92ab9f;  */

/* WARNING: Possible PIC construction at 0x00010b92ab6c: Changing call to branch */

long * FUN_10b92aa28(long *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar4;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long *plVar5;
  long *plVar6;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  plVar5 = &lStack_b0;
  func_0x00010b92bbfc();
  plVar6 = *(long **)(param_2 + 0x10);
  lStack_a8 = param_1[1];
  lStack_b0 = *param_1;
  *param_1 = 0;
  uStack_38 = extraout_x8;
  func_0x00010b92abcc(&pcStack_68,plVar6 + 2);
  pcVar2 = pcStack_68;
  pcStack_68 = (code *)0x0;
  ppuStack_60 = (undefined **)0x0;
  func_0x00010b92a5d8(&pcStack_68);
  if (pcVar2 == (code *)0x0) {
    FUN_10b8d6f08(0);
    FUN_10b92b010(&lStack_b0);
    func_0x00010b92bbd4(uStack_38);
    if ((bool)in_ZR) {
      return plVar5;
    }
    ___stack_chk_fail();
  }
  else {
    plVar5 = *(long **)(pcVar2 + 0x40);
    lStack_98 = 0;
    if (*plVar6 != 0) {
      do {
        func_0x00010b92bc78();
        lStack_98 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    lStack_90 = 0;
    if (plVar6[1] != 0) {
      do {
        func_0x00010b92bd34();
        lStack_90 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    if (*(long *)(pcVar2 + 0x10) != 0) {
      do {
        func_0x00010b92bcf4();
      } while (extraout_w10 != 0);
    }
    pcStack_88 = pcVar2;
    FUN_10b92ac08(&uStack_80,lStack_b0,lStack_a8);
    lStack_70 = plVar6[4];
    pcStack_68 = FUN_10b92ac60;
    ppuStack_60 = &PTR_FUN_110d76f18;
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    uVar4 = 0;
    if (lStack_98 != 0) {
      do {
        func_0x00010b92bc78();
        uVar4 = extraout_x8_02;
      } while (extraout_w11_01 != 0);
    }
    *puVar3 = uVar4;
    uVar4 = 0;
    if (lStack_90 != 0) {
      do {
        func_0x00010b92bd34();
        uVar4 = extraout_x8_03;
      } while (extraout_w11_02 != 0);
    }
    uVar1 = uStack_80;
    puVar3[1] = uVar4;
    puVar3[2] = pcStack_88;
    pcStack_88 = (code *)0x0;
    uStack_80 = 0;
    puVar3[4] = uStack_78;
    puVar3[3] = uVar1;
    puVar3[5] = lStack_70;
    puStack_58 = puVar3;
    (**(code **)(*plVar5 + 0x28))(plVar5,&pcStack_68);
    (*(code *)*ppuStack_60)(&ppuStack_60);
    plVar5 = &lStack_98;
  }
  FUN_10b92b010(plVar5 + 3);
  FUN_10b929a58(plVar5 + 2);
  func_0x000107c278f4(plVar5 + 1);
  func_0x0001080d5efc(plVar5);
  func_0x0001080d5af4();
  return (long *)pcVar2;
}



/* Entry: 10b92aba0; end: 10b92ac07;  */

undefined8 FUN_10b92aba0(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10b92b010(param_1 + 0x18);
  FUN_10b929a58(param_1 + 0x10);
  func_0x000107c278f4(param_1 + 8);
  func_0x0001080d5efc(param_1);
  func_0x0001080d5af4();
  return unaff_x19;
}



/* Entry: 10b92ac08; end: 10b92ac5f;  */

void FUN_10b92ac08(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  
  *param_1 = param_2;
  if (param_2 == 2) {
    if (param_3 != 0) {
      do {
        func_0x00010b92be84();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    if (param_2 != 1) {
      return;
    }
    if ((param_3 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
      do {
        func_0x00010b92bcf4();
      } while (extraout_w10 != 0);
    }
  }
  param_1[1] = param_3;
  return;
}



/* Entry: 10b92ac60; end: 10b92af77;  */

void FUN_10b92ac60(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar5;
  undefined8 extraout_x8_01;
  long lVar6;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_118 [16];
  long lStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  char cStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b0;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_68;
  
  func_0x00010b92bbfc();
  plVar7 = *(long **)(param_1 + 0x10);
  lVar10 = plVar7[5];
  lVar1 = plVar7[2];
  uVar2 = plVar7[3] == 1;
  uStack_68 = extraout_x8;
  if (!(bool)uVar2) {
    lStack_a0 = 2;
    puStack_98 = (undefined *)0x0;
    if (plVar7[4] != 0) {
      do {
        func_0x00010b92bc78();
        puStack_98 = (undefined *)extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    goto LAB_10b92ae98;
  }
  lVar8 = plVar7[4];
  func_0x00010b92bdb8();
  func_0x00010b93b2d0(&lStack_d8,lVar8);
  uVar2 = cStack_d0 == '\x01';
  if ((bool)uVar2) {
    FUN_10b9a8bb4(&lStack_c8,&lStack_d8);
    uStack_b0 = 0;
    func_0x00010b92bf54();
    FUN_10b9a8cb4(&lStack_c8);
  }
  else {
    if (*(long *)(lVar1 + 0x20) != 0) {
      func_0x00010b92bdb8();
      func_0x00010b92bf08(&lStack_108);
      if ((lStack_108 != 0) && (*(int *)(lStack_108 + 0xc) != 0)) {
        FUN_10b9a8bb4(&lStack_c8,&lStack_108);
        uStack_b0 = 1;
        func_0x00010b92bf54();
        FUN_10b9a8cb4(&lStack_c8);
        func_0x000107c278f8(lStack_108);
        goto LAB_10b92ae90;
      }
      func_0x000107c278f8();
    }
    func_0x00010b9abe10(&lStack_e0,*(undefined8 *)(plVar7[4] + 0x28));
    lVar9 = plVar7[4];
    lVar8 = lVar9 + 0x18;
    FUN_10b92b100();
    lVar5 = *(long *)(lVar9 + 0x18);
    lVar6 = *(long *)(lVar9 + 0x30);
    lVar9 = lStack_e0 + 0x18;
    lStack_a0 = lVar8;
    puStack_98 = (undefined *)param_1;
    while (uVar2 = lStack_a0 == lVar5 + lVar6, !(bool)uVar2) {
      FUN_10b9a8e18(&lStack_c8,puStack_98);
      FUN_10b9a9020(lVar9,&lStack_c8);
      FUN_10b9a8d98(&lStack_c8);
      func_0x00010b92b170(&lStack_a0);
      lVar9 = lVar9 + 0x10;
    }
    lVar8 = lStack_a0;
    func_0x000107c31084();
    lVar9 = lVar8;
    func_0x00010b92bdb8();
    lVar5 = *plVar7;
    plVar4 = &lStack_e0;
    func_0x00010b9a8f84(auStack_118);
    FUN_10b9a9894(&lStack_108,auStack_118);
    plVar3 = &lStack_108;
    func_0x000107c27e5c();
    puStack_98 = &UNK_1003ab990;
    puStack_88 = &UNK_1003ab990;
    lStack_a0 = lVar9;
    lStack_90 = lVar5 + 0x10;
    plStack_80 = plVar3;
    plStack_78 = plVar4;
    func_0x000107c2793c(&UNK_10f7cdd6e);
    func_0x000107c3173c(&lStack_c8);
    func_0x000107c31080(&uStack_f0,lVar8,&lStack_c8);
    FUN_10b99f560(&uStack_e8,&uStack_f0);
    lStack_a0 = 2;
    puStack_98 = (undefined *)uStack_e8;
    uStack_e8 = 0;
    func_0x000107c278f8(uStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_108);
    FUN_10b9a8d98(auStack_118);
    func_0x000104bddf60(lStack_e0);
  }
LAB_10b92ae90:
  func_0x000108107a5c(&lStack_d8);
LAB_10b92ae98:
  lVar1 = lVar1 + 0x58;
  uStack_100 = 1;
  lStack_108 = lVar1;
  func_0x00010b92be7c();
  func_0x00010b92bcbc(&lStack_d8);
  if ((lStack_d8 != 0) && (uVar2 = 0, *(long *)(lStack_d8 + 0x78) == lVar10)) {
    uVar2 = plVar7[3] == 1;
    if ((bool)uVar2) {
      func_0x00010b928b80(lStack_d8,&lStack_a0);
    }
    else {
      *(undefined4 *)(lStack_d8 + 0x38) = 3;
      lStack_c8 = 2;
      uStack_c0 = 0;
      if (plVar7[4] != 0) {
        do {
          func_0x00010b92bc78();
          uStack_c0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      func_0x00010b933a50(lStack_d8 + 0x40,&lStack_c8);
      FUN_10b92a4d8(&lStack_c8);
    }
    uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
    lStack_108 = 0;
    uStack_100 = 0;
    lStack_c8 = lVar1;
    func_0x00010b92bc54();
    func_0x000107c2851c(&lStack_c8);
  }
  func_0x00010b92be00();
  func_0x00010b92bf3c();
  plVar7 = &lStack_a0;
  FUN_10b92a4d8();
  func_0x00010b92bbd4(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    if (plVar7[1] == 0) {
      return;
    }
    FUN_10b92aba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92af78; end: 10b92af97;  */

void FUN_10b92af78(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b92aba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92af98; end: 10b92af9b;  */

void FUN_10b92af98(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b92af9c; end: 10b92b00f;  */

void FUN_10b92af9c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w11;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_110d76f18;
  lVar1 = 0x30;
  __Znwm();
  func_0x00010b92bf44();
  lVar2 = *(long *)(lVar3 + 0x10);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    do {
      func_0x00010b92bc90();
      lVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(lVar1 + 0x10) = lVar2;
  FUN_10b92ac08(lVar1 + 0x18,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20));
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b92b010; end: 10b92b037;  */

void FUN_10b92b010(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    func_0x00010b92befc(param_1 + 1);
    FUN_10b92b058();
    return;
  }
  return;
}



/* Entry: 10b92b038; end: 10b92b057;  */

void FUN_10b92b038(void)

{
  func_0x00010b92befc();
  FUN_10b92b058();
  return;
}



/* Entry: 10b92b058; end: 10b92b063;  */

void FUN_10b92b058(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b92b064; end: 10b92b083;  */

void FUN_10b92b064(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b928b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92b084; end: 10b92b087;  */

void FUN_10b92b084(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b92b088; end: 10b92b0ff;  */

void FUN_10b92b088(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + 8);
  *param_1 = &PTR_FUN_110d76f38;
  lVar1 = 0x28;
  __Znwm();
  func_0x00010b92bf44();
  lVar2 = *(long *)(lVar3 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x00010b92bcf4();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b92b100; end: 10b92b12b;  */

undefined1  [16] FUN_10b92b100(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b92b12c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b92b12c; end: 10b92b1a3;  */

void FUN_10b92b12c(long *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = (uint)param_1;
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    func_0x00010b92bdc8();
    pcVar2 = (char *)(*param_1 + (ulong)uVar1);
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + (ulong)uVar1 * 0x10;
  }
  return;
}



/* Entry: 10b92b1a4; end: 10b92b1cb;  */

long FUN_10b92b1a4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10b92b1cc; end: 10b92b49b;  */

void FUN_10b92b1cc(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if ((ulong)param_1[4] < 0x200) {
    puVar12 = (undefined8 *)param_1[1];
    puVar16 = (undefined8 *)param_1[2];
    puVar15 = (undefined8 *)*param_1;
    uVar17 = (long)puVar16 - (long)puVar12;
    plVar13 = param_1 + 3;
    puVar14 = (undefined8 *)*plVar13;
    if (uVar17 < (ulong)((long)puVar14 - (long)puVar15)) {
      uVar7 = 0x1000;
      __Znwm();
      if (puVar14 == puVar16) {
        if (puVar12 == puVar15) {
          lVar11 = (long)puVar14 - (long)puVar12 >> 2;
          if (puVar16 == puVar12) {
            lVar11 = 1;
          }
          plStack_70 = plVar13;
          FUN_10b92b5a0();
          func_0x00010b92bee4(lVar11 * 2 + 6);
          FUN_10b92b578(&puStack_90,param_1[1],param_1[2]);
          puVar16 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)*param_1;
          puVar15 = (undefined8 *)param_1[3];
          puVar14 = (undefined8 *)param_1[2];
          param_1[1] = (long)puStack_88;
          *param_1 = (long)puStack_90;
          param_1[3] = (long)puStack_78;
          param_1[2] = (long)puStack_80;
          puStack_90 = puVar12;
          puStack_88 = puVar16;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010b92bf9c();
          puVar12 = (undefined8 *)param_1[1];
        }
        puVar12[-1] = uVar7;
        param_1[1] = (long)puVar12;
        FUN_10b92b49c(param_1,uVar7);
      }
      else {
        *puVar16 = uVar7;
        param_1[2] = (long)(puVar16 + 1);
      }
    }
    else {
      puVar9 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar9 = (undefined8 *)0x1;
      }
      plStack_98 = plVar13;
      FUN_10b92b5a0();
      puVar14 = (undefined8 *)((long)puVar9 + uVar17);
      puVar15 = puVar9 + param_2;
      uVar7 = 0x1000;
      lVar11 = param_2;
      puStack_b8 = puVar9;
      puStack_b0 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puVar10 = puVar14;
      if (uVar17 == param_2 * 8) {
        if (puVar16 == puVar12) {
          puVar12 = (undefined8 *)0x1;
          plStack_70 = plVar13;
          FUN_10b92b5a0();
          puStack_78 = puVar12 + lVar11;
          puStack_90 = puVar12;
          puStack_88 = puVar12;
          puStack_80 = puVar12;
          FUN_10b92b578(&puStack_90,puVar14,puVar14);
          puVar1 = puStack_78;
          puVar10 = puStack_80;
          puVar16 = puStack_88;
          puVar12 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a8 = puStack_80;
          puStack_a0 = puStack_78;
          puStack_90 = puVar9;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x00010b92bf9c();
          puVar9 = puVar12;
          puVar14 = puVar16;
          puVar15 = puVar1;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar9 >> 3) + 1) / -2;
          puVar10 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar12 = puVar10 + 1;
      *puVar10 = uVar7;
      puVar16 = (undefined8 *)param_1[2];
      puStack_a8 = puVar12;
      while (puVar10 = (undefined8 *)param_1[1], puVar16 != puVar10) {
        puVar10 = puVar14;
        if (puVar14 == puVar9) {
          if (puVar12 < puVar15) {
            lVar11 = (long)puVar12 - (long)puVar9;
            puVar1 = puVar12 + (((long)puVar15 - (long)puVar12 >> 3) + 1) / 2;
            puVar10 = (undefined8 *)((long)puVar1 - ((long)puVar12 - (long)puVar9));
            puVar12 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar10,puVar14,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar15 - (long)puVar9 >> 2;
            if ((long)puVar15 - (long)puVar9 == 0) {
              lVar11 = 1;
            }
            plStack_70 = plVar13;
            FUN_10b92b5a0();
            func_0x00010b92bee4(lVar11 * 2 + 6);
            FUN_10b92b578(&puStack_90,puVar9,puVar12);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar10 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar9;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar15;
            func_0x00010b92bf9c();
            puVar9 = puVar1;
            puVar12 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar16 = puVar16 + -1;
        puVar14 = puVar10 + -1;
        *puVar14 = *puVar16;
      }
      puStack_b8 = (undefined8 *)*param_1;
      *param_1 = (long)puVar9;
      param_1[1] = (long)puVar14;
      puStack_a0 = (undefined8 *)param_1[3];
      puStack_a8 = (undefined8 *)param_1[2];
      param_1[2] = (long)puVar12;
      param_1[3] = (long)puVar15;
      puStack_b0 = puVar10;
      func_0x00010b92b5d4(&puStack_b8);
    }
    return;
  }
  param_1[4] = param_1[4] - 0x200;
  uVar7 = *(undefined8 *)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  func_0x00010b92be10(param_1,uVar7);
  puVar12 = (undefined8 *)param_1[2];
  if (puVar12 == (undefined8 *)param_1[3]) {
    uVar17 = *unaff_x19;
    uVar8 = unaff_x19[1];
    if (uVar8 < uVar17 || uVar8 - uVar17 == 0) {
      plVar13 = (long *)((long)((long)puVar12 - uVar17) >> 2);
      if ((long)puVar12 - uVar17 == 0) {
        plVar13 = (long *)0x1;
      }
      plVar6 = plVar13;
      FUN_10b92b5a0();
      plStack_70 = plVar6;
      plStack_68 = plVar6 + ((ulong)plVar13 >> 2);
      FUN_10b92b578(&plStack_70,unaff_x19[1],unaff_x19[2]);
      uVar17 = unaff_x19[1];
      plVar18 = (long *)*unaff_x19;
      unaff_x19[1] = (ulong)plStack_68;
      *unaff_x19 = (ulong)plStack_70;
      unaff_x19[3] = (ulong)(plVar6 + uVar8);
      unaff_x19[2] = (ulong)(plVar6 + ((ulong)plVar13 >> 2));
      plStack_70 = plVar18;
      plStack_68 = (long *)uVar17;
      func_0x00010b92b5d4(&plStack_70);
      puVar12 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar8 - uVar17) >> 3) + 1) / -2;
      lVar11 = uVar8 + lVar2 * 8;
      lVar3 = (long)puVar12 - uVar8;
      if (lVar3 != 0) {
        _memmove(lVar11,uVar8,lVar3);
        uVar8 = unaff_x19[1];
      }
      puVar12 = (undefined8 *)(lVar11 + lVar3);
      unaff_x19[1] = uVar8 + lVar2 * 8;
    }
  }
  *puVar12 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar12 + 1);
  return;
}



/* Entry: 10b92b49c; end: 10b92b577;  */

void FUN_10b92b49c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010b92be10();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10b92b5a0();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10b92b578(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010b92b5d4(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b92b578; end: 10b92b59f;  */

void FUN_10b92b578(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b92b5a0; end: 10b92b613;  */

undefined1  [16] FUN_10b92b5a0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bfe188();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b92b614; end: 10b92b617;  */

void FUN_10b92b614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76f68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b92b618; end: 10b92b62b;  */

void FUN_10b92b618(void)

{
  func_0x00010b92b634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92b62c; end: 10b92b63f;  */

void FUN_10b92b62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b92bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b92b640; end: 10b92b783;  */

void FUN_10b92b640(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  plVar2 = param_2;
  FUN_10b92a8e8();
  lVar7 = 0;
  uVar8 = (ulong)plVar2 >> 7;
  lVar5 = *param_2;
  do {
    uVar8 = uVar8 & param_2[3];
    uVar3 = *(ulong *)(lVar5 + uVar8);
    uVar9 = uVar3 ^ ((ulong)plVar2 & 0x7f) * 0x101010101010101;
    for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar1 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar10 = param_2[1];
      plVar11 = (long *)(uVar8 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2[3]);
      plVar4 = (long *)(lVar10 + (long)plVar11 * 0x18);
      if ((*plVar4 == *param_3) && (plVar4[1] == param_3[1])) {
        uVar6 = 0;
        goto LAB_10b92b70c;
      }
    }
    if ((uVar3 & ~uVar3 << 6 & 0x8080808080808080) != 0) {
      plVar11 = param_2;
      FUN_10b92b784(param_2,plVar2);
      lVar7 = param_2[1] + (long)plVar11 * 0x18;
      FUN_10b9269fc(lVar7,param_3);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(byte *)(*param_2 + (long)plVar11) = (byte)plVar2 & 0x7f;
      func_0x00010b92beb4();
      lVar5 = *param_2;
      lVar10 = param_2[1];
      uVar6 = 1;
LAB_10b92b70c:
      *param_1 = lVar5 + (long)plVar11;
      param_1[1] = lVar10 + (long)plVar11 * 0x18;
      *(undefined1 *)(param_1 + 2) = uVar6;
      return;
    }
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8;
  } while( true );
}



/* Entry: 10b92b784; end: 10b92b84f;  */

void FUN_10b92b784(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  
  func_0x00010b92be10();
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b92b850(lVar3,uVar4);
  lVar2 = unaff_x19[5];
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + lVar1) == -2) {
      lVar2 = 0;
    }
    else {
      if ((uVar4 == 0) || (uVar4 - (uVar4 >> 3) >> 1 < (ulong)unaff_x19[2])) {
        FUN_10b92b890();
      }
      else {
        FUN_10b92b9d0();
      }
      lVar3 = *unaff_x19;
      lVar1 = lVar3;
      FUN_10b92b850(lVar3,unaff_x19[3]);
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b92b850; end: 10b92b88f;  */

ulong FUN_10b92b850(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b92b890; end: 10b92b9cf;  */

void FUN_10b92b890(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar8 = param_1[3];
  lVar9 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar9 + param_2 * 0x18;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar9;
  _memset();
  lVar9 = 0;
  lVar5 = 6;
  if (param_2 != 7) {
    lVar5 = param_2 - (param_2 >> 3);
  }
  plVar7 = param_1 + 5;
  *plVar7 = lVar5 - param_1[2];
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  param_1[3] = param_2;
  for (; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      plVar4 = plVar7;
      FUN_10b92bb88(plVar7,lVar6);
      lVar3 = *param_1;
      lVar5 = lVar3;
      FUN_10b92b850(lVar3,param_1[3],plVar4);
      bVar2 = (byte)plVar4 & 0x7f;
      *(byte *)(lVar3 + lVar5) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar5 - 8U) + 1) = bVar2;
      FUN_10b92bba4(param_1[1] + lVar5 * 0x18,lVar6);
    }
    lVar6 = lVar6 + 0x18;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b92b9d0; end: 10b92bb87;  */

void FUN_10b92b9d0(long *param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  plVar4 = param_1;
  func_0x00010b92bbe8();
  func_0x000104bda340(*plVar4,param_1[3]);
  for (uVar9 = 0; uVar9 != param_1[3]; uVar9 = uVar9 + 1) {
    if (*(char *)(*param_1 + uVar9) == -2) {
      plVar4 = param_1 + 5;
      FUN_10b92bb88(plVar4,param_1[1] + uVar9 * 0x18);
      lVar7 = *param_1;
      uVar8 = param_1[3];
      lVar5 = lVar7;
      FUN_10b92b850(lVar7,uVar8,plVar4);
      uVar6 = uVar8 & (ulong)plVar4 >> 7;
      if (((lVar5 - uVar6 ^ uVar9 - uVar6) & uVar8) < 8) {
        *(byte *)(lVar7 + uVar9) = (byte)plVar4 & 0x7f;
        func_0x00010b92beb4();
      }
      else {
        cVar1 = *(char *)(lVar7 + lVar5);
        bVar2 = (byte)plVar4 & 0x7f;
        *(byte *)(lVar7 + lVar5) = bVar2;
        *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar5 - 8U) + 1) = bVar2;
        lVar7 = param_1[1];
        if (cVar1 == -0x80) {
          FUN_10b92bba4(lVar7 + lVar5 * 0x18,lVar7 + uVar9 * 0x18);
          *(undefined1 *)(*param_1 + uVar9) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar9 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          FUN_10b92bba4(auStack_70,lVar7 + uVar9 * 0x18);
          FUN_10b92bba4(param_1[1] + uVar9 * 0x18,param_1[1] + lVar5 * 0x18);
          FUN_10b92bba4(param_1[1] + lVar5 * 0x18,auStack_70);
          uVar9 = uVar9 - 1;
        }
      }
    }
  }
  bVar3 = uVar9 == 7;
  lVar5 = 6;
  if (!bVar3) {
    lVar5 = uVar9 - (uVar9 >> 3);
  }
  param_1[5] = lVar5 - param_1[2];
  func_0x00010b92bbd4(uStack_58);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b92a9dc();
  func_0x00010b92bf88();
  return;
}



/* Entry: 10b92bb88; end: 10b92bba3;  */

void FUN_10b92bb88(void)

{
  func_0x00010b92a9dc();
  func_0x00010b92bf88();
  return;
}



/* Entry: 10b92bba4; end: 10b92bbd3;  */

undefined8 FUN_10b92bba4(long param_1,long param_2)

{
  undefined8 unaff_x19;
  
  FUN_10b9269fc();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x00010b92a454(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c278f4(param_2 + 8);
  func_0x0001080d5efc(param_2);
  func_0x0001080d5af4();
  return unaff_x19;
}



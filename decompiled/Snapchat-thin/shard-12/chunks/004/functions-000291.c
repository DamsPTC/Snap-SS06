/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090dd7b4; end: 1090dd7b7;  */

undefined8 * FUN_1090dd7b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7e800;
  func_0x00010b9a0948();
  func_0x00010b9a0a78(param_1 + 3);
  return param_1;
}



/* Entry: 1090dd7b8; end: 1090dd7cb;  */

void FUN_1090dd7b8(void)

{
  func_0x00010b9a0910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090dd7cc; end: 1090dd867;  */

void FUN_1090dd7cc(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar5 = *(long *)(param_2 + 0x30) * *(long *)(param_2 + 0x38);
  uVar1 = uVar5 + *(long *)(param_2 + 0x30);
  uVar4 = param_3 - uVar5;
  if (uVar5 <= param_3 && param_3 < uVar1) {
    *param_1 = *(long *)(param_2 + 0x20) + uVar4;
    param_1[1] = uVar4;
    uVar5 = *(ulong *)(param_2 + 0x40);
    lVar2 = 0;
    if (uVar4 <= uVar5) {
      lVar2 = uVar5 - uVar4;
    }
    lVar3 = 0;
    if (uVar4 <= uVar5) {
      lVar3 = uVar1 - param_3;
    }
    param_1[2] = lVar2;
    param_1[3] = lVar3;
  }
  return;
}



/* Entry: 1090dd868; end: 1090dd997;  */

undefined8 * FUN_1090dd868(undefined8 *param_1)

{
  ulong *puVar1;
  long **pplVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plStack_50;
  ulong uStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puStack_40 = (ulong *)param_1[0xe];
  puVar1 = (ulong *)param_1[0xf];
  *param_1 = &PTR_FUN_110ad9c98;
  plVar5 = param_1 + 8;
  plStack_50 = plVar5;
  puStack_38 = puVar1;
  if (puStack_40 == puVar1) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = *puStack_40;
  }
  while (puStack_40 != puVar1) {
    pplVar2 = &plStack_50;
    func_0x0001090dd410(&plStack_50);
    FUN_1090dd998(param_1[3],pplVar2);
    uStack_48 = uStack_48 + 1;
    if (puStack_40[1] <= uStack_48) {
      puStack_40 = puStack_40 + 2;
      if (puStack_40 == puStack_38) {
        uStack_48 = 0;
      }
      else {
        uStack_48 = *puStack_40;
      }
    }
  }
  func_0x0001090fdb38(param_1 + 0xe);
  lVar3 = param_1[0xb];
  if (lVar3 != 0) {
    lVar6 = 8;
    for (lVar4 = 0; lVar4 != lVar3; lVar4 = lVar4 + 1) {
      if (-1 < *(char *)(*plVar5 + lVar4)) {
        FUN_1090de7ac(param_1[9] + lVar6);
        lVar3 = param_1[0xb];
      }
      lVar6 = lVar6 + 0x10;
    }
    __ZdlPv();
    param_1[0xd] = 0;
    param_1[8] = &UNK_10dd5b8b0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  FUN_10909b564(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090dd998; end: 1090dd9ef;  */

void FUN_1090dd998(long param_1,long *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*param_2 != 0) {
    do {
      func_0x0001090df438();
      uStack_28 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x0001090def5c(param_1 + 0x68,&uStack_28);
  func_0x0001090df488();
  FUN_1090de270(param_1,*param_2 + 0x20);
  return;
}



/* Entry: 1090dd9f0; end: 1090dd9f3;  */

undefined8 * FUN_1090dd9f0(undefined8 *param_1)

{
  ulong *puVar1;
  long **pplVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plStack_50;
  ulong uStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puStack_40 = (ulong *)param_1[0xe];
  puVar1 = (ulong *)param_1[0xf];
  *param_1 = &PTR_FUN_110ad9c98;
  plVar5 = param_1 + 8;
  plStack_50 = plVar5;
  puStack_38 = puVar1;
  if (puStack_40 == puVar1) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = *puStack_40;
  }
  while (puStack_40 != puVar1) {
    pplVar2 = &plStack_50;
    func_0x0001090dd410(&plStack_50);
    FUN_1090dd998(param_1[3],pplVar2);
    uStack_48 = uStack_48 + 1;
    if (puStack_40[1] <= uStack_48) {
      puStack_40 = puStack_40 + 2;
      if (puStack_40 == puStack_38) {
        uStack_48 = 0;
      }
      else {
        uStack_48 = *puStack_40;
      }
    }
  }
  func_0x0001090fdb38(param_1 + 0xe);
  lVar3 = param_1[0xb];
  if (lVar3 != 0) {
    lVar6 = 8;
    for (lVar4 = 0; lVar4 != lVar3; lVar4 = lVar4 + 1) {
      if (-1 < *(char *)(*plVar5 + lVar4)) {
        FUN_1090de7ac(param_1[9] + lVar6);
        lVar3 = param_1[0xb];
      }
      lVar6 = lVar6 + 0x10;
    }
    __ZdlPv();
    param_1[0xd] = 0;
    param_1[8] = &UNK_10dd5b8b0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  FUN_10909b564(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090dd9f4; end: 1090dda27;  */

void FUN_1090dd9f4(void)

{
  FUN_1090dd868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090dda28; end: 1090dda4b;  */

void FUN_1090dda28(void)

{
  func_0x0001090df3d8();
  func_0x0001090dd5b8();
  func_0x0001090df400();
  return;
}



/* Entry: 1090dda4c; end: 1090ddb33;  */

void FUN_1090dda4c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x0001090df3a0();
  puVar2 = (undefined8 *)(lVar1 + 0x40);
  uStack_58 = param_3;
  uStack_38 = extraout_x8;
  FUN_1090ddb34();
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x20))
              (&lStack_50,*(long **)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28));
    uVar3 = auStack_48[0];
    in_ZR = lStack_50 == 1;
    if ((bool)in_ZR) {
      FUN_1090de730(&uStack_60,auStack_48,(undefined8 *)(param_2 + 0x28),&uStack_58,param_2 + 0x20);
      func_0x0001090ddb58(param_2 + 0x40,uStack_58);
      func_0x0001090ddb8c();
      func_0x0001090df460();
      uVar4 = 1;
      uVar3 = uStack_60;
    }
    else {
      auStack_48[0] = 0;
      uVar4 = 2;
    }
    *param_1 = uVar4;
    param_1[1] = uVar3;
    FUN_1090de718(&lStack_50);
  }
  else {
    uVar3 = *puVar2;
    *param_1 = 1;
    param_1[1] = uVar3;
  }
  func_0x0001090df374(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090df3d8();
  FUN_1090de6ec();
  func_0x0001090df400();
  return;
}



/* Entry: 1090ddb34; end: 1090ddbcf;  */

void FUN_1090ddb34(void)

{
  func_0x0001090df3d8();
  FUN_1090de6ec();
  func_0x0001090df400();
  return;
}



/* Entry: 1090ddbd0; end: 1090ddbeb;  */

undefined8 FUN_1090ddbd0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  FUN_1090ddbec();
  return *puVar1;
}



/* Entry: 1090ddbec; end: 1090ddc0b;  */

undefined1  [16] FUN_1090ddbec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uStack_50;
  ulong uStack_48;
  
  func_0x0001090df490();
  func_0x0001090df49c();
  if ((param_3 & 1) != 0) {
    func_0x0001090df3d8();
    func_0x0001090dd5b8();
    func_0x0001090df400();
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x0001080da3e4();
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_1090dedb8(&uStack_50);
  FUN_1090dedec(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 1090ddc0c; end: 1090ddc23;  */

void FUN_1090ddc0c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int extraout_w10;
  long lVar4;
  
  if (*(long *)(param_1 + 0x28) != param_2) {
    *(long *)(param_1 + 0x28) = param_2;
    while (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78)) {
      plVar3 = (long *)(param_1 + 0x40);
      FUN_1090dddcc();
      lVar4 = *plVar3;
      if (lVar4 != 0) {
        do {
          func_0x0001090df3f0();
        } while (extraout_w10 != 0);
      }
      func_0x0001090ddc90(param_1,lVar4);
      plVar3 = (long *)(lVar4 + 8);
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        func_0x0001090df390();
      }
    }
    return;
  }
  return;
}



/* Entry: 1090ddc24; end: 1090ddd03;  */

void FUN_1090ddc24(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int extraout_w10;
  long lVar4;
  
  while (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78)) {
    plVar3 = (long *)(param_1 + 0x40);
    FUN_1090dddcc();
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      do {
        func_0x0001090df3f0();
      } while (extraout_w10 != 0);
    }
    func_0x0001090ddc90(param_1,lVar4);
    plVar3 = (long *)(lVar4 + 8);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001090df390();
    }
  }
  return;
}



/* Entry: 1090ddd04; end: 1090ddd0f;  */

void FUN_1090ddd04(long param_1,long param_2)

{
  long *unaff_x19;
  undefined8 uStack_28;
  
  param_1 = param_1 + 0x40;
  func_0x0001090df3d8(param_1,*(undefined8 *)(param_2 + 0x38));
  FUN_1090de6ec();
  if (*unaff_x19 + unaff_x19[3] != param_1) {
    FUN_1090ded64();
    func_0x0001090fda94(unaff_x19 + 6,uStack_28);
  }
  return;
}



/* Entry: 1090ddd10; end: 1090ddd63;  */

void FUN_1090ddd10(long param_1)

{
  long *unaff_x19;
  undefined8 uStack_28;
  
  func_0x0001090df3d8();
  FUN_1090de6ec();
  if (*unaff_x19 + unaff_x19[3] != param_1) {
    FUN_1090ded64();
    func_0x0001090fda94(unaff_x19 + 6,uStack_28);
  }
  return;
}



/* Entry: 1090ddd64; end: 1090dddcb;  */

void FUN_1090ddd64(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  
  do {
    func_0x0001090df3f0();
  } while (extraout_w10 != 0);
  func_0x0001090ddd9c();
  if (param_2 != (long *)0x0) {
    plVar1 = param_2 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001090de7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090dddcc; end: 1090dddeb;  */

long FUN_1090dddcc(long param_1,undefined8 param_2,uint param_3)

{
  func_0x0001090df490();
  func_0x0001090df49c();
  if ((param_3 & 1) != 0) {
    func_0x0001090df3d8();
    FUN_1090de6ec();
    func_0x0001090df400();
    return param_1;
  }
  func_0x0001080da3e4();
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1090dddec; end: 1090ddf3b;  */

void FUN_1090dddec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar6;
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    *(long *)(param_1 + 0x28) = lVar5;
    while ((uVar4 < *(ulong *)(param_1 + 0x30) && (*(long *)(param_1 + 0x68) != 0))) {
      lVar6 = *(long *)(param_1 + 0x70);
      if (lVar6 != 0) {
        do {
          func_0x0001090df3f0();
        } while (extraout_w10 != 0);
        do {
          func_0x0001090df3f0();
        } while (extraout_w10_00 != 0);
      }
      lStack_38 = lVar6;
      if (*(long *)(lVar6 + 0x50) == lVar5) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          func_0x0001090df390();
        }
        func_0x0001090df460();
        return;
      }
      *(long *)(lVar6 + 0x50) = lVar5;
      func_0x0001090de234(alStack_48,*(long *)(param_1 + 0x38) + *(long *)(lVar6 + 0x48) * 0x10);
      if (((alStack_48[0] == 0) || (*(ulong *)(lVar6 + 0x38) < *(ulong *)(alStack_48[0] + 0x30))) ||
         (*(ulong *)(alStack_48[0] + 0x38) <= *(ulong *)(lVar6 + 0x38))) {
        FUN_1090dd998(param_1,&lStack_38);
        if (alStack_48[0] != 0) {
          FUN_1090ddd04(alStack_48[0],lVar6);
        }
      }
      else {
        do {
          func_0x0001090df3f0();
        } while (extraout_w10_01 != 0);
        lStack_50 = lVar6;
        func_0x0001090ddd9c(param_1,&lStack_50);
        FUN_1090de7d0(lStack_50);
      }
      func_0x0001090df340(alStack_48);
      plVar1 = (long *)(lVar6 + 8);
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        func_0x0001090df390();
      }
      func_0x0001090df460();
      uVar4 = *(ulong *)(param_1 + 0x20);
    }
  }
  return;
}



/* Entry: 1090ddf3c; end: 1090ddfb7;  */

void FUN_1090ddf3c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110ad9cc8;
  param_1[2] = 0x10000;
  param_1[1] = 1;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = lVar4;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 1090ddfb8; end: 1090de0ff;  */

undefined8 * FUN_1090ddfb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9cc8;
  func_0x0001090de03c(param_1 + 0xd);
  func_0x0001090de084(param_1 + 7);
  func_0x0001090de0b8(param_1);
  func_0x0001090de03c(param_1 + 0xd);
  FUN_1090de7ac(param_1 + 0xe);
  FUN_1090de7ac(param_1 + 0xd);
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (param_1[7] != 0) {
    func_0x0001090de084(param_1 + 7);
    __ZdlPv(param_1[7]);
  }
  FUN_1090958e8(param_1 + 3);
  return param_1;
}



/* Entry: 1090de100; end: 1090de103;  */

undefined8 * FUN_1090de100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9cc8;
  func_0x0001090de03c(param_1 + 0xd);
  func_0x0001090de084(param_1 + 7);
  func_0x0001090de0b8(param_1);
  func_0x0001090de03c(param_1 + 0xd);
  FUN_1090de7ac(param_1 + 0xe);
  FUN_1090de7ac(param_1 + 0xd);
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (param_1[7] != 0) {
    func_0x0001090de084(param_1 + 7);
    __ZdlPv(param_1[7]);
  }
  FUN_1090958e8(param_1 + 3);
  return param_1;
}



/* Entry: 1090de104; end: 1090de117;  */

void FUN_1090de104(void)

{
  FUN_1090ddfb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090de118; end: 1090de1bf;  */

void FUN_1090de118(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 4;
  func_0x0001090deff4(param_1,param_2,&lStack_28);
  FUN_1090de1c0(auStack_38,param_1);
  func_0x0001090de178((long *)(param_2 + 0x38),auStack_38);
  func_0x0001090def34(auStack_38);
  return;
}



/* Entry: 1090de1c0; end: 1090de1c7;  */

void FUN_1090de1c0(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001090df280(&uStack_30,*param_2);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001090df428();
    } while (extraout_w10 != 0);
  }
  func_0x0001090df340(&uStack_30);
  return;
}



/* Entry: 1090de1c8; end: 1090de26f;  */

long * FUN_1090de1c8(long *param_1,long *param_2)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  
  plVar1 = param_1;
  if (*param_2 != *param_1) {
    func_0x0001090def5c();
    func_0x00010b9a09e0(*param_2,0,*param_1);
    func_0x0001090df308(param_1,param_2);
    if (*(long *)(*param_1 + 0x18) == 0) {
      plVar1 = param_1 + 1;
      if (plVar1 != param_1) {
        lVar2 = 0;
        if (*param_1 != 0) {
          do {
            func_0x0001090df438();
            lVar2 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        *plVar1 = lVar2;
        FUN_1090de7d0();
      }
      return plVar1;
    }
  }
  return plVar1;
}



/* Entry: 1090de270; end: 1090de287;  */

undefined8 * FUN_1090de270(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - param_2[1];
  puVar2 = (undefined8 *)(param_1 + 0x50);
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 < *(undefined8 **)(param_1 + 0x60)) {
    uVar3 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    puVar2 = puVar1 + 2;
  }
  else {
    FUN_1090de61c();
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  return puVar2 + -2;
}



/* Entry: 1090de288; end: 1090de3a3;  */

long * FUN_1090de288(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_48;
  
  func_0x0001090df3a0();
  plVar3 = &lStack_68;
  uStack_48 = extraout_x8;
  func_0x0001090e7dc0();
  plVar4 = *(long **)(param_2 + 0x50);
  plVar1 = *(long **)(param_2 + 0x58);
  lVar5 = (long)plVar1 - (long)plVar4;
  do {
    lVar5 = lVar5 + -0x10;
    if (plVar4 == plVar1) {
      func_0x0001090e7e50(&lStack_60,&lStack_68);
      lVar5 = lStack_58;
      uVar2 = lStack_60 == 1;
      if ((bool)uVar2) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + lStack_68;
        param_1[2] = lStack_68;
        uVar6 = 1;
      }
      else {
        lStack_58 = 0;
        uVar6 = 2;
      }
      *param_1 = uVar6;
      param_1[1] = lVar5;
      plVar3 = &lStack_60;
      func_0x0001090c7108();
LAB_1090de37c:
      func_0x0001090df374(uStack_48);
      if ((bool)uVar2) {
        return plVar3;
      }
      ___stack_chk_fail();
      plVar4 = (long *)plVar3[1];
      if (plVar4 < (long *)plVar3[2]) {
        lVar5 = *param_3;
        plVar4[1] = param_3[1];
        *plVar4 = lVar5;
        plVar4 = plVar4 + 2;
      }
      else {
        plVar4 = plVar3;
        FUN_1090de61c();
      }
      plVar3[1] = (long)plVar4;
      return plVar4 + -2;
    }
    if (plVar4[1] == lStack_68) {
      lStack_58 = plVar4[1];
      lStack_60 = *plVar4;
      param_3 = plVar4 + 2;
      uVar2 = param_3 == plVar1;
      if (!(bool)uVar2) {
        plVar3 = plVar4;
        _memmove(plVar4,param_3,lVar5);
      }
      *(long *)(param_2 + 0x58) = (long)plVar4 + lVar5;
      *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + lStack_68;
      *param_1 = 1;
      param_1[2] = lStack_58;
      param_1[1] = lStack_60;
      goto LAB_1090de37c;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}



/* Entry: 1090de3a4; end: 1090de46b;  */

undefined8 * FUN_1090de3a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_1090de61c();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 1090de46c; end: 1090de4ab;  */

ulong FUN_1090de46c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_1090de520();
  func_0x0001090df41c();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 1090de4ac; end: 1090de51f;  */

void FUN_1090de4ac(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001090df41c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1090de520; end: 1090de52b;  */

long * FUN_1090de520(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001090de574();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1090de52c; end: 1090de597;  */

long * FUN_1090de52c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001090de574();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1090de598; end: 1090de5b3;  */

long * FUN_1090de598(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bfe188();
  FUN_1090de5e0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090de5b4; end: 1090de5df;  */

long * FUN_1090de5b4(long *param_1)

{
  FUN_1090de5e0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090de5e0; end: 1090de5e7;  */

void FUN_1090de5e0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090df41c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1090def34();
  }
  return;
}



/* Entry: 1090de5e8; end: 1090de61b;  */

void FUN_1090de5e8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001090df41c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_1090def34();
  }
  return;
}



/* Entry: 1090de61c; end: 1090de6eb;  */

undefined8 * FUN_1090de61c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  lVar2 = *param_1;
  lVar7 = param_1[1] - lVar2;
  uVar1 = (lVar7 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar6 = param_1[2] - lVar2 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - lVar2)) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      unaff_x20 = param_1;
      if (uVar6 >> 0x3c != 0) goto LAB_1090dd60c;
      lVar5 = uVar6 << 4;
      __Znwm();
    }
    puVar4 = (undefined8 *)(lVar5 + lVar7);
    uVar8 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar8;
    _memcpy(puVar4 + (lVar7 >> 4) * -2,lVar2,lVar7);
    *param_1 = (long)(puVar4 + (lVar7 >> 4) * -2);
    param_1[1] = (long)(puVar4 + 2);
    param_1[2] = lVar5 + uVar6 * 0x10;
    if (lVar2 != 0) {
      __ZdlPv(lVar2);
    }
    return puVar4 + 2;
  }
  func_0x00010bdb2360();
LAB_1090dd60c:
  func_0x000104bfe188();
  pcStack_48 = FUN_1090de6ec;
  plStack_60 = unaff_x20;
  lStack_58 = lVar2;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x0001090df41c();
  func_0x0001090dd5e8();
  plVar3 = unaff_x20;
  func_0x0001090dd65c(unaff_x20,lVar2,param_1,&lStack_68);
  if ((int)plVar3 == 0) {
    puVar4 = (undefined8 *)(*unaff_x20 + unaff_x20[3]);
  }
  else {
    puVar4 = (undefined8 *)(*unaff_x20 + lStack_68);
  }
  return puVar4;
}



/* Entry: 1090de6ec; end: 1090de717;  */

long FUN_1090de6ec(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x0001090df41c();
  func_0x0001090dd5e8();
  plVar1 = unaff_x20;
  func_0x0001090dd65c();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1090de718; end: 1090de72f;  */

void FUN_1090de718(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 1090de730; end: 1090de7ab;  */

void FUN_1090de730(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  uVar2 = *param_3;
  uVar3 = *param_4;
  uVar4 = *param_5;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110ad9c68;
  puVar1[1] = 1;
  uVar5 = *param_2;
  puVar1[5] = param_2[1];
  puVar1[4] = uVar5;
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = 0;
  puVar1[9] = uVar4;
  puVar1[10] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1090de7ac; end: 1090de7cf;  */

undefined8 * FUN_1090de7ac(undefined8 *param_1)

{
  FUN_1090de7d0(*param_1);
  return param_1;
}



/* Entry: 1090de7d0; end: 1090de7fb;  */

void FUN_1090de7d0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090de7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090de7fc; end: 1090de823;  */

long FUN_1090de7fc(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1090de824(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1090de824; end: 1090dea03;  */

void FUN_1090de824(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 extraout_w8;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  plVar3 = param_2;
  func_0x0001090dd5e8();
  lVar7 = 0;
  uVar8 = (ulong)plVar3 >> 7;
  lVar5 = *param_2;
  while( true ) {
    uVar8 = uVar8 & param_2[3];
    uVar11 = *(ulong *)(lVar5 + uVar8);
    uVar9 = uVar11 ^ ((ulong)plVar3 & 0x7f) * 0x101010101010101;
    for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar10 = param_2[1];
      plVar4 = (long *)(uVar8 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & param_2[3]);
      if (*(long *)(lVar10 + (long)plVar4 * 0x10) == *param_3) {
        uVar6 = 0;
        goto LAB_1090de8dc;
      }
    }
    if ((uVar11 & ~uVar11 << 6 & 0x8080808080808080) != 0) break;
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8;
  }
  plVar4 = param_2;
  func_0x0001090de934(param_2,plVar3);
  lVar7 = *param_2;
  plVar1 = (long *)(param_2[1] + (long)plVar4 * 0x10);
  *plVar1 = *param_3;
  plVar1[1] = 0;
  *(byte *)(lVar7 + (long)plVar4) = (byte)plVar3 & 0x7f;
  func_0x0001090df448();
  *(undefined1 *)(extraout_x9 + extraout_x10 + extraout_x11 + 1) = extraout_w8;
  lVar5 = *param_2;
  lVar10 = param_2[1];
  uVar6 = 1;
LAB_1090de8dc:
  *param_1 = lVar5 + (long)plVar4;
  param_1[1] = lVar10 + (long)plVar4 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 1090dea04; end: 1090dea43;  */

ulong FUN_1090dea04(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 1090dea44; end: 1090ded13;  */

void FUN_1090dea44(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 extraout_w8;
  long extraout_x9;
  long extraout_x10;
  long extraout_x11;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar6 = param_1[3];
  lVar7 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar2 = lVar7 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2 + lVar7;
  _memset();
  lVar7 = 0;
  *(undefined1 *)(lVar2 + param_2) = 0xff;
  lVar2 = 6;
  if (param_2 != 7) {
    lVar2 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar2 - param_1[2];
  param_1[3] = param_2;
  for (; lVar6 != lVar7; lVar7 = lVar7 + 1) {
    if (-1 < *(char *)(lVar1 + lVar7)) {
      lVar2 = lVar4;
      FUN_1090ded14();
      lVar5 = *param_1;
      lVar3 = lVar5;
      FUN_1090dea04(lVar5,param_1[3],lVar2);
      *(byte *)(lVar5 + lVar3) = (byte)lVar2 & 0x7f;
      func_0x0001090df448();
      *(undefined1 *)(extraout_x9 + extraout_x11 + extraout_x10 + 1) = extraout_w8;
      FUN_1090ded38(param_1[1] + lVar3 * 0x10,lVar4);
    }
    lVar4 = lVar4 + 0x10;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1090ded14; end: 1090ded37;  */

void FUN_1090ded14(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 1090ded38; end: 1090ded4f;  */

undefined8 * FUN_1090ded38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *puVar1 = 0;
  FUN_1090de7d0(*puVar1);
  return puVar1;
}



/* Entry: 1090ded50; end: 1090ded63;  */

undefined1  [16] FUN_1090ded50(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((param_3 & 1) != 0) {
    func_0x0001090df3d8();
    func_0x0001090dd5b8();
    func_0x0001090df400();
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  func_0x0001080da3e4();
  uStack_50 = param_2;
  uStack_48 = param_3;
  FUN_1090dedb8(&uStack_50);
  FUN_1090dedec(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 1090ded64; end: 1090dedb7;  */

undefined1  [16] FUN_1090ded64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1090dedb8(&uStack_40);
  FUN_1090dedec(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 1090dedb8; end: 1090dedeb;  */

long * FUN_1090dedb8(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_1090dee2c();
  return param_1;
}



/* Entry: 1090dedec; end: 1090dee2b;  */

void FUN_1090dedec(long *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_1090de7ac(param_3 + 8);
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 1090dee2c; end: 1090dee7b;  */

void FUN_1090dee2c(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x000107c27e58();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 1090dee7c; end: 1090def1f;  */

void FUN_1090dee7c(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 1090def20; end: 1090def33;  */

long FUN_1090def20(long param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    func_0x0001090df3d8();
    FUN_1090de6ec();
    func_0x0001090df400();
    return param_1;
  }
  func_0x0001080da3e4();
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1090def34; end: 1090df037;  */

long FUN_1090def34(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1090df038; end: 1090df05b;  */

void FUN_1090df038(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1090df05c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1090df05c; end: 1090df0df;  */

void FUN_1090df05c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_50;
  func_0x0001090df3a0();
  uStack_38 = extraout_x8;
  FUN_1090df0fc(auStack_50,1);
  FUN_1090df150(lStack_40,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_1090df0e0(param_1,lVar6 + 0x18);
  FUN_1090df228();
  func_0x0001090df374(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_1090df0e0;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_70 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_70);
    func_0x000107c284e8(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1090df0e0; end: 1090df0fb;  */

void FUN_1090df0e0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1090df0fc; end: 1090df123;  */

long FUN_1090df0fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090df124();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090df124; end: 1090df14f;  */

undefined8 * FUN_1090df124(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x19999999999999a) {
    puVar1 = (undefined8 *)(param_2 * 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad9d48;
  func_0x0001090df1a8(param_1 + 3);
  return param_1;
}



/* Entry: 1090df150; end: 1090df17f;  */

undefined8 * FUN_1090df150(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad9d48;
  func_0x0001090df1a8(param_1 + 3);
  return param_1;
}



/* Entry: 1090df180; end: 1090df183;  */

void FUN_1090df180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9d48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090df184; end: 1090df197;  */

void FUN_1090df184(void)

{
  func_0x0001090df1b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090df198; end: 1090df1bf;  */

void FUN_1090df198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090df1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090df1c0; end: 1090df227;  */

void FUN_1090df1c0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090df228; end: 1090df237;  */

void FUN_1090df228(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090df238; end: 1090df367;  */

void FUN_1090df238(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001090df280(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x0001090df428();
    } while (extraout_w10 != 0);
  }
  func_0x0001090df340(&uStack_30);
  return;
}



/* Entry: 1090df368; end: 1090df4af;  */

void FUN_1090df368(void)

{
  return;
}



/* Entry: 1090df4b0; end: 1090df5e3;  */

undefined8 *
FUN_1090df4b0(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4,long *param_5,
             long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int extraout_w11;
  
  *param_1 = &PTR_FUN_110ad9d98;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  lVar5 = *param_3;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    do {
      func_0x0001090e0fc4();
      lVar5 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[4] = lVar5;
  _memcpy(param_1 + 5,param_4,0x48);
  lVar5 = *param_5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xe] = lVar5;
  lVar7 = *param_6;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar7 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar5 = param_1[0xe];
  }
  param_1[0xf] = lVar7;
  param_1[0x10] = &UNK_10dd5b8b0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &UNK_10dd5b8b0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = &UNK_10dd5b8b0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0;
  uVar6 = *(ulong *)(lVar5 + 0x10);
  uVar8 = *(ulong *)(param_4 + 0x18);
  if (uVar8 < 2) {
    uVar8 = 1;
  }
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = uVar8 / uVar6;
  }
  lVar5 = uVar8 - uVar4 * uVar6;
  if (lVar5 != 0) {
    uVar8 = (uVar8 + uVar6) - lVar5;
  }
  param_1[0x26] = uVar8;
  FUN_1090df5e4(param_1);
  return param_1;
}



/* Entry: 1090df5e4; end: 1090df6bb;  */

void FUN_1090df5e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if (*(ulong *)(param_1 + 0x150) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x120) = uVar4;
    *(undefined8 *)(param_1 + 0x128) = uVar4;
    *(undefined8 *)(param_1 + 0x118) = uVar4;
    lVar3 = *(long *)(param_1 + 0x70);
    uVar9 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x70);
    uVar5 = *(ulong *)(lVar3 + 0x10);
    uVar9 = *(ulong *)(param_1 + 0x50);
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (*(long *)(param_1 + 0x48) + (uVar5 >> 1)) / uVar5;
    }
    uVar6 = uVar6 * uVar5;
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar9 / uVar5;
    }
    uVar1 = uVar6;
    if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
      uVar1 = uVar2 * uVar5;
    }
    if (uVar9 != 0) {
      uVar6 = uVar1;
    }
    if (uVar6 <= *(ulong *)(param_1 + 0x130)) {
      uVar6 = *(ulong *)(param_1 + 0x130);
    }
    *(ulong *)(param_1 + 0x128) = uVar6;
    dVar8 = (double)*(ulong *)(param_1 + 0x150);
    auVar10 = NEON_fmov(0x3fc0000000000000,8);
    uVar9 = (ulong)(*(double *)(param_1 + 0x28) * dVar8 * auVar10._0_8_);
    uVar5 = (ulong)(*(double *)(param_1 + 0x30) * dVar8 * auVar10._8_8_);
    *(ulong *)(param_1 + 0x120) = uVar5 ^ (uVar5 ^ uVar6) & -(ulong)(uVar5 < uVar6);
    *(ulong *)(param_1 + 0x118) = uVar9 ^ (uVar9 ^ uVar6) & -(ulong)(uVar9 < uVar6);
    if (*(double *)(param_1 + 0x38) == 0.0) {
      uVar9 = 0;
    }
    else {
      uVar5 = (ulong)(*(double *)(param_1 + 0x38) * dVar8 * 0.125);
      uVar9 = uVar6;
      if (uVar6 <= uVar5) {
        uVar9 = uVar5;
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar9 / uVar6;
      }
      lVar7 = uVar9 - uVar5 * uVar6;
      if (lVar7 != 0) {
        uVar9 = (uVar9 + uVar6) - lVar7;
      }
    }
  }
  *(ulong *)(lVar3 + 0x20) = uVar9;
  return;
}



/* Entry: 1090df6bc; end: 1090df77f;  */

/* WARNING: Removing unreachable block (ram,0x0001090df710) */

undefined8 * FUN_1090df6bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_110ad9d98;
  FUN_1090df780();
  lVar2 = param_1[0x10];
  lVar3 = param_1[0x13];
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)(lVar2 + lVar3)) {
    func_0x0001090e1064(*(undefined8 *)(lStack_28 + 8));
    FUN_1090df7ac(&puStack_30);
  }
  func_0x0001090df7e0(param_1);
  FUN_10909cc04(param_1 + 0x22);
  FUN_1090e03d8(param_1 + 0x1c);
  FUN_1090e03d8(param_1 + 0x16);
  FUN_1090e03d8(param_1 + 0x10);
  FUN_1090958e8(param_1 + 0xf);
  FUN_10909b564(param_1 + 0xe);
  func_0x000104bd5214(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090df780; end: 1090df7ab;  */

undefined1  [16] FUN_1090df780(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x0001090e0500(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1090df7ac; end: 1090df84f;  */

long * FUN_1090df7ac(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  func_0x0001090e0500();
  return param_1;
}



/* Entry: 1090df850; end: 1090df853;  */

/* WARNING: Removing unreachable block (ram,0x0001090df710) */

undefined8 * FUN_1090df850(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_30;
  long lStack_28;
  
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_110ad9d98;
  FUN_1090df780();
  lVar2 = param_1[0x10];
  lVar3 = param_1[0x13];
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)(lVar2 + lVar3)) {
    func_0x0001090e1064(*(undefined8 *)(lStack_28 + 8));
    FUN_1090df7ac(&puStack_30);
  }
  func_0x0001090df7e0(param_1);
  FUN_10909cc04(param_1 + 0x22);
  FUN_1090e03d8(param_1 + 0x1c);
  FUN_1090e03d8(param_1 + 0x16);
  FUN_1090e03d8(param_1 + 0x10);
  FUN_1090958e8(param_1 + 0xf);
  FUN_10909b564(param_1 + 0xe);
  func_0x000104bd5214(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090df854; end: 1090df867;  */

void FUN_1090df854(void)

{
  FUN_1090df6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090df868; end: 1090df8ff;  */

void FUN_1090df868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_5;
  func_0x0001090e0550(&uStack_40,param_1 + 0x70);
  func_0x0001090e0580(&uStack_48,param_1 + 0x18,&uStack_38,param_3,&uStack_40,&uStack_30,
                      param_1 + 0x78,param_1 + 0x20);
  FUN_1090e1b2c(uStack_48,param_1);
  FUN_1090df900(param_1 + 0x80,&uStack_38);
  FUN_1090df928();
  FUN_1090df974(param_1);
  FUN_1090e0858(uStack_48);
  FUN_10909b60c(uStack_40);
  return;
}



/* Entry: 1090df900; end: 1090df927;  */

long FUN_1090df900(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1090e0864(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 1090df928; end: 1090df973;  */

long * FUN_1090df928(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x0001090e0fc4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_1090e0858();
  }
  return param_1;
}



/* Entry: 1090df974; end: 1090dfd8f;  */

void FUN_1090df974(long ******param_1,long ******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  undefined8 extraout_x8;
  long ******pppppplVar11;
  long ******extraout_x8_00;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  int extraout_w11;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = param_1;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar11 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar11 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      if (*(char *)((long)param_1 + 0x15a) == '\x01') {
        uVar16 = 0;
        uVar17 = 0;
        *(undefined1 *)((long)param_1 + 0x15a) = 0;
        for (ppppplVar13 = param_1[0x28]; ppppplVar13 < param_1[0x29];
            ppppplVar13 = (long *****)((long)ppppplVar13 + 1)) {
          pppppplVar11 = param_1;
          func_0x0001090dfdec(param_1,ppppplVar13);
          uVar17 = (long)(*pppppplVar11)[0x22] + uVar17;
          if ((*pppppplVar11)[0x22] != (long ****)0x0) {
            uVar16 = uVar16 + 1;
          }
        }
        if (uVar16 == 0) {
          param_3 = (long *****)0x0;
        }
        else {
          param_3 = (long *****)0x0;
          if (uVar16 != 0) {
            param_3 = (long *****)(uVar17 / uVar16);
          }
        }
        param_1[0x2a] = param_3;
        pppplVar15 = param_1[0xf][7];
        if (pppplVar15 != (long ****)0x0) {
          pppplVar3 = pppplVar15 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          param_3 = param_1[0x2a];
        }
        param_2 = (long ******)param_1[3];
        func_0x0001090e4548(pppplVar15);
        FUN_109097138(pppplVar15);
        FUN_1090df5e4(param_1);
      }
      if (param_1[0x18] != (long *****)0x0) {
        ppppplVar13 = param_1[0x19];
        if (ppppplVar13 < (long *****)0x80) {
          if (ppppplVar13 != (long *****)0x0) {
            lVar18 = 8;
            for (ppppplVar14 = (long *****)0x0; ppppplVar14 != ppppplVar13;
                ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
              if (-1 < *(char *)((long)param_1[0x16] + (long)ppppplVar14)) {
                FUN_1090e0834((long)param_1[0x17] + lVar18);
                ppppplVar13 = param_1[0x19];
              }
              lVar18 = lVar18 + 0x10;
            }
            param_1[0x18] = (long *****)0x0;
            param_3 = ppppplVar13 + 1;
            param_2 = (long ******)0x80;
            _memset(param_1[0x16]);
            *(undefined1 *)((long)param_1[0x16] + (long)ppppplVar13) = 0xff;
            ppppplVar13 = param_1[0x19];
            lVar18 = 6;
            if (ppppplVar13 != (long *****)0x7) {
              lVar18 = (long)ppppplVar13 - ((ulong)ppppplVar13 >> 3);
            }
            param_1[0x1b] = (long *****)(lVar18 - (long)param_1[0x18]);
          }
        }
        else {
          FUN_1090e03d8(param_1 + 0x16);
        }
      }
      ppppplVar13 = (long *****)0x0;
      pppplStack_a0 = (long ****)param_1[0x28];
      ppppplVar14 = param_1[0x29];
      pppppplVar1 = param_1 + 0x25;
      do {
        uVar10 = param_1[0x24] >= ppppplVar13 && (long *****)pppplStack_a0 == ppppplVar14;
        if (param_1[0x24] < ppppplVar13 || ppppplVar14 <= pppplStack_a0) break;
        param_2 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(param_1 + 0x10);
        func_0x0001090e10b4(param_1[0x10]);
        if ((bool)uVar10) break;
        pppppplVar11 = (long ******)param_2[1];
        if ((pppppplVar11 != (long ******)0x0) && (pppppplVar11[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar11 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar11;
        FUN_1090df900(param_1 + 0x16,&pppplStack_a0);
        param_2 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar19 = 1;
        }
        else {
          if (*(char *)(param_1 + 0xd) == '\x01') {
            pppppplVar11 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_2 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar19 = bStack_70;
          lVar18 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar13 = (long *****)(lStack_80 + (long)ppppplVar13);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(param_1 + 0xd) == '\x01') {
              pppppplVar11 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar11 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar12 = *pppppplVar11;
              if (ppppplVar12 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)param_1 + 0x15b) = 1;
              pppplVar15 = (long ****)ppppplStack_a8[7][3];
              uVar17 = 0;
              if (pppplVar15 != (long ****)0x0) {
                uVar17 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar15;
              }
              param_2 = (long ******)(uVar17 * (long)pppplVar15);
              param_3 = (long *****)((long)pppplStack_78 - (long)param_2);
              if ((long *****)((long)param_2 + (long)ppppplVar12) <= pppplStack_78) {
                param_3 = ppppplVar12;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar11 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)param_1 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar13 < *(long ******)((long)param_1 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)param_1 + 0x15b) = 0;
            }
            pppplVar15 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar18 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar15[6] = ppplVar6;
            pppplVar15[7] = ppplVar7;
          }
          bVar19 = bVar19 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar19 == 0);
      pppppplVar11 = param_1 + 0x1c;
      FUN_1090df780();
      ppppplVar13 = param_1[0x1c];
      ppppplVar14 = param_1[0x1f];
      ppppplStack_98 = (long *****)pppppplVar11;
      ppppplStack_90 = (long *****)param_2;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar13 + (long)ppppplVar14), !(bool)uVar10) {
        FUN_1090e01e4(param_1 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(param_1[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar15 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar15[2];
          ppplVar7 = pppplVar15[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(param_1[0xe]);
      FUN_1090e0454(&ppppplStack_98,param_1 + 0x1c);
      FUN_1090e0490(param_1 + 0x1c,param_1 + 0x16);
      FUN_1090e0490(param_1 + 0x16,&ppppplStack_98);
      pppppplVar11 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar13 = *pppppplVar11;
  pppplVar15 = *param_3;
  if ((pppplVar15 != (long ****)0x0) && (pppplVar15[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar15[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar13);
  if (pppplVar15 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090dfd90; end: 1090dfebb;  */

void FUN_1090dfd90(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x0001090dfdec();
  uVar4 = *param_1;
  lVar5 = *param_3;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001090e1064(uVar4);
  if (lVar5 != 0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090dfebc; end: 1090dff9b;  */

void FUN_1090dfebc(long *param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_70;
  byte bStack_60;
  ulong uStack_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = *(ulong *)(param_2 + 0x140);
  uVar1 = *(ulong *)(param_2 + 0x148);
  if (uVar4 < uVar1) {
    lVar8 = 0;
    lVar6 = 0;
    uVar7 = 0;
    while( true ) {
      uVar2 = uVar4 == uVar1;
      puVar3 = &uStack_58;
      uStack_58 = uVar4;
      FUN_1090dff9c(param_2 + 0x80);
      func_0x0001090e10b4(*(undefined8 *)(param_2 + 0x80));
      uVar4 = uStack_58;
      if (((bool)uVar2) || (uVar5 = puVar3[1], *(char *)(uVar5 + 0xf8) != '\x01')) break;
      func_0x0001090e1040();
      lVar6 = lStack_70 + lVar6;
      FUN_1090e1af0();
      lVar8 = uVar5 + lVar8;
      uVar4 = uStack_58;
      if (((bStack_60 & 1) == 0) || (uVar4 = uStack_58 + 1, uVar7 = uStack_58, uVar1 <= uVar4))
      break;
    }
    param_1[1] = uVar7;
    param_1[2] = lVar8;
    *param_1 = lVar6;
  }
  *(bool *)(param_1 + 3) = uVar4 == uVar1;
  return;
}



/* Entry: 1090dff9c; end: 1090dffef;  */

long FUN_1090dff9c(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x0001090e10a0();
  plVar1 = unaff_x20;
  FUN_1090e0e2c();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1090dfff0; end: 1090dfff7;  */

void FUN_1090dfff0(long ******param_1,long ******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  undefined8 extraout_x8;
  long ******pppppplVar11;
  long ******extraout_x8_00;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  int extraout_w11;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = param_1;
  ppppplVar16 = param_3;
  func_0x0001090dfdec();
  ppppplVar13 = *pppppplVar11;
  ppppplVar13[0x1c] = (long ****)param_3;
  ppppplVar13[0x1d] = (long ****)param_3;
  pppppplVar11 = param_1;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar11 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar11 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      if (*(char *)((long)param_1 + 0x15a) == '\x01') {
        uVar17 = 0;
        uVar18 = 0;
        *(undefined1 *)((long)param_1 + 0x15a) = 0;
        for (ppppplVar16 = param_1[0x28]; ppppplVar16 < param_1[0x29];
            ppppplVar16 = (long *****)((long)ppppplVar16 + 1)) {
          pppppplVar11 = param_1;
          func_0x0001090dfdec(param_1,ppppplVar16);
          uVar18 = (long)(*pppppplVar11)[0x22] + uVar18;
          if ((*pppppplVar11)[0x22] != (long ****)0x0) {
            uVar17 = uVar17 + 1;
          }
        }
        if (uVar17 == 0) {
          ppppplVar16 = (long *****)0x0;
        }
        else {
          ppppplVar16 = (long *****)0x0;
          if (uVar17 != 0) {
            ppppplVar16 = (long *****)(uVar18 / uVar17);
          }
        }
        param_1[0x2a] = ppppplVar16;
        pppplVar15 = param_1[0xf][7];
        if (pppplVar15 != (long ****)0x0) {
          pppplVar3 = pppplVar15 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar16 = param_1[0x2a];
        }
        param_2 = (long ******)param_1[3];
        func_0x0001090e4548(pppplVar15);
        FUN_109097138(pppplVar15);
        FUN_1090df5e4(param_1);
      }
      if (param_1[0x18] != (long *****)0x0) {
        ppppplVar13 = param_1[0x19];
        if (ppppplVar13 < (long *****)0x80) {
          if (ppppplVar13 != (long *****)0x0) {
            lVar19 = 8;
            for (ppppplVar16 = (long *****)0x0; ppppplVar16 != ppppplVar13;
                ppppplVar16 = (long *****)((long)ppppplVar16 + 1)) {
              if (-1 < *(char *)((long)param_1[0x16] + (long)ppppplVar16)) {
                FUN_1090e0834((long)param_1[0x17] + lVar19);
                ppppplVar13 = param_1[0x19];
              }
              lVar19 = lVar19 + 0x10;
            }
            param_1[0x18] = (long *****)0x0;
            ppppplVar16 = ppppplVar13 + 1;
            param_2 = (long ******)0x80;
            _memset(param_1[0x16]);
            *(undefined1 *)((long)param_1[0x16] + (long)ppppplVar13) = 0xff;
            ppppplVar13 = param_1[0x19];
            lVar19 = 6;
            if (ppppplVar13 != (long *****)0x7) {
              lVar19 = (long)ppppplVar13 - ((ulong)ppppplVar13 >> 3);
            }
            param_1[0x1b] = (long *****)(lVar19 - (long)param_1[0x18]);
          }
        }
        else {
          FUN_1090e03d8(param_1 + 0x16);
        }
      }
      ppppplVar13 = (long *****)0x0;
      pppplStack_a0 = (long ****)param_1[0x28];
      ppppplVar14 = param_1[0x29];
      pppppplVar1 = param_1 + 0x25;
      do {
        uVar10 = param_1[0x24] >= ppppplVar13 && (long *****)pppplStack_a0 == ppppplVar14;
        if (param_1[0x24] < ppppplVar13 || ppppplVar14 <= pppplStack_a0) break;
        param_2 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(param_1 + 0x10);
        func_0x0001090e10b4(param_1[0x10]);
        if ((bool)uVar10) break;
        pppppplVar11 = (long ******)param_2[1];
        if ((pppppplVar11 != (long ******)0x0) && (pppppplVar11[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar11 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar11;
        FUN_1090df900(param_1 + 0x16,&pppplStack_a0);
        param_2 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar20 = 1;
        }
        else {
          if (*(char *)(param_1 + 0xd) == '\x01') {
            pppppplVar11 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_2 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar20 = bStack_70;
          lVar19 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar13 = (long *****)(lStack_80 + (long)ppppplVar13);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(param_1 + 0xd) == '\x01') {
              pppppplVar11 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar11 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar12 = *pppppplVar11;
              if (ppppplVar12 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)param_1 + 0x15b) = 1;
              pppplVar15 = (long ****)ppppplStack_a8[7][3];
              uVar18 = 0;
              if (pppplVar15 != (long ****)0x0) {
                uVar18 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar15;
              }
              param_2 = (long ******)(uVar18 * (long)pppplVar15);
              ppppplVar16 = (long *****)((long)pppplStack_78 - (long)param_2);
              if ((long *****)((long)param_2 + (long)ppppplVar12) <= pppplStack_78) {
                ppppplVar16 = ppppplVar12;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar11 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)param_1 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar13 < *(long ******)((long)param_1 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)param_1 + 0x15b) = 0;
            }
            pppplVar15 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar19 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar15[6] = ppplVar6;
            pppplVar15[7] = ppplVar7;
          }
          bVar20 = bVar20 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar20 == 0);
      pppppplVar11 = param_1 + 0x1c;
      FUN_1090df780();
      ppppplVar13 = param_1[0x1c];
      ppppplVar14 = param_1[0x1f];
      ppppplStack_98 = (long *****)pppppplVar11;
      ppppplStack_90 = (long *****)param_2;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar13 + (long)ppppplVar14), !(bool)uVar10) {
        FUN_1090e01e4(param_1 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(param_1[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar15 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar15[2];
          ppplVar7 = pppplVar15[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(param_1[0xe]);
      FUN_1090e0454(&ppppplStack_98,param_1 + 0x1c);
      FUN_1090e0490(param_1 + 0x1c,param_1 + 0x16);
      FUN_1090e0490(param_1 + 0x16,&ppppplStack_98);
      pppppplVar11 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar13 = *pppppplVar11;
  pppplVar15 = *ppppplVar16;
  if ((pppplVar15 != (long ****)0x0) && (pppplVar15[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar15[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar13);
  if (pppplVar15 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090dfff8; end: 1090e002b;  */

void FUN_1090dfff8(long ******param_1,long ******param_2,long *****param_3,long ****param_4)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  undefined8 extraout_x8;
  long ******pppppplVar11;
  long ******extraout_x8_00;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  int extraout_w11;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = param_1;
  ppppplVar16 = param_3;
  func_0x0001090dfdec();
  ppppplVar13 = *pppppplVar11;
  ppppplVar13[0x1c] = (long ****)param_3;
  ppppplVar13[0x1d] = param_4;
  pppppplVar11 = param_1;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar11 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar11 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      if (*(char *)((long)param_1 + 0x15a) == '\x01') {
        uVar17 = 0;
        uVar18 = 0;
        *(undefined1 *)((long)param_1 + 0x15a) = 0;
        for (ppppplVar16 = param_1[0x28]; ppppplVar16 < param_1[0x29];
            ppppplVar16 = (long *****)((long)ppppplVar16 + 1)) {
          pppppplVar11 = param_1;
          func_0x0001090dfdec(param_1,ppppplVar16);
          uVar18 = (long)(*pppppplVar11)[0x22] + uVar18;
          if ((*pppppplVar11)[0x22] != (long ****)0x0) {
            uVar17 = uVar17 + 1;
          }
        }
        if (uVar17 == 0) {
          ppppplVar16 = (long *****)0x0;
        }
        else {
          ppppplVar16 = (long *****)0x0;
          if (uVar17 != 0) {
            ppppplVar16 = (long *****)(uVar18 / uVar17);
          }
        }
        param_1[0x2a] = ppppplVar16;
        pppplVar15 = param_1[0xf][7];
        if (pppplVar15 != (long ****)0x0) {
          pppplVar3 = pppplVar15 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar16 = param_1[0x2a];
        }
        param_2 = (long ******)param_1[3];
        func_0x0001090e4548(pppplVar15);
        FUN_109097138(pppplVar15);
        FUN_1090df5e4(param_1);
      }
      if (param_1[0x18] != (long *****)0x0) {
        ppppplVar13 = param_1[0x19];
        if (ppppplVar13 < (long *****)0x80) {
          if (ppppplVar13 != (long *****)0x0) {
            lVar19 = 8;
            for (ppppplVar16 = (long *****)0x0; ppppplVar16 != ppppplVar13;
                ppppplVar16 = (long *****)((long)ppppplVar16 + 1)) {
              if (-1 < *(char *)((long)param_1[0x16] + (long)ppppplVar16)) {
                FUN_1090e0834((long)param_1[0x17] + lVar19);
                ppppplVar13 = param_1[0x19];
              }
              lVar19 = lVar19 + 0x10;
            }
            param_1[0x18] = (long *****)0x0;
            ppppplVar16 = ppppplVar13 + 1;
            param_2 = (long ******)0x80;
            _memset(param_1[0x16]);
            *(undefined1 *)((long)param_1[0x16] + (long)ppppplVar13) = 0xff;
            ppppplVar13 = param_1[0x19];
            lVar19 = 6;
            if (ppppplVar13 != (long *****)0x7) {
              lVar19 = (long)ppppplVar13 - ((ulong)ppppplVar13 >> 3);
            }
            param_1[0x1b] = (long *****)(lVar19 - (long)param_1[0x18]);
          }
        }
        else {
          FUN_1090e03d8(param_1 + 0x16);
        }
      }
      ppppplVar13 = (long *****)0x0;
      pppplStack_a0 = (long ****)param_1[0x28];
      ppppplVar14 = param_1[0x29];
      pppppplVar1 = param_1 + 0x25;
      do {
        uVar10 = param_1[0x24] >= ppppplVar13 && (long *****)pppplStack_a0 == ppppplVar14;
        if (param_1[0x24] < ppppplVar13 || ppppplVar14 <= pppplStack_a0) break;
        param_2 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(param_1 + 0x10);
        func_0x0001090e10b4(param_1[0x10]);
        if ((bool)uVar10) break;
        pppppplVar11 = (long ******)param_2[1];
        if ((pppppplVar11 != (long ******)0x0) && (pppppplVar11[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar11 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar11;
        FUN_1090df900(param_1 + 0x16,&pppplStack_a0);
        param_2 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar20 = 1;
        }
        else {
          if (*(char *)(param_1 + 0xd) == '\x01') {
            pppppplVar11 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_2 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar20 = bStack_70;
          lVar19 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar13 = (long *****)(lStack_80 + (long)ppppplVar13);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(param_1 + 0xd) == '\x01') {
              pppppplVar11 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar11 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar12 = *pppppplVar11;
              if (ppppplVar12 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)param_1 + 0x15b) = 1;
              pppplVar15 = (long ****)ppppplStack_a8[7][3];
              uVar18 = 0;
              if (pppplVar15 != (long ****)0x0) {
                uVar18 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar15;
              }
              param_2 = (long ******)(uVar18 * (long)pppplVar15);
              ppppplVar16 = (long *****)((long)pppplStack_78 - (long)param_2);
              if ((long *****)((long)param_2 + (long)ppppplVar12) <= pppplStack_78) {
                ppppplVar16 = ppppplVar12;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar11 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)param_1 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar13 < *(long ******)((long)param_1 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)param_1 + 0x15b) = 0;
            }
            pppplVar15 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar19 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar15[6] = ppplVar6;
            pppplVar15[7] = ppplVar7;
          }
          bVar20 = bVar20 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar20 == 0);
      pppppplVar11 = param_1 + 0x1c;
      FUN_1090df780();
      ppppplVar13 = param_1[0x1c];
      ppppplVar14 = param_1[0x1f];
      ppppplStack_98 = (long *****)pppppplVar11;
      ppppplStack_90 = (long *****)param_2;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar13 + (long)ppppplVar14), !(bool)uVar10) {
        FUN_1090e01e4(param_1 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(param_1[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar15 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar15[2];
          ppplVar7 = pppplVar15[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(param_1[0xe]);
      FUN_1090e0454(&ppppplStack_98,param_1 + 0x1c);
      FUN_1090e0490(param_1 + 0x1c,param_1 + 0x16);
      FUN_1090e0490(param_1 + 0x16,&ppppplStack_98);
      pppppplVar11 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar13 = *pppppplVar11;
  pppplVar15 = *ppppplVar16;
  if ((pppplVar15 != (long ****)0x0) && (pppplVar15[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar15[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar13);
  if (pppplVar15 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090e002c; end: 1090e00a3;  */

void FUN_1090e002c(long ******param_1,undefined8 param_2,long ******param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  undefined8 extraout_x8;
  long ******pppppplVar12;
  long ******extraout_x8_00;
  long *****ppppplVar13;
  long *****ppppplVar14;
  int extraout_w11;
  long ****pppplVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long *****ppppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar12 = param_1;
  pppppplVar11 = param_3;
  func_0x0001090dfdec();
  FUN_1090e11d8(*pppppplVar12);
  pppppplVar12 = param_1;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar12 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar12 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      if (*(char *)((long)param_1 + 0x15a) == '\x01') {
        uVar16 = 0;
        uVar17 = 0;
        *(undefined1 *)((long)param_1 + 0x15a) = 0;
        for (ppppplVar13 = param_1[0x28]; ppppplVar13 < param_1[0x29];
            ppppplVar13 = (long *****)((long)ppppplVar13 + 1)) {
          pppppplVar11 = param_1;
          func_0x0001090dfdec(param_1,ppppplVar13);
          uVar17 = (long)(*pppppplVar11)[0x22] + uVar17;
          if ((*pppppplVar11)[0x22] != (long ****)0x0) {
            uVar16 = uVar16 + 1;
          }
        }
        if (uVar16 == 0) {
          pppppplVar11 = (long ******)0x0;
        }
        else {
          pppppplVar11 = (long ******)0x0;
          if (uVar16 != 0) {
            pppppplVar11 = (long ******)(uVar17 / uVar16);
          }
        }
        param_1[0x2a] = (long *****)pppppplVar11;
        pppplVar15 = param_1[0xf][7];
        if (pppplVar15 != (long ****)0x0) {
          pppplVar3 = pppplVar15 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          pppppplVar11 = (long ******)param_1[0x2a];
        }
        param_3 = (long ******)param_1[3];
        func_0x0001090e4548(pppplVar15);
        FUN_109097138(pppplVar15);
        FUN_1090df5e4(param_1);
      }
      if (param_1[0x18] != (long *****)0x0) {
        ppppplVar13 = param_1[0x19];
        if (ppppplVar13 < (long *****)0x80) {
          if (ppppplVar13 != (long *****)0x0) {
            lVar18 = 8;
            for (ppppplVar14 = (long *****)0x0; ppppplVar14 != ppppplVar13;
                ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
              if (-1 < *(char *)((long)param_1[0x16] + (long)ppppplVar14)) {
                FUN_1090e0834((long)param_1[0x17] + lVar18);
                ppppplVar13 = param_1[0x19];
              }
              lVar18 = lVar18 + 0x10;
            }
            param_1[0x18] = (long *****)0x0;
            pppppplVar11 = (long ******)(ppppplVar13 + 1);
            param_3 = (long ******)0x80;
            _memset(param_1[0x16]);
            *(undefined1 *)((long)param_1[0x16] + (long)ppppplVar13) = 0xff;
            ppppplVar13 = param_1[0x19];
            lVar18 = 6;
            if (ppppplVar13 != (long *****)0x7) {
              lVar18 = (long)ppppplVar13 - ((ulong)ppppplVar13 >> 3);
            }
            param_1[0x1b] = (long *****)(lVar18 - (long)param_1[0x18]);
          }
        }
        else {
          FUN_1090e03d8(param_1 + 0x16);
        }
      }
      ppppplVar13 = (long *****)0x0;
      pppplStack_a0 = (long ****)param_1[0x28];
      ppppplVar14 = param_1[0x29];
      pppppplVar1 = param_1 + 0x25;
      do {
        uVar10 = param_1[0x24] >= ppppplVar13 && (long *****)pppplStack_a0 == ppppplVar14;
        if (param_1[0x24] < ppppplVar13 || ppppplVar14 <= pppplStack_a0) break;
        param_3 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(param_1 + 0x10);
        func_0x0001090e10b4(param_1[0x10]);
        if ((bool)uVar10) break;
        pppppplVar12 = (long ******)param_3[1];
        if ((pppppplVar12 != (long ******)0x0) && (pppppplVar12[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar12 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar12;
        FUN_1090df900(param_1 + 0x16,&pppplStack_a0);
        param_3 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar19 = 1;
        }
        else {
          if (*(char *)(param_1 + 0xd) == '\x01') {
            pppppplVar12 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_3 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar19 = bStack_70;
          lVar18 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar13 = (long *****)(lStack_80 + (long)ppppplVar13);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(param_1 + 0xd) == '\x01') {
              pppppplVar12 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar12 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              pppppplVar12 = (long ******)*pppppplVar12;
              if (pppppplVar12 == (long ******)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)param_1 + 0x15b) = 1;
              pppplVar15 = (long ****)ppppplStack_a8[7][3];
              uVar17 = 0;
              if (pppplVar15 != (long ****)0x0) {
                uVar17 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar15;
              }
              param_3 = (long ******)(uVar17 * (long)pppplVar15);
              pppppplVar11 = (long ******)((long)ppppplStack_78 - (long)param_3);
              if ((long ******)((long)param_3 + (long)pppppplVar12) <= ppppplStack_78) {
                pppppplVar11 = pppppplVar12;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar12 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)param_1 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar13 < *(long ******)((long)param_1 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)param_1 + 0x15b) = 0;
            }
            pppplVar15 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar18 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar15[6] = ppplVar6;
            pppplVar15[7] = ppplVar7;
          }
          bVar19 = bVar19 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar19 == 0);
      pppppplVar12 = param_1 + 0x1c;
      FUN_1090df780();
      ppppplVar13 = param_1[0x1c];
      ppppplVar14 = param_1[0x1f];
      ppppplStack_98 = (long *****)pppppplVar12;
      ppppplStack_90 = (long *****)param_3;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar13 + (long)ppppplVar14), !(bool)uVar10) {
        FUN_1090e01e4(param_1 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(param_1[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar15 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar15[2];
          ppplVar7 = pppplVar15[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(param_1[0xe]);
      FUN_1090e0454(&ppppplStack_98,param_1 + 0x1c);
      FUN_1090e0490(param_1 + 0x1c,param_1 + 0x16);
      FUN_1090e0490(param_1 + 0x16,&ppppplStack_98);
      pppppplVar12 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar13 = *pppppplVar12;
  ppppplVar14 = *pppppplVar11;
  if ((ppppplVar14 != (long *****)0x0) && (ppppplVar14[2] != (long ****)0x0)) {
    pppplVar15 = ppppplVar14[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar15,0x10);
      if (bVar5) {
        *pppplVar15 = (long ***)((long)*pppplVar15 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar13);
  if (ppppplVar14 != (long *****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090e00a4; end: 1090e00fb;  */

void FUN_1090e00a4(long ******param_1,long ******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  undefined8 extraout_x8;
  long ******extraout_x8_00;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long ****pppplVar16;
  int extraout_w11;
  long *****ppppplVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte bVar21;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  if (((long ******)param_1[0x28] == param_2) && (param_1[0x29] == param_3)) {
    return;
  }
  pppppplVar12 = param_2;
  ppppplVar17 = param_3;
  func_0x0001090dfdec(param_1);
  param_1[0x28] = (long *****)param_2;
  param_1[0x29] = param_3;
  pppppplVar11 = param_1;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar11 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar11 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      if (*(char *)((long)param_1 + 0x15a) == '\x01') {
        uVar18 = 0;
        uVar19 = 0;
        *(undefined1 *)((long)param_1 + 0x15a) = 0;
        for (ppppplVar17 = param_1[0x28]; ppppplVar17 < param_1[0x29];
            ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
          pppppplVar12 = param_1;
          func_0x0001090dfdec(param_1,ppppplVar17);
          uVar19 = (long)(*pppppplVar12)[0x22] + uVar19;
          if ((*pppppplVar12)[0x22] != (long ****)0x0) {
            uVar18 = uVar18 + 1;
          }
        }
        if (uVar18 == 0) {
          ppppplVar17 = (long *****)0x0;
        }
        else {
          ppppplVar17 = (long *****)0x0;
          if (uVar18 != 0) {
            ppppplVar17 = (long *****)(uVar19 / uVar18);
          }
        }
        param_1[0x2a] = ppppplVar17;
        pppplVar16 = param_1[0xf][7];
        if (pppplVar16 != (long ****)0x0) {
          pppplVar3 = pppplVar16 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppplVar17 = param_1[0x2a];
        }
        pppppplVar12 = (long ******)param_1[3];
        func_0x0001090e4548(pppplVar16);
        FUN_109097138(pppplVar16);
        FUN_1090df5e4(param_1);
      }
      if (param_1[0x18] != (long *****)0x0) {
        ppppplVar14 = param_1[0x19];
        if (ppppplVar14 < (long *****)0x80) {
          if (ppppplVar14 != (long *****)0x0) {
            lVar20 = 8;
            for (ppppplVar17 = (long *****)0x0; ppppplVar17 != ppppplVar14;
                ppppplVar17 = (long *****)((long)ppppplVar17 + 1)) {
              if (-1 < *(char *)((long)param_1[0x16] + (long)ppppplVar17)) {
                FUN_1090e0834((long)param_1[0x17] + lVar20);
                ppppplVar14 = param_1[0x19];
              }
              lVar20 = lVar20 + 0x10;
            }
            param_1[0x18] = (long *****)0x0;
            ppppplVar17 = ppppplVar14 + 1;
            pppppplVar12 = (long ******)0x80;
            _memset(param_1[0x16]);
            *(undefined1 *)((long)param_1[0x16] + (long)ppppplVar14) = 0xff;
            ppppplVar14 = param_1[0x19];
            lVar20 = 6;
            if (ppppplVar14 != (long *****)0x7) {
              lVar20 = (long)ppppplVar14 - ((ulong)ppppplVar14 >> 3);
            }
            param_1[0x1b] = (long *****)(lVar20 - (long)param_1[0x18]);
          }
        }
        else {
          FUN_1090e03d8(param_1 + 0x16);
        }
      }
      ppppplVar14 = (long *****)0x0;
      pppplStack_a0 = (long ****)param_1[0x28];
      ppppplVar15 = param_1[0x29];
      pppppplVar1 = param_1 + 0x25;
      do {
        uVar10 = param_1[0x24] >= ppppplVar14 && (long *****)pppplStack_a0 == ppppplVar15;
        if (param_1[0x24] < ppppplVar14 || ppppplVar15 <= pppplStack_a0) break;
        pppppplVar12 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(param_1 + 0x10);
        func_0x0001090e10b4(param_1[0x10]);
        if ((bool)uVar10) break;
        pppppplVar12 = (long ******)pppppplVar12[1];
        if ((pppppplVar12 != (long ******)0x0) && (pppppplVar12[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar12 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar12;
        FUN_1090df900(param_1 + 0x16,&pppplStack_a0);
        pppppplVar12 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar21 = 1;
        }
        else {
          if (*(char *)(param_1 + 0xd) == '\x01') {
            pppppplVar11 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            pppppplVar12 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar21 = bStack_70;
          lVar20 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar14 = (long *****)(lStack_80 + (long)ppppplVar14);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(param_1 + 0xd) == '\x01') {
              pppppplVar11 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar11 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar13 = *pppppplVar11;
              if (ppppplVar13 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)param_1 + 0x15b) = 1;
              pppplVar16 = (long ****)ppppplStack_a8[7][3];
              uVar19 = 0;
              if (pppplVar16 != (long ****)0x0) {
                uVar19 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar16;
              }
              pppppplVar12 = (long ******)(uVar19 * (long)pppplVar16);
              ppppplVar17 = (long *****)((long)pppplStack_78 - (long)pppppplVar12);
              if ((long *****)((long)pppppplVar12 + (long)ppppplVar13) <= pppplStack_78) {
                ppppplVar17 = ppppplVar13;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar11 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)param_1 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar14 < *(long ******)((long)param_1 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)param_1 + 0x15b) = 0;
            }
            pppplVar16 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar20 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar16[6] = ppplVar6;
            pppplVar16[7] = ppplVar7;
          }
          bVar21 = bVar21 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar21 == 0);
      pppppplVar11 = param_1 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = param_1[0x1c];
      ppppplVar15 = param_1[0x1f];
      ppppplStack_98 = (long *****)pppppplVar11;
      ppppplStack_90 = (long *****)pppppplVar12;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar14 + (long)ppppplVar15), !(bool)uVar10) {
        FUN_1090e01e4(param_1 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(param_1[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar16 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar16[2];
          ppplVar7 = pppplVar16[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(param_1[0xe]);
      FUN_1090e0454(&ppppplStack_98,param_1 + 0x1c);
      FUN_1090e0490(param_1 + 0x1c,param_1 + 0x16);
      FUN_1090e0490(param_1 + 0x16,&ppppplStack_98);
      pppppplVar11 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar11;
  pppplVar16 = *ppppplVar17;
  if ((pppplVar16 != (long ****)0x0) && (pppplVar16[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar16[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar14);
  if (pppplVar16 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090e00fc; end: 1090e0143;  */

void FUN_1090e00fc(long ******param_1,long ******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long **pplVar9;
  long *****ppppplVar10;
  undefined1 uVar11;
  undefined8 extraout_x8;
  long ******pppppplVar12;
  long ******extraout_x8_00;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long ****pppplVar16;
  int extraout_w11;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  iVar4 = *(int *)(param_1 + 0x27);
  *(int *)(param_1 + 0x27) = iVar4 + -1;
  if ((iVar4 + -1 != 0) || (*(char *)((long)param_1 + 0x159) != '\x01')) {
    return;
  }
  *(undefined1 *)((long)param_1 + 0x159) = 0;
  pppppplVar12 = param_1;
  func_0x0001090e0fd4();
  uVar11 = *(int *)(pppppplVar12 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar12 + 0x27) < 1) {
    uVar11 = 0;
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      if (*(char *)((long)param_1 + 0x15a) == '\x01') {
        uVar17 = 0;
        uVar18 = 0;
        *(undefined1 *)((long)param_1 + 0x15a) = 0;
        for (ppppplVar14 = param_1[0x28]; ppppplVar14 < param_1[0x29];
            ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
          pppppplVar12 = param_1;
          func_0x0001090dfdec(param_1,ppppplVar14);
          uVar18 = (long)(*pppppplVar12)[0x22] + uVar18;
          if ((*pppppplVar12)[0x22] != (long ****)0x0) {
            uVar17 = uVar17 + 1;
          }
        }
        if (uVar17 == 0) {
          param_3 = (long *****)0x0;
        }
        else {
          param_3 = (long *****)0x0;
          if (uVar17 != 0) {
            param_3 = (long *****)(uVar18 / uVar17);
          }
        }
        param_1[0x2a] = param_3;
        pppplVar16 = param_1[0xf][7];
        if (pppplVar16 != (long ****)0x0) {
          pppplVar3 = pppplVar16 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar6) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          param_3 = param_1[0x2a];
        }
        param_2 = (long ******)param_1[3];
        func_0x0001090e4548(pppplVar16);
        FUN_109097138(pppplVar16);
        FUN_1090df5e4(param_1);
      }
      if (param_1[0x18] != (long *****)0x0) {
        ppppplVar14 = param_1[0x19];
        if (ppppplVar14 < (long *****)0x80) {
          if (ppppplVar14 != (long *****)0x0) {
            lVar19 = 8;
            for (ppppplVar15 = (long *****)0x0; ppppplVar15 != ppppplVar14;
                ppppplVar15 = (long *****)((long)ppppplVar15 + 1)) {
              if (-1 < *(char *)((long)param_1[0x16] + (long)ppppplVar15)) {
                FUN_1090e0834((long)param_1[0x17] + lVar19);
                ppppplVar14 = param_1[0x19];
              }
              lVar19 = lVar19 + 0x10;
            }
            param_1[0x18] = (long *****)0x0;
            param_3 = ppppplVar14 + 1;
            param_2 = (long ******)0x80;
            _memset(param_1[0x16]);
            *(undefined1 *)((long)param_1[0x16] + (long)ppppplVar14) = 0xff;
            ppppplVar14 = param_1[0x19];
            lVar19 = 6;
            if (ppppplVar14 != (long *****)0x7) {
              lVar19 = (long)ppppplVar14 - ((ulong)ppppplVar14 >> 3);
            }
            param_1[0x1b] = (long *****)(lVar19 - (long)param_1[0x18]);
          }
        }
        else {
          FUN_1090e03d8(param_1 + 0x16);
        }
      }
      ppppplVar14 = (long *****)0x0;
      pppplStack_a0 = (long ****)param_1[0x28];
      ppppplVar15 = param_1[0x29];
      pppppplVar1 = param_1 + 0x25;
      do {
        uVar11 = param_1[0x24] >= ppppplVar14 && (long *****)pppplStack_a0 == ppppplVar15;
        if (param_1[0x24] < ppppplVar14 || ppppplVar15 <= pppplStack_a0) break;
        param_2 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(param_1 + 0x10);
        func_0x0001090e10b4(param_1[0x10]);
        if ((bool)uVar11) break;
        pppppplVar12 = (long ******)param_2[1];
        if ((pppppplVar12 != (long ******)0x0) && (pppppplVar12[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar12 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar12;
        FUN_1090df900(param_1 + 0x16,&pppplStack_a0);
        param_2 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar20 = 1;
        }
        else {
          if (*(char *)(param_1 + 0xd) == '\x01') {
            pppppplVar12 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_2 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar20 = bStack_70;
          lVar19 = lStack_80;
          ppppplVar10 = ppppplStack_98;
          ppppplVar14 = (long *****)(lStack_80 + (long)ppppplVar14);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(param_1 + 0xd) == '\x01') {
              pppppplVar12 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar12 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar13 = *pppppplVar12;
              if (ppppplVar13 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)param_1 + 0x15b) = 1;
              pppplVar16 = (long ****)ppppplStack_a8[7][3];
              uVar18 = 0;
              if (pppplVar16 != (long ****)0x0) {
                uVar18 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar16;
              }
              param_2 = (long ******)(uVar18 * (long)pppplVar16);
              param_3 = (long *****)((long)pppplStack_78 - (long)param_2);
              if ((long *****)((long)param_2 + (long)ppppplVar13) <= pppplStack_78) {
                param_3 = ppppplVar13;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar12 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)param_1 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar14 < *(long ******)((long)param_1 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)param_1 + 0x15b) = 0;
            }
            pppplVar16 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)((ulong)ppppplVar10 / (ulong)pppplVar3);
            }
            ppplVar8 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar8 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar19 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar16[6] = ppplVar7;
            pppplVar16[7] = ppplVar8;
          }
          bVar20 = bVar20 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar20 == 0);
      pppppplVar12 = param_1 + 0x1c;
      FUN_1090df780();
      ppppplVar14 = param_1[0x1c];
      ppppplVar15 = param_1[0x1f];
      ppppplStack_98 = (long *****)pppppplVar12;
      ppppplStack_90 = (long *****)param_2;
      while (ppppplVar10 = ppppplStack_90,
            uVar11 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar14 + (long)ppppplVar15), !(bool)uVar11) {
        FUN_1090e01e4(param_1 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(param_1[0x16]);
        if ((bool)uVar11) {
          FUN_1090e1298(ppppplVar10[1]);
          pppplVar16 = (long ****)ppppplVar10[1][7];
          ppplVar7 = pppplVar16[2];
          ppplVar8 = pppplVar16[3];
          pplVar9 = (long **)0x0;
          if (ppplVar8 != (long ***)0x0) {
            pplVar9 = (long **)(((long)ppplVar8 - 1U) / (ulong)ppplVar8);
          }
          ppplVar7[6] = (long **)0x0;
          ppplVar7[7] = pplVar9;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(param_1[0xe]);
      FUN_1090e0454(&ppppplStack_98,param_1 + 0x1c);
      FUN_1090e0490(param_1 + 0x1c,param_1 + 0x16);
      FUN_1090e0490(param_1 + 0x16,&ppppplStack_98);
      pppppplVar12 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar11) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar14 = *pppppplVar12;
  pppplVar16 = *param_3;
  if ((pppplVar16 != (long ****)0x0) && (pppplVar16[2] != (long ***)0x0)) {
    ppplVar7 = pppplVar16[2] + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppplVar7,0x10);
      if (bVar6) {
        *ppplVar7 = (long **)((long)*ppplVar7 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  func_0x0001090e1064(ppppplVar14);
  if (pppplVar16 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090e0144; end: 1090e018f;  */

long * FUN_1090e0144(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x0001090e0fc4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    FUN_10909cc28();
  }
  return param_1;
}



/* Entry: 1090e0190; end: 1090e01e3;  */

undefined1  [16] FUN_1090e0190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1090df7ac(&uStack_40);
  FUN_1090e0ecc(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 1090e01e4; end: 1090e020b;  */

long FUN_1090e01e4(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  func_0x0001090e10a0();
  plVar1 = unaff_x20;
  FUN_1090e0e2c();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1090e020c; end: 1090e0283;  */

void FUN_1090e020c(long param_1,long param_2)

{
  long *plStack_38;
  
  FUN_1090e0284(&plStack_38,*(undefined8 *)(param_2 + 0xd0));
  if (plStack_38 != (long *)0x0) {
    func_0x0001090e104c(*(undefined8 *)(*plStack_38 + 0x28),plStack_38);
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    func_0x0001090e104c(*(undefined8 *)(**(long **)(param_1 + 0x110) + 0x28));
  }
  if (plStack_38 != (long *)0x0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1090e0284; end: 1090e02df;  */

void FUN_1090e0284(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    ___dynamic_cast(param_2,&PTR_DAT_1107e3600,&PTR_DAT_110ad78d0,0);
    if ((param_2 == 0) || (uVar1 = param_2, func_0x00010b9a5818(), (uVar1 & 1) != 0))
    goto LAB_1090e02d4;
    func_0x00010b9a5890();
  }
  param_2 = 0;
LAB_1090e02d4:
  *param_1 = param_2;
  return;
}



/* Entry: 1090e02e0; end: 1090e03d3;  */

void FUN_1090e02e0(long param_1,long param_2)

{
  long *plVar1;
  char cStack_50;
  long *plStack_48;
  
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  FUN_1090e0284(&plStack_48,*(undefined8 *)(param_2 + 0xd0));
  if (plStack_48 != (long *)0x0) {
    func_0x0001090e1004(*(undefined8 *)(*plStack_48 + 0x20),plStack_48);
  }
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    func_0x0001090e1004(*(undefined8 *)(**(long **)(param_1 + 0x110) + 0x20));
  }
  func_0x0001090e1040();
  if (cStack_50 == '\x01') {
    if (plStack_48 != (long *)0x0) {
      (**(code **)(*plStack_48 + 0x30))(plStack_48,param_1,*(undefined8 *)(param_2 + 0x20));
    }
    plVar1 = *(long **)(param_1 + 0x110);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1,*(undefined8 *)(param_2 + 0x20));
    }
  }
  FUN_1090df974(param_1);
  FUN_1090e00fc(param_1);
  if (plStack_48 != (long *)0x0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1090e03d4; end: 1090e03d7;  */

void FUN_1090e03d4(long ******param_1,long ******param_2,long *****param_3)

{
  long ******pppppplVar1;
  long lVar2;
  long ****pppplVar3;
  char cVar4;
  bool bVar5;
  long ***ppplVar6;
  long ***ppplVar7;
  long **pplVar8;
  long *****ppppplVar9;
  undefined1 uVar10;
  undefined8 extraout_x8;
  long ******pppppplVar11;
  long ******extraout_x8_00;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  int extraout_w11;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  long *****ppppplStack_a8;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  long lStack_88;
  long lStack_80;
  long ****pppplStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  
  pppppplVar11 = param_1;
  func_0x0001090e0fd4();
  uVar10 = *(int *)(pppppplVar11 + 0x27) == 1;
  uStack_68 = extraout_x8;
  if (*(int *)(pppppplVar11 + 0x27) < 1) {
    uVar10 = 0;
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      if (*(char *)((long)param_1 + 0x15a) == '\x01') {
        uVar16 = 0;
        uVar17 = 0;
        *(undefined1 *)((long)param_1 + 0x15a) = 0;
        for (ppppplVar13 = param_1[0x28]; ppppplVar13 < param_1[0x29];
            ppppplVar13 = (long *****)((long)ppppplVar13 + 1)) {
          pppppplVar11 = param_1;
          func_0x0001090dfdec(param_1,ppppplVar13);
          uVar17 = (long)(*pppppplVar11)[0x22] + uVar17;
          if ((*pppppplVar11)[0x22] != (long ****)0x0) {
            uVar16 = uVar16 + 1;
          }
        }
        if (uVar16 == 0) {
          param_3 = (long *****)0x0;
        }
        else {
          param_3 = (long *****)0x0;
          if (uVar16 != 0) {
            param_3 = (long *****)(uVar17 / uVar16);
          }
        }
        param_1[0x2a] = param_3;
        pppplVar15 = param_1[0xf][7];
        if (pppplVar15 != (long ****)0x0) {
          pppplVar3 = pppplVar15 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(pppplVar3,0x10);
            if (bVar5) {
              *pppplVar3 = (long ***)((long)*pppplVar3 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          param_3 = param_1[0x2a];
        }
        param_2 = (long ******)param_1[3];
        func_0x0001090e4548(pppplVar15);
        FUN_109097138(pppplVar15);
        FUN_1090df5e4(param_1);
      }
      if (param_1[0x18] != (long *****)0x0) {
        ppppplVar13 = param_1[0x19];
        if (ppppplVar13 < (long *****)0x80) {
          if (ppppplVar13 != (long *****)0x0) {
            lVar18 = 8;
            for (ppppplVar14 = (long *****)0x0; ppppplVar14 != ppppplVar13;
                ppppplVar14 = (long *****)((long)ppppplVar14 + 1)) {
              if (-1 < *(char *)((long)param_1[0x16] + (long)ppppplVar14)) {
                FUN_1090e0834((long)param_1[0x17] + lVar18);
                ppppplVar13 = param_1[0x19];
              }
              lVar18 = lVar18 + 0x10;
            }
            param_1[0x18] = (long *****)0x0;
            param_3 = ppppplVar13 + 1;
            param_2 = (long ******)0x80;
            _memset(param_1[0x16]);
            *(undefined1 *)((long)param_1[0x16] + (long)ppppplVar13) = 0xff;
            ppppplVar13 = param_1[0x19];
            lVar18 = 6;
            if (ppppplVar13 != (long *****)0x7) {
              lVar18 = (long)ppppplVar13 - ((ulong)ppppplVar13 >> 3);
            }
            param_1[0x1b] = (long *****)(lVar18 - (long)param_1[0x18]);
          }
        }
        else {
          FUN_1090e03d8(param_1 + 0x16);
        }
      }
      ppppplVar13 = (long *****)0x0;
      pppplStack_a0 = (long ****)param_1[0x28];
      ppppplVar14 = param_1[0x29];
      pppppplVar1 = param_1 + 0x25;
      do {
        uVar10 = param_1[0x24] >= ppppplVar13 && (long *****)pppplStack_a0 == ppppplVar14;
        if (param_1[0x24] < ppppplVar13 || ppppplVar14 <= pppplStack_a0) break;
        param_2 = (long ******)&pppplStack_a0;
        FUN_1090e01e4(param_1 + 0x10);
        func_0x0001090e10b4(param_1[0x10]);
        if ((bool)uVar10) break;
        pppppplVar11 = (long ******)param_2[1];
        if ((pppppplVar11 != (long ******)0x0) && (pppppplVar11[2] != (long *****)0x0)) {
          do {
            func_0x0001090e0fc4();
            pppppplVar11 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        ppppplStack_a8 = (long *****)pppppplVar11;
        FUN_1090df900(param_1 + 0x16,&pppplStack_a0);
        param_2 = &ppppplStack_a8;
        FUN_1090df928();
        pppplStack_a0 = (long ****)((long)pppplStack_a0 + 1);
        if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) {
          func_0x0001090e178c();
          bVar19 = 1;
        }
        else {
          if (*(char *)(param_1 + 0xd) == '\x01') {
            pppppplVar11 = (long ******)ppppplStack_a8;
            if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
            param_2 = (long ******)ppppplStack_a8[0x1e];
            func_0x0001090dce54(ppppplStack_a8[7]);
          }
          FUN_1090e1494(&ppppplStack_98,ppppplStack_a8);
          bVar19 = bStack_70;
          lVar18 = lStack_80;
          ppppplVar9 = ppppplStack_98;
          ppppplVar13 = (long *****)(lStack_80 + (long)ppppplVar13);
          if ((bStack_70 & 1) == 0) {
            if (*(char *)(param_1 + 0xd) == '\x01') {
              pppppplVar11 = (long ******)ppppplStack_a8;
              if (((ulong)ppppplStack_a8[0x1f] & 1) == 0) goto LAB_1090dfd8c;
              pppppplVar11 = (long ******)(ppppplStack_a8 + 0x1e);
LAB_1090dfc2c:
              ppppplVar12 = *pppppplVar11;
              if (ppppplVar12 == (long *****)0x0) goto LAB_1090dfc74;
              *(undefined1 *)((long)param_1 + 0x15b) = 1;
              pppplVar15 = (long ****)ppppplStack_a8[7][3];
              uVar17 = 0;
              if (pppplVar15 != (long ****)0x0) {
                uVar17 = (ulong)(lStack_88 + (long)ppppplStack_98) / (ulong)pppplVar15;
              }
              param_2 = (long ******)(uVar17 * (long)pppplVar15);
              param_3 = (long *****)((long)pppplStack_78 - (long)param_2);
              if ((long *****)((long)param_2 + (long)ppppplVar12) <= pppplStack_78) {
                param_3 = ppppplVar12;
              }
              func_0x0001090e19d8();
            }
            else {
              pppppplVar11 = pppppplVar1;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 1) goto LAB_1090dfc2c;
              if (*(int *)(ppppplStack_a8 + 0x1b) == 0) {
                lVar2 = 0x120;
                if (*(char *)((long)param_1 + 0x15b) == '\0') {
                  lVar2 = 0x118;
                }
                if (ppppplVar13 < *(long ******)((long)param_1 + lVar2)) goto LAB_1090dfc2c;
              }
LAB_1090dfc74:
              *(undefined1 *)((long)param_1 + 0x15b) = 0;
            }
            pppplVar15 = (long ****)ppppplStack_a8[7][2];
            pppplVar3 = (long ****)ppppplStack_a8[7][3];
            ppplVar6 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar6 = (long ***)((ulong)ppppplVar9 / (ulong)pppplVar3);
            }
            ppplVar7 = (long ***)0x0;
            if (pppplVar3 != (long ****)0x0) {
              ppplVar7 = (long ***)
                         ((ulong)((long)ppppplStack_90 +
                                 (long)*pppppplVar1 + (long)pppplVar3 + lVar18 + -1) /
                         (ulong)pppplVar3);
            }
            pppplVar15[6] = ppplVar6;
            pppplVar15[7] = ppplVar7;
          }
          bVar19 = bVar19 ^ 1;
        }
        FUN_1090e0858(ppppplStack_a8);
      } while (bVar19 == 0);
      pppppplVar11 = param_1 + 0x1c;
      FUN_1090df780();
      ppppplVar13 = param_1[0x1c];
      ppppplVar14 = param_1[0x1f];
      ppppplStack_98 = (long *****)pppppplVar11;
      ppppplStack_90 = (long *****)param_2;
      while (ppppplVar9 = ppppplStack_90,
            uVar10 = (long ******)ppppplStack_98 ==
                     (long ******)((long)ppppplVar13 + (long)ppppplVar14), !(bool)uVar10) {
        FUN_1090e01e4(param_1 + 0x16,ppppplStack_90);
        func_0x0001090e10b4(param_1[0x16]);
        if ((bool)uVar10) {
          FUN_1090e1298(ppppplVar9[1]);
          pppplVar15 = (long ****)ppppplVar9[1][7];
          ppplVar6 = pppplVar15[2];
          ppplVar7 = pppplVar15[3];
          pplVar8 = (long **)0x0;
          if (ppplVar7 != (long ***)0x0) {
            pplVar8 = (long **)(((long)ppplVar7 - 1U) / (ulong)ppplVar7);
          }
          ppplVar6[6] = (long **)0x0;
          ppplVar6[7] = pplVar8;
        }
        FUN_1090df7ac(&ppppplStack_98);
      }
      FUN_1090dddec(param_1[0xe]);
      FUN_1090e0454(&ppppplStack_98,param_1 + 0x1c);
      FUN_1090e0490(param_1 + 0x1c,param_1 + 0x16);
      FUN_1090e0490(param_1 + 0x16,&ppppplStack_98);
      pppppplVar11 = &ppppplStack_98;
      FUN_1090e03d8();
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x159) = 1;
  }
  func_0x0001090e0fb0(uStack_68);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1090dfd8c:
  func_0x0001080da3e4();
  func_0x0001090dfdec();
  ppppplVar13 = *pppppplVar11;
  pppplVar15 = *param_3;
  if ((pppplVar15 != (long ****)0x0) && (pppplVar15[2] != (long ***)0x0)) {
    ppplVar6 = pppplVar15[2] + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppplVar6,0x10);
      if (bVar5) {
        *ppplVar6 = (long **)((long)*ppplVar6 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001090e1064(ppppplVar13);
  if (pppplVar15 != (long ****)0x0) {
    func_0x0001090e1058();
  }
  return;
}



/* Entry: 1090e03d8; end: 1090e0453;  */

void FUN_1090e03d8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        FUN_1090e0834(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1090e0454; end: 1090e048f;  */

void FUN_1090e0454(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &UNK_10dd5b8b0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  uVar1 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  return;
}



/* Entry: 1090e0490; end: 1090e05cb;  */

long * FUN_1090e0490(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_88;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  undefined8 uStack_28;
  
  plVar1 = &lStack_60;
  func_0x0001090e0fd4();
  uStack_28 = extraout_x8;
  FUN_1090e0454(&lStack_60);
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar8 = param_1[3];
  lVar7 = param_1[2];
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[3] = lStack_48;
  param_1[2] = lStack_50;
  lVar3 = param_1[5];
  param_1[5] = lStack_38;
  lStack_60 = lVar5;
  lStack_58 = lVar6;
  lStack_50 = lVar7;
  lStack_48 = lVar8;
  lStack_38 = lVar3;
  FUN_1090e03d8();
  func_0x0001090e0fb0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar4 = (long *)*plVar1;
  plVar2 = plVar1;
  while ((char)*plVar4 < -1) {
    lStack_88 = *plVar4;
    plVar2 = &lStack_88;
    func_0x000107c27e58();
    plVar4 = (long *)(*plVar1 + ((ulong)plVar2 & 0xffffffff));
    *plVar1 = (long)plVar4;
    plVar1[1] = plVar1[1] + ((ulong)plVar2 & 0xffffffff) * 0x10;
  }
  return plVar2;
}



/* Entry: 1090e05cc; end: 1090e0607;  */

void FUN_1090e05cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_11;
  
  FUN_1090e0608(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



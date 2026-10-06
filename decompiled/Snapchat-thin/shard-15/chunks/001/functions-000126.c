/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8bd298; end: 10b8bd2b3;  */

void FUN_10b8bd298(long *param_1,long param_2,long param_3)

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
    func_0x00010b8bd938(lVar2);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8bd2b4; end: 10b8bd2db;  */

long FUN_10b8bd2b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8bd2dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8bd2dc; end: 10b8bd307;  */

undefined8 * FUN_10b8bd2dc(undefined8 *param_1,ulong param_2)

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
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d717e0;
  param_1[1] = 0;
  FUN_10b8bd35c(param_1 + 3);
  return param_1;
}



/* Entry: 10b8bd308; end: 10b8bd33b;  */

undefined8 * FUN_10b8bd308(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d717e0;
  param_1[1] = 0;
  FUN_10b8bd35c(param_1 + 3);
  return param_1;
}



/* Entry: 10b8bd33c; end: 10b8bd33f;  */

void FUN_10b8bd33c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d717e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8bd340; end: 10b8bd353;  */

void FUN_10b8bd340(void)

{
  FUN_10b8bd4fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8bd354; end: 10b8bd35b;  */

void FUN_10b8bd354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8bd908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8bd35c; end: 10b8bd3ff;  */

undefined8 * FUN_10b8bd35c(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010b8bd3c4(&uStack_40);
  *param_1 = &PTR_FUN_110d71620;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110d71670;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  param_1[6] = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010b8b98c4(&uStack_40);
  return param_1;
}



/* Entry: 10b8bd400; end: 10b8bd44f;  */

void FUN_10b8bd400(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_4 != 0) {
    FUN_10b8bd450(param_1,param_4);
    puVar2 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 5) {
      *puVar2 = *param_2;
      FUN_10b9a8f04(puVar2 + 1,param_2 + 1);
      uVar1 = param_2[3];
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
      puVar2[3] = uVar1;
      puVar2 = puVar2 + 5;
    }
    *(undefined8 **)(param_1 + 8) = puVar2;
    return;
  }
  return;
}



/* Entry: 10b8bd450; end: 10b8bd497;  */

void FUN_10b8bd450(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    plVar1 = param_1 + 2;
    func_0x00010b8bc614();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    return;
  }
  FUN_10b8bc5bc();
  puVar3 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 5) {
    *puVar3 = *param_2;
    FUN_10b9a8f04(puVar3 + 1,param_2 + 1);
    uVar2 = param_2[3];
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 4);
    puVar3[3] = uVar2;
    puVar3 = puVar3 + 5;
  }
  param_1[1] = (long)puVar3;
  return;
}



/* Entry: 10b8bd498; end: 10b8bd4fb;  */

void FUN_10b8bd498(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 5) {
    *puVar2 = *param_2;
    FUN_10b9a8f04(puVar2 + 1,param_2 + 1);
    uVar1 = param_2[3];
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
    puVar2[3] = uVar1;
    puVar2 = puVar2 + 5;
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  return;
}



/* Entry: 10b8bd4fc; end: 10b8bd50b;  */

void FUN_10b8bd4fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d717e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8bd50c; end: 10b8bd56b;  */

void FUN_10b8bd50c(long param_1,long param_2,undefined8 param_3)

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
    func_0x00010b8bd938(param_2);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8bd56c; end: 10b8bd57b;  */

void FUN_10b8bd56c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8bd57c; end: 10b8bd5a3;  */

void FUN_10b8bd57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b8bd5a4(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b8bd5a4; end: 10b8bd62b;  */

void FUN_10b8bd5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_50;
  func_0x00010b8bd7a0();
  FUN_10b8bd648(auStack_50,1);
  FUN_10b8bd6a0(lStack_40,param_3,param_4,param_5);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_10b8bd62c(param_1,lVar6 + 0x18);
  func_0x00010b8bd75c();
  func_0x00010b8bd76c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_10b8bd62c;
    lStack_68 = extraout_x8[1];
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
    func_0x00010b8bd938(puVar2);
    func_0x000107c284e8(&puStack_70);
    return;
  }
  return;
}



/* Entry: 10b8bd62c; end: 10b8bd647;  */

void FUN_10b8bd62c(long *param_1,long param_2,long param_3)

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
    func_0x00010b8bd938(lVar2);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b8bd648; end: 10b8bd66f;  */

long FUN_10b8bd648(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8bd670();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8bd670; end: 10b8bd69f;  */

undefined8 * FUN_10b8bd670(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x24924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71830;
  FUN_10b8bb59c(param_1 + 3);
  return param_1;
}



/* Entry: 10b8bd6a0; end: 10b8bd6cf;  */

undefined8 * FUN_10b8bd6a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d71830;
  FUN_10b8bb59c(param_1 + 3);
  return param_1;
}



/* Entry: 10b8bd6d0; end: 10b8bd6d3;  */

void FUN_10b8bd6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d71830;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8bd6d4; end: 10b8bd6e7;  */

void FUN_10b8bd6d4(void)

{
  func_0x00010b8bd6f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8bd6e8; end: 10b8bd6fb;  */

void FUN_10b8bd6e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8bd908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8bd6fc; end: 10b8bd75b;  */

void FUN_10b8bd6fc(long param_1,long param_2,undefined8 param_3)

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
    func_0x00010b8bd938(param_2);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8bd75c; end: 10b8bd97b;  */

void FUN_10b8bd75c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8bd97c; end: 10b8bda2f;  */

undefined8 * FUN_10b8bd97c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110d71880;
  plVar2 = param_1 + 0xd;
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    *plVar2 = 0;
    lStack_28 = lVar1;
    func_0x00010b8bda04(&lStack_28);
    FUN_10b8be660(&lStack_28);
  }
  FUN_10b8be660(plVar2);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8be4ec(param_1 + 6);
  FUN_10b8bb3cc(param_1 + 4);
  func_0x000107c278f4(param_1 + 2);
  func_0x000107c278f4(param_1 + 1);
  return param_1;
}



/* Entry: 10b8bda30; end: 10b8bda33;  */

undefined8 * FUN_10b8bda30(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_28;
  
  *param_1 = &PTR_FUN_110d71880;
  plVar2 = param_1 + 0xd;
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    *plVar2 = 0;
    lStack_28 = lVar1;
    func_0x00010b8bda04(&lStack_28);
    FUN_10b8be660(&lStack_28);
  }
  FUN_10b8be660(plVar2);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8be4ec(param_1 + 6);
  FUN_10b8bb3cc(param_1 + 4);
  func_0x000107c278f4(param_1 + 2);
  func_0x000107c278f4(param_1 + 1);
  return param_1;
}



/* Entry: 10b8bda34; end: 10b8bda47;  */

void FUN_10b8bda34(void)

{
  FUN_10b8bd97c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8bda48; end: 10b8bdbc7;  */

bool FUN_10b8bda48(long param_1,long *param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar3 = *(long *)(param_1 + 0x60);
  lVar4 = *param_2;
  if (lVar3 != lVar4) {
    func_0x000107c31068();
    FUN_10b8bdbc8(param_1 + 0x30);
    lVar1 = *param_2;
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)*(uint *)(lVar1 + 0xc);
    }
    uVar6 = 0;
    uVar8 = 0;
    pcVar7 = "";
    lStack_80 = param_1;
    if (lVar1 != 0) {
      pcVar7 = (char *)(lVar1 + 0x18);
    }
    for (; uVar6 != uVar5; uVar6 = uVar6 + 1) {
      if (*pcVar7 == ' ') {
        if (uVar6 != uVar8) {
          func_0x000107c31084();
          func_0x00010b8bf428();
          uVar2 = 0;
          if (lStack_68 != 0) {
            do {
              func_0x00010b8bf5b0();
              uVar2 = extraout_x8;
            } while (extraout_w11 != 0);
          }
          uStack_70 = uVar2;
          FUN_10b8be6f8(&lStack_80,&uStack_70);
          func_0x000107c278f8(uStack_70);
          func_0x000107c278f8(lStack_68);
        }
        uVar8 = uVar6 + 1;
      }
      pcVar7 = pcVar7 + 1;
    }
    if (uVar5 != uVar8) {
      if (uVar8 == 0) {
        lStack_68 = 0;
        if (*param_2 != 0) {
          do {
            func_0x00010b8bf5b0();
            lStack_68 = extraout_x8_01;
          } while (extraout_w11_01 != 0);
        }
        FUN_10b8be6f8(&lStack_80,&lStack_68);
      }
      else {
        func_0x000107c31084();
        func_0x00010b8bf428();
        uStack_78 = 0;
        if (lStack_68 != 0) {
          do {
            func_0x00010b8bf5b0();
            uStack_78 = extraout_x8_00;
          } while (extraout_w11_00 != 0);
        }
        FUN_10b8be6f8(&lStack_80,&uStack_78);
        func_0x000107c278f8(uStack_78);
      }
      func_0x000107c278f8(lStack_68);
    }
  }
  return lVar3 != lVar4;
}



/* Entry: 10b8bdbc8; end: 10b8bdc5b;  */

void FUN_10b8bdbc8(long *param_1)

{
  undefined1 uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long extraout_x10;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1[2] != 0) {
    uVar3 = param_1[3];
    if (0x7f < uVar3) {
      lVar2 = param_1[3];
      if (lVar2 != 0) {
        lVar4 = 0;
        for (lVar5 = 0; lVar5 != lVar2; lVar5 = lVar5 + 1) {
          if (-1 < *(char *)(*param_1 + lVar5)) {
            func_0x000107c278f4(param_1[1] + lVar4);
            lVar2 = param_1[3];
          }
          lVar4 = lVar4 + 8;
        }
        __ZdlPv();
        func_0x00010b8bf5f4();
      }
      return;
    }
    if (uVar3 != 0) {
      lVar2 = 0;
      for (uVar6 = 0; uVar1 = uVar6 == uVar3, !(bool)uVar1; uVar6 = uVar6 + 1) {
        if (-1 < *(char *)(*param_1 + uVar6)) {
          func_0x000107c278f4(param_1[1] + lVar2);
          uVar3 = param_1[3];
        }
        lVar2 = lVar2 + 8;
      }
      func_0x00010b8bf510();
      func_0x00010b8bf538();
      lVar2 = extraout_x8;
      if (!(bool)uVar1) {
        lVar2 = extraout_x10;
      }
      param_1[5] = lVar2 - extraout_x9;
    }
  }
  return;
}



/* Entry: 10b8bdc5c; end: 10b8bdd97;  */

bool FUN_10b8bdc5c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *param_2;
  if (lVar1 != lVar2) {
    func_0x000107c31068();
  }
  return lVar1 != lVar2;
}



/* Entry: 10b8bdd98; end: 10b8bddcf;  */

bool FUN_10b8bdd98(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) < *(int *)(param_1 + 0x18)) {
    return false;
  }
  if (*(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18)) {
    return true;
  }
  return *(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x1c);
}



/* Entry: 10b8bddd0; end: 10b8be11b;  */

/* WARNING: Possible PIC construction at 0x00010b8be094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8be100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8be104) */
/* WARNING: Removing unreachable block (ram,0x00010b8be110) */

void FUN_10b8bddd0(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long lVar14;
  long unaff_x25;
  undefined8 *puVar15;
  undefined8 *unaff_x26;
  long lVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  func_0x00010b8bf5d0();
  lVar12 = param_3[1];
  for (lVar16 = *param_3; uVar4 = lVar16 == lVar12, !(bool)uVar4; lVar16 = lVar16 + 0x28) {
    func_0x00010b8bdd2c(lVar16);
  }
  plVar9 = (long *)unaff_x23[3];
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar7 = unaff_x22;
  plVar8 = unaff_x21;
  func_0x00010b8bf468();
  puVar3 = (undefined1 *)register0x00000008;
  do {
    uVar11 = param_5;
    plVar10 = param_4;
    plVar6 = plVar7;
    *(undefined8 **)(puVar3 + -0x50) = unaff_x26;
    *(long *)(puVar3 + -0x48) = unaff_x25;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(long **)(puVar3 + -0x38) = unaff_x23;
    *(long **)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = unaff_x21;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    param_4 = plVar10;
    param_5 = uVar11;
    if (plVar9[2] != 0) {
      plVar7 = plVar9;
      FUN_10b8be11c(plVar9,plVar6 + 2);
      uVar4 = (long *)(*plVar9 + plVar9[3]) == plVar7;
      if (!(bool)uVar4) {
        func_0x00010b8bf3fc();
      }
    }
    if (plVar9[8] != 0) {
      lVar16 = plVar6[6];
      *(long *)(puVar3 + -0x58) = plVar6[7];
      *(long *)(puVar3 + -0x60) = lVar16;
      FUN_10b8bf24c(puVar3 + -0x60);
      lVar16 = *(long *)(puVar3 + -0x60);
      *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
      lVar12 = plVar6[6];
      lVar13 = plVar6[9];
      while (uVar4 = lVar16 == lVar12 + lVar13, !(bool)uVar4) {
        lVar14 = *(long *)(puVar3 + -0x58);
        plVar7 = plVar9 + 6;
        FUN_10b8be11c(plVar7,lVar14);
        if ((long *)(plVar9[6] + plVar9[9]) != plVar7) {
          func_0x00010b8bf3fc();
        }
        *(long *)(puVar3 + -0x60) = lVar16 + 1;
        *(long *)(puVar3 + -0x58) = lVar14 + 8;
        FUN_10b8bf24c(puVar3 + -0x60);
        lVar16 = *(long *)(puVar3 + -0x60);
      }
    }
    if (plVar9[0xe] != 0) {
      if ((plVar6[1] != 0) && (*(int *)(plVar6[1] + 0xc) != 0)) {
        FUN_10b8be11c(plVar9 + 0xc);
        func_0x00010b8bf628();
        if (!(bool)uVar4) {
          func_0x00010b8bf3fc();
        }
      }
      if ((bRam00000001137fcd80 & 1) == 0) {
        iVar5 = 0x137fcd80;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          func_0x000107c31088(0x1137fcd78,"*");
          ___cxa_guard_release(0x1137fcd80);
        }
      }
      FUN_10b8be11c(plVar9 + 0xc,0x1137fcd78);
      func_0x00010b8bf628();
      if (!(bool)uVar4) {
        func_0x00010b8bf3fc();
      }
    }
    puVar15 = (undefined8 *)plVar9[0x12];
    unaff_x26 = (undefined8 *)plVar9[0x13];
    if (puVar15 != unaff_x26) {
      for (; puVar15 != unaff_x26; puVar15 = puVar15 + 8) {
        if (*(int *)(puVar15 + 7) == 0) {
          (**(code **)(*plVar10 + 0x30))(puVar3 + -0x60,plVar10,*puVar15);
          iVar5 = (int)(puVar3 + -0x60);
          FUN_10b9a9100(puVar3 + -0x60,puVar15 + 1);
          if (iVar5 != 0) {
            func_0x00010b8bf3fc();
          }
          FUN_10b9a8d98(puVar3 + -0x60);
        }
      }
    }
    if ((plVar9[0x15] != 0) && ((int)plVar6[0xe] == 0)) {
      func_0x00010b8bf3fc();
    }
    if ((plVar9[0x16] != 0) && ((int)plVar6[0xe] == *(int *)((long)plVar6 + 0x74) + -1)) {
      func_0x00010b8bf3fc();
    }
    unaff_x24 = plVar9[0x17];
    unaff_x25 = plVar9[0x18];
    uVar4 = unaff_x24 == unaff_x25;
    if (!(bool)uVar4) {
      for (; uVar4 = unaff_x24 == unaff_x25, !(bool)uVar4; unaff_x24 = unaff_x24 + 0x28) {
        iVar1 = *(int *)(unaff_x24 + 0x20);
        iVar5 = (int)plVar6[0xe] + 1;
        if (iVar1 == 0) {
          if (iVar5 == *(int *)(unaff_x24 + 0x24)) goto LAB_10b8be048;
        }
        else {
          iVar5 = iVar5 - *(int *)(unaff_x24 + 0x24);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar5 / iVar1;
          }
          if ((iVar5 == iVar2 * iVar1) && (-1 < iVar2)) {
LAB_10b8be048:
            func_0x00010b8bf468(plVar6,plVar8,unaff_x24);
            FUN_10b8bddd0();
          }
        }
      }
    }
    unaff_x19 = uVar11;
    unaff_x20 = plVar10;
    unaff_x21 = plVar9;
    unaff_x22 = plVar8;
    if (((plVar9[0x1b] == 0) || (plVar7 = (long *)plVar6[3], plVar7 == (long *)0x0)) ||
       (func_0x00010b8bf570(), plVar7 == (long *)0x0)) {
      if (plVar9[0x1a] == 0) {
        return;
      }
      unaff_x23 = (long *)plVar6[3];
      if (unaff_x23 == (long *)0x0) {
        unaff_x23 = (long *)0x0;
      }
      else {
        func_0x00010b8bf570();
      }
      if (unaff_x23 == (long *)0x0) {
        return;
      }
      plVar9 = (long *)plVar9[0x1a];
      plVar7 = unaff_x23;
      func_0x00010b8bf468();
      unaff_x30 = 0x10b8be104;
      puVar3 = puVar3 + -0x60;
    }
    else {
      plVar9 = (long *)plVar9[0x1b];
      func_0x00010b8bf468();
      unaff_x30 = 0x10b8be098;
      puVar3 = puVar3 + -0x60;
      unaff_x23 = plVar6;
    }
  } while( true );
}



/* Entry: 10b8be11c; end: 10b8be13f;  */

long FUN_10b8be11c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b8bf5e8();
  FUN_10b8bc99c();
  func_0x00010b8bf5c0();
  plVar1 = param_1;
  FUN_10b8bd16c();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8be140; end: 10b8be297;  */

void FUN_10b8be140(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x22;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_70;
  long *aplStack_68 [2];
  long *plStack_58;
  
  func_0x00010b8bf5d0();
  FUN_10b8be298(&plStack_58);
  FUN_10b8bddd0();
  puVar5 = (undefined8 *)(unaff_x22 + 0x68);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6;
    FUN_10b8be2ec();
    lVar3 = *plVar6;
    lVar4 = plVar6[3];
    aplStack_68[0] = plVar2;
    while (uVar1 = aplStack_68[0] == (long *)(lVar3 + lVar4), !(bool)uVar1) {
      FUN_10b8be318(plStack_58);
      func_0x00010b8bf648(plStack_58);
      if ((bool)uVar1) {
        FUN_10b8b4dbc();
      }
      func_0x00010b8be33c(aplStack_68);
    }
    uStack_70 = *puVar5;
    *puVar5 = 0;
    func_0x00010b8bda04(&uStack_70);
    FUN_10b8be660(&uStack_70);
  }
  plVar6 = plStack_58;
  plVar2 = plStack_58;
  FUN_10b8be2ec();
  lVar3 = *plVar6;
  lVar4 = plVar6[3];
  aplStack_68[0] = plVar2;
  while (plVar6 = plStack_58, aplStack_68[0] != (long *)(lVar3 + lVar4)) {
    (**(code **)(*unaff_x20 + 0x20))();
    func_0x00010b8be33c(aplStack_68);
  }
  plStack_58 = (long *)0x0;
  FUN_10b8be684(puVar5,plVar6);
  FUN_10b8be660(&plStack_58);
  return;
}



/* Entry: 10b8be298; end: 10b8be2eb;  */

/* WARNING: Removing unreachable block (ram,0x00010b8bf3e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8bf3ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8be6c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8be6d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8be6f4) */

void FUN_10b8be298(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar10;
  ulong unaff_x22;
  long lVar11;
  long lVar12;
  
  func_0x00010b8bf580();
  lVar5 = param_2[1];
  if (*param_2 != lVar5) {
    uVar8 = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    *param_1 = uVar8;
    func_0x00010b8bf5e8();
    lVar5 = param_2[1];
    while (lVar5 != unaff_x19) {
      lVar5 = lVar5 + -8;
      FUN_10b8be660();
    }
    unaff_x20[1] = unaff_x19;
    return;
  }
  func_0x00010b8be40c(param_1);
  plVar4 = (long *)*param_1;
  uVar1 = 0xb;
  if (10 < (ulong)plVar4[2]) {
    uVar1 = plVar4[2];
  }
  uVar9 = 0xffffffffffffffff >> (LZCOUNT(uVar1) & 0x3fU);
  if (uVar1 == 0) {
    uVar9 = 1;
  }
  if (uVar9 <= (ulong)plVar4[3]) {
    return;
  }
  func_0x00010b8bf63c();
  lVar2 = *plVar4;
  puVar10 = (undefined8 *)plVar4[1];
  lVar12 = plVar4[3];
  lVar5 = (uVar9 & 0xfffffffffffffff8) + 0x10;
  lVar6 = lVar5 + uVar9 * 0x10;
  __Znwm();
  *unaff_x20 = lVar6;
  unaff_x20[1] = lVar6 + lVar5;
  _memset();
  lVar5 = 0;
  *(undefined1 *)(lVar6 + unaff_x22) = 0xff;
  lVar6 = 6;
  if (unaff_x22 != 7) {
    lVar6 = unaff_x22 - (unaff_x22 >> 3);
  }
  unaff_x20[5] = lVar6 - unaff_x20[2];
  unaff_x20[3] = unaff_x22;
  for (; lVar12 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(lVar2 + lVar5)) {
      puVar7 = puVar10;
      FUN_10b8bf22c();
      lVar11 = *unaff_x20;
      lVar6 = lVar11;
      FUN_10b8befc4(lVar11,unaff_x20[3],puVar7);
      bVar3 = (byte)puVar7 & 0x7f;
      *(byte *)(lVar11 + lVar6) = bVar3;
      *(byte *)(*unaff_x20 + (unaff_x20[3] & 7U) + (unaff_x20[3] & lVar6 - 8U) + 1) = bVar3;
      uVar8 = *puVar10;
      puVar7 = (undefined8 *)(unaff_x20[1] + lVar6 * 0x10);
      puVar7[1] = puVar10[1];
      *puVar7 = uVar8;
    }
    puVar10 = puVar10 + 2;
  }
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10b8be2ec; end: 10b8be317;  */

undefined1  [16] FUN_10b8be2ec(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010b8bf294(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8be318; end: 10b8be36f;  */

long FUN_10b8be318(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b8bf5e8();
  FUN_10b8beec4();
  func_0x00010b8bf5c0();
  plVar1 = param_1;
  func_0x00010b8bf324();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8be370; end: 10b8be383;  */

undefined4 FUN_10b8be370(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 10b8be384; end: 10b8be443;  */

void FUN_10b8be384(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam00000001137fcd90 & 1) == 0) {
    iVar5 = 0x137fcd90;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(0x1137fcd88,&UNK_10f7cb423);
      ___cxa_guard_release(0x1137fcd90);
    }
  }
  lVar4 = lRam00000001137fcd88;
  if (lRam00000001137fcd88 != 0) {
    piVar1 = (int *)(lRam00000001137fcd88 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8be444; end: 10b8be44f;  */

void FUN_10b8be444(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8bf5e8(param_1,*(long *)(param_1 + 8) + -8);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10b8be660();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8be450; end: 10b8be4eb;  */

void FUN_10b8be450(undefined8 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  ulong uVar3;
  
  if (param_1[2] != 0) {
    uVar3 = param_1[3];
    uVar2 = uVar3 == 0x80;
    if (0x7f < uVar3) {
      if (param_1[3] != 0) {
        __ZdlPv(*param_1);
        func_0x00010b8bf5f4();
      }
      return;
    }
    if (uVar3 != 0) {
      func_0x00010b8bf510();
      func_0x00010b8bf538();
      lVar1 = extraout_x8;
      if (!(bool)uVar2) {
        lVar1 = extraout_x10;
      }
      param_1[5] = lVar1 - extraout_x9;
    }
  }
  return;
}



/* Entry: 10b8be4ec; end: 10b8be557;  */

void FUN_10b8be4ec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        func_0x000107c278f4(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 8;
    }
    __ZdlPv();
    func_0x00010b8bf5f4();
  }
  return;
}



/* Entry: 10b8be558; end: 10b8be58b;  */

void FUN_10b8be558(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8bf5e8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    FUN_10b8be660();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b8be58c; end: 10b8be65f;  */

long * FUN_10b8be58c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong extraout_x8;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 *unaff_x22;
  
  lVar2 = *param_1;
  lVar6 = param_1[1] - lVar2;
  if ((lVar6 >> 3) + 1U >> 0x3d == 0) {
    func_0x00010b8bf63c();
    uVar5 = param_1[2] - lVar2 >> 2;
    if (uVar5 <= extraout_x8) {
      uVar5 = extraout_x8;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar2)) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_10b8be65c;
      lVar3 = uVar5 << 3;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar3 + lVar6);
    uVar4 = *unaff_x22;
    *unaff_x22 = 0;
    *puVar1 = uVar4;
    _memcpy(puVar1 + -(lVar6 >> 3),lVar2,lVar6);
    *unaff_x20 = puVar1 + -(lVar6 >> 3);
    unaff_x20[1] = puVar1 + 1;
    unaff_x20[2] = lVar3 + uVar5 * 8;
    if (lVar2 != 0) {
      __ZdlPv(lVar2);
    }
    return puVar1 + 1;
  }
  func_0x00010bdb3eb8();
LAB_10b8be65c:
  func_0x000104bfe188();
  FUN_10b8be684();
  return param_1;
}



/* Entry: 10b8be660; end: 10b8be683;  */

undefined8 FUN_10b8be660(undefined8 param_1)

{
  FUN_10b8be684(param_1,0);
  return param_1;
}



/* Entry: 10b8be684; end: 10b8be69b;  */

void FUN_10b8be684(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b8be6c8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8be69c; end: 10b8be6f7;  */

void FUN_10b8be69c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b8be6c8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b8be6f8; end: 10b8be73f;  */

void FUN_10b8be6f8(long *param_1)

{
  undefined1 auStack_28 [24];
  
  func_0x00010b8be71c(auStack_28,*param_1 + 0x30);
  return;
}



/* Entry: 10b8be740; end: 10b8be747;  */

void FUN_10b8be740(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  plVar2 = plVar6;
  FUN_10b8be800();
  plVar3 = plVar6;
  puVar5 = param_3;
  func_0x00010b8be824();
  uVar4 = SUB81(puVar5,0);
  if (((ulong)puVar5 & 1) != 0) {
    lVar1 = *plVar6;
    *(undefined8 *)(plVar6[1] + (long)plVar3 * 8) = *param_3;
    *param_3 = 0;
    *(byte *)(lVar1 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x00010b8bf410();
  }
  lVar1 = plVar6[1];
  *param_1 = *plVar6 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 8;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 10b8be748; end: 10b8be7ff;  */

void FUN_10b8be748(long *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  plVar2 = plVar5;
  FUN_10b8be800();
  plVar3 = plVar5;
  func_0x00010b8be824();
  uVar4 = (undefined1)param_3;
  if ((param_3 & 1) != 0) {
    lVar1 = *plVar5;
    *(undefined8 *)(plVar5[1] + (long)plVar3 * 8) = *param_4;
    *param_4 = 0;
    *(byte *)(lVar1 + (long)plVar3) = (byte)plVar2 & 0x7f;
    func_0x00010b8bf410();
  }
  lVar1 = plVar5[1];
  *param_1 = *plVar5 + (long)plVar3;
  param_1[1] = lVar1 + (long)plVar3 * 8;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 10b8be800; end: 10b8be8db;  */

void FUN_10b8be800(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b8becc0(&lStack_18);
  return;
}



/* Entry: 10b8be8dc; end: 10b8be957;  */

void FUN_10b8be8dc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_10b8be958();
  lVar3 = param_1[5];
  lVar2 = *param_1;
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + (long)plVar1) == -2) {
      lVar3 = 0;
    }
    else {
      func_0x00010b8be9a4(param_1);
      plVar1 = param_1;
      FUN_10b8be958(param_1,param_2);
      lVar2 = *param_1;
      lVar3 = param_1[5];
    }
  }
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar3 - (ulong)(*(char *)(lVar2 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 10b8be958; end: 10b8be9d3;  */

ulong FUN_10b8be958(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_2 = param_2 >> 7;
  while( true ) {
    param_2 = param_2 & param_1[3];
    uVar1 = *(ulong *)(*param_1 + param_2) & ~*(ulong *)(*param_1 + param_2) << 7 &
            0x8080808080808080;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_2 = lVar2 + param_2;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[3];
}



/* Entry: 10b8be9d4; end: 10b8bea8b;  */

void FUN_10b8be9d4(long *param_1)

{
  long lVar1;
  long **pplVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  long *plStack_58;
  
  func_0x00010b8bf63c();
  lVar1 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[3];
  FUN_10b8bebe0();
  unaff_x20[3] = unaff_x22;
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      pplVar2 = &plStack_58;
      plStack_58 = unaff_x20 + 5;
      FUN_10b8bec8c(pplVar2,lVar4);
      plVar3 = unaff_x20;
      FUN_10b8be958();
      *(byte *)(*unaff_x20 + (long)plVar3) = (byte)pplVar2 & 0x7f;
      func_0x00010b8bf410();
      FUN_10b8becac(unaff_x20 + 5,unaff_x20[1] + (long)plVar3 * 8,lVar4);
    }
    lVar4 = lVar4 + 8;
  }
  if (lVar5 != 0) {
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10b8bea8c; end: 10b8bebdf;  */

void FUN_10b8bea8c(long *param_1,long **param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long **pplVar4;
  long *plVar5;
  long *plVar6;
  long extraout_x8;
  int extraout_w9;
  ulong uVar7;
  undefined1 extraout_w10;
  long extraout_x11;
  long extraout_x12;
  long *unaff_x19;
  ulong uVar8;
  long *plStack_58;
  long lStack_50;
  
  func_0x00010b8bf448();
  plVar1 = unaff_x19 + 5;
  for (uVar8 = 0; uVar8 != unaff_x19[3]; uVar8 = uVar8 + 1) {
    if (*(char *)(*unaff_x19 + uVar8) == -2) {
      pplVar4 = &plStack_58;
      plStack_58 = plVar1;
      FUN_10b8bec8c(pplVar4,unaff_x19[1] + uVar8 * 8);
      plVar5 = unaff_x19;
      param_2 = pplVar4;
      FUN_10b8be958();
      uVar7 = unaff_x19[3] & (ulong)pplVar4 >> 7;
      if ((((long)plVar5 - uVar7 ^ uVar8 - uVar7) & unaff_x19[3]) < 8) {
        *(byte *)(*unaff_x19 + uVar8) = (byte)pplVar4 & 0x7f;
        func_0x00010b8bf410();
        param_1 = plVar5;
      }
      else {
        *(byte *)(*unaff_x19 + (long)plVar5) = (byte)pplVar4 & 0x7f;
        plVar6 = plVar5;
        func_0x00010b8bf65c(*unaff_x19);
        *(undefined1 *)(extraout_x8 + extraout_x12 + extraout_x11 + 1) = extraout_w10;
        param_1 = (long *)(unaff_x19[1] + uVar8 * 8);
        if (extraout_w9 == 0x80) {
          param_2 = (long **)(unaff_x19[1] + (long)plVar5 * 8);
          func_0x00010b8bf620();
          func_0x00010b8bf47c();
          param_1 = plVar6;
        }
        else {
          lStack_50 = *param_1;
          *param_1 = 0;
          func_0x000107c278f4();
          func_0x00010b8bf620();
          param_2 = (long **)(unaff_x19[1] + (long)plVar5 * 8);
          func_0x00010b8bf620();
          uVar8 = uVar8 - 1;
        }
      }
    }
  }
  bVar3 = uVar8 == 7;
  lVar2 = 6;
  if (!bVar3) {
    lVar2 = uVar8 - (uVar8 >> 3);
  }
  func_0x00010b8bf4d8(lVar2);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8bf5e8();
  lVar2 = ((ulong)param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 5;
  FUN_10b8bec4c(param_1,lVar2 + (long)param_2 * 8);
  *plVar1 = (long)param_1;
  unaff_x19[6] = (long)param_1 + lVar2;
  _memset();
  *(undefined1 *)(*plVar1 + (long)unaff_x19) = 0xff;
  lVar2 = 6;
  if (unaff_x19 != (long *)0x7) {
    lVar2 = (long)unaff_x19 - ((ulong)unaff_x19 >> 3);
  }
  unaff_x19[10] = lVar2 - unaff_x19[7];
  return;
}



/* Entry: 10b8bebe0; end: 10b8bec4b;  */

void FUN_10b8bebe0(long param_1,ulong param_2)

{
  long lVar1;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x00010b8bf5e8();
  lVar1 = (param_2 & 0xfffffffffffffff8) + 0x10;
  param_1 = param_1 + 0x28;
  FUN_10b8bec4c(param_1,lVar1 + param_2 * 8);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_1 + lVar1;
  _memset();
  *(undefined1 *)(*unaff_x20 + unaff_x19) = 0xff;
  lVar1 = 6;
  if (unaff_x19 != 7) {
    lVar1 = unaff_x19 - (unaff_x19 >> 3);
  }
  unaff_x20[5] = lVar1 - unaff_x20[2];
  return;
}



/* Entry: 10b8bec4c; end: 10b8bec8b;  */

void FUN_10b8bec4c(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x00010b8bec70(&uStack_11,param_2 + 7U >> 3);
  return;
}



/* Entry: 10b8bec8c; end: 10b8bec93;  */

void FUN_10b8bec8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b8bf4a8(param_1,param_2,param_2);
  return;
}



/* Entry: 10b8bec94; end: 10b8becab;  */

void FUN_10b8bec94(void)

{
  func_0x00010b8bf4a8();
  return;
}



/* Entry: 10b8becac; end: 10b8becbf;  */

void FUN_10b8becac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  *param_3 = 0;
  func_0x00010007e5d0(param_3);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8becc0; end: 10b8becd7;  */

void FUN_10b8becc0(void)

{
  func_0x00010b8bf4a8();
  return;
}



/* Entry: 10b8becd8; end: 10b8bed1f;  */

long FUN_10b8becd8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8bed20();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8bed20; end: 10b8bed9f;  */

bool FUN_10b8bed20(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010b8bf670();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x10 + uVar2);
    for (uVar3 = (uVar4 ^ extraout_x11) + extraout_x12 & (uVar4 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar5 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar2 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar5;
      if (*(long *)(*(long *)(param_1 + 8) + uVar5 * 8) == *param_2) goto LAB_10b8bed98;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b8bed98:
  return uVar3 != 0;
}



/* Entry: 10b8beda0; end: 10b8beec3;  */

void FUN_10b8beda0(ulong param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *extraout_x8;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x20;
  long *unaff_x22;
  
  func_0x00010b8bf63c();
  FUN_10b8beec4();
  lVar6 = 0;
  uVar7 = param_1 >> 7;
  lVar4 = *unaff_x20;
  while( true ) {
    uVar7 = uVar7 & unaff_x20[3];
    uVar10 = *(ulong *)(lVar4 + uVar7);
    uVar8 = uVar10 ^ (param_1 & 0x7f) * 0x101010101010101;
    for (uVar8 = uVar8 + 0xfefefefefefefeff & (uVar8 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar9 = unaff_x20[1];
      plVar3 = (long *)(uVar7 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & unaff_x20[3])
      ;
      if (*(long *)(lVar9 + (long)plVar3 * 0x10) == *unaff_x22) {
        uVar5 = 0;
        goto LAB_10b8bee5c;
      }
    }
    if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
  plVar3 = unaff_x20;
  FUN_10b8bef00();
  lVar6 = *unaff_x20;
  plVar1 = (long *)(unaff_x20[1] + (long)plVar3 * 0x10);
  lVar4 = *param_3;
  *plVar1 = *unaff_x22;
  plVar1[1] = lVar4;
  *(byte *)(lVar6 + (long)plVar3) = (byte)param_1 & 0x7f;
  func_0x00010b8bf410();
  lVar4 = *unaff_x20;
  lVar9 = unaff_x20[1];
  uVar5 = 1;
LAB_10b8bee5c:
  *extraout_x8 = lVar4 + (long)plVar3;
  extraout_x8[1] = lVar9 + (long)plVar3 * 0x10;
  *(undefined1 *)(extraout_x8 + 2) = uVar5;
  return;
}



/* Entry: 10b8beec4; end: 10b8beeff;  */

void FUN_10b8beec4(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8beee8(&lStack_18);
  return;
}



/* Entry: 10b8bef00; end: 10b8befc3;  */

void FUN_10b8bef00(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  plVar1 = param_1;
  func_0x00010b8bf5a0();
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b8bef3c;
  if (*(char *)(lVar3 + (long)plVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b8bef3c;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b8bef98:
    FUN_10b8bf004(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b8bef98;
    }
    FUN_10b8bf114(param_1);
  }
  lVar3 = *param_1;
  plVar1 = (long *)lVar3;
  FUN_10b8befc4(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b8bef3c:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + (long)plVar1) == -0x80);
  return;
}



/* Entry: 10b8befc4; end: 10b8bf003;  */

ulong FUN_10b8befc4(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b8bf004; end: 10b8bf113;  */

void FUN_10b8bf004(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  undefined8 *puVar5;
  ulong unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  func_0x00010b8bf63c();
  lVar1 = *param_1;
  puVar5 = (undefined8 *)param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + unaff_x22) = 0xff;
  lVar3 = 6;
  if (unaff_x22 != 7) {
    lVar3 = unaff_x22 - (unaff_x22 >> 3);
  }
  unaff_x20[5] = lVar3 - unaff_x20[2];
  unaff_x20[3] = unaff_x22;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      puVar4 = puVar5;
      FUN_10b8bf22c();
      lVar6 = *unaff_x20;
      lVar3 = lVar6;
      FUN_10b8befc4(lVar6,unaff_x20[3],puVar4);
      bVar2 = (byte)puVar4 & 0x7f;
      *(byte *)(lVar6 + lVar3) = bVar2;
      *(byte *)(*unaff_x20 + (unaff_x20[3] & 7U) + (unaff_x20[3] & lVar3 - 8U) + 1) = bVar2;
      uVar9 = *puVar5;
      puVar4 = (undefined8 *)(unaff_x20[1] + lVar3 * 0x10);
      puVar4[1] = puVar5[1];
      *puVar4 = uVar9;
    }
    puVar5 = puVar5 + 2;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8bf114; end: 10b8bf22b;  */

void FUN_10b8bf114(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 extraout_w8;
  ulong uVar4;
  int extraout_w9;
  long extraout_x10;
  long extraout_x11;
  long extraout_x12;
  long *unaff_x19;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b8bf448();
  for (uVar7 = 0; uVar7 != unaff_x19[3]; uVar7 = uVar7 + 1) {
    if (*(char *)(*unaff_x19 + uVar7) == -2) {
      puVar3 = (undefined8 *)(unaff_x19[1] + uVar7 * 0x10);
      FUN_10b8bf22c();
      lVar5 = *unaff_x19;
      uVar6 = unaff_x19[3];
      param_1 = puVar3;
      func_0x00010b8bf5a0();
      uVar4 = uVar6 & (ulong)puVar3 >> 7;
      if ((((long)param_1 - uVar4 ^ uVar7 - uVar4) & uVar6) < 8) {
        *(byte *)(lVar5 + uVar7) = (byte)puVar3 & 0x7f;
        func_0x00010b8bf410();
      }
      else {
        *(byte *)(lVar5 + (long)param_1) = (byte)puVar3 & 0x7f;
        func_0x00010b8bf65c();
        *(undefined1 *)(extraout_x10 + extraout_x12 + extraout_x11 + 1) = extraout_w8;
        lVar5 = unaff_x19[1];
        if (extraout_w9 == 0x80) {
          puVar3 = (undefined8 *)(lVar5 + uVar7 * 0x10);
          uVar8 = *puVar3;
          puVar1 = (undefined8 *)(lVar5 + (long)param_1 * 0x10);
          puVar1[1] = puVar3[1];
          *puVar1 = uVar8;
          func_0x00010b8bf47c();
        }
        else {
          puVar3 = (undefined8 *)(lVar5 + uVar7 * 0x10);
          uStack_58 = puVar3[1];
          uStack_60 = *puVar3;
          puVar3 = (undefined8 *)(lVar5 + (long)param_1 * 0x10);
          uVar8 = *puVar3;
          puVar1 = (undefined8 *)(lVar5 + uVar7 * 0x10);
          puVar1[1] = puVar3[1];
          *puVar1 = uVar8;
          puVar3 = (undefined8 *)(unaff_x19[1] + (long)param_1 * 0x10);
          puVar3[1] = uStack_58;
          *puVar3 = uStack_60;
          uVar7 = uVar7 - 1;
        }
      }
    }
  }
  bVar2 = uVar7 == 7;
  lVar5 = 6;
  if (!bVar2) {
    lVar5 = uVar7 - (uVar7 >> 3);
  }
  func_0x00010b8bf4d8(lVar5);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_10b8bf22c;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x000107c27918(&uStack_71,*param_1);
  return;
}



/* Entry: 10b8bf22c; end: 10b8bf24b;  */

void FUN_10b8bf22c(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*param_1);
  return;
}



/* Entry: 10b8bf24c; end: 10b8bf323;  */

void FUN_10b8bf24c(long *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = (uint)param_1;
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    func_0x00010b8bf590();
    pcVar2 = (char *)(*param_1 + (ulong)uVar1);
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + (ulong)uVar1 * 8;
  }
  return;
}



/* Entry: 10b8bf324; end: 10b8bf697;  */

bool FUN_10b8bf324(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010b8bf670();
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x10 + uVar2);
    for (uVar3 = (uVar4 ^ extraout_x11) + extraout_x12 & (uVar4 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar5 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar2 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar5;
      if (*(long *)(*(long *)(param_1 + 8) + uVar5 * 0x10) == *param_2) goto LAB_10b8bf3a0;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b8bf3a0:
  return uVar3 != 0;
}



/* Entry: 10b8bf698; end: 10b8bf7c3;  */

long FUN_10b8bf698(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_68;
  long lStack_60;
  long alStack_58 [5];
  
  FUN_10b8bf964(alStack_58 + 3);
  plVar2 = alStack_58 + 3;
  plVar1 = param_1;
  FUN_10b8bf7c4();
  if ((long *)(*param_1 + param_1[3]) == plVar1) {
    alStack_58[0] = 0;
    alStack_58[1] = 0;
    alStack_58[2] = 0;
    lVar3 = *(long *)(*param_2 + 0x20);
    func_0x00010b8bf7f4(alStack_58);
    lVar6 = *param_2;
    lVar5 = lVar6 + 0x10;
    func_0x00010527d444();
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x28);
    lStack_68 = lVar5;
    lStack_60 = lVar3;
    while (lVar5 = lStack_60, lStack_68 != lVar4 + lVar6) {
      plVar2 = alStack_58;
      func_0x00010b8bb87c();
      lVar3 = param_1[9];
      FUN_10b8a3c40(lVar3,lVar5);
      *plVar2 = lVar3;
      FUN_10b9a9084(plVar2 + 1,lVar5 + 8);
      func_0x00010527d4cc(&lStack_68);
    }
    func_0x00010b8bf87c(&lStack_68,alStack_58);
    lVar5 = param_1[7] - param_1[6] >> 3;
    func_0x00010b8bf8b8(param_1 + 6,&lStack_68);
    FUN_10b8bf8f8(param_1,alStack_58 + 3);
    *param_1 = lVar5;
    FUN_10b8bac98(lStack_68);
    func_0x00010b8b98c4(alStack_58);
  }
  else {
    lVar5 = plVar2[2];
  }
  func_0x000104bd4e64(alStack_58[3]);
  return lVar5;
}



/* Entry: 10b8bf7c4; end: 10b8bf8f7;  */

long FUN_10b8bf7c4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8bfbac();
  plVar2 = param_1;
  FUN_10b8bfbd0(param_1,param_2,plVar1,&lStack_28);
  if ((int)plVar2 == 0) {
    lStack_28 = *param_1 + param_1[3];
  }
  else {
    lStack_28 = *param_1 + lStack_28;
  }
  return lStack_28;
}



/* Entry: 10b8bf8f8; end: 10b8bf91f;  */

long FUN_10b8bf8f8(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b8bfe1c(auStack_28);
  return lStack_20 + 0x10;
}



/* Entry: 10b8bf920; end: 10b8bf963;  */

void FUN_10b8bf920(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_3 < (ulong)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3)) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x30) + param_3 * 8);
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
  }
  else {
    lVar4 = 0;
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 10b8bf964; end: 10b8bf9cb;  */

long * FUN_10b8bf964(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  puVar4 = auStack_30;
  lVar5 = *param_2;
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
  *param_1 = lVar5;
  FUN_10b9a8f54(auStack_30);
  FUN_10b9aa3c8();
  FUN_10b9a8d98(auStack_30);
  param_1[1] = (long)puVar4;
  return param_1;
}



/* Entry: 10b8bf9cc; end: 10b8bfa63;  */

bool FUN_10b8bf9cc(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  if (param_1[2] == param_2[2]) {
    plVar3 = param_2;
    if ((ulong)param_1[3] <= (ulong)param_2[3]) {
      plVar3 = param_1;
      param_1 = param_2;
    }
    plVar2 = plVar3;
    func_0x00010527d444();
    lVar4 = *plVar3;
    lVar5 = plVar3[3];
    plStack_40 = plVar2;
    plStack_38 = param_2;
    while ((bVar1 = plStack_40 == (long *)(lVar4 + lVar5), !bVar1 &&
           (plVar3 = param_1, FUN_10b8c03f4(param_1,plStack_38), (int)plVar3 != 0))) {
      func_0x00010527d4cc(&plStack_40);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10b8bfa64; end: 10b8bfa97;  */

void FUN_10b8bfa64(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar5 = *param_2;
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
  *plVar4 = lVar5;
  *(long **)(param_1 + 8) = plVar4 + 1;
  return;
}



/* Entry: 10b8bfa98; end: 10b8bfb57;  */

long FUN_10b8bfa98(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  FUN_10b8baa04(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar4 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10b8baacc();
  }
  plStack_50 = (long *)((long)plStack_58 + (lVar1 - lVar5));
  plStack_40 = plStack_58 + (long)plVar4;
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar4 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_48 = plStack_50 + 1;
  *plStack_50 = lVar5;
  FUN_10b8baa44(param_1,&plStack_58);
  lVar5 = param_1[1];
  func_0x00010b8bab5c(&plStack_58);
  return lVar5;
}



/* Entry: 10b8bfb58; end: 10b8bfbab;  */

long FUN_10b8bfb58(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_10b8bfbd0();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 10b8bfbac; end: 10b8bfbcf;  */

void FUN_10b8bfbac(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  FUN_10b8bfcd4(&lStack_18);
  return;
}



/* Entry: 10b8bfbd0; end: 10b8bfcbf;  */

bool FUN_10b8bfbd0(long *param_1,ulong *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lStack_68;
  
  lStack_68 = 0;
  uVar2 = param_3 >> 7;
  uVar6 = param_1[3];
  while( true ) {
    uVar2 = uVar2 & uVar6;
    uVar5 = *(ulong *)(*param_1 + uVar2);
    uVar3 = uVar5 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar3 = uVar3 + 0xfefefefefefefeff & (uVar3 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar1 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar6;
      *param_4 = uVar4;
      uVar1 = *param_2;
      FUN_10b8bfcc0(uVar1,param_1[1] + uVar4 * 0x18);
      if ((uVar1 & 1) != 0) goto LAB_10b8bfc98;
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lStack_68 = lStack_68 + 8;
    uVar2 = lStack_68 + uVar2;
  }
LAB_10b8bfc98:
  return uVar3 != 0;
}



/* Entry: 10b8bfcc0; end: 10b8bfcd3;  */

bool FUN_10b8bfcc0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *param_2;
  plVar5 = (long *)(param_1 + 0x10);
  if (*(long *)(lVar7 + 0x20) == *(long *)(param_1 + 0x20)) {
    plVar1 = plVar5;
    plVar2 = (long *)(lVar7 + 0x10);
    if (*(ulong *)(lVar7 + 0x28) <= *(ulong *)(param_1 + 0x28)) {
      plVar1 = (long *)(lVar7 + 0x10);
      plVar2 = plVar5;
    }
    plVar4 = plVar1;
    func_0x00010527d444();
    lVar7 = *plVar1;
    lVar6 = plVar1[3];
    plStack_40 = plVar4;
    plStack_38 = plVar5;
    while ((bVar3 = plStack_40 == (long *)(lVar7 + lVar6), !bVar3 &&
           (plVar5 = plVar2, FUN_10b8c03f4(plVar2,plStack_38), (int)plVar5 != 0))) {
      func_0x00010527d4cc(&plStack_40);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 10b8bfcd4; end: 10b8bfd17;  */

void FUN_10b8bfcd4(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*(undefined8 *)(param_2 + 8));
  return;
}



/* Entry: 10b8bfd18; end: 10b8bfe1b;  */

/* WARNING: Possible PIC construction at 0x00010b8bfd48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8bfd4c) */
/* WARNING: Removing unreachable block (ram,0x00010b8bfd78) */
/* WARNING: Removing unreachable block (ram,0x00010b8bfd70) */
/* WARNING: Removing unreachable block (ram,0x00010b8c0574) */

undefined8 * FUN_10b8bfd18(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x00010b8c0548();
  FUN_10b8bd2b4(auStack_40,1);
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_110d717e0;
  puStack_30[1] = 0;
  func_0x00010b8bfdb4(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 10b8bfe1c; end: 10b8bfecb;  */

void FUN_10b8bfe1c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined1 extraout_w8;
  long *plVar7;
  long lVar8;
  long extraout_x9;
  long lVar9;
  long extraout_x10;
  long extraout_x11;
  
  plVar4 = param_2;
  FUN_10b8bfbac();
  plVar5 = param_2;
  plVar7 = param_3;
  FUN_10b8bfecc(param_2,param_3,plVar4);
  uVar6 = SUB81(plVar7,0);
  if (((ulong)plVar7 & 1) != 0) {
    plVar7 = (long *)(param_2[1] + (long)plVar5 * 0x18);
    lVar8 = *param_3;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar9 = param_3[1];
    *plVar7 = lVar8;
    plVar7[1] = lVar9;
    plVar7[2] = 0;
    *(byte *)(*param_2 + (long)plVar5) = (byte)plVar4 & 0x7f;
    func_0x00010b8c055c();
    *(undefined1 *)(extraout_x9 + extraout_x10 + extraout_x11 + 1) = extraout_w8;
  }
  lVar8 = param_2[1];
  *param_1 = *param_2 + (long)plVar5;
  param_1[1] = lVar8 + (long)plVar5 * 0x18;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 10b8bfecc; end: 10b8bffcb;  */

undefined1  [16] FUN_10b8bfecc(long *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar8 = 0;
  uVar3 = param_3 >> 7;
  uVar7 = param_1[3];
  while( true ) {
    uVar3 = uVar3 & uVar7;
    uVar6 = *(ulong *)(*param_1 + uVar3);
    uVar4 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar4 = uVar4 + 0xfefefefefefefeff & (uVar4 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar5 = (long *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar7);
      uVar1 = *param_2;
      FUN_10b8bfcc0(uVar1,param_1[1] + (long)plVar5 * 0x18);
      if ((uVar1 & 1) != 0) {
        uVar2 = 0;
        goto LAB_10b8bff94;
      }
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar8 = lVar8 + 8;
    uVar3 = lVar8 + uVar3;
  }
  FUN_10b8bffcc(param_1,param_3);
  uVar2 = 1;
  plVar5 = param_1;
LAB_10b8bff94:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar5;
  return auVar9;
}



/* Entry: 10b8bffcc; end: 10b8c009b;  */

void FUN_10b8bffcc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b8c009c(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b8c0014;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b8c0014;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b8c0070:
    FUN_10b8c00dc(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b8c0070;
    }
    func_0x00010b8c01f8(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b8c009c(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b8c0014:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b8c009c; end: 10b8c00db;  */

ulong FUN_10b8c009c(long param_1,ulong param_2,ulong param_3)

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



/* Entry: 10b8c00dc; end: 10b8c03b7;  */

void FUN_10b8c00dc(long *param_1,ulong param_2)

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
  lVar2 = lVar7 + param_2 * 0x18;
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
      FUN_10b8c03b8();
      lVar5 = *param_1;
      lVar3 = lVar5;
      FUN_10b8c009c(lVar5,param_1[3],lVar2);
      *(byte *)(lVar5 + lVar3) = (byte)lVar2 & 0x7f;
      func_0x00010b8c055c();
      *(undefined1 *)(extraout_x9 + extraout_x11 + extraout_x10 + 1) = extraout_w8;
      FUN_10b8c03d8(param_1[1] + lVar3 * 0x18,lVar4);
    }
    lVar4 = lVar4 + 0x18;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b8c03b8; end: 10b8c03d7;  */

void FUN_10b8c03b8(long param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27918(&uStack_11,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b8c03d8; end: 10b8c03f3;  */

void FUN_10b8c03d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  func_0x00010007e5d0(param_2);
  func_0x000104bd4e64();
  return;
}



/* Entry: 10b8c03f4; end: 10b8c043b;  */

void FUN_10b8c03f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lStack_28;
  
  lStack_28 = param_1 + 0x28;
  plVar1 = &lStack_28;
  FUN_10b8c0528(plVar1);
  FUN_10b8c043c(param_1,param_2,plVar1);
  return;
}



/* Entry: 10b8c043c; end: 10b8c0527;  */

bool FUN_10b8c043c(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = 0;
  uVar2 = param_3 >> 7;
  uVar6 = param_1[3];
  while( true ) {
    uVar2 = uVar2 & uVar6;
    uVar7 = *(ulong *)(*param_1 + uVar2);
    uVar3 = uVar7 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar3 = uVar3 + 0xfefefefefefefeff & (uVar3 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar1 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      plVar4 = (long *)(param_1[1] +
                       (uVar2 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar6) * 0x18
                       );
      if (*plVar4 == *param_2) {
        plVar4 = plVar4 + 1;
        FUN_10b9a9100(plVar4,param_2 + 1);
        if (((ulong)plVar4 & 1) != 0) goto LAB_10b8c0504;
      }
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar5 = lVar5 + 8;
    uVar2 = lVar5 + uVar2;
  }
LAB_10b8c0504:
  return uVar3 != 0;
}



/* Entry: 10b8c0528; end: 10b8c0587;  */

void FUN_10b8c0528(undefined8 param_1,long param_2)

{
  func_0x000104bdb700(param_1,param_2,param_2 + 8);
  return;
}



/* Entry: 10b8c0588; end: 10b8c0a1b;  */

undefined8 *****
FUN_10b8c0588(undefined8 *****param_1,long param_2,long param_3,undefined8 ****param_4)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ***pppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 uVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 ****ppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 **ppuStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar10 = param_1 + 2;
  *pppppuVar10 = (undefined8 ****)&UNK_10dd5b8b0;
  pppppuVar11 = param_1 + 3;
  *pppppuVar11 = (undefined8 ****)0x0;
  *param_1 = (undefined8 ****)&PTR_FUN_110d718c8;
  param_1[1] = (undefined8 ****)0x1;
  param_1[4] = (undefined8 ****)0x0;
  param_1[5] = (undefined8 ****)0x0;
  param_1[7] = (undefined8 ****)0x0;
  param_1[8] = param_4;
  bVar5 = param_3 == 7;
  if (bVar5) {
    uVar12 = 8;
LAB_10b8c0614:
    FUN_10b8c0cc4(pppppuVar10,0xffffffffffffffff >> (LZCOUNT(uVar12) & 0x3fU));
  }
  else {
    func_0x00010b8c15d8();
    uVar12 = extraout_x8;
    if (!bVar5) goto LAB_10b8c0614;
  }
  func_0x000107c31084();
  uStack_78 = 0;
  pppuStack_a0 = (undefined8 ***)&UNK_10dd5b8b0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  bVar5 = param_3 == 7;
  if (bVar5) {
    uVar12 = 8;
  }
  else {
    func_0x00010b8c15d8();
    uVar12 = extraout_x8_00;
    if (bVar5) goto LAB_10b8c0668;
  }
  FUN_10b8c0dcc(&pppuStack_a0,0xffffffffffffffff >> (LZCOUNT(uVar12) & 0x3fU));
LAB_10b8c0668:
  lVar23 = 0;
  do {
    uVar6 = lVar23 == param_3;
    if ((bool)uVar6) {
      pppppuVar10 = (undefined8 *****)&pppuStack_a0;
      func_0x00010b8c0bc4();
      func_0x00010b8c1440(uStack_70);
      if ((bool)uVar6) {
        return param_1;
      }
LAB_10b8c0a18:
      ___stack_chk_fail();
      *pppppuVar10 = (undefined8 ****)&PTR_FUN_110d718c8;
      func_0x00010b8c0c30(pppppuVar10 + 2);
      return pppppuVar10;
    }
    puVar22 = (undefined8 *)(param_2 + lVar23 * 0x18);
    _strlen(*puVar22);
    func_0x00010b8c15b8(&ppuStack_c8);
    pppppuVar7 = pppppuVar10;
    FUN_10b8c0ef0(pppppuVar10,&ppuStack_c8);
    lVar13 = 0;
    uVar16 = (ulong)pppppuVar7 >> 7;
    while( true ) {
      uVar16 = uVar16 & (ulong)param_1[5];
      uVar18 = *(ulong *)((long)param_1[2] + uVar16);
      uVar19 = uVar18 ^ ((ulong)pppppuVar7 & 0x7f) * 0x101010101010101;
      for (uVar19 = uVar19 + 0xfefefefefefefeff & (uVar19 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
        uVar15 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        ppppuVar20 = *pppppuVar11;
        pppppuVar8 = (undefined8 *****)
                     (uVar16 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) &
                     (ulong)param_1[5]);
        if (ppppuVar20[(long)pppppuVar8 * 3] == (undefined8 ***)ppuStack_c8) goto LAB_10b8c0798;
      }
      if ((uVar18 & ~uVar18 << 6 & 0x8080808080808080) != 0) break;
      lVar13 = lVar13 + 8;
      uVar16 = lVar13 + uVar16;
    }
    pppppuVar8 = pppppuVar10;
    FUN_10b8c0f30(pppppuVar10,pppppuVar7);
    ppppuVar20 = *pppppuVar11;
    if ((undefined8 ***)ppuStack_c8 != (undefined8 ***)0x0) {
      pppuVar1 = (undefined8 ***)(ppuStack_c8 + 1);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar5) {
          *(int *)pppuVar1 = *(int *)pppuVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppuVar20 = ppppuVar20 + (long)pppppuVar8 * 3;
    ppppuVar20[1] = (undefined8 ***)0x0;
    ppppuVar20[2] = (undefined8 ***)0x0;
    *ppppuVar20 = (undefined8 ***)ppuStack_c8;
    *(byte *)((long)param_1[2] + (long)pppppuVar8) = (byte)pppppuVar7 & 0x7f;
    func_0x00010b8c1388();
    ppppuVar20 = param_1[3];
LAB_10b8c0798:
    _strlen(puVar22[1]);
    func_0x00010b8c15b8(&ppppuStack_c0);
    func_0x000107c31060(ppppuVar20 + (long)pppppuVar8 * 3 + 1,&ppppuStack_c0);
    func_0x000107c278f8(ppppuStack_c0);
    pppuVar9 = (undefined8 ***)puVar22[2];
    ppppuVar20[(long)pppppuVar8 * 3 + 2] = pppuVar9;
    FUN_10b8c10d8();
    uVar19 = uStack_88;
    lVar21 = lStack_98;
    pppuVar1 = pppuStack_a0;
    lVar13 = 0;
    uVar18 = puVar22[2];
    uVar16 = (ulong)pppuVar9 >> 7;
    while( true ) {
      uVar16 = uVar16 & uStack_88;
      uVar14 = *(ulong *)((long)pppuStack_a0 + uVar16);
      uVar15 = uVar14 ^ ((ulong)pppuVar9 & 0x7f) * 0x101010101010101;
      for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
        uVar17 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar17 = uVar16 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uStack_88;
        if (*(ulong *)(lStack_98 + uVar17 * 0x10) == uVar18) {
          if (uStack_88 == uVar17) goto LAB_10b8c086c;
          ppppuStack_c0 = (undefined8 ****)(lStack_98 + uVar17 * 0x10 + 8);
          puStack_b8 = &UNK_1003ab990;
          ppuStack_b0 = &ppuStack_c8;
          puStack_a8 = &UNK_1003ab990;
          func_0x000107c2793c(&UNK_10f7cb47b);
          func_0x000107c3173c(&ppppuStack_e0);
          if (-1 < (char)bStack_c9) {
            uStack_d8 = (ulong)bStack_c9;
            ppppuStack_e0 = &ppppuStack_e0;
          }
          FUN_10bd3f434(&ppppuStack_c0,ppppuStack_e0,uStack_d8,&UNK_10f7cb4ac);
          pppppuVar10 = (undefined8 *****)ppppuStack_c0;
          if (-1 < (long)ppuStack_b0) {
            pppppuVar10 = &ppppuStack_c0;
          }
          FUN_10bd3f4e0(pppppuVar10,"unknown",0x1f);
          goto LAB_10b8c0a18;
        }
      }
      if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
      lVar13 = lVar13 + 8;
      uVar16 = lVar13 + uVar16;
    }
LAB_10b8c086c:
    FUN_10b8c10d8();
    lVar13 = 0;
    uVar16 = uVar18 >> 7;
    while( true ) {
      uVar16 = uVar16 & uVar19;
      uVar14 = *(ulong *)((long)pppuVar1 + uVar16);
      uVar15 = uVar14 ^ (uVar18 & 0x7f) * 0x101010101010101;
      for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
        uVar17 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        ppppuVar20 = (undefined8 ****)
                     (uVar16 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar19);
        if (*(long *)(lVar21 + (long)ppppuVar20 * 0x10) == puVar22[2]) goto LAB_10b8c0934;
      }
      if ((uVar14 & ~uVar14 << 6 & 0x8080808080808080) != 0) break;
      lVar13 = lVar13 + 8;
      uVar16 = lVar13 + uVar16;
    }
    ppppuVar20 = &pppuStack_a0;
    FUN_10b8c10f8(ppppuVar20,uVar18);
    lVar21 = lStack_98;
    pppuVar1 = pppuStack_a0;
    puVar2 = (undefined8 *)(lStack_98 + (long)ppppuVar20 * 0x10);
    *puVar2 = puVar22[2];
    puVar2[1] = 0;
    bVar4 = (byte)uVar18 & 0x7f;
    *(byte *)((long)pppuStack_a0 + (long)ppppuVar20) = bVar4;
    *(byte *)((long)pppuVar1 + (uStack_88 & 7) + (uStack_88 & (ulong)(ppppuVar20 + -1)) + 1) = bVar4
    ;
LAB_10b8c0934:
    func_0x000107c31068(lVar21 + (long)ppppuVar20 * 0x10 + 8,&ppuStack_c8);
    func_0x000107c278f8(ppuStack_c8);
    lVar23 = lVar23 + 1;
  } while( true );
}



/* Entry: 10b8c0a1c; end: 10b8c0a4b;  */

undefined8 * FUN_10b8c0a1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d718c8;
  func_0x00010b8c0c30(param_1 + 2);
  return param_1;
}



/* Entry: 10b8c0a4c; end: 10b8c0a4f;  */

undefined8 * FUN_10b8c0a4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d718c8;
  func_0x00010b8c0c30(param_1 + 2);
  return param_1;
}



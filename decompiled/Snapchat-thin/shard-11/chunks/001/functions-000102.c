/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108195058; end: 10819506f;  */

void FUN_108195058(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *extraout_x8;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  *extraout_x8 = 0;
  extraout_x8[8] = 0;
  uStack_38 = 0x1138270b0;
  lVar1 = param_1;
  lStack_48 = param_1;
  _strlen();
  lStack_40 = param_1 + lVar1;
  plVar2 = &lStack_48;
  FUN_10818fd64(plVar2,&uStack_38);
  if ((int)plVar2 != 0) {
    FUN_1081950f0(extraout_x8,&uStack_38);
  }
  func_0x000108195190();
  return;
}



/* Entry: 108195070; end: 1081950ef;  */

void FUN_108195070(undefined1 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[8] = 0;
  uStack_28 = 0x1138270b0;
  lVar1 = param_2;
  lStack_38 = param_2;
  _strlen();
  lStack_30 = param_2 + lVar1;
  plVar2 = &lStack_38;
  FUN_10818fd64(plVar2,&uStack_28);
  if ((int)plVar2 != 0) {
    FUN_1081950f0(param_1,&uStack_28);
  }
  func_0x000108195190();
  return;
}



/* Entry: 1081950f0; end: 10819515f;  */

void FUN_1081950f0(long param_1)

{
  func_0x000108195114();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1083a3c7c();
  }
  return;
}



/* Entry: 108195160; end: 10819517b;  */

void FUN_108195160(long param_1)

{
  FUN_1083a33c4();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10819517c; end: 1081951c7;  */

void FUN_10819517c(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined8 uStack_28;
  
  _strcmp();
  if (unaff_w21 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_28 = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fe68(puVar1,&uStack_28);
  if ((int)puVar1 != 0) {
    FUN_10819195c(param_1,&uStack_28);
  }
  return;
}



/* Entry: 1081951c8; end: 1081952d7;  */

undefined8 FUN_1081951c8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 auStack_58 [2];
  long lStack_50;
  char cStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  FUN_1081949a0();
  if ((uVar1 & 1) == 0) {
    FUN_108194b38(auStack_58,&UNK_10f47de20,param_2,param_3);
    if (cStack_48 == '\x01') {
      *(undefined4 *)(param_1 + 0x358) = auStack_58[0];
      lVar3 = *(long *)(param_1 + 0x360);
      if (lVar3 != lStack_50) {
        *(long *)(param_1 + 0x360) = lStack_50;
        lStack_50 = lVar3;
      }
LAB_10819523c:
      uVar4 = 1;
    }
    else {
      _strcmp(param_2,"mode");
      if ((int)param_2 == 0) {
        lVar3 = param_3;
        lStack_40 = param_3;
        _strlen();
        lStack_38 = param_3 + lVar3;
        puVar5 = (undefined4 *)&UNK_110a2cf30;
        lVar3 = 5;
        do {
          plVar2 = &lStack_40;
          func_0x00010818efe8(plVar2,*(undefined8 *)(puVar5 + -2));
          if (((ulong)plVar2 & 1) != 0) {
            if (lStack_40 == lStack_38) {
              *(undefined4 *)(param_1 + 0x350) = *puVar5;
              goto LAB_10819523c;
            }
            break;
          }
          puVar5 = puVar5 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      uVar4 = 0;
    }
    FUN_108194e20(auStack_58);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 1081952d8; end: 108195443;  */

void FUN_1081952d8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long *param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_84;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  FUN_10819480c();
  if (*(uint *)(param_6 + 0x6a) < 5) {
    uVar2 = *(undefined4 *)(&UNK_10df076fc + (ulong)*(uint *)(param_6 + 0x6a) * 4);
    (**(code **)(*param_6 + 0x68))(param_6,param_7,param_8);
    FUN_1081958a4(&lStack_68);
    FUN_1081958a4(&lStack_70);
    if (lStack_68 != 0) {
      piVar1 = (int *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_78 = lStack_68;
    if (lStack_70 != 0) {
      piVar1 = (int *)(lStack_70 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_80 = lStack_70;
    uStack_84 = 1;
    uStack_94 = param_2;
    uStack_90 = param_3;
    uStack_8c = param_4;
    uStack_88 = param_5;
    FUN_1083aebac(param_1,uVar2,&lStack_78,&lStack_80,&uStack_94);
    FUN_10811e834(&lStack_80);
    FUN_10811e834(&lStack_78);
    FUN_10811e834(&lStack_70);
    FUN_10811e834(&lStack_68);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x108195414);
  (*pcVar5)();
}



/* Entry: 108195444; end: 108195447;  */

undefined8 * FUN_108195444(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110a2cf88;
  FUN_1083a3c7c(param_1 + 0x6c);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108195448; end: 10819545b;  */

void FUN_108195448(void)

{
  FUN_108195568();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819545c; end: 108195567;  */

undefined8 * FUN_10819545c(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long alStack_58 [2];
  undefined4 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_58[0]._0_4_ = *(undefined4 *)(param_2 + 0x308);
  alStack_58[1] = *(long *)(param_2 + 0x310);
  if (alStack_58[1] != 0 && alStack_58[1] != 0x1138270b0) {
    piVar1 = (int *)(alStack_58[1] + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_48 = *(undefined4 *)(param_2 + 0x358);
  lStack_40 = *(long *)(param_2 + 0x360);
  if ((lStack_40 != 0) && (lStack_40 != 0x1138270b0)) {
    piVar1 = (int *)(lStack_40 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1081955d8(param_1,alStack_58,2);
  lVar6 = 0x18;
  do {
    puVar5 = (undefined8 *)((long)alStack_58 + lVar6);
    FUN_1083a3c7c();
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar6 = 0x18;
  do {
    puVar5 = (undefined8 *)((long)alStack_58 + lVar6);
    FUN_1083a3c7c();
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -8);
  func_0x0001081958b4();
  *puVar5 = &PTR_FUN_110a2cf88;
  FUN_1083a3c7c(puVar5 + 0x6c);
  puVar4 = puVar5;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar4 + 99);
  FUN_1083a3c7c(puVar5 + 0x62);
  *puVar5 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(puVar5 + 0x5f);
  *puVar5 = &PTR_DAT_110a2e170;
  FUN_10818e868(puVar5 + 2);
  return puVar5;
}



/* Entry: 108195568; end: 10819559b;  */

undefined8 * FUN_108195568(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110a2cf88;
  FUN_1083a3c7c(param_1 + 0x6c);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819559c; end: 1081955d7;  */

void FUN_10819559c(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_2 + 2);
  if (lVar4 != 0 && lVar4 != 0x1138270b0) {
    piVar1 = (int *)(lVar4 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(param_1 + 2) = lVar4;
  return;
}



/* Entry: 1081955d8; end: 108195607;  */

undefined8 * FUN_1081955d8(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108195608(param_1,param_2,param_2 + param_3 * 0x10,param_3);
  return param_1;
}



/* Entry: 108195608; end: 108195687;  */

void FUN_108195608(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_108195688(param_1,param_4);
    FUN_1081956c0(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000108195878(&uStack_40);
  return;
}



/* Entry: 108195688; end: 1081956bf;  */

void FUN_108195688(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1 + 2;
    FUN_108195708();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
  }
  else {
    FUN_1081956f4();
    plVar1 = param_1 + 2;
    func_0x000108195748();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1081956c0; end: 1081956f3;  */

void FUN_1081956c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000108195748();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1081956f4; end: 108195707;  */

void FUN_1081956f4(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10819572c();
  return;
}



/* Entry: 108195708; end: 10819572b;  */

void FUN_108195708(void)

{
  FUN_10819572c();
  return;
}



/* Entry: 10819572c; end: 10819575b;  */

void FUN_10819572c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  FUN_10819575c();
  return;
}



/* Entry: 10819575c; end: 1081957f3;  */

long FUN_10819575c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_10819559c(param_4,param_2);
    param_4 = lStack_38 + 0x10;
  }
  uStack_48 = 1;
  FUN_1081957f4(&uStack_60);
  return param_4;
}



/* Entry: 1081957f4; end: 108195823;  */

long FUN_1081957f4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108195824(param_1);
  }
  return param_1;
}



/* Entry: 108195824; end: 108195843;  */

void FUN_108195824(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x10) {
    FUN_1083a3c7c(lVar1 + -8);
  }
  return;
}



/* Entry: 108195844; end: 1081958a3;  */

void FUN_108195844(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x10) {
    FUN_1083a3c7c(param_3 + -8);
  }
  return;
}



/* Entry: 1081958a4; end: 1081958cb;  */

void FUN_1081958a4(long *param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int unaff_w24;
  long lStack_58;
  int iStack_50;
  undefined1 uStack_44;
  undefined1 uStack_34;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  FUN_10819a090(&lStack_58);
  lVar1 = lStack_58;
  if (iStack_50 == unaff_w24) {
    lStack_58 = 0;
    *param_1 = lVar1;
  }
  else {
    if (unaff_w24 == 2 && iStack_50 == 1) {
      FUN_1083ada84(auStack_28);
      uStack_30 = 0;
      if (lStack_58 != 0) {
        do {
          func_0x00010819aab0();
          uStack_30 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      uStack_44 = 0;
      uStack_34 = 0;
      func_0x00010819aaec();
    }
    else {
      FUN_1083ad9c4(auStack_28);
      uStack_30 = 0;
      if (lStack_58 != 0) {
        do {
          func_0x00010819aab0();
          uStack_30 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uStack_44 = 0;
      uStack_34 = 0;
      func_0x00010819aaec();
    }
    func_0x00010819aac0();
    FUN_108115b2c(auStack_28);
  }
  func_0x00010819ab18();
  return;
}



/* Entry: 1081958cc; end: 1081959cf;  */

byte FUN_1081958cc(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  byte bStack_48;
  
  uVar1 = param_1;
  FUN_1081949a0();
  if ((uVar1 & 1) == 0) {
    uVar2 = param_2;
    _strcmp(param_2,&DAT_10f6389e8);
    if ((int)uVar2 == 0) {
      lVar4 = param_3;
      lStack_60 = param_3;
      _strlen();
      lStack_58 = param_3 + lVar4;
      puVar3 = (undefined4 *)&UNK_110a2d028;
      lVar4 = 4;
      do {
        uVar1 = 0;
        func_0x00010818efe8(&lStack_60,*(undefined8 *)(puVar3 + -2));
        if ((uVar1 & 1) != 0) {
          if (lStack_60 == lStack_58) {
            *(undefined4 *)(param_1 + 0x350) = *puVar3;
            goto LAB_1081958f8;
          }
          break;
        }
        puVar3 = puVar3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    FUN_1081959d0(&lStack_60,"values",param_2,param_3);
    if (bStack_48 == 1) {
      func_0x0001074714f0(param_1 + 0x358,&lStack_60);
    }
    else {
      bStack_48 = 0;
    }
    func_0x000107273f7c(&lStack_60);
  }
  else {
LAB_1081958f8:
    bStack_48 = 1;
  }
  return bStack_48 & 1;
}



/* Entry: 1081959d0; end: 108195a1f;  */

void FUN_1081959d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _strcmp(param_3,param_2);
  if ((int)param_3 != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = param_4;
  lStack_48 = param_4;
  _strlen();
  lStack_40 = param_4 + lVar1;
  plVar2 = &lStack_48;
  func_0x000108190e6c(plVar2,&uStack_38);
  if ((int)plVar2 != 0) {
    FUN_108195e3c(param_1,&uStack_38);
  }
  func_0x0001056d1ce4(&uStack_38);
  return;
}



/* Entry: 108195a20; end: 108195cbb;  */

void FUN_108195a20(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined4 param_5,long param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  float *pfVar3;
  ulong extraout_x8;
  float fVar4;
  float fVar5;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_38 [8];
  
  pfVar3 = *(float **)(param_6 + 0x358);
  if (pfVar3 == *(float **)(param_6 + 0x360)) {
    if (*(int *)(param_6 + 0x350) == 3) goto code_r0x000108195ad0;
    FUN_108195e98();
LAB_108195bf8:
    func_0x000108195ec0();
    fVar4 = 1.0;
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
  }
  else {
    switch(*(int *)(param_6 + 0x350)) {
    case 0:
      fStack_90 = 1.0;
      uStack_84 = 0;
      uStack_80 = 0;
      fStack_8c = 0.0;
      fStack_88 = 0.0;
      fStack_7c = 0.0;
      fStack_78 = 1.0;
      uStack_6c = 0;
      fStack_68 = 0.0;
      fStack_74 = 0.0;
      uStack_70 = 0;
      fStack_64 = 0.0;
      fStack_60 = 1.0;
      func_0x000108195ec0((long)*(float **)(param_6 + 0x360) - (long)pfVar3);
      fVar4 = 1.0;
      uStack_48 = 0x3f800000;
      uStack_44 = 0;
      if (0x4f < extraout_x8) {
        fVar4 = 1.0;
        _memmove(&fStack_90);
      }
      break;
    case 1:
      fVar4 = *pfVar3;
      FUN_108195e98();
      func_0x000108195ec0();
      param_3 = 1.0;
      uStack_48 = 0x3f800000;
      uStack_44 = 0;
      FUN_1083ac3a4(&fStack_90);
      break;
    case 2:
      fVar5 = 0.017453292;
      fVar4 = *pfVar3 * 0.017453292;
      ___sincosf_stret();
      param_4 = fVar5 * 0.787 + 0.213 + fVar4 * -0.213;
      fStack_74 = fVar5 * -0.072 + 0.072;
      fStack_88 = fStack_74 + fVar4 * 0.928;
      fStack_74 = fStack_74 + fVar4 * -0.283;
      fStack_7c = fVar5 * -0.213 + 0.213;
      fStack_68 = fStack_7c + fVar4 * -0.787;
      fStack_7c = fStack_7c + fVar4 * 0.143;
      fStack_78 = fVar5 * 0.285 + 0.715 + fVar4 * 0.14;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      param_5 = 0xbf370a3d;
      fStack_64 = fVar5 * -0.715 + 0.715;
      fStack_8c = fStack_64 + fVar4 * -0.715;
      fStack_64 = fStack_64 + fVar4 * 0.715;
      fStack_60 = fVar5 * 0.928 + 0.072 + fVar4 * 0.072;
      fStack_90 = param_4;
      param_3 = fStack_8c;
      goto LAB_108195bf8;
    case 3:
code_r0x000108195ad0:
      uStack_5c = 0;
      fStack_60 = 0.0;
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      uStack_80 = 0;
      fStack_7c = 0.0;
      fStack_68 = 0.0;
      fStack_64 = 0.0;
      uStack_70 = 0;
      uStack_6c = 0;
      fStack_88 = 0.0;
      uStack_84 = 0;
      fStack_90 = 0.0;
      fStack_8c = 0.0;
      fVar4 = 0.2126;
      uStack_4c = 0x3d93dd98;
      uStack_48 = 0;
      uStack_54 = 0x3f3717593e59b3d0;
      uStack_44 = 0;
      break;
    default:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108195c98);
      (*pcVar2)();
    }
  }
  FUN_1083ae1cc(auStack_38,&fStack_90,1);
  uVar1 = *(uint *)(*(long *)(param_7 + 0x38) + 0x148);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  FUN_10819a590(auStack_98,param_8,param_7,param_6 + 0x308,uVar1);
  FUN_10819480c(param_6,param_7,param_8);
  uStack_9c = 1;
  fStack_ac = fVar4;
  fStack_a8 = param_3;
  fStack_a4 = param_4;
  uStack_a0 = param_5;
  FUN_1083b07f0(param_1,auStack_38,auStack_98,&fStack_ac);
  FUN_10811e834(auStack_98);
  FUN_108115b2c(auStack_38);
  return;
}



/* Entry: 108195cbc; end: 108195cbf;  */

undefined8 * FUN_108195cbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  func_0x0001056d1ce4(param_1 + 0x6b);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108195cc0; end: 108195cd3;  */

void FUN_108195cc0(void)

{
  FUN_108195d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108195cd4; end: 108195d87;  */

undefined8 * FUN_108195cd4(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 auStack_38 [2];
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_38[0] = *(undefined4 *)(param_2 + 0x308);
  puStack_30 = *(undefined8 **)(param_2 + 0x310);
  if (puStack_30 != (undefined8 *)0x0 && puStack_30 != (undefined8 *)0x1138270b0) {
    piVar1 = (int *)((long)puStack_30 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1081955d8(param_1,auStack_38,1);
  puVar5 = puStack_30;
  FUN_1083a3ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  FUN_1083a3ca0(puStack_30);
  __Unwind_Resume();
  func_0x0001056d1ce4(puVar5 + 0x6b);
  puVar4 = puVar5;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar4 + 99);
  FUN_1083a3c7c(puVar5 + 0x62);
  *puVar5 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(puVar5 + 0x5f);
  *puVar5 = &PTR_DAT_110a2e170;
  FUN_10818e868(puVar5 + 2);
  return puVar5;
}



/* Entry: 108195d88; end: 108195daf;  */

undefined8 * FUN_108195d88(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  func_0x0001056d1ce4(param_1 + 0x6b);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108195db0; end: 108195e3b;  */

void FUN_108195db0(undefined1 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  param_1[0x18] = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = param_2;
  lStack_48 = param_2;
  _strlen();
  lStack_40 = param_2 + lVar1;
  plVar2 = &lStack_48;
  func_0x000108190e6c(plVar2,&uStack_38);
  if ((int)plVar2 != 0) {
    FUN_108195e3c(param_1,&uStack_38);
  }
  func_0x0001056d1ce4(&uStack_38);
  return;
}



/* Entry: 108195e3c; end: 108195e97;  */

void FUN_108195e3c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *unaff_x21;
  long lVar13;
  ulong *unaff_x22;
  long lVar14;
  ulong *unaff_x23;
  long *plVar15;
  ulong *unaff_x24;
  long lVar16;
  ulong *unaff_x25;
  ulong unaff_x26;
  long lVar17;
  ulong *unaff_x27;
  ulong *puVar18;
  ulong *unaff_x28;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long lStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  ulong *puStack_2d0;
  ulong *puStack_2c8;
  ulong uStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong *puStack_298;
  ulong *puStack_290;
  ulong *puStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_268;
  ulong *puStack_260;
  char cStack_251;
  long alStack_250 [29];
  ulong auStack_168 [29];
  undefined8 uStack_80;
  
  func_0x000108195e60();
  if ((param_1[3] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  puVar4 = param_1;
  puStack_268 = extraout_x8;
  func_0x0001077b3d14();
  cStack_251 = '\0';
  uVar11 = *puVar4;
  uVar10 = puVar4[1];
  uStack_80 = extraout_x8_00;
  if (uVar11 == uVar10) {
    uVar2 = param_1[3] == param_1[4];
    if (!(bool)uVar2) {
      func_0x0001077b3e24();
      uVar11 = *param_1;
      uVar10 = param_1[1];
      goto code_r0x0001077b1b24;
    }
  }
  else {
code_r0x0001077b1b24:
    uVar2 = uVar11 == uVar10;
    if (!(bool)uVar2) {
      if (((char)param_1[0x16] == '\x01') &&
         (__ZNSt3__16chrono12steady_clock3nowEv(),
         (long)param_1[0x19] < (long)((long)puVar4 - param_1[0x17]) / 1000000)) {
        func_0x0001077b3e24();
      }
      if (cStack_251 == '\x01') {
        puVar4 = param_1;
        func_0x0001077b216c(param_1,*param_1,param_1[1]);
        uVar11 = *param_1;
        if (0xe8 < (long)(param_1[1] - uVar11)) {
          unaff_x24 = (ulong *)((long)(param_1[1] - uVar11) / 0xe8);
          unaff_x25 = (ulong *)((long)unaff_x24 - 2U >> 1);
          puStack_260 = (ulong *)(uVar11 + 0xe8);
          unaff_x27 = (ulong *)0xe8;
          unaff_x28 = unaff_x25;
          do {
            if ((long)unaff_x28 <= (long)unaff_x25) {
              uVar1 = ((ulong)unaff_x28 & 0x3fffffffffffffff) << 1 | 1;
              unaff_x21 = (ulong *)(uVar1 * 0xe8 + uVar11);
              uVar10 = (long)unaff_x28 * 2 + 2;
              unaff_x26 = uVar1;
              if ((long)uVar10 < (long)unaff_x24) {
                func_0x0001077b3d40();
                bVar3 = (int)puVar4 == 0;
                lVar9 = 0xe8;
                if (bVar3) {
                  lVar9 = 0;
                }
                unaff_x21 = (ulong *)((long)unaff_x21 + lVar9);
                unaff_x26 = uVar10;
                if (bVar3) {
                  unaff_x26 = uVar1;
                }
              }
              unaff_x22 = (ulong *)(uVar11 + (long)unaff_x28 * 0xe8);
              puVar4 = param_1;
              func_0x0001077b2e30(param_1,unaff_x21,unaff_x22);
              if (((ulong)puVar4 & 1) == 0) {
                func_0x0001077b3de0();
                do {
                  puVar4 = unaff_x22;
                  unaff_x22 = unaff_x21;
                  func_0x0001077b3658(puVar4,unaff_x22);
                  unaff_x21 = unaff_x22;
                  if ((long)unaff_x25 < (long)unaff_x26) break;
                  uVar1 = (unaff_x26 & 0x3fffffffffffffff) << 1 | 1;
                  unaff_x21 = (ulong *)(uVar1 * 0xe8 + uVar11);
                  uVar10 = unaff_x26 * 2 + 2;
                  unaff_x26 = uVar1;
                  if ((long)uVar10 < (long)unaff_x24) {
                    func_0x0001077b3d40();
                    bVar3 = (int)puVar4 == 0;
                    lVar9 = 0xe8;
                    if (bVar3) {
                      lVar9 = 0;
                    }
                    unaff_x21 = (ulong *)((long)unaff_x21 + lVar9);
                    unaff_x26 = uVar10;
                    if (bVar3) {
                      unaff_x26 = uVar1;
                    }
                  }
                  func_0x0001077b3d40();
                } while ((int)puVar4 == 0);
                func_0x0001077b3e58();
                func_0x0001077b3d8c();
              }
            }
            unaff_x28 = (ulong *)((long)unaff_x28 + -1);
          } while (-1 < (long)unaff_x28);
        }
        *(undefined1 *)(param_1 + 0x16) = 0;
        __ZNSt3__16chrono12steady_clock3nowEv();
        param_1[0x17] = (ulong)puVar4;
      }
      else if (((char)param_1[0x1a] == '\x01') &&
              (unaff_x21 = param_1 + 3, *unaff_x21 != param_1[4])) {
        func_0x0001077b216c(param_1);
        puVar4 = (ulong *)param_1[4];
        unaff_x26 = 0xe8;
        for (unaff_x22 = (ulong *)param_1[3]; unaff_x22 != puVar4; unaff_x22 = unaff_x22 + 0x1d) {
          func_0x0001077b3124(param_1,unaff_x22);
          unaff_x27 = (ulong *)*param_1;
          uVar11 = param_1[1] - (long)unaff_x27;
          if (0xe8 < (long)uVar11) {
            puVar18 = (ulong *)(uVar11 / 0xe8 - 2 >> 1);
            unaff_x25 = (ulong *)(param_1[1] - 0xe8);
            puVar5 = param_1;
            func_0x0001077b2e30(param_1,unaff_x27 + (long)puVar18 * 0x1d,unaff_x25);
            unaff_x28 = puVar18;
            if ((int)puVar5 != 0) {
              func_0x0001077b3230(auStack_168,unaff_x25);
              puVar5 = unaff_x27 + (long)puVar18 * 0x1d;
              do {
                unaff_x24 = puVar5;
                puVar6 = unaff_x25;
                func_0x0001077b3658(unaff_x25,unaff_x24);
                unaff_x28 = (ulong *)0x0;
                if (puVar18 == (ulong *)0x0) break;
                puVar18 = (ulong *)((long)puVar18 - 1U >> 1);
                func_0x0001077b3d9c();
                puVar5 = unaff_x27 + (long)puVar18 * 0x1d;
                unaff_x25 = unaff_x24;
                unaff_x28 = puVar18;
              } while (((ulong)puVar6 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b2e04(unaff_x21);
      }
      unaff_x23 = (ulong *)*param_1;
      uVar11 = param_1[1];
      lVar9 = uVar11 - (long)unaff_x23;
      uVar2 = lVar9 == 0xe9;
      if (0xe8 < lVar9) {
        unaff_x24 = (ulong *)(lVar9 / 0xe8);
        func_0x0001077b3e78(alStack_250);
        unaff_x27 = (ulong *)0x0;
        unaff_x25 = (ulong *)((long)unaff_x24 - 2U >> 1);
        unaff_x26 = 0xe8;
        puStack_260 = unaff_x23;
        do {
          unaff_x28 = unaff_x23 + (long)unaff_x27 * 0x1d;
          puVar4 = unaff_x28 + 0x1d;
          puVar5 = (ulong *)((long)unaff_x27 << 1 | 1);
          unaff_x21 = (ulong *)((long)unaff_x27 * 2 + 2);
          unaff_x22 = puVar4;
          unaff_x27 = puVar5;
          if ((long)unaff_x21 < (long)unaff_x24) {
            puVar18 = param_1;
            func_0x0001077b2e30(param_1,puVar4,unaff_x28 + 0x3a);
            unaff_x22 = unaff_x28 + 0x3a;
            unaff_x27 = unaff_x21;
            if ((int)puVar18 == 0) {
              unaff_x22 = puVar4;
              unaff_x27 = puVar5;
            }
          }
          func_0x0001077b3658(unaff_x23,unaff_x22);
          unaff_x23 = unaff_x22;
        } while ((long)unaff_x27 <= (long)unaff_x25);
        unaff_x23 = (ulong *)(uVar11 - 0xe8);
        uVar2 = unaff_x22 == unaff_x23;
        if ((bool)uVar2) {
          func_0x0001077b3e58();
        }
        else {
          func_0x0001077b3e60();
          func_0x0001077b3658(unaff_x23,alStack_250);
          unaff_x21 = puStack_260;
          uVar11 = (long)unaff_x22 + (0xe8 - (long)puStack_260);
          uVar2 = uVar11 == 0xe9;
          if (0xe8 < (long)uVar11) {
            uVar11 = uVar11 / 0xe8 - 2 >> 1;
            unaff_x23 = puStack_260 + uVar11 * 0x1d;
            puVar4 = param_1;
            func_0x0001077b2e30(param_1,unaff_x23,unaff_x22);
            if ((int)puVar4 != 0) {
              func_0x0001077b3de0();
              unaff_x25 = (ulong *)0xe8;
              do {
                unaff_x24 = unaff_x23;
                func_0x0001077b3e60();
                unaff_x23 = unaff_x24;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                unaff_x23 = unaff_x21 + uVar11 * 0x1d;
                func_0x0001077b3d9c();
                unaff_x22 = unaff_x24;
              } while (((ulong)puVar4 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b356c(alStack_250);
        uVar11 = param_1[1];
      }
      func_0x0001077b3538(auStack_168,uVar11 - 0xe8);
      func_0x0001077b3940(param_1,param_1[1] - 0xe8);
      param_2 = auStack_168;
      func_0x0001077b3538();
      puStack_268[0xd0] = 1;
      puVar4 = auStack_168;
      func_0x000107273efc();
      goto code_r0x0001077b1edc;
    }
  }
  *puStack_268 = 0;
  puStack_268[0xd0] = 0;
code_r0x0001077b1edc:
  func_0x0001077b3cec(uStack_80);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    plVar7 = alStack_250;
    func_0x0001077b356c();
    func_0x0001077b3d2c();
    puStack_278 = &UNK_1077b1f48;
    lVar14 = plVar7[3];
    lVar12 = plVar7[4];
    lVar9 = lVar12 - lVar14;
    puStack_2d0 = unaff_x28;
    puStack_2c8 = unaff_x27;
    uStack_2c0 = unaff_x26;
    puStack_2b8 = unaff_x25;
    puStack_2b0 = unaff_x24;
    puStack_2a8 = unaff_x23;
    puStack_2a0 = unaff_x22;
    puStack_298 = unaff_x21;
    puStack_290 = param_1;
    puStack_288 = puVar4;
    puStack_280 = &stack0xffffffffffffffe0;
    if (0 < lVar9) {
      lVar13 = *plVar7;
      plVar15 = plVar7 + 2;
      lVar16 = plVar7[1];
      lVar17 = lVar9 / 0xe8;
      if (*plVar15 - lVar16 < lVar9) {
        plVar8 = plVar7;
        func_0x0001077b3260(plVar7,(lVar16 - lVar13) / 0xe8 + lVar17);
        func_0x0001077b3354(&plStack_308,plVar8,(lVar13 - *plVar7) / 0xe8,plVar15);
        lVar12 = (long)plStack_2f8 + lVar9;
        for (; lVar9 != 0; lVar9 = lVar9 + -0xe8) {
          func_0x0001077b3e78(plStack_2f8);
          plStack_2f8 = plStack_2f8 + 0x1d;
        }
        plStack_2f8 = (long *)lVar12;
        func_0x0001077b33f4(plVar15,lVar13,plVar7[1],lVar12);
        lVar9 = *plVar7;
        plStack_2f8 = (long *)((long)plStack_2f8 + (plVar7[1] - lVar13));
        plVar7[1] = lVar13;
        func_0x0001077b33f4(plVar15,lVar9,lVar13,plStack_300 + ((lVar13 - lVar9) / -0xe8) * 0x1d);
        plStack_308 = (long *)*plVar7;
        *plVar7 = (long)(plStack_300 + ((lVar13 - lVar9) / -0xe8) * 0x1d);
        lVar9 = plVar7[2];
        plVar7[2] = lStack_2f0;
        plVar7[1] = (long)plStack_2f8;
        plStack_300 = plStack_308;
        plStack_2f8 = plStack_308;
        lStack_2f0 = lVar9;
        func_0x0001077b34d0(&plStack_308);
      }
      else {
        lVar9 = lVar16 - lVar13;
        if (lVar9 / 0xe8 < lVar17) {
          plStack_300 = &lStack_2e0;
          plStack_2f8 = &lStack_2d8;
          plStack_308 = plVar15;
          lStack_2e0 = lVar16;
          for (lVar17 = lVar9 + lVar14; lStack_2d8 = lVar16, lVar17 != lVar12;
              lVar17 = lVar17 + 0xe8) {
            func_0x0001077b3230(lVar16,lVar17);
            lVar16 = lStack_2d8 + 0xe8;
          }
          lStack_2f0 = CONCAT71(lStack_2f0._1_7_,1);
          func_0x0001077b348c(&plStack_308);
          plVar7[1] = lVar16;
          if (0 < lVar9) {
            func_0x0001077b3d58();
            func_0x0001077b38f8(lVar14,lVar9 / 0xe8,lVar13);
          }
        }
        else {
          func_0x0001077b3d58();
          func_0x0001077b38f8(lVar14,lVar17,lVar13);
        }
      }
    }
    func_0x0001077b2e04(plVar7 + 3);
    *(undefined1 *)param_2 = 1;
    return;
  }
  return;
}



/* Entry: 108195e98; end: 108195ecf;  */

void FUN_108195e98(void)

{
  return;
}



/* Entry: 108195ed0; end: 10819614b;  */

void FUN_108195ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar11 = (undefined4)param_5;
  uVar10 = (undefined4)param_4;
  uVar9 = (undefined4)param_3;
  uVar8 = (undefined4)param_2;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  lVar6 = (long)*(int *)(param_6 + 0x300) << 3;
  plVar7 = *(long **)(param_6 + 0x2f8);
  do {
    if (lVar6 == 0) {
      FUN_10819480c(param_6,param_7,param_8);
      uVar4 = *(uint *)(*(long *)(param_7 + 0x38) + 0x148);
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      FUN_10819a590(&lStack_f0,param_8,param_7,param_6 + 0x308,uVar4);
      lVar6 = 0;
      if (lStack_88 != lStack_80) {
        lVar6 = lStack_88;
      }
      lVar1 = 0;
      if (lStack_d0 != lStack_c8) {
        lVar1 = lStack_d0;
      }
      lVar2 = 0;
      if (lStack_b8 != lStack_b0) {
        lVar2 = lStack_b8;
      }
      lVar3 = 0;
      if (lStack_a0 != lStack_98) {
        lVar3 = lStack_a0;
      }
      FUN_1083ae930(&lStack_f8,lVar6,lVar1,lVar2,lVar3);
      uStack_100 = 0;
      if (lStack_f8 != 0) {
        do {
          func_0x000108196910();
          uStack_100 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      uStack_108 = 0;
      if (lStack_f0 != 0) {
        do {
          func_0x000108196910();
          uStack_108 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      uStack_d8 = 1;
      uStack_e8 = uVar8;
      uStack_e4 = uVar9;
      uStack_e0 = uVar10;
      uStack_dc = uVar11;
      FUN_1083b07f0(param_1,&uStack_100,&uStack_108,&uStack_e8);
      FUN_10811e834(&uStack_108);
      FUN_108115b2c(&uStack_100);
      FUN_108115b2c(&lStack_f8);
      FUN_10811e834(&lStack_f0);
      func_0x000107c27914(&lStack_d0);
      func_0x000107c27914(&lStack_b8);
      func_0x000107c27914(&lStack_a0);
      func_0x000107c27914(&lStack_88);
      return;
    }
    switch(*(undefined4 *)(*plVar7 + 0xc)) {
    case 0xc:
      func_0x0001081968d0();
      plVar5 = &lStack_88;
      break;
    case 0xd:
      func_0x0001081968d0();
      plVar5 = &lStack_d0;
      break;
    case 0xe:
      func_0x0001081968d0();
      plVar5 = &lStack_b8;
      break;
    case 0xf:
      func_0x0001081968d0();
      plVar5 = &lStack_a0;
      break;
    default:
      goto LAB_108195f9c;
    }
    func_0x00010065acbc(plVar5,&uStack_e8);
    func_0x000107c27914(&uStack_e8);
LAB_108195f9c:
    uVar11 = (undefined4)param_5;
    uVar10 = (undefined4)param_4;
    uVar9 = (undefined4)param_3;
    uVar8 = (undefined4)param_2;
    plVar7 = plVar7 + 1;
    lVar6 = lVar6 + -8;
  } while( true );
}



/* Entry: 10819614c; end: 10819653f;  */

void FUN_10819614c(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar7;
  undefined8 extraout_x8_02;
  uint extraout_w11;
  ulong uVar8;
  long lVar9;
  ulong extraout_x11;
  long extraout_x12;
  ulong uVar10;
  ulong extraout_x13;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar20;
  float fVar21;
  
  uVar2 = *(uint *)(param_2 + 0x338);
  bVar5 = 3 < uVar2;
  bVar6 = uVar2 == 4;
  switch(uVar2) {
  case 0:
    break;
  case 1:
    func_0x0001081968d8();
    if (bVar5 && !bVar6) {
      uVar12 = extraout_x8 - 1;
      func_0x0001081968c4();
      uVar13 = 0;
      while (uVar13 != uVar12) {
        uVar8 = 0;
        fVar14 = *(float *)(*(long *)(param_2 + 800) + uVar13 * 4);
        fVar21 = 1.0;
        if (fVar14 <= 0.0 && fVar14 <= 1.0) {
          fVar21 = 0.0;
        }
        if (0.0 < fVar14 && fVar14 <= 1.0) {
          fVar21 = fVar14;
        }
        uVar1 = uVar13 + 1;
        fVar18 = *(float *)(*(long *)(param_2 + 800) + uVar1 * 4);
        fVar14 = 1.0;
        if (fVar18 <= 0.0 && fVar18 <= 1.0) {
          fVar14 = 0.0;
        }
        if (0.0 < fVar18 && fVar18 <= 1.0) {
          fVar14 = fVar18;
        }
        uVar10 = 0;
        if (uVar12 != 0) {
          uVar10 = (uVar13 * 0xff) / uVar12;
        }
        uVar3 = 0;
        if (uVar12 != 0) {
          uVar3 = (uVar13 * 0xff + 0xff) / uVar12;
        }
        uVar11 = uVar3 - uVar10;
        for (; uVar13 = uVar1, uVar10 < uVar3; uVar10 = uVar10 + 1) {
          fVar18 = (float)NEON_fminnm((float)(double)(long)((fVar21 + ((float)uVar8 / (float)uVar11)
                                                                      * (fVar14 - fVar21)) * 255.0 +
                                                           0.5),0x4effffff);
          if (fVar18 <= -2.1474835e+09) {
            fVar18 = -2.1474835e+09;
          }
          *(char *)(*param_1 + uVar10) = (char)(int)fVar18;
          uVar8 = uVar8 + 1;
        }
      }
      fVar21 = *(float *)(*(long *)(param_2 + 0x328) + -4);
      dVar16 = 255.5;
      if (fVar21 <= 0.0 && fVar21 <= 1.0) {
        dVar16 = 0.5;
      }
      if (0.0 < fVar21 && fVar21 <= 1.0) {
        dVar16 = (double)(fVar21 * 255.0) + 0.5;
      }
code_r0x0001081964f4:
      fVar21 = (float)NEON_fminnm((float)(double)(long)dVar16,0x4effffff);
      if (fVar21 <= -2.1474835e+09) {
        fVar21 = -2.1474835e+09;
      }
      *(char *)(param_1[1] + -1) = (char)(int)fVar21;
      return;
    }
    break;
  case 2:
    func_0x0001081968d8();
    if (bVar5 && !bVar6) {
      func_0x0001081968c4();
      lVar9 = 0;
      uVar15 = 0x3f800000;
      dVar16 = 255.5;
      dVar17 = 0.5;
      uVar7 = 0x437f0000;
      while (lVar9 != extraout_x8_00 + -1) {
        fVar21 = *(float *)(*(long *)(param_2 + 800) + lVar9 * 4);
        dVar19 = dVar16;
        if (fVar21 <= 0.0 && fVar21 <= (float)uVar15) {
          dVar19 = dVar17;
        }
        fVar14 = SUB84(dVar19,0);
        if (0.0 < fVar21 && fVar21 <= (float)uVar15) {
          fVar14 = SUB84((double)(fVar21 * (float)uVar7) + dVar17,0);
        }
        func_0x0001081968f4();
        for (uVar13 = extraout_x11; uVar7 = extraout_x8_02, lVar9 = extraout_x12,
            uVar13 < extraout_x13; uVar13 = uVar13 + 1) {
          *(char *)(*param_1 + uVar13) = (char)(int)fVar14;
        }
      }
      fVar21 = *(float *)(*(long *)(param_2 + 0x328) + -4);
      if (fVar21 <= 0.0 && fVar21 <= 1.0) {
        dVar16 = 0.5;
      }
      if (0.0 < fVar21 && fVar21 <= 1.0) {
        dVar16 = (double)(fVar21 * 255.0) + 0.5;
      }
      goto code_r0x0001081964f4;
    }
    break;
  case 3:
    func_0x0001081968c4();
    uVar12 = (ulong)*(uint *)(param_2 + 0x318);
    uVar8 = (ulong)(uint)(*(float *)(param_2 + 0x310) * 255.0);
    dVar16 = 0.5;
    uVar13 = 0;
    while (uVar13 != 0x100) {
      fVar21 = SUB84((double)((float)uVar8 + (float)uVar12 * (float)uVar13) + dVar16,0);
      func_0x0001081968f4();
      uVar2 = (int)fVar21 & ((int)fVar21 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar2) {
        uVar2 = extraout_w11;
      }
      *(char *)(*param_1 + extraout_x8_01) = (char)uVar2;
      uVar13 = extraout_x8_01 + 1;
    }
    return;
  case 4:
    func_0x0001081968c4();
    uVar20 = *(undefined4 *)(param_2 + 0x30c);
    fVar21 = *(float *)(param_2 + 0x314);
    for (uVar13 = 0; uVar13 != 0x100; uVar13 = uVar13 + 1) {
      fVar14 = (float)uVar13 * 0.003921569;
      _powf(fVar14,uVar20);
      fVar14 = (float)NEON_fminnm((float)(double)(long)((fVar21 + fVar14) * 255.0 + 0.5),0x4effffff)
      ;
      if (fVar14 <= -2.1474835e+09) {
        fVar14 = -2.1474835e+09;
      }
      uVar2 = (int)fVar14 & ((int)fVar14 >> 0x1f ^ 0xffffffffU);
      if (0xfe < (int)uVar2) {
        uVar2 = 0xff;
      }
      *(char *)(*param_1 + uVar13) = (char)uVar2;
    }
    return;
  default:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x108196540);
    (*pcVar4)();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 108196540; end: 108196707;  */

undefined8 FUN_108196540(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined1 auStack_88 [24];
  byte bStack_70;
  undefined4 uStack_68;
  char cStack_64;
  undefined4 uStack_60;
  char cStack_5c;
  undefined4 uStack_58;
  char cStack_54;
  undefined4 uStack_50;
  char cStack_4c;
  undefined4 uStack_48;
  char cStack_44;
  long lStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  FUN_10819c580();
  if ((uVar1 & 1) == 0) {
    func_0x0001081968b8(&uStack_48,&UNK_10f47de60);
    if (cStack_44 == '\x01') {
      *(undefined4 *)(param_1 + 0x308) = uStack_48;
    }
    else {
      func_0x0001081968b8(&uStack_50,&UNK_10f47de6a);
      if (cStack_4c == '\x01') {
        *(undefined4 *)(param_1 + 0x30c) = uStack_50;
      }
      else {
        func_0x0001081968b8(&uStack_58,&DAT_10f47de73);
        if (cStack_54 == '\x01') {
          *(undefined4 *)(param_1 + 0x310) = uStack_58;
        }
        else {
          func_0x0001081968b8(&uStack_60,&DAT_10f63975c);
          if (cStack_5c == '\x01') {
            *(undefined4 *)(param_1 + 0x314) = uStack_60;
          }
          else {
            func_0x0001081968b8(&uStack_68,&UNK_10f47de7d);
            if (cStack_64 != '\x01') {
              FUN_1081959d0(auStack_88,&UNK_10f47de83,param_2,param_3);
              if ((bStack_70 == 1) &&
                 (func_0x0001074714f0(param_1 + 800,auStack_88), (bStack_70 & 1) != 0)) {
LAB_108196680:
                uVar3 = 1;
              }
              else {
                _strcmp(param_2,&DAT_10f6389e8);
                if ((int)param_2 == 0) {
                  lVar5 = param_3;
                  lStack_40 = param_3;
                  _strlen();
                  lStack_38 = param_3 + lVar5;
                  puVar4 = (undefined4 *)&UNK_110a2d110;
                  lVar5 = 5;
                  do {
                    plVar2 = &lStack_40;
                    func_0x00010818efe8(plVar2,*(undefined8 *)(puVar4 + -2));
                    if (((ulong)plVar2 & 1) != 0) {
                      if (lStack_40 == lStack_38) {
                        *(undefined4 *)(param_1 + 0x338) = *puVar4;
                        goto LAB_108196680;
                      }
                      break;
                    }
                    puVar4 = puVar4 + 4;
                    lVar5 = lVar5 + -1;
                  } while (lVar5 != 0);
                }
                uVar3 = 0;
              }
              func_0x000107273f7c(auStack_88);
              return uVar3;
            }
            *(undefined4 *)(param_1 + 0x318) = uStack_68;
          }
        }
      }
    }
  }
  return 1;
}



/* Entry: 108196708; end: 108196753;  */

void FUN_108196708(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  long lStack_30;
  undefined1 auStack_24 [4];
  
  _strcmp(param_3,param_2);
  if ((int)param_3 != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 4) = 0;
  lVar1 = param_4;
  lStack_38 = param_4;
  _strlen();
  lStack_30 = param_4 + lVar1;
  plVar2 = &lStack_38;
  FUN_10818fdd8(plVar2,auStack_24);
  if ((int)plVar2 != 0) {
    FUN_1081968a4(param_1,auStack_24);
  }
  return;
}



/* Entry: 108196754; end: 108196757;  */

undefined8 * FUN_108196754(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 100);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108196758; end: 10819676b;  */

void FUN_108196758(void)

{
  FUN_108196828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10819676c; end: 10819676f;  */

undefined8 * FUN_10819676c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108196770; end: 108196783;  */

void FUN_108196770(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108196784; end: 108196827;  */

undefined8 * FUN_108196784(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  int extraout_w11;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(param_1 + 0x310);
  if (puVar3 != (undefined8 *)0x0 && puVar3 != (undefined8 *)0x1138270b0) {
    do {
      func_0x000108196910();
      puVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1081955d8();
  puVar1 = puVar3;
  FUN_1083a3ca0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_1083a3ca0(puVar3);
  __Unwind_Resume();
  func_0x0001056d1ce4(puVar1 + 100);
  *puVar1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(puVar1 + 0x5f);
  *puVar1 = &PTR_DAT_110a2e170;
  FUN_10818e868(puVar1 + 2);
  return puVar1;
}



/* Entry: 108196828; end: 1081968a3;  */

undefined8 * FUN_108196828(undefined8 *param_1)

{
  func_0x0001056d1ce4(param_1 + 100);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081968a4; end: 10819692b;  */

void FUN_1081968a4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 10819692c; end: 108196af7;  */

undefined8 FUN_10819692c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_78;
  char cStack_74;
  undefined4 uStack_70;
  char cStack_6c;
  undefined4 uStack_68;
  char cStack_64;
  undefined4 uStack_60;
  char cStack_5c;
  undefined4 auStack_58 [2];
  long lStack_50;
  char cStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  FUN_1081949a0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  FUN_108194b38(auStack_58,&UNK_10f47de20,param_2,param_3);
  if (cStack_48 == '\x01') {
    *(undefined4 *)(param_1 + 0x350) = auStack_58[0];
    lVar3 = *(long *)(param_1 + 0x358);
    if (lVar3 != lStack_50) {
      *(long *)(param_1 + 0x358) = lStack_50;
      lStack_50 = lVar3;
    }
  }
  else {
    FUN_108196e30(&uStack_60,&UNK_10f47de98);
    if (cStack_5c == '\x01') {
      *(undefined4 *)(param_1 + 0x360) = uStack_60;
    }
    else {
      FUN_108196e30(&uStack_68,&UNK_10f47de9b);
      if (cStack_64 == '\x01') {
        *(undefined4 *)(param_1 + 0x364) = uStack_68;
      }
      else {
        FUN_108196e30(&uStack_70,&UNK_10f47de9e);
        if (cStack_6c == '\x01') {
          *(undefined4 *)(param_1 + 0x368) = uStack_70;
        }
        else {
          FUN_108196e30(&uStack_78,&UNK_10f47dea1);
          if (cStack_74 != '\x01') {
            _strcmp(param_2,"operator");
            if ((int)param_2 == 0) {
              lVar3 = param_3;
              lStack_40 = param_3;
              _strlen();
              lStack_38 = param_3 + lVar3;
              puVar5 = (undefined4 *)&UNK_110a2d298;
              lVar3 = 6;
              do {
                plVar2 = &lStack_40;
                func_0x00010818efe8(plVar2,*(undefined8 *)(puVar5 + -2));
                if (((ulong)plVar2 & 1) != 0) {
                  if (lStack_40 == lStack_38) {
                    *(undefined4 *)(param_1 + 0x370) = *puVar5;
                    goto LAB_108196a40;
                  }
                  break;
                }
                puVar5 = puVar5 + 4;
                lVar3 = lVar3 + -1;
              } while (lVar3 != 0);
            }
            uVar4 = 0;
            goto LAB_108196a44;
          }
          *(undefined4 *)(param_1 + 0x36c) = uStack_78;
        }
      }
    }
  }
LAB_108196a40:
  uVar4 = 1;
LAB_108196a44:
  FUN_108194e20(auStack_58);
  return uVar4;
}



/* Entry: 108196af8; end: 108196ce3;  */

void FUN_108196af8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined8 *puVar3;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_94 [20];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  FUN_10819480c();
  func_0x000108196e4c(&lStack_68);
  func_0x000108196e4c(&lStack_70);
  switch(*(undefined4 *)(param_2 + 0x370)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    uStack_78 = 0;
    if (lStack_68 != 0) {
      do {
        func_0x000108196e3c();
        uStack_78 = extraout_x8_01;
      } while (extraout_w11_01 != 0);
    }
    uStack_80 = 0;
    if (lStack_70 != 0) {
      do {
        func_0x000108196e3c();
        uStack_80 = extraout_x8_02;
      } while (extraout_w11_02 != 0);
    }
    func_0x000108196e64();
    FUN_1083aee9c(param_1,1,&uStack_78,&uStack_80,auStack_94);
    puVar3 = &uStack_78;
    puVar2 = &uStack_80;
    goto code_r0x000108196bf8;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108196ca0);
    (*pcVar1)();
  }
  uStack_a0 = 0;
  if (lStack_68 != 0) {
    do {
      func_0x000108196e3c();
      uStack_a0 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_a8 = 0;
  if (lStack_70 != 0) {
    do {
      func_0x000108196e3c();
      uStack_a8 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  func_0x000108196e64();
  FUN_1083aebac(param_1);
  puVar3 = &uStack_a0;
  puVar2 = &uStack_a8;
code_r0x000108196bf8:
  FUN_10811e834(puVar2);
  FUN_10811e834(puVar3);
  FUN_10811e834(&lStack_70);
  FUN_10811e834(&lStack_68);
  return;
}



/* Entry: 108196ce4; end: 108196ce7;  */

undefined8 * FUN_108196ce4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1083a3c7c(param_1 + 0x6b);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108196ce8; end: 108196cfb;  */

void FUN_108196ce8(void)

{
  FUN_108196e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108196cfc; end: 108196e07;  */

undefined8 * FUN_108196cfc(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long alStack_58 [2];
  undefined4 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_58[0]._0_4_ = *(undefined4 *)(param_2 + 0x308);
  alStack_58[1] = *(long *)(param_2 + 0x310);
  if (alStack_58[1] != 0 && alStack_58[1] != 0x1138270b0) {
    piVar1 = (int *)(alStack_58[1] + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_48 = *(undefined4 *)(param_2 + 0x350);
  lStack_40 = *(long *)(param_2 + 0x358);
  if ((lStack_40 != 0) && (lStack_40 != 0x1138270b0)) {
    piVar1 = (int *)(lStack_40 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1081955d8(param_1,alStack_58,2);
  lVar6 = 0x18;
  do {
    puVar5 = (undefined8 *)((long)alStack_58 + lVar6);
    FUN_1083a3c7c();
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar6 = 0x18;
  do {
    puVar5 = (undefined8 *)((long)alStack_58 + lVar6);
    FUN_1083a3c7c();
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -8);
  func_0x000108196e5c();
  FUN_1083a3c7c(puVar5 + 0x6b);
  puVar4 = puVar5;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar4 + 99);
  FUN_1083a3c7c(puVar5 + 0x62);
  *puVar5 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(puVar5 + 0x5f);
  *puVar5 = &PTR_DAT_110a2e170;
  FUN_10818e868(puVar5 + 2);
  return puVar5;
}



/* Entry: 108196e08; end: 108196e2f;  */

undefined8 * FUN_108196e08(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1083a3c7c(param_1 + 0x6b);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108196e30; end: 108196e77;  */

void FUN_108196e30(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined1 auStack_24 [4];
  
  _strcmp();
  if (unaff_w21 != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 4) = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fdd8(puVar1,auStack_24);
  if ((int)puVar1 != 0) {
    FUN_1081968a4(param_1,auStack_24);
  }
  return;
}



/* Entry: 108196e78; end: 108196fa7;  */

undefined8 FUN_108196e78(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_60;
  char cStack_5c;
  undefined4 uStack_58;
  char cStack_54;
  undefined4 uStack_50;
  char cStack_4c;
  undefined4 auStack_48 [2];
  long lStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_1081949a0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  FUN_108194b38(auStack_48,&UNK_10f47de20,param_2,param_3);
  if (cStack_38 == '\x01') {
    *(undefined4 *)(param_1 + 0x350) = auStack_48[0];
    lVar2 = *(long *)(param_1 + 0x358);
    if (lVar2 != lStack_40) {
      *(long *)(param_1 + 0x358) = lStack_40;
      lStack_40 = lVar2;
    }
  }
  else {
    FUN_108197378(&uStack_50,&UNK_10f47deb8);
    if (cStack_4c == '\x01') {
      *(undefined4 *)(param_1 + 0x360) = uStack_50;
    }
    else {
      FUN_108197378(&uStack_58,&UNK_10f47dec9);
      if (cStack_54 == '\x01') {
        *(undefined4 *)(param_1 + 0x364) = uStack_58;
      }
      else {
        FUN_108196708(&uStack_60,"scale",param_2,param_3);
        if (cStack_5c != '\x01') {
          uVar3 = 0;
          goto LAB_108196f70;
        }
        *(undefined4 *)(param_1 + 0x368) = uStack_60;
      }
    }
  }
  uVar3 = 1;
LAB_108196f70:
  FUN_108194e20(auStack_48);
  return uVar3;
}



/* Entry: 108196fa8; end: 108197053;  */

void FUN_108196fa8(undefined8 *param_1,undefined8 param_2,int param_3,long param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  _strcmp();
  if (param_3 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 4) = 0;
    lVar3 = param_4;
    lStack_40 = param_4;
    _strlen();
    lStack_38 = param_4 + lVar3;
    puVar2 = (undefined4 *)&UNK_110a2d3a0;
    lVar3 = 4;
    do {
      uVar1 = 0;
      func_0x00010818efe8(&lStack_40,*(undefined8 *)(puVar2 + -2));
      if ((uVar1 & 1) != 0) {
        if (lStack_40 != lStack_38) {
          return;
        }
        *(undefined4 *)param_1 = *puVar2;
        *(undefined1 *)((long)param_1 + 4) = 1;
        return;
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 108197054; end: 10819720f;  */

void FUN_108197054(undefined8 param_1,ulong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,long param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  long lStack_98;
  long lStack_90;
  uint auStack_88 [2];
  long lStack_80;
  long lStack_78;
  
  FUN_10819480c();
  lVar4 = param_8;
  uVar5 = param_2;
  uVar6 = param_4;
  uVar7 = param_5;
  func_0x00010819a520(param_8,param_7,param_6 + 0x308);
  func_0x00010819a554(&lStack_78,param_8,param_7,param_6 + 0x308);
  FUN_10819a590(&lStack_80,param_8,param_7,param_6 + 0x350,lVar4);
  uVar8 = *(uint *)(param_6 + 0x368);
  uVar9 = (ulong)uVar8;
  if (*(int *)(param_8 + 0x10) == 1) {
    func_0x0001081a0c84(param_7,1);
    uStack_a4 = 0x42b40000;
    auStack_88[1] = 2;
    uStack_ac = uVar6;
    uStack_a8 = uVar7;
    auStack_88[0] = uVar8;
    func_0x00010819f85c(&uStack_ac,auStack_88,2);
    uVar9 = uVar5;
  }
  uVar6 = *(undefined4 *)(param_6 + 0x360);
  uVar7 = *(undefined4 *)(param_6 + 0x364);
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_90 = lStack_80;
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_98 = lStack_78;
  uStack_ac = (undefined4)param_2;
  uStack_9c = 1;
  uStack_a8 = param_3;
  uStack_a4 = param_4;
  uStack_a0 = param_5;
  FUN_1083b11b8(param_1,uVar9,uVar6,uVar7,&lStack_90,&lStack_98,&uStack_ac);
  FUN_10811e834(&lStack_98);
  FUN_10811e834(&lStack_90);
  FUN_10811e834(&lStack_80);
  FUN_10811e834(&lStack_78);
  return;
}



/* Entry: 108197210; end: 108197223;  */

undefined4 FUN_108197210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  FUN_10819a090(auStack_30,param_3,param_2,param_1 + 0x308);
  func_0x00010819aae4();
  return uStack_28;
}



/* Entry: 108197224; end: 108197237;  */

void FUN_108197224(void)

{
  FUN_108197344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108197238; end: 108197343;  */

undefined8 * FUN_108197238(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long alStack_58 [2];
  undefined4 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_58[0]._0_4_ = *(undefined4 *)(param_2 + 0x308);
  alStack_58[1] = *(long *)(param_2 + 0x310);
  if (alStack_58[1] != 0 && alStack_58[1] != 0x1138270b0) {
    piVar1 = (int *)(alStack_58[1] + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_48 = *(undefined4 *)(param_2 + 0x350);
  lStack_40 = *(long *)(param_2 + 0x358);
  if ((lStack_40 != 0) && (lStack_40 != 0x1138270b0)) {
    piVar1 = (int *)(lStack_40 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1081955d8(param_1,alStack_58,2);
  lVar6 = 0x18;
  do {
    puVar5 = (undefined8 *)((long)alStack_58 + lVar6);
    FUN_1083a3c7c();
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  lVar6 = 0x18;
  do {
    puVar5 = (undefined8 *)((long)alStack_58 + lVar6);
    FUN_1083a3c7c();
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -8);
  func_0x000108197384();
  *puVar5 = &PTR_DAT_110a2d3e8;
  FUN_1083a3c7c(puVar5 + 0x6b);
  puVar4 = puVar5;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar4 + 99);
  FUN_1083a3c7c(puVar5 + 0x62);
  *puVar5 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(puVar5 + 0x5f);
  *puVar5 = &PTR_DAT_110a2e170;
  FUN_10818e868(puVar5 + 2);
  return puVar5;
}



/* Entry: 108197344; end: 108197377;  */

undefined8 * FUN_108197344(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110a2d3e8;
  FUN_1083a3c7c(param_1 + 0x6b);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108197378; end: 10819738b;  */

void FUN_108197378(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long unaff_x20;
  int unaff_w21;
  long lVar4;
  
  _strcmp();
  if (unaff_w21 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 4) = 0;
    lVar1 = unaff_x20;
    _strlen();
    puVar3 = (undefined4 *)&UNK_110a2d3a0;
    lVar4 = 4;
    do {
      uVar2 = 0;
      func_0x00010818efe8(&stack0xffffffffffffffc0,*(undefined8 *)(puVar3 + -2));
      if ((uVar2 & 1) != 0) {
        if (unaff_x20 != unaff_x20 + lVar1) {
          return;
        }
        *(undefined4 *)param_1 = *puVar3;
        *(undefined1 *)((long)param_1 + 4) = 1;
        return;
      }
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 10819738c; end: 1081974c3;  */

void FUN_10819738c(undefined8 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  undefined1 auStack_78 [8];
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  
  FUN_1081974e8(&fStack_70,param_6 + 0x278);
  if (fStack_70 == 2.8026e-45 && *(int *)(param_6 + 0x298) == 2) {
    fVar3 = *(float *)(param_6 + 0x29c);
    uVar1 = param_7;
    FUN_1081a08fc(param_7,&uStack_68);
    param_2 = (float)NEON_fminnm((float)(double)(long)(fVar3 * 255.0 + 0.5),0x4effffff);
    param_3 = 0xceffffff;
    if (param_2 <= -2.1474835e+09) {
      param_2 = -2.1474835e+09;
    }
    uVar2 = (uint)uVar1 & 0xffffff | (int)param_2 << 0x18;
  }
  else {
    uVar2 = 0xff000000;
  }
  FUN_10818e6a8(&uStack_68);
  FUN_1083bae14(auStack_78,uVar2);
  FUN_10819480c(param_6,param_7,param_8);
  uStack_60 = 1;
  fStack_70 = param_2;
  uStack_6c = param_3;
  uStack_68 = param_4;
  uStack_64 = param_5;
  FUN_10818d314(param_1,auStack_78,&fStack_70);
  func_0x000106f47224(auStack_78);
  return;
}



/* Entry: 1081974c4; end: 1081974c7;  */

undefined8 * FUN_1081974c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 1081974c8; end: 1081974db;  */

void FUN_1081974c8(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1081974dc; end: 1081974e7;  */

void FUN_1081974dc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1081974e8; end: 108197513;  */

undefined4 * FUN_1081974e8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_108197514(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108197514; end: 108197553;  */

undefined1 * FUN_108197514(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  FUN_108197554();
  return param_1;
}



/* Entry: 108197554; end: 10819758f;  */

void FUN_108197554(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    *param_1 = *param_2;
    piVar3 = (int *)param_2[1];
    if (piVar3 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[1] = piVar3;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 108197590; end: 10819766b;  */

undefined8 FUN_108197590(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lStack_58;
  long lStack_50;
  uint *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar4 = param_1;
  FUN_1081949a0();
  if ((uVar4 & 1) == 0) {
    _strcmp(param_2,&UNK_10f47deda);
    if ((int)param_2 == 0) {
      lVar2 = param_3;
      lStack_58 = param_3;
      _strlen();
      lStack_50 = param_3 + lVar2;
      puStack_48 = (uint *)0x0;
      lStack_40 = 0;
      uStack_38 = 0;
      plVar3 = &lStack_58;
      func_0x000108190e6c(plVar3,&puStack_48);
      if (((ulong)plVar3 & 1) == 0) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)*puStack_48;
        lVar2 = 4;
        if ((ulong)(lStack_40 - (long)puStack_48) < 5) {
          lVar2 = 0;
        }
        uVar5 = (ulong)*(uint *)((long)puStack_48 + lVar2) << 0x20;
      }
      func_0x0001056d1ce4(&puStack_48);
      if ((int)plVar3 != 0) {
        *(ulong *)(param_1 + 0x350) = uVar4 | uVar5;
        goto LAB_1081975b8;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_1081975b8:
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10819766c; end: 108197757;  */

void FUN_10819766c(undefined8 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  float param_5,long *param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  undefined1 uStack_5c;
  undefined1 auStack_58 [8];
  
  fVar4 = *(float *)(param_6 + 0x6a);
  fVar5 = *(float *)((long)param_6 + 0x354);
  func_0x0001081a0c84(param_7,*(undefined4 *)(param_8 + 0x10));
  plVar1 = param_6;
  fVar2 = param_4;
  fVar3 = param_5;
  (**(code **)(*param_6 + 0x68))(param_6,param_7,param_8);
  FUN_10819a590(auStack_58,param_8,param_7,param_6 + 0x61,plVar1);
  FUN_10819480c(param_6,param_7,param_8);
  uStack_5c = 1;
  uStack_6c = param_2;
  uStack_68 = param_3;
  fStack_64 = fVar2;
  fStack_60 = fVar3;
  FUN_108167b54(param_1,fVar4 * param_4,fVar5 * param_5,auStack_58,&uStack_6c);
  FUN_10811e834(auStack_58);
  return;
}



/* Entry: 108197758; end: 10819775b;  */

undefined8 * FUN_108197758(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 10819775c; end: 10819776f;  */

void FUN_10819775c(void)

{
  FUN_108193448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108197770; end: 10819781f;  */

void FUN_108197770(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 auStack_38 [2];
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_38[0] = *(undefined4 *)(param_2 + 0x308);
  lStack_30 = *(long *)(param_2 + 0x310);
  if (lStack_30 != 0 && lStack_30 != 0x1138270b0) {
    piVar1 = (int *)(lStack_30 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1081955d8(param_1,auStack_38,1);
  lVar4 = lStack_30;
  FUN_1083a3ca0(lStack_30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083a3ca0(lStack_30);
  FUN_108197820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)(lVar4);
  return;
}



/* Entry: 108197820; end: 108197827;  */

void FUN_108197820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 108197828; end: 10819790b;  */

undefined8 FUN_108197828(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  char cStack_50;
  undefined4 auStack_48 [2];
  long lStack_40;
  char cStack_38;
  
  uVar1 = param_1;
  FUN_1081949a0();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  FUN_10819790c(auStack_48,"xlink:href",param_2,param_3);
  if (cStack_38 == '\x01') {
    *(undefined4 *)(param_1 + 0x350) = auStack_48[0];
    lVar2 = *(long *)(param_1 + 0x358);
    if (lVar2 != lStack_40) {
      *(long *)(param_1 + 0x358) = lStack_40;
      lStack_40 = lVar2;
    }
  }
  else {
    func_0x000108197948(&uStack_58,&DAT_10f47dda1,param_2,param_3);
    if (cStack_50 != '\x01') {
      uVar3 = 0;
      goto LAB_1081978d8;
    }
    *(undefined8 *)(param_1 + 0x360) = uStack_58;
  }
  uVar3 = 1;
LAB_1081978d8:
  FUN_1081940c8(auStack_48);
  return uVar3;
}



/* Entry: 10819790c; end: 108197983;  */

void FUN_10819790c(int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [8];
  long lStack_38;
  undefined4 auStack_30 [4];
  
  FUN_108197bb4();
  if (param_1 != 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    return;
  }
  iVar1 = (int)auStack_40;
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)(unaff_x19 + 2) = 0;
  auStack_30[0] = 0;
  lVar2 = unaff_x20;
  func_0x0001081943b0();
  _strlen();
  lStack_38 = unaff_x20 + lVar2;
  FUN_10818fb90(auStack_40,auStack_30);
  if (iVar1 != 0) {
    FUN_10819401c();
  }
  func_0x000108194398();
  return;
}



/* Entry: 108197984; end: 108197abf;  */

void FUN_108197984(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,long param_7,ulong *param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_10819480c();
  uStack_40 = param_2;
  uStack_3c = param_3;
  uStack_38 = param_4;
  uStack_34 = param_5;
  FUN_10819b59c(&lStack_58,*(undefined8 *)(param_7 + 0x10),param_6 + 0x350,&uStack_40,
                *(undefined8 *)(param_6 + 0x360));
  if (lStack_58 == 0) {
    *param_1 = 0;
  }
  else {
    uStack_88 = *(undefined8 *)(lStack_58 + 0x20);
    uStack_90 = 0;
    FUN_10817500c(&uStack_90);
    if (lStack_58 != 0) {
      piVar1 = (int *)(lStack_58 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_78 = lStack_58;
    uStack_90 = uStack_90 & 0xffffff0000000000;
    uStack_88 = 0;
    uStack_80 = 0x100000001;
    uStack_68 = param_2;
    uStack_64 = param_3;
    uStack_60 = param_4;
    uStack_5c = param_5;
    FUN_1083b2030(auStack_70,&lStack_78,&uStack_68,auStack_50,&uStack_90);
    func_0x000106f47184(&lStack_78);
    uStack_88 = param_8[1];
    uStack_90 = *param_8;
    uStack_80 = CONCAT71(uStack_80._1_7_,1);
    FUN_1083b4534(param_1,auStack_70,1,&uStack_90);
    FUN_10811e834(auStack_70);
  }
  func_0x000106f47184(&lStack_58);
  return;
}



/* Entry: 108197ac0; end: 108197ac3;  */

undefined8 * FUN_108197ac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110a2d5f8;
  FUN_1083a3c7c(param_1 + 0x6b);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108197ac4; end: 108197ad7;  */

void FUN_108197ac4(void)

{
  FUN_108197ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108197ad8; end: 108197ae3;  */

void FUN_108197ad8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 108197ae4; end: 108197b7f;  */

undefined8 * FUN_108197ae4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110a2d5f8;
  FUN_1083a3c7c(param_1 + 0x6b);
  puVar1 = param_1;
  func_0x00010819434c(&UNK_110a2ce80);
  FUN_1083a3c7c(puVar1 + 99);
  FUN_1083a3c7c(param_1 + 0x62);
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108197b80; end: 108197b9b;  */

void FUN_108197b80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = uVar1;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(param_2,param_1);
  return;
}



/* Entry: 108197b9c; end: 108197bb3;  */

void FUN_108197b9c(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(param_2,param_1);
  return;
}



/* Entry: 108197bb4; end: 108197bcb;  */

void FUN_108197bb4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(param_2,param_1);
  return;
}



/* Entry: 108197bcc; end: 108197c23;  */

float FUN_108197bcc(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 0.017453292;
  fVar3 = *(float *)(param_1 + 0x30c);
  ___sincosf_stret(*(float *)(param_1 + 0x308) * 0.017453292);
  fVar2 = fVar1;
  ___sincosf_stret(fVar3 * 0.017453292);
  return fVar1 * fVar2;
}



/* Entry: 108197c24; end: 108197ee3;  */

undefined8 FUN_108197c24(ulong param_1)

{
  long unaff_x19;
  undefined4 uStack_40;
  char cStack_3c;
  undefined4 uStack_38;
  char cStack_34;
  
  func_0x000108197f38();
  if ((param_1 & 1) == 0) {
    func_0x000108197f2c(&uStack_38,&UNK_10f47dee7);
    if (cStack_34 == '\x01') {
      *(undefined4 *)(unaff_x19 + 0x308) = uStack_38;
    }
    else {
      func_0x000108197f2c(&uStack_40,&DAT_10f47deef);
      if (cStack_3c != '\x01') {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x30c) = uStack_40;
    }
  }
  return 1;
}



/* Entry: 108197ee4; end: 108197ee7;  */

undefined8 * FUN_108197ee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108197ee8; end: 108197efb;  */

void FUN_108197ee8(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108197efc; end: 108197eff;  */

undefined8 * FUN_108197efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108197f00; end: 108197f13;  */

void FUN_108197f00(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108197f14; end: 108197f17;  */

undefined8 * FUN_108197f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a2ca18;
  FUN_108191bc8(param_1 + 0x5f);
  *param_1 = &PTR_DAT_110a2e170;
  FUN_10818e868(param_1 + 2);
  return param_1;
}



/* Entry: 108197f18; end: 108197f2b;  */

void FUN_108197f18(void)

{
  FUN_108191b90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108197f2c; end: 108197f47;  */

void FUN_108197f2c(undefined8 *param_1)

{
  undefined1 *puVar1;
  int unaff_w21;
  undefined1 auStack_24 [4];
  
  _strcmp();
  if (unaff_w21 != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 4) = 0;
  _strlen();
  puVar1 = &stack0xffffffffffffffc8;
  FUN_10818fdd8(puVar1,auStack_24);
  if ((int)puVar1 != 0) {
    FUN_1081968a4(param_1,auStack_24);
  }
  return;
}



/* Entry: 108197f48; end: 10819805b;  */

undefined8 FUN_108197f48(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uStack_60;
  char cStack_5c;
  long lStack_58;
  long lStack_50;
  uint *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_1;
  FUN_1081949a0();
  if ((uVar3 & 1) == 0) {
    func_0x0001081986fc(&uStack_60,&UNK_10f47df3a);
    if (cStack_5c != '\x01') {
      _strcmp(param_2,&UNK_10f47df47);
      if ((int)param_2 == 0) {
        lVar1 = param_3;
        lStack_58 = param_3;
        _strlen();
        lStack_50 = param_3 + lVar1;
        puStack_48 = (uint *)0x0;
        lStack_40 = 0;
        uStack_38 = 0;
        plVar2 = &lStack_58;
        func_0x000108190e6c(plVar2,&puStack_48);
        if (((ulong)plVar2 & 1) == 0) {
          uVar4 = 0;
          uVar3 = 0;
        }
        else {
          uVar3 = (ulong)*puStack_48;
          lVar1 = 4;
          if ((ulong)(lStack_40 - (long)puStack_48) < 5) {
            lVar1 = 0;
          }
          uVar4 = (ulong)*(uint *)((long)puStack_48 + lVar1) << 0x20;
        }
        func_0x0001056d1ce4(&puStack_48);
        if ((int)plVar2 != 0) {
          if ((*(byte *)(param_1 + 0x35c) & 1) == 0) {
            *(undefined1 *)(param_1 + 0x35c) = 1;
          }
          *(ulong *)(param_1 + 0x354) = uVar4 | uVar3;
          return 1;
        }
      }
      return 0;
    }
    *(undefined4 *)(param_1 + 0x350) = uStack_60;
  }
  return 1;
}



/* Entry: 10819805c; end: 1081980bf;  */

void FUN_10819805c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = (long)(int)param_2[0x60] << 3;
  plVar2 = (long *)param_2[0x5f];
  while( true ) {
    if (lVar3 == 0) {
      *param_1 = 0;
      return;
    }
    iVar1 = *(int *)(*plVar2 + 0xc);
    if (iVar1 == 0x18) {
                    /* WARNING: Could not recover jumptable at 0x0001081980a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x90))();
      return;
    }
    if (iVar1 == 0x16) {
                    /* WARNING: Could not recover jumptable at 0x0001081980b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x88))();
      return;
    }
    if (iVar1 == 10) break;
    lVar3 = lVar3 + -8;
    plVar2 = plVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001081980bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))();
  return;
}



/* Entry: 1081980c0; end: 108198137;  */

undefined8 FUN_1081980c0(long param_1,undefined8 param_2)

{
  int aiStack_40 [2];
  undefined1 auStack_38 [24];
  
  FUN_1081974e8(aiStack_40,param_1 + 0x2a8);
  if (aiStack_40[0] == 2) {
    FUN_1081a08fc(param_2,auStack_38);
  }
  else {
    param_2 = 0xffffffff;
  }
  FUN_10818e6a8(auStack_38);
  return param_2;
}



/* Entry: 108198138; end: 1081981c3;  */

float FUN_108198138(float param_1,undefined8 param_2,float param_3,undefined4 param_4,
                   undefined8 param_5,undefined4 param_6)

{
  float fVar1;
  float afStack_44 [3];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  afStack_44[2] = param_3;
  fVar1 = param_1;
  func_0x0001081a0c84(param_5,param_6);
  param_1 = param_1 * afStack_44[2];
  uStack_34 = 0x42b40000;
  afStack_44[0] = param_3 * 100.0;
  afStack_44[1] = 2.8026e-45;
  uStack_38 = param_4;
  func_0x00010819f85c(afStack_44 + 2,afStack_44,2);
  return fVar1 + param_1;
}



/* Entry: 1081981c4; end: 10819823f;  */

undefined8 FUN_1081981c4(ulong param_1)

{
  long unaff_x19;
  undefined4 uStack_40;
  char cStack_3c;
  undefined4 uStack_38;
  char cStack_34;
  
  func_0x000108198834();
  if ((param_1 & 1) == 0) {
    func_0x0001081986fc(&uStack_38,&UNK_10f47df58);
    if (cStack_34 == '\x01') {
      *(undefined4 *)(unaff_x19 + 0x360) = uStack_38;
    }
    else {
      func_0x0001081986fc(&uStack_40,&UNK_10f47df17);
      if (cStack_3c != '\x01') {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x364) = uStack_40;
    }
  }
  return 1;
}



/* Entry: 108198240; end: 1081982a7;  */

void FUN_108198240(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x3;
  long unaff_x23;
  undefined4 uVar1;
  
  func_0x0001081986d4();
  FUN_108197bcc(in_x3);
  func_0x00010819884c();
  func_0x0001081986b0();
  func_0x0001081987cc();
  uVar1 = *(undefined4 *)(unaff_x23 + 0x364);
  func_0x00010819866c();
  func_0x0001081986c4();
  func_0x0001081986e8();
  func_0x000108198690();
  FUN_1083b27f4(param_1,param_2,uVar1);
  func_0x00010819874c();
  return;
}



/* Entry: 1081982a8; end: 108198307;  */

void FUN_1081982a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x23;
  undefined4 uVar1;
  
  func_0x0001081986d4();
  func_0x0001081987dc();
  func_0x0001081986b0();
  func_0x0001081987cc();
  uVar1 = *(undefined4 *)(unaff_x23 + 0x364);
  func_0x00010819866c();
  func_0x0001081986c4();
  func_0x0001081986e8();
  func_0x000108198690();
  FUN_1083b2858(param_1,param_2,uVar1);
  func_0x00010819874c();
  return;
}



/* Entry: 108198308; end: 1081983cb;  */

void FUN_108198308(void)

{
  long unaff_x23;
  
  func_0x0001081987f4();
  func_0x000108198714();
  func_0x000108198714(*(undefined4 *)(unaff_x23 + 0x314),*(undefined4 *)(unaff_x23 + 0x318),
                      *(undefined4 *)(unaff_x23 + 0x31c));
  func_0x0001081987b4();
  func_0x000108198720();
  func_0x000108198814();
  func_0x000108198858();
  func_0x000108198770();
  FUN_1083b28bc();
  func_0x000108198844();
  return;
}



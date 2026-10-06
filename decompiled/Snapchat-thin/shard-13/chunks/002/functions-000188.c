/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a347d04; end: 10a347d6f;  */

undefined8 FUN_10a347d04(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  uVar3 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)0x1;
    FUN_10a061940();
    if (puVar2 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar2;
    }
    if ((int)lVar1 != 2) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 10a347d70; end: 10a347e0f;  */

void FUN_10a347d70(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  plVar1 = *(long **)(param_2 + 0xe0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x90))();
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_10a0d09b4(auStack_50,param_3);
      FUN_10ab4ce74(param_1,lVar2,auStack_50);
      if (-1 < cStack_39) {
        return;
      }
      __ZdlPv(auStack_50[0]);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a347e10; end: 10a347e13;  */

void FUN_10a347e10(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  plVar1 = *(long **)(param_2 + 0xe0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x90))();
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_10a0d09b4(auStack_50,param_3);
      FUN_10ab4ce74(param_1,lVar2,auStack_50);
      if (-1 < cStack_39) {
        return;
      }
      __ZdlPv(auStack_50[0]);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10a347e14; end: 10a347f27;  */

void FUN_10a347e14(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  long extraout_x8;
  undefined *puVar3;
  long lVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  long lStack_48;
  long lStack_40;
  
  plVar1 = *(long **)(param_2 + 0xe0);
  if (plVar1 == (long *)0x0) {
LAB_10a347ec8:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  (**(code **)(*plVar1 + 0x90))();
  lVar4 = *plVar1;
  if (lVar4 == 0) goto LAB_10a347ec8;
  FUN_10a0d09b4(auStack_68,param_3);
  FUN_10ab4ce74(&lStack_48,lVar4,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  lVar4 = lStack_48;
  if (lStack_48 != lStack_40) {
    puVar3 = *(undefined **)(param_2 + 0x50);
    if (puVar3 == (undefined *)0x0) {
      ppuVar2 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      puVar3 = *ppuVar2;
      lVar4 = extraout_x8;
      if (puVar3 == (undefined *)0x0) goto LAB_10a347ed0;
    }
    if (*(long *)(puVar3 + 0x870) != 0) {
      FUN_10a347f28(param_1,*(long *)(puVar3 + 0x870),&lStack_48);
      goto joined_r0x00010a347ed4;
    }
  }
LAB_10a347ed0:
  *param_1 = 0;
  param_1[1] = 0;
  lStack_48 = lVar4;
joined_r0x00010a347ed4:
  if (lStack_48 == 0) {
    return;
  }
  __ZdlPv(lStack_48);
  return;
}



/* Entry: 10a347f28; end: 10a347fa3;  */

void FUN_10a347f28(undefined8 param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = *param_2;
  lStack_28 = param_2[2];
  lStack_30 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a35309c(param_1,lStack_38,lStack_30 - lStack_38 >> 2,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a347fa4; end: 10a348057;  */

void FUN_10a347fa4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 0xe0);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x90))();
    lVar3 = *plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (lVar3 != 0) {
      func_0x000107c31930(param_1,(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58) >> 5) *
                                  -0x5555555555555555);
      lVar1 = *(long *)(lVar3 + 0x60);
      for (lVar3 = *(long *)(lVar3 + 0x58); lVar3 != lVar1; lVar3 = lVar3 + 0x60) {
        FUN_10a0b4ec0(param_1,lVar3);
      }
    }
  }
  return;
}



/* Entry: 10a348058; end: 10a348107;  */

void FUN_10a348058(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 0xe0);
  if (plVar2 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x90))();
    lVar3 = *plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_10a32a7d4(param_1,(*(long *)(lVar3 + 0x60) - *(long *)(lVar3 + 0x58) >> 5) *
                            -0x5555555555555555);
      lVar1 = *(long *)(lVar3 + 0x60);
      for (lVar3 = *(long *)(lVar3 + 0x58); lVar3 != lVar1; lVar3 = lVar3 + 0x60) {
        func_0x00010a32a860(param_1,lVar3 + 0x20);
      }
    }
  }
  return;
}



/* Entry: 10a348108; end: 10a3481c3;  */

void FUN_10a348108(long *param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_10a347d04();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x38))(auStack_28);
  }
  return;
}



/* Entry: 10a3481c4; end: 10a3484df;  */

void FUN_10a3481c4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar4 = (long *)0x108;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110ba2088;
    plVar5 = plVar4 + 3;
    FUN_10a347bd4(plVar5,0,param_2 + 0xe0);
    plStack_50 = plVar5;
    plStack_48 = plVar4;
    FUN_10a0cfb64(&plStack_50,plVar4 + 8,plVar5);
    FUN_10a0cf858(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10a348434;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar3 = 0xf0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm(0xf0);
    FUN_10a347bd4();
    lStack_60 = 0;
    FUN_10a0cfa2c(&lStack_60,0);
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    FUN_10a0cfac4(&plStack_50,uVar3,&lStack_60);
    FUN_10a0cf858(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10a348434;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a348434:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10a3484e0; end: 10a34869b;  */

void FUN_10a3484e0(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110bc4bd0);
  (**(code **)(*param_2 + 600))(&lStack_40,param_2,0);
  plVar3 = &lStack_50;
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110bb37d0,0), plVar3 = &lStack_50,
     lStack_40 != 0)) {
    plStack_48 = plStack_38;
    plVar3 = &lStack_40;
    lStack_50 = lStack_40;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  plVar3 = plStack_48;
  lVar4 = lStack_50;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  *(long *)(param_1 + 0xe0) = lVar4;
  if (plVar5 != (long *)0x0) {
    plVar3 = plVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar4 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  lVar4 = *(long *)(param_1 + 0xe0);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(lVar4 + 0xb0) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(lVar4 + 0xa8) = uVar6;
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10a34869c; end: 10a3486d7;  */

void FUN_10a34869c(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010a3486d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_provider_110bc4bd0,*(undefined8 *)(param_1 + 0xe0))
  ;
  return;
}



/* Entry: 10a3486d8; end: 10a3490a3;  */

void FUN_10a3486d8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 ***pppuStack_3c8;
  ulong uStack_3c0;
  byte bStack_3b1;
  undefined8 ***pppuStack_3b0;
  ulong uStack_3a8;
  byte bStack_399;
  undefined8 ***pppuStack_398;
  ulong uStack_390;
  byte bStack_381;
  undefined8 ***pppuStack_380;
  ulong uStack_378;
  byte bStack_369;
  undefined8 ***pppuStack_368;
  ulong uStack_360;
  byte bStack_351;
  undefined8 ***pppuStack_350;
  ulong uStack_348;
  byte bStack_339;
  undefined8 ***apppuStack_338 [2];
  char cStack_321;
  undefined8 **ppuStack_320;
  undefined8 **ppuStack_318;
  undefined8 **ppuStack_310;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 **ppuStack_168;
  undefined8 uStack_160;
  undefined8 ***pppuStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined4 uStack_138;
  undefined4 uStack_134;
  ulong uStack_130;
  byte bStack_121;
  undefined4 uStack_118;
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010989f98c(&pppuStack_150,param_2 + 2);
  uStack_138 = 0;
  func_0x000107c2b054(&uStack_130,&UNK_10f650574);
  uStack_118 = 1;
  func_0x000107c2b054(auStack_110,&UNK_10f65057e);
  uStack_f8 = 2;
  func_0x000107c2b054(auStack_f0,&UNK_10f65058c);
  uStack_d8 = 3;
  func_0x000107c2b054(auStack_d0,&UNK_10f650598);
  uStack_b8 = 4;
  func_0x000107c2b054(auStack_b0,&UNK_10f65059f);
  uStack_98 = 5;
  func_0x000107c2b054(auStack_90,&UNK_10f6505a5);
  FUN_10a387cc8(&ppuStack_168,&uStack_138,6,&fStack_180);
  lVar11 = 0;
  do {
    if ((&cStack_79)[lVar11] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_90 + lVar11));
    }
    lVar11 = lVar11 + -0x20;
  } while (lVar11 != -0xc0);
  plVar6 = (long *)param_2[0x1c];
  if (plVar6 == (long *)0x0) {
    fStack_180 = 0.0;
  }
  else {
    (**(code **)(*plVar6 + 0x90))();
    fStack_180 = 0.0;
    if (*plVar6 != 0) {
      fStack_180 = *(float *)(*plVar6 + 0xec);
    }
  }
  FUN_10a3490a4(&uStack_138,&ppuStack_168,&fStack_180,&UNK_10f6505af);
  FUN_10a347d04();
  if (param_2 == (long *)0x0) {
    uStack_178 = 0xff7fffff00000000;
    fStack_180 = 0.0;
    fStack_17c = 0.0;
    uStack_170 = 0xff7fffffff7fffff;
    fVar13 = 0.0;
    fVar14 = -3.4028235e+38;
    fVar15 = -3.4028235e+38;
    fVar16 = -3.4028235e+38;
  }
  else {
    (**(code **)(*param_2 + 0x38))(&fStack_180);
    fVar16 = uStack_178._4_4_;
    fVar14 = uStack_170._4_4_;
    fVar15 = (float)uStack_170;
    fVar13 = (float)uStack_178;
  }
  fVar5 = fStack_17c;
  fVar4 = fStack_180;
  uVar1 = uStack_148;
  if (-1 < (char)bStack_139) {
    uVar1 = (ulong)bStack_139;
  }
  FUN_10a003c90(apppuStack_338,uVar1 + 0xc,&pppuStack_350);
  ppppuVar7 = (undefined8 ****)apppuStack_338[0];
  if (-1 < cStack_321) {
    ppppuVar7 = apppuStack_338;
  }
  if (uVar1 != 0) {
    ppppuVar2 = (undefined8 ****)pppuStack_150;
    if (-1 < (char)bStack_139) {
      ppppuVar2 = &pppuStack_150;
    }
    _memmove(ppppuVar7,ppppuVar2,uVar1);
  }
  puVar10 = (undefined8 *)((long)ppppuVar7 + uVar1);
  *puVar10 = 0x6f6c6f706f74202c;
  *(undefined4 *)(puVar10 + 1) = 0x203a7967;
  *(undefined1 *)((long)puVar10 + 0xc) = 0;
  puVar3 = (undefined4 *)CONCAT44(uStack_134,uStack_138);
  if (-1 < (char)bStack_121) {
    uStack_130 = (ulong)bStack_121;
    puVar3 = &uStack_138;
  }
  ppppuVar7 = apppuStack_338;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar7,puVar3,uStack_130);
  ppuStack_318 = ppppuVar7[1];
  ppuStack_320 = *ppppuVar7;
  ppuStack_310 = ppppuVar7[2];
  ppppuVar7[1] = (undefined8 ***)0x0;
  ppppuVar7[2] = (undefined8 ***)0x0;
  *ppppuVar7 = (undefined8 ***)0x0;
  pppuVar8 = &ppuStack_320;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar8,&UNK_10f6505cf,0x10);
  puStack_2f8 = pppuVar8[1];
  puStack_300 = *pppuVar8;
  puStack_2f0 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  __ZNSt3__19to_stringEf(&pppuStack_350,fVar4 - fVar16);
  ppppuVar7 = (undefined8 ****)pppuStack_350;
  if (-1 < (char)bStack_339) {
    uStack_348 = (ulong)bStack_339;
    ppppuVar7 = &pppuStack_350;
  }
  ppuVar9 = &puStack_300;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar9,ppppuVar7,uStack_348);
  uStack_2d8 = ppuVar9[1];
  uStack_2e0 = *ppuVar9;
  lStack_2d0 = (long)ppuVar9[2];
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  puVar10 = &uStack_2e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,&DAT_10f68f19e,2);
  uStack_2b8 = puVar10[1];
  uStack_2c0 = *puVar10;
  lStack_2b0 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_368,fVar5 - fVar15);
  ppppuVar7 = (undefined8 ****)pppuStack_368;
  if (-1 < (char)bStack_351) {
    uStack_360 = (ulong)bStack_351;
    ppppuVar7 = &pppuStack_368;
  }
  puVar10 = &uStack_2c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,ppppuVar7,uStack_360);
  uStack_298 = puVar10[1];
  uStack_2a0 = *puVar10;
  lStack_290 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  puVar10 = &uStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,&DAT_10f68f19e,2);
  uStack_278 = puVar10[1];
  uStack_280 = *puVar10;
  lStack_270 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_380,fVar13 - fVar14);
  ppppuVar7 = (undefined8 ****)pppuStack_380;
  if (-1 < (char)bStack_369) {
    uStack_378 = (ulong)bStack_369;
    ppppuVar7 = &pppuStack_380;
  }
  puVar10 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,ppppuVar7,uStack_378);
  uStack_258 = puVar10[1];
  uStack_260 = *puVar10;
  lStack_250 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  puVar10 = &uStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,&UNK_10f6505e0,0x11);
  uStack_238 = puVar10[1];
  uStack_240 = *puVar10;
  lStack_230 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_398,fVar4 + fVar16);
  ppppuVar7 = (undefined8 ****)pppuStack_398;
  if (-1 < (char)bStack_381) {
    uStack_390 = (ulong)bStack_381;
    ppppuVar7 = &pppuStack_398;
  }
  puVar10 = &uStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,ppppuVar7,uStack_390);
  uStack_218 = puVar10[1];
  uStack_220 = *puVar10;
  lStack_210 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  puVar10 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,&DAT_10f68f19e,2);
  uStack_1f8 = puVar10[1];
  uStack_200 = *puVar10;
  lStack_1f0 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_3b0,fVar5 + fVar15);
  ppppuVar7 = (undefined8 ****)pppuStack_3b0;
  if (-1 < (char)bStack_399) {
    uStack_3a8 = (ulong)bStack_399;
    ppppuVar7 = &pppuStack_3b0;
  }
  puVar10 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,ppppuVar7,uStack_3a8);
  uStack_1d8 = puVar10[1];
  uStack_1e0 = *puVar10;
  lStack_1d0 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  puVar10 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,&DAT_10f68f19e,2);
  uStack_1b8 = puVar10[1];
  uStack_1c0 = *puVar10;
  lStack_1b0 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  __ZNSt3__19to_stringEf(&pppuStack_3c8,fVar13 + fVar14);
  ppppuVar7 = (undefined8 ****)pppuStack_3c8;
  if (-1 < (char)bStack_3b1) {
    uStack_3c0 = (ulong)bStack_3b1;
    ppppuVar7 = &pppuStack_3c8;
  }
  puVar10 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,ppppuVar7,uStack_3c0);
  uStack_198 = puVar10[1];
  uStack_1a0 = *puVar10;
  lStack_190 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  puVar10 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar10,&DAT_10f684600,1);
  uVar12 = *puVar10;
  param_1[1] = puVar10[1];
  *param_1 = uVar12;
  param_1[2] = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if ((char)bStack_3b1 < '\0') {
    __ZdlPv(pppuStack_3c8);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if ((char)bStack_399 < '\0') {
    __ZdlPv(pppuStack_3b0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if ((char)bStack_381 < '\0') {
    __ZdlPv(pppuStack_398);
  }
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if ((char)bStack_369 < '\0') {
    __ZdlPv(pppuStack_380);
  }
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  if (lStack_290 < 0) {
    __ZdlPv(uStack_2a0);
  }
  if ((char)bStack_351 < '\0') {
    __ZdlPv(pppuStack_368);
  }
  if (lStack_2b0 < 0) {
    __ZdlPv(uStack_2c0);
  }
  if (lStack_2d0 < 0) {
    __ZdlPv(uStack_2e0);
  }
  if ((char)bStack_339 < '\0') {
    __ZdlPv(pppuStack_350);
  }
  if ((long)puStack_2f0 < 0) {
    __ZdlPv(puStack_300);
  }
  if ((long)ppuStack_310 < 0) {
    __ZdlPv(ppuStack_320);
  }
  if (cStack_321 < '\0') {
    __ZdlPv(apppuStack_338[0]);
  }
  if ((char)bStack_121 < '\0') {
    __ZdlPv(CONCAT44(uStack_134,uStack_138));
  }
  ppppuVar7 = (undefined8 ****)&ppuStack_168;
  func_0x00010a3880b4(ppppuVar7,uStack_160);
  if ((char)bStack_139 < '\0') {
    ppppuVar7 = (undefined8 ****)pppuStack_150;
    __ZdlPv(pppuStack_150);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    if (lStack_190 < 0) {
      __ZdlPv(uStack_1a0);
    }
    if ((char)bStack_3b1 < '\0') {
      __ZdlPv(pppuStack_3c8);
    }
    if (lStack_1b0 < 0) {
      __ZdlPv(uStack_1c0);
    }
    if (lStack_1d0 < 0) {
      __ZdlPv(uStack_1e0);
    }
    if ((char)bStack_399 < '\0') {
      __ZdlPv(pppuStack_3b0);
    }
    if (lStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    if (lStack_210 < 0) {
      __ZdlPv(uStack_220);
    }
    if ((char)bStack_381 < '\0') {
      __ZdlPv(pppuStack_398);
    }
    if (lStack_230 < 0) {
      __ZdlPv(uStack_240);
    }
    if (lStack_250 < 0) {
      __ZdlPv(uStack_260);
    }
    if ((char)bStack_369 < '\0') {
      __ZdlPv(pppuStack_380);
    }
    if (lStack_270 < 0) {
      __ZdlPv(uStack_280);
    }
    if (lStack_290 < 0) {
      __ZdlPv(uStack_2a0);
    }
    if ((char)bStack_351 < '\0') {
      __ZdlPv(pppuStack_368);
    }
    if (lStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
    if (lStack_2d0 < 0) {
      __ZdlPv(uStack_2e0);
    }
    if ((char)bStack_339 < '\0') {
      __ZdlPv(pppuStack_350);
    }
    if ((long)puStack_2f0 < 0) {
      __ZdlPv(puStack_300);
    }
    if ((long)ppuStack_310 < 0) {
      __ZdlPv(ppuStack_320);
    }
    if (cStack_321 < '\0') {
      __ZdlPv(apppuStack_338[0]);
    }
    if ((char)bStack_121 < '\0') {
      __ZdlPv(CONCAT44(uStack_134,uStack_138));
    }
    do {
      func_0x00010a3880b4(&ppuStack_168,uStack_160);
      if ((char)bStack_139 < '\0') {
        __ZdlPv(pppuStack_150);
      }
      __Unwind_Resume(ppppuVar7);
    } while( true );
  }
  return;
}



/* Entry: 10a3490a4; end: 10a34911f;  */

/* WARNING: Possible PIC construction at 0x0001000537dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

undefined1  [16] FUN_10a3490a4(long *param_1,long param_2,int *param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar14._0_8_ = (long *)(param_2 + 8);
  plVar8 = (long *)*auVar14._0_8_;
  plVar2 = param_1;
  if (plVar8 != (long *)0x0) {
    plVar7 = auVar14._0_8_;
    do {
      lVar9 = 8;
      if (*param_3 <= (int)plVar8[4]) {
        lVar9 = 0;
        plVar7 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + lVar9);
    } while (plVar8 != (long *)0x0);
    if ((plVar7 != auVar14._0_8_) && ((int)plVar7[4] <= *param_3)) {
      if (-1 < *(char *)((long)plVar7 + 0x3f)) {
        lVar10 = plVar7[6];
        lVar9 = plVar7[5];
        param_1[2] = plVar7[7];
        param_1[1] = lVar10;
        *param_1 = lVar9;
        auVar14._8_8_ = param_3;
        return auVar14;
      }
      param_4 = plVar7[5];
      uVar1 = plVar7[6];
      if (0x16 < uVar1) {
        if (uVar1 < 0x7ffffffffffffff7) {
          param_4 = 0x19;
          if ((uVar1 | 7) != 0x17) {
            param_4 = (uVar1 | 7) + 1;
          }
        }
        else {
          func_0x000104bd47d4();
        }
        uVar1 = param_4;
        func_0x000107c60e20(param_4);
        auVar11._8_8_ = param_4;
        auVar11._0_8_ = uVar1;
        return auVar11;
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar1;
      uVar1 = uVar1 + 1;
      goto code_r0x000107c610b8;
    }
  }
  uVar1 = param_4;
  uVar5 = param_4;
  func_0x000107c613d0();
  if (0x7ffffffffffffff7 < uVar1) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      uVar1 = 0x1132ffc88;
      func_0x000107c60e48();
      if ((int)uVar1 != 0) {
        puVar3 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uVar6 = 0x1132ffc28;
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar3;
        puVar3[1] = 0x434948504152475f;
        *puVar3 = 0x45524f43534e454c;
        puVar3[3] = 0x525f595a414c5f54;
        puVar3[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar3 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar3 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar3 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        uVar4 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        auVar15._8_8_ = uVar6;
        auVar15._0_8_ = uVar4;
        return auVar15;
      }
    }
    auVar13._8_8_ = uVar5;
    auVar13._0_8_ = uVar1;
    return auVar13;
  }
  if (uVar1 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
    if (uVar1 == 0) {
      *(undefined1 *)param_1 = 0;
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = param_1;
      return auVar12;
    }
  }
  else {
    plVar8 = (long *)0x19;
    if ((uVar1 | 7) != 0x17) {
      plVar8 = (long *)((uVar1 | 7) + 1);
    }
    plVar2 = plVar8;
    func_0x000107c60e20();
    param_1[1] = uVar1;
    param_1[2] = (ulong)plVar8 | 0x8000000000000000;
    *param_1 = (long)plVar2;
  }
code_r0x000107c610b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(plVar2,param_4,uVar1);
  auVar16._8_8_ = param_4;
  auVar16._0_8_ = plVar2;
  return auVar16;
}



/* Entry: 10a349120; end: 10a3491af;  */

void FUN_10a349120(undefined8 *param_1,undefined *param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined2 *puVar7;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined2 *puVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar4 = *(long **)(param_2 + 0xe0);
    if (plVar4 == (long *)0x0) break;
    (**(code **)(*plVar4 + 0x90))();
    lVar6 = *plVar4;
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0xe8) == 1) {
      uVar3 = *(long *)(lVar6 + 0x30) - (long)*(undefined2 **)(lVar6 + 0x28);
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar3 & 0xfffffffffffffffe;
      }
      puVar8 = (undefined2 *)0x0;
      if (uVar3 != 0) {
        puVar8 = *(undefined2 **)(lVar6 + 0x28);
      }
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar1 = (undefined2 *)(uVar2 + (long)puVar8);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if ((long)uVar2 >> 1 != 0) {
        FUN_10a14f690(puVar5,(long)uVar2 >> 1);
        puVar7 = (undefined2 *)puVar5[1];
        for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
          *puVar7 = *puVar8;
          puVar7 = puVar7 + 1;
        }
        puVar5[1] = puVar7;
      }
      return;
    }
    if (*(int *)(lVar6 + 0xe8) == 0) break;
    param_2 = &UNK_10f6505f2;
    unaff_x30 = FUN_10a3491b0;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = extraout_x8;
    unaff_x19 = puVar5;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  return;
}



/* Entry: 10a3491b0; end: 10a3491b3;  */

void FUN_10a3491b0(undefined8 *param_1,undefined *param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined2 *puVar8;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar6 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar4 = *(long **)(param_2 + 0xe0);
    if (plVar4 == (long *)0x0) break;
    (**(code **)(*plVar4 + 0x90))();
    lVar5 = *plVar4;
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0xe8) == 1) {
      uVar3 = *(long *)(lVar5 + 0x30) - (long)*(undefined2 **)(lVar5 + 0x28);
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar3 & 0xfffffffffffffffe;
      }
      puVar8 = (undefined2 *)0x0;
      if (uVar3 != 0) {
        puVar8 = *(undefined2 **)(lVar5 + 0x28);
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar1 = (undefined2 *)(uVar2 + (long)puVar8);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if ((long)uVar2 >> 1 != 0) {
        FUN_10a14f690(puVar6,(long)uVar2 >> 1);
        puVar7 = (undefined2 *)puVar6[1];
        for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
          *puVar7 = *puVar8;
          puVar7 = puVar7 + 1;
        }
        puVar6[1] = puVar7;
      }
      return;
    }
    if (*(int *)(lVar5 + 0xe8) == 0) break;
    param_2 = &UNK_10f6505f2;
    unaff_x30 = FUN_10a3491b0;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = extraout_x8;
    unaff_x19 = puVar6;
  }
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  return;
}



/* Entry: 10a3491b4; end: 10a349343;  */

void FUN_10a3491b4(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  long lVar8;
  long extraout_x8;
  undefined4 *puVar9;
  int extraout_w9;
  int iVar10;
  undefined *puVar11;
  long lVar12;
  undefined4 *puVar13;
  long lStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 *puVar14;
  
  plVar5 = *(long **)(param_2 + 0xe0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x90))();
    lVar8 = *plVar5;
    if ((lVar8 != 0) && (iVar10 = *(int *)(lVar8 + 0xe8), iVar10 != 0)) {
      puVar11 = *(undefined **)(param_2 + 0x50);
      if (puVar11 == (undefined *)0x0) {
        ppuVar6 = &PTR___tlv_bootstrap_11340df48;
        (*(code *)PTR___tlv_bootstrap_11340df48)();
        puVar11 = *ppuVar6;
        lVar8 = extraout_x8;
        iVar10 = extraout_w9;
        if (puVar11 == (undefined *)0x0) goto LAB_10a34927c;
      }
      lVar12 = *(long *)(puVar11 + 0x870);
      if (lVar12 != 0) {
        if (iVar10 == 2) {
          uVar4 = *(long *)(lVar8 + 0x30) - (long)*(undefined4 **)(lVar8 + 0x28);
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar4 & 0xfffffffffffffffc;
          }
          puVar3 = (undefined4 *)0x0;
          if (uVar4 != 0) {
            puVar3 = *(undefined4 **)(lVar8 + 0x28);
          }
          lStack_58 = 0;
          puStack_50 = (undefined4 *)0x0;
          uStack_48 = 0;
          if (uVar1 != 0) {
            FUN_109ffe174(&lStack_58,(long)uVar1 >> 2);
            puVar9 = puStack_50;
            puVar13 = puVar3;
            do {
              puVar14 = puVar13 + 1;
              puStack_50 = puVar9 + 1;
              *puVar9 = *puVar13;
              puVar9 = puStack_50;
              puVar13 = puVar14;
            } while (puVar14 != (undefined4 *)(uVar1 + (long)puVar3));
          }
          FUN_10a3493c0(&uStack_40,lVar12,&lStack_58);
          param_1[1] = uStack_38;
          *param_1 = uStack_40;
          uVar7 = 2;
        }
        else {
          if (iVar10 != 1) {
            puVar11 = &UNK_10f6505f2;
            FUN_10a00946c();
            if (lStack_58 != 0) {
              puStack_50 = (undefined4 *)lStack_58;
              __ZdlPv();
            }
            __Unwind_Resume(puVar11);
            lVar8 = *param_3;
            param_3[1] = 0;
            param_3[2] = 0;
            *param_3 = 0;
            FUN_10a3532ac();
            if (lVar8 != 0) {
              __ZdlPv();
            }
            return;
          }
          uVar4 = *(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x28);
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar4 & 0xfffffffffffffffe;
          }
          lVar2 = 0;
          if (uVar4 != 0) {
            lVar2 = *(long *)(lVar8 + 0x28);
          }
          lStack_58 = 0;
          puStack_50 = (undefined4 *)0x0;
          uStack_48 = 0;
          FUN_10a35323c(&lStack_58,lVar2,uVar1 + lVar2,(long)uVar1 >> 1);
          FUN_10a349344(&uStack_40,lVar12,&lStack_58);
          param_1[1] = uStack_38;
          *param_1 = uStack_40;
          uVar7 = 1;
        }
        uStack_38 = 0;
        uStack_40 = 0;
        *(undefined4 *)(param_1 + 2) = uVar7;
        if (lStack_58 == 0) {
          return;
        }
        puStack_50 = (undefined4 *)lStack_58;
        __ZdlPv();
        return;
      }
    }
  }
LAB_10a34927c:
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10a349344; end: 10a3493bf;  */

void FUN_10a349344(undefined8 param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = *param_2;
  lStack_28 = param_2[2];
  lStack_30 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a3532ac(param_1,lStack_38,lStack_30 - lStack_38 >> 1,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a3493c0; end: 10a34943b;  */

void FUN_10a3493c0(undefined8 param_1,long *param_2)

{
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_38 = *param_2;
  lStack_28 = param_2[2];
  lStack_30 = param_2[1];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_10a353b18(param_1,lStack_38,lStack_30 - lStack_38 >> 2,&lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a34943c; end: 10a3494bf;  */

undefined1  [16] FUN_10a34943c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f6512ca;
  return auVar1;
}



/* Entry: 10a3494c0; end: 10a349513;  */

void FUN_10a3494c0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000040;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0xffffffff00000139;
  FUN_10a349514(param_1,&uStack_58);
  FUN_10a3882b0();
  return;
}



/* Entry: 10a349514; end: 10a3495eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a3495ac) */

undefined1  [16] FUN_10a349514(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6512ca,0x13);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3881b4(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a3495ec; end: 10a34964f;  */

undefined8 * FUN_10a3495ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5458;
  param_1[2] = &PTR_DAT_110bc54f8;
  param_1[7] = &PTR_DAT_110bc5550;
  FUN_10a15206c(param_1 + 0x23);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a349650; end: 10a349663;  */

undefined8 * FUN_10a349650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5458;
  param_1[2] = &PTR_DAT_110bc54f8;
  param_1[7] = &PTR_DAT_110bc5550;
  FUN_10a15206c(param_1 + 0x23);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a349664; end: 10a3496a7;  */

void FUN_10a349664(void)

{
  FUN_10a3495ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a3496a8; end: 10a349a5b;  */

void FUN_10a3496a8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar9 = *(long *)(param_2 + 0x50);
  if (lVar9 == 0) {
    plVar6 = (long *)0x140;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110bc7948;
    plVar8 = plVar6 + 3;
    plVar7 = plVar6;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar8,0,plVar7,param_3);
    plVar6[3] = (long)&PTR_FUN_110bc5458;
    plVar6[5] = (long)&PTR_DAT_110bc54f8;
    plVar6[10] = (long)&PTR_DAT_110bc5550;
    plVar6[0x26] = 0;
    plVar6[0x27] = 0;
    plVar6[0x20] = 0;
    plVar6[0x1f] = 0;
    plVar6[0x22] = 0;
    plVar6[0x21] = 0;
    plVar6[0x24] = 0;
    plVar6[0x23] = 0;
    plStack_50 = plVar8;
    plStack_48 = plVar6;
    FUN_10a388568(&plStack_50,plVar6 + 8,plVar8);
    FUN_10a38836c(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10a349978;
    plVar8 = plStack_48 + 1;
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_48;
    } while (cVar2 != '\0');
  }
  else {
    lVar10 = *(long *)(lVar9 + 0x858);
    plVar8 = *(long **)(lVar9 + 0x860);
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar4 = (undefined8 *)0x128;
    lStack_80 = lVar10;
    plStack_78 = plVar8;
    __Znwm();
    puVar5 = puVar4;
    func_0x00010a0fda30();
    FUN_10aa7093c(puVar4,lVar9,puVar5,param_3);
    *puVar4 = &PTR_FUN_110bc5458;
    puVar4[2] = &PTR_DAT_110bc54f8;
    puVar4[7] = &PTR_DAT_110bc5550;
    puVar4[0x23] = 0;
    puVar4[0x24] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x21] = 0;
    puVar4[0x20] = 0;
    lStack_70 = lVar10;
    plStack_68 = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar7 = plVar8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    lStack_60 = lVar10;
    plStack_58 = plVar8;
    FUN_10a3884d0(&plStack_50,puVar4,&lStack_60);
    FUN_10a38836c(&plStack_90,&plStack_50);
    plVar8 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar7 = plStack_48 + 1;
      do {
        lVar9 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar7 = plStack_68 + 1;
      do {
        lVar9 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar8 = plStack_88 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar8 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar7 = plStack_48 + 1;
        do {
          lVar9 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10a349978;
    plVar8 = plStack_78 + 1;
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a349978:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plStack_90 + 0x1c,param_2 + 0xe0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plStack_90 + 0x1f,param_2 + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0x110);
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  *(undefined4 *)(plStack_90 + 0x22) = uVar1;
  return;
}



/* Entry: 10a349a5c; end: 10a349b53;  */

void FUN_10a349a5c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70acc();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bc5560,0);
  *(int *)(param_1 + 0x110) = (int)plVar1;
  (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110bc5580);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
  *(undefined8 *)(param_1 + 0x100) = uStack_30;
  *(undefined8 *)(param_1 + 0xf8) = uStack_38;
  *(undefined8 *)(param_1 + 0x108) = uStack_28;
  if (*(char *)(param_1 + 0xf7) < '\0') {
    **(undefined1 **)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(param_1 + 0xf7) = 0;
  }
  return;
}



/* Entry: 10a349b54; end: 10a349c17;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a349b54(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_38;
  undefined8 in_stack_ffffffffffffffd0;
  char in_stack_ffffffffffffffd8;
  
  if (*(char *)(param_2 + 0xf7) < '\0') {
    uVar2 = *(ulong *)(param_2 + 0xe8);
    if (uVar2 != 0) {
      lVar1 = *(long *)(param_2 + 0xe0);
      if (0x16 < uVar2) {
        if (uVar2 < 0x7ffffffffffffff7) {
          lVar1 = 0x19;
          if ((uVar2 | 7) != 0x17) {
            lVar1 = (uVar2 | 7) + 1;
          }
          puVar3 = &UNK_100033e00;
        }
        else {
          puVar3 = &UNK_100033e30;
          func_0x000104bd47d4();
        }
        puStack_38 = puVar3;
        func_0x000107c60e20(lVar1);
        return;
      }
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memmove_11034c660)(param_1,lVar1,uVar2 + 1);
      return;
    }
  }
  else if (*(char *)(param_2 + 0xf7) != '\0') {
    uVar4 = *(undefined8 *)(param_2 + 0xe0);
    param_1[1] = *(undefined8 *)(param_2 + 0xe8);
    *param_1 = uVar4;
    param_1[2] = *(undefined8 *)(param_2 + 0xf0);
    return;
  }
  FUN_10a3dda08(&puStack_38,*(undefined8 *)(param_2 + 0x50));
  FUN_10a9dd42c(param_1,puStack_38,param_2 + 0xf8);
  if (in_stack_ffffffffffffffd8 != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(in_stack_ffffffffffffffd0);
  return;
}



/* Entry: 10a349c18; end: 10a34a3a7;  */

void FUN_10a349c18(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong extraout_x8;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long **pplVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long **pplStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined4 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  code *pcStack_88;
  code *pcStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  
  if (*(char *)(*(long *)(param_1 + 0x50) + 0xd71) == '\x01') {
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)(*(undefined1 *)(*(long *)(param_1 + 0x50) + 0xe2a));
    if (((extraout_x8 & 1) == 0) && (*ppuVar6 != (undefined *)0x0)) {
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f650611,&UNK_10f65064a,0x7d,&UNK_10f650773);
      }
      if (*(char *)(param_4[1] + 8) == '\x01') {
        plVar7 = (long *)0x20;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110bc6608;
        plStack_b0 = plVar7 + 3;
        *(undefined4 *)plStack_b0 = 0;
        plStack_a8 = plVar7;
      }
      else {
        plStack_b0 = (long *)0x0;
        plStack_a8 = (long *)0x0;
      }
      plVar16 = plStack_a8;
      plVar7 = plStack_b0;
      lVar18 = *(long *)(param_1 + 0x50);
      lVar8 = lVar18;
      FUN_10a3e0428();
      puVar9 = (undefined8 *)0x58;
      lStack_b8 = lVar8;
      __Znwm();
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_DAT_110bc7998;
      puVar19 = puVar9 + 3;
      *puVar19 = *param_2;
      (**(code **)(param_2[1] + 0x10))(puVar9 + 4,param_2 + 1);
      plVar10 = (long *)0x58;
      puStack_120 = puVar19;
      plStack_118 = puVar9;
      __Znwm();
      plVar10[1] = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110bc79e8;
      plVar13 = plVar10 + 3;
      *plVar13 = *param_3;
      (**(code **)(param_3[1] + 0x10))(plVar10 + 4,param_3 + 1);
      puVar11 = (undefined8 *)0x58;
      plStack_a0 = plVar13;
      plStack_98 = plVar10;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110bc7a38;
      lVar15 = param_4[1];
      pplVar17 = (long **)(puVar11 + 3);
      *pplVar17 = (long *)*param_4;
      (**(code **)(lVar15 + 0x10))(puVar11 + 4,param_4 + 1);
      plVar12 = (long *)0x68;
      pplStack_e0 = pplVar17;
      puStack_d8 = puVar11;
      __Znwm();
      *(undefined4 *)(plVar12 + 4) = 0;
      plVar12[2] = 0;
      plVar12[3] = 0;
      *plVar12 = (long)&PTR_DAT_110bc7a88;
      plVar12[1] = 0;
      plVar12[5] = 0;
      plVar12[6] = 0;
      plVar12[7] = (long)puVar19;
      plVar12[8] = (long)puVar9;
      plVar12[9] = (long)plVar13;
      plVar12[10] = (long)plVar10;
      plVar12[0xb] = (long)pplVar17;
      plVar12[0xc] = (long)puVar11;
      plVar10 = *(long **)(lVar8 + 0x150);
      *(long **)(lVar8 + 0x150) = plVar12;
      plStack_c0 = plVar12;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
        plVar12 = plVar10;
      }
      uVar5 = SUB84(plVar12,0);
      pplStack_e0 = &plStack_c0;
      plStack_d0 = &lStack_b8;
      puStack_d8 = (undefined8 *)param_1;
      __ZSt19uncaught_exceptionsv();
      uStack_c8 = uVar5;
      FUN_10a34ab4c(&puStack_120,param_1);
      plVar12 = plStack_118;
      puVar9 = puStack_120;
      if (plVar16 != (long *)0x0) {
        plVar10 = plVar16 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_100 = plStack_c0;
      lStack_f0 = lStack_b8;
      plStack_110 = plVar7;
      plStack_108 = plVar16;
      lStack_f8 = lVar18;
      if ((*(byte *)(*(long *)(param_1 + 0x50) + 0x1f8) & 1) == 0) {
LAB_10a34a298:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a34a29c);
        (*pcVar4)();
      }
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x1b0);
      plVar10 = (long *)puVar11[2];
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      if (plVar10 == (long *)0x0) {
        plStack_118 = (long *)0x0;
        puStack_120 = (undefined8 *)0x0;
        plStack_108 = (long *)0x0;
        plStack_110 = (long *)0x0;
        plVar10 = (long *)0xf0;
        __Znwm();
        plVar10[2] = 0;
        plVar10[1] = 0x200000006;
        *(undefined2 *)(plVar10 + 3) = 4;
        plVar10[5] = 0;
        plVar10[4] = 0;
        plVar10[7] = 0;
        plVar10[6] = 0;
        plVar10[9] = 0;
        plVar10[8] = 0;
        plVar10[0xb] = 0;
        plVar10[10] = 0;
        plVar10[0xd] = 0;
        plVar10[0xc] = 0;
        plVar10[0xf] = 0;
        plVar10[0xe] = 0;
        plVar10[0x10] = 0;
        plVar10[0x11] = (long)(plVar10 + 3);
        plVar10[0x12] = 0;
        *(undefined2 *)(plVar10 + 0x13) = 0;
        *plVar10 = (long)&PTR_DAT_110bc60d8;
        plStack_a0 = plVar10 + 0x14;
        plVar10[0x15] = (long)plVar12;
        *plStack_a0 = (long)puVar9;
        plVar10[0x16] = (long)plVar7;
        plVar10[0x17] = (long)plVar16;
        plVar10[0x1a] = lStack_f0;
        plVar10[0x19] = lStack_f8;
        plVar10[0x18] = (long)plStack_100;
        *(undefined1 *)(plVar10 + 0x1c) = 1;
        plVar10[0x1d] = 0;
        pcStack_88 = FUN_10a3543b4;
        plStack_98 = plVar10;
        plStack_90 = plVar10;
      }
      else {
        pcStack_80 = (code *)0x0;
        (**(code **)(*plVar10 + 0x28))(plVar10,0,&pcStack_80);
        plVar12 = plStack_108;
        plVar16 = plStack_110;
        plVar7 = plStack_118;
        puVar9 = puStack_120;
        if (pcStack_80 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_80);
          goto LAB_10a34a298;
        }
        puStack_120 = (undefined8 *)0x0;
        plStack_118 = (long *)0x0;
        plStack_110 = (long *)0x0;
        plStack_108 = (long *)0x0;
        plVar13 = (long *)0xf8;
        __Znwm();
        plVar13[2] = 0;
        plVar13[1] = 0x200000006;
        *(undefined2 *)(plVar13 + 3) = 4;
        plVar13[5] = 0;
        plVar13[4] = 0;
        plVar13[7] = 0;
        plVar13[6] = 0;
        plVar13[9] = 0;
        plVar13[8] = 0;
        plVar13[0xb] = 0;
        plVar13[10] = 0;
        plVar13[0xd] = 0;
        plVar13[0xc] = 0;
        plVar13[0xf] = 0;
        plVar13[0xe] = 0;
        plVar13[0x10] = 0;
        plVar13[0x11] = (long)(plVar13 + 3);
        plVar13[0x12] = 0;
        *(undefined2 *)(plVar13 + 0x13) = 0;
        *plVar13 = (long)&PTR_FUN_110bc60a0;
        plVar13[0x15] = (long)plVar7;
        plVar13[0x14] = (long)puVar9;
        plVar13[0x1a] = lStack_f0;
        plVar13[0x17] = (long)plVar12;
        plVar13[0x16] = (long)plVar16;
        plVar13[0x19] = lStack_f8;
        plVar13[0x18] = (long)plStack_100;
        *(undefined1 *)(plVar13 + 0x1c) = 1;
        plVar13[0x1d] = 0;
        plVar13[0x1e] = (long)plVar10;
        if (plStack_98 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_98 + 1);
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar14 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plStack_98 + 8))();
            }
          }
        }
        plStack_98 = plVar13;
        if (plStack_90 != (long *)0x0) {
          func_0x0001092b4274(&plStack_90);
        }
        pcStack_88 = FUN_10a354384;
        plStack_a0 = plVar13 + 0x14;
        plStack_90 = plVar13;
        __ZNSt13exception_ptrD1Ev(&pcStack_80);
      }
      plVar7 = plStack_a0;
      if (plStack_a0[9] != 0) {
        func_0x0001092b4274();
      }
      plVar7[9] = (long)plStack_90;
      plStack_90 = (long *)0x0;
      pcStack_80 = pcStack_88;
      plStack_78 = plStack_a0;
      puStack_70 = puVar11;
      (**(code **)*puVar11)(puVar11,&pcStack_80);
      plVar7 = plStack_98;
      plStack_98 = (long *)0x0;
      if ((plStack_90 != (long *)0x0) &&
         (func_0x0001092b4274(&plStack_90), plStack_98 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_98 + 1);
        do {
          uVar14 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar14 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_98 + 8))();
          }
        }
      }
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
        do {
          uVar14 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar14 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar14 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      plVar7 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        plVar16 = plStack_108 + 1;
        do {
          lVar15 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_108 + 0x10))(plStack_108);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar16 = plStack_118 + 1;
        do {
          lVar15 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      FUN_10a34abdc(&pplStack_e0);
      if (plStack_a8 == (long *)0x0) {
        return;
      }
      plVar7 = plStack_a8 + 1;
      do {
        lVar15 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar16 = plStack_a8;
      } while (cVar2 != '\0');
      goto LAB_10a34a254;
    }
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f650611,&UNK_10f65064a,0x6b,&UNK_10f6506f6);
  }
  FUN_10a34a3a8(&puStack_120,param_1,0,1);
  if (*(char *)(param_2[1] + 8) == '\x01') {
    FUN_10a34a9d0(param_2,&puStack_120);
  }
  if (plStack_118 == (long *)0x0) {
    return;
  }
  plVar7 = plStack_118 + 1;
  do {
    lVar15 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar15 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    plVar16 = plStack_118;
  } while (cVar2 != '\0');
LAB_10a34a254:
  if (lVar15 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
  }
  return;
}



/* Entry: 10a34a3a8; end: 10a34a9cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a34a8b8) */
/* WARNING: Removing unreachable block (ram,0x00010a34a45c) */
/* WARNING: Removing unreachable block (ram,0x00010a34a524) */
/* WARNING: Removing unreachable block (ram,0x00010a34a8c8) */

void FUN_10a34a3a8(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *****pppppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *extraout_x8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  undefined1 auStack_270 [8];
  long *plStack_268;
  long lStack_260;
  long *plStack_258;
  undefined1 auStack_250 [8];
  long *plStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined ****ppppuStack_228;
  long *plStack_220;
  char cStack_218;
  char cStack_211;
  undefined **ppuStack_1b0;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  long lStack_100;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  undefined1 uStack_b9;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  byte bStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (*(long *)(param_2 + 0x118) == 0) {
    if (*(char *)(param_2 + 0xf7) < '\0') {
      func_0x000107c3192c(&uStack_70,*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0xe8)
                         );
    }
    else {
      uStack_68 = *(undefined8 *)(param_2 + 0xe8);
      uStack_70 = *(undefined8 *)(param_2 + 0xe0);
      uStack_60 = *(undefined8 *)(param_2 + 0xf0);
    }
    FUN_10ad0279c(&ppppuStack_228,&uStack_70);
    FUN_10a152118(param_2 + 0x118,&ppppuStack_228);
    plVar2 = plStack_220;
    if (plStack_220 != (long *)0x0) {
      plVar1 = plStack_220 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_220 + 0x10))(plStack_220);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  FUN_10a349b54(auStack_88,param_2);
  uVar8 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar8 = (ulong)bStack_71;
  }
  FUN_10a003c90(&ppppuStack_228,uVar8 + 1,&uStack_d0);
  pppppuVar6 = (undefined *****)ppppuStack_228;
  if (-1 < cStack_211) {
    pppppuVar6 = &ppppuStack_228;
  }
  if (uVar8 != 0) {
    _memmove(pppppuVar6,auStack_88,uVar8);
  }
  *(undefined2 *)((long)pppppuVar6 + uVar8) = 0x2f;
  uStack_b9 = 9;
  uStack_d0 = 0x63732e656e656373;
  uStack_c8 = 0x6e;
  pppppuVar6 = &ppppuStack_228;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppuVar6,&uStack_d0,9);
  pppuStack_98 = (undefined ***)pppppuVar6[1];
  pppuStack_a0 = (undefined ***)*pppppuVar6;
  pppuStack_90 = (undefined ***)pppppuVar6[2];
  pppppuVar6[1] = (undefined ****)0x0;
  pppppuVar6[2] = (undefined ****)0x0;
  *pppppuVar6 = (undefined ****)0x0;
  if (cStack_211 < '\0') {
    __ZdlPv(ppppuStack_228);
  }
  FUN_10a3dda08(&ppppuStack_228,*(undefined8 *)(param_2 + 0x50));
  FUN_10a9dd3c4(&uStack_d0,ppppuStack_228,&pppuStack_a0);
  if (cStack_218 == '\x01') {
    __ZNSt3__15mutex6unlockEv(plStack_220);
  }
  FUN_10a0f6cf8(&ppppuStack_228,&uStack_d0,*(undefined8 *)(param_2 + 0x50));
  ppppuStack_228 = (undefined ****)&PTR_FUN_110bc6158;
  ppuStack_1b0 = &PTR_FUN_110bc63d0;
  uStack_e0 = 0;
  pppuStack_d8 = (undefined ***)0x0;
  uStack_e8 = 0;
  if ((lStack_120 != lStack_118) &&
     (uVar8 = (ulong)*(uint *)(lStack_118 + -4),
     uVar10 = (lStack_100 - lStack_108 >> 4) * -0x5555555555555555,
     uVar8 <= uVar10 && uVar10 - uVar8 != 0)) {
    lVar9 = lStack_108 + uVar8 * 0x30;
    ppuStack_240 = &PTR_DAT_110bc5a40;
    lStack_238 = 0;
    uStack_230 = 0x3f80000000000000;
    if (param_3 != 0) {
      uStack_230 = 0x3dcccccd3f666666;
      uStack_e8 = (ulong)(*(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18)) >> 2 & 0xffffffff;
      pppuStack_d8 = &ppuStack_240;
      lStack_238 = param_3;
    }
    FUN_10a0fdf48(&ppppuStack_228,auStack_88);
    *(undefined1 *)plStack_220 = 1;
    pppppuVar6 = &ppppuStack_228;
    FUN_10a0f70fc(pppppuVar6,&PTR_DAT_110bc55a0);
    if (pppppuVar6 != (undefined *****)0x0) {
      FUN_10a0f7298(&ppppuStack_228,&PTR_DAT_110bc55a0);
      if ((lStack_120 == lStack_118) ||
         (uVar8 = (ulong)*(uint *)(lStack_118 + -4),
         uVar10 = (lStack_100 - lStack_108 >> 4) * -0x5555555555555555,
         uVar10 < uVar8 || uVar10 - uVar8 == 0)) goto LAB_10a34a8ec;
      lStack_108 = lStack_108 + uVar8 * 0x30;
      iVar13 = (int)((ulong)(*(long *)(lStack_108 + 0x20) - *(long *)(lStack_108 + 0x18)) >> 2);
      if (iVar13 != 0) {
        iVar11 = 0;
        do {
          FUN_10a0f7394(&ppppuStack_228,iVar11);
          FUN_10a34acb0(auStack_250,&ppppuStack_228,0);
          plVar2 = plStack_248;
          if (plStack_248 != (long *)0x0) {
            plVar1 = plStack_248 + 1;
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_248 + 0x10))(plStack_248);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          FUN_10a0f7508(&ppppuStack_228);
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar13);
      }
      FUN_10a0f7508(&ppppuStack_228);
    }
    *param_1 = 0;
    param_1[1] = 0;
    pppppuVar6 = &ppppuStack_228;
    FUN_10a0f70fc(pppppuVar6,&PTR_DAT_110bc63f8);
    if (pppppuVar6 != (undefined *****)0x0) {
      FUN_10a0f7298(&ppppuStack_228,&PTR_DAT_110bc63f8);
      FUN_10a34ada8(&lStack_260,&ppppuStack_228,0);
      param_1[1] = (long)plStack_258;
      *param_1 = lStack_260;
      FUN_10a0f7508(&ppppuStack_228);
    }
    pppppuVar6 = &ppppuStack_228;
    FUN_10a0f70fc(pppppuVar6,&PTR_DAT_110bc6418);
    if (pppppuVar6 != (undefined *****)0x0) {
      FUN_10a0f7298(&ppppuStack_228,&PTR_DAT_110bc6418);
      FUN_10a34acb0(&lStack_260,&ppppuStack_228,0);
      if (lStack_260 == 0) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          func_0x00010ae06f08(0,1,&UNK_10f650611,&UNK_10f6507b1,0x113,&UNK_10f650852);
        }
      }
      else {
        FUN_10a2ea178(auStack_270);
        FUN_10a32a38c(param_1,auStack_270);
        if (plStack_268 != (long *)0x0) {
          plVar2 = plStack_268 + 1;
          do {
            lVar9 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_268 + 0x10))(plStack_268);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_268);
          }
        }
      }
      FUN_10a0f7508(&ppppuStack_228);
      if (plStack_258 != (long *)0x0) {
        plVar2 = plStack_258 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
        }
      }
    }
    FUN_10a571454(plStack_220,param_4);
    if (((int)param_4 == 1) && (*(char *)(*(long *)(param_2 + 0x50) + 0xd70) == '\x01')) {
      ppuVar7 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      puVar12 = *ppuVar7;
      *ppuVar7 = extraout_x8;
      FUN_10a5b44b8(extraout_x8 + 0x200);
      *ppuVar7 = puVar12;
    }
    func_0x00010a0f618c(&ppppuStack_228);
    FUN_10a0f1ea0(&uStack_d0);
    return;
  }
LAB_10a34a8ec:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a34a8f0);
  (*pcVar5)();
}



/* Entry: 10a34a9d0; end: 10a34aa73;  */

void FUN_10a34a9d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar5)(&uStack_30,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a34aa74; end: 10a34aae3;  */

void FUN_10a34aa74(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  pcVar1 = (code *)*param_1;
  func_0x000107c2b054(auStack_38,&UNK_10f650733);
  (*pcVar1)(auStack_38,param_1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a34aae4; end: 10a34ab4b;  */

void FUN_10a34aae4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  pcVar1 = (code *)*param_1;
  func_0x000107c2b054(auStack_38);
  (*pcVar1)(auStack_38,param_1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a34ab4c; end: 10a34abdb;  */

void FUN_10a34ab4c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a34abdc; end: 10a34acaf;  */

undefined *** FUN_10a34abdc(undefined ***param_1,int param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  long *extraout_x8;
  undefined **ppuVar7;
  undefined ****ppppuVar8;
  undefined ***pppuStack_b0;
  undefined ***pppuStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = *(int *)(param_1 + 3);
  pppuVar5 = param_1;
  __ZSt19uncaught_exceptionsv();
  if (iVar2 < (int)pppuVar5) {
    ppuVar7 = param_1[1];
    func_0x000107c2c4d8(**param_1 + 8,&UNK_10f651cb0,0x4e);
    puVar6 = *param_1[2];
    puStack_58 = **param_1;
    pcStack_68 = FUN_10a3889dc;
    ppuStack_60 = &PTR_DAT_110bc7ab0;
    FUN_10a3e0e30(ppuVar7[10],puVar6,&pcStack_68);
    param_2 = (int)puVar6;
    pppuVar5 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  (*(code *)(*pppuVar5)[0x4b])(&pppuStack_b0);
  pppuVar5 = pppuStack_b0;
  ppppuVar8 = (undefined ****)extraout_x8;
  if ((pppuStack_b0 != (undefined ***)0x0) &&
     (___dynamic_cast(pppuStack_b0,&PTR_DAT_110b9fe10,&PTR_DAT_110c42c58,0), pppuVar5 = pppuStack_b0
     , ppppuVar8 = (undefined ****)extraout_x8, pppuStack_b0 != (undefined ***)0x0)) {
    *extraout_x8 = (long)pppuStack_b0;
    extraout_x8[1] = (long)pppuStack_a8;
    ppppuVar8 = &pppuStack_b0;
  }
  *ppppuVar8 = (undefined ***)0x0;
  ppppuVar8[1] = (undefined ***)0x0;
  if (pppuStack_a8 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_a8 + 1;
    do {
      ppuVar7 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuStack_a8)[2])(pppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_a8);
      pppuVar5 = pppuStack_a8;
    }
  }
  return pppuVar5;
}



/* Entry: 10a34acb0; end: 10a34ada7;  */

void FUN_10a34acb0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_2 + 600))(&lStack_40);
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110c42c58,0), lStack_40 != 0)) {
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_38;
    param_1 = &lStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a34ada8; end: 10a34ae9f;  */

void FUN_10a34ada8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_2 + 600))(&lStack_40);
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110bd3290,0), lStack_40 != 0)) {
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_38;
    param_1 = &lStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a34aea0; end: 10a34aea3;  */

void FUN_10a34aea0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ba2ec8;
  param_1[0xf] = &PTR_DAT_110ba3140;
  puStack_28 = param_1 + 0x24;
  func_0x00010a107224(&puStack_28);
  if (param_1[0x21] != 0) {
    param_1[0x22] = param_1[0x21];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x20];
  param_1[0x20] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[0x1d] != 0) {
    param_1[0x1e] = param_1[0x1d];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  FUN_10a0f6124(param_1);
  return;
}



/* Entry: 10a34aea4; end: 10a34b3eb;  */

/* WARNING: Removing unreachable block (ram,0x00010a34b224) */
/* WARNING: Removing unreachable block (ram,0x00010a34b188) */
/* WARNING: Removing unreachable block (ram,0x00010a34b2c4) */

void FUN_10a34aea4(long *param_1,undefined **param_2,undefined **param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *****pppppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  undefined ***pppuStack_140;
  undefined ***pppuStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined2 uStack_f0;
  undefined4 uStack_ec;
  undefined ****ppppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined **appuStack_c8 [2];
  undefined **appuStack_b8 [3];
  long *plStack_a0;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined8 uStack_70;
  
  ppuStack_f8 = &PTR_FUN_110bc7b80;
  uStack_ec = 0;
  uStack_f0 = 0;
  ppuVar10 = param_3;
  if (param_2 == (undefined **)0x0) {
LAB_10a34b30c:
    plVar8 = (long *)&UNK_10f650880;
    FUN_10a00946c();
    FUN_10a37985c(param_1);
    FUN_10a34cfd0(&stack0xffffffffffffff68);
    __Unwind_Resume();
    puVar14 = ppuVar10[0x10b];
    plVar13 = (long *)ppuVar10[0x10c];
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar9 = (undefined8 *)0x128;
    __Znwm();
    FUN_10aa7093c();
    *puVar9 = &PTR_FUN_110bc5458;
    puVar9[2] = &PTR_DAT_110bc54f8;
    puVar9[7] = &PTR_DAT_110bc5550;
    puVar9[0x23] = 0;
    puVar9[0x24] = 0;
    puVar9[0x1d] = 0;
    puVar9[0x1c] = 0;
    puVar9[0x1f] = 0;
    puVar9[0x1e] = 0;
    puVar9[0x21] = 0;
    puVar9[0x20] = 0;
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar13 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
    puStack_1b0 = puVar14;
    plStack_1a8 = plVar13;
    FUN_10a3884d0(&lStack_1a0,puVar9,&puStack_1b0);
    FUN_10a38836c(plVar8,&lStack_1a0);
    plVar1 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar2 = plStack_198 + 1;
      do {
        lVar12 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (plStack_1a8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if ((puVar14 != (undefined *)0x0) && (lVar12 = *plVar8, lVar12 != 0)) {
      plStack_198 = (long *)plVar8[1];
      if (plStack_198 != (long *)0x0) {
        plVar8 = plStack_198 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lStack_1a0 = lVar12;
      FUN_10aa88c30(puVar14,&lStack_1a0);
      plVar8 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar1 = plStack_198 + 1;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar8 = plVar13 + 1;
      do {
        lVar12 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    return;
  }
  ppuVar5 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110bf32c0,&PTR_DAT_110c42c58,0);
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar10 = &PTR_DAT_110bf32c0;
    ppuVar6 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110bf32c0,&PTR_DAT_110bd3290,0);
    if (ppuVar6 == (undefined **)0x0) goto LAB_10a34b30c;
    ppuVar6 = ppuVar6 + 0x24;
  }
  else {
    ppuVar6 = ppuVar5 + 10;
  }
  puVar14 = *ppuVar6;
  if (puVar14 == (undefined *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plStack_108 = (long *)0x0;
    uStack_100 = 0;
    ppuStack_110 = (undefined **)0x0;
    plVar8 = (long *)&stack0xfffffffffffffee0;
    ppuVar10 = param_2;
    FUN_10a0fff24(plVar8,param_2,&ppuStack_f8);
    if ((uStack_f0._1_1_ != '\x01') || (ppuStack_110 != (undefined **)plStack_108)) {
      ppuVar10 = &PTR_DAT_110bc55a0;
      (**(code **)(*param_4 + 0x18))(param_4,&PTR_DAT_110bc55a0);
      plVar8 = plStack_108;
      for (ppuVar6 = ppuStack_110; ppuVar6 != (undefined **)plVar8; ppuVar6 = ppuVar6 + 2) {
        ppuVar10 = (undefined **)*ppuVar6;
        (**(code **)(*param_4 + 0x128))(param_4,ppuVar10,&ppuStack_f8);
      }
      plVar8 = param_4;
      (**(code **)(*param_4 + 0x20))(param_4);
    }
    *param_1 = 0;
    param_1[1] = 0;
    if (ppuVar5 == (undefined **)0x0) {
      func_0x00010a0fda30();
      FUN_10a34b3ec(&ppppuStack_e8,puVar14,plVar8,ppuVar10);
      FUN_10a34b694(param_1,&ppppuStack_e8);
      if (ppuStack_e0 != (undefined **)0x0) {
        plVar8 = (long *)(ppuStack_e0 + 1);
        do {
          lVar12 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)((long)*ppuStack_e0 + 0x10))(ppuStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_e0);
        }
      }
      ppuVar10 = &PTR_DAT_110bc63f8;
      uVar11 = 2;
    }
    else {
      func_0x00010a0fda30();
      FUN_10a34b3ec(&ppppuStack_e8,puVar14,plVar8,ppuVar10);
      FUN_10a34b694(param_1,&ppppuStack_e8);
      if (ppuStack_e0 != (undefined **)0x0) {
        plVar8 = (long *)(ppuStack_e0 + 1);
        do {
          lVar12 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)((long)*ppuStack_e0 + 0x10))(ppuStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_e0);
        }
      }
      ppuVar10 = &PTR_DAT_110bc6418;
      uVar11 = 1;
    }
    *(undefined4 *)(*param_1 + 0x110) = uVar11;
    (**(code **)(*param_4 + 0x130))(param_4,ppuVar10,param_2,&ppuStack_f8);
    puVar14 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar14 = (undefined *)(ulong)*(byte *)((long)param_3 + 0x17);
    }
    FUN_10a003c90(&ppppuStack_e8,puVar14 + 1,&pppuStack_80);
    pppppuVar7 = (undefined *****)ppppuStack_e8;
    if (-1 < (long)uStack_d8) {
      pppppuVar7 = &ppppuStack_e8;
    }
    if (puVar14 != (undefined *)0x0) {
      ppuVar10 = (undefined **)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        ppuVar10 = param_3;
      }
      _memmove(pppppuVar7,ppuVar10,puVar14);
    }
    *(undefined2 *)((long)pppppuVar7 + (long)puVar14) = 0x2f;
    uStack_70 = (undefined ****)CONCAT17(9,(undefined7)uStack_70);
    pppuStack_80 = (undefined ***)0x63732e656e656373;
    pppuStack_78 = (undefined ***)CONCAT62(pppuStack_78._2_6_,0x6e);
    pppppuVar7 = &ppppuStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar7,&pppuStack_80,9);
    pppuStack_138 = (undefined ***)pppppuVar7[1];
    pppuStack_140 = (undefined ***)*pppppuVar7;
    pppuStack_130 = (undefined ***)pppppuVar7[2];
    pppppuVar7[1] = (undefined ****)0x0;
    pppppuVar7[2] = (undefined ****)0x0;
    *pppppuVar7 = (undefined ****)0x0;
    if ((long)uStack_d8 < 0) {
      __ZdlPv(ppppuStack_e8);
    }
    (**(code **)(*param_4 + 0x1b0))(param_4,&pppuStack_140);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*param_1 + 0xe0,param_3);
    lVar12 = *param_1;
    FUN_10a349b54(&ppppuStack_e8,lVar12);
    pppppuVar7 = &ppppuStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar7,&stack0xffffffffffffff68,9);
    pppuStack_78 = (undefined ***)pppppuVar7[1];
    pppuStack_80 = (undefined ***)*pppppuVar7;
    uStack_70 = pppppuVar7[2];
    pppppuVar7[1] = (undefined ****)0x0;
    pppppuVar7[2] = (undefined ****)0x0;
    *pppppuVar7 = (undefined ****)0x0;
    if (uStack_d8._7_1_ < '\0') {
      __ZdlPv(ppppuStack_e8);
    }
    FUN_10a0f984c(&ppppuStack_e8);
    FUN_10a0fff24(&ppppuStack_e8,lVar12,0);
    FUN_10a0fb198(&ppppuStack_e8,&pppuStack_80);
    plVar8 = plStack_a0;
    ppppuStack_e8 = (undefined ****)&PTR_FUN_110ba53b0;
    ppuStack_e0 = &PTR_FUN_110ba5578;
    plStack_a0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    appuStack_b8[0] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(appuStack_b8);
    appuStack_c8[0] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(appuStack_c8);
    uStack_d8 = &PTR_SUB_110b01d60;
    func_0x000107c2acd4(&uStack_d8);
    if ((long)pppuStack_130 < 0) {
      __ZdlPv(pppuStack_140);
    }
    ppppuStack_e8 = (undefined ****)&ppuStack_110;
    FUN_10a34cfd0(&ppppuStack_e8);
  }
  return;
}



/* Entry: 10a34b3ec; end: 10a34b693;  */

void FUN_10a34b3ec(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar8 = *(long *)(param_2 + 0x858);
  plVar7 = *(long **)(param_2 + 0x860);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)0x128;
  __Znwm();
  FUN_10aa7093c();
  *puVar5 = &PTR_FUN_110bc5458;
  puVar5[2] = &PTR_DAT_110bc54f8;
  puVar5[7] = &PTR_DAT_110bc5550;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x21] = 0;
  puVar5[0x20] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  lStack_70 = lVar8;
  plStack_68 = plVar7;
  FUN_10a3884d0(&lStack_60,puVar5,&lStack_70);
  FUN_10a38836c(param_1,&lStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plStack_68 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if ((lVar8 != 0) && (lVar6 = *param_1, lVar6 != 0)) {
    plStack_58 = (long *)param_1[1];
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_60 = lVar6;
    FUN_10aa88c30(lVar8,&lStack_60);
    plVar1 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar2 = plStack_58 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a34b694; end: 10a34b6f7;  */

undefined8 * FUN_10a34b694(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a34b6f8; end: 10a34b7ef;  */

void FUN_10a34b6f8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_2 + 600))(&lStack_40);
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110bc7ea0,0), lStack_40 != 0)) {
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_38;
    param_1 = &lStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a34b7f0; end: 10a34b9a3;  */

void FUN_10a34b7f0(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uStack_98;
  undefined2 uStack_90;
  char cStack_81;
  byte bStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  cStack_81 = '\t';
  uStack_98 = 0x69622e6174656d2f;
  uStack_90 = 0x6e;
  FUN_10a0b4df8(auStack_60,param_3,&uStack_98);
  if (cStack_81 < '\0') {
    __ZdlPv(uStack_98);
  }
  if (param_2 == 0) {
    FUN_10a0f1b8c(&uStack_98,auStack_60,0);
  }
  else {
    FUN_10a3dda08(&uStack_48,param_2);
    FUN_10a9dd660(&uStack_98,uStack_48,auStack_60);
    if (cStack_38 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_40);
    }
  }
  if ((bStack_68 & 1) == 0) {
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      plVar1 = (long *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar1 = param_3;
      }
      func_0x00010ae06f08(1,8,&UNK_10f650611,&UNK_10f6508b8,0x187,&UNK_10f65093f,in_x6,in_x7,plVar1)
      ;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10a0f1f4c(param_1,&uStack_98);
  }
  if (bStack_68 == 1) {
    FUN_10a0f1ea0(&uStack_98);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10a34b9a4; end: 10a34bb2b;  */

void FUN_10a34b9a4(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  
  if (*param_5 != param_5[1]) {
    plVar1 = (long *)0x140;
    __Znwm();
    FUN_10a0f6c60();
    (**(code **)(*plVar1 + 0x240))(plVar1,param_3);
    *(undefined1 *)plVar1[1] = 1;
    FUN_10a34b6f8(param_1,plVar1,0);
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x10f) < '\0') {
      **(undefined1 **)(lVar2 + 0xf8) = 0;
      *(undefined8 *)(lVar2 + 0x100) = 0;
    }
    else {
      *(undefined1 *)(lVar2 + 0xf8) = 0;
      *(undefined1 *)(lVar2 + 0x10f) = 0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (*param_1 + 0xe0,param_3);
    FUN_10a34bb2c(*param_1 + 0x118,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010a34baec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    plVar1 = (long *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      plVar1 = param_3;
    }
    func_0x00010ae06f08(1,8,&UNK_10f650611,&UNK_10f650983,0x193,&UNK_10f650a5a,param_8,param_9,
                        plVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a34bb2c; end: 10a34bba7;  */

undefined8 * FUN_10a34bb2c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a34bba8; end: 10a34bcd3;  */

void FUN_10a34bba8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    lStack_50 = param_3[2];
  }
  FUN_10ad0279c(auStack_40,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  FUN_10a34b7f0(&lStack_78,param_2,param_3);
  FUN_10a34b9a4(param_1,param_2,param_3,auStack_40,&lStack_78);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a34bcd4; end: 10a34be27;  */

void FUN_10a34bcd4(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f650aa0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xdd;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f650aae;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xdd;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a34be28(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f650ab6;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xdd;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a34be28();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f650abf;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xdd;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a34be28();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a34be28; end: 10a34becb;  */

undefined8 * FUN_10a34be28(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a34becc);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a34becc; end: 10a34c07b;  */

void FUN_10a34becc(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f650ac9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xdd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f650ad2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xdd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a34c07c(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f645241;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xdd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a34c07c();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f650ade;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xdd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a34c07c();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f650aed;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f64efef;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0xdd;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a34c07c();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a34c07c; end: 10a34c11f;  */

undefined8 * FUN_10a34c07c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a34c120);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a34c120; end: 10a34c267;  */

void FUN_10a34c120(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc4808;
  param_1[2] = &PTR_DAT_110bc48a8;
  param_1[7] = &PTR_FUN_110bc4900;
  if (param_1[0x34] != 0) {
    param_1[0x35] = param_1[0x34];
    __ZdlPv();
  }
  func_0x00010a10a78c(param_1 + 0x2f);
  puStack_28 = param_1 + 0x2c;
  FUN_10a34c804(&puStack_28);
  puStack_28 = param_1 + 0x29;
  FUN_10a34c844(&puStack_28);
  FUN_10a34c8b4(param_1 + 0x24);
  func_0x00010a34c8fc(param_1 + 0x1f);
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  func_0x00010aa71c88(param_1);
  __ZdlPv();
  return;
}



/* Entry: 10a34c268; end: 10a34c26f;  */

void FUN_10a34c268(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-2] = &PTR_FUN_110bc4808;
  *param_1 = &PTR_DAT_110bc48a8;
  param_1[5] = &PTR_FUN_110bc4900;
  if (param_1[0x32] != 0) {
    param_1[0x33] = param_1[0x32];
    __ZdlPv();
  }
  func_0x00010a10a78c(param_1 + 0x2d);
  puStack_28 = param_1 + 0x2a;
  FUN_10a34c804(&puStack_28);
  puStack_28 = param_1 + 0x27;
  FUN_10a34c844(&puStack_28);
  FUN_10a34c8b4(param_1 + 0x22);
  func_0x00010a34c8fc(param_1 + 0x1d);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  func_0x00010aa71c88(param_1 + -2);
  __ZdlPv();
  return;
}



/* Entry: 10a34c270; end: 10a34c313;  */

void FUN_10a34c270(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bc4808;
  param_1[-5] = &PTR_DAT_110bc48a8;
  *param_1 = &PTR_FUN_110bc4900;
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  func_0x00010a10a78c(param_1 + 0x28);
  puStack_28 = param_1 + 0x25;
  FUN_10a34c804(&puStack_28);
  puStack_28 = param_1 + 0x22;
  FUN_10a34c844(&puStack_28);
  FUN_10a34c8b4(param_1 + 0x1d);
  func_0x00010a34c8fc(param_1 + 0x18);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  func_0x00010aa71c88(param_1 + -7);
  return;
}



/* Entry: 10a34c314; end: 10a34c323;  */

void FUN_10a34c314(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110bc4808;
  param_1[-5] = &PTR_DAT_110bc48a8;
  *param_1 = &PTR_FUN_110bc4900;
  if (param_1[0x2d] != 0) {
    param_1[0x2e] = param_1[0x2d];
    __ZdlPv();
  }
  func_0x00010a10a78c(param_1 + 0x28);
  puStack_28 = param_1 + 0x25;
  FUN_10a34c804(&puStack_28);
  puStack_28 = param_1 + 0x22;
  FUN_10a34c844(&puStack_28);
  FUN_10a34c8b4(param_1 + 0x1d);
  func_0x00010a34c8fc(param_1 + 0x18);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  func_0x00010aa71c88(param_1 + -7);
  __ZdlPv();
  return;
}



/* Entry: 10a34c324; end: 10a34c3ff;  */

undefined8 * FUN_10a34c324(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bc55f8;
  func_0x00010a140010(param_1 + 9);
  puStack_28 = param_1 + 6;
  FUN_10a044868(&puStack_28);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a34c400; end: 10a34c41b;  */

long FUN_10a34c400(long param_1)

{
  return param_1 + 0xd0;
}



/* Entry: 10a34c41c; end: 10a34c42f;  */

void FUN_10a34c41c(void)

{
  FUN_10a3551f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34c430; end: 10a34c43f;  */

undefined8 FUN_10a34c430(void)

{
  return 1;
}



/* Entry: 10a34c440; end: 10a34c457;  */

void FUN_10a34c440(long param_1)

{
  FUN_10a3551f4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34c458; end: 10a34c467;  */

undefined8 FUN_10a34c458(void)

{
  return 1;
}



/* Entry: 10a34c468; end: 10a34c47f;  */

void FUN_10a34c468(long param_1)

{
  FUN_10a3551f4(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34c480; end: 10a34c487;  */

undefined8 * FUN_10a34c480(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = param_1 + -0x1c;
  *puVar2 = &PTR_DAT_110bc50b0;
  param_1[-0x1a] = &PTR_DAT_110bc5160;
  param_1[-0x15] = &PTR_DAT_110bc51b8;
  *param_1 = &PTR_FUN_110bc51d8;
  func_0x00010a081120(param_1 + 0x12);
  func_0x00010a1bb0e8(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    plVar1 = (long *)param_1[0xd];
    plVar3 = *(long **)(param_1[0xc] + 8);
    lVar4 = *plVar1;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    param_1[0xe] = 0;
    while (plVar1 != param_1 + 0xc) {
      plVar3 = (long *)plVar1[1];
      FUN_10a3552f8(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar3;
    }
  }
  plVar1 = (long *)param_1[9];
  while (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    func_0x00010a35537c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar4;
  }
  lVar4 = param_1[7];
  param_1[7] = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  func_0x00010a05a86c(param_1 + 5);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar2 = &PTR_FUN_110c3ec18;
  param_1[-0x1a] = &PTR_DAT_110c3ecb8;
  param_1[-0x15] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + -2);
  if (param_1[-3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0xc);
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + -0x71) < '\0') {
    __ZdlPv(param_1[-0x11]);
  }
  if (param_1[-0x16] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x1a] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x19);
  return puVar2;
}



/* Entry: 10a34c488; end: 10a34c49f;  */

void FUN_10a34c488(long param_1)

{
  FUN_10a3551f4(param_1 + -0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34c4a0; end: 10a34c4af;  */

undefined8 FUN_10a34c4a0(void)

{
  return 1;
}



/* Entry: 10a34c4b0; end: 10a34c66b;  */

undefined8 * FUN_10a34c4b0(undefined8 *param_1)

{
  func_0x00010a0cfa6c(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a34c66c; end: 10a34c673;  */

undefined8 FUN_10a34c66c(void)

{
  return 0;
}



/* Entry: 10a34c674; end: 10a34c73f;  */

void FUN_10a34c674(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110bc4b88;
  *param_1 = &PTR_FUN_110bc4bb0;
  if (param_1[8] != 0) {
    param_1[9] = param_1[8];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1[1]);
  return;
}



/* Entry: 10a34c740; end: 10a34c747;  */

undefined8 FUN_10a34c740(void)

{
  return 0;
}



/* Entry: 10a34c748; end: 10a34c7fb;  */

undefined8 * FUN_10a34c748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5718;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a004dac(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a34c7fc; end: 10a34c803;  */

void FUN_10a34c7fc(void)

{
  return;
}



/* Entry: 10a34c804; end: 10a34c843;  */

void FUN_10a34c804(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x00010a328368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a34c844; end: 10a34c8b3;  */

void FUN_10a34c844(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a052384();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a34c8b4; end: 10a34c943;  */

long * FUN_10a34c8b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a34c944; end: 10a34ca47;  */

/* WARNING: Possible PIC construction at 0x00010a34ca28: Changing call to branch */

undefined1  [16] FUN_10a34c944(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uStack_a0;
  ulong *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong *puStack_48;
  
  puVar2 = (ulong *)auStack_70;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (ulong *)param_1[1];
  if (param_2 <= (ulong)((long)(param_1[2] - (long)puVar4) >> 4)) {
    lVar8 = 0;
    puVar3 = param_1;
    if (param_2 != 0) {
      lVar8 = param_2 << 4;
      puVar3 = puVar4;
      _bzero(puVar4,lVar8);
      puVar4 = puVar4 + param_2 * 2;
    }
    param_1[1] = (ulong)puVar4;
    auVar11._8_8_ = lVar8;
    auVar11._0_8_ = puVar3;
    return auVar11;
  }
  lVar8 = (long)puVar4 - *param_1;
  uVar5 = param_2 + (lVar8 >> 4);
  if (uVar5 >> 0x3c == 0) {
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 3;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar7 = 0xfffffffffffffff;
    }
    puStack_48 = param_1;
    if (uVar7 == 0) {
      puVar4 = (ulong *)0x0;
    }
    else {
      puVar4 = param_1;
      FUN_10a34ca5c();
    }
    lVar8 = (long)puVar4 + lVar8;
    _bzero(lVar8,param_2 << 4);
    lVar1 = param_2 * 0x10;
    uVar5 = *param_1;
    param_2 = lVar8 - (param_1[1] - uVar5);
    _memcpy(param_2);
    uStack_58 = *param_1;
    *param_1 = param_2;
    param_1[1] = lVar8 + lVar1;
    uStack_50 = param_1[2];
    param_1[2] = (ulong)(puVar4 + uVar7 * 2);
    uStack_68 = uStack_58;
    uStack_60 = uStack_58;
    puVar4 = &uStack_68;
    uVar10 = 0x10a34ca2c;
  }
  else {
    uVar5 = param_2;
    FUN_10a34ca48();
    pcStack_78 = FUN_10a34ca48;
    puVar4 = (ulong *)&DAT_10f62a4d8;
    ppuStack_80 = ppuVar9;
    FUN_109ffde64();
    puVar2 = &uStack_a0;
    pcStack_88 = FUN_10a34ca5c;
    ppuVar9 = &puStack_90;
    uStack_a0 = param_2;
    puStack_98 = param_1;
    if (uVar5 >> 0x3c == 0) {
      lVar8 = uVar5 << 4;
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm(lVar8);
      auVar12._8_8_ = uVar5;
      auVar12._0_8_ = lVar8;
      return auVar12;
    }
    uVar10 = 0x10a34ca90;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000109ffded8();
  }
  *(ulong *)((long)puVar2 + -0x20) = param_2;
  *(ulong **)((long)puVar2 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar9;
  *(undefined8 *)((long)puVar2 + -8) = uVar10;
  uVar7 = puVar4[1];
  uVar6 = puVar4[2];
  while (uVar6 != uVar7) {
    puVar4[2] = uVar6 - 0x10;
    func_0x00010a052384();
    uVar6 = puVar4[2];
  }
  if (*puVar4 != 0) {
    __ZdlPv();
  }
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = puVar4;
  return auVar13;
}



/* Entry: 10a34ca48; end: 10a34ca5b;  */

undefined1  [16] FUN_10a34ca48(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a052384();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a34ca5c; end: 10a34cadb;  */

undefined1  [16] FUN_10a34ca5c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a052384();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a34cadc; end: 10a34caef;  */

void FUN_10a34cadc(void)

{
  FUN_10a3283b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34caf0; end: 10a34cb9f;  */

void FUN_10a34caf0(void)

{
  return;
}



/* Entry: 10a34cba0; end: 10a34cbb7;  */

void FUN_10a34cba0(long param_1)

{
  FUN_10a3283b0(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a34cbb8; end: 10a34cdc3;  */

undefined1  [16] FUN_10a34cbb8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = param_2[1];
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar5, plVar8 != (long *)0x0)) {
      do {
        uVar7 = plVar8[1];
        if (uVar7 == uVar10) {
          if (plVar8[2] == *param_2 && plVar8[3] == uVar10) {
            uVar2 = 0;
            goto LAB_10a34cd90;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x24) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x20;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  lVar6 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar6;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_10a34cdc4(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_10a34cd80;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar3 = 0;
      if (uVar9 != 0) {
        uVar3 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar3 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_10a34cd80:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a34cd90:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a34cdc4; end: 10a34ce93;  */

void FUN_10a34cdc4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_10a34ce0c:
    if (param_2 == 0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        plVar6 = (long *)*param_1;
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          lVar4 = plVar6[1];
          lVar3 = lVar2;
          if (lVar4 != lVar2) {
            do {
              lVar4 = lVar4 + -0x10;
              func_0x00010a0536d4();
            } while (lVar4 != lVar2);
            lVar3 = *(long *)*param_1;
          }
          plVar6[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar3);
          return;
        }
        return;
      }
      lVar2 = param_2 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar2;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar2 = *param_1;
            if (*(long *)(lVar2 + uVar9 * 8) == 0) {
              *(long **)(lVar2 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar2 + uVar9 * 8);
              **(long **)(lVar2 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_10a34ce0c;
  }
  return;
}



/* Entry: 10a34ce94; end: 10a34cfcf;  */

void FUN_10a34ce94(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      plVar7 = (long *)*param_1;
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar4 = plVar7[1];
        lVar3 = lVar2;
        if (lVar4 != lVar2) {
          do {
            lVar4 = lVar4 + -0x10;
            func_0x00010a0536d4();
          } while (lVar4 != lVar2);
          lVar3 = *(long *)*param_1;
        }
        plVar7[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar3);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar10 * 8) == 0) {
            *(long **)(lVar2 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + uVar10 * 8);
            **(long **)(lVar2 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}



/* Entry: 10a34cfd0; end: 10a34d03f;  */

void FUN_10a34cfd0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a0536d4();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a34d040; end: 10a34d1db;  */

void FUN_10a34d040(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < param_4) {
    plVar4 = param_1;
    FUN_10a34d1dc();
    if (param_4 >> 0x3c != 0) {
      FUN_10a34ca48();
      lVar9 = *plVar4;
      if (lVar9 != 0) {
        lVar5 = plVar4[1];
        lVar7 = lVar9;
        if (lVar5 != lVar9) {
          do {
            lVar5 = lVar5 + -0x10;
            func_0x00010a052384();
          } while (lVar5 != lVar9);
          lVar7 = *plVar4;
        }
        plVar4[1] = lVar9;
        __ZdlPv(lVar7);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      return;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    func_0x00010a34d238(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar9 = param_2[1];
      uVar11 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = (long)puVar6 - (long)puVar10;
    if (param_4 <= (ulong)(lVar9 >> 4)) {
      if (param_2 != param_3) {
        do {
          func_0x00010a34d270(puVar10,param_2);
          param_2 = param_2 + 2;
          puVar10 = puVar10 + 2;
        } while (param_2 != param_3);
        puVar6 = (undefined8 *)param_1[1];
      }
      while (puVar6 != puVar10) {
        puVar6 = puVar6 + -2;
        func_0x00010a052384();
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + lVar9);
    if (puVar6 != puVar10) {
      do {
        func_0x00010a34d270(puVar10,param_2);
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    for (; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar9 = puVar1[1];
      uVar11 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10a34d1dc; end: 10a34d2eb;  */

void FUN_10a34d1dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a052384();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a34d2ec; end: 10a34d427;  */

void FUN_10a34d2ec(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  plVar2 = param_1;
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_4) {
    plVar1 = param_1;
    FUN_10a34d428();
    if (param_4 >> 0x3c != 0) {
      FUN_10a34d61c();
      param_1[1] = param_4;
      __Unwind_Resume();
      if (*plVar1 != 0) {
        func_0x00010a328368();
        __ZdlPv(*plVar1);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    uVar3 = param_1[2] - *param_1 >> 3;
    if (uVar3 <= param_4) {
      uVar3 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar3 = 0xfffffffffffffff;
    }
    func_0x00010a34d460(param_1,uVar3);
    func_0x00010a34d498(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar4 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar4 >> 4)) {
      FUN_10a34d59c(&uStack_41,param_2,param_3);
      for (lVar4 = param_1[1]; lVar4 != param_2; lVar4 = lVar4 + -0x10) {
        if (*(long *)(lVar4 + -8) != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10a34d59c(&uStack_42,param_2,param_2 + lVar4);
    func_0x00010a34d498(param_1,param_2 + lVar4,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10a34d428; end: 10a34d527;  */

void FUN_10a34d428(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010a328368();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a34d528; end: 10a34d55b;  */

long FUN_10a34d528(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a34d55c(param_1);
  }
  return param_1;
}



/* Entry: 10a34d55c; end: 10a34d59b;  */

void FUN_10a34d55c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x10) {
    if (*(long *)(lVar1 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return;
}



/* Entry: 10a34d59c; end: 10a34d61b;  */

undefined1  [16]
FUN_10a34d59c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar4 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar7 = param_2[1];
    uVar6 = *param_2;
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = param_4[1];
    param_4[1] = uVar7;
    *param_4 = uVar6;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_4 = param_4 + 2;
    puVar4 = param_3;
  }
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a34d61c; end: 10a34d62f;  */

void FUN_10a34d61c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar2 = *(long **)(puVar1 + 0x60);
  FUN_10a34d694();
                    /* WARNING: Could not recover jumptable at 0x00010a34d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10a34d630; end: 10a34d693;  */

void FUN_10a34d630(long param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  plVar1 = *(long **)(param_1 + 0x60);
  FUN_10a34d694();
                    /* WARNING: Could not recover jumptable at 0x00010a34d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a34d694; end: 10a34de5b;  */

void FUN_10a34d694(long *param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  undefined *extraout_x8;
  undefined *puVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  long lStack_168;
  undefined8 ***pppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 uStack_148;
  undefined8 ***pppuStack_140;
  long *plStack_138;
  undefined1 uStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 ***pppuStack_108;
  long *plStack_100;
  char cStack_f1;
  long *plStack_f0;
  long *plStack_e8;
  code **ppcStack_e0;
  int iStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined ***pppuStack_b8;
  long *plStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  long lStack_88;
  code **ppcStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 10) & 1) == 0) goto LAB_10a34dbf8;
  lStack_168 = param_1[0xb];
  param_1[0xb] = 0;
  pcStack_a0 = (code *)&UNK_10f653c20;
  ppuStack_98 = (undefined **)0x21;
  if (*(long *)(*(long *)(*(long *)(*param_1 + 0x50) + 0x100) + 0x260) == 0) {
    FUN_10a0edfc4(&pcStack_a0);
    goto LAB_10a34dbf8;
  }
  ppuVar7 = &PTR___tlv_bootstrap_11340dee8;
  (*(code *)PTR___tlv_bootstrap_11340dee8)();
  puVar14 = *ppuVar7;
  *ppuVar7 = extraout_x8;
  ppuVar8 = ppuVar7;
  __ZNSt3__16chrono12steady_clock3nowEv();
  pppuStack_b8 = &ppuStack_a8;
  lStack_90 = param_1[2];
  plStack_b0 = param_1;
  ppuStack_a8 = ppuVar8;
  if (lStack_90 != 0) {
    lStack_88 = param_1[3];
    if (lStack_88 != 0) {
      plVar10 = (long *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppcStack_e0 = (code **)param_1[4];
    plStack_e8 = (long *)0x0;
    pcStack_a0 = FUN_10a34e488;
    ppuStack_98 = &PTR_FUN_110bc59e8;
    plStack_f0 = (long *)0x0;
    ppcStack_80 = ppcStack_e0;
    FUN_10a3e05f0(param_1[5],param_1[6],&pcStack_a0);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  ppuStack_98 = (undefined **)param_1[1];
  pcStack_a0 = (code *)*param_1;
  if (param_1[1] != 0) {
    plVar10 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_88 = param_1[8];
  lStack_90 = param_1[7];
  if (param_1[8] != 0) {
    plVar10 = (long *)(param_1[8] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppcStack_80 = (code **)param_1[4];
  plStack_c8 = (long *)param_1[1];
  lStack_d0 = *param_1;
  lStack_c0 = (long)ppcStack_80;
  if (param_1[1] != 0) {
    plVar10 = (long *)(param_1[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_c0 = param_1[4];
  }
  lVar9 = param_1[5];
  FUN_10a3e03a0(lVar9,param_1[6]);
  iVar6 = (int)lVar9;
  ppcStack_e0 = &pcStack_a0;
  plStack_f0 = param_1;
  plStack_e8 = param_1 + 6;
  __ZSt19uncaught_exceptionsv();
  iStack_d8 = iVar6;
  FUN_10ad055a0();
  if (iVar6 == 0) {
LAB_10a34d86c:
    FUN_10a329d10(&pppuStack_140,*param_1,0,param_1[2],0);
    *(char *)(pppuStack_140 + 1) = '\x01';
    for (ppppuVar13 = (undefined8 ****)pppuStack_140[0x33];
        ppppuVar13 != (undefined8 ****)(pppuStack_140 + 0x32);
        ppppuVar13 = (undefined8 ****)ppppuVar13[1]) {
      FUN_10a3e7798(ppppuVar13[2],1);
    }
    func_0x00010a34e054(param_1[4] + 0x28,&pppuStack_140);
    plVar10 = plStack_138;
    if (plStack_138 != (long *)0x0) {
      plVar1 = plStack_138 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    FUN_10a34e0b8(&plStack_f0);
    plVar10 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar1 = plStack_c8 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (lStack_88 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    ppuVar8 = ppuStack_98;
    if (ppuStack_98 != (undefined **)0x0) {
      ppuVar2 = ppuStack_98 + 1;
      do {
        puVar11 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 == (undefined *)0x0) {
        (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    FUN_10a34e370(&pppuStack_b8);
    lVar9 = lStack_168;
    *ppuVar7 = puVar14;
    plVar10 = (long *)(lStack_168 + 0x10);
    do {
      lVar12 = *plVar10;
      if (lVar12 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = 2;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          FUN_109d1b4dc(lStack_168 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
    if ((char)param_1[10] == '\x01') {
      if (param_1[8] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a35b840(param_1 + 2);
      FUN_10a359764(param_1);
      *(undefined1 *)(param_1 + 10) = 0;
    }
    lStack_168 = 0;
    if ((lVar9 != 0) && (func_0x0001092b4274(&lStack_168,lVar9), lStack_168 != 0)) {
      func_0x0001092b4274(&lStack_168);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar8 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar8 == (undefined *)0x0) {
      ppuVar8 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar10 = (long *)*ppuVar8;
      if ((plVar10 == (long *)0x0) || ((**(code **)(*plVar10 + 0x18))(), plVar10 == (long *)0x0))
      goto LAB_10a34d86c;
      plVar10 = plVar10 + 7;
    }
    else {
      plVar10 = (long *)(*ppuVar8 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) goto LAB_10a34d86c;
  }
  func_0x000107c2b054(&pppuStack_108,&UNK_10f650bcc);
  lVar9 = *(long *)(*(long *)(*param_1 + 0x50) + 0x100);
  if (*(char *)(lVar9 + 0x21f) < '\0') {
    func_0x000107c3192c(&pppuStack_120,*(undefined8 *)(lVar9 + 0x208),*(undefined8 *)(lVar9 + 0x210)
                       );
  }
  else {
    lStack_118 = *(long *)(lVar9 + 0x210);
    pppuStack_120 = *(undefined8 ****)(lVar9 + 0x208);
    uStack_110 = *(long *)(lVar9 + 0x218);
  }
  if (cStack_f1 < '\0') {
    pppuStack_140 = (undefined8 ***)"null";
    if (plStack_100 != (long *)0x0) {
      pppuStack_140 = pppuStack_108;
    }
  }
  else {
    pppuStack_140 = (undefined8 ***)"null";
    if (cStack_f1 != '\0') {
      pppuStack_140 = &pppuStack_108;
    }
  }
  if (uStack_110 < 0) {
    pppuStack_160 = (undefined8 ***)"null";
    if (lStack_118 != 0) {
      pppuStack_160 = pppuStack_120;
    }
  }
  else {
    pppuStack_160 = (undefined8 ***)"null";
    if (uStack_110._7_1_ != '\0') {
      pppuStack_160 = &pppuStack_120;
    }
  }
  FUN_10a224324(&pppuStack_140,&pppuStack_160);
  if (cStack_f1 < '\0') {
    if (plStack_100 != (long *)0x0) {
      func_0x000107c3192c(&pppuStack_140,pppuStack_108);
      goto LAB_10a34db9c;
    }
LAB_10a34db80:
    uStack_128 = 0;
    pppuStack_140 = (undefined8 ***)((ulong)pppuStack_140 & 0xffffffffffffff00);
  }
  else {
    if (cStack_f1 == '\0') goto LAB_10a34db80;
    plStack_138 = plStack_100;
    pppuStack_140 = pppuStack_108;
LAB_10a34db9c:
    uStack_128 = 1;
  }
  if (uStack_110 < 0) {
    if (lStack_118 != 0) {
      func_0x000107c3192c(&pppuStack_160,pppuStack_120);
      goto LAB_10a34dbe4;
    }
LAB_10a34dbc8:
    uStack_148 = 0;
    pppuStack_160 = (undefined8 ***)((ulong)pppuStack_160 & 0xffffffffffffff00);
  }
  else {
    if (uStack_110._7_1_ == '\0') goto LAB_10a34dbc8;
    lStack_158 = lStack_118;
    pppuStack_160 = pppuStack_120;
    lStack_150 = uStack_110;
LAB_10a34dbe4:
    uStack_148 = 1;
  }
  FUN_10a234a0c(&pppuStack_140,&pppuStack_160);
LAB_10a34dbf8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a34dbfc);
  (*pcVar5)();
}



/* Entry: 10a34de5c; end: 10a34e0b7;  */

undefined8 * FUN_10a34de5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc5988;
  if (param_1[0x1f] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    if (param_1[0x1c] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a35b840(param_1 + 0x16);
    FUN_10a359764(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a34e0b8; end: 10a34e1b3;  */

undefined *** FUN_10a34e0b8(undefined ***param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  code **unaff_x20;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_108;
  undefined8 *puStack_100;
  undefined ***pppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_98;
  code **ppcStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)pppuVar5 <= *(int *)(param_1 + 3)) {
    uVar6 = *(undefined8 *)(**param_1 + 0x50);
    puVar8 = *param_1[1];
    ppuVar9 = param_1[2];
    pcStack_68 = FUN_10a34e4fc;
    ppuStack_60 = &PTR_FUN_110bc5a00;
    puStack_50 = ppuVar9[1];
    puStack_58 = *ppuVar9;
    *ppuVar9 = (undefined *)0x0;
    ppuVar9[1] = (undefined *)0x0;
    puStack_40 = ppuVar9[3];
    puStack_48 = ppuVar9[2];
    if (ppuVar9[3] != (undefined *)0x0) {
      plVar1 = (long *)(ppuVar9[3] + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x20 = &pcStack_68;
    puStack_38 = ppuVar9[4];
    FUN_10a3e0c90(uVar6,puVar8,&pcStack_68);
    pppuVar5 = &ppuStack_60;
    (*(code *)*ppuStack_60)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(unaff_x20 + 1);
  pppuVar7 = pppuVar5;
  __Unwind_Resume();
  pcStack_78 = FUN_10a34e1b4;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(**pppuVar7 + 0x50);
  puVar8 = *pppuVar7[1];
  ppuVar9 = pppuVar7[2];
  uStack_d8 = 0x10a34e670;
  ppuStack_d0 = &PTR_DAT_110bc5a18;
  puStack_c0 = ppuVar9[1];
  puStack_c8 = *ppuVar9;
  *ppuVar9 = (undefined *)0x0;
  ppuVar9[1] = (undefined *)0x0;
  puStack_b8 = ppuVar9[2];
  ppcStack_90 = unaff_x20;
  pppuStack_88 = pppuVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10a3e0e30(uVar6,puVar8,&uStack_d8);
  pppuVar5 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  pppuVar7 = pppuVar5;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a34e27c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(**pppuVar7 + 0x50);
  puVar8 = *pppuVar7[1];
  ppuVar9 = pppuVar7[2];
  uStack_148 = 0x10a34e670;
  ppuStack_140 = &PTR_DAT_110bc5a18;
  puStack_130 = ppuVar9[1];
  puStack_138 = *ppuVar9;
  *ppuVar9 = (undefined *)0x0;
  ppuVar9[1] = (undefined *)0x0;
  puStack_128 = ppuVar9[2];
  puStack_100 = &uStack_d8;
  pppuStack_f8 = pppuVar5;
  ppuStack_f0 = &puStack_80;
  FUN_10a3e0e30(uVar6,puVar8,&uStack_148);
  pppuVar5 = &ppuStack_140;
  (*(code *)*ppuStack_140)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_140)(&ppuStack_140);
  __Unwind_Resume();
  if (pppuVar5[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar9 = pppuVar5[1];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar2 = ppuVar9 + 1;
    do {
      puVar8 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = puVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar8 == (undefined *)0x0) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  return pppuVar5;
}



/* Entry: 10a34e1b4; end: 10a34e27b;  */

undefined *** FUN_10a34e1b4(undefined ***param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(**param_1 + 0x50);
  puVar7 = *param_1[1];
  ppuVar8 = param_1[2];
  uStack_68 = 0x10a34e670;
  ppuStack_60 = &PTR_DAT_110bc5a18;
  puStack_50 = ppuVar8[1];
  puStack_58 = *ppuVar8;
  *ppuVar8 = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  puStack_48 = ppuVar8[2];
  FUN_10a3e0e30(uVar4,puVar7,&uStack_68);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_78 = FUN_10a34e27c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(**pppuVar6 + 0x50);
  puVar7 = *pppuVar6[1];
  ppuVar8 = pppuVar6[2];
  uStack_d8 = 0x10a34e670;
  ppuStack_d0 = &PTR_DAT_110bc5a18;
  puStack_c0 = ppuVar8[1];
  puStack_c8 = *ppuVar8;
  *ppuVar8 = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  puStack_b8 = ppuVar8[2];
  puStack_90 = &uStack_68;
  pppuStack_88 = pppuVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10a3e0e30(uVar4,puVar7,&uStack_d8);
  pppuVar5 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  if (pppuVar5[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar8 = pppuVar5[1];
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar1 = ppuVar8 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
    }
  }
  return pppuVar5;
}



/* Entry: 10a34e27c; end: 10a34e343;  */

undefined *** FUN_10a34e27c(undefined ***param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(**param_1 + 0x50);
  puVar6 = *param_1[1];
  ppuVar7 = param_1[2];
  uStack_68 = 0x10a34e670;
  ppuStack_60 = &PTR_DAT_110bc5a18;
  puStack_50 = ppuVar7[1];
  puStack_58 = *ppuVar7;
  *ppuVar7 = (undefined *)0x0;
  ppuVar7[1] = (undefined *)0x0;
  puStack_48 = ppuVar7[2];
  FUN_10a3e0e30(uVar4,puVar6,&uStack_68);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  if (pppuVar5[3] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  ppuVar7 = pppuVar5[1];
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7 + 1;
    do {
      puVar6 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  return pppuVar5;
}



/* Entry: 10a34e344; end: 10a34e36f;  */

long FUN_10a34e344(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a34e370; end: 10a34e487;  */

undefined8 * FUN_10a34e370(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    lVar2 = *(long *)*param_1;
    lVar6 = *(long *)param_1[1];
    lVar5 = *(long *)(lVar6 + 0x1c0);
    if (lVar5 == 0) {
      pppuVar3 = (undefined8 ***)&UNK_10f650e06;
      lVar4 = lVar6;
    }
    else {
      __ZNSt3__19to_stringEm(appuStack_58,lVar5);
      pppuVar3 = (undefined8 ***)appuStack_58[0];
      if (-1 < cStack_41) {
        pppuVar3 = appuStack_58;
      }
      lVar4 = *(long *)param_1[1];
    }
    func_0x00010ae06f08(1,8,&UNK_10f64f076,&UNK_10f650bec,0x22b,&UNK_10f650da8,in_x6,in_x7,lVar6,
                        pppuVar3,*(long *)(lVar4 + 0xe8) - *(long *)(lVar4 + 0xe0),
                        (double)((long)puVar1 - lVar2) / 1000000000.0);
    if ((lVar5 != 0) && (cStack_41 < '\0')) {
      __ZdlPv(appuStack_58[0]);
    }
  }
  return param_1;
}



/* Entry: 10a34e488; end: 10a34e4cf;  */

void FUN_10a34e488(long param_1)

{
  long lVar1;
  float fStack_14;
  
  fStack_14 = **(float **)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(float *)(lVar1 + 0x20) < fStack_14) {
    *(float *)(lVar1 + 0x20) = fStack_14;
    FUN_10a202b54(*(undefined8 *)(lVar1 + 0x58),&fStack_14);
  }
  return;
}



/* Entry: 10a34e4d0; end: 10a34e4fb;  */

long FUN_10a34e4d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



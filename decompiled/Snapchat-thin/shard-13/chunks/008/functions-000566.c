/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ade6c80; end: 10ade6c9f;  */

void FUN_10ade6c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75c30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade6ca0; end: 10ade6caf;  */

void FUN_10ade6ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade6ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ade6cb0; end: 10ade6d97;  */

undefined8 * FUN_10ade6cb0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ccd3e0;
  plVar5 = (long *)param_1[2];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade6d98; end: 10ade6ff7;  */

void FUN_10ade6d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined4 auStack_1b8 [2];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuStack_78 = &PTR_FUN_110c76770;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  func_0x000107c2ba58(&plStack_180,param_3,&ppuStack_78);
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if (lStack_168 < 0) {
    __ZdlPv(plStack_178);
  }
  if ((int)plStack_180 == 0) {
    plStack_180 = *(long **)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_178 = plVar6;
    (**(code **)(*plStack_180 + 0x38))(plStack_180,param_2,&ppuStack_78);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    lStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    plStack_178 = (long *)0x0;
    plStack_180 = (long *)0x0;
    uStack_118 = 0x3f800000;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_b0 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    pcVar4 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar4,"Failed to deserialize response",0x1f);
    auStack_1b8[0] = 0xd;
    func_0x000107c3192c(auStack_1b0,pcVar4,0x1e);
    uStack_198 = 0;
    uStack_190 = 0;
    lStack_188 = 0;
    (**(code **)(*plVar6 + 0x30))(plVar6,&plStack_180,auStack_1b8,1);
    if (lStack_188 < 0) {
      __ZdlPv(uStack_198);
    }
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
    __ZdlPv(pcVar4);
    func_0x000107c27c44(&plStack_180);
  }
  FUN_10adece2c(&ppuStack_78);
  return;
}



/* Entry: 10ade6ff8; end: 10ade7007;  */

void FUN_10ade6ff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75ce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ade7008; end: 10ade7027;  */

void FUN_10ade7008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75ce8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade7028; end: 10ade7037;  */

void FUN_10ade7028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade7030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ade7038; end: 10ade711f;  */

undefined8 * FUN_10ade7038(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ccd430;
  plVar5 = (long *)param_1[2];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade7120; end: 10ade7383;  */

void FUN_10ade7120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined4 auStack_1d8 [2];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  ppuStack_a0 = &PTR_FUN_110c76720;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  func_0x000107c2ba58(&plStack_1a0,param_3,&ppuStack_a0);
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_188 < 0) {
    __ZdlPv(plStack_198);
  }
  if ((int)plStack_1a0 == 0) {
    plStack_1a0 = *(long **)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_198 = plVar6;
    (**(code **)(*plStack_1a0 + 0x38))(plStack_1a0,param_2,&ppuStack_a0);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    uStack_c8 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    lStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    plStack_198 = (long *)0x0;
    plStack_1a0 = (long *)0x0;
    uStack_138 = 0x3f800000;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_d0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    pcVar4 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar4,"Failed to deserialize response",0x1f);
    auStack_1d8[0] = 0xd;
    func_0x000107c3192c(auStack_1d0,pcVar4,0x1e);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    lStack_1a8 = 0;
    (**(code **)(*plVar6 + 0x30))(plVar6,&plStack_1a0,auStack_1d8,1);
    if (lStack_1a8 < 0) {
      __ZdlPv(uStack_1b8);
    }
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
    }
    __ZdlPv(pcVar4);
    func_0x000107c27c44(&plStack_1a0);
  }
  FUN_10adef4fc(&ppuStack_a0);
  return;
}



/* Entry: 10ade7384; end: 10ade742b;  */

void FUN_10ade7384(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = *(long **)(param_1 + 8);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x40))();
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10ade742c; end: 10ade74d3;  */

void FUN_10ade742c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = *(long **)(param_1 + 8);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x48))();
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10ade74d4; end: 10ade74e3;  */

void FUN_10ade74d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75db0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ade74e4; end: 10ade7503;  */

void FUN_10ade74e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75db0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade7504; end: 10ade7513;  */

void FUN_10ade7504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade750c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ade7514; end: 10ade75f3;  */

undefined8 * FUN_10ade7514(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c75e00;
  plVar5 = (long *)param_1[2];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade75f4; end: 10ade779f;  */

void FUN_10ade75f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  long lStack_78;
  int aiStack_70 [2];
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_31;
  
  lStack_78 = 0;
  func_0x000107c2ba5c(aiStack_70,param_2,&lStack_78,&uStack_31);
  iVar1 = aiStack_70[0];
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  if (iVar1 == 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),&lStack_78,param_3);
  }
  else {
    plVar3 = (long *)*param_3;
    pcVar2 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar2,"Failed to serialize message",0x1c);
    aiStack_70[0] = 0xd;
    func_0x000107c3192c(auStack_68,pcVar2,0x1b);
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_40 = 0;
    (**(code **)(*plVar3 + 0x10))(plVar3,aiStack_70);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    __ZdlPv(pcVar2);
  }
  if (lStack_78 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0xc0))();
  }
  return;
}



/* Entry: 10ade77a0; end: 10ade77af;  */

void FUN_10ade77a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade77ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 10ade77b0; end: 10ade7b9b;  */

void FUN_10ade77b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_1a8;
  long *aplStack_1a0 [2];
  char cStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = 0;
  func_0x000107c2ba5c(&uStack_170,param_2,&lStack_48,&uStack_1a8);
  iVar5 = (int)uStack_170;
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  uStack_170._4_4_ = (undefined4)((ulong)uStack_170 >> 0x20);
  if (lStack_158 < 0) {
    __ZdlPv(uStack_168);
  }
  if (iVar5 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    uStack_160 = CONCAT17(3,(undefined7)uStack_160);
    uStack_170 = CONCAT44(uStack_170._4_4_,0x535454);
    plVar7 = (long *)0x30;
    __Znwm();
    lVar8 = *param_4;
    plVar2 = (long *)param_4[1];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c75e88;
    uStack_1a8 = plVar7 + 3;
    if (plVar2 == (long *)0x0) {
      plVar7[4] = lVar8;
      plVar7[5] = 0;
    }
    else {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[3] = (long)&PTR_DAT_110ccd3e0;
      plVar7[4] = lVar8;
      plVar7[5] = (long)plVar2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar7[3] = (long)&PTR_FUN_110c75ed8;
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    aplStack_1a0[0] = plVar7;
    func_0x000107c280c0(uVar9,&UNK_10f6aeed8,&lStack_48,&uStack_170,param_3,&uStack_1a8,&uStack_68);
    plVar2 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar7 = plStack_60 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = aplStack_1a0[0];
    if (aplStack_1a0[0] != (long *)0x0) {
      plVar7 = aplStack_1a0[0] + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*aplStack_1a0[0] + 0x10))(aplStack_1a0[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar7 = plStack_50 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (uStack_160 < 0) {
      __ZdlPv(uStack_170);
    }
  }
  else {
    param_4 = (long *)*param_4;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_108 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcVar6 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar6,"Failed to serialize message",0x1c);
    uStack_1a8 = (long *)CONCAT44(uStack_1a8._4_4_,0xd);
    func_0x000107c3192c(aplStack_1a0,pcVar6,0x1b);
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
    (**(code **)(*param_4 + 0x30))(param_4,&uStack_170,&uStack_1a8,1);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    if (cStack_189 < '\0') {
      __ZdlPv(aplStack_1a0[0]);
    }
    __ZdlPv(pcVar6);
    func_0x000107c27c44(&uStack_170);
  }
  if (lStack_48 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0xc0))();
  }
  return;
}



/* Entry: 10ade7b9c; end: 10ade7bff;  */

long FUN_10ade7b9c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade7c00; end: 10ade7feb;  */

void FUN_10ade7c00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_1a8;
  long *aplStack_1a0 [2];
  char cStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = 0;
  func_0x000107c2ba5c(&uStack_170,param_2,&lStack_48,&uStack_1a8);
  iVar5 = (int)uStack_170;
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  uStack_170._4_4_ = (undefined4)((ulong)uStack_170 >> 0x20);
  if (lStack_158 < 0) {
    __ZdlPv(uStack_168);
  }
  if (iVar5 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    uStack_160 = CONCAT17(3,(undefined7)uStack_160);
    uStack_170 = CONCAT44(uStack_170._4_4_,0x535454);
    plVar7 = (long *)0x30;
    __Znwm();
    lVar8 = *param_4;
    plVar2 = (long *)param_4[1];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c75f40;
    uStack_1a8 = plVar7 + 3;
    if (plVar2 == (long *)0x0) {
      plVar7[4] = lVar8;
      plVar7[5] = 0;
    }
    else {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[3] = (long)&PTR_DAT_110ccd3e0;
      plVar7[4] = lVar8;
      plVar7[5] = (long)plVar2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar7[3] = (long)&PTR_FUN_110c75f90;
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    aplStack_1a0[0] = plVar7;
    func_0x000107c280c0(uVar9,&UNK_10f6aeef4,&lStack_48,&uStack_170,param_3,&uStack_1a8,&uStack_68);
    plVar2 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar7 = plStack_60 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = aplStack_1a0[0];
    if (aplStack_1a0[0] != (long *)0x0) {
      plVar7 = aplStack_1a0[0] + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*aplStack_1a0[0] + 0x10))(aplStack_1a0[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar7 = plStack_50 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (uStack_160 < 0) {
      __ZdlPv(uStack_170);
    }
  }
  else {
    param_4 = (long *)*param_4;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_108 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcVar6 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar6,"Failed to serialize message",0x1c);
    uStack_1a8 = (long *)CONCAT44(uStack_1a8._4_4_,0xd);
    func_0x000107c3192c(aplStack_1a0,pcVar6,0x1b);
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
    (**(code **)(*param_4 + 0x30))(param_4,&uStack_170,&uStack_1a8,1);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    if (cStack_189 < '\0') {
      __ZdlPv(aplStack_1a0[0]);
    }
    __ZdlPv(pcVar6);
    func_0x000107c27c44(&uStack_170);
  }
  if (lStack_48 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0xc0))();
  }
  return;
}



/* Entry: 10ade7fec; end: 10ade8117;  */

long FUN_10ade7fec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade8118; end: 10ade8127;  */

void FUN_10ade8118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75e88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ade8128; end: 10ade8147;  */

void FUN_10ade8128(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75e88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade8148; end: 10ade8157;  */

void FUN_10ade8148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade8150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ade8158; end: 10ade823f;  */

undefined8 * FUN_10ade8158(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ccd3e0;
  plVar5 = (long *)param_1[2];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade8240; end: 10ade84ab;  */

void FUN_10ade8240(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined4 auStack_1c8 [2];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuStack_90 = &PTR_FUN_110c77300;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  puStack_50 = &DAT_11383d918;
  uStack_48 = 0;
  func_0x000107c2ba58(&plStack_190,param_3,&ppuStack_90);
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if (lStack_178 < 0) {
    __ZdlPv(plStack_188);
  }
  if ((int)plStack_190 == 0) {
    plStack_190 = *(long **)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_188 = plVar6;
    (**(code **)(*plStack_190 + 0x38))(plStack_190,param_2,&ppuStack_90);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    lStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    plStack_188 = (long *)0x0;
    plStack_190 = (long *)0x0;
    uStack_128 = 0x3f800000;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    pcVar4 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar4,"Failed to deserialize response",0x1f);
    auStack_1c8[0] = 0xd;
    func_0x000107c3192c(auStack_1c0,pcVar4,0x1e);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    lStack_198 = 0;
    (**(code **)(*plVar6 + 0x30))(plVar6,&plStack_190,auStack_1c8,1);
    if (lStack_198 < 0) {
      __ZdlPv(uStack_1a8);
    }
    if (cStack_1a9 < '\0') {
      __ZdlPv(auStack_1c0[0]);
    }
    __ZdlPv(pcVar4);
    func_0x000107c27c44(&plStack_190);
  }
  FUN_10adfe038(&ppuStack_90);
  return;
}



/* Entry: 10ade84ac; end: 10ade84bb;  */

void FUN_10ade84ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75f40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ade84bc; end: 10ade84db;  */

void FUN_10ade84bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c75f40;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade84dc; end: 10ade84eb;  */

void FUN_10ade84dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade84e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ade84ec; end: 10ade85d3;  */

undefined8 * FUN_10ade84ec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ccd3e0;
  plVar5 = (long *)param_1[2];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade85d4; end: 10ade8833;  */

void FUN_10ade85d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined4 auStack_1a8 [2];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  ppuStack_68 = &PTR_FUN_110c77350;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_40 = &DAT_11383d918;
  uStack_38 = 0;
  func_0x000107c2ba58(&plStack_170,param_3,&ppuStack_68);
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (lStack_158 < 0) {
    __ZdlPv(plStack_168);
  }
  if ((int)plStack_170 == 0) {
    plStack_170 = *(long **)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_168 = plVar6;
    (**(code **)(*plStack_170 + 0x38))(plStack_170,param_2,&ppuStack_68);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    plStack_168 = (long *)0x0;
    plStack_170 = (long *)0x0;
    uStack_108 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcVar4 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar4,"Failed to deserialize response",0x1f);
    auStack_1a8[0] = 0xd;
    func_0x000107c3192c(auStack_1a0,pcVar4,0x1e);
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
    (**(code **)(*plVar6 + 0x30))(plVar6,&plStack_170,auStack_1a8,1);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
    __ZdlPv(pcVar4);
    func_0x000107c27c44(&plStack_170);
  }
  FUN_10adfecd4(&ppuStack_68);
  return;
}



/* Entry: 10ade8834; end: 10ade8c2f;  */

void FUN_10ade8834(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_1a8;
  long *aplStack_1a0 [2];
  char cStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = 0;
  func_0x000107c2ba5c(&uStack_170,param_2,&lStack_48,&uStack_1a8);
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if (lStack_158 < 0) {
    __ZdlPv(uStack_168);
  }
  if ((int)uStack_170 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    uStack_160 = CONCAT17(10,(undefined7)uStack_160);
    uStack_170 = 0x514c4d6563696f56;
    uVar5 = (ulong)uStack_168 >> 0x18;
    uStack_168 = CONCAT53((int5)uVar5,0x414e);
    plVar7 = (long *)0x30;
    __Znwm();
    lVar8 = *param_4;
    plVar2 = (long *)param_4[1];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c76028;
    uStack_1a8 = plVar7 + 3;
    if (plVar2 == (long *)0x0) {
      plVar7[4] = lVar8;
      plVar7[5] = 0;
    }
    else {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[3] = (long)&PTR_DAT_110ccd3e0;
      plVar7[4] = lVar8;
      plVar7[5] = (long)plVar2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar7[3] = (long)&PTR_FUN_110c76078;
    uStack_58 = 0;
    plStack_50 = (long *)0x0;
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    aplStack_1a0[0] = plVar7;
    func_0x000107c280c0(uVar9,&UNK_10f6aef14,&lStack_48,&uStack_170,param_3,&uStack_1a8,&uStack_68);
    plVar2 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar7 = plStack_60 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = aplStack_1a0[0];
    if (aplStack_1a0[0] != (long *)0x0) {
      plVar7 = aplStack_1a0[0] + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*aplStack_1a0[0] + 0x10))(aplStack_1a0[0]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    plVar2 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar7 = plStack_50 + 1;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (uStack_160 < 0) {
      __ZdlPv(uStack_170);
    }
  }
  else {
    param_4 = (long *)*param_4;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_108 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcVar6 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar6,"Failed to serialize message",0x1c);
    uStack_1a8 = (long *)CONCAT44(uStack_1a8._4_4_,0xd);
    func_0x000107c3192c(aplStack_1a0,pcVar6,0x1b);
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
    (**(code **)(*param_4 + 0x30))(param_4,&uStack_170,&uStack_1a8,1);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    if (cStack_189 < '\0') {
      __ZdlPv(aplStack_1a0[0]);
    }
    __ZdlPv(pcVar6);
    func_0x000107c27c44(&uStack_170);
  }
  if (lStack_48 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0xc0))();
  }
  return;
}



/* Entry: 10ade8c30; end: 10ade8d5b;  */

long FUN_10ade8c30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade8d5c; end: 10ade8d6b;  */

void FUN_10ade8d5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c76028;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ade8d6c; end: 10ade8d8b;  */

void FUN_10ade8d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c76028;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade8d8c; end: 10ade8d9b;  */

void FUN_10ade8d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ade8d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ade8d9c; end: 10ade8e83;  */

undefined8 * FUN_10ade8d9c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110ccd3e0;
  plVar5 = (long *)param_1[2];
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
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10ade8e84; end: 10ade9153;  */

void FUN_10ade8e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  undefined4 auStack_1a8 [2];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  ppuStack_70 = &PTR_FUN_110c77608;
  uStack_68 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  func_0x000107c2ba58(&plStack_170,param_3,&ppuStack_70);
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
    if (-1 < lStack_158) goto LAB_10ade8ee8;
LAB_10ade8ff8:
    __ZdlPv(plStack_168);
    if ((int)plStack_170 != 0) goto LAB_10ade8eec;
LAB_10ade9004:
    plStack_170 = *(long **)(param_1 + 8);
    plVar8 = *(long **)(param_1 + 0x10);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_168 = plVar8;
    (**(code **)(*plStack_170 + 0x38))(plStack_170,param_2,&ppuStack_70);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  else {
    if (lStack_158 < 0) goto LAB_10ade8ff8;
LAB_10ade8ee8:
    if ((int)plStack_170 == 0) goto LAB_10ade9004;
LAB_10ade8eec:
    plVar8 = *(long **)(param_1 + 8);
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    lStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    plStack_168 = (long *)0x0;
    plStack_170 = (long *)0x0;
    uStack_108 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcVar4 = (char *)0x20;
    __Znwm();
    builtin_strncpy(pcVar4,"Failed to deserialize response",0x1f);
    auStack_1a8[0] = 0xd;
    func_0x000107c3192c(auStack_1a0,pcVar4,0x1e);
    uStack_188 = 0;
    uStack_180 = 0;
    lStack_178 = 0;
    (**(code **)(*plVar8 + 0x30))(plVar8,&plStack_170,auStack_1a8,1);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
    __ZdlPv(pcVar4);
    func_0x000107c27c44(&plStack_170);
  }
  if ((uStack_68 & 1) != 0) {
    func_0x0001053936ac(&uStack_68);
  }
  if (uStack_60 == 0) {
    return;
  }
  if (lStack_50 != 0) {
    return;
  }
  if ((uStack_60 & 1) == 0) {
    uVar7 = 1;
    puVar9 = &uStack_60;
  }
  else {
    puVar5 = (uint *)(uStack_60 - 1);
    uVar7 = (ulong)*puVar5;
    if ((int)*puVar5 < 1) goto LAB_10ade90b0;
    puVar9 = (ulong *)(uStack_60 + 7);
  }
  do {
    if ((long *)*puVar9 != (long *)0x0) {
      (**(code **)(*(long *)*puVar9 + 8))();
    }
    uVar7 = uVar7 - 1;
    puVar9 = puVar9 + 1;
  } while (uVar7 != 0);
  if ((uStack_60 & 1) == 0) {
    return;
  }
  puVar5 = (uint *)(uStack_60 - 1);
LAB_10ade90b0:
  __ZdlPv(puVar5);
  return;
}



/* Entry: 10ade9154; end: 10ade91ef;  */

long FUN_10ade9154(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar2 + 0x17))) {
    __ZdlPv();
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    FUN_10adeac50(lVar3);
    __ZdlPv(lVar3);
  }
  return param_1;
}



/* Entry: 10ade91f0; end: 10ade91f3;  */

long FUN_10ade91f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar2 + 0x17))) {
    __ZdlPv();
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    FUN_10adeac50(lVar3);
    __ZdlPv(lVar3);
  }
  return param_1;
}



/* Entry: 10ade91f4; end: 10ade9207;  */

void FUN_10ade91f4(void)

{
  FUN_10ade9154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ade9208; end: 10ade9213;  */

undefined ** FUN_10ade9208(void)

{
  return &PTR_DAT_110c768f0;
}



/* Entry: 10ade9214; end: 10ade9423;  */

void FUN_10ade9214(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      bVar1 = *(byte *)(param_1 + 0x10);
      goto joined_r0x00010ade9238;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x10);
joined_r0x00010ade9238:
  if ((bVar1 & 1) != 0) {
    func_0x00010ade9290(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10ade9424; end: 10ade968f;  */

byte * FUN_10ade9424(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  pbVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x20);
    uVar11 = *(uint *)(pbVar3 + 0xa0);
    pbVar8 = *(byte **)param_3;
    if (pbVar8 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          pbVar8 = param_3 + 0x11;
          *param_2 = 10;
          goto joined_r0x00010ade95d0;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar8);
        pbVar8 = *(byte **)param_3;
      } while (pbVar8 <= param_2);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 10;
joined_r0x00010ade95d0:
    if (0x7f < uVar11) {
      do {
        param_2 = pbVar8;
        pbVar8 = param_2 + 1;
        *param_2 = (byte)uVar11 | 0x80;
        uVar2 = uVar11 >> 0xe;
        uVar11 = uVar11 >> 7;
      } while (uVar2 != 0);
    }
    *pbVar8 = (byte)uVar11;
    (**(code **)(*(long *)pbVar3 + 0x38))(pbVar3,param_2 + 2,param_3);
  }
  puVar7 = (ulong *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  uVar9 = (ulong)*(char *)((long)puVar7 + 0x17);
  if ((long)uVar9 < 0) {
    uVar9 = puVar7[1];
    if (uVar9 != 0) {
      if ((long)uVar9 < 0x80) goto LAB_10ade94bc;
LAB_10ade9558:
      pbVar8 = param_3;
      func_0x00010b4d50d0(param_3,2,puVar7,pbVar3);
      uVar9 = *(ulong *)(param_1 + 8);
      pbVar3 = pbVar8;
      goto joined_r0x00010ade9570;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10ade94bc:
    if ((*(long *)param_3 - (long)pbVar3) + 0xe < (long)uVar9) goto LAB_10ade9558;
    *pbVar3 = 0x12;
    pbVar3[1] = (byte)uVar9;
    puVar1 = (ulong *)*puVar7;
    if (-1 < *(char *)((long)puVar7 + 0x17)) {
      puVar1 = puVar7;
    }
    _memcpy(pbVar3 + 2,puVar1,uVar9);
    pbVar3 = pbVar3 + 2 + uVar9;
  }
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x00010ade9570:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar6 = *(long *)(uVar9 + 8);
      uVar12 = (ulong)*(uint *)(uVar9 + 0x10);
    }
    else {
      lVar6 = uVar9 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar11) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar8 < (int)uVar11) {
        pbVar4 = param_3 + 0x10;
LAB_10ade9604:
        do {
          lVar10 = (long)(int)pbVar8;
          _memcpy(pbVar3,lVar6,lVar10);
          uVar11 = (int)uVar12 - (int)pbVar8;
          uVar12 = (ulong)uVar11;
          lVar6 = lVar6 + lVar10;
          pbVar3 = pbVar3 + lVar10;
          pbVar8 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar8 = pbVar8 + (0x10 - (long)pbVar4);
              pbVar3 = pbVar4;
              if ((int)uVar11 <= (int)pbVar8) goto LAB_10ade9674;
              goto LAB_10ade9604;
            }
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar3 = pbVar5 + ((int)pbVar3 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
          } while (pbVar8 <= pbVar3);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar3);
        } while ((int)pbVar8 < (int)uVar11);
      }
LAB_10ade9674:
      _memcpy(pbVar3,lVar6,(long)(int)uVar11);
      pbVar3 = pbVar3 + (int)uVar11;
    }
    else {
      _memcpy(pbVar3,lVar6,uVar12 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar11;
    }
  }
  return pbVar3;
}



/* Entry: 10ade9690; end: 10ade9767;  */

long FUN_10ade9690(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  lVar4 = lVar3;
  if (lVar3 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    lVar4 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar4 = lVar3;
    }
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    FUN_10adec418();
    lVar4 = lVar4 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar4;
    return lVar4;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar3 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x14) = (int)(lVar3 + lVar4);
  return lVar3 + lVar4;
}



/* Entry: 10ade9768; end: 10ade99e7;  */

void FUN_10ade9768(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    puVar9 = (undefined8 *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
    cVar2 = *(char *)((long)puVar9 + 0x17);
    plVar8 = plVar5;
  }
  else {
    puVar9 = (undefined8 *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
    cVar2 = *(char *)((long)puVar9 + 0x17);
    plVar8 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
  }
  uVar12 = (ulong)cVar2;
  uVar10 = uVar12;
  if ((long)uVar12 < 0) {
    uVar10 = puVar9[1];
  }
  if (uVar10 != 0) {
    if (((ulong)plVar5 & 1) == 0) {
      uVar10 = *(ulong *)(param_1 + 0x18);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar10 = *(ulong *)(param_1 + 0x18);
    }
    if ((uVar10 & 3) == 0) {
      uVar10 = puVar9[1];
      puVar6 = (undefined8 *)*puVar9;
      if (-1 < cVar2) {
        uVar10 = uVar12;
        puVar6 = puVar9;
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar10) goto LAB_10ade99cc;
        if (0x16 < uVar10) {
          plVar11 = (long *)0x19;
          if ((uVar10 | 7) != 0x17) {
            plVar11 = (long *)((uVar10 | 7) + 1);
          }
          plVar7 = plVar11;
          __Znwm();
          *plVar5 = (long)plVar7;
          uVar12 = 2;
          goto LAB_10ade990c;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar10;
        uVar12 = 2;
        plVar7 = plVar5;
        plVar11 = plVar5;
        if (uVar10 != 0) goto LAB_10ade991c;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar10) {
          func_0x000104bd47d4();
LAB_10ade99cc:
          func_0x000104bd47d4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ade99d4);
          (*pcVar4)();
        }
        if (uVar10 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar10;
          uVar12 = 3;
          plVar7 = plVar5;
          plVar11 = plVar5;
          if (uVar10 == 0) goto LAB_10ade992c;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar10 | 7) != 0x17) {
            plVar11 = (long *)((uVar10 | 7) + 1);
          }
          plVar7 = plVar11;
          __Znwm();
          *plVar5 = (long)plVar7;
          uVar12 = 3;
LAB_10ade990c:
          plVar5[1] = uVar10;
          plVar5[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar5;
        }
LAB_10ade991c:
        _memmove(plVar7,puVar6,uVar10);
        plVar5 = plVar7;
      }
LAB_10ade992c:
      *(undefined1 *)((long)plVar5 + uVar10) = 0;
      *(ulong *)(param_1 + 0x18) = uVar12 | (ulong)plVar11;
    }
    else {
      puVar6 = (undefined8 *)(uVar10 & 0xfffffffffffffffc);
      if (puVar6 != puVar9) {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          uVar10 = puVar9[1];
          puVar3 = (undefined8 *)*puVar9;
          if (-1 < cVar2) {
            uVar10 = uVar12;
            puVar3 = puVar9;
          }
          func_0x000107c27ba0(puVar6,puVar3,uVar10);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar6,*puVar9,puVar9[1]);
        }
        else {
          uVar14 = puVar9[1];
          uVar13 = *puVar9;
          puVar6[2] = puVar9[2];
          puVar6[1] = uVar14;
          *puVar6 = uVar13;
        }
      }
    }
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_10adfb1c4(plVar8,*(undefined8 *)(param_2 + 0x20));
      *(long **)(param_1 + 0x20) = plVar8;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
      uVar10 = *(ulong *)(param_2 + 8);
      goto joined_r0x00010ade999c;
    }
    FUN_10ade99e8();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  uVar10 = *(ulong *)(param_2 + 8);
joined_r0x00010ade999c:
  if ((uVar10 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ade99e8; end: 10adea37b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ade99e8(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar2;
  if (-1 < (long)uVar9) {
    if (uVar9 == 0) goto LAB_10ade9bd0;
LAB_10ade9a78:
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar10 = *(ulong *)(param_1 + 0x58);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar10 = *(ulong *)(param_1 + 0x58);
    }
    if ((uVar10 & 3) != 0) {
      puVar7 = (undefined8 *)(uVar10 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar10 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar10 = uVar9;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar10);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
      goto LAB_10ade9bd0;
    }
    uVar10 = puVar8[1];
    puVar7 = (undefined8 *)*puVar8;
    if (-1 < cVar2) {
      uVar10 = uVar9;
      puVar7 = puVar8;
    }
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x18;
      __Znwm();
      if (uVar10 < 0x7ffffffffffffff7) {
        if (0x16 < uVar10) {
          plVar11 = (long *)0x19;
          if ((uVar10 | 7) != 0x17) {
            plVar11 = (long *)((uVar10 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar9 = 2;
          goto LAB_10ade9ba4;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar10;
        uVar9 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar10 != 0) goto LAB_10ade9bb4;
        goto LAB_10ade9bc4;
      }
    }
    else {
      func_0x00010b4d80a4();
      if (uVar10 < 0x7ffffffffffffff7) {
        if (uVar10 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar10;
          uVar9 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar10 == 0) goto LAB_10ade9bc4;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar10 | 7) != 0x17) {
            plVar11 = (long *)((uVar10 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar9 = 3;
LAB_10ade9ba4:
          plVar6[1] = uVar10;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10ade9bb4:
        _memmove(plVar5,puVar7,uVar10);
        plVar6 = plVar5;
LAB_10ade9bc4:
        *(undefined1 *)((long)plVar6 + uVar10) = 0;
        *(ulong *)(param_1 + 0x58) = uVar9 | (ulong)plVar11;
        goto LAB_10ade9bd0;
      }
LAB_10adea2ec:
      func_0x000104bd47d4();
    }
    func_0x000104bd47d4();
LAB_10adea314:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10adea318);
    (*pcVar4)();
  }
  if (puVar8[1] != 0) goto LAB_10ade9a78;
LAB_10ade9bd0:
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x60);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x60);
    }
    if ((uVar9 & 3) == 0) {
      uVar9 = puVar8[1];
      puVar7 = (undefined8 *)*puVar8;
      if (-1 < cVar2) {
        uVar9 = uVar10;
        puVar7 = puVar8;
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar9) {
          func_0x000104bd47d4();
          goto LAB_10adea314;
        }
        if (0x16 < uVar9) {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 2;
          goto LAB_10ade9d1c;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar9;
        uVar10 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar9 != 0) goto LAB_10ade9d2c;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
        if (uVar9 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar9;
          uVar10 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar9 == 0) goto LAB_10ade9d3c;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 3;
LAB_10ade9d1c:
          plVar6[1] = uVar9;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10ade9d2c:
        _memmove(plVar5,puVar7,uVar9);
        plVar6 = plVar5;
      }
LAB_10ade9d3c:
      *(undefined1 *)((long)plVar6 + uVar9) = 0;
      *(ulong *)(param_1 + 0x60) = uVar10 | (ulong)plVar11;
    }
    else {
      puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar9 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar9 = uVar10;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar9);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x68);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x68);
    }
    if ((uVar9 & 3) == 0) {
      uVar9 = puVar8[1];
      puVar7 = (undefined8 *)*puVar8;
      if (-1 < cVar2) {
        uVar9 = uVar10;
        puVar7 = puVar8;
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar9) {
          func_0x000104bd47d4();
          goto LAB_10adea314;
        }
        if (0x16 < uVar9) {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 2;
          goto LAB_10ade9e94;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar9;
        uVar10 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar9 != 0) goto LAB_10ade9ea4;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
        if (uVar9 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar9;
          uVar10 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar9 == 0) goto LAB_10ade9eb4;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 3;
LAB_10ade9e94:
          plVar6[1] = uVar9;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10ade9ea4:
        _memmove(plVar5,puVar7,uVar9);
        plVar6 = plVar5;
      }
LAB_10ade9eb4:
      *(undefined1 *)((long)plVar6 + uVar9) = 0;
      *(ulong *)(param_1 + 0x68) = uVar10 | (ulong)plVar11;
    }
    else {
      puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar9 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar9 = uVar10;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar9);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x70);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x70);
    }
    if ((uVar9 & 3) == 0) {
      uVar9 = puVar8[1];
      puVar7 = (undefined8 *)*puVar8;
      if (-1 < cVar2) {
        uVar9 = uVar10;
        puVar7 = puVar8;
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar9) {
          func_0x000104bd47d4();
          goto LAB_10adea314;
        }
        if (0x16 < uVar9) {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 2;
          goto LAB_10adea00c;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar9;
        uVar10 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar9 != 0) goto LAB_10adea01c;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
        if (uVar9 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar9;
          uVar10 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar9 == 0) goto LAB_10adea02c;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 3;
LAB_10adea00c:
          plVar6[1] = uVar9;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10adea01c:
        _memmove(plVar5,puVar7,uVar9);
        plVar6 = plVar5;
      }
LAB_10adea02c:
      *(undefined1 *)((long)plVar6 + uVar9) = 0;
      *(ulong *)(param_1 + 0x70) = uVar10 | (ulong)plVar11;
    }
    else {
      puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar9 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar9 = uVar10;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar9);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x78) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 == 0) goto LAB_10adea1b0;
  plVar6 = *(long **)(param_1 + 8);
  if (((ulong)plVar6 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x78);
  }
  else {
    plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
    uVar9 = *(ulong *)(param_1 + 0x78);
  }
  if ((uVar9 & 3) != 0) {
    puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
    if (puVar7 != puVar8) {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        uVar9 = puVar8[1];
        puVar3 = (undefined8 *)*puVar8;
        if (-1 < cVar2) {
          uVar9 = uVar10;
          puVar3 = puVar8;
        }
        func_0x000107c27ba0(puVar7,puVar3,uVar9);
      }
      else if (cVar2 < '\0') {
        func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
      }
      else {
        uVar13 = puVar8[1];
        uVar12 = *puVar8;
        puVar7[2] = puVar8[2];
        puVar7[1] = uVar13;
        *puVar7 = uVar12;
      }
    }
    goto LAB_10adea1b0;
  }
  uVar9 = puVar8[1];
  puVar7 = (undefined8 *)*puVar8;
  if (-1 < cVar2) {
    uVar9 = uVar10;
    puVar7 = puVar8;
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar9) {
      func_0x000104bd47d4();
      goto LAB_10adea314;
    }
    if (0x16 < uVar9) {
      plVar11 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar11 = (long *)((uVar9 | 7) + 1);
      }
      plVar5 = plVar11;
      __Znwm();
      *plVar6 = (long)plVar5;
      uVar10 = 2;
      goto LAB_10adea184;
    }
    *(char *)((long)plVar6 + 0x17) = (char)uVar9;
    uVar10 = 2;
    plVar5 = plVar6;
    plVar11 = plVar6;
    if (uVar9 != 0) goto LAB_10adea194;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
    if (uVar9 < 0x17) {
      *(char *)((long)plVar6 + 0x17) = (char)uVar9;
      uVar10 = 3;
      plVar5 = plVar6;
      plVar11 = plVar6;
      if (uVar9 == 0) goto LAB_10adea1a4;
    }
    else {
      plVar11 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar11 = (long *)((uVar9 | 7) + 1);
      }
      plVar5 = plVar11;
      __Znwm();
      *plVar6 = (long)plVar5;
      uVar10 = 3;
LAB_10adea184:
      plVar6[1] = uVar9;
      plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
      plVar11 = plVar6;
    }
LAB_10adea194:
    _memmove(plVar5,puVar7,uVar9);
    plVar6 = plVar5;
  }
LAB_10adea1a4:
  *(undefined1 *)((long)plVar6 + uVar9) = 0;
  *(ulong *)(param_1 + 0x78) = uVar10 | (ulong)plVar11;
LAB_10adea1b0:
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    cVar2 = *(char *)(param_2 + 0x8d);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x8d);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x8d) = 1;
    cVar2 = *(char *)(param_2 + 0x8e);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x8e);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x8e) = 1;
    cVar2 = *(char *)(param_2 + 0x8f);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x8f);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x8f) = 1;
    iVar1 = *(int *)(param_2 + 0x90);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x90);
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x90) = iVar1;
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 1;
    cVar2 = *(char *)(param_2 + 0x99);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x99);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x99) = 1;
    iVar1 = *(int *)(param_2 + 0x9c);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x9c);
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x9c) = iVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10adea37c; end: 10adea473;  */

void FUN_10adea37c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    plVar2 = (long *)(*(ulong *)(param_1 + 0x10) ^ 2);
    plVar3 = plVar2;
    if (((ulong)plVar2 & 3) != 0) {
      plVar3 = (long *)0x0;
    }
    if ((plVar3 == (long *)0x0) || (-1 < *(char *)((long)plVar2 + 0x17))) {
      __ZdlPv();
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    lVar4 = *plVar2;
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) {
LAB_10adea3b0:
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (plVar3 = *(long **)(param_1 + 0x10), plVar3 == (long *)0x0))
    goto LAB_10adea3b0;
    if ((*(byte *)(plVar3 + 1) & 1) != 0) {
      func_0x0001053936ac();
    }
    lVar4 = plVar3[3];
    if (lVar4 == 0) goto LAB_10adea454;
    if ((*(byte *)(lVar4 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    FUN_10adeac50(lVar4);
  }
  __ZdlPv(lVar4);
LAB_10adea454:
  __ZdlPv(plVar3);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10adea474; end: 10adea4eb;  */

long FUN_10adea474(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10adea37c(param_1);
  }
  return param_1;
}



/* Entry: 10adea4ec; end: 10adea543;  */

long FUN_10adea4ec(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    FUN_10adeac50(lVar1);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10adea544; end: 10adea54f;  */

undefined ** FUN_10adea544(void)

{
  return &PTR_DAT_110c76930;
}



/* Entry: 10adea550; end: 10adea587;  */

void FUN_10adea550(long param_1)

{
  ulong *puVar1;
  
  FUN_10adea37c();
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



/* Entry: 10adea588; end: 10adea7ff;  */

byte * FUN_10adea588(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    puVar6 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    uVar8 = (ulong)*(char *)((long)puVar6 + 0x17);
    if ((((long)uVar8 < 0) && (uVar8 = puVar6[1], 0x7f < (long)uVar8)) ||
       ((*(long *)param_3 - (long)param_2) + 0xe < (long)uVar8)) {
      pbVar3 = param_3;
      func_0x00010b4d50d0(param_3,2,puVar6,param_2);
      uVar8 = *(ulong *)(param_1 + 8);
      param_2 = pbVar3;
      goto joined_r0x00010adea6e0;
    }
    *param_2 = 0x12;
    param_2[1] = (byte)uVar8;
    puVar1 = (ulong *)*puVar6;
    if (-1 < *(char *)((long)puVar6 + 0x17)) {
      puVar1 = puVar6;
    }
    _memcpy(param_2 + 2,puVar1,uVar8);
    param_2 = param_2 + 2 + uVar8;
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    pbVar3 = *(byte **)(param_1 + 0x10);
    uVar10 = *(uint *)(pbVar3 + 0x14);
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          pbVar7 = param_3 + 0x11;
          *param_2 = 10;
          goto joined_r0x00010adea740;
        }
        pbVar4 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar4 + ((int)param_2 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= param_2);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 10;
joined_r0x00010adea740:
    if (0x7f < uVar10) {
      do {
        param_2 = pbVar7;
        pbVar7 = param_2 + 1;
        *param_2 = (byte)uVar10 | 0x80;
        uVar2 = uVar10 >> 0xe;
        uVar10 = uVar10 >> 7;
      } while (uVar2 != 0);
    }
    *pbVar7 = (byte)uVar10;
    (**(code **)(*(long *)pbVar3 + 0x38))(pbVar3,param_2 + 2,param_3);
    uVar8 = *(ulong *)(param_1 + 8);
    param_2 = pbVar3;
    goto joined_r0x00010adea6e0;
  }
  uVar8 = *(ulong *)(param_1 + 8);
joined_r0x00010adea6e0:
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar11 < 0) {
      lVar5 = *(long *)(uVar8 + 8);
      uVar11 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar5 = uVar8 + 8;
    }
    uVar10 = (uint)uVar11;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar10) {
      pbVar3 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar10) {
        do {
          lVar9 = (long)(int)pbVar3;
          _memcpy(param_2,lVar5,lVar9);
          uVar10 = (int)uVar11 - (int)pbVar3;
          uVar11 = (ulong)uVar10;
          lVar5 = lVar5 + lVar9;
          param_2 = param_2 + lVar9;
          pbVar3 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar3 = pbVar3 + (0x10 - (long)(param_3 + 0x10));
              iVar12 = (int)pbVar3;
              param_2 = param_3 + 0x10;
              goto joined_r0x00010adea7e0;
            }
            pbVar7 = param_3;
            func_0x000107c303dc();
            param_2 = pbVar7 + ((int)param_2 - (int)pbVar3);
            pbVar3 = *(byte **)param_3;
          } while (pbVar3 <= param_2);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
          iVar12 = (int)pbVar3;
joined_r0x00010adea7e0:
        } while (iVar12 < (int)uVar10);
      }
      _memcpy(param_2,lVar5,(long)(int)uVar10);
      param_2 = param_2 + (int)uVar10;
    }
    else {
      _memcpy(param_2,lVar5,uVar11 & 0xffffffff);
      param_2 = param_2 + (int)uVar10;
    }
  }
  return param_2;
}



/* Entry: 10adea800; end: 10adea913;  */

long FUN_10adea800(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
    bVar1 = *(byte *)(uVar2 + 0x17);
    uVar2 = *(ulong *)(uVar2 + 8);
    if (-1 < (char)bVar1) {
      uVar2 = (ulong)bVar1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) {
      lVar5 = 0;
      goto LAB_10adea8b8;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      lVar3 = *(long *)(lVar5 + 0x18);
      FUN_10adec418();
      uVar2 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
      uVar4 = *(ulong *)(lVar5 + 8) & 0xfffffffffffffffe;
      lVar3 = (long)*(char *)(uVar4 + 0x1f);
      if (lVar3 < 0) {
        lVar3 = *(long *)(uVar4 + 0x10);
      }
      uVar2 = lVar3 + uVar2;
    }
    *(int *)(lVar5 + 0x14) = (int)uVar2;
  }
  lVar5 = uVar2 + ((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6) + 1;
LAB_10adea8b8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    *(int *)(param_1 + 0x18) = (int)(lVar3 + lVar5);
    return lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x18) = (int)lVar5;
  return lVar5;
}



/* Entry: 10adea914; end: 10adeac4f;  */

/* WARNING: Possible PIC construction at 0x00010adeabc0: Changing call to branch */

void FUN_10adea914(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong *puVar12;
  undefined *puVar13;
  ulong *unaff_x19;
  ulong *puVar14;
  long unaff_x20;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar14 = (ulong *)(param_1 + 8);
  plVar16 = (long *)*puVar14;
  if (((ulong)plVar16 & 1) == 0) {
    iVar4 = *(int *)(param_2 + 0x1c);
  }
  else {
    plVar16 = *(long **)((ulong)plVar16 & 0xfffffffffffffffe);
    iVar4 = *(int *)(param_2 + 0x1c);
  }
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        FUN_10adea37c(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar4;
    }
    if (iVar4 == 2) {
      if (iVar5 == 2) {
        puVar10 = *(undefined8 **)(param_1 + 0x10);
      }
      else {
        *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
        puVar10 = (undefined8 *)&DAT_11383d918;
      }
      puVar3 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 2) {
        puVar3 = (undefined8 *)&DAT_11383d918;
      }
      if (((ulong)puVar10 & 3) == 0) {
        uVar9 = puVar3[1];
        puVar10 = (undefined8 *)*puVar3;
        if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
          uVar9 = (ulong)*(byte *)((long)puVar3 + 0x17);
          puVar10 = puVar3;
        }
        if (plVar16 == (long *)0x0) {
          plVar16 = (long *)0x18;
          __Znwm();
          if (0x7ffffffffffffff6 < uVar9) goto LAB_10adeac34;
          if (uVar9 < 0x17) {
            *(char *)((long)plVar16 + 0x17) = (char)uVar9;
            uVar19 = 2;
            goto LAB_10adeaadc;
          }
          plVar18 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar18 = (long *)((uVar9 | 7) + 1);
          }
          plVar11 = plVar18;
          __Znwm();
          *plVar16 = (long)plVar11;
          uVar19 = 2;
LAB_10adeab38:
          plVar16[1] = uVar9;
          plVar16[2] = (ulong)plVar18 | 0x8000000000000000;
          plVar18 = plVar16;
LAB_10adeab48:
          _memmove(plVar11,puVar10,uVar9);
          plVar16 = plVar11;
        }
        else {
          func_0x00010b4d80a4();
          if (0x7ffffffffffffff6 < uVar9) {
            func_0x000104bd47d4();
LAB_10adeac34:
            func_0x000104bd47d4();
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10adeac3c);
            (*pcVar8)();
          }
          if (0x16 < uVar9) {
            plVar18 = (long *)0x19;
            if ((uVar9 | 7) != 0x17) {
              plVar18 = (long *)((uVar9 | 7) + 1);
            }
            plVar11 = plVar18;
            __Znwm();
            *plVar16 = (long)plVar11;
            uVar19 = 3;
            goto LAB_10adeab38;
          }
          *(char *)((long)plVar16 + 0x17) = (char)uVar9;
          uVar19 = 3;
LAB_10adeaadc:
          plVar11 = plVar16;
          plVar18 = plVar16;
          if (uVar9 != 0) goto LAB_10adeab48;
        }
        *(undefined1 *)((long)plVar16 + uVar9) = 0;
        *(ulong *)(param_1 + 0x10) = uVar19 | (ulong)plVar18;
      }
      else {
        puVar10 = (undefined8 *)((ulong)puVar10 & 0xfffffffffffffffc);
        if (puVar3 != puVar10) {
          bVar6 = *(byte *)((long)puVar3 + 0x17);
          if (*(char *)((long)puVar10 + 0x17) < '\0') {
            uVar9 = puVar3[1];
            puVar7 = (undefined8 *)*puVar3;
            if (-1 < (char)bVar6) {
              uVar9 = (ulong)bVar6;
              puVar7 = puVar3;
            }
            func_0x000107c27ba0(puVar10,puVar7,uVar9);
          }
          else if ((char)bVar6 < '\0') {
            func_0x000107c27ba4(puVar10,*puVar3,puVar3[1]);
          }
          else {
            uVar21 = puVar3[1];
            uVar20 = *puVar3;
            puVar10[2] = puVar3[2];
            puVar10[1] = uVar21;
            *puVar10 = uVar20;
          }
        }
      }
    }
    else if (iVar4 == 1) {
      if (iVar5 == 1) {
        lVar15 = *(long *)(param_1 + 0x10);
        ppuVar2 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 1) {
          ppuVar2 = &PTR_PTR_113308b20;
        }
        uVar9 = *(ulong *)(lVar15 + 8);
        if ((uVar9 & 1) == 0) {
          uVar17 = *(uint *)(ppuVar2 + 2);
          if ((uVar17 & 1) != 0) goto LAB_10adeab8c;
LAB_10adea9b0:
          *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | uVar17;
          puVar13 = ppuVar2[1];
        }
        else {
          uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
          uVar17 = *(uint *)(ppuVar2 + 2);
          if ((uVar17 & 1) == 0) goto LAB_10adea9b0;
LAB_10adeab8c:
          if (*(long *)(lVar15 + 0x18) == 0) {
            FUN_10adfb1c4(uVar9,ppuVar2[3]);
            *(ulong *)(lVar15 + 0x18) = uVar9;
            *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | uVar17;
            puVar13 = ppuVar2[1];
          }
          else {
            FUN_10ade99e8(*(long *)(lVar15 + 0x18));
            *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | uVar17;
            puVar13 = ppuVar2[1];
          }
        }
        if (((ulong)puVar13 & 1) != 0) {
          unaff_x30 = 0x10adeabc4;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          puVar12 = (ulong *)(lVar15 + 8);
          unaff_x19 = puVar14;
          unaff_x20 = param_2;
          unaff_x29 = puVar1;
          goto code_r0x00010b4d197c;
        }
      }
      else {
        FUN_10adfb9a4(plVar16,*(undefined8 *)(param_2 + 0x10));
        *(long **)(param_1 + 0x10) = plVar16;
      }
    }
  }
  puVar12 = puVar14;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar12 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10adeac50; end: 10adeaec3;  */

void FUN_10adeac50(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x58) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x60) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x68) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x70) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x78) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar4 = (ulong *)(param_1 + 0x40);
  uVar3 = *puVar4;
  if (uVar3 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      if ((uVar3 & 1) == 0) {
        uVar5 = 1;
        puVar6 = puVar4;
LAB_10adeadac:
        do {
          if ((long *)*puVar6 != (long *)0x0) {
            (**(code **)(*(long *)*puVar6 + 8))();
          }
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
        uVar3 = *puVar4;
        if ((uVar3 & 1) == 0) goto LAB_10adeadd4;
      }
      else {
        uVar5 = (ulong)*(uint *)(uVar3 - 1);
        if (0 < (int)*(uint *)(uVar3 - 1)) {
          puVar6 = (ulong *)(uVar3 + 7);
          goto LAB_10adeadac;
        }
      }
      __ZdlPv(uVar3 - 1);
    }
LAB_10adeadd4:
    *puVar4 = 0;
  }
  puVar4 = (ulong *)(param_1 + 0x10);
  puVar6 = (ulong *)(param_1 + 0x28);
  uVar3 = *puVar6;
  if (uVar3 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      if ((uVar3 & 1) == 0) {
        uVar5 = 1;
        puVar7 = puVar6;
LAB_10adeae1c:
        do {
          if ((long *)*puVar7 != (long *)0x0) {
            (**(code **)(*(long *)*puVar7 + 8))();
          }
          uVar5 = uVar5 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar5 != 0);
        uVar3 = *puVar6;
        if ((uVar3 & 1) == 0) goto LAB_10adeae44;
      }
      else {
        uVar5 = (ulong)*(uint *)(uVar3 - 1);
        if (0 < (int)*(uint *)(uVar3 - 1)) {
          puVar7 = (ulong *)(uVar3 + 7);
          goto LAB_10adeae1c;
        }
      }
      __ZdlPv(uVar3 - 1);
    }
LAB_10adeae44:
    *puVar6 = 0;
  }
  uVar3 = *puVar4;
  if (uVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adeaeac;
  if ((uVar3 & 1) == 0) {
    uVar5 = 1;
    puVar6 = puVar4;
LAB_10adeae84:
    do {
      if ((long *)*puVar6 != (long *)0x0) {
        (**(code **)(*(long *)*puVar6 + 8))();
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    uVar3 = *puVar4;
    if ((uVar3 & 1) == 0) goto LAB_10adeaeac;
  }
  else {
    uVar5 = (ulong)*(uint *)(uVar3 - 1);
    if (0 < (int)*(uint *)(uVar3 - 1)) {
      puVar6 = (ulong *)(uVar3 + 7);
      goto LAB_10adeae84;
    }
  }
  __ZdlPv(uVar3 - 1);
LAB_10adeaeac:
  *puVar4 = 0;
  return;
}



/* Entry: 10adeaec4; end: 10adeaefb;  */

long FUN_10adeaec4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10adeac50(param_1);
  return param_1;
}



/* Entry: 10adeaefc; end: 10adeaf33;  */

void FUN_10adeaefc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10adeac50(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10adeaf34; end: 10adeaf3f;  */

undefined ** FUN_10adeaf34(void)

{
  return &PTR_DAT_110c76978;
}



/* Entry: 10adeaf40; end: 10adec417;  */

/* WARNING: Removing unreachable block (ram,0x00010adec1dc) */
/* WARNING: Removing unreachable block (ram,0x00010adebdd0) */
/* WARNING: Removing unreachable block (ram,0x00010adebddc) */
/* WARNING: Removing unreachable block (ram,0x00010adebbf4) */
/* WARNING: Removing unreachable block (ram,0x00010adeb628) */
/* WARNING: Removing unreachable block (ram,0x00010adeb640) */
/* WARNING: Removing unreachable block (ram,0x00010adeb64c) */
/* WARNING: Removing unreachable block (ram,0x00010adeb61c) */
/* WARNING: Removing unreachable block (ram,0x00010adeb658) */
/* WARNING: Removing unreachable block (ram,0x00010adebbe8) */
/* WARNING: Removing unreachable block (ram,0x00010adebbdc) */
/* WARNING: Removing unreachable block (ram,0x00010adebde8) */
/* WARNING: Removing unreachable block (ram,0x00010adec1d0) */
/* WARNING: Removing unreachable block (ram,0x00010adec1c4) */
/* WARNING: Removing unreachable block (ram,0x00010adeb634) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10adeaf40(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  undefined8 uVar28;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar23 = *(uint *)(param_1 + 0x80);
  if (uVar23 == 0) {
    if (*(char *)(param_1 + 0x8c) == '\x01') goto LAB_10adeafa8;
LAB_10adeb020:
    if (*(char *)(param_1 + 0x8d) != '\x01') goto LAB_10adeafd4;
LAB_10adeb02c:
    pbVar15 = *(byte **)param_3;
    if (param_2 < pbVar15) {
      *param_2 = 0x18;
      param_2[1] = 1;
      param_2 = param_2 + 2;
      uVar23 = *(uint *)(param_1 + 0x84);
      goto joined_r0x00010adeb050;
    }
    do {
      if (param_3[0x38] == 1) {
        param_2 = param_3 + 0x10;
        break;
      }
      pbVar14 = param_3;
      func_0x000107c303dc();
      param_2 = pbVar14 + ((int)param_2 - (int)pbVar15);
      pbVar15 = *(byte **)param_3;
    } while (pbVar15 <= param_2);
    bVar12 = *(byte *)(param_1 + 0x8d);
    *param_2 = 0x18;
    param_2[1] = bVar12;
    param_2 = param_2 + 2;
    uVar23 = *(uint *)(param_1 + 0x84);
    if (uVar23 != 0) goto LAB_10adeafdc;
LAB_10adeb054:
    iVar26 = *(int *)(param_1 + 0x88);
  }
  else {
    pbVar15 = *(byte **)param_3;
    if (param_2 < pbVar15) {
      *param_2 = 8;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          uVar23 = *(uint *)(param_1 + 0x80);
          pbVar15 = param_3 + 0x11;
          param_3[0x10] = 8;
          goto joined_r0x00010adec2f8;
        }
        pbVar14 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar14 + ((int)param_2 - (int)pbVar15);
        pbVar15 = *(byte **)param_3;
      } while (pbVar15 <= param_2);
      uVar23 = *(uint *)(param_1 + 0x80);
      *param_2 = 8;
    }
    pbVar15 = param_2 + 1;
joined_r0x00010adec2f8:
    uVar22 = (ulong)(int)uVar23;
    pbVar14 = pbVar15;
    uVar24 = uVar22;
    if (0x7f < uVar23) {
      do {
        pbVar15 = pbVar14 + 1;
        *pbVar14 = (byte)uVar24 | 0x80;
        uVar22 = uVar24 >> 7;
        uVar16 = uVar24 >> 0xe;
        pbVar14 = pbVar15;
        uVar24 = uVar22;
      } while (uVar16 != 0);
    }
    param_2 = pbVar15 + 1;
    *pbVar15 = (byte)uVar22;
    if (*(char *)(param_1 + 0x8c) != '\x01') goto LAB_10adeb020;
LAB_10adeafa8:
    pbVar15 = *(byte **)param_3;
    if (param_2 < pbVar15) {
      bVar12 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar14 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar14 + ((int)param_2 - (int)pbVar15);
        pbVar15 = *(byte **)param_3;
      } while (pbVar15 <= param_2);
      bVar12 = *(byte *)(param_1 + 0x8c);
    }
    *param_2 = 0x10;
    param_2[1] = bVar12;
    param_2 = param_2 + 2;
    if (*(char *)(param_1 + 0x8d) == '\x01') goto LAB_10adeb02c;
LAB_10adeafd4:
    uVar23 = *(uint *)(param_1 + 0x84);
joined_r0x00010adeb050:
    if (uVar23 == 0) goto LAB_10adeb054;
LAB_10adeafdc:
    pbVar15 = *(byte **)param_3;
    if (param_2 < pbVar15) {
      *param_2 = 0x20;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          uVar23 = *(uint *)(param_1 + 0x84);
          pbVar15 = param_3 + 0x11;
          param_3[0x10] = 0x20;
          goto joined_r0x00010adec318;
        }
        pbVar14 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar14 + ((int)param_2 - (int)pbVar15);
        pbVar15 = *(byte **)param_3;
      } while (pbVar15 <= param_2);
      uVar23 = *(uint *)(param_1 + 0x84);
      *param_2 = 0x20;
    }
    pbVar15 = param_2 + 1;
joined_r0x00010adec318:
    uVar22 = (ulong)(int)uVar23;
    pbVar14 = pbVar15;
    uVar24 = uVar22;
    if (0x7f < uVar23) {
      do {
        pbVar15 = pbVar14 + 1;
        *pbVar14 = (byte)uVar24 | 0x80;
        uVar22 = uVar24 >> 7;
        uVar16 = uVar24 >> 0xe;
        pbVar14 = pbVar15;
        uVar24 = uVar22;
      } while (uVar16 != 0);
    }
    param_2 = pbVar15 + 1;
    *pbVar15 = (byte)uVar22;
    iVar26 = *(int *)(param_1 + 0x88);
  }
  if (iVar26 != 0) {
    pbVar15 = param_3;
    func_0x0001088b96ec(param_3,iVar26,param_2);
    param_2 = pbVar15;
  }
  puVar20 = (ulong *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  cVar5 = *(char *)((long)puVar20 + 0x17);
  uVar22 = (ulong)cVar5;
  if ((long)uVar22 < 0) {
    if (puVar20[1] != 0) {
      puVar4 = (ulong *)*puVar20;
      uVar24 = puVar20[1];
      goto joined_r0x00010adeb09c;
    }
LAB_10adeb1c4:
    iVar26 = *(int *)(param_1 + 0x90);
    pbVar15 = param_2;
  }
  else {
    puVar4 = puVar20;
    uVar24 = uVar22;
    if ((int)cVar5 == 0) goto LAB_10adeb1c4;
joined_r0x00010adeb09c:
    if (uVar24 << 0x20 == 0) {
LAB_10adeb130:
      if (((uint)(int)cVar5 >> 7 & 1) != 0) goto LAB_10adeb174;
LAB_10adeb134:
      uVar22 = uVar22 & 0xff;
LAB_10adeb180:
      if ((long)uVar22 <= (*(long *)param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x32;
        param_2[1] = (byte)uVar22;
        puVar4 = (ulong *)*puVar20;
        if (-1 < *(char *)((long)puVar20 + 0x17)) {
          puVar4 = puVar20;
        }
        _memcpy(param_2 + 2,puVar4,uVar22);
        param_2 = param_2 + 2 + uVar22;
        goto LAB_10adeb1c4;
      }
    }
    else {
      lVar11 = (long)(uVar24 << 0x20) >> 0x20;
      puVar3 = (ulong *)((long)puVar4 + lVar11);
      puVar18 = puVar4;
      for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
        puVar18 = puVar18 + 1;
        lVar11 = lVar11 + -8;
      }
      puVar7 = puVar4;
      if (puVar4 < puVar3) {
        uVar16 = (long)puVar3 - (long)puVar18;
        puVar18 = puVar4;
        for (uVar24 = uVar16 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
          puVar7 = puVar18;
          if ((char)*puVar18 < '\0') goto LAB_10adeb118;
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        puVar4 = (ulong *)((long)puVar4 + uVar16);
        puVar7 = puVar4;
        if (2 < uVar16 - 1) {
          puVar18 = (ulong *)((long)puVar18 + 3);
          do {
            puVar7 = puVar18;
            if ((char)*puVar18 < '\0') break;
            puVar2 = (ulong *)((long)puVar18 + 1);
            puVar18 = (ulong *)((long)puVar18 + 4);
            puVar7 = puVar4;
          } while (puVar2 != puVar4);
        }
      }
LAB_10adeb118:
      func_0x000107c34ffc(puVar7,puVar3,0);
      if (puVar7 != (ulong *)0x0) goto LAB_10adeb130;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6aef3f,0x2d,&UNK_10f774276);
      uVar22 = (ulong)*(byte *)((long)puVar20 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) goto LAB_10adeb134;
LAB_10adeb174:
      uVar22 = puVar20[1];
      if ((long)uVar22 < 0x80) goto LAB_10adeb180;
    }
    pbVar15 = param_3;
    func_0x00010b4d50d0(param_3,6,puVar20,param_2);
    iVar26 = *(int *)(param_1 + 0x90);
  }
  pbVar14 = pbVar15;
  if (iVar26 != 0) {
    pbVar14 = param_3;
    func_0x00010598f468(param_3,iVar26,pbVar15);
  }
  pbVar15 = pbVar14;
  if (*(int *)(param_1 + 0x94) != 0) {
    pbVar15 = param_3;
    func_0x000108b32050(param_3,*(int *)(param_1 + 0x94),pbVar14);
  }
  if (*(char *)(param_1 + 0x8e) == '\x01') {
    pbVar14 = *(byte **)param_3;
    if (pbVar15 < pbVar14) {
      bVar12 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar15 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar15 = pbVar8 + ((int)pbVar15 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= pbVar15);
      bVar12 = *(byte *)(param_1 + 0x8e);
    }
    *pbVar15 = 0x48;
    pbVar15[1] = bVar12;
    pbVar15 = pbVar15 + 2;
    if (*(char *)(param_1 + 0x8f) == '\x01') goto LAB_10adeb284;
LAB_10adeb224:
    if (*(char *)(param_1 + 0x98) != '\x01') goto LAB_10adeb2b0;
LAB_10adeb230:
    pbVar14 = *(byte **)param_3;
    if (pbVar15 < pbVar14) {
      bVar12 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar15 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar15 = pbVar8 + ((int)pbVar15 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= pbVar15);
      bVar12 = *(byte *)(param_1 + 0x98);
    }
    *pbVar15 = 0x58;
    pbVar15[1] = bVar12;
    pbVar15 = pbVar15 + 2;
    puVar20 = (ulong *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    uVar22 = (ulong)*(char *)((long)puVar20 + 0x17);
    if (-1 < (long)uVar22) goto LAB_10adeb2c0;
LAB_10adeb260:
    if (puVar20[1] != 0) {
      puVar4 = (ulong *)*puVar20;
      pbVar14 = pbVar15;
      uVar24 = puVar20[1];
      goto joined_r0x00010adeb270;
    }
LAB_10adeb3f4:
    iVar26 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(char *)(param_1 + 0x8f) != '\x01') goto LAB_10adeb224;
LAB_10adeb284:
    pbVar14 = *(byte **)param_3;
    if (pbVar15 < pbVar14) {
      bVar12 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar15 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar15 = pbVar8 + ((int)pbVar15 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= pbVar15);
      bVar12 = *(byte *)(param_1 + 0x8f);
    }
    *pbVar15 = 0x50;
    pbVar15[1] = bVar12;
    pbVar15 = pbVar15 + 2;
    if (*(char *)(param_1 + 0x98) == '\x01') goto LAB_10adeb230;
LAB_10adeb2b0:
    puVar20 = (ulong *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    uVar22 = (ulong)*(char *)((long)puVar20 + 0x17);
    if ((long)uVar22 < 0) goto LAB_10adeb260;
LAB_10adeb2c0:
    puVar4 = puVar20;
    pbVar14 = pbVar15;
    uVar24 = uVar22;
    if ((int)uVar22 == 0) goto LAB_10adeb3f4;
joined_r0x00010adeb270:
    if (uVar24 << 0x20 == 0) {
LAB_10adeb360:
      if (((uint)uVar22 >> 7 & 1) != 0) goto LAB_10adeb3a4;
LAB_10adeb364:
      uVar22 = uVar22 & 0xff;
LAB_10adeb3b0:
      if ((long)uVar22 <= (*(long *)param_3 - (long)pbVar14) + 0xe) {
        *pbVar14 = 0x62;
        pbVar14[1] = (byte)uVar22;
        puVar4 = (ulong *)*puVar20;
        if (-1 < *(char *)((long)puVar20 + 0x17)) {
          puVar4 = puVar20;
        }
        _memcpy(pbVar14 + 2,puVar4,uVar22);
        pbVar15 = pbVar14 + 2 + uVar22;
        goto LAB_10adeb3f4;
      }
    }
    else {
      lVar11 = (long)(uVar24 << 0x20) >> 0x20;
      puVar3 = (ulong *)((long)puVar4 + lVar11);
      puVar18 = puVar4;
      for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
        puVar18 = puVar18 + 1;
        lVar11 = lVar11 + -8;
      }
      puVar7 = puVar4;
      if (puVar4 < puVar3) {
        uVar16 = (long)puVar3 - (long)puVar18;
        puVar18 = puVar4;
        for (uVar24 = uVar16 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
          puVar7 = puVar18;
          if ((char)*puVar18 < '\0') goto LAB_10adeb348;
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        puVar4 = (ulong *)((long)puVar4 + uVar16);
        puVar7 = puVar4;
        if (2 < uVar16 - 1) {
          puVar18 = (ulong *)((long)puVar18 + 3);
          do {
            puVar7 = puVar18;
            if ((char)*puVar18 < '\0') break;
            puVar2 = (ulong *)((long)puVar18 + 1);
            puVar18 = (ulong *)((long)puVar18 + 4);
            puVar7 = puVar4;
          } while (puVar2 != puVar4);
        }
      }
LAB_10adeb348:
      func_0x000107c34ffc(puVar7,puVar3,0);
      if (puVar7 != (ulong *)0x0) goto LAB_10adeb360;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6aef6d,0x29,&UNK_10f774276);
      uVar22 = (ulong)*(byte *)((long)puVar20 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) goto LAB_10adeb364;
LAB_10adeb3a4:
      uVar22 = puVar20[1];
      if ((long)uVar22 < 0x80) goto LAB_10adeb3b0;
    }
    pbVar15 = param_3;
    func_0x00010b4d50d0(param_3,0xc,puVar20,pbVar14);
    iVar26 = *(int *)(param_1 + 0x18);
  }
  if (iVar26 != 0) {
    iVar25 = 0;
    pbVar8 = param_3 + 0x10;
    pbVar1 = param_3 + 0x20;
    pbVar14 = pbVar15;
    do {
      uVar22 = *(ulong *)(param_1 + 0x10);
      puVar20 = (ulong *)(param_1 + 0x10);
      if ((uVar22 & 1) != 0) {
        puVar20 = (ulong *)(uVar22 + (long)iVar25 * 8 + 7);
      }
      pbVar15 = (byte *)*puVar20;
      uVar23 = *(uint *)(pbVar15 + 0x38);
      pbVar27 = *(byte **)param_3;
      pbVar9 = pbVar14;
      if (pbVar27 <= pbVar14) {
        do {
          pbVar9 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar17 = pbVar1;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adeb55c:
            *(byte **)param_3 = pbVar17;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar28 = *(undefined8 *)pbVar27;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar27 + 8);
              *(undefined8 *)pbVar8 = uVar28;
              *(byte **)(param_3 + 8) = pbVar27;
              goto LAB_10adeb55c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar8,(long)pbVar27 - (long)pbVar8);
            do {
              plVar10 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar10 + 0x10))(plVar10,&pbStack_70,&uStack_64);
              if (((ulong)plVar10 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar1;
                goto LAB_10adeb4b8;
              }
            } while (uStack_64 == 0);
            puVar19 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar28 = *puVar19;
              *(undefined8 *)(param_3 + 0x18) = puVar19[1];
              *(undefined8 *)pbVar8 = uVar28;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar17 = pbVar8 + (int)uStack_64;
              goto LAB_10adeb55c;
            }
            uVar28 = *puVar19;
            *(undefined8 *)(pbStack_70 + 8) = puVar19[1];
            *(undefined8 *)pbStack_70 = uVar28;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar9 = pbStack_70;
            pbVar17 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adeb4b8:
          pbVar14 = pbVar9 + ((int)pbVar14 - (int)pbVar27);
          pbVar9 = pbVar14;
          pbVar27 = pbVar17;
        } while (pbVar17 <= pbVar14);
      }
      pbVar14 = pbVar9 + 1;
      *pbVar9 = 0x6a;
      if (0x7f < uVar23) {
        do {
          pbVar9 = pbVar14;
          pbVar14 = pbVar9 + 1;
          *pbVar9 = (byte)uVar23 | 0x80;
          uVar13 = uVar23 >> 0xe;
          uVar23 = uVar23 >> 7;
        } while (uVar13 != 0);
      }
      *pbVar14 = (byte)uVar23;
      (**(code **)(*(long *)pbVar15 + 0x38))(pbVar15,pbVar9 + 2,param_3);
      iVar25 = iVar25 + 1;
      pbVar14 = pbVar15;
    } while (iVar25 != iVar26);
  }
  iVar26 = *(int *)(param_1 + 0x30);
  if (iVar26 != 0) {
    iVar25 = 0;
    pbVar8 = param_3 + 0x10;
    pbVar1 = param_3 + 0x20;
    pbVar14 = pbVar15;
    do {
      uVar22 = *(ulong *)(param_1 + 0x28);
      puVar20 = (ulong *)(param_1 + 0x28);
      if ((uVar22 & 1) != 0) {
        puVar20 = (ulong *)(uVar22 + (long)iVar25 * 8 + 7);
      }
      pbVar15 = (byte *)*puVar20;
      uVar23 = *(uint *)(pbVar15 + 0x2c);
      pbVar27 = *(byte **)param_3;
      pbVar9 = pbVar14;
      if (pbVar27 <= pbVar14) {
        do {
          pbVar9 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar17 = pbVar1;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adeb9e0:
            *(byte **)param_3 = pbVar17;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar28 = *(undefined8 *)pbVar27;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar27 + 8);
              *(undefined8 *)pbVar8 = uVar28;
              *(byte **)(param_3 + 8) = pbVar27;
              goto LAB_10adeb9e0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar8,(long)pbVar27 - (long)pbVar8);
            do {
              plVar10 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar10 + 0x10))(plVar10,&pbStack_70,&uStack_64);
              if (((ulong)plVar10 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar1;
                goto LAB_10adeb93c;
              }
            } while (uStack_64 == 0);
            puVar19 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar28 = *puVar19;
              *(undefined8 *)(param_3 + 0x18) = puVar19[1];
              *(undefined8 *)pbVar8 = uVar28;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar17 = pbVar8 + (int)uStack_64;
              goto LAB_10adeb9e0;
            }
            uVar28 = *puVar19;
            *(undefined8 *)(pbStack_70 + 8) = puVar19[1];
            *(undefined8 *)pbStack_70 = uVar28;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar9 = pbStack_70;
            pbVar17 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adeb93c:
          pbVar14 = pbVar9 + ((int)pbVar14 - (int)pbVar27);
          pbVar9 = pbVar14;
          pbVar27 = pbVar17;
        } while (pbVar17 <= pbVar14);
      }
      pbVar14 = pbVar9 + 1;
      *pbVar9 = 0x72;
      if (0x7f < uVar23) {
        do {
          pbVar9 = pbVar14;
          pbVar14 = pbVar9 + 1;
          *pbVar9 = (byte)uVar23 | 0x80;
          uVar13 = uVar23 >> 0xe;
          uVar23 = uVar23 >> 7;
        } while (uVar13 != 0);
      }
      *pbVar14 = (byte)uVar23;
      (**(code **)(*(long *)pbVar15 + 0x38))(pbVar15,pbVar9 + 2,param_3);
      iVar25 = iVar25 + 1;
      pbVar14 = pbVar15;
    } while (iVar25 != iVar26);
  }
  puVar20 = (ulong *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
  cVar5 = *(char *)((long)puVar20 + 0x17);
  uVar22 = (ulong)cVar5;
  if ((long)uVar22 < 0) {
    if (puVar20[1] != 0) {
      puVar4 = (ulong *)*puVar20;
      uVar24 = puVar20[1];
      goto joined_r0x00010adeba4c;
    }
LAB_10adebb74:
    puVar20 = (ulong *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
    uVar22 = (ulong)*(char *)((long)puVar20 + 0x17);
    pbVar14 = pbVar15;
    if (-1 < (long)uVar22) goto LAB_10adebb84;
LAB_10adebc30:
    if (puVar20[1] != 0) {
      puVar4 = (ulong *)*puVar20;
      pbVar15 = pbVar14;
      uVar24 = puVar20[1];
      goto joined_r0x00010adebc40;
    }
LAB_10adebd68:
    puVar20 = (ulong *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
    uVar22 = (ulong)*(char *)((long)puVar20 + 0x17);
    if (-1 < (long)uVar22) goto LAB_10adebd78;
LAB_10adebe24:
    if (puVar20[1] != 0) {
      puVar4 = (ulong *)*puVar20;
      uVar24 = puVar20[1];
      goto joined_r0x00010adebe34;
    }
  }
  else {
    puVar4 = puVar20;
    uVar24 = uVar22;
    if ((int)cVar5 == 0) goto LAB_10adebb74;
joined_r0x00010adeba4c:
    if (uVar24 << 0x20 == 0) {
LAB_10adebae0:
      if (((uint)(int)cVar5 >> 7 & 1) != 0) goto LAB_10adebb24;
LAB_10adebae4:
      uVar22 = uVar22 & 0xff;
LAB_10adebb30:
      if ((long)uVar22 <= (*(long *)param_3 - (long)pbVar15) + 0xe) {
        *pbVar15 = 0x7a;
        pbVar15[1] = (byte)uVar22;
        puVar4 = (ulong *)*puVar20;
        if (-1 < *(char *)((long)puVar20 + 0x17)) {
          puVar4 = puVar20;
        }
        _memcpy(pbVar15 + 2,puVar4,uVar22);
        pbVar15 = pbVar15 + 2 + uVar22;
        goto LAB_10adebb74;
      }
    }
    else {
      lVar11 = (long)(uVar24 << 0x20) >> 0x20;
      puVar3 = (ulong *)((long)puVar4 + lVar11);
      puVar18 = puVar4;
      for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
        puVar18 = puVar18 + 1;
        lVar11 = lVar11 + -8;
      }
      puVar7 = puVar4;
      if (puVar4 < puVar3) {
        uVar16 = (long)puVar3 - (long)puVar18;
        puVar18 = puVar4;
        for (uVar24 = uVar16 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
          puVar7 = puVar18;
          if ((char)*puVar18 < '\0') goto LAB_10adebac8;
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        puVar4 = (ulong *)((long)puVar4 + uVar16);
        puVar7 = puVar4;
        if (2 < uVar16 - 1) {
          puVar18 = (ulong *)((long)puVar18 + 3);
          do {
            puVar7 = puVar18;
            if ((char)*puVar18 < '\0') break;
            puVar2 = (ulong *)((long)puVar18 + 1);
            puVar18 = (ulong *)((long)puVar18 + 4);
            puVar7 = puVar4;
          } while (puVar2 != puVar4);
        }
      }
LAB_10adebac8:
      func_0x000107c34ffc(puVar7,puVar3,0);
      if (puVar7 != (ulong *)0x0) goto LAB_10adebae0;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6aef97,0x27,&UNK_10f774276);
      uVar22 = (ulong)*(byte *)((long)puVar20 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) goto LAB_10adebae4;
LAB_10adebb24:
      uVar22 = puVar20[1];
      if ((long)uVar22 < 0x80) goto LAB_10adebb30;
    }
    pbVar14 = param_3;
    func_0x00010b4d50d0(param_3,0xf,puVar20,pbVar15);
    puVar20 = (ulong *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
    uVar22 = (ulong)*(char *)((long)puVar20 + 0x17);
    if ((long)uVar22 < 0) goto LAB_10adebc30;
LAB_10adebb84:
    puVar4 = puVar20;
    pbVar15 = pbVar14;
    uVar24 = uVar22;
    if ((int)uVar22 == 0) goto LAB_10adebd68;
joined_r0x00010adebc40:
    if (uVar24 << 0x20 == 0) {
LAB_10adebcd4:
      if (((uint)uVar22 >> 7 & 1) != 0) goto LAB_10adebd18;
LAB_10adebcd8:
      uVar22 = uVar22 & 0xff;
LAB_10adebd24:
      if ((long)uVar22 <= (*(long *)param_3 - (long)pbVar15) + 0xd) {
        pbVar15[0] = 0x82;
        pbVar15[1] = 1;
        pbVar15[2] = (byte)uVar22;
        puVar4 = (ulong *)*puVar20;
        if (-1 < *(char *)((long)puVar20 + 0x17)) {
          puVar4 = puVar20;
        }
        _memcpy(pbVar15 + 3,puVar4,uVar22);
        pbVar14 = pbVar15 + 3 + uVar22;
        goto LAB_10adebd68;
      }
    }
    else {
      lVar11 = (long)(uVar24 << 0x20) >> 0x20;
      puVar3 = (ulong *)((long)puVar4 + lVar11);
      puVar18 = puVar4;
      for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
        puVar18 = puVar18 + 1;
        lVar11 = lVar11 + -8;
      }
      puVar7 = puVar4;
      if (puVar4 < puVar3) {
        uVar16 = (long)puVar3 - (long)puVar18;
        puVar18 = puVar4;
        for (uVar24 = uVar16 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
          puVar7 = puVar18;
          if ((char)*puVar18 < '\0') goto LAB_10adebcbc;
          puVar18 = (ulong *)((long)puVar18 + 1);
        }
        puVar4 = (ulong *)((long)puVar4 + uVar16);
        puVar7 = puVar4;
        if (2 < uVar16 - 1) {
          puVar18 = (ulong *)((long)puVar18 + 3);
          do {
            puVar7 = puVar18;
            if ((char)*puVar18 < '\0') break;
            puVar2 = (ulong *)((long)puVar18 + 1);
            puVar18 = (ulong *)((long)puVar18 + 4);
            puVar7 = puVar4;
          } while (puVar2 != puVar4);
        }
      }
LAB_10adebcbc:
      func_0x000107c34ffc(puVar7,puVar3,0);
      if (puVar7 != (ulong *)0x0) goto LAB_10adebcd4;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6aefbf,0x2b,&UNK_10f774276);
      uVar22 = (ulong)*(byte *)((long)puVar20 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) goto LAB_10adebcd8;
LAB_10adebd18:
      uVar22 = puVar20[1];
      if ((long)uVar22 < 0x80) goto LAB_10adebd24;
    }
    pbVar14 = param_3;
    func_0x00010b4d50d0(param_3,0x10,puVar20,pbVar15);
    puVar20 = (ulong *)(*(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc);
    uVar22 = (ulong)*(char *)((long)puVar20 + 0x17);
    if ((long)uVar22 < 0) goto LAB_10adebe24;
LAB_10adebd78:
    puVar4 = puVar20;
    uVar24 = uVar22;
    if ((int)uVar22 != 0) {
joined_r0x00010adebe34:
      if (uVar24 << 0x20 == 0) {
LAB_10adebec8:
        if (((uint)uVar22 >> 7 & 1) != 0) goto LAB_10adebf0c;
LAB_10adebecc:
        uVar22 = uVar22 & 0xff;
LAB_10adebf18:
        if ((long)uVar22 <= (*(long *)param_3 - (long)pbVar14) + 0xd) {
          pbVar14[0] = 0x8a;
          pbVar14[1] = 1;
          pbVar14[2] = (byte)uVar22;
          puVar4 = (ulong *)*puVar20;
          if (-1 < *(char *)((long)puVar20 + 0x17)) {
            puVar4 = puVar20;
          }
          _memcpy(pbVar14 + 3,puVar4,uVar22);
          pbVar14 = pbVar14 + 3 + uVar22;
          goto LAB_10adebf5c;
        }
      }
      else {
        lVar11 = (long)(uVar24 << 0x20) >> 0x20;
        puVar3 = (ulong *)((long)puVar4 + lVar11);
        puVar18 = puVar4;
        for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
          puVar18 = puVar18 + 1;
          lVar11 = lVar11 + -8;
        }
        puVar7 = puVar4;
        if (puVar4 < puVar3) {
          uVar16 = (long)puVar3 - (long)puVar18;
          puVar18 = puVar4;
          for (uVar24 = uVar16 & 3; uVar24 != 0; uVar24 = uVar24 - 1) {
            puVar7 = puVar18;
            if ((char)*puVar18 < '\0') goto LAB_10adebeb0;
            puVar18 = (ulong *)((long)puVar18 + 1);
          }
          puVar4 = (ulong *)((long)puVar4 + uVar16);
          puVar7 = puVar4;
          if (2 < uVar16 - 1) {
            puVar18 = (ulong *)((long)puVar18 + 3);
            do {
              puVar7 = puVar18;
              if ((char)*puVar18 < '\0') break;
              puVar2 = (ulong *)((long)puVar18 + 1);
              puVar18 = (ulong *)((long)puVar18 + 4);
              puVar7 = puVar4;
            } while (puVar2 != puVar4);
          }
        }
LAB_10adebeb0:
        func_0x000107c34ffc(puVar7,puVar3,0);
        if (puVar7 != (ulong *)0x0) goto LAB_10adebec8;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6aefeb,0x2b,&UNK_10f774276);
        uVar22 = (ulong)*(byte *)((long)puVar20 + 0x17);
        if (-1 < (char)*(byte *)((long)puVar20 + 0x17)) goto LAB_10adebecc;
LAB_10adebf0c:
        uVar22 = puVar20[1];
        if ((long)uVar22 < 0x80) goto LAB_10adebf18;
      }
      pbVar15 = param_3;
      func_0x00010b4d50d0(param_3,0x11,puVar20,pbVar14);
      uVar23 = *(uint *)(param_1 + 0x9c);
      goto joined_r0x00010adebf60;
    }
  }
LAB_10adebf5c:
  uVar23 = *(uint *)(param_1 + 0x9c);
  pbVar15 = pbVar14;
joined_r0x00010adebf60:
  if (uVar23 != 0) {
    pbVar14 = *(byte **)param_3;
    if (pbVar15 < pbVar14) {
      pbVar15[0] = 0x90;
      pbVar15[1] = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          uVar23 = *(uint *)(param_1 + 0x9c);
          pbVar14 = param_3 + 0x12;
          param_3[0x10] = 0x90;
          param_3[0x11] = 1;
          goto joined_r0x00010adec334;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar15 = pbVar8 + ((int)pbVar15 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= pbVar15);
      uVar23 = *(uint *)(param_1 + 0x9c);
      pbVar15[0] = 0x90;
      pbVar15[1] = 1;
    }
    pbVar14 = pbVar15 + 2;
joined_r0x00010adec334:
    pbVar15 = pbVar14;
    uVar13 = uVar23;
    if (0x7f < uVar23) {
      do {
        pbVar14 = pbVar15 + 1;
        *pbVar15 = (byte)uVar13 | 0x80;
        uVar23 = uVar13 >> 7;
        uVar6 = uVar13 >> 0xe;
        pbVar15 = pbVar14;
        uVar13 = uVar23;
      } while (uVar6 != 0);
    }
    pbVar15 = pbVar14 + 1;
    *pbVar14 = (byte)uVar23;
  }
  if (*(char *)(param_1 + 0x99) == '\x01') {
    pbVar14 = *(byte **)param_3;
    if (pbVar15 < pbVar14) {
      bVar12 = 1;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar15 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        pbVar15 = pbVar8 + ((int)pbVar15 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= pbVar15);
      bVar12 = *(byte *)(param_1 + 0x99);
    }
    pbVar15[0] = 0x98;
    pbVar15[1] = 1;
    pbVar15[2] = bVar12;
    pbVar15 = pbVar15 + 3;
  }
  iVar26 = *(int *)(param_1 + 0x48);
  if (iVar26 != 0) {
    iVar25 = 0;
    pbVar8 = param_3 + 0x10;
    pbVar1 = param_3 + 0x20;
    pbVar14 = pbVar15;
    do {
      uVar22 = *(ulong *)(param_1 + 0x40);
      puVar20 = (ulong *)(param_1 + 0x40);
      if ((uVar22 & 1) != 0) {
        puVar20 = (ulong *)(uVar22 + (long)iVar25 * 8 + 7);
      }
      pbVar15 = (byte *)*puVar20;
      uVar23 = *(uint *)(pbVar15 + 0x20);
      pbVar27 = *(byte **)param_3;
      pbVar9 = pbVar14;
      if (pbVar27 <= pbVar14) {
        do {
          pbVar9 = pbVar8;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar17 = pbVar1;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adec120:
            *(byte **)param_3 = pbVar17;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar28 = *(undefined8 *)pbVar27;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar27 + 8);
              *(undefined8 *)pbVar8 = uVar28;
              *(byte **)(param_3 + 8) = pbVar27;
              goto LAB_10adec120;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar8,(long)pbVar27 - (long)pbVar8);
            do {
              plVar10 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar10 + 0x10))(plVar10,&pbStack_70,&uStack_64);
              if (((ulong)plVar10 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar1;
                goto LAB_10adec07c;
              }
            } while (uStack_64 == 0);
            puVar19 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar28 = *puVar19;
              *(undefined8 *)(param_3 + 0x18) = puVar19[1];
              *(undefined8 *)pbVar8 = uVar28;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar17 = pbVar8 + (int)uStack_64;
              goto LAB_10adec120;
            }
            uVar28 = *puVar19;
            *(undefined8 *)(pbStack_70 + 8) = puVar19[1];
            *(undefined8 *)pbStack_70 = uVar28;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar9 = pbStack_70;
            pbVar17 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adec07c:
          pbVar14 = pbVar9 + ((int)pbVar14 - (int)pbVar27);
          pbVar9 = pbVar14;
          pbVar27 = pbVar17;
        } while (pbVar17 <= pbVar14);
      }
      pbVar14 = pbVar9 + 2;
      pbVar9[0] = 0xa2;
      pbVar9[1] = 1;
      if (uVar23 < 0x80) {
        pbVar9 = pbVar9 + 1;
      }
      else {
        do {
          pbVar9 = pbVar14;
          pbVar14 = pbVar9 + 1;
          *pbVar9 = (byte)uVar23 | 0x80;
          uVar13 = uVar23 >> 0xe;
          uVar23 = uVar23 >> 7;
        } while (uVar13 != 0);
      }
      *pbVar14 = (byte)uVar23;
      (**(code **)(*(long *)pbVar15 + 0x38))(pbVar15,pbVar9 + 2,param_3);
      iVar25 = iVar25 + 1;
      pbVar14 = pbVar15;
    } while (iVar25 != iVar26);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar22 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar24 = (ulong)*(char *)(uVar22 + 0x1f);
    if ((long)uVar24 < 0) {
      lVar11 = *(long *)(uVar22 + 8);
      uVar24 = (ulong)*(uint *)(uVar22 + 0x10);
    }
    else {
      lVar11 = uVar22 + 8;
    }
    uVar23 = (uint)uVar24;
    if (*(long *)param_3 - (long)pbVar15 < (long)(int)uVar23) {
      pbVar14 = (byte *)((*(long *)param_3 - (long)pbVar15) + 0x10);
      if ((int)pbVar14 < (int)uVar23) {
        do {
          lVar21 = (long)(int)pbVar14;
          _memcpy(pbVar15,lVar11,lVar21);
          uVar23 = (int)uVar24 - (int)pbVar14;
          uVar24 = (ulong)uVar23;
          lVar11 = lVar11 + lVar21;
          pbVar15 = pbVar15 + lVar21;
          pbVar14 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar14 = pbVar14 + (0x10 - (long)(param_3 + 0x10));
              iVar26 = (int)pbVar14;
              pbVar15 = param_3 + 0x10;
              goto joined_r0x00010adec3f8;
            }
            pbVar8 = param_3;
            func_0x000107c303dc();
            pbVar15 = pbVar8 + ((int)pbVar15 - (int)pbVar14);
            pbVar14 = *(byte **)param_3;
          } while (pbVar14 <= pbVar15);
          pbVar14 = pbVar14 + (0x10 - (long)pbVar15);
          iVar26 = (int)pbVar14;
joined_r0x00010adec3f8:
        } while (iVar26 < (int)uVar23);
      }
      _memcpy(pbVar15,lVar11,(long)(int)uVar23);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adec418; end: 10adeca3f;  */

void FUN_10adec418(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  
  uVar10 = *(ulong *)(param_1 + 0x10);
  lVar20 = (long)*(int *)(param_1 + 0x18);
  puVar11 = (ulong *)(param_1 + 0x10);
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)(uVar10 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar20 = 0;
  }
  else {
    lVar21 = lVar20 << 3;
    do {
      uVar10 = *puVar11;
      FUN_10adf15c0();
      lVar20 = uVar10 + lVar20 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6);
      lVar21 = lVar21 + -8;
      puVar11 = puVar11 + 1;
    } while (lVar21 != 0);
  }
  uVar10 = *(ulong *)(param_1 + 0x28);
  iVar9 = *(int *)(param_1 + 0x30);
  lVar20 = lVar20 + iVar9;
  puVar11 = (ulong *)(param_1 + 0x28);
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)(uVar10 + 7);
  }
  if (iVar9 != 0) {
    puVar1 = puVar11 + iVar9;
    do {
      uVar12 = *puVar11;
      uVar4 = *(uint *)(uVar12 + 0x18);
      uVar13 = (ulong)uVar4;
      uVar10 = uVar13;
      if (0 < (int)uVar4) {
        uVar14 = *(ulong *)(uVar12 + 0x10);
        if ((uVar14 & 1) == 0) {
          uVar10 = *(ulong *)(uVar14 + 8);
          if (-1 < (char)*(byte *)(uVar14 + 0x17)) {
            uVar10 = (ulong)*(byte *)(uVar14 + 0x17);
          }
          uVar10 = uVar13 + uVar13 * (uVar10 + ((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6));
        }
        else {
          if (uVar4 == 1) {
            uVar15 = 0;
            uVar10 = 1;
          }
          else {
            lVar21 = 0;
            uVar15 = uVar13 & 0x7ffffffe;
            plVar17 = (long *)(uVar14 + 0xf);
            uVar8 = uVar15;
            do {
              bVar6 = *(byte *)(plVar17[-1] + 0x17);
              bVar5 = *(byte *)(*plVar17 + 0x17);
              uVar2 = *(ulong *)(plVar17[-1] + 8);
              if (-1 < (char)bVar6) {
                uVar2 = (ulong)bVar6;
              }
              uVar3 = *(ulong *)(*plVar17 + 8);
              if (-1 < (char)bVar5) {
                uVar3 = (ulong)bVar5;
              }
              uVar10 = uVar2 + uVar10 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
              lVar21 = uVar3 + lVar21 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
              plVar17 = plVar17 + 2;
              uVar8 = uVar8 - 2;
            } while (uVar8 != 0);
            uVar10 = lVar21 + uVar10;
            if (uVar15 == uVar13) goto LAB_10adec5e0;
          }
          lVar21 = uVar13 - uVar15;
          plVar17 = (long *)((uVar14 - 1) + uVar15 * 8);
          do {
            plVar17 = plVar17 + 1;
            bVar6 = *(byte *)(*plVar17 + 0x17);
            uVar13 = *(ulong *)(*plVar17 + 8);
            if (-1 < (char)bVar6) {
              uVar13 = (ulong)bVar6;
            }
            uVar10 = uVar13 + uVar10 + (ulong)((int)LZCOUNT((int)uVar13) * -9 + 0x160U >> 6);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
      }
LAB_10adec5e0:
      if (*(int *)(uVar12 + 0x28) != 0) {
        uVar10 = uVar10 + 5;
      }
      if ((*(ulong *)(uVar12 + 8) & 1) != 0) {
        uVar13 = *(ulong *)(uVar12 + 8) & 0xfffffffffffffffe;
        lVar21 = (long)*(char *)(uVar13 + 0x1f);
        if (lVar21 < 0) {
          lVar21 = *(long *)(uVar13 + 0x10);
        }
        uVar10 = lVar21 + uVar10;
      }
      *(int *)(uVar12 + 0x2c) = (int)uVar10;
      lVar20 = uVar10 + lVar20 + (ulong)((int)LZCOUNT((int)uVar10) * -9 + 0x160U >> 6);
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
  }
  uVar10 = *(ulong *)(param_1 + 0x40);
  iVar7 = *(int *)(param_1 + 0x48);
  lVar20 = lVar20 + (long)iVar7 * 2;
  iVar9 = (int)lVar20;
  puVar11 = (ulong *)(param_1 + 0x40);
  if ((uVar10 & 1) != 0) {
    puVar11 = (ulong *)(uVar10 + 7);
  }
  if (iVar7 != 0) {
    lVar21 = (long)iVar7 << 3;
    do {
      uVar10 = *puVar11;
      uVar4 = 0;
      if (*(int *)(uVar10 + 0x10) != 0) {
        uVar4 = (int)LZCOUNT(*(int *)(uVar10 + 0x10)) * -9 + 0x1a0U >> 6;
      }
      uVar12 = (ulong)uVar4;
      if (*(int *)(uVar10 + 0x24) == 2) {
        lVar16 = *(long *)(uVar10 + 0x18);
        uVar13 = *(ulong *)(lVar16 + 0x10) & 0xfffffffffffffffc;
        lVar18 = (long)*(char *)(uVar13 + 0x17);
        if (lVar18 < 0) {
          if (*(long *)(uVar13 + 8) != 0) goto LAB_10adec6ac;
LAB_10adec6e4:
          lVar18 = 0;
          uVar13 = *(ulong *)(lVar16 + 8);
        }
        else {
          if (lVar18 == 0) goto LAB_10adec6e4;
LAB_10adec6ac:
          lVar19 = *(long *)(uVar13 + 8);
          if (-1 < *(char *)(uVar13 + 0x17)) {
            lVar19 = lVar18;
          }
          lVar18 = lVar19 + (ulong)((int)LZCOUNT((int)lVar19) * -9 + 0x160U >> 6) + 1;
          uVar13 = *(ulong *)(lVar16 + 8);
        }
        if ((uVar13 & 1) != 0) {
          lVar19 = (long)*(char *)((uVar13 & 0xfffffffffffffffe) + 0x1f);
          if (lVar19 < 0) {
            lVar19 = *(long *)((uVar13 & 0xfffffffffffffffe) + 0x10);
          }
          lVar18 = lVar19 + lVar18;
        }
        *(int *)(lVar16 + 0x18) = (int)lVar18;
        uVar12 = uVar12 + lVar18 + (ulong)((int)LZCOUNT((int)lVar18) * -9 + 0x160U >> 6) + 1;
      }
      if ((*(ulong *)(uVar10 + 8) & 1) != 0) {
        uVar13 = *(ulong *)(uVar10 + 8) & 0xfffffffffffffffe;
        lVar16 = (long)*(char *)(uVar13 + 0x1f);
        if (lVar16 < 0) {
          lVar16 = *(long *)(uVar13 + 0x10);
        }
        uVar12 = lVar16 + uVar12;
      }
      *(int *)(uVar10 + 0x20) = (int)uVar12;
      lVar20 = uVar12 + lVar20 + (ulong)((int)LZCOUNT((int)uVar12) * -9 + 0x160U >> 6);
      iVar9 = (int)lVar20;
      puVar11 = puVar11 + 1;
      lVar21 = lVar21 + -8;
    } while (lVar21 != 0);
  }
  uVar10 = *(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc;
  lVar21 = (long)*(char *)(uVar10 + 0x17);
  lVar20 = lVar21;
  if (lVar21 < 0) {
    lVar20 = *(long *)(uVar10 + 8);
  }
  if (lVar20 != 0) {
    lVar20 = *(long *)(uVar10 + 8);
    if (-1 < *(char *)(uVar10 + 0x17)) {
      lVar20 = lVar21;
    }
    iVar9 = iVar9 + (int)lVar20 + ((int)LZCOUNT((int)lVar20) * -9 + 0x160U >> 6) + 1;
  }
  uVar10 = *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc;
  lVar21 = (long)*(char *)(uVar10 + 0x17);
  lVar20 = lVar21;
  if (lVar21 < 0) {
    lVar20 = *(long *)(uVar10 + 8);
  }
  if (lVar20 != 0) {
    lVar20 = *(long *)(uVar10 + 8);
    if (-1 < *(char *)(uVar10 + 0x17)) {
      lVar20 = lVar21;
    }
    iVar9 = iVar9 + (int)lVar20 + ((int)LZCOUNT((int)lVar20) * -9 + 0x160U >> 6) + 1;
  }
  uVar10 = *(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc;
  lVar21 = (long)*(char *)(uVar10 + 0x17);
  lVar20 = lVar21;
  if (lVar21 < 0) {
    lVar20 = *(long *)(uVar10 + 8);
  }
  if (lVar20 != 0) {
    lVar20 = *(long *)(uVar10 + 8);
    if (-1 < *(char *)(uVar10 + 0x17)) {
      lVar20 = lVar21;
    }
    iVar9 = iVar9 + (int)lVar20 + ((int)LZCOUNT((int)lVar20) * -9 + 0x160U >> 6) + 1;
  }
  uVar10 = *(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  lVar21 = (long)*(char *)(uVar10 + 0x17);
  lVar20 = lVar21;
  if (lVar21 < 0) {
    lVar20 = *(long *)(uVar10 + 8);
  }
  if (lVar20 != 0) {
    lVar20 = *(long *)(uVar10 + 8);
    if (-1 < *(char *)(uVar10 + 0x17)) {
      lVar20 = lVar21;
    }
    iVar9 = iVar9 + (int)lVar20 + ((int)LZCOUNT((int)lVar20) * -9 + 0x160U >> 6) + 2;
  }
  uVar10 = *(ulong *)(param_1 + 0x78) & 0xfffffffffffffffc;
  lVar21 = (long)*(char *)(uVar10 + 0x17);
  lVar20 = lVar21;
  if (lVar21 < 0) {
    lVar20 = *(long *)(uVar10 + 8);
  }
  if (lVar20 != 0) {
    lVar20 = *(long *)(uVar10 + 8);
    if (-1 < *(char *)(uVar10 + 0x17)) {
      lVar20 = lVar21;
    }
    iVar9 = iVar9 + (int)lVar20 + ((int)LZCOUNT((int)lVar20) * -9 + 0x160U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar9 = iVar9 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x80)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar9 = iVar9 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x84)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar9 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x88)) * -9 + 0x2c0U >> 6) + iVar9;
  }
  uVar22 = *(undefined4 *)(param_1 + 0x8c);
  iVar9 = ((ushort)((ushort)(byte)uVar22 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar22 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar22 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar22 >> 0x18) * '\x02') + iVar9;
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar9 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x90)) * -9 + 0x2c0U >> 6) + iVar9;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar9 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x94)) * -9 + 0x2c0U >> 6) + iVar9;
  }
  iVar9 = iVar9 + (uint)*(byte *)(param_1 + 0x98) * 2;
  iVar7 = iVar9 + 3;
  if (*(char *)(param_1 + 0x99) == '\0') {
    iVar7 = iVar9;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    iVar7 = iVar7 + ((int)LZCOUNT(*(int *)(param_1 + 0x9c)) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar20 = (long)*(char *)(uVar10 + 0x1f);
    if (lVar20 < 0) {
      lVar20 = *(long *)(uVar10 + 0x10);
    }
    *(int *)(param_1 + 0xa0) = (int)lVar20 + iVar7;
    return;
  }
  *(int *)(param_1 + 0xa0) = iVar7;
  return;
}



/* Entry: 10adeca40; end: 10adeca43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10adeca40(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar2;
  if (-1 < (long)uVar9) {
    if (uVar9 == 0) goto LAB_10ade9bd0;
LAB_10ade9a78:
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar10 = *(ulong *)(param_1 + 0x58);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar10 = *(ulong *)(param_1 + 0x58);
    }
    if ((uVar10 & 3) != 0) {
      puVar7 = (undefined8 *)(uVar10 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar10 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar10 = uVar9;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar10);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
      goto LAB_10ade9bd0;
    }
    uVar10 = puVar8[1];
    puVar7 = (undefined8 *)*puVar8;
    if (-1 < cVar2) {
      uVar10 = uVar9;
      puVar7 = puVar8;
    }
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x18;
      __Znwm();
      if (uVar10 < 0x7ffffffffffffff7) {
        if (0x16 < uVar10) {
          plVar11 = (long *)0x19;
          if ((uVar10 | 7) != 0x17) {
            plVar11 = (long *)((uVar10 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar9 = 2;
          goto LAB_10ade9ba4;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar10;
        uVar9 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar10 != 0) goto LAB_10ade9bb4;
        goto LAB_10ade9bc4;
      }
    }
    else {
      func_0x00010b4d80a4();
      if (uVar10 < 0x7ffffffffffffff7) {
        if (uVar10 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar10;
          uVar9 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar10 == 0) goto LAB_10ade9bc4;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar10 | 7) != 0x17) {
            plVar11 = (long *)((uVar10 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar9 = 3;
LAB_10ade9ba4:
          plVar6[1] = uVar10;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10ade9bb4:
        _memmove(plVar5,puVar7,uVar10);
        plVar6 = plVar5;
LAB_10ade9bc4:
        *(undefined1 *)((long)plVar6 + uVar10) = 0;
        *(ulong *)(param_1 + 0x58) = uVar9 | (ulong)plVar11;
        goto LAB_10ade9bd0;
      }
LAB_10adea2ec:
      func_0x000104bd47d4();
    }
    func_0x000104bd47d4();
LAB_10adea314:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10adea318);
    (*pcVar4)();
  }
  if (puVar8[1] != 0) goto LAB_10ade9a78;
LAB_10ade9bd0:
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x60);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x60);
    }
    if ((uVar9 & 3) == 0) {
      uVar9 = puVar8[1];
      puVar7 = (undefined8 *)*puVar8;
      if (-1 < cVar2) {
        uVar9 = uVar10;
        puVar7 = puVar8;
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar9) {
          func_0x000104bd47d4();
          goto LAB_10adea314;
        }
        if (0x16 < uVar9) {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 2;
          goto LAB_10ade9d1c;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar9;
        uVar10 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar9 != 0) goto LAB_10ade9d2c;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
        if (uVar9 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar9;
          uVar10 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar9 == 0) goto LAB_10ade9d3c;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 3;
LAB_10ade9d1c:
          plVar6[1] = uVar9;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10ade9d2c:
        _memmove(plVar5,puVar7,uVar9);
        plVar6 = plVar5;
      }
LAB_10ade9d3c:
      *(undefined1 *)((long)plVar6 + uVar9) = 0;
      *(ulong *)(param_1 + 0x60) = uVar10 | (ulong)plVar11;
    }
    else {
      puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar9 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar9 = uVar10;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar9);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x68);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x68);
    }
    if ((uVar9 & 3) == 0) {
      uVar9 = puVar8[1];
      puVar7 = (undefined8 *)*puVar8;
      if (-1 < cVar2) {
        uVar9 = uVar10;
        puVar7 = puVar8;
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar9) {
          func_0x000104bd47d4();
          goto LAB_10adea314;
        }
        if (0x16 < uVar9) {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 2;
          goto LAB_10ade9e94;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar9;
        uVar10 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar9 != 0) goto LAB_10ade9ea4;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
        if (uVar9 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar9;
          uVar10 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar9 == 0) goto LAB_10ade9eb4;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 3;
LAB_10ade9e94:
          plVar6[1] = uVar9;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10ade9ea4:
        _memmove(plVar5,puVar7,uVar9);
        plVar6 = plVar5;
      }
LAB_10ade9eb4:
      *(undefined1 *)((long)plVar6 + uVar9) = 0;
      *(ulong *)(param_1 + 0x68) = uVar10 | (ulong)plVar11;
    }
    else {
      puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar9 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar9 = uVar10;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar9);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    if (((ulong)plVar6 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x70);
    }
    else {
      plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x70);
    }
    if ((uVar9 & 3) == 0) {
      uVar9 = puVar8[1];
      puVar7 = (undefined8 *)*puVar8;
      if (-1 < cVar2) {
        uVar9 = uVar10;
        puVar7 = puVar8;
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar9) {
          func_0x000104bd47d4();
          goto LAB_10adea314;
        }
        if (0x16 < uVar9) {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 2;
          goto LAB_10adea00c;
        }
        *(char *)((long)plVar6 + 0x17) = (char)uVar9;
        uVar10 = 2;
        plVar5 = plVar6;
        plVar11 = plVar6;
        if (uVar9 != 0) goto LAB_10adea01c;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
        if (uVar9 < 0x17) {
          *(char *)((long)plVar6 + 0x17) = (char)uVar9;
          uVar10 = 3;
          plVar5 = plVar6;
          plVar11 = plVar6;
          if (uVar9 == 0) goto LAB_10adea02c;
        }
        else {
          plVar11 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar11 = (long *)((uVar9 | 7) + 1);
          }
          plVar5 = plVar11;
          __Znwm();
          *plVar6 = (long)plVar5;
          uVar10 = 3;
LAB_10adea00c:
          plVar6[1] = uVar9;
          plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
          plVar11 = plVar6;
        }
LAB_10adea01c:
        _memmove(plVar5,puVar7,uVar9);
        plVar6 = plVar5;
      }
LAB_10adea02c:
      *(undefined1 *)((long)plVar6 + uVar9) = 0;
      *(ulong *)(param_1 + 0x70) = uVar10 | (ulong)plVar11;
    }
    else {
      puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar7 != puVar8) {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          uVar9 = puVar8[1];
          puVar3 = (undefined8 *)*puVar8;
          if (-1 < cVar2) {
            uVar9 = uVar10;
            puVar3 = puVar8;
          }
          func_0x000107c27ba0(puVar7,puVar3,uVar9);
        }
        else if (cVar2 < '\0') {
          func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
        }
        else {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
      }
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x78) & 0xfffffffffffffffc);
  cVar2 = *(char *)((long)puVar8 + 0x17);
  uVar10 = (ulong)cVar2;
  uVar9 = uVar10;
  if ((long)uVar10 < 0) {
    uVar9 = puVar8[1];
  }
  if (uVar9 == 0) goto LAB_10adea1b0;
  plVar6 = *(long **)(param_1 + 8);
  if (((ulong)plVar6 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x78);
  }
  else {
    plVar6 = *(long **)((ulong)plVar6 & 0xfffffffffffffffe);
    uVar9 = *(ulong *)(param_1 + 0x78);
  }
  if ((uVar9 & 3) != 0) {
    puVar7 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
    if (puVar7 != puVar8) {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        uVar9 = puVar8[1];
        puVar3 = (undefined8 *)*puVar8;
        if (-1 < cVar2) {
          uVar9 = uVar10;
          puVar3 = puVar8;
        }
        func_0x000107c27ba0(puVar7,puVar3,uVar9);
      }
      else if (cVar2 < '\0') {
        func_0x000107c27ba4(puVar7,*puVar8,puVar8[1]);
      }
      else {
        uVar13 = puVar8[1];
        uVar12 = *puVar8;
        puVar7[2] = puVar8[2];
        puVar7[1] = uVar13;
        *puVar7 = uVar12;
      }
    }
    goto LAB_10adea1b0;
  }
  uVar9 = puVar8[1];
  puVar7 = (undefined8 *)*puVar8;
  if (-1 < cVar2) {
    uVar9 = uVar10;
    puVar7 = puVar8;
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar9) {
      func_0x000104bd47d4();
      goto LAB_10adea314;
    }
    if (0x16 < uVar9) {
      plVar11 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar11 = (long *)((uVar9 | 7) + 1);
      }
      plVar5 = plVar11;
      __Znwm();
      *plVar6 = (long)plVar5;
      uVar10 = 2;
      goto LAB_10adea184;
    }
    *(char *)((long)plVar6 + 0x17) = (char)uVar9;
    uVar10 = 2;
    plVar5 = plVar6;
    plVar11 = plVar6;
    if (uVar9 != 0) goto LAB_10adea194;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar9) goto LAB_10adea2ec;
    if (uVar9 < 0x17) {
      *(char *)((long)plVar6 + 0x17) = (char)uVar9;
      uVar10 = 3;
      plVar5 = plVar6;
      plVar11 = plVar6;
      if (uVar9 == 0) goto LAB_10adea1a4;
    }
    else {
      plVar11 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar11 = (long *)((uVar9 | 7) + 1);
      }
      plVar5 = plVar11;
      __Znwm();
      *plVar6 = (long)plVar5;
      uVar10 = 3;
LAB_10adea184:
      plVar6[1] = uVar9;
      plVar6[2] = (ulong)plVar11 | 0x8000000000000000;
      plVar11 = plVar6;
    }
LAB_10adea194:
    _memmove(plVar5,puVar7,uVar9);
    plVar6 = plVar5;
  }
LAB_10adea1a4:
  *(undefined1 *)((long)plVar6 + uVar9) = 0;
  *(ulong *)(param_1 + 0x78) = uVar10 | (ulong)plVar11;
LAB_10adea1b0:
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(char *)(param_2 + 0x8c) == '\x01') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
    cVar2 = *(char *)(param_2 + 0x8d);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x8d);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x8d) = 1;
    cVar2 = *(char *)(param_2 + 0x8e);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x8e);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x8e) = 1;
    cVar2 = *(char *)(param_2 + 0x8f);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x8f);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x8f) = 1;
    iVar1 = *(int *)(param_2 + 0x90);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x90);
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x90) = iVar1;
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 1;
    cVar2 = *(char *)(param_2 + 0x99);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x99);
  }
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x99) = 1;
    iVar1 = *(int *)(param_2 + 0x9c);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x9c);
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x9c) = iVar1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10adeca44; end: 10adeca9b;  */

void FUN_10adeca44(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    FUN_10adeac50(lVar1);
    __ZdlPv(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10adeca9c; end: 10adecaa7;  */

undefined ** FUN_10adeca9c(void)

{
  return &PTR_DAT_110c769b8;
}



/* Entry: 10adecaa8; end: 10adecaeb;  */

void FUN_10adecaa8(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010ade9290(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10adecaec; end: 10adecce7;  */

byte * FUN_10adecaec(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_48;
  
  pbVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x18);
    uVar6 = *(uint *)(pbVar3 + 0xa0);
    pbVar7 = (byte *)*param_3;
    if (pbVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          pbVar7 = (byte *)((long)param_3 + 0x11);
          *param_2 = 10;
          goto joined_r0x00010adecc10;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar4 + (long)((int)param_2 - (int)pbVar7));
        pbVar7 = (byte *)*param_3;
      } while (pbVar7 <= param_2);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 10;
joined_r0x00010adecc10:
    if (0x7f < uVar6) {
      do {
        param_2 = pbVar7;
        pbVar7 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar2 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar2 != 0);
    }
    *pbVar7 = (byte)uVar6;
    (**(code **)(*(long *)pbVar3 + 0x38))(pbVar3,param_2 + 2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar5 = *(long *)(uVar8 + 8);
      uStack_48 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar5 = uVar8 + 8;
    }
    uVar6 = (uint)uStack_48;
    if (*param_3 - (long)pbVar3 < (long)(int)uVar6) {
      pbVar7 = (byte *)((*param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar7 < (int)uVar6) {
        pbVar1 = (byte *)(param_3 + 2);
LAB_10adecc48:
        do {
          lVar9 = (long)(int)pbVar7;
          _memcpy(pbVar3,lVar5,lVar9);
          uVar6 = (int)uStack_48 - (int)pbVar7;
          uStack_48 = (ulong)uVar6;
          lVar5 = lVar5 + lVar9;
          pbVar3 = pbVar3 + lVar9;
          pbVar7 = (byte *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              pbVar7 = pbVar7 + (0x10 - (long)pbVar1);
              pbVar3 = pbVar1;
              if ((int)uVar6 <= (int)pbVar7) goto LAB_10adeccc8;
              goto LAB_10adecc48;
            }
            plVar4 = param_3;
            func_0x000107c303dc();
            pbVar3 = (byte *)((long)plVar4 + (long)((int)pbVar3 - (int)pbVar7));
            pbVar7 = (byte *)*param_3;
          } while (pbVar7 <= pbVar3);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar3);
        } while ((int)pbVar7 < (int)uVar6);
      }
LAB_10adeccc8:
      uStack_48._0_4_ = uVar6;
      _memcpy(pbVar3,lVar5,(long)(int)(uint)uStack_48);
      pbVar3 = pbVar3 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar3,lVar5,uStack_48 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar6;
    }
  }
  return pbVar3;
}



/* Entry: 10adecce8; end: 10adecd67;  */

void FUN_10adecce8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10adec418();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = iVar1;
    return;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar2 = (long)*(char *)(uVar3 + 0x1f);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar3 + 0x10);
  }
  *(int *)(param_1 + 0x14) = (int)lVar2 + iVar1;
  return;
}



/* Entry: 10adecd68; end: 10adece2b;  */

void FUN_10adecd68(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  else {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
    uVar2 = *(ulong *)(param_2 + 8);
  }
  else if (*(long *)(param_1 + 0x18) == 0) {
    FUN_10adfb1c4(uVar2,*(undefined8 *)(param_2 + 0x18));
    *(ulong *)(param_1 + 0x18) = uVar2;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
    uVar2 = *(ulong *)(param_2 + 8);
  }
  else {
    FUN_10ade99e8(*(long *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if ((uVar2 & 1) != 0) {
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



/* Entry: 10adece2c; end: 10aded04f;  */

long FUN_10adece2c(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar3 = (ulong *)(param_1 + 0x28);
  uVar1 = *puVar3;
  puVar2 = (ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar4 = 1;
        puVar5 = puVar3;
LAB_10adece94:
        do {
          if ((long *)*puVar5 != (long *)0x0) {
            (**(code **)(*(long *)*puVar5 + 8))();
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) goto LAB_10adecebc;
      }
      else {
        uVar4 = (ulong)*(uint *)(uVar1 - 1);
        if (0 < (int)*(uint *)(uVar1 - 1)) {
          puVar5 = (ulong *)(uVar1 + 7);
          goto LAB_10adece94;
        }
      }
      __ZdlPv(uVar1 - 1);
    }
LAB_10adecebc:
    *puVar3 = 0;
  }
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adecf24;
  if ((uVar1 & 1) == 0) {
    uVar4 = 1;
    puVar3 = puVar2;
LAB_10adecefc:
    do {
      if ((long *)*puVar3 != (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10adecf24;
  }
  else {
    uVar4 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar3 = (ulong *)(uVar1 + 7);
      goto LAB_10adecefc;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10adecf24:
  *puVar2 = 0;
  return param_1;
}



/* Entry: 10aded050; end: 10aded05b;  */

undefined ** FUN_10aded050(void)

{
  return &PTR_DAT_110c76a08;
}



/* Entry: 10aded05c; end: 10aded0b7;  */

void FUN_10aded05c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
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



/* Entry: 10aded0b8; end: 10aded53f;  */

void FUN_10aded0b8(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  uint uVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar1 = (byte *)(param_3 + 2);
    pbVar2 = (byte *)(param_3 + 4);
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar3 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar3 = (ulong *)(uVar8 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar3;
      uVar13 = *(uint *)(param_2 + 0x2c);
      pbVar17 = (byte *)*param_3;
      pbVar5 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar5 = pbVar1;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar10 = pbVar2;
          if (param_3[6] == 0) {
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10aded24c:
            *param_3 = (long)pbVar10;
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              param_3[3] = *(long *)(pbVar17 + 8);
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbVar17;
              goto LAB_10aded24c;
            }
            _memcpy(param_3[1],pbVar1,(long)pbVar17 - (long)pbVar1);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) {
                *(undefined1 *)(param_3 + 7) = 1;
                *param_3 = (long)pbVar2;
                goto LAB_10aded1a8;
              }
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbStack_70;
              pbVar10 = pbVar1 + (int)uStack_64;
              goto LAB_10aded24c;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
            param_3[1] = 0;
            pbVar5 = pbStack_70;
            pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10aded1a8:
          pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar17);
          pbVar5 = pbVar9;
          pbVar17 = pbVar10;
        } while (pbVar10 <= pbVar9);
      }
      pbVar9 = pbVar5 + 1;
      *pbVar5 = 10;
      if (0x7f < uVar13) {
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
          *pbVar5 = (byte)uVar13 | 0x80;
          uVar4 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar4 != 0);
      }
      *pbVar9 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar5 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar9 = param_2;
    } while (iVar15 != iVar16);
  }
  iVar16 = *(int *)(param_1 + 0x30);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar1 = (byte *)(param_3 + 2);
    pbVar2 = (byte *)(param_3 + 4);
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x28);
      puVar3 = (ulong *)(param_1 + 0x28);
      if ((uVar8 & 1) != 0) {
        puVar3 = (ulong *)(uVar8 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar3;
      uVar13 = *(uint *)(param_2 + 0x14);
      pbVar17 = (byte *)*param_3;
      pbVar5 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar5 = pbVar1;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar10 = pbVar2;
          if (param_3[6] == 0) {
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10aded3f0:
            *param_3 = (long)pbVar10;
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              param_3[3] = *(long *)(pbVar17 + 8);
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbVar17;
              goto LAB_10aded3f0;
            }
            _memcpy(param_3[1],pbVar1,(long)pbVar17 - (long)pbVar1);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) {
                *(undefined1 *)(param_3 + 7) = 1;
                *param_3 = (long)pbVar2;
                goto LAB_10aded34c;
              }
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbStack_70;
              pbVar10 = pbVar1 + (int)uStack_64;
              goto LAB_10aded3f0;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
            param_3[1] = 0;
            pbVar5 = pbStack_70;
            pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10aded34c:
          pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar17);
          pbVar5 = pbVar9;
          pbVar17 = pbVar10;
        } while (pbVar10 <= pbVar9);
      }
      pbVar9 = pbVar5 + 1;
      *pbVar5 = 0x12;
      if (0x7f < uVar13) {
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
          *pbVar5 = (byte)uVar13 | 0x80;
          uVar4 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar4 != 0);
      }
      *pbVar9 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar5 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar9 = param_2;
    } while (iVar15 != iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar7 = *(long *)(uVar8 + 8);
      uVar14 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar7 = uVar8 + 8;
    }
    uVar13 = (uint)uVar14;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar9 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar9 < (int)uVar13) {
        do {
          lVar12 = (long)(int)pbVar9;
          _memcpy(param_2,lVar7,lVar12);
          uVar13 = (int)uVar14 - (int)pbVar9;
          uVar14 = (ulong)uVar13;
          lVar7 = lVar7 + lVar12;
          param_2 = param_2 + lVar12;
          pbVar9 = (byte *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              pbVar9 = pbVar9 + (0x10 - (long)(param_3 + 2));
              iVar16 = (int)pbVar9;
              param_2 = (byte *)(param_3 + 2);
              goto joined_r0x00010aded520;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (byte *)((long)plVar6 + (long)((int)param_2 - (int)pbVar9));
            pbVar9 = (byte *)*param_3;
          } while (pbVar9 <= param_2);
          pbVar9 = pbVar9 + (0x10 - (long)param_2);
          iVar16 = (int)pbVar9;
joined_r0x00010aded520:
        } while (iVar16 < (int)uVar13);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar13);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10aded540; end: 10aded83b;  */

long FUN_10aded540(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  lVar11 = (long)*(int *)(param_1 + 0x18);
  puVar12 = (ulong *)(param_1 + 0x10);
  if ((uVar13 & 1) != 0) {
    puVar12 = (ulong *)(uVar13 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar11 = 0;
  }
  else {
    puVar1 = puVar12 + lVar11;
    do {
      uVar13 = *puVar12;
      lVar14 = (long)*(int *)(uVar13 + 0x18);
      uVar16 = *(ulong *)(uVar13 + 0x10);
      puVar15 = (ulong *)(uVar13 + 0x10);
      if ((uVar16 & 1) != 0) {
        puVar15 = (ulong *)(uVar16 + 7);
      }
      if (*(int *)(uVar13 + 0x18) == 0) {
        lVar14 = 0;
      }
      else {
        puVar2 = puVar15 + lVar14;
        do {
          uVar16 = *puVar15;
          lVar4 = (long)*(int *)(uVar16 + 0x18);
          uVar6 = *(ulong *)(uVar16 + 0x10);
          puVar5 = (ulong *)(uVar16 + 0x10);
          if ((uVar6 & 1) != 0) {
            puVar5 = (ulong *)(uVar6 + 7);
          }
          if (*(int *)(uVar16 + 0x18) == 0) {
            lVar4 = 0;
          }
          else {
            lVar7 = lVar4 << 3;
            do {
              uVar6 = *puVar5;
              uVar8 = *(ulong *)(uVar6 + 0x10) & 0xfffffffffffffffc;
              lVar9 = (long)*(char *)(uVar8 + 0x17);
              if (lVar9 < 0) {
                if (*(long *)(uVar8 + 8) != 0) goto LAB_10aded5e4;
LAB_10aded674:
                lVar9 = 0;
                iVar3 = *(int *)(uVar6 + 0x18);
              }
              else {
                if (lVar9 == 0) goto LAB_10aded674;
LAB_10aded5e4:
                lVar10 = *(long *)(uVar8 + 8);
                if (-1 < *(char *)(uVar8 + 0x17)) {
                  lVar10 = lVar9;
                }
                lVar9 = lVar10 + (ulong)((int)LZCOUNT((int)lVar10) * -9 + 0x160U >> 6) + 1;
                iVar3 = *(int *)(uVar6 + 0x18);
              }
              if (iVar3 != 0) {
                lVar9 = (ulong)((int)LZCOUNT((long)iVar3) * -9 + 0x2c0U >> 6) + lVar9;
              }
              if (*(int *)(uVar6 + 0x1c) != 0) {
                lVar9 = (ulong)((int)LZCOUNT((long)*(int *)(uVar6 + 0x1c)) * -9 + 0x2c0U >> 6) +
                        lVar9;
              }
              if ((*(ulong *)(uVar6 + 8) & 1) != 0) {
                uVar8 = *(ulong *)(uVar6 + 8) & 0xfffffffffffffffe;
                lVar10 = (long)*(char *)(uVar8 + 0x1f);
                if (lVar10 < 0) {
                  lVar10 = *(long *)(uVar8 + 0x10);
                }
                lVar9 = lVar10 + lVar9;
              }
              *(int *)(uVar6 + 0x20) = (int)lVar9;
              lVar4 = lVar9 + lVar4 + (ulong)((int)LZCOUNT((int)lVar9) * -9 + 0x160U >> 6);
              puVar5 = puVar5 + 1;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          uVar6 = *(ulong *)(uVar16 + 0x28) & 0xfffffffffffffffc;
          lVar9 = (long)*(char *)(uVar6 + 0x17);
          lVar7 = lVar9;
          if (lVar9 < 0) {
            lVar7 = *(long *)(uVar6 + 8);
          }
          if (lVar7 != 0) {
            lVar7 = *(long *)(uVar6 + 8);
            if (-1 < *(char *)(uVar6 + 0x17)) {
              lVar7 = lVar9;
            }
            lVar4 = lVar4 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
          }
          if (*(int *)(uVar16 + 0x30) != 0) {
            lVar4 = lVar4 + 5;
          }
          if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
            uVar6 = *(ulong *)(uVar16 + 8) & 0xfffffffffffffffe;
            lVar7 = (long)*(char *)(uVar6 + 0x1f);
            if (lVar7 < 0) {
              lVar7 = *(long *)(uVar6 + 0x10);
            }
            lVar4 = lVar7 + lVar4;
          }
          *(int *)(uVar16 + 0x34) = (int)lVar4;
          lVar14 = lVar4 + lVar14 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6);
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar2);
      }
      if (*(int *)(uVar13 + 0x28) != 0) {
        lVar14 = (ulong)((int)LZCOUNT((long)*(int *)(uVar13 + 0x28)) * -9 + 0x2c0U >> 6) + lVar14;
      }
      if ((*(ulong *)(uVar13 + 8) & 1) != 0) {
        uVar16 = *(ulong *)(uVar13 + 8) & 0xfffffffffffffffe;
        lVar4 = (long)*(char *)(uVar16 + 0x1f);
        if (lVar4 < 0) {
          lVar4 = *(long *)(uVar16 + 0x10);
        }
        lVar14 = lVar4 + lVar14;
      }
      *(int *)(uVar13 + 0x2c) = (int)lVar14;
      lVar11 = lVar14 + lVar11 + (ulong)((int)LZCOUNT((int)lVar14) * -9 + 0x160U >> 6);
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar1);
  }
  uVar13 = *(ulong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  lVar11 = lVar11 + iVar3;
  puVar12 = (ulong *)(param_1 + 0x28);
  if ((uVar13 & 1) != 0) {
    puVar12 = (ulong *)(uVar13 + 7);
  }
  if (iVar3 != 0) {
    lVar14 = (long)iVar3 << 3;
    do {
      uVar13 = *puVar12;
      FUN_10adf45b8();
      lVar11 = uVar13 + lVar11 + (ulong)((int)LZCOUNT((int)uVar13) * -9 + 0x160U >> 6);
      lVar14 = lVar14 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar14 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar14 = (long)*(char *)(uVar13 + 0x1f);
    if (lVar14 < 0) {
      lVar14 = *(long *)(uVar13 + 0x10);
    }
    lVar11 = lVar14 + lVar11;
  }
  *(int *)(param_1 + 0x40) = (int)lVar11;
  return lVar11;
}



/* Entry: 10aded83c; end: 10aded8a3;  */

void FUN_10aded83c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10aded8a4; end: 10aded9df;  */

long FUN_10aded8a4(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10aded92c;
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar4 = puVar2;
LAB_10aded904:
    do {
      if ((long *)*puVar4 != (long *)0x0) {
        (**(code **)(*(long *)*puVar4 + 8))();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10aded92c;
  }
  else {
    uVar3 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar4 = (ulong *)(uVar1 + 7);
      goto LAB_10aded904;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10aded92c:
  *puVar2 = 0;
  return param_1;
}



/* Entry: 10aded9e0; end: 10aded9eb;  */

undefined ** FUN_10aded9e0(void)

{
  return &PTR_DAT_110c76a48;
}



/* Entry: 10aded9ec; end: 10adeda37;  */

void FUN_10aded9ec(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10adeda38; end: 10adedd33;  */

void FUN_10adeda38(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar10 = param_3 + 0x10;
    pbVar5 = param_3 + 0x20;
    pbVar8 = param_2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar1 = (ulong *)(uVar7 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar1;
      uVar13 = *(uint *)(param_2 + 0x34);
      pbVar17 = *(byte **)param_3;
      pbVar3 = pbVar8;
      if (pbVar17 <= pbVar8) {
        do {
          pbVar3 = pbVar10;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar9 = pbVar5;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adedbcc:
            *(byte **)param_3 = pbVar9;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar17 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              *(byte **)(param_3 + 8) = pbVar17;
              goto LAB_10adedbcc;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar10,(long)pbVar17 - (long)pbVar10);
            do {
              plVar4 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar4 + 0x10))(plVar4,&pbStack_70,&uStack_64);
              if (((ulong)plVar4 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar5;
                goto LAB_10adedb28;
              }
            } while (uStack_64 == 0);
            puVar11 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              *(undefined8 *)(param_3 + 0x18) = puVar11[1];
              *(undefined8 *)pbVar10 = uVar18;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar9 = pbVar10 + (int)uStack_64;
              goto LAB_10adedbcc;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar3 = pbStack_70;
            pbVar9 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adedb28:
          pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar17);
          pbVar3 = pbVar8;
          pbVar17 = pbVar9;
        } while (pbVar9 <= pbVar8);
      }
      pbVar8 = pbVar3 + 1;
      *pbVar3 = 10;
      if (0x7f < uVar13) {
        do {
          pbVar3 = pbVar8;
          pbVar8 = pbVar3 + 1;
          *pbVar3 = (byte)uVar13 | 0x80;
          uVar2 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar2 != 0);
      }
      *pbVar8 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar3 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar8 = param_2;
    } while (iVar15 != iVar16);
  }
  pbVar8 = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    pbVar8 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x28),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar6 = *(long *)(uVar7 + 8);
      uVar14 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar6 = uVar7 + 8;
    }
    uVar13 = (uint)uVar14;
    if (*(long *)param_3 - (long)pbVar8 < (long)(int)uVar13) {
      pbVar10 = (byte *)((*(long *)param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar10 < (int)uVar13) {
        do {
          lVar12 = (long)(int)pbVar10;
          _memcpy(pbVar8,lVar6,lVar12);
          uVar13 = (int)uVar14 - (int)pbVar10;
          uVar14 = (ulong)uVar13;
          lVar6 = lVar6 + lVar12;
          pbVar8 = pbVar8 + lVar12;
          pbVar10 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar10 = pbVar10 + (0x10 - (long)(param_3 + 0x10));
              iVar16 = (int)pbVar10;
              pbVar8 = param_3 + 0x10;
              goto joined_r0x00010adedd14;
            }
            pbVar5 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar5 + ((int)pbVar8 - (int)pbVar10);
            pbVar10 = *(byte **)param_3;
          } while (pbVar10 <= pbVar8);
          pbVar10 = pbVar10 + (0x10 - (long)pbVar8);
          iVar16 = (int)pbVar10;
joined_r0x00010adedd14:
        } while (iVar16 < (int)uVar13);
      }
      _memcpy(pbVar8,lVar6,(long)(int)uVar13);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adedd34; end: 10adede03;  */

long FUN_10adedd34(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar4 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    lVar5 = lVar3 << 3;
    do {
      uVar2 = *puVar4;
      FUN_10adee5b8();
      lVar3 = uVar2 + lVar3 + (ulong)((int)LZCOUNT((int)uVar2) * -9 + 0x160U >> 6);
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (iVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar5 + lVar3;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 10adede04; end: 10adede63;  */

void FUN_10adede04(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10adede64; end: 10adee007;  */

long FUN_10adede64(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) ^ 2);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 3) != 0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((puVar2 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
    __ZdlPv(*puVar3);
  }
  __ZdlPv(puVar2);
  uVar4 = *puVar1;
  if (uVar4 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adedf20;
  if ((uVar4 & 1) == 0) {
    uVar5 = 1;
    puVar6 = puVar1;
LAB_10adedef8:
    do {
      if ((long *)*puVar6 != (long *)0x0) {
        (**(code **)(*(long *)*puVar6 + 8))();
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto LAB_10adedf20;
  }
  else {
    uVar5 = (ulong)*(uint *)(uVar4 - 1);
    if (0 < (int)*(uint *)(uVar4 - 1)) {
      puVar6 = (ulong *)(uVar4 + 7);
      goto LAB_10adedef8;
    }
  }
  __ZdlPv(uVar4 - 1);
LAB_10adedf20:
  *puVar1 = 0;
  return param_1;
}



/* Entry: 10adee008; end: 10adee013;  */

undefined ** FUN_10adee008(void)

{
  return &PTR_DAT_110c76a90;
}



/* Entry: 10adee014; end: 10adee097;  */

void FUN_10adee014(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto joined_r0x00010adee084;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
joined_r0x00010adee084:
  if ((bVar1 & 1) == 0) {
    return;
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10adee098; end: 10adee5b7;  */

/* WARNING: Removing unreachable block (ram,0x00010adee458) */
/* WARNING: Removing unreachable block (ram,0x00010adee460) */
/* WARNING: Removing unreachable block (ram,0x00010adee450) */

void FUN_10adee098(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  byte *pbVar23;
  int iVar24;
  undefined8 uVar25;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar17 = (ulong *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  cVar5 = *(char *)((long)puVar17 + 0x17);
  uVar20 = (ulong)cVar5;
  if ((long)uVar20 < 0) {
    if (puVar17[1] != 0) {
      puVar4 = (ulong *)*puVar17;
      uVar21 = puVar17[1];
      goto joined_r0x00010adee0f8;
    }
  }
  else {
    puVar4 = puVar17;
    uVar21 = uVar20;
    if ((int)cVar5 != 0) {
joined_r0x00010adee0f8:
      if (uVar21 << 0x20 == 0) {
LAB_10adee1cc:
        if (((uint)(int)cVar5 >> 7 & 1) != 0) goto LAB_10adee208;
LAB_10adee1d0:
        uVar20 = uVar20 & 0xff;
LAB_10adee218:
        if ((long)uVar20 <= (*(long *)param_3 - (long)param_2) + 0xe) {
          *param_2 = 10;
          param_2[1] = (byte)uVar20;
          puVar4 = (ulong *)*puVar17;
          if (-1 < *(char *)((long)puVar17 + 0x17)) {
            puVar4 = puVar17;
          }
          _memcpy(param_2 + 2,puVar4,uVar20);
          param_2 = param_2 + 2 + uVar20;
          iVar24 = *(int *)(param_1 + 0x30);
          goto joined_r0x00010adee4b8;
        }
      }
      else {
        lVar11 = (long)(uVar21 << 0x20) >> 0x20;
        puVar3 = (ulong *)((long)puVar4 + lVar11);
        puVar13 = puVar4;
        for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
          puVar13 = puVar13 + 1;
          lVar11 = lVar11 + -8;
        }
        puVar7 = puVar4;
        if (puVar4 < puVar3) {
          uVar12 = (long)puVar3 - (long)puVar13;
          puVar13 = puVar4;
          for (uVar21 = uVar12 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            puVar7 = puVar13;
            if ((char)*puVar13 < '\0') goto LAB_10adee1c0;
            puVar13 = (ulong *)((long)puVar13 + 1);
          }
          puVar4 = (ulong *)((long)puVar4 + uVar12);
          puVar7 = puVar4;
          if (2 < uVar12 - 1) {
            puVar13 = (ulong *)((long)puVar13 + 3);
            do {
              puVar7 = puVar13;
              if ((char)*puVar13 < '\0') break;
              puVar1 = (ulong *)((long)puVar13 + 1);
              puVar13 = (ulong *)((long)puVar13 + 4);
              puVar7 = puVar4;
            } while (puVar1 != puVar4);
          }
        }
LAB_10adee1c0:
        func_0x000107c34ffc(puVar7,puVar3,0);
        if (puVar7 != (ulong *)0x0) goto LAB_10adee1cc;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af017,0x33,&UNK_10f774276);
        uVar20 = (ulong)*(byte *)((long)puVar17 + 0x17);
        if (-1 < (char)*(byte *)((long)puVar17 + 0x17)) goto LAB_10adee1d0;
LAB_10adee208:
        uVar20 = puVar17[1];
        if ((long)uVar20 < 0x80) goto LAB_10adee218;
      }
      param_2 = param_3;
      func_0x00010b4d50d0(param_3,1,puVar17);
      iVar24 = *(int *)(param_1 + 0x30);
      goto joined_r0x00010adee4b8;
    }
  }
  iVar24 = *(int *)(param_1 + 0x30);
joined_r0x00010adee4b8:
  if (iVar24 != 0) {
    pbVar14 = *(byte **)param_3;
    if (pbVar14 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar14);
        pbVar14 = *(byte **)param_3;
      } while (pbVar14 <= param_2);
      iVar24 = *(int *)(param_1 + 0x30);
    }
    *param_2 = 0x15;
    *(int *)(param_2 + 1) = iVar24;
    param_2 = param_2 + 5;
  }
  iVar24 = *(int *)(param_1 + 0x18);
  if (iVar24 != 0) {
    iVar22 = 0;
    pbVar10 = param_3 + 0x10;
    pbVar2 = param_3 + 0x20;
    pbVar14 = param_2;
    do {
      uVar20 = *(ulong *)(param_1 + 0x10);
      puVar17 = (ulong *)(param_1 + 0x10);
      if ((uVar20 & 1) != 0) {
        puVar17 = (ulong *)(uVar20 + (long)iVar22 * 8 + 7);
      }
      param_2 = (byte *)*puVar17;
      uVar19 = *(uint *)(param_2 + 0x20);
      pbVar23 = *(byte **)param_3;
      pbVar8 = pbVar14;
      if (pbVar23 <= pbVar14) {
        do {
          pbVar8 = pbVar10;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar15 = pbVar2;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adee3f0:
            *(byte **)param_3 = pbVar15;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar25 = *(undefined8 *)pbVar23;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar23 + 8);
              *(undefined8 *)pbVar10 = uVar25;
              *(byte **)(param_3 + 8) = pbVar23;
              goto LAB_10adee3f0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar10,(long)pbVar23 - (long)pbVar10);
            do {
              plVar9 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar9 + 0x10))(plVar9,&pbStack_70,&uStack_64);
              if (((ulong)plVar9 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar2;
                goto LAB_10adee34c;
              }
            } while (uStack_64 == 0);
            puVar16 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar25 = *puVar16;
              *(undefined8 *)(param_3 + 0x18) = puVar16[1];
              *(undefined8 *)pbVar10 = uVar25;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar15 = pbVar10 + (int)uStack_64;
              goto LAB_10adee3f0;
            }
            uVar25 = *puVar16;
            *(undefined8 *)(pbStack_70 + 8) = puVar16[1];
            *(undefined8 *)pbStack_70 = uVar25;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar8 = pbStack_70;
            pbVar15 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adee34c:
          pbVar14 = pbVar8 + ((int)pbVar14 - (int)pbVar23);
          pbVar8 = pbVar14;
          pbVar23 = pbVar15;
        } while (pbVar15 <= pbVar14);
      }
      pbVar14 = pbVar8 + 1;
      *pbVar8 = 0x1a;
      if (0x7f < uVar19) {
        do {
          pbVar8 = pbVar14;
          pbVar14 = pbVar8 + 1;
          *pbVar8 = (byte)uVar19 | 0x80;
          uVar6 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
        } while (uVar6 != 0);
      }
      *pbVar14 = (byte)uVar19;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar8 + 2,param_3);
      iVar22 = iVar22 + 1;
      pbVar14 = param_2;
    } while (iVar22 != iVar24);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar20 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar21 = (ulong)*(char *)(uVar20 + 0x1f);
    if ((long)uVar21 < 0) {
      lVar11 = *(long *)(uVar20 + 8);
      uVar21 = (ulong)*(uint *)(uVar20 + 0x10);
    }
    else {
      lVar11 = uVar20 + 8;
    }
    uVar19 = (uint)uVar21;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar19) {
      pbVar14 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar14 < (int)uVar19) {
        do {
          lVar18 = (long)(int)pbVar14;
          _memcpy(param_2,lVar11,lVar18);
          uVar19 = (int)uVar21 - (int)pbVar14;
          uVar21 = (ulong)uVar19;
          lVar11 = lVar11 + lVar18;
          param_2 = param_2 + lVar18;
          pbVar14 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar14 = pbVar14 + (0x10 - (long)(param_3 + 0x10));
              iVar24 = (int)pbVar14;
              param_2 = param_3 + 0x10;
              goto joined_r0x00010adee598;
            }
            pbVar10 = param_3;
            func_0x000107c303dc();
            param_2 = pbVar10 + ((int)param_2 - (int)pbVar14);
            pbVar14 = *(byte **)param_3;
          } while (pbVar14 <= param_2);
          pbVar14 = pbVar14 + (0x10 - (long)param_2);
          iVar24 = (int)pbVar14;
joined_r0x00010adee598:
        } while (iVar24 < (int)uVar19);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar19);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adee5b8; end: 10adee747;  */

long FUN_10adee5b8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar5 = lVar2 << 3;
    do {
      uVar4 = *puVar3;
      uVar6 = *(ulong *)(uVar4 + 0x10) & 0xfffffffffffffffc;
      lVar7 = (long)*(char *)(uVar6 + 0x17);
      if (lVar7 < 0) {
        if (*(long *)(uVar6 + 8) != 0) goto LAB_10adee5fc;
LAB_10adee68c:
        lVar7 = 0;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      else {
        if (lVar7 == 0) goto LAB_10adee68c;
LAB_10adee5fc:
        lVar8 = *(long *)(uVar6 + 8);
        if (-1 < *(char *)(uVar6 + 0x17)) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      if (iVar1 != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if (*(int *)(uVar4 + 0x1c) != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)*(int *)(uVar4 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if ((*(ulong *)(uVar4 + 8) & 1) != 0) {
        uVar6 = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
        lVar8 = (long)*(char *)(uVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar8 = *(long *)(uVar6 + 0x10);
        }
        lVar7 = lVar8 + lVar7;
      }
      *(int *)(uVar4 + 0x20) = (int)lVar7;
      lVar2 = lVar7 + lVar2 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  lVar5 = lVar7;
  if (lVar7 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    lVar5 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar5 = lVar7;
    }
    lVar2 = lVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = lVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    *(int *)(param_1 + 0x34) = (int)(lVar5 + lVar2);
    return lVar5 + lVar2;
  }
  *(int *)(param_1 + 0x34) = (int)lVar2;
  return lVar2;
}



/* Entry: 10adee748; end: 10adee977;  */

void FUN_10adee748(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar8 = (ulong)cVar1;
  uVar9 = uVar8;
  if ((long)uVar8 < 0) {
    uVar9 = puVar7[1];
  }
  if (uVar9 == 0) goto LAB_10adee904;
  plVar4 = *(long **)(param_1 + 8);
  if (((ulong)plVar4 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x28);
  }
  else {
    plVar4 = *(long **)((ulong)plVar4 & 0xfffffffffffffffe);
    uVar9 = *(ulong *)(param_1 + 0x28);
  }
  if ((uVar9 & 3) != 0) {
    puVar5 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
    if (puVar5 != puVar7) {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        uVar9 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar9 = uVar8;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar5,puVar2,uVar9);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar5,*puVar7,puVar7[1]);
      }
      else {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar5[2] = puVar7[2];
        puVar5[1] = uVar12;
        *puVar5 = uVar11;
      }
    }
    goto LAB_10adee904;
  }
  uVar9 = puVar7[1];
  puVar5 = (undefined8 *)*puVar7;
  if (-1 < cVar1) {
    uVar9 = uVar8;
    puVar5 = puVar7;
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar9) goto LAB_10adee95c;
    if (0x16 < uVar9) {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 2;
      goto LAB_10adee8d8;
    }
    *(char *)((long)plVar4 + 0x17) = (char)uVar9;
    uVar8 = 2;
    plVar6 = plVar4;
    plVar10 = plVar4;
    if (uVar9 != 0) goto LAB_10adee8e8;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar9) {
      func_0x000104bd47d4();
LAB_10adee95c:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adee964);
      (*pcVar3)();
    }
    if (uVar9 < 0x17) {
      *(char *)((long)plVar4 + 0x17) = (char)uVar9;
      uVar8 = 3;
      plVar6 = plVar4;
      plVar10 = plVar4;
      if (uVar9 == 0) goto LAB_10adee8f8;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 3;
LAB_10adee8d8:
      plVar4[1] = uVar9;
      plVar4[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar4;
    }
LAB_10adee8e8:
    _memmove(plVar6,puVar5,uVar9);
    plVar4 = plVar6;
  }
LAB_10adee8f8:
  *(undefined1 *)((long)plVar4 + uVar9) = 0;
  *(ulong *)(param_1 + 0x28) = uVar8 | (ulong)plVar10;
LAB_10adee904:
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10adee978; end: 10adeeb53;  */

undefined8 * FUN_10adee978(undefined8 *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  byte bVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110c760e0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar5 = *(ulong *)(param_3 + 0x10);
  if ((uVar5 & 3) == 0) goto LAB_10adeeb08;
  puVar6 = (undefined8 *)(uVar5 & 0xfffffffffffffffc);
  bVar2 = *(byte *)((long)puVar6 + 0x17);
  uVar5 = (ulong)bVar2;
  if (param_2 == (ulong *)0x0) {
    if ((char)bVar2 < '\0') {
      puVar7 = (undefined8 *)*puVar6;
      uVar5 = puVar6[1];
      param_2 = (ulong *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar5) goto LAB_10adeeb38;
      if (uVar5 < 0x17) goto LAB_10adeea18;
LAB_10adeeac4:
      puVar1 = (ulong *)0x19;
      if ((uVar5 | 7) != 0x17) {
        puVar1 = (ulong *)((uVar5 | 7) + 1);
      }
      puVar4 = puVar1;
      __Znwm();
      param_2[1] = uVar5;
      param_2[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_2 = (ulong)puVar4;
LAB_10adeeaec:
      _memmove(puVar4,puVar7,uVar5);
    }
    else {
      param_2 = (ulong *)0x18;
      __Znwm();
      puVar7 = puVar6;
      if (0x16 < uVar5) goto LAB_10adeeac4;
LAB_10adeea18:
      *(char *)((long)param_2 + 0x17) = (char)uVar5;
      puVar4 = param_2;
      if (uVar5 != 0) goto LAB_10adeeaec;
    }
    *(undefined1 *)((long)puVar4 + uVar5) = 0;
    uVar5 = 2;
  }
  else {
    if ((char)bVar2 < '\0') {
      puVar7 = (undefined8 *)*puVar6;
      uVar5 = puVar6[1];
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar5) {
        func_0x000104bd47d4();
LAB_10adeeb38:
        func_0x000104bd47d4();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10adeeb40);
        (*pcVar3)();
      }
      if (uVar5 < 0x17) goto LAB_10adee9f0;
LAB_10adeea54:
      puVar1 = (ulong *)0x19;
      if ((uVar5 | 7) != 0x17) {
        puVar1 = (ulong *)((uVar5 | 7) + 1);
      }
      puVar4 = puVar1;
      __Znwm();
      param_2[1] = uVar5;
      param_2[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_2 = (ulong)puVar4;
LAB_10adeea7c:
      _memmove(puVar4,puVar7,uVar5);
    }
    else {
      func_0x00010b4d80a4();
      puVar7 = puVar6;
      if (0x16 < uVar5) goto LAB_10adeea54;
LAB_10adee9f0:
      *(char *)((long)param_2 + 0x17) = (char)uVar5;
      puVar4 = param_2;
      if (uVar5 != 0) goto LAB_10adeea7c;
    }
    *(undefined1 *)((long)puVar4 + uVar5) = 0;
    uVar5 = 3;
  }
  uVar5 = uVar5 | (ulong)param_2;
LAB_10adeeb08:
  param_1[2] = uVar5;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 10adeeb54; end: 10adeec3b;  */

long FUN_10adeeb54(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10adeec3c; end: 10adeec93;  */

undefined ** FUN_10adeec3c(void)

{
  return &PTR_DAT_110c76ae0;
}



/* Entry: 10adeec94; end: 10adeefab;  */

/* WARNING: Removing unreachable block (ram,0x00010adeee90) */
/* WARNING: Removing unreachable block (ram,0x00010adeee98) */
/* WARNING: Removing unreachable block (ram,0x00010adeee88) */

long * FUN_10adeec94(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  
  plVar5 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar5 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  plVar11 = plVar5;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar11 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x1c),plVar5);
  }
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adeed1c;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010adeed1c:
      if (uVar16 << 0x20 == 0) {
LAB_10adeeddc:
        if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10adeede0;
LAB_10adeee14:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adeee20;
      }
      else {
        lVar8 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar6 = puVar3;
        if (puVar3 < puVar2) {
          uVar9 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar6 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10adeedd0;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar9);
          puVar6 = puVar3;
          if (2 < uVar9 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar6 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar6 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adeedd0:
        func_0x000107c34ffc(puVar6,puVar2,0);
        if (puVar6 != (ulong *)0x0) goto LAB_10adeeddc;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af04b,0x19,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10adeee14;
LAB_10adeede0:
        uVar15 = uVar15 & 0xff;
LAB_10adeee20:
        if ((long)uVar15 <= (*param_3 - (long)plVar11) + 0xe) {
          *(undefined1 *)plVar11 = 0x1a;
          *(char *)((long)plVar11 + 1) = (char)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy((long)plVar11 + 2,puVar3,uVar15);
          plVar11 = (long *)((long)plVar11 + 2 + uVar15);
          goto LAB_10adeee64;
        }
      }
      plVar5 = param_3;
      func_0x00010b4d50d0(param_3,3,puVar12,plVar11);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adeee68;
    }
  }
LAB_10adeee64:
  uVar15 = *(ulong *)(param_1 + 8);
  plVar5 = plVar11;
joined_r0x00010adeee68:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar8 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar8 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*param_3 - (long)plVar5 < (long)(int)uVar14) {
      puVar18 = (undefined1 *)((*param_3 - (long)plVar5) + 0x10);
      if ((int)puVar18 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar18;
          _memcpy(plVar5,lVar8,lVar13);
          uVar14 = (int)uVar16 - (int)puVar18;
          uVar16 = (ulong)uVar14;
          lVar8 = lVar8 + lVar13;
          plVar5 = (long *)((long)plVar5 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar17 = (int)puVar18;
              plVar5 = param_3 + 2;
              goto joined_r0x00010adeef8c;
            }
            plVar7 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar7 + (long)((int)plVar5 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= plVar5);
          puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)plVar5));
          iVar17 = (int)puVar18;
joined_r0x00010adeef8c:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(plVar5,lVar8,(long)(int)uVar14);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar14);
    }
    else {
      _memcpy(plVar5,lVar8,uVar16 & 0xffffffff);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar14);
    }
  }
  return plVar5;
}



/* Entry: 10adeefac; end: 10adef073;  */

long FUN_10adeefac(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar3;
    return lVar3;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar4 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x20) = (int)(lVar4 + lVar3);
  return lVar4 + lVar3;
}



/* Entry: 10adef074; end: 10adef2cb;  */

void FUN_10adef074(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 == 0) goto LAB_10adef250;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar7 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
      else {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        puVar6[2] = puVar8[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10adef250;
  }
  uVar7 = puVar8[1];
  puVar6 = (undefined8 *)*puVar8;
  if (-1 < cVar1) {
    uVar7 = uVar9;
    puVar6 = puVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10adef2b0;
    if (0x16 < uVar7) {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10adef21c;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar7;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar7 != 0) goto LAB_10adef22c;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
LAB_10adef2b0:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adef2b8);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar7;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar7 == 0) goto LAB_10adef23c;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10adef21c:
      plVar5[1] = uVar7;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10adef22c:
    _memmove(plVar4,puVar6,uVar7);
    plVar5 = plVar4;
  }
LAB_10adef23c:
  *(undefined1 *)((long)plVar5 + uVar7) = 0;
  *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
LAB_10adef250:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 10adef2cc; end: 10adef4fb;  */

void FUN_10adef2cc(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010adeec48();
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar8 = (ulong)cVar1;
  uVar9 = uVar8;
  if ((long)uVar8 < 0) {
    uVar9 = puVar7[1];
  }
  if (uVar9 == 0) goto LAB_10adef480;
  plVar4 = *(long **)(param_1 + 8);
  if (((ulong)plVar4 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar4 = *(long **)((ulong)plVar4 & 0xfffffffffffffffe);
    uVar9 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar9 & 3) != 0) {
    puVar5 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
    if (puVar5 != puVar7) {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        uVar9 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar9 = uVar8;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar5,puVar2,uVar9);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar5,*puVar7,puVar7[1]);
      }
      else {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar5[2] = puVar7[2];
        puVar5[1] = uVar12;
        *puVar5 = uVar11;
      }
    }
    goto LAB_10adef480;
  }
  uVar9 = puVar7[1];
  puVar5 = (undefined8 *)*puVar7;
  if (-1 < cVar1) {
    uVar9 = uVar8;
    puVar5 = puVar7;
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar9) goto LAB_10adef4e0;
    if (0x16 < uVar9) {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 2;
      goto LAB_10adef454;
    }
    *(char *)((long)plVar4 + 0x17) = (char)uVar9;
    uVar8 = 2;
    plVar6 = plVar4;
    plVar10 = plVar4;
    if (uVar9 != 0) goto LAB_10adef464;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar9) {
      func_0x000104bd47d4();
LAB_10adef4e0:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adef4e8);
      (*pcVar3)();
    }
    if (uVar9 < 0x17) {
      *(char *)((long)plVar4 + 0x17) = (char)uVar9;
      uVar8 = 3;
      plVar6 = plVar4;
      plVar10 = plVar4;
      if (uVar9 == 0) goto LAB_10adef474;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 3;
LAB_10adef454:
      plVar4[1] = uVar9;
      plVar4[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar4;
    }
LAB_10adef464:
    _memmove(plVar6,puVar5,uVar9);
    plVar4 = plVar6;
  }
LAB_10adef474:
  *(undefined1 *)((long)plVar4 + uVar9) = 0;
  *(ulong *)(param_1 + 0x10) = uVar8 | (ulong)plVar10;
LAB_10adef480:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10adef4fc; end: 10adef67b;  */

long FUN_10adef4fc(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar3 = (ulong *)(param_1 + 0x40);
  uVar1 = *puVar3;
  puVar2 = (ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar4 = 1;
        puVar5 = puVar3;
LAB_10adef564:
        do {
          if ((long *)*puVar5 != (long *)0x0) {
            (**(code **)(*(long *)*puVar5 + 8))();
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) goto LAB_10adef58c;
      }
      else {
        uVar4 = (ulong)*(uint *)(uVar1 - 1);
        if (0 < (int)*(uint *)(uVar1 - 1)) {
          puVar5 = (ulong *)(uVar1 + 7);
          goto LAB_10adef564;
        }
      }
      __ZdlPv(uVar1 - 1);
    }
LAB_10adef58c:
    *puVar3 = 0;
  }
  puVar3 = (ulong *)(param_1 + 0x28);
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar4 = 1;
        puVar5 = puVar3;
LAB_10adef5d0:
        do {
          if ((long *)*puVar5 != (long *)0x0) {
            (**(code **)(*(long *)*puVar5 + 8))();
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) goto LAB_10adef5f8;
      }
      else {
        uVar4 = (ulong)*(uint *)(uVar1 - 1);
        if (0 < (int)*(uint *)(uVar1 - 1)) {
          puVar5 = (ulong *)(uVar1 + 7);
          goto LAB_10adef5d0;
        }
      }
      __ZdlPv(uVar1 - 1);
    }
LAB_10adef5f8:
    *puVar3 = 0;
  }
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adef660;
  if ((uVar1 & 1) == 0) {
    uVar4 = 1;
    puVar3 = puVar2;
LAB_10adef638:
    do {
      if ((long *)*puVar3 != (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10adef660;
  }
  else {
    uVar4 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar3 = (ulong *)(uVar1 + 7);
      goto LAB_10adef638;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10adef660:
  *puVar2 = 0;
  return param_1;
}



/* Entry: 10adef67c; end: 10adef67f;  */

long FUN_10adef67c(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar3 = (ulong *)(param_1 + 0x40);
  uVar1 = *puVar3;
  puVar2 = (ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar4 = 1;
        puVar5 = puVar3;
LAB_10adef564:
        do {
          if ((long *)*puVar5 != (long *)0x0) {
            (**(code **)(*(long *)*puVar5 + 8))();
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) goto LAB_10adef58c;
      }
      else {
        uVar4 = (ulong)*(uint *)(uVar1 - 1);
        if (0 < (int)*(uint *)(uVar1 - 1)) {
          puVar5 = (ulong *)(uVar1 + 7);
          goto LAB_10adef564;
        }
      }
      __ZdlPv(uVar1 - 1);
    }
LAB_10adef58c:
    *puVar3 = 0;
  }
  puVar3 = (ulong *)(param_1 + 0x28);
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      if ((uVar1 & 1) == 0) {
        uVar4 = 1;
        puVar5 = puVar3;
LAB_10adef5d0:
        do {
          if ((long *)*puVar5 != (long *)0x0) {
            (**(code **)(*(long *)*puVar5 + 8))();
          }
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
        uVar1 = *puVar3;
        if ((uVar1 & 1) == 0) goto LAB_10adef5f8;
      }
      else {
        uVar4 = (ulong)*(uint *)(uVar1 - 1);
        if (0 < (int)*(uint *)(uVar1 - 1)) {
          puVar5 = (ulong *)(uVar1 + 7);
          goto LAB_10adef5d0;
        }
      }
      __ZdlPv(uVar1 - 1);
    }
LAB_10adef5f8:
    *puVar3 = 0;
  }
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adef660;
  if ((uVar1 & 1) == 0) {
    uVar4 = 1;
    puVar3 = puVar2;
LAB_10adef638:
    do {
      if ((long *)*puVar3 != (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10adef660;
  }
  else {
    uVar4 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar3 = (ulong *)(uVar1 + 7);
      goto LAB_10adef638;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10adef660:
  *puVar2 = 0;
  return param_1;
}



/* Entry: 10adef680; end: 10adef693;  */

void FUN_10adef680(void)

{
  FUN_10adef4fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adef694; end: 10adef69f;  */

undefined ** FUN_10adef694(void)

{
  return &PTR_DAT_110c76b18;
}



/* Entry: 10adef6a0; end: 10adef70f;  */

void FUN_10adef6a0(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
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



/* Entry: 10adef710; end: 10adefd37;  */

void FUN_10adef710(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  uint uVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar1 = (byte *)(param_3 + 2);
    pbVar2 = (byte *)(param_3 + 4);
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar3 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar3 = (ulong *)(uVar8 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar3;
      uVar13 = *(uint *)(param_2 + 0x34);
      pbVar17 = (byte *)*param_3;
      pbVar5 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar5 = pbVar1;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar10 = pbVar2;
          if (param_3[6] == 0) {
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10adef8a4:
            *param_3 = (long)pbVar10;
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              param_3[3] = *(long *)(pbVar17 + 8);
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbVar17;
              goto LAB_10adef8a4;
            }
            _memcpy(param_3[1],pbVar1,(long)pbVar17 - (long)pbVar1);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) {
                *(undefined1 *)(param_3 + 7) = 1;
                *param_3 = (long)pbVar2;
                goto LAB_10adef800;
              }
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbStack_70;
              pbVar10 = pbVar1 + (int)uStack_64;
              goto LAB_10adef8a4;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
            param_3[1] = 0;
            pbVar5 = pbStack_70;
            pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adef800:
          pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar17);
          pbVar5 = pbVar9;
          pbVar17 = pbVar10;
        } while (pbVar10 <= pbVar9);
      }
      pbVar9 = pbVar5 + 1;
      *pbVar5 = 10;
      if (0x7f < uVar13) {
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
          *pbVar5 = (byte)uVar13 | 0x80;
          uVar4 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar4 != 0);
      }
      *pbVar9 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar5 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar9 = param_2;
    } while (iVar15 != iVar16);
  }
  iVar16 = *(int *)(param_1 + 0x30);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar1 = (byte *)(param_3 + 2);
    pbVar2 = (byte *)(param_3 + 4);
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x28);
      puVar3 = (ulong *)(param_1 + 0x28);
      if ((uVar8 & 1) != 0) {
        puVar3 = (ulong *)(uVar8 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar3;
      uVar13 = *(uint *)(param_2 + 0x14);
      pbVar17 = (byte *)*param_3;
      pbVar5 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar5 = pbVar1;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar10 = pbVar2;
          if (param_3[6] == 0) {
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10adefa48:
            *param_3 = (long)pbVar10;
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              param_3[3] = *(long *)(pbVar17 + 8);
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbVar17;
              goto LAB_10adefa48;
            }
            _memcpy(param_3[1],pbVar1,(long)pbVar17 - (long)pbVar1);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) {
                *(undefined1 *)(param_3 + 7) = 1;
                *param_3 = (long)pbVar2;
                goto LAB_10adef9a4;
              }
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbStack_70;
              pbVar10 = pbVar1 + (int)uStack_64;
              goto LAB_10adefa48;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
            param_3[1] = 0;
            pbVar5 = pbStack_70;
            pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adef9a4:
          pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar17);
          pbVar5 = pbVar9;
          pbVar17 = pbVar10;
        } while (pbVar10 <= pbVar9);
      }
      pbVar9 = pbVar5 + 1;
      *pbVar5 = 0x12;
      if (0x7f < uVar13) {
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
          *pbVar5 = (byte)uVar13 | 0x80;
          uVar4 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar4 != 0);
      }
      *pbVar9 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar5 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar9 = param_2;
    } while (iVar15 != iVar16);
  }
  iVar16 = *(int *)(param_1 + 0x48);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar1 = (byte *)(param_3 + 2);
    pbVar2 = (byte *)(param_3 + 4);
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x40);
      puVar3 = (ulong *)(param_1 + 0x40);
      if ((uVar8 & 1) != 0) {
        puVar3 = (ulong *)(uVar8 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar3;
      uVar13 = *(uint *)(param_2 + 0x14);
      pbVar17 = (byte *)*param_3;
      pbVar5 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar5 = pbVar1;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar10 = pbVar2;
          if (param_3[6] == 0) {
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10adefbe8:
            *param_3 = (long)pbVar10;
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              param_3[3] = *(long *)(pbVar17 + 8);
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbVar17;
              goto LAB_10adefbe8;
            }
            _memcpy(param_3[1],pbVar1,(long)pbVar17 - (long)pbVar1);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) {
                *(undefined1 *)(param_3 + 7) = 1;
                *param_3 = (long)pbVar2;
                goto LAB_10adefb44;
              }
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbStack_70;
              pbVar10 = pbVar1 + (int)uStack_64;
              goto LAB_10adefbe8;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
            param_3[1] = 0;
            pbVar5 = pbStack_70;
            pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adefb44:
          pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar17);
          pbVar5 = pbVar9;
          pbVar17 = pbVar10;
        } while (pbVar10 <= pbVar9);
      }
      pbVar9 = pbVar5 + 1;
      *pbVar5 = 0x1a;
      if (0x7f < uVar13) {
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
          *pbVar5 = (byte)uVar13 | 0x80;
          uVar4 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar4 != 0);
      }
      *pbVar9 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar5 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar9 = param_2;
    } while (iVar15 != iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar7 = *(long *)(uVar8 + 8);
      uVar14 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar7 = uVar8 + 8;
    }
    uVar13 = (uint)uVar14;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar9 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar9 < (int)uVar13) {
        do {
          lVar12 = (long)(int)pbVar9;
          _memcpy(param_2,lVar7,lVar12);
          uVar13 = (int)uVar14 - (int)pbVar9;
          uVar14 = (ulong)uVar13;
          lVar7 = lVar7 + lVar12;
          param_2 = param_2 + lVar12;
          pbVar9 = (byte *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              pbVar9 = pbVar9 + (0x10 - (long)(param_3 + 2));
              iVar16 = (int)pbVar9;
              param_2 = (byte *)(param_3 + 2);
              goto joined_r0x00010adefd18;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (byte *)((long)plVar6 + (long)((int)param_2 - (int)pbVar9));
            pbVar9 = (byte *)*param_3;
          } while (pbVar9 <= param_2);
          pbVar9 = pbVar9 + (0x10 - (long)param_2);
          iVar16 = (int)pbVar9;
joined_r0x00010adefd18:
        } while (iVar16 < (int)uVar13);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar13);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adefd38; end: 10adf009f;  */

long FUN_10adefd38(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  lVar11 = (long)*(int *)(param_1 + 0x18);
  puVar12 = (ulong *)(param_1 + 0x10);
  if ((uVar13 & 1) != 0) {
    puVar12 = (ulong *)(uVar13 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar11 = 0;
  }
  else {
    puVar1 = puVar12 + lVar11;
    do {
      uVar13 = *puVar12;
      lVar14 = (long)*(int *)(uVar13 + 0x18);
      uVar16 = *(ulong *)(uVar13 + 0x10);
      puVar15 = (ulong *)(uVar13 + 0x10);
      if ((uVar16 & 1) != 0) {
        puVar15 = (ulong *)(uVar16 + 7);
      }
      if (*(int *)(uVar13 + 0x18) == 0) {
        lVar14 = 0;
      }
      else {
        puVar2 = puVar15 + lVar14;
        do {
          uVar16 = *puVar15;
          lVar4 = (long)*(int *)(uVar16 + 0x18);
          uVar6 = *(ulong *)(uVar16 + 0x10);
          puVar5 = (ulong *)(uVar16 + 0x10);
          if ((uVar6 & 1) != 0) {
            puVar5 = (ulong *)(uVar6 + 7);
          }
          if (*(int *)(uVar16 + 0x18) == 0) {
            lVar4 = 0;
          }
          else {
            lVar7 = lVar4 << 3;
            do {
              uVar6 = *puVar5;
              uVar8 = *(ulong *)(uVar6 + 0x10) & 0xfffffffffffffffc;
              lVar9 = (long)*(char *)(uVar8 + 0x17);
              if (lVar9 < 0) {
                if (*(long *)(uVar8 + 8) != 0) goto LAB_10adefddc;
LAB_10adefe6c:
                lVar9 = 0;
                iVar3 = *(int *)(uVar6 + 0x18);
              }
              else {
                if (lVar9 == 0) goto LAB_10adefe6c;
LAB_10adefddc:
                lVar10 = *(long *)(uVar8 + 8);
                if (-1 < *(char *)(uVar8 + 0x17)) {
                  lVar10 = lVar9;
                }
                lVar9 = lVar10 + (ulong)((int)LZCOUNT((int)lVar10) * -9 + 0x160U >> 6) + 1;
                iVar3 = *(int *)(uVar6 + 0x18);
              }
              if (iVar3 != 0) {
                lVar9 = (ulong)((int)LZCOUNT((long)iVar3) * -9 + 0x2c0U >> 6) + lVar9;
              }
              if (*(int *)(uVar6 + 0x1c) != 0) {
                lVar9 = (ulong)((int)LZCOUNT((long)*(int *)(uVar6 + 0x1c)) * -9 + 0x2c0U >> 6) +
                        lVar9;
              }
              if ((*(ulong *)(uVar6 + 8) & 1) != 0) {
                uVar8 = *(ulong *)(uVar6 + 8) & 0xfffffffffffffffe;
                lVar10 = (long)*(char *)(uVar8 + 0x1f);
                if (lVar10 < 0) {
                  lVar10 = *(long *)(uVar8 + 0x10);
                }
                lVar9 = lVar10 + lVar9;
              }
              *(int *)(uVar6 + 0x20) = (int)lVar9;
              lVar4 = lVar9 + lVar4 + (ulong)((int)LZCOUNT((int)lVar9) * -9 + 0x160U >> 6);
              puVar5 = puVar5 + 1;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          uVar6 = *(ulong *)(uVar16 + 0x28) & 0xfffffffffffffffc;
          lVar9 = (long)*(char *)(uVar6 + 0x17);
          lVar7 = lVar9;
          if (lVar9 < 0) {
            lVar7 = *(long *)(uVar6 + 8);
          }
          if (lVar7 != 0) {
            lVar7 = *(long *)(uVar6 + 8);
            if (-1 < *(char *)(uVar6 + 0x17)) {
              lVar7 = lVar9;
            }
            lVar4 = lVar4 + lVar7 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6) + 1;
          }
          if (*(int *)(uVar16 + 0x30) != 0) {
            lVar4 = lVar4 + 5;
          }
          if ((*(ulong *)(uVar16 + 8) & 1) != 0) {
            uVar6 = *(ulong *)(uVar16 + 8) & 0xfffffffffffffffe;
            lVar7 = (long)*(char *)(uVar6 + 0x1f);
            if (lVar7 < 0) {
              lVar7 = *(long *)(uVar6 + 0x10);
            }
            lVar4 = lVar7 + lVar4;
          }
          *(int *)(uVar16 + 0x34) = (int)lVar4;
          lVar14 = lVar4 + lVar14 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6);
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar2);
      }
      lVar14 = lVar14 + (ulong)*(byte *)(uVar13 + 0x28) * 2;
      if (*(int *)(uVar13 + 0x2c) != 0) {
        lVar14 = (ulong)((int)LZCOUNT((long)*(int *)(uVar13 + 0x2c)) * -9 + 0x2c0U >> 6) + lVar14;
      }
      if (*(int *)(uVar13 + 0x30) != 0) {
        lVar14 = lVar14 + 5;
      }
      if ((*(ulong *)(uVar13 + 8) & 1) != 0) {
        uVar16 = *(ulong *)(uVar13 + 8) & 0xfffffffffffffffe;
        lVar4 = (long)*(char *)(uVar16 + 0x1f);
        if (lVar4 < 0) {
          lVar4 = *(long *)(uVar16 + 0x10);
        }
        lVar14 = lVar4 + lVar14;
      }
      *(int *)(uVar13 + 0x34) = (int)lVar14;
      lVar11 = lVar14 + lVar11 + (ulong)((int)LZCOUNT((int)lVar14) * -9 + 0x160U >> 6);
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar1);
  }
  uVar13 = *(ulong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  lVar11 = lVar11 + iVar3;
  puVar12 = (ulong *)(param_1 + 0x28);
  if ((uVar13 & 1) != 0) {
    puVar12 = (ulong *)(uVar13 + 7);
  }
  if (iVar3 != 0) {
    lVar14 = (long)iVar3 << 3;
    do {
      uVar13 = *puVar12;
      FUN_10adf45b8();
      lVar11 = uVar13 + lVar11 + (ulong)((int)LZCOUNT((int)uVar13) * -9 + 0x160U >> 6);
      lVar14 = lVar14 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar14 != 0);
  }
  uVar13 = *(ulong *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x48);
  lVar11 = lVar11 + iVar3;
  puVar12 = (ulong *)(param_1 + 0x40);
  if ((uVar13 & 1) != 0) {
    puVar12 = (ulong *)(uVar13 + 7);
  }
  if (iVar3 != 0) {
    lVar14 = (long)iVar3 << 3;
    do {
      uVar13 = *puVar12;
      FUN_10adf9544();
      lVar11 = uVar13 + lVar11 + (ulong)((int)LZCOUNT((int)uVar13) * -9 + 0x160U >> 6);
      lVar14 = lVar14 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar14 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar14 = (long)*(char *)(uVar13 + 0x1f);
    if (lVar14 < 0) {
      lVar14 = *(long *)(uVar13 + 0x10);
    }
    lVar11 = lVar14 + lVar11;
  }
  *(int *)(param_1 + 0x58) = (int)lVar11;
  return lVar11;
}



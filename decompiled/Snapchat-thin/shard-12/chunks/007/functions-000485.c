/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096ad31c; end: 1096ad337;  */

void FUN_1096ad31c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096ad338; end: 1096ad37f;  */

void FUN_1096ad338(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096ad380; end: 1096ad3d7;  */

undefined8 * FUN_1096ad380(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096ad3d8; end: 1096ad42f;  */

void FUN_1096ad3d8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03b70;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096ad430; end: 1096ad47b;  */

void FUN_1096ad430(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096acaec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ad47c; end: 1096ad4ab;  */

bool FUN_1096ad47c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b03b70,0);
  return param_1 != 0;
}



/* Entry: 1096ad4ac; end: 1096ad573;  */

long FUN_1096ad4ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x60) = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096ad574; end: 1096ad787;  */

void FUN_1096ad574(long *param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 uStack_48;
  byte bStack_47;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  uVar5 = param_2[1] - *param_2 >> 2;
  uVar3 = uVar5;
  if (0x7f < uVar5) {
    do {
      bStack_47 = (byte)uVar3 | 0x80;
      (**(code **)(*param_1 + 0x48))(param_1,&bStack_47,1,1);
      uVar5 = uVar3 >> 7;
      uVar2 = uVar3 >> 0xe;
      uVar3 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_48 = (undefined1)uVar5;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_48,1,1);
  puVar1 = (uint *)param_2[1];
  for (puVar4 = (uint *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar5 = (ulong)(int)*puVar4;
    uVar3 = uVar5;
    if (0x7f < *puVar4) {
      do {
        bStack_45 = (byte)uVar3 | 0x80;
        (**(code **)(*param_1 + 0x48))(param_1,&bStack_45,1,1);
        uVar5 = uVar3 >> 7;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar5;
      } while (uVar2 != 0);
    }
    uStack_46 = (undefined1)uVar5;
    (**(code **)(*param_1 + 0x48))(param_1,&uStack_46,1,1);
  }
  uVar5 = param_3[1] - *param_3 >> 2;
  uVar3 = uVar5;
  if (0x7f < uVar5) {
    do {
      bStack_43 = (byte)uVar3 | 0x80;
      (**(code **)(*param_1 + 0x48))(param_1,&bStack_43,1,1);
      uVar5 = uVar3 >> 7;
      uVar2 = uVar3 >> 0xe;
      uVar3 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_44 = (undefined1)uVar5;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_44,1,1);
  puVar1 = (uint *)param_3[1];
  for (puVar4 = (uint *)*param_3; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar5 = (ulong)(int)*puVar4;
    uVar3 = uVar5;
    if (0x7f < *puVar4) {
      do {
        bStack_41 = (byte)uVar3 | 0x80;
        (**(code **)(*param_1 + 0x48))(param_1,&bStack_41,1,1);
        uVar5 = uVar3 >> 7;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar5;
      } while (uVar2 != 0);
    }
    uStack_42 = (undefined1)uVar5;
    (**(code **)(*param_1 + 0x48))(param_1,&uStack_42,1,1);
  }
  return;
}



/* Entry: 1096ad788; end: 1096ad86f;  */

void FUN_1096ad788(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  byte bStack_31;
  
  plVar3 = param_1;
  FUN_1096ad870(param_1,param_2,param_2 + 0x18);
  if (((int)plVar3 != 0) &&
     (plVar3 = param_1, (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1), (int)plVar3 == 1)) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar4 = ((ulong)bStack_31 & 0x7f) << (uVar5 & 0x3f) | uVar4;
      if (-1 < (char)bStack_31) {
        func_0x00010742a308(param_2 + 0x30,uVar4);
        lVar1 = *(long *)(param_2 + 0x30);
        lVar2 = *(long *)(param_2 + 0x38);
        while( true ) {
          if (lVar1 == lVar2) {
            return;
          }
          plVar3 = param_1;
          FUN_10969a850(param_1,lVar1);
          if ((int)plVar3 == 0) break;
          lVar1 = lVar1 + 4;
        }
        return;
      }
      uVar5 = uVar5 + 7;
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
    } while ((int)plVar3 == 1);
  }
  return;
}



/* Entry: 1096ad870; end: 1096ada9f;  */

undefined8 FUN_1096ad870(long *param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_44,1,1);
  if ((int)plVar2 != 1) {
    return 0;
  }
  uVar4 = 0;
  uVar5 = 0;
  do {
    uVar4 = ((ulong)bStack_44 & 0x7f) << (uVar5 & 0x3f) | uVar4;
    if (-1 < (char)bStack_44) {
      func_0x000108a5942c(param_2,uVar4);
      puVar1 = (undefined4 *)param_2[1];
      puVar3 = (undefined4 *)*param_2;
      while( true ) {
        if (puVar3 == puVar1) {
          plVar2 = param_1;
          (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
          if ((int)plVar2 == 1) {
            uVar4 = 0;
            uVar5 = 0;
            do {
              uVar4 = ((ulong)bStack_42 & 0x7f) << (uVar5 & 0x3f) | uVar4;
              if (-1 < (char)bStack_42) {
                func_0x000108a5942c(param_3,uVar4);
                puVar1 = (undefined4 *)param_3[1];
                puVar3 = (undefined4 *)*param_3;
                while( true ) {
                  if (puVar3 == puVar1) {
                    return 1;
                  }
                  plVar2 = param_1;
                  (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
                  if ((int)plVar2 != 1) break;
                  uVar4 = 0;
                  uVar5 = 0;
                  while (uVar4 = ((ulong)bStack_41 & 0x7f) << (uVar5 & 0x3f) | uVar4,
                        (char)bStack_41 < '\0') {
                    uVar5 = uVar5 + 7;
                    plVar2 = param_1;
                    (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
                    if ((int)plVar2 != 1) {
                      return 0;
                    }
                  }
                  *puVar3 = (int)uVar4;
                  puVar3 = puVar3 + 1;
                }
                return 0;
              }
              uVar5 = uVar5 + 7;
              plVar2 = param_1;
              (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
            } while ((int)plVar2 == 1);
          }
          return 0;
        }
        plVar2 = param_1;
        (**(code **)(*param_1 + 0x40))(param_1,&bStack_43,1,1);
        if ((int)plVar2 != 1) break;
        uVar4 = 0;
        uVar5 = 0;
        while (uVar4 = ((ulong)bStack_43 & 0x7f) << (uVar5 & 0x3f) | uVar4, (char)bStack_43 < '\0')
        {
          uVar5 = uVar5 + 7;
          plVar2 = param_1;
          (**(code **)(*param_1 + 0x40))(param_1,&bStack_43,1,1);
          if ((int)plVar2 != 1) {
            return 0;
          }
        }
        *puVar3 = (int)uVar4;
        puVar3 = puVar3 + 1;
      }
      return 0;
    }
    uVar5 = uVar5 + 7;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,&bStack_44,1,1);
  } while ((int)plVar2 == 1);
  return 0;
}



/* Entry: 1096adaa0; end: 1096adb83;  */

void FUN_1096adaa0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bStack_31;
  
  plVar1 = param_1;
  FUN_1096ad870(param_1,param_2,param_2 + 0x18);
  if (((int)plVar1 != 0) &&
     (plVar1 = param_1, (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1), (int)plVar1 == 1)) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = ((ulong)bStack_31 & 0x7f) << (uVar3 & 0x3f) | uVar2;
      if (-1 < (char)bStack_31) {
        func_0x00010742a308(param_2 + 0x30,uVar2);
        (**(code **)(*param_1 + 0x40))
                  (param_1,*(long *)(param_2 + 0x30),4,
                   (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30)) * 0x40000000 >> 0x20);
        return;
      }
      uVar3 = uVar3 + 7;
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_31,1,1);
    } while ((int)plVar1 == 1);
  }
  return;
}



/* Entry: 1096adb84; end: 1096adbe3;  */

void FUN_1096adb84(long param_1)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  _pthread_self();
  if ((param_1 == 0) && (lRam000000011382aa40 != -1)) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0x11382aa40,&ppuStack_20,FUN_1096adbe4);
  }
  return;
}



/* Entry: 1096adbe4; end: 1096ae14f;  */

void FUN_1096adbe4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **appuStack_1f0 [2];
  undefined **appuStack_1e0 [2];
  undefined **appuStack_1d0 [2];
  undefined **appuStack_1c0 [2];
  undefined **appuStack_1b0 [2];
  undefined **appuStack_1a0 [2];
  undefined **appuStack_190 [2];
  undefined **appuStack_180 [2];
  undefined **appuStack_170 [2];
  undefined **appuStack_160 [2];
  undefined **appuStack_150 [2];
  undefined **appuStack_140 [2];
  undefined **appuStack_130 [2];
  undefined **appuStack_120 [2];
  undefined **appuStack_110 [2];
  undefined **appuStack_100 [2];
  undefined **ppuStack_f0;
  undefined8 *puStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined **appuStack_d0 [2];
  undefined **appuStack_c0 [2];
  undefined **appuStack_b0 [2];
  undefined **appuStack_a0 [2];
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined **appuStack_80 [2];
  undefined **appuStack_70 [2];
  undefined **appuStack_60 [2];
  undefined **ppuStack_50;
  undefined8 *puStack_48;
  undefined **ppuStack_40;
  undefined8 *puStack_38;
  undefined **ppuStack_30;
  undefined8 *puStack_28;
  
  FUN_1096ae150("",0);
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  ppuStack_30 = &PTR_FUN_110b01050;
  puVar2 = (undefined8 *)0x28;
  puStack_28 = puVar1;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = &PTR_DAT_110b00de0;
  }
  ppuStack_40 = &PTR_FUN_110b02e88;
  puVar1 = (undefined8 *)0x28;
  puStack_38 = puVar2;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  ppuStack_50 = &PTR_FUN_110b03088;
  puStack_48 = puVar1;
  FUN_1096a94f8(appuStack_60);
  FUN_1096ab3e4(appuStack_70);
  FUN_1096acaec(appuStack_80);
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  ppuStack_90 = &PTR_FUN_110b058d8;
  puStack_88 = puVar1;
  FUN_1096bdbb8(appuStack_a0);
  FUN_1096c0040(appuStack_b0);
  FUN_1096c21d8(appuStack_c0);
  FUN_1096c82e0(appuStack_d0);
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  ppuStack_e0 = &PTR_FUN_110b06058;
  puVar2 = (undefined8 *)0x28;
  puStack_d8 = puVar1;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 3) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = &PTR_DAT_110b00de0;
  }
  ppuStack_f0 = &PTR_FUN_110b07530;
  puStack_e8 = puVar2;
  FUN_1096ce07c(appuStack_100);
  FUN_1096cf958(appuStack_110);
  FUN_1096cfcf0(appuStack_120);
  FUN_1096d72a0(appuStack_130);
  FUN_1096db180(appuStack_140);
  FUN_1096dbc78(appuStack_150);
  FUN_1096dd3b0(appuStack_160);
  FUN_1096ddb84(appuStack_170);
  FUN_1096decd8(appuStack_180);
  FUN_1096e10e0(appuStack_190);
  FUN_1096e19a4(appuStack_1a0);
  FUN_1096e235c(appuStack_1b0);
  FUN_1096e2d18(appuStack_1c0);
  FUN_1096e6178(appuStack_1d0);
  FUN_1096c4e98(appuStack_1e0);
  FUN_1096b4360(appuStack_1f0);
  appuStack_1f0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_1f0);
  appuStack_1e0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_1e0);
  appuStack_1d0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_1d0);
  appuStack_1c0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_1c0);
  appuStack_1b0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_1b0);
  appuStack_1a0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_1a0);
  appuStack_190[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_190);
  appuStack_180[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_180);
  appuStack_170[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_170);
  appuStack_160[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_160);
  appuStack_150[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_150);
  appuStack_140[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_140);
  appuStack_130[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_130);
  appuStack_120[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_120);
  appuStack_110[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_110);
  appuStack_100[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_100);
  ppuStack_f0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f0);
  ppuStack_e0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_e0);
  appuStack_d0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_d0);
  appuStack_c0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_c0);
  appuStack_b0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_b0);
  appuStack_a0[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_a0);
  ppuStack_90 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_90);
  appuStack_80[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_80);
  appuStack_70[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_70);
  appuStack_60[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_60);
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  ppuStack_30 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ae150; end: 1096ae1ef;  */

void FUN_1096ae150(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  _malloc();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  func_0x000107c2accc();
  func_0x000107c2ace0();
  if (puVar1 != (undefined1 *)0x0) {
    _free();
  }
  return;
}



/* Entry: 1096ae1f0; end: 1096ae20b;  */

void FUN_1096ae1f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096ae20c; end: 1096ae253;  */

void FUN_1096ae20c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096ae254; end: 1096ae2c3;  */

undefined8 * FUN_1096ae254(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096ae2c4; end: 1096ae31b;  */

void FUN_1096ae2c4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03ce8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096ae31c; end: 1096ae377;  */

void FUN_1096ae31c(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  ppuStack_30 = (undefined **)0x0;
  uStack_28 = 0;
  func_0x000107c2acec(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = &PTR_FUN_110b03cc8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096ae378; end: 1096ae3ab;  */

undefined8 * FUN_1096ae378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096ae3ac; end: 1096ae3df;  */

void FUN_1096ae3ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096ae3e0; end: 1096ae40f;  */

bool FUN_1096ae3e0(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b03ce8,0);
  return param_1 != 0;
}



/* Entry: 1096ae410; end: 1096ae4ef;  */

void FUN_1096ae410(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)(*(long *)(param_2 + 8) + 8);
  uVar11 = (*(long *)(*(long *)(param_2 + 8) + 0x10) - lVar12 >> 5) * -0x5555555555555555;
  if (uVar11 < (ulong)(long)param_3 || uVar11 - (long)param_3 == 0) {
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    return;
  }
  puVar8 = (undefined8 *)(lVar12 + (long)param_3 * 0x60);
  uVar13 = *puVar8;
  uVar15 = puVar8[3];
  uVar14 = puVar8[2];
  iVar9 = *(int *)((long)puVar8 + 4);
  param_1[1] = puVar8[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = puVar8[4];
  param_1[5] = puVar8[5];
  param_1[4] = uVar13;
  lVar12 = puVar8[7];
  uVar13 = puVar8[6];
  param_1[7] = puVar8[7];
  param_1[6] = uVar13;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x14);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar9 = *(int *)((long)puVar8 + 4);
  }
  if (iVar9 < 3) {
    puVar10 = (undefined8 *)puVar8[9];
    puVar8 = (undefined8 *)param_1[9];
    *puVar8 = *puVar10;
    puVar8[1] = puVar10[1];
    return;
  }
  *(undefined4 *)((long)param_1 + 4) = 0;
  FUN_109a844cc(param_1,*(undefined4 *)((long)puVar8 + 4),0,0,0);
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar12 = 0;
    lVar2 = puVar8[8];
    lVar4 = puVar8[9];
    lVar3 = param_1[8];
    lVar5 = param_1[9];
    do {
      *(undefined4 *)(lVar3 + lVar12 * 4) = *(undefined4 *)(lVar2 + lVar12 * 4);
      *(undefined8 *)(lVar5 + lVar12 * 8) = *(undefined8 *)(lVar4 + lVar12 * 8);
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)((long)param_1 + 4));
  }
  return;
}



/* Entry: 1096ae4f0; end: 1096ae75f;  */

void FUN_1096ae4f0(long param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (param_2 < 0) {
    puStack_48 = &UNK_10f57c8e4;
    puStack_40 = &UNK_10f57c8ec;
    uStack_38 = 0x22;
    FUN_109699380(&puStack_48);
  }
  plVar5 = (long *)(*(long *)(param_1 + 8) + 8);
  lVar6 = *plVar5;
  uVar8 = (*(long *)(*(long *)(param_1 + 8) + 0x10) - lVar6 >> 5) * -0x5555555555555555;
  if (uVar8 < (ulong)(long)param_2 || uVar8 - (long)param_2 == 0) {
    func_0x000109516d68(plVar5,(long)param_2 + 1);
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 8);
  }
  puVar11 = (undefined4 *)(lVar6 + (long)param_2 * 0x60);
  if (puVar11 == param_3) {
    return;
  }
  if (*(long *)(param_3 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_3 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(puVar11 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(puVar11 + 0xe) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(puVar11);
    }
  }
  *(undefined8 *)(puVar11 + 0xe) = 0;
  *(undefined8 *)(puVar11 + 6) = 0;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 10) = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  if ((int)puVar11[1] < 1) {
    *puVar11 = *param_3;
LAB_1096ae618:
    if ((int)param_3[1] < 3) {
      puVar11[1] = param_3[1];
      *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(param_3 + 2);
      puVar7 = *(undefined8 **)(param_3 + 0x12);
      puVar10 = *(undefined8 **)(puVar11 + 0x12);
      *puVar10 = *puVar7;
      puVar10[1] = puVar7[1];
      goto LAB_1096ae658;
    }
  }
  else {
    lVar6 = 0;
    lVar9 = *(long *)(puVar11 + 0x10);
    do {
      *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)puVar11[1]);
    *puVar11 = *param_3;
    if ((int)puVar11[1] < 3) goto LAB_1096ae618;
  }
  func_0x000109a84868(puVar11,param_3);
LAB_1096ae658:
  uVar12 = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(param_3 + 6);
  *(undefined8 *)(puVar11 + 4) = uVar12;
  uVar12 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(puVar11 + 10) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(puVar11 + 8) = uVar12;
  uVar12 = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(puVar11 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(undefined8 *)(puVar11 + 0xc) = uVar12;
  return;
}



/* Entry: 1096ae760; end: 1096ae7af;  */

void FUN_1096ae760(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096ae7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096ae7b0; end: 1096ae82f;  */

void FUN_1096ae7b0(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
  }
  *(undefined4 *)puVar2 = *param_3;
  return;
}



/* Entry: 1096ae830; end: 1096ae87f;  */

void FUN_1096ae830(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096ae87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096ae880; end: 1096ae973;  */

void FUN_1096ae880(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar3,*param_2);
  if ((lVar3 == 0) || (puVar5 = *(undefined8 **)(lVar3 + 8), puVar5 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar3 = *(long *)(param_1 + 8) + -0x20;
    puVar5 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar3,param_2);
    *(undefined8 **)(lVar3 + 8) = puVar5;
    *puVar5 = &PTR_FUN_110b01d60;
    uVar6 = *param_3;
    puVar5[1] = param_3[1];
    *puVar5 = uVar6;
    if (puVar5[1] != 0) {
      piVar4 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar5 = &PTR_FUN_110b03dd8;
  }
  else if (puVar5[1] != param_3[1]) {
    func_0x000107c2acd4(puVar5);
    uVar6 = *param_3;
    puVar5[1] = param_3[1];
    *puVar5 = uVar6;
    if (puVar5[1] != 0) {
      piVar4 = (int *)(puVar5[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096ae974; end: 1096ae9a7;  */

undefined8 * FUN_1096ae974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096ae9a8; end: 1096ae9db;  */

void FUN_1096ae9a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096ae9dc; end: 1096aea27;  */

long FUN_1096ae9dc(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 8;
  FUN_1093702c4(&lStack_28);
  return param_1;
}



/* Entry: 1096aea28; end: 1096aea77;  */

void FUN_1096aea28(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 8;
  FUN_1093702c4(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 1096aea78; end: 1096aeaab;  */

undefined8 * FUN_1096aea78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096aeaac; end: 1096aeadf;  */

void FUN_1096aeaac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096aeae0; end: 1096aeb0b;  */

void FUN_1096aeae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096aeb0c; end: 1096aeb4f;  */

bool FUN_1096aeb0c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096aeb50; end: 1096aeb63;  */

undefined8 FUN_1096aeb50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096aeb64; end: 1096aebbb;  */

void FUN_1096aeb64(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03df8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096aebbc; end: 1096aec07;  */

void FUN_1096aebbc(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x000107c2ad00(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096aec08; end: 1096aec37;  */

bool FUN_1096aec08(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b03df8,0);
  return param_1 != 0;
}



/* Entry: 1096aec38; end: 1096aec4b;  */

void FUN_1096aec38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096aec4c; end: 1096aec7b;  */

void FUN_1096aec4c(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096aec7c; end: 1096aeccb;  */

void FUN_1096aec7c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096aeccc; end: 1096aecf7;  */

void FUN_1096aeccc(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03df8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096aecf8; end: 1096aee33;  */

undefined8 * FUN_1096aecf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  int iVar4;
  undefined8 uVar5;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar3 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar4 = 0x10b03df8;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_DAT_110b04060;
    uStack_58 = 0;
    puVar2 = (undefined1 *)0x1;
    _malloc();
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
    puStack_48 = puVar2;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar4 = 0x10b03df8;
    func_0x00010969659c(&ppuStack_60);
    uVar5 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar5;
    func_0x000107c2acd4();
    param_2 = pppuVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  *param_2 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_2 = &PTR_FUN_110b03dd8;
  param_2[1] = puVar1;
  func_0x000100034bb0(param_2);
  return param_2;
}



/* Entry: 1096aee34; end: 1096aee93;  */

undefined8 * FUN_1096aee34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b03dd8;
  param_1[1] = puVar1;
  func_0x000100034bb0(param_1);
  return param_1;
}



/* Entry: 1096aee94; end: 1096aeedb;  */

void FUN_1096aee94(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096aeedc; end: 1096aef4b;  */

undefined8 * FUN_1096aeedc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096aef4c; end: 1096aefa3;  */

void FUN_1096aef4c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b03df8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096aefa4; end: 1096af0e3;  */

void FUN_1096aefa4(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  lVar1 = param_4[1];
  for (lVar6 = *param_4; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
    lVar4 = *(long *)(param_2 + 8) + 8;
    FUN_1092b09c4(lVar4,lVar6);
    if (lVar4 != 0) {
      FUN_10923b3a0(&lStack_60,lVar4 + 0x28);
    }
  }
  lStack_68 = param_3[1];
  ppuStack_70 = (undefined **)*param_3;
  if (lStack_68 != 0) {
    piVar5 = (int *)(lStack_68 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_88 = lStack_58;
  lStack_90 = lStack_60;
  uStack_80 = uStack_50;
  lStack_58 = 0;
  uStack_50 = 0;
  lStack_60 = 0;
  FUN_1096af0e4(param_1,param_2,&ppuStack_70,&lStack_90,param_5);
  if (lStack_90 != 0) {
    __ZdlPv();
  }
  ppuStack_70 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_70);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  return;
}



/* Entry: 1096af0e4; end: 1096b019b;  */

void FUN_1096af0e4(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4,int param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long *plVar11;
  int *piVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  long lVar23;
  long lVar24;
  undefined **ppuStack_260;
  long lStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined1 auStack_208 [8];
  undefined **ppuStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  int *piStack_188;
  int *piStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  long *plStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d0 [8];
  undefined8 *puStack_c8;
  long alStack_c0 [3];
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined ***pppuStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piStack_188 = (int *)0x0;
  piStack_180 = (int *)0x0;
  uStack_178 = 0;
  lVar23 = *(long *)(param_2 + 8);
  lStack_198 = param_3[1];
  ppuStack_1a0 = (undefined **)*param_3;
  if (lStack_198 != 0) {
    piVar12 = (int *)(lStack_198 + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar3) {
        *piVar12 = *piVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar16 = lVar23 + 8;
  FUN_1096b1220(lVar16,&ppuStack_1a0,param_4,1,&piStack_188);
  ppuStack_1a0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_1a0);
  if ((int)(uint)lVar16 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *param_1 = FUN_1096b1e6c;
    param_1[1] = &PTR_FUN_110ae9180;
LAB_1096afe58:
    if (piStack_188 != (int *)0x0) {
      piStack_180 = piStack_188;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar6 = (undefined8 *)0x28;
    _malloc();
    *(undefined4 *)(puVar6 + 3) = 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[4] = &PTR_DAT_110b00de0;
    ppuStack_1b0 = &PTR_FUN_110b04170;
    func_0x000107c2acac();
    func_0x000107c34ef0();
    _realloc();
    *(undefined4 *)(puVar6 + 3) = 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    ppuStack_1c0 = (undefined **)(puVar6 + 4);
    *ppuStack_1c0 = (undefined *)&PTR_FUN_110b041f8;
    plVar8 = puVar6 + 5;
    puVar6[6] = 0;
    *plVar8 = 0;
    lVar14 = *(long *)(param_2 + 8);
    if (lVar14 != 0) {
      piVar12 = (int *)(lVar14 + -8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_200 = &PTR_FUN_110b04128;
    ppuStack_1e8 = (undefined **)param_3[1];
    ppuStack_1f0 = (undefined **)*param_3;
    if (ppuStack_1e8 != (undefined **)0x0) {
      ppuVar7 = ppuStack_1e8 + -1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar20 = *param_4;
    lStack_1d0 = param_4[2];
    lVar24 = param_4[1];
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    if (ppuStack_1c0 != (undefined **)0x0) {
      piVar12 = (int *)(puVar6 + 3);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_1c8 = &PTR_FUN_110b04170;
    lStack_1f8 = lVar14;
    lStack_1e0 = lVar20;
    lStack_1d8 = lVar24;
    ppuStack_1a8 = ppuStack_1c0;
    if (param_5 != 0) {
      puVar6 = param_3;
      FUN_1096c6b94(param_3,0x11382aaa8);
      FUN_1096c6db4(&ppuStack_a0,puVar6);
      if (pppuStack_88 == (undefined ***)0x0) {
        plStack_168 = (long *)lStack_1f8;
        if (lStack_1f8 != 0) {
          piVar12 = (int *)(lStack_1f8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_170 = &PTR_FUN_110b04128;
        ppuStack_158 = ppuStack_1e8;
        ppuStack_160 = ppuStack_1f0;
        if (ppuStack_1e8 != (undefined **)0x0) {
          ppuVar7 = ppuStack_1e8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_150 = 0;
        lStack_148 = 0;
        lStack_140 = 0;
        FUN_109285684(&lStack_150,lVar20,lVar24,lVar24 - lVar20 >> 2);
        lVar24 = lStack_140;
        lVar20 = lStack_148;
        lVar14 = lStack_150;
        if (ppuStack_1c0 != (undefined **)0x0) {
          ppuVar7 = ppuStack_1c0 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
            if (bVar3) {
              *(int *)ppuVar7 = *(int *)ppuVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_138 = &PTR_FUN_110b04170;
        ppuStack_118 = (undefined **)plStack_168;
        ppuStack_108 = ppuStack_158;
        ppuStack_110 = ppuStack_160;
        plStack_168 = (long *)0x0;
        ppuStack_158 = (undefined **)0x0;
        ppuStack_120 = &PTR_FUN_110b04128;
        plStack_100 = (long *)lStack_150;
        plStack_f8 = (long *)lStack_148;
        lStack_148 = 0;
        lStack_140 = 0;
        lStack_150 = 0;
        ppuStack_e0 = ppuStack_1c0;
        uStack_130 = 0;
        lStack_f0 = lVar24;
        ppuStack_e8 = &PTR_FUN_110b04170;
        plVar8 = (long *)0xd8;
        __Znwm();
        plVar11 = plVar8 + 1;
        *plVar11 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[7] = 0;
        plVar8[6] = 0;
        plVar8[9] = 0;
        plVar8[8] = 0;
        plVar8[0xd] = 0;
        plVar8[0xc] = 0;
        plVar8[0xf] = 0;
        plVar8[0xe] = 0;
        *(undefined8 *)((long)plVar8 + 0x84) = 0;
        *(undefined8 *)((long)plVar8 + 0x7c) = 0;
        plVar8[0x13] = (long)ppuStack_118;
        plVar8[0x12] = (long)ppuStack_120;
        plVar8[0x15] = (long)ppuStack_108;
        plVar8[0x14] = (long)ppuStack_110;
        plVar8[2] = 0;
        plVar8[3] = 0x32aaaba7;
        plVar8[10] = 0;
        plVar8[0xb] = 0x3cb0b1bb;
        *plVar8 = (long)&PTR_FUN_110b04260;
        plVar8[0x12] = (long)&PTR_FUN_110b04128;
        ppuStack_118 = (undefined **)0x0;
        ppuStack_108 = (undefined **)0x0;
        plVar8[0x16] = lVar14;
        plVar8[0x17] = lVar20;
        plStack_100 = (long *)0x0;
        plStack_f8 = (long *)0x0;
        lStack_f0 = 0;
        plVar8[0x1a] = (long)ppuStack_e0;
        plVar8[0x19] = (long)ppuStack_e8;
        ppuStack_e0 = (undefined **)0x0;
        plVar8[0x18] = lVar24;
        plVar8[0x19] = (long)&PTR_FUN_110b04170;
        uVar9 = 8;
        __Znwm();
        __ZNSt3__115__thread_structC1Ev();
        puVar6 = (undefined8 *)0x20;
        __Znwm();
        *puVar6 = uVar9;
        puVar6[2] = 1;
        puVar6[1] = 0x18;
        puVar6[3] = plVar8;
        puVar10 = auStack_d0;
        puStack_c8 = puVar6;
        _pthread_create(puVar10,0,FUN_1096b27b4,puVar6);
        if ((int)puVar10 != 0) {
          __ZNSt3__120__throw_system_errorEiPKc();
          goto LAB_1096b001c;
        }
        puStack_c8 = (undefined8 *)0x0;
        FUN_1096b282c(&puStack_c8);
        __ZNSt3__16thread6detachEv(auStack_d0);
        __ZNSt3__16threadD1Ev(auStack_d0);
        FUN_1094a4db4(plVar8);
        do {
          lVar14 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        ppuStack_e8 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_e8);
        if (plStack_100 != (long *)0x0) {
          plStack_f8 = plStack_100;
          __ZdlPv();
        }
        ppuStack_110 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_110);
        ppuStack_120 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_120);
        ppuStack_138 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_138);
        if (lStack_150 != 0) {
          lStack_148 = lStack_150;
          __ZdlPv();
        }
        ppuStack_160 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_160);
        ppuStack_170 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_170);
        plVar11 = (long *)ppuStack_1a8[1];
        ppuStack_1a8[1] = (undefined *)plVar8;
        if (plVar11 != (long *)0x0) {
          plVar8 = plVar11 + 1;
          do {
            lVar14 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      }
      else {
        ppuVar7 = (undefined **)0x20;
        __Znwm();
        ppuVar22 = ppuVar7 + 1;
        *ppuVar22 = (undefined *)0x0;
        ppuVar7[2] = (undefined *)0x0;
        *ppuVar7 = (undefined *)&PTR_FUN_110b042a8;
        puVar6 = (undefined8 *)0x90;
        __Znwm();
        ppuVar19 = ppuVar7 + 3;
        *ppuVar19 = (undefined *)puVar6;
        puVar6[2] = 0;
        puVar6[3] = 0x32aaaba7;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[7] = 0;
        puVar6[6] = 0;
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0x3cb0b1bb;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
        *(undefined8 *)((long)puVar6 + 0x84) = 0;
        *(undefined8 *)((long)puVar6 + 0x7c) = 0;
        *puVar6 = &PTR_DAT_1108c5a48;
        puVar6[1] = 0;
        lStack_258 = lStack_1f8;
        if (lStack_1f8 != 0) {
          piVar12 = (int *)(lStack_1f8 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_260 = &PTR_FUN_110b04128;
        ppuStack_248 = ppuStack_1e8;
        ppuStack_250 = ppuStack_1f0;
        if (ppuStack_1e8 != (undefined **)0x0) {
          ppuVar13 = ppuStack_1e8 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar3) {
              *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_240 = 0;
        lStack_238 = 0;
        lStack_230 = 0;
        ppuStack_120 = ppuVar19;
        ppuStack_118 = ppuVar7;
        FUN_109285684(&lStack_240,lVar20,lVar24,lVar24 - lVar20 >> 2);
        ppuStack_220 = ppuStack_1c0;
        if (ppuStack_1c0 != (undefined **)0x0) {
          ppuVar13 = ppuStack_1c0 + -1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
            if (bVar3) {
              *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_228 = &PTR_FUN_110b04170;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
          if (bVar3) {
            *ppuVar22 = *ppuVar22 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plStack_a8 = (long *)0x0;
        plVar8 = (long *)0x60;
        ppuStack_218 = ppuVar19;
        ppuStack_210 = ppuVar7;
        __Znwm();
        lVar14 = lStack_230;
        plVar8[2] = lStack_258;
        plVar8[1] = (long)ppuStack_260;
        plVar8[4] = (long)ppuStack_248;
        plVar8[3] = (long)ppuStack_250;
        *plVar8 = (long)&PTR_FUN_110b042f8;
        plVar8[1] = (long)&PTR_FUN_110b04128;
        lStack_258 = 0;
        ppuStack_248 = (undefined **)0x0;
        plVar8[6] = lStack_238;
        plVar8[5] = lStack_240;
        lStack_238 = 0;
        lStack_230 = 0;
        lStack_240 = 0;
        plVar8[9] = (long)ppuStack_220;
        plVar8[8] = (long)ppuStack_228;
        ppuStack_220 = (undefined **)0x0;
        plVar8[7] = lVar14;
        plVar8[8] = (long)&PTR_FUN_110b04170;
        plVar8[10] = (long)ppuVar19;
        plVar8[0xb] = (long)ppuVar7;
        ppuStack_218 = (undefined **)0x0;
        ppuStack_210 = (undefined **)0x0;
        plStack_a8 = plVar8;
        if (pppuStack_88 == (undefined ***)0x0) {
          func_0x000104c501e4();
          goto LAB_1096b001c;
        }
        (*(code *)(*pppuStack_88)[6])(auStack_208,pppuStack_88,alStack_c0);
        __ZNSt3__16futureIvED1Ev(auStack_208);
        if (plStack_a8 == alStack_c0) {
          lVar14 = 0x20;
LAB_1096af890:
          (**(code **)(*plStack_a8 + lVar14))();
        }
        else if (plStack_a8 != (long *)0x0) {
          lVar14 = 0x28;
          goto LAB_1096af890;
        }
        ppuVar7 = ppuStack_210;
        if (ppuStack_210 != (undefined **)0x0) {
          plVar8 = (long *)(ppuStack_210 + 1);
          do {
            lVar14 = *plVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)((long)*ppuStack_210 + 0x10))(ppuStack_210);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
          }
        }
        ppuStack_228 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_228);
        if (lStack_240 != 0) {
          lStack_238 = lStack_240;
          __ZdlPv();
        }
        ppuStack_250 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_250);
        ppuStack_260 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_260);
        puVar21 = *ppuStack_120;
        if (puVar21 == (undefined *)0x0) {
          FUN_1094362d4(3);
          goto LAB_1096b001c;
        }
        FUN_1094a4db4(puVar21);
        plVar8 = (long *)ppuStack_1a8[1];
        ppuStack_1a8[1] = puVar21;
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            lVar14 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        ppuVar7 = ppuStack_118;
        if (ppuStack_118 != (undefined **)0x0) {
          ppuVar19 = ppuStack_118 + 1;
          do {
            puVar21 = *ppuVar19;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
            if (bVar3) {
              *ppuVar19 = puVar21 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (puVar21 == (undefined *)0x0) {
            (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
          }
        }
      }
      if (pppuStack_88 == &ppuStack_a0) {
        lVar14 = 0x20;
      }
      else {
        if (pppuStack_88 == (undefined ***)0x0) goto LAB_1096af9c8;
        lVar14 = 0x28;
      }
      (**(code **)((long)*pppuStack_88 + lVar14))();
LAB_1096af9c8:
      ppuVar7 = ppuStack_1a8;
      if ((uint)lVar16 < 2) {
        ppuStack_120 = &PTR_FUN_110b01d60;
        ppuStack_118 = (undefined **)0x0;
        if (ppuStack_1a8 != (undefined **)0x0) {
          func_0x000107c2acd4(&ppuStack_120);
          ppuStack_118 = ppuStack_1a8;
          ppuStack_120 = ppuStack_1b0;
          if (ppuStack_1a8 != (undefined **)0x0) {
            ppuVar19 = ppuStack_1a8 + -1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
              if (bVar3) {
                *(int *)ppuVar19 = *(int *)ppuVar19 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        plVar8 = (long *)0x30;
        __Znwm();
        plVar8[1] = 0;
        plVar8[2] = 0;
        *plVar8 = (long)&PTR_FUN_110b04378;
        ppuVar19 = (undefined **)(plVar8 + 3);
        *ppuVar19 = (undefined *)0x0;
        plVar8[4] = 0;
        plVar8[5] = 0;
        puVar6 = (undefined8 *)0x10;
        __Znwm();
        plVar8[3] = (long)puVar6;
        plVar8[4] = (long)puVar6;
        plVar8[5] = (long)(puVar6 + 2);
        puVar6[1] = ppuStack_118;
        *puVar6 = ppuStack_120;
        if (puVar6[1] != 0) {
          piVar12 = (int *)(puVar6[1] + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar8[4] = (long)(puVar6 + 2);
        ppuStack_120 = &PTR_FUN_110b01d60;
        ppuStack_170 = ppuVar19;
        plStack_168 = plVar8;
        func_0x000107c2acd4(&ppuStack_120);
        plVar11 = plVar8 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar21 = ppuVar7[9];
        ppuVar7[8] = (undefined *)ppuVar19;
        ppuVar7[9] = (undefined *)plVar8;
        if (puVar21 != (undefined *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        puVar6 = (undefined8 *)0x30;
        __Znwm();
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR_FUN_110b04378;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[3] = 0;
        plVar8 = (long *)ppuVar7[7];
        ppuVar7[6] = (undefined *)(puVar6 + 3);
        ppuVar7[7] = (undefined *)puVar6;
        if (plVar8 != (long *)0x0) {
          plVar11 = plVar8 + 1;
          do {
            lVar16 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar16 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        ppuStack_1a8[5] = (undefined *)(lVar23 + 0x30);
        plVar8 = (long *)ppuStack_1a8[6];
        FUN_1096b1800(plVar8,(long)piStack_180 - (long)piStack_188 >> 2);
        piVar4 = piStack_180;
        for (piVar12 = piStack_188; piVar12 != piVar4; piVar12 = piVar12 + 1) {
          uVar1 = *(long *)(lVar23 + 0x50) + (long)*piVar12;
          lVar16 = *(long *)(*(long *)(lVar23 + 0x38) + (uVar1 >> 4) * 8) + (uVar1 & 0xf) * 0x110 +
                   0xf8;
          FUN_1096b306c(&ppuStack_a0);
          puVar6 = (undefined8 *)plVar8[1];
          if (puVar6 < (undefined8 *)plVar8[2]) {
            puVar18 = puVar6 + 2;
            *puVar6 = &PTR_FUN_110b01d60;
            puVar6[1] = lStack_98;
            *puVar6 = ppuStack_a0;
            lStack_98 = 0;
          }
          else {
            lVar14 = (long)puVar6 - *plVar8;
            uVar1 = (lVar14 >> 4) + 1;
            if (uVar1 >> 0x3c != 0) {
              FUN_1096b2ed8();
              goto LAB_1096b001c;
            }
            uVar15 = plVar8[2] - *plVar8;
            uVar17 = (long)uVar15 >> 3;
            if (uVar17 <= uVar1) {
              uVar17 = uVar1;
            }
            if (0x7fffffffffffffef < uVar15) {
              uVar17 = 0xfffffffffffffff;
            }
            plStack_100 = plVar8;
            FUN_1096b2eec();
            puVar6 = (undefined8 *)(uVar17 + lVar14);
            puVar18 = puVar6 + 2;
            *puVar6 = &PTR_FUN_110b01d60;
            puVar6[1] = lStack_98;
            *puVar6 = ppuStack_a0;
            lStack_98 = 0;
            lVar14 = (long)puVar6 + (*plVar8 - plVar8[1]);
            FUN_1096b2f78(*plVar8,plVar8[1],lVar14);
            ppuStack_120 = (undefined **)*plVar8;
            *plVar8 = lVar14;
            plVar8[1] = (long)puVar18;
            ppuStack_108 = (undefined **)plVar8[2];
            plVar8[2] = uVar17 + lVar16 * 0x10;
            ppuStack_118 = ppuStack_120;
            ppuStack_110 = ppuStack_120;
            FUN_1096b3008(&ppuStack_120);
          }
          plVar8[1] = (long)puVar18;
          ppuStack_a0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_a0);
        }
        ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110af5720,0);
        if (param_3 == (undefined8 *)0x0) {
          func_0x000107c2acdc();
        }
        lStack_98 = param_3[1];
        if (lStack_98 == 0) {
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[7] = 0;
          param_1[6] = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          *param_1 = FUN_1096b1e6c;
          param_1[1] = &PTR_FUN_110ae9180;
        }
        else {
          piVar12 = (int *)(lStack_98 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          ppuStack_a0 = &PTR_FUN_110af5700;
          if (plStack_168 != (long *)0x0) {
            plVar8 = plStack_168 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (lStack_98 != 0) {
            piVar12 = (int *)(lStack_98 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar3) {
                *piVar12 = *piVar12 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_118 = (undefined **)0x0;
          *param_1 = FUN_1096b3104;
          param_1[1] = &PTR_FUN_110b043b8;
          ppuStack_120 = (undefined **)0x0;
          param_1[3] = plStack_168;
          param_1[2] = ppuStack_170;
          param_1[5] = lStack_98;
          param_1[4] = &PTR_FUN_110af5700;
          param_1[4] = &PTR_FUN_110af5700;
          ppuStack_110 = &PTR_FUN_110b01d60;
          ppuStack_108 = (undefined **)0x0;
          func_0x000107c2acd4(&ppuStack_110);
          ppuVar7 = ppuStack_118;
          if (ppuStack_118 != (undefined **)0x0) {
            ppuVar19 = ppuStack_118 + 1;
            do {
              puVar21 = *ppuVar19;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
              if (bVar3) {
                *ppuVar19 = puVar21 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (puVar21 == (undefined *)0x0) {
              (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
            }
          }
        }
        ppuStack_a0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_a0);
        plVar8 = plStack_168;
        if (plStack_168 != (long *)0x0) {
          plVar11 = plStack_168 + 1;
          do {
            lVar23 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar23 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      else {
        ppuStack_120 = (undefined **)&DAT_10f6842c6;
        ppuStack_118 = (undefined **)&UNK_10f57c9e9;
        ppuStack_110 = (undefined **)0x16f;
        FUN_1096993dc(&ppuStack_120,&UNK_10f56faf5);
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *param_1 = FUN_1096b1e6c;
        param_1[1] = &PTR_FUN_110ae9180;
      }
      ppuStack_1c8 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_1c8);
      if (lStack_1e0 != 0) {
        lStack_1d8 = lStack_1e0;
        __ZdlPv();
      }
      ppuStack_1f0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_1f0);
      ppuStack_200 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_200);
      ppuStack_1b0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_1b0);
      goto LAB_1096afe58;
    }
    ppuVar7 = (undefined **)0x90;
    __Znwm();
    ppuVar7[2] = (undefined *)0x0;
    ppuVar7[3] = (undefined *)0x32aaaba7;
    ppuVar7[5] = (undefined *)0x0;
    ppuVar7[4] = (undefined *)0x0;
    ppuVar7[7] = (undefined *)0x0;
    ppuVar7[6] = (undefined *)0x0;
    ppuVar7[9] = (undefined *)0x0;
    ppuVar7[8] = (undefined *)0x0;
    ppuVar7[10] = (undefined *)0x0;
    ppuVar7[0xb] = (undefined *)0x3cb0b1bb;
    ppuVar7[0xd] = (undefined *)0x0;
    ppuVar7[0xc] = (undefined *)0x0;
    ppuVar7[0xf] = (undefined *)0x0;
    ppuVar7[0xe] = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar7 + 0x84) = 0;
    *(undefined8 *)((long)ppuVar7 + 0x7c) = 0;
    *ppuVar7 = (undefined *)&PTR_DAT_1108c5a48;
    ppuVar7[1] = (undefined *)0x0;
    ppuStack_118 = ppuStack_1e8;
    ppuStack_120 = ppuStack_1f0;
    if (ppuStack_1e8 != (undefined **)0x0) {
      ppuVar19 = ppuStack_1e8 + -1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
        if (bVar3) {
          *(int *)ppuVar19 = *(int *)ppuVar19 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar14 = lVar14 + 8;
    ppuStack_170 = ppuVar7;
    FUN_1096b1220(lVar14,&ppuStack_1f0,&lStack_1e0,0,puVar6 + 6);
    ppuStack_120 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_120);
    ppuStack_a0 = (undefined **)CONCAT44(ppuStack_a0._4_4_,(int)lVar14);
    if (ppuStack_170 != (undefined **)0x0) {
      FUN_1096b271c(ppuStack_170,&ppuStack_a0);
      ppuVar7 = ppuStack_170;
      if (ppuStack_170 == (undefined **)0x0) {
        FUN_1094362d4(3);
        goto LAB_1096b001c;
      }
      FUN_1094a4db4(ppuStack_170);
      plVar11 = (long *)*plVar8;
      *plVar8 = (long)ppuVar7;
      if (plVar11 != (long *)0x0) {
        plVar8 = plVar11 + 1;
        do {
          lVar14 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      func_0x00010598965c(&ppuStack_170);
      goto LAB_1096af9c8;
    }
  }
  FUN_1094362d4(3);
LAB_1096b001c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1096b0020);
  (*pcVar5)();
}



/* Entry: 1096b019c; end: 1096b11b7;  */

/* WARNING: Removing unreachable block (ram,0x0001096b0944) */
/* WARNING: Removing unreachable block (ram,0x0001096b0a94) */
/* WARNING: Removing unreachable block (ram,0x0001096b0bc4) */
/* WARNING: Removing unreachable block (ram,0x0001096b0d2c) */

undefined8 * FUN_1096b019c(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  undefined ******ppppppuVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  undefined *******pppppppuVar12;
  undefined *******pppppppuVar13;
  undefined8 uVar14;
  byte *pbVar15;
  long *plVar16;
  undefined ******ppppppuVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined4 uVar31;
  ulong uVar32;
  undefined ******ppppppuStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined ******ppppppuStack_110;
  undefined *****pppppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined *****pppppuStack_d0;
  long lStack_c8;
  undefined ******ppppppuStack_c0;
  ulong uStack_b8;
  undefined1 uStack_a9;
  undefined *****pppppuStack_a8;
  undefined *****pppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined *****pppppuStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar8 = (undefined8 *)0x28;
  _malloc();
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 3) = 1;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
    puVar8 = puVar8 + 4;
    *puVar8 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b04128;
  param_1[1] = puVar8;
  puVar8 = param_1;
  func_0x000107c2acd0(param_1,0x90);
  puVar8[5] = 0;
  puVar8[4] = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 5) = 0x3f800000;
  puVar8[7] = 0;
  puVar8[6] = 0;
  puVar8[9] = 0;
  puVar8[8] = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xe] = 0;
  puVar8[0x11] = 0;
  puVar8[0x10] = 0;
  *puVar8 = &PTR_DAT_110b043e0;
  lVar23 = 0x11382a900;
  FUN_109693f54();
  lStack_d8 = *(long *)(param_2 + 8);
  if (lStack_d8 != 0) {
    piVar19 = (int *)(lStack_d8 + -8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar5) {
        *piVar19 = *piVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_e0 = &PTR_FUN_110b01468;
  uVar22 = *(long *)(lStack_d8 + 0x10) - *(long *)(lStack_d8 + 8);
  lVar27 = param_1[1];
  lVar25 = *(long *)(lVar27 + 0x60);
  uVar32 = (long)(uVar22 * 0x10000000) >> 0x20;
  iVar26 = (int)(uVar22 >> 4);
  if ((ulong)((*(long *)(lVar27 + 0x70) - lVar25 >> 3) * -0x5555555555555555) < (ulong)(long)iVar26)
  {
    if (0xaaaaaaaaaaaaaaa < uVar32) {
      FUN_1096b32ac();
LAB_1096b0f84:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1096b0f88);
      (*pcVar7)();
    }
    lVar28 = *(long *)(lVar27 + 0x68);
    uVar20 = uVar32;
    plStack_80 = (long *)(lVar27 + 0x60);
    FUN_1096b32c0();
    lVar25 = uVar20 + (lVar28 - lVar25);
    lVar28 = lVar25 + (*(long *)(lVar27 + 0x60) - *(long *)(lVar27 + 0x68));
    func_0x0001096b3304(*(long *)(lVar27 + 0x60),*(long *)(lVar27 + 0x68),lVar28);
    pppppuStack_a0 = *(undefined ******)(lVar27 + 0x60);
    *(long *)(lVar27 + 0x60) = lVar28;
    *(long *)(lVar27 + 0x68) = lVar25;
    uStack_88 = *(undefined8 *)(lVar27 + 0x70);
    *(ulong *)(lVar27 + 0x70) = uVar20 + lVar23 * 0x18;
    pppppuStack_98 = pppppuStack_a0;
    pppppuStack_90 = pppppuStack_a0;
    func_0x0001096b337c(&pppppuStack_a0);
    lVar27 = param_1[1];
  }
  pppppuStack_a0 = (undefined *****)CONCAT44(pppppuStack_a0._4_4_,0xffffffff);
  func_0x00010742638c(lVar27 + 0x78,uVar32,&pppppuStack_a0);
  FUN_10925b8c4(&lStack_f8,uVar32);
  if (0 < iVar26) {
    uVar32 = 0;
    do {
      lVar27 = param_1[1];
      puVar8 = *(undefined8 **)(lVar27 + 0x38);
      puVar18 = *(undefined8 **)(lVar27 + 0x40);
      puVar30 = (undefined8 *)((long)puVar18 - (long)puVar8);
      uVar31 = (undefined4)uVar32;
      *(undefined4 *)(lStack_f8 + uVar32 * 4) = uVar31;
      lVar25 = *(long *)(lStack_d8 + 8);
      lVar23 = 0;
      if (puVar30 != (undefined8 *)0x0) {
        lVar23 = ((long)puVar18 - (long)puVar8) * 2 + -1;
      }
      uVar20 = *(ulong *)(lVar27 + 0x50);
      if (lVar23 == *(long *)(lVar27 + 0x58) + uVar20) {
        if (uVar20 < 0x10) {
          puVar29 = *(undefined8 **)(lVar27 + 0x48);
          puVar24 = *(undefined8 **)(lVar27 + 0x30);
          if (puVar30 < (undefined8 *)((long)puVar29 - (long)puVar24)) {
            uVar14 = 0x1100;
            __Znwm();
            if (puVar29 == puVar18) {
              if (puVar8 == puVar24) {
                uVar20 = (long)puVar29 - (long)puVar8 >> 2;
                if (puVar18 == puVar8) {
                  uVar20 = 1;
                }
                if (uVar20 >> 0x3d != 0) goto LAB_1096b0f70;
                lVar23 = uVar20 << 3;
                __Znwm();
                puVar29 = (undefined8 *)(lVar23 + (uVar20 * 2 + 6 & 0xfffffffffffffff8));
                puVar9 = puVar29;
                if (puVar18 != puVar8) {
                  puVar9 = (undefined8 *)((long)puVar29 + (long)puVar30);
                  puVar18 = puVar29;
                  puVar10 = puVar8;
                  do {
                    *puVar18 = *puVar10;
                    puVar30 = puVar30 + -1;
                    puVar18 = puVar18 + 1;
                    puVar10 = puVar10 + 1;
                  } while (puVar30 != (undefined8 *)0x0);
                }
                *(long *)(lVar27 + 0x30) = lVar23;
                *(undefined8 **)(lVar27 + 0x38) = puVar29;
                *(undefined8 **)(lVar27 + 0x40) = puVar9;
                *(ulong *)(lVar27 + 0x48) = lVar23 + uVar20 * 8;
                bVar5 = puVar8 != (undefined8 *)0x0;
                puVar8 = puVar29;
                if (bVar5) {
                  __ZdlPv(puVar24);
                  puVar8 = *(undefined8 **)(lVar27 + 0x38);
                }
              }
              puVar8[-1] = uVar14;
              puVar18 = *(undefined8 **)(lVar27 + 0x38);
              puVar8 = puVar18 + -1;
              *(undefined8 **)(lVar27 + 0x38) = puVar8;
              goto LAB_1096b03d0;
            }
            *puVar18 = uVar14;
            *(long *)(lVar27 + 0x40) = *(long *)(lVar27 + 0x40) + 8;
          }
          else {
            uVar20 = (long)puVar29 - (long)puVar24 >> 2;
            if (puVar29 == puVar24) {
              uVar20 = 1;
            }
            if (uVar20 >> 0x3d != 0) {
LAB_1096b0f70:
              func_0x000104c4f740();
              goto LAB_1096b0f84;
            }
            puVar9 = (undefined8 *)(uVar20 * 8);
            __Znwm();
            uVar14 = 0x1100;
            __Znwm();
            puVar24 = (undefined8 *)((long)puVar9 + (long)puVar30);
            puVar29 = puVar9 + uVar20;
            if (puVar30 == (undefined8 *)(uVar20 * 8)) {
              if ((long)puVar30 < 1) {
                uVar20 = (long)puVar30 >> 2;
                if (puVar18 == puVar8) {
                  uVar20 = 1;
                }
                if (uVar20 >> 0x3d != 0) {
                  func_0x000104c4f740();
                  goto LAB_1096b0f84;
                }
                puVar24 = (undefined8 *)(uVar20 << 3);
                __Znwm();
                puVar29 = puVar24 + uVar20;
                __ZdlPv(puVar9);
                puVar8 = *(undefined8 **)(lVar27 + 0x38);
                puVar18 = *(undefined8 **)(lVar27 + 0x40);
                puVar9 = puVar24;
              }
              else {
                puVar24 = (undefined8 *)
                          ((long)puVar24 - (((ulong)puVar30 >> 1) + 4 & 0xfffffffffffffff8));
              }
            }
            puVar30 = puVar24 + 1;
            *puVar24 = uVar14;
            if (puVar18 != puVar8) {
              do {
                puVar8 = puVar24;
                if (puVar24 == puVar9) {
                  if (puVar30 < puVar29) {
                    lVar23 = ((long)puVar29 - (long)puVar30 >> 3) + 1;
                    lVar28 = (long)puVar30 - (long)puVar24;
                    lVar6 = (long)puVar30 - (long)puVar24;
                    puVar30 = puVar30 + ((ulong)(lVar23 - (lVar23 >> 0x3f)) >> 1);
                    puVar8 = (undefined8 *)((long)puVar30 - lVar28);
                    if (lVar6 != 0) {
                      _memmove(puVar8,puVar24,lVar6);
                    }
                  }
                  else {
                    uVar20 = (long)puVar29 - (long)puVar24 >> 2;
                    if ((long)puVar29 - (long)puVar24 == 0) {
                      uVar20 = 1;
                    }
                    if (uVar20 >> 0x3d != 0) {
                      func_0x000104c4f740();
                      goto LAB_1096b0f84;
                    }
                    puVar10 = (undefined8 *)(uVar20 << 3);
                    __Znwm();
                    puVar8 = (undefined8 *)((long)puVar10 + (uVar20 * 2 + 6 & 0xfffffffffffffff8));
                    lVar23 = (long)puVar30 - (long)puVar24;
                    puVar30 = puVar8;
                    if (lVar23 != 0) {
                      puVar30 = (undefined8 *)((long)puVar8 + lVar23);
                      puVar29 = puVar8;
                      do {
                        *puVar29 = *puVar24;
                        lVar23 = lVar23 + -8;
                        puVar29 = puVar29 + 1;
                        puVar24 = puVar24 + 1;
                      } while (lVar23 != 0);
                    }
                    puVar29 = puVar10 + uVar20;
                    __ZdlPv(puVar9);
                    puVar9 = puVar10;
                  }
                }
                puVar18 = puVar18 + -1;
                puVar24 = puVar8 + -1;
                *puVar24 = *puVar18;
              } while (puVar18 != *(undefined8 **)(lVar27 + 0x38));
            }
            lVar23 = *(long *)(lVar27 + 0x30);
            *(undefined8 **)(lVar27 + 0x30) = puVar9;
            *(undefined8 **)(lVar27 + 0x38) = puVar24;
            *(undefined8 **)(lVar27 + 0x40) = puVar30;
            *(undefined8 **)(lVar27 + 0x48) = puVar29;
            if (lVar23 != 0) {
              __ZdlPv();
            }
          }
        }
        else {
          *(ulong *)(lVar27 + 0x50) = uVar20 - 0x10;
          puVar18 = puVar8 + 1;
LAB_1096b03d0:
          uVar14 = *puVar8;
          *(undefined8 **)(lVar27 + 0x38) = puVar18;
          FUN_1096b3698(lVar27 + 0x30,uVar14);
        }
      }
      if (*(long *)(lVar27 + 0x40) == *(long *)(lVar27 + 0x38)) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        uVar20 = *(long *)(lVar27 + 0x58) + *(long *)(lVar27 + 0x50);
        puVar8 = (undefined8 *)
                 (*(long *)(*(long *)(lVar27 + 0x38) + (uVar20 >> 4) * 8) + (uVar20 & 0xf) * 0x110);
      }
      puVar18 = (undefined8 *)(lVar25 + uVar32 * 0x10);
      lStack_c8 = puVar18[1];
      pppppuStack_d0 = (undefined *****)*puVar18;
      if (lStack_c8 != 0) {
        piVar19 = (int *)(lStack_c8 + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar5) {
            *piVar19 = *piVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *puVar8 = FUN_1096b1e6c;
      puVar8[1] = &PTR_FUN_110ae9180;
      puVar8[8] = &UNK_1053a6a3c;
      puVar8[9] = &PTR_FUN_110ae9180;
      puVar8[0x11] = 0;
      puVar8[0x10] = 0;
      puVar8[0x13] = 0;
      puVar8[0x12] = 0;
      puVar8[0x15] = 0;
      puVar8[0x14] = 0;
      *(undefined1 *)(puVar8 + 0x16) = 0;
      puVar8[0x17] = 0x32aaaba7;
      puVar8[0x19] = 0;
      puVar8[0x18] = 0;
      puVar8[0x1b] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1d] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1e] = 0;
      puVar8[0x20] = lStack_c8;
      puVar8[0x1f] = pppppuStack_d0;
      if (puVar8[0x20] != 0) {
        piVar19 = (int *)(puVar8[0x20] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar5) {
            *piVar19 = *piVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined4 *)(puVar8 + 0x21) = 0;
      FUN_1096b306c(&ppppppuStack_130,puVar8 + 0x1f);
      if (uStack_128 == 0) {
        ppppppuStack_130 = (undefined ******)&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppppppuStack_130);
        FUN_1096a4f30(&ppppppuStack_110,puVar8 + 0x1f);
        if ((undefined ******)pppppuStack_108 == (undefined ******)0x0) {
          ppppppuStack_110 = (undefined ******)&PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppppppuStack_110);
          pppppuStack_a0 = (undefined *****)&DAT_10f6842c6;
          pppppuStack_98 = (undefined *****)&UNK_10f57c9e9;
          pppppuStack_90 = (undefined *****)0x81;
          FUN_1096993dc(&pppppuStack_a0,&UNK_10f56faf5);
        }
        else {
          *(undefined4 *)(puVar8 + 0x21) = 2;
          ppppppuStack_110 = (undefined ******)&PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppppppuStack_110);
        }
      }
      else {
        uStack_b8 = uStack_128;
        ppppppuStack_c0 = ppppppuStack_130;
        if (uStack_128 != 0) {
          piVar19 = (int *)(uStack_128 - 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar5) {
              *piVar19 = *piVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined4 *)(puVar8 + 0x21) = 1;
        pppppuStack_108 = (undefined *****)uStack_128;
        ppppppuStack_110 = ppppppuStack_130;
        if (uStack_128 != 0) {
          piVar19 = (int *)(uStack_128 - 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar5) {
              *piVar19 = *piVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *puVar8 = FUN_1096b379c;
        (**(code **)puVar8[1])(puVar8 + 1);
        puVar8[1] = &PTR_FUN_110b04438;
        puVar11 = (ulong *)0x10;
        __Znwm();
        puVar11[1] = (ulong)pppppuStack_108;
        *puVar11 = (ulong)ppppppuStack_110;
        puVar8[2] = puVar11;
        ppppppuStack_110 = (undefined ******)&PTR_FUN_110b01d60;
        pppppuStack_108 = (undefined *****)0x0;
        func_0x000107c2acd4(&ppppppuStack_110);
        pppppuStack_108 = (undefined *****)uStack_b8;
        ppppppuStack_110 = ppppppuStack_c0;
        if (uStack_b8 != 0) {
          piVar19 = (int *)(uStack_b8 - 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar5) {
              *piVar19 = *piVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar8[8] = 0x1096b38e0;
        (**(code **)puVar8[9])(puVar8 + 9);
        puVar8[9] = &PTR_FUN_110b04450;
        puVar11 = (ulong *)0x10;
        __Znwm();
        puVar11[1] = (ulong)pppppuStack_108;
        *puVar11 = (ulong)ppppppuStack_110;
        puVar8[10] = puVar11;
        ppppppuStack_110 = (undefined ******)&PTR_FUN_110b01d60;
        pppppuStack_108 = (undefined *****)0x0;
        func_0x000107c2acd4(&ppppppuStack_110);
        ppppppuStack_c0 = (undefined ******)&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppppppuStack_c0);
        ppppppuStack_130 = (undefined ******)&PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppppppuStack_130);
      }
      pppppuStack_d0 = (undefined *****)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&pppppuStack_d0);
      *(long *)(lVar27 + 0x58) = *(long *)(lVar27 + 0x58) + 1;
      puVar8 = puVar18;
      func_0x000109693fa4(puVar18,0x11382a908);
      uStack_128 = puVar8[1];
      if (uStack_128 != 0) {
        piVar19 = (int *)(uStack_128 + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar5) {
            *piVar19 = *piVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppppuStack_130 = (undefined ******)&PTR_FUN_110b00af0;
      pbVar15 = (byte *)(uStack_128 + 8);
      if (*(char *)(uStack_128 + 0x1f) < '\0') {
        pbVar15 = *(byte **)pbVar15;
      }
      lVar23 = param_1[1];
      pppppuStack_108 = (undefined *****)0x0;
      uStack_100 = 0;
      ppppppuStack_110 = (undefined ******)0x0;
      bVar3 = *pbVar15;
      while (bVar3 != 0) {
        while ((bVar3 == 0x20 || (bVar3 == 0x2c))) {
          pbVar15 = pbVar15 + 1;
          bVar3 = *pbVar15;
        }
        lVar25 = 0;
        while ((0x2c < bVar3 || ((1L << ((ulong)bVar3 & 0x3f) & 0x100100000001U) == 0))) {
          bVar3 = pbVar15[lVar25 + 1];
          lVar25 = lVar25 + 1;
        }
        pbVar1 = pbVar15 + lVar25;
        FUN_1092b29f8(&pppppuStack_a0,pbVar15,pbVar1);
        lVar25 = lVar23 + 8;
        FUN_1094ccb54(lVar25,&pppppuStack_a0);
        if (lVar25 != 0) {
          FUN_10923b3a0(&ppppppuStack_110,lVar25 + 0x28);
        }
        pbVar15 = pbVar1;
        bVar3 = *pbVar1;
      }
      __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_
                (ppppppuStack_110,pppppuStack_108,&pppppuStack_a0);
      ppppppuStack_130 = (undefined ******)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppppppuStack_130);
      puVar8 = puVar18;
      func_0x000109693fa4(puVar18,0x11382a918);
      uStack_128 = puVar8[1];
      if (uStack_128 != 0) {
        piVar19 = (int *)(uStack_128 - 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar5) {
            *piVar19 = *piVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppppuStack_130 = (undefined ******)&PTR_FUN_110b00af0;
      plVar16 = (long *)(uStack_128 + 8);
      if (*(char *)(uStack_128 + 0x1f) < '\0') {
        plVar16 = (long *)*plVar16;
      }
      func_0x000107c31940(&pppppuStack_a0,plVar16);
      lVar23 = param_1[1] + 8;
      FUN_1092b09c4(lVar23,&pppppuStack_a0);
      if (lVar23 == 0) {
        ppppppuStack_c0 = &pppppuStack_a0;
        lVar23 = param_1[1] + 8;
        FUN_1092afa68(lVar23,&pppppuStack_a0,&UNK_10dd5b8f9,&ppppppuStack_c0,&pppppuStack_d0);
LAB_1096b0a68:
        *(undefined4 *)(lVar23 + 0x28) = uVar31;
      }
      else {
        if ((long)pppppuStack_108 - (long)ppppppuStack_110 == 0) {
          iVar26 = *(int *)(lVar23 + 0x28);
        }
        else {
          uVar20 = (long)pppppuStack_108 - (long)ppppppuStack_110 >> 2;
          iVar26 = *(int *)(lVar23 + 0x28);
          ppppppuVar17 = ppppppuStack_110;
          do {
            uVar21 = uVar20 >> 1;
            piVar19 = (int *)((long)ppppppuVar17 + uVar21 * 4);
            ppppppuVar2 = (undefined ******)(piVar19 + 1);
            uVar20 = uVar20 + (uVar20 >> 1 ^ 0xffffffffffffffff);
            if (iVar26 <= *piVar19) {
              ppppppuVar2 = ppppppuVar17;
              uVar20 = uVar21;
            }
            ppppppuVar17 = ppppppuVar2;
          } while (uVar20 != 0);
          if ((ppppppuVar2 != (undefined ******)pppppuStack_108) && (*(int *)ppppppuVar2 <= iVar26))
          goto LAB_1096b0a68;
        }
        *(undefined4 *)
         (*(long *)(param_1[1] + 0x78) + (long)*(int *)(lStack_f8 + (long)iVar26 * 4) * 4) = uVar31;
        *(undefined4 *)(lStack_f8 + (long)*(int *)(lVar23 + 0x28) * 4) = uVar31;
      }
      ppppppuStack_130 = (undefined ******)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppppppuStack_130);
      func_0x000107c2accc();
      func_0x00010969659c(&pppppuStack_d0);
      FUN_1096975b0(&ppppppuStack_c0,&pppppuStack_d0);
      uVar20 = (ulong)*(char *)(uStack_b8 + 0x1f);
      if ((long)uVar20 < 0) {
        uVar20 = *(ulong *)(uStack_b8 + 0x10);
        if (0x7ffffffffffffff7 < uVar20) {
          func_0x000104c4f6b8();
          goto LAB_1096b0f84;
        }
        lVar23 = *(long *)(uStack_b8 + 8);
      }
      else {
        lVar23 = uStack_b8 + 8;
      }
      if (uVar20 < 0x17) {
        uStack_120 = CONCAT17((char)uVar20,(undefined7)uStack_120);
        pppppppuVar12 = &ppppppuStack_130;
        if (uVar20 != 0) goto LAB_1096b0b34;
      }
      else {
        pppppppuVar13 = (undefined *******)0x19;
        if ((uVar20 | 7) != 0x17) {
          pppppppuVar13 = (undefined *******)((uVar20 | 7) + 1);
        }
        pppppppuVar12 = pppppppuVar13;
        __Znwm();
        uStack_120 = (ulong)pppppppuVar13 | 0x8000000000000000;
        ppppppuStack_130 = (undefined ******)pppppppuVar12;
        uStack_128 = uVar20;
LAB_1096b0b34:
        _memmove(pppppppuVar12,lVar23,uVar20);
      }
      *(undefined1 *)((long)pppppppuVar12 + uVar20) = 0;
      pppppppuVar13 = &ppppppuStack_130;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppppppuVar13,0,&UNK_10f57c9dd,5);
      pppppuStack_98 = (undefined *****)pppppppuVar13[1];
      pppppuStack_a0 = (undefined *****)*pppppppuVar13;
      pppppuStack_90 = (undefined *****)pppppppuVar13[2];
      pppppppuVar13[1] = (undefined ******)0x0;
      pppppppuVar13[2] = (undefined ******)0x0;
      *pppppppuVar13 = (undefined ******)0x0;
      lVar23 = param_1[1] + 8;
      FUN_1092b09c4(lVar23,&pppppuStack_a0);
      if (lVar23 == 0) {
        pppppuStack_a8 = (undefined *****)&pppppuStack_a0;
        lVar23 = param_1[1] + 8;
        FUN_1092afa68(lVar23,&pppppuStack_a0,&UNK_10dd5b8f9,&pppppuStack_a8,&uStack_a9);
        *(undefined4 *)(lVar23 + 0x28) = uVar31;
      }
      if ((long)uStack_120 < 0) {
        __ZdlPv(ppppppuStack_130);
      }
      ppppppuStack_c0 = (undefined ******)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppppppuStack_c0);
      pppppuStack_d0 = (undefined *****)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&pppppuStack_d0);
      ppppppuVar17 = (undefined ******)0x11382a930;
      func_0x000109693fa4();
      uStack_b8 = puVar18[1];
      if (uStack_b8 != 0) {
        piVar19 = (int *)(uStack_b8 - 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar5) {
            *piVar19 = *piVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppppuStack_c0 = (undefined ******)&PTR_FUN_110b00af0;
      plVar16 = (long *)(uStack_b8 + 8);
      uVar20 = (ulong)*(char *)(uStack_b8 + 0x1f);
      if ((long)uVar20 < 0) {
        uVar20 = *(ulong *)(uStack_b8 + 0x10);
        if ((int)uVar20 != 0) {
          if (uVar20 < 0x7ffffffffffffff8) {
            plVar16 = (long *)*plVar16;
            goto LAB_1096b0c64;
          }
          func_0x000104c4f6b8();
          goto LAB_1096b0f84;
        }
      }
      else if (*(char *)(uStack_b8 + 0x1f) != '\0') {
LAB_1096b0c64:
        if (uVar20 < 0x17) {
          uStack_120 = CONCAT17((char)uVar20,(undefined7)uStack_120);
          pppppppuVar12 = &ppppppuStack_130;
        }
        else {
          pppppppuVar13 = (undefined *******)0x19;
          if ((uVar20 | 7) != 0x17) {
            pppppppuVar13 = (undefined *******)((uVar20 | 7) + 1);
          }
          pppppppuVar12 = pppppppuVar13;
          __Znwm();
          uStack_120 = (ulong)pppppppuVar13 | 0x8000000000000000;
          ppppppuStack_130 = (undefined ******)pppppppuVar12;
          uStack_128 = uVar20;
        }
        _memmove(pppppppuVar12,plVar16,uVar20);
        *(undefined1 *)((long)pppppppuVar12 + uVar20) = 0;
        pppppppuVar13 = &ppppppuStack_130;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (pppppppuVar13,0,&UNK_10f57c9e3,5);
        pppppuStack_98 = (undefined *****)pppppppuVar13[1];
        pppppuStack_a0 = (undefined *****)*pppppppuVar13;
        pppppuStack_90 = (undefined *****)pppppppuVar13[2];
        pppppppuVar13[1] = (undefined ******)0x0;
        pppppppuVar13[2] = (undefined ******)0x0;
        *pppppppuVar13 = (undefined ******)0x0;
        lVar23 = param_1[1] + 8;
        ppppppuVar17 = &pppppuStack_a0;
        FUN_1092b09c4();
        if (lVar23 == 0) {
          pppppuStack_d0 = (undefined *****)&pppppuStack_a0;
          lVar23 = param_1[1] + 8;
          ppppppuVar17 = &pppppuStack_a0;
          FUN_1092afa68(lVar23,ppppppuVar17,&UNK_10dd5b8f9,&pppppuStack_d0,&pppppuStack_a8);
          *(undefined4 *)(lVar23 + 0x28) = uVar31;
        }
        if ((long)uStack_120 < 0) {
          __ZdlPv(ppppppuStack_130);
        }
      }
      lVar23 = param_1[1];
      puVar8 = *(undefined8 **)(lVar23 + 0x68);
      if (puVar8 < *(undefined8 **)(lVar23 + 0x70)) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[1] = pppppuStack_108;
        *puVar8 = ppppppuStack_110;
        puVar8[2] = uStack_100;
        ppppppuStack_110 = (undefined ******)0x0;
        pppppuStack_108 = (undefined *****)0x0;
        uStack_100 = 0;
        puVar8 = puVar8 + 3;
      }
      else {
        lVar25 = *(long *)(lVar23 + 0x60);
        lVar27 = (long)puVar8 - lVar25;
        uVar20 = (lVar27 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar20) {
          FUN_1096b32ac();
          goto LAB_1096b0f84;
        }
        lVar25 = (long)*(undefined8 **)(lVar23 + 0x70) - lVar25 >> 3;
        uVar21 = lVar25 * 0x5555555555555556;
        if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
          uVar21 = uVar20;
        }
        if (0x555555555555554 < (ulong)(lVar25 * -0x5555555555555555)) {
          uVar21 = 0xaaaaaaaaaaaaaaa;
        }
        plStack_80 = (long *)(lVar23 + 0x60);
        FUN_1096b32c0();
        puVar18 = (undefined8 *)(uVar21 + lVar27);
        *puVar18 = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[1] = pppppuStack_108;
        *puVar18 = ppppppuStack_110;
        puVar18[2] = uStack_100;
        ppppppuStack_110 = (undefined ******)0x0;
        pppppuStack_108 = (undefined *****)0x0;
        uStack_100 = 0;
        puVar8 = puVar18 + 3;
        lVar25 = (long)puVar18 + (*(long *)(lVar23 + 0x60) - *(long *)(lVar23 + 0x68));
        func_0x0001096b3304(*(long *)(lVar23 + 0x60),*(long *)(lVar23 + 0x68),lVar25);
        pppppuStack_a0 = *(undefined ******)(lVar23 + 0x60);
        *(long *)(lVar23 + 0x60) = lVar25;
        *(undefined8 **)(lVar23 + 0x68) = puVar8;
        uStack_88 = *(undefined8 *)(lVar23 + 0x70);
        *(ulong *)(lVar23 + 0x70) = uVar21 + (long)ppppppuVar17 * 0x18;
        pppppuStack_98 = pppppuStack_a0;
        pppppuStack_90 = pppppuStack_a0;
        func_0x0001096b337c(&pppppuStack_a0);
      }
      *(undefined8 **)(lVar23 + 0x68) = puVar8;
      ppppppuStack_c0 = (undefined ******)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppppppuStack_c0);
      if (ppppppuStack_110 != (undefined ******)0x0) {
        pppppuStack_108 = (undefined *****)ppppppuStack_110;
        __ZdlPv();
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != (uVar22 >> 4 & 0x7fffffff));
  }
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  ppuStack_e0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_e0);
  return param_1;
}



/* Entry: 1096b11b8; end: 1096b11eb;  */

undefined8 * FUN_1096b11b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b11ec; end: 1096b121f;  */

void FUN_1096b11ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b1220; end: 1096b178f;  */

uint FUN_1096b1220(long param_1,undefined8 *param_2,long *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint uVar14;
  long lVar15;
  byte bVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined **ppuStack_130;
  long lStack_128;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long alStack_c8 [3];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 *puStack_78;
  byte bStack_70;
  undefined4 *puVar13;
  
  func_0x00010737fadc(alStack_c8,
                      (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) *
                      -0x5555555555555555);
  uStack_b0 = (undefined **)CONCAT44(uStack_b0._4_4_,0xffffffff);
  FUN_1092cd11c(&lStack_e0,
                (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) * -0x5555555555555555,
                &uStack_b0);
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  puStack_108 = (undefined8 *)0x0;
  uStack_110 = 0;
  puVar19 = (undefined4 *)param_3[1];
  puVar12 = (undefined4 *)*param_3;
  if ((undefined4 *)*param_3 != puVar19) {
    do {
      puVar13 = puVar12 + 1;
      uStack_b0 = (undefined **)CONCAT44(uStack_b0._4_4_,*puVar12);
      FUN_1096b1934(&uStack_110,&uStack_b0,0);
      puVar12 = puVar13;
    } while (puVar13 != puVar19);
    if (lStack_e8 != 0) {
      uVar14 = 0;
      do {
        lVar15 = 0;
        if (puStack_100 != puStack_108) {
          lVar15 = ((long)puStack_100 - (long)puStack_108) * 0x40 + -1;
        }
        lStack_e8 = lStack_e8 + -1;
        uVar17 = lStack_f0 + lStack_e8;
        uVar5 = *(ulong *)(puStack_108[uVar17 >> 9] + (uVar17 & 0x1ff) * 8);
        uStack_118 = uVar5;
        if (lVar15 - uVar17 < 0x400) {
          uVar17 = (ulong)(int)uVar5;
          if ((uVar5 >> 0x20 & 1) != 0) goto LAB_1096b1408;
LAB_1096b1350:
          uVar9 = 1L << (uVar17 & 0x3f);
          uVar11 = *(ulong *)(alStack_c8[0] + (uVar17 >> 6) * 8);
          if (((uVar11 & uVar9) == 0) &&
             (*(ulong *)(alStack_c8[0] + (uVar17 >> 6) * 8) = uVar11 | uVar9,
             *(int *)(lStack_e0 + uVar17 * 4) == -1)) {
            uVar9 = uVar17;
            uVar11 = uVar5;
            if (param_4 == 0) {
LAB_1096b15bc:
              uVar9 = *(long *)(param_1 + 0x48) + uVar9;
              uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0x30) + (uVar9 >> 4) * 8) +
                                (uVar9 & 0xf) * 0x110 + 0x108);
              FUN_10923b3a0(param_5,&uStack_118);
              FUN_1096b1934(&uStack_110,&uStack_118,1);
              uVar14 = uVar8 | uVar14;
              uVar8 = (uint)uStack_118;
              if ((int)(uint)uStack_118 < 0) goto LAB_1096b15a0;
            }
            else {
              do {
                uVar9 = *(long *)(param_1 + 0x48) + (long)(int)uVar11;
                lVar15 = *(long *)(*(long *)(param_1 + 0x30) + (uVar9 >> 4) * 8) +
                         (uVar9 & 0xf) * 0x110;
                pcVar4 = (char *)(lVar15 + 0xf8);
                func_0x000109693cdc(pcVar4,0x11382a910);
                if ((*pcVar4 != '\x01') || ((*(byte *)(lVar15 + 0xb0) & 1) != 0)) {
                  uVar9 = (ulong)(int)(uint)uStack_118;
                  goto LAB_1096b15bc;
                }
                uVar8 = *(uint *)(*(long *)(param_1 + 0x70) + (long)(int)(uint)uStack_118 * 4);
                uStack_118 = CONCAT44(uStack_118._4_4_,uVar8);
                if ((int)uVar8 < 0) goto LAB_1096b15a0;
                uVar11 = (ulong)uVar8;
              } while (*(int *)(lStack_e0 + (ulong)uVar8 * 4) == -1);
            }
            *(uint *)(lStack_e0 + uVar17 * 4) = uVar8;
            if ((int)uVar5 != (uint)uStack_118) {
              lVar15 = *(long *)(param_1 + 0x70);
              do {
                iVar1 = *(int *)(lVar15 + uVar17 * 4);
                uVar17 = (ulong)iVar1;
                *(uint *)(lStack_e0 + uVar17 * 4) = (uint)uStack_118;
              } while (iVar1 != (uint)uStack_118);
            }
            puVar7 = (undefined8 *)(*(long *)(param_1 + 0x58) + (long)(int)uVar17 * 0x18);
            puVar12 = (undefined4 *)puVar7[1];
            for (puVar19 = (undefined4 *)*puVar7; puVar19 != puVar12; puVar19 = puVar19 + 1) {
              uStack_b0._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
              uStack_b0 = (undefined **)CONCAT44(uStack_b0._4_4_,*puVar19);
              FUN_1096b1934(&uStack_110,&uStack_b0,0);
            }
          }
        }
        else {
          puVar7 = puStack_100 + -1;
          __ZdlPv(*puVar7);
          uVar5 = uStack_118 & 0xffffffff;
          uVar17 = (ulong)(int)(uint)uStack_118;
          puStack_100 = puVar7;
          if ((uStack_118 & 0x100000000) == 0) goto LAB_1096b1350;
LAB_1096b1408:
          uVar17 = *(long *)(param_1 + 0x48) + uVar17;
          lVar15 = *(long *)(*(long *)(param_1 + 0x30) + (uVar17 >> 4) * 8);
          lStack_128 = param_2[1];
          ppuStack_130 = (undefined **)*param_2;
          if (lStack_128 != 0) {
            piVar10 = (int *)(lStack_128 + -8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          puVar18 = (undefined8 *)(lVar15 + (uVar17 & 0xf) * 0x110);
          puVar7 = puVar18 + 0x17;
          bStack_70 = 0;
          puStack_78 = puVar7;
          __ZNSt3__15mutex8try_lockEv();
          bStack_70 = (byte)puVar7;
          if (((ulong)puVar7 & 1) == 0) {
            FUN_1095b0028(&puStack_78);
            bVar16 = *(byte *)(puVar18 + 0x16);
          }
          else if ((*(byte *)(puVar18 + 0x16) & 1) == 0) {
            if (*(char *)(puVar18[1] + 8) == '\x01') {
              pcVar6 = (code *)*puVar18;
              lStack_a8 = lStack_128;
              uStack_b0 = ppuStack_130;
              if (lStack_128 != 0) {
                piVar10 = (int *)(lStack_128 + -8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                  if (bVar3) {
                    *piVar10 = *piVar10 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              puVar7 = &uStack_b0;
              (*pcVar6)(puVar7,puVar18);
              uStack_b0 = &PTR_FUN_110b01d60;
              func_0x000107c2acd4(&uStack_b0);
              if ((int)puVar7 != 0) {
                *(undefined1 *)(puVar18 + 0x16) = 1;
                uStack_b0 = (undefined **)puVar18[0x10];
                puVar18[0x10] = 0;
                lStack_a8 = puVar18[0x11];
                puVar18[0x11] = 0;
                uStack_a0 = puVar18[0x12];
                puVar18[0x12] = 0;
                uStack_98 = puVar18[0x13];
                puVar18[0x13] = 0;
                uStack_90 = puVar18[0x14];
                puVar18[0x14] = 0;
                lStack_88 = puVar18[0x15];
                puVar18[0x15] = 0;
                if ((bStack_70 & 1) == 0) {
                  __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1096b16f4);
                  (*pcVar6)();
                }
                __ZNSt3__15mutex6unlockEv(puStack_78);
                bStack_70 = 0;
                while (lStack_88 != 0) {
                  (**(code **)(*(long *)(lStack_a8 + (uStack_90 >> 6) * 8) +
                              (uStack_90 & 0x3f) * 0x40))();
                  FUN_109477390(&uStack_b0);
                }
                FUN_10947688c(&uStack_b0);
                goto LAB_1096b146c;
              }
            }
            bVar16 = 0;
          }
          else {
LAB_1096b146c:
            bVar16 = 1;
          }
          if (bStack_70 == 1) {
            __ZNSt3__15mutex6unlockEv(puStack_78);
          }
          ppuStack_130 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_130);
          if ((bVar16 & 1) == 0) {
            uVar14 = 0xffffffff;
            goto LAB_1096b1690;
          }
        }
LAB_1096b15a0:
      } while (lStack_e8 != 0);
      goto LAB_1096b1684;
    }
  }
  uVar14 = 0;
LAB_1096b1684:
  __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(*param_5,param_5[1],&uStack_b0);
LAB_1096b1690:
  FUN_1096b1da4(&uStack_110);
  if (lStack_e0 != 0) {
    lStack_d8 = lStack_e0;
    __ZdlPv();
  }
  if (alStack_c8[0] != 0) {
    __ZdlPv();
  }
  return uVar14;
}



/* Entry: 1096b1790; end: 1096b17ff;  */

undefined8 * FUN_1096b1790(undefined8 *param_1)

{
  FUN_1096b2e44(param_1 + 9);
  param_1[7] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  param_1[2] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_1);
  return param_1;
}



/* Entry: 1096b1800; end: 1096b189b;  */

long * FUN_1096b1800(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_1096b2ed8();
      param_1[7] = (long)&PTR_FUN_110b01d60;
      func_0x000107c2acd4();
      if (param_1[4] != 0) {
        param_1[5] = param_1[4];
        __ZdlPv();
      }
      param_1[2] = (long)&PTR_FUN_110b01d60;
      func_0x000107c2acd4();
      *param_1 = (long)&PTR_FUN_110b01d60;
      func_0x000107c2acd4(param_1);
      return param_1;
    }
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_38 = param_1;
    FUN_1096b2eec();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar3 = lVar2 + (*param_1 - param_1[1]);
    FUN_1096b2f78(*param_1,param_1[1],lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar1 * 0x10;
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_1096b3008(param_1);
  }
  return param_1;
}



/* Entry: 1096b189c; end: 1096b18ff;  */

undefined8 * FUN_1096b189c(undefined8 *param_1)

{
  param_1[7] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  param_1[2] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_1);
  return param_1;
}



/* Entry: 1096b1900; end: 1096b1933;  */

undefined8 * FUN_1096b1900(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b1934; end: 1096b1c73;  */

void FUN_1096b1934(ulong *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  puVar18 = (undefined8 *)param_1[1];
  puVar13 = (undefined8 *)param_1[2];
  uVar10 = (long)puVar13 - (long)puVar18;
  uVar9 = 0;
  if (uVar10 != 0) {
    uVar9 = ((long)puVar13 - (long)puVar18) * 0x40 - 1;
  }
  uVar2 = param_1[4];
  uVar11 = param_1[5];
  uVar12 = uVar11 + uVar2;
  if (uVar9 != uVar12) goto LAB_1096b1c08;
  if (uVar2 < 0x200) {
    puVar14 = (undefined8 *)param_1[3];
    puVar17 = (undefined8 *)*param_1;
    if (uVar10 < (ulong)((long)puVar14 - (long)puVar17)) {
      uVar6 = 0x1000;
      puVar8 = param_2;
      __Znwm();
      if (puVar14 == puVar13) {
        if (puVar18 == puVar17) {
          uVar9 = (long)puVar14 - (long)puVar18 >> 2;
          if (puVar13 == puVar18) {
            uVar9 = 1;
          }
          lVar15 = uVar9 * 2;
          FUN_1096b1d70();
          puVar18 = (undefined8 *)(uVar9 + (lVar15 + 6U & 0xfffffffffffffff8));
          lVar15 = param_1[2] - (long)param_1[1];
          puVar13 = puVar18;
          if (lVar15 != 0) {
            puVar13 = (undefined8 *)((long)puVar18 + lVar15);
            puVar14 = (undefined8 *)param_1[1];
            puVar17 = puVar18;
            do {
              *puVar17 = *puVar14;
              lVar15 = lVar15 + -8;
              puVar14 = puVar14 + 1;
              puVar17 = puVar17 + 1;
            } while (lVar15 != 0);
          }
          uVar10 = *param_1;
          *param_1 = uVar9;
          param_1[1] = (ulong)puVar18;
          param_1[2] = (ulong)puVar13;
          param_1[3] = uVar9 + (long)puVar8 * 8;
          if (uVar10 != 0) {
            __ZdlPv(uVar10);
            puVar18 = (undefined8 *)param_1[1];
          }
        }
        puVar18[-1] = uVar6;
        uVar9 = param_1[1];
        param_1[1] = uVar9 - 8;
        uVar6 = *(undefined8 *)(uVar9 - 8);
        param_1[1] = uVar9;
        goto LAB_1096b1998;
      }
      *puVar13 = uVar6;
      param_1[2] = param_1[2] + 8;
    }
    else {
      puVar8 = (undefined8 *)((long)puVar14 - (long)puVar17 >> 2);
      if (puVar14 == puVar17) {
        puVar8 = (undefined8 *)0x1;
      }
      puVar16 = param_2;
      FUN_1096b1d70();
      uVar6 = 0x1000;
      puVar7 = puVar16;
      __Znwm();
      puVar14 = (undefined8 *)((long)puVar8 + uVar10);
      puVar17 = puVar8 + (long)puVar16;
      puVar5 = puVar8;
      if (uVar10 == (long)puVar16 * 8) {
        if ((long)uVar10 < 1) {
          puVar14 = (undefined8 *)((long)puVar14 - (long)puVar8 >> 2);
          if (puVar13 == puVar18) {
            puVar14 = (undefined8 *)0x1;
          }
          puVar5 = puVar14;
          FUN_1096b1d70();
          puVar14 = puVar5 + ((ulong)puVar14 >> 2);
          puVar17 = puVar5 + (long)puVar7;
          if (puVar8 != (undefined8 *)0x0) {
            __ZdlPv(puVar8);
          }
        }
        else {
          lVar15 = ((long)puVar14 - (long)puVar8 >> 3) + 1;
          puVar14 = puVar14 + -((ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1);
        }
      }
      puVar18 = puVar14 + 1;
      *puVar14 = uVar6;
      puVar13 = (undefined8 *)param_1[2];
      puVar8 = puVar5;
      if (puVar13 != (undefined8 *)param_1[1]) {
        do {
          puVar5 = puVar8;
          puVar16 = puVar14;
          if (puVar14 == puVar8) {
            if (puVar18 < puVar17) {
              lVar15 = ((long)puVar17 - (long)puVar18 >> 3) + 1;
              lVar3 = (long)puVar18 - (long)puVar8;
              lVar4 = (long)puVar18 - (long)puVar8;
              puVar18 = puVar18 + ((ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1);
              puVar16 = (undefined8 *)((long)puVar18 - lVar3);
              if (lVar4 != 0) {
                _memmove(puVar16,puVar14,lVar4);
                puVar7 = puVar14;
              }
            }
            else {
              puVar16 = (undefined8 *)((long)puVar17 - (long)puVar8 >> 2);
              if ((long)puVar17 - (long)puVar8 == 0) {
                puVar16 = (undefined8 *)0x1;
              }
              puVar5 = puVar16;
              FUN_1096b1d70();
              puVar16 = (undefined8 *)((long)puVar5 + ((long)puVar16 * 2 + 6U & 0xfffffffffffffff8))
              ;
              lVar15 = (long)puVar18 - (long)puVar8;
              puVar18 = puVar16;
              if (lVar15 != 0) {
                puVar18 = (undefined8 *)((long)puVar16 + lVar15);
                puVar17 = puVar16;
                do {
                  *puVar17 = *puVar14;
                  lVar15 = lVar15 + -8;
                  puVar17 = puVar17 + 1;
                  puVar14 = puVar14 + 1;
                } while (lVar15 != 0);
              }
              puVar17 = puVar5 + (long)puVar7;
              if (puVar8 != (undefined8 *)0x0) {
                __ZdlPv(puVar8);
              }
            }
          }
          puVar13 = puVar13 + -1;
          puVar14 = puVar16 + -1;
          *puVar14 = *puVar13;
          puVar8 = puVar5;
        } while (puVar13 != (undefined8 *)param_1[1]);
      }
      uVar9 = *param_1;
      *param_1 = (ulong)puVar5;
      param_1[1] = (ulong)puVar14;
      param_1[2] = (ulong)puVar18;
      param_1[3] = (ulong)puVar17;
      if (uVar9 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar2 - 0x200;
    uVar6 = *puVar18;
    param_1[1] = (ulong)(puVar18 + 1);
LAB_1096b1998:
    FUN_1096b1c74(param_1,uVar6);
  }
  uVar11 = param_1[5];
  puVar18 = (undefined8 *)param_1[1];
  uVar12 = param_1[4] + uVar11;
LAB_1096b1c08:
  puVar1 = (undefined4 *)(puVar18[uVar12 >> 9] + (uVar12 & 0x1ff) * 8);
  *puVar1 = *(undefined4 *)param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  param_1[5] = uVar11 + 1;
  return;
}



/* Entry: 1096b1c74; end: 1096b1d6f;  */

void FUN_1096b1c74(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1096b1d70();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1096b1d70; end: 1096b1da3;  */

undefined1  [16] FUN_1096b1d70(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar5;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar3 = (long)param_1 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_1096b1e14;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_1096b1e14:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1096b1da4; end: 1096b1e6b;  */

long * FUN_1096b1da4(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_1096b1e14;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_1096b1e14:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096b1e6c; end: 1096b1e7b;  */

void FUN_1096b1e6c(undefined8 param_1,undefined8 *param_2)

{
  func_0x000105277f8c();
  *param_2 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1096b1e7c; end: 1096b1eaf;  */

void FUN_1096b1e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b1eb0; end: 1096b1ecf;  */

undefined8 FUN_1096b1eb0(void)

{
  return 1;
}



/* Entry: 1096b1ed0; end: 1096b22a7;  */

long * FUN_1096b1ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  lVar12 = *(long *)(param_1 + 8);
  plVar11 = *(long **)(lVar12 + 0x30);
  plVar19 = *(long **)(lVar12 + 0x38);
  if (plVar19 != (long *)0x0) {
    plVar15 = plVar19 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = *plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar12 = *(long *)(param_1 + 8);
  }
  uVar18 = *(undefined8 *)(lVar12 + 8);
  lVar12 = param_1;
  plStack_98 = plVar11;
  plStack_90 = plVar19;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_88 = lVar12;
  FUN_1093f25b0(uVar18,&lStack_88);
  if ((int)uVar18 == 0) {
    lVar12 = *(long *)(param_1 + 8);
    plVar11 = *(long **)(lVar12 + 0x48);
    if ((plVar11 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar11 == (long *)0x0)) {
      plStack_98 = (long *)0x0;
    }
    else {
      plStack_98 = *(long **)(lVar12 + 0x40);
    }
    plStack_90 = plVar11;
    if (plVar19 != (long *)0x0) {
      plVar11 = plVar19 + 1;
      do {
        lVar12 = *plVar11;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    iVar9 = (int)*(undefined8 *)(param_1 + 8) + 8;
    func_0x000105989580();
    lVar12 = *(long *)(param_1 + 8);
    piVar4 = *(int **)(lVar12 + 0x10);
    piVar5 = *(int **)(lVar12 + 0x18);
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined8 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x10) = 0;
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x28);
    lStack_b0 = 0;
    puStack_a8 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    if (iVar9 == 1) {
      FUN_1096b1800(&lStack_b0,(long)piVar5 - (long)piVar4 >> 2);
      for (piVar1 = piVar4; piVar1 != piVar5; piVar1 = piVar1 + 1) {
        uVar2 = *(long *)(lVar12 + 0x20) + (long)*piVar1;
        lVar13 = *(long *)(*(long *)(lVar12 + 8) + (uVar2 >> 4) * 8) + (uVar2 & 0xf) * 0x110 + 0xf8;
        FUN_1096b306c(&ppuStack_c0);
        if (puStack_a8 < puStack_a0) {
          puVar17 = puStack_a8 + 2;
          *puStack_a8 = &PTR_FUN_110b01d60;
          puStack_a8[1] = uStack_b8;
          *puStack_a8 = ppuStack_c0;
          uStack_b8 = 0;
        }
        else {
          lVar16 = (long)puStack_a8 - lStack_b0;
          uVar2 = (lVar16 >> 4) + 1;
          if (uVar2 >> 0x3c != 0) {
            FUN_1096b2ed8();
            goto LAB_1096b224c;
          }
          uVar14 = (long)puStack_a0 - lStack_b0 >> 3;
          if (uVar14 <= uVar2) {
            uVar14 = uVar2;
          }
          if (0x7fffffffffffffef < (ulong)((long)puStack_a0 - lStack_b0)) {
            uVar14 = 0xfffffffffffffff;
          }
          plStack_68 = &lStack_b0;
          FUN_1096b2eec();
          puVar3 = (undefined8 *)(uVar14 + lVar16);
          puVar17 = puVar3 + 2;
          *puVar3 = &PTR_FUN_110b01d60;
          puVar3[1] = uStack_b8;
          *puVar3 = ppuStack_c0;
          uStack_b8 = 0;
          lVar16 = (long)puVar3 + (lStack_b0 - (long)puStack_a8);
          FUN_1096b2f78(lStack_b0,puStack_a8,lVar16);
          lStack_78 = lStack_b0;
          puStack_70 = puStack_a0;
          lStack_88 = lStack_b0;
          lStack_80 = lStack_b0;
          lStack_b0 = lVar16;
          puStack_a8 = puVar17;
          puStack_a0 = (undefined8 *)(uVar14 + lVar13 * 0x10);
          FUN_1096b3008(&lStack_88);
        }
        ppuStack_c0 = &PTR_FUN_110b01d60;
        puStack_a8 = puVar17;
        func_0x000107c2acd4(&ppuStack_c0);
      }
    }
    else if (iVar9 == -1) {
      func_0x000105688514(&UNK_10f57ca81);
LAB_1096b224c:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1096b2250);
      (*pcVar8)();
    }
    plVar11 = plStack_98;
    lVar20 = plStack_98[1];
    lVar16 = *plStack_98;
    *plStack_98 = lStack_b0;
    plStack_98[1] = (long)puStack_a8;
    lVar12 = plStack_98[2];
    plStack_98[2] = (long)puStack_a0;
    lVar13 = *(long *)(param_1 + 8);
    plVar19 = *(long **)(lVar13 + 0x38);
    *(undefined8 *)(lVar13 + 0x30) = 0;
    *(undefined8 *)(lVar13 + 0x38) = 0;
    lStack_b0 = lVar16;
    puStack_a8 = (undefined8 *)lVar20;
    puStack_a0 = (undefined8 *)lVar12;
    if (plVar19 != (long *)0x0) {
      plVar15 = plVar19 + 1;
      do {
        lVar12 = *plVar15;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    lVar13 = *(long *)(param_1 + 8);
    lVar12 = *(long *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x40) = 0;
    *(undefined8 *)(lVar13 + 0x48) = 0;
    if (lVar12 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_1096b23e0(&lStack_b0);
    if (piVar4 != (int *)0x0) {
      __ZdlPv(piVar4);
    }
  }
  plVar19 = (long *)*plVar11;
  plVar11 = (long *)plVar11[1];
  if (plVar19 == plVar11) {
    plVar15 = (long *)0x1;
  }
  else {
    do {
      plVar15 = plVar19;
      (**(code **)(*plVar19 + 0x40))(plVar19,param_2,param_3);
      plVar19 = plVar19 + 2;
      uVar10 = 0;
      if (plVar19 != plVar11) {
        uVar10 = (uint)plVar15;
      }
    } while ((uVar10 & 1) != 0);
  }
  plVar11 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar19 = plStack_90 + 1;
    do {
      lVar12 = *plVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return plVar15;
}



/* Entry: 1096b22a8; end: 1096b23df;  */

long FUN_1096b22a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x0001096b2388(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1096b23e0; end: 1096b245b;  */

void FUN_1096b23e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -2;
      *puVar2 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1096b245c; end: 1096b24bf;  */

undefined8 * FUN_1096b245c(undefined8 *param_1)

{
  param_1[7] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  param_1[2] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_1);
  return param_1;
}



/* Entry: 1096b24c0; end: 1096b255b;  */

void FUN_1096b24c0(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110b04260;
  param_1[0x19] = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  param_1[0x14] = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  param_1[0x12] = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 1096b255c; end: 1096b25fb;  */

void FUN_1096b255c(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110b04260;
  param_1[0x19] = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  param_1[0x14] = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  param_1[0x12] = (long)&PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
  __ZNSt3__114__shared_countD2Ev(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096b25fc; end: 1096b262b;  */

void FUN_1096b25fc(long *param_1)

{
  __ZNSt3__117__assoc_sub_state4waitEv();
                    /* WARNING: Could not recover jumptable at 0x0001096b2624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 1096b262c; end: 1096b271b;  */

void FUN_1096b262c(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + 0x98);
  lStack_28 = *(long *)(param_1 + 0xa8);
  ppuStack_30 = *(undefined ***)(param_1 + 0xa0);
  if (lStack_28 != 0) {
    piVar4 = (int *)(lStack_28 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar3 = lVar3 + 8;
  FUN_1096b1220(lVar3,&ppuStack_30,param_1 + 0xb0,0,*(long *)(param_1 + 0xd0) + 0x10);
  ppuStack_30 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_30);
  uStack_34 = (undefined4)lVar3;
  FUN_1096b271c(param_1,&uStack_34);
  return;
}



/* Entry: 1096b271c; end: 1096b27b3;  */

void FUN_1096b271c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 == 0) {
      uVar1 = *param_2;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 5;
      *(undefined4 *)(param_1 + 0x8c) = uVar1;
      __ZNSt3__118condition_variable10notify_allEv(param_1 + 0x58);
      __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
      return;
    }
  }
  FUN_1094362d4(2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1096b27a0);
  (*pcVar2)();
}



/* Entry: 1096b27b4; end: 1096b282b;  */

undefined8 FUN_1096b27b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  puStack_28 = param_1;
  __ZNSt3__119__thread_local_dataEv();
  uVar2 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar1,uVar2);
  pcVar3 = (code *)param_1[1];
  if ((param_1[2] & 1) != 0) {
    pcVar3 = *(code **)(*(long *)(param_1[3] + ((long)param_1[2] >> 1)) +
                       ((ulong)pcVar3 & 0xffffffff));
  }
  (*pcVar3)();
  FUN_1096b282c(&puStack_28);
  return 0;
}



/* Entry: 1096b282c; end: 1096b286b;  */

long * FUN_1096b282c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1094a35b0(lVar1,0);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1096b286c; end: 1096b287b;  */

void FUN_1096b286c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b042a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096b287c; end: 1096b289b;  */

void FUN_1096b287c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b042a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096b289c; end: 1096b28a7;  */

ulong * FUN_1096b289c(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [8];
  
  puVar2 = (ulong *)(param_1 + 0x18);
  uVar5 = *puVar2;
  if (uVar5 != 0) {
    func_0x0001005ee0f0();
    plVar7 = (long *)*puVar2;
    if (((uVar5 & 1) == 0) && (0 < plVar7[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_48,4,uVar5);
      func_0x00010538cac0(auStack_28,auStack_48);
      __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar7,auStack_28);
      __ZNSt13exception_ptrD1Ev(auStack_28);
      __ZNSt3__112future_errorD1Ev(auStack_48);
      plVar7 = (long *)*puVar2;
    }
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
    }
  }
  return puVar2;
}



/* Entry: 1096b28a8; end: 1096b291f;  */

undefined8 * FUN_1096b28a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b042f8;
  FUN_1096b2e44(param_1 + 10);
  param_1[8] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  param_1[3] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  param_1[1] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b2920; end: 1096b2997;  */

void FUN_1096b2920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b042f8;
  FUN_1096b2e44(param_1 + 10);
  param_1[8] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  param_1[3] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  param_1[1] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b2998; end: 1096b2ab7;  */

undefined8 * FUN_1096b2998(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  *puVar4 = &PTR_FUN_110b042f8;
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar7;
  if (puVar4[2] != 0) {
    piVar5 = (int *)(puVar4[2] + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[1] = &PTR_FUN_110b04128;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar7;
  if (puVar4[4] != 0) {
    piVar5 = (int *)(puVar4[4] + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  FUN_109285684();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar4[9] = *(undefined8 *)(param_1 + 0x48);
  puVar4[8] = uVar7;
  if (puVar4[9] != 0) {
    piVar5 = (int *)(puVar4[9] + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[8] = &PTR_FUN_110b04170;
  lVar6 = *(long *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  puVar4[0xb] = *(undefined8 *)(param_1 + 0x58);
  puVar4[10] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar4;
}



/* Entry: 1096b2ab8; end: 1096b2bef;  */

void FUN_1096b2ab8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_110b042f8;
  param_2[1] = &PTR_FUN_110b01d60;
  uVar6 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar6;
  if (param_2[2] != 0) {
    piVar4 = (int *)(param_2[2] + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[3] = &PTR_FUN_110b01d60;
  param_2[1] = &PTR_FUN_110b04128;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar6;
  if (param_2[4] != 0) {
    piVar4 = (int *)(param_2[4] + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  FUN_109285684();
  param_2[8] = &PTR_FUN_110b01d60;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  param_2[9] = *(undefined8 *)(param_1 + 0x48);
  param_2[8] = uVar6;
  if (param_2[9] != 0) {
    piVar4 = (int *)(param_2[9] + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = *piVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[8] = &PTR_FUN_110b04170;
  lVar5 = *(long *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  param_2[10] = uVar6;
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
  return;
}



/* Entry: 1096b2bf0; end: 1096b2bf7;  */

void FUN_1096b2bf0(long param_1)

{
  FUN_1096b2e44(param_1 + 0x50);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *(undefined8 *)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4((undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1096b2bf8; end: 1096b2c1f;  */

void FUN_1096b2bf8(long param_1)

{
  FUN_1096b2d78(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b2c20; end: 1096b2d2f;  */

void FUN_1096b2c20(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined4 auStack_48 [2];
  undefined **ppuStack_40;
  long lStack_38;
  
  plVar6 = *(long **)(param_1 + 0x50);
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_38 = *(long *)(param_1 + 0x20);
  ppuStack_40 = *(undefined ***)(param_1 + 0x18);
  if (lStack_38 != 0) {
    piVar5 = (int *)(lStack_38 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar4 = lVar4 + 8;
  FUN_1096b1220(lVar4,&ppuStack_40,param_1 + 0x28,0,*(long *)(param_1 + 0x48) + 0x10);
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  auStack_48[0] = (undefined4)lVar4;
  if (*plVar6 != 0) {
    FUN_1096b271c(*plVar6,auStack_48);
    return;
  }
  FUN_1094362d4(3);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1096b2ccc);
  (*pcVar3)();
}



/* Entry: 1096b2d30; end: 1096b2d6b;  */

long FUN_1096b2d30(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b04358);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1096b2d6c; end: 1096b2d77;  */

undefined ** FUN_1096b2d6c(void)

{
  return &PTR_DAT_110b04358;
}



/* Entry: 1096b2d78; end: 1096b2de3;  */

void FUN_1096b2d78(undefined8 *param_1)

{
  FUN_1096b2e44(param_1 + 9);
  param_1[7] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  param_1[2] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_1);
  return;
}



/* Entry: 1096b2de4; end: 1096b2e43;  */

undefined1 * FUN_1096b2de4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_28 [8];
  
  if (param_1 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(param_1,auStack_28);
    puVar4 = auStack_28;
    __ZNSt13exception_ptrD1Ev(puVar4);
    return puVar4;
  }
  puVar4 = (undefined1 *)0x3;
  FUN_1094362d4();
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __Unwind_Resume();
  plVar6 = *(long **)(puVar4 + 8);
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
  return puVar4;
}



/* Entry: 1096b2e44; end: 1096b2e9b;  */

long FUN_1096b2e44(long param_1)

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
    }
  }
  return param_1;
}



/* Entry: 1096b2e9c; end: 1096b2eab;  */

void FUN_1096b2e9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b04378;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096b2eac; end: 1096b2ecb;  */

void FUN_1096b2eac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b04378;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096b2ecc; end: 1096b2ed7;  */

void FUN_1096b2ecc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -2;
      *puVar2 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1096b2ed8; end: 1096b2eeb;  */

undefined1  [16] FUN_1096b2ed8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar4 >> 0x3c == 0) {
    lVar5 = (long)puVar4 << 4;
    __Znwm(lVar5);
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000104c4f740();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 1096b2eec; end: 1096b2f77;  */

undefined1  [16] FUN_1096b2eec(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 >> 0x3c == 0) {
    lVar4 = param_1 << 4;
    __Znwm(lVar4);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000104c4f740();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 1096b2f78; end: 1096b3007;  */

void FUN_1096b2f78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  puVar3 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = &PTR_FUN_110b01d60;
      uVar5 = *puVar3;
      param_3[1] = puVar3[1];
      *param_3 = uVar5;
      if (param_3[1] != 0) {
        piVar4 = (int *)(param_3[1] + -8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = *piVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puVar3 = puVar3 + 2;
      param_3 = param_3 + 2;
    } while (puVar3 != param_2);
    do {
      *param_1 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(param_1);
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 1096b3008; end: 1096b306b;  */

long * FUN_1096b3008(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    *(undefined8 *)(lVar2 + -0x10) = &PTR_FUN_110b01d60;
    param_1[2] = lVar2 + -0x10;
    func_0x000107c2acd4();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096b306c; end: 1096b3103;  */

void FUN_1096b306c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b041b8,0);
  if (puVar3 != (undefined8 *)0x0 && param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (param_1[1] != 0) {
      piVar4 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



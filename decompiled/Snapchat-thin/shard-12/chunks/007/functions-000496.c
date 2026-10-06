/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096e505c; end: 1096e513f;  */

void FUN_1096e505c(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar3 = param_2;
  func_0x000109693fa4(param_2,0x11382aae0);
  lStack_28 = *(long *)(puVar3 + 2);
  if (lStack_28 == 0) {
    ppuStack_30 = &PTR_FUN_110b00af0;
    FUN_1096ae760(param_2,0x11382aad0);
    uStack_34 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_1092d1c20(param_1,&uStack_34,&ppuStack_30,1);
  }
  else {
    piVar4 = (int *)(lStack_28 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_30 = &PTR_FUN_110b00af0;
    FUN_1096e8bf4(param_1,&ppuStack_30);
  }
  ppuStack_30 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e5140; end: 1096e5223;  */

void FUN_1096e5140(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar3 = param_2;
  func_0x000109693fa4(param_2,0x11382aae8);
  lStack_28 = *(long *)(puVar3 + 2);
  if (lStack_28 == 0) {
    ppuStack_30 = &PTR_FUN_110b00af0;
    FUN_1096ae760(param_2,0x11382aad8);
    uStack_34 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_1092d1c20(param_1,&uStack_34,&ppuStack_30,1);
  }
  else {
    piVar4 = (int *)(lStack_28 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_30 = &PTR_FUN_110b00af0;
    FUN_1096e8bf4(param_1,&ppuStack_30);
  }
  ppuStack_30 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e5224; end: 1096e5237;  */

void FUN_1096e5224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x18);
  return;
}



/* Entry: 1096e5238; end: 1096e525f;  */

void FUN_1096e5238(undefined8 param_1,undefined8 param_2)

{
  FUN_1096e52fc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096e5260; end: 1096e5297;  */

void FUN_1096e5260(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x31;
  __Znam();
  lVar6 = 0x18;
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
  *(undefined1 *)(lVar3 + 0x30) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096e5298; end: 1096e52ef;  */

void FUN_1096e5298(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a348;
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



/* Entry: 1096e52f0; end: 1096e52fb;  */

void FUN_1096e52f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1096e52fc; end: 1096e532b;  */

void FUN_1096e52fc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1096c3944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 1096e532c; end: 1096e535b;  */

bool FUN_1096e532c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b0a348,0xfffffffffffffffe);
  return param_1 != 0;
}



/* Entry: 1096e535c; end: 1096e573f;  */

void FUN_1096e535c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long *plVar19;
  ulong unaff_x24;
  ulong uVar20;
  long *plVar21;
  undefined8 *puStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined1 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar18 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  lVar12 = (long)puVar2 - (long)puVar18;
  if (lVar12 != 0) {
    uVar9 = (lVar12 >> 4) * -0x3333333333333333;
    if (0x333333333333333 < uVar9) {
      FUN_1096c3d00();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1096e56ec);
      (*pcVar7)();
    }
    puVar8 = param_2;
    FUN_1096c3d14();
    *param_2 = puVar8;
    param_2[1] = puVar8;
    param_2[2] = puVar8 + uVar9 * 10;
    ppuStack_a0 = &puStack_88;
    ppuStack_98 = &puStack_80;
    uStack_90 = 0;
    puStack_a8 = param_2;
    puStack_88 = puVar8;
    do {
      *(undefined4 *)puVar8 = *puVar18;
      puVar8[1] = &PTR_FUN_110b01d60;
      uVar11 = *(undefined8 *)(puVar18 + 2);
      puVar8[2] = *(undefined8 *)(puVar18 + 4);
      puVar8[1] = uVar11;
      if (puVar8[2] != 0) {
        piVar10 = (int *)(puVar8[2] + -8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8[1] = &PTR_FUN_110afd8b8;
      uVar11 = *(undefined8 *)(puVar18 + 6);
      uVar3 = puVar18[8];
      plVar19 = puVar8 + 5;
      puVar8[6] = 0;
      *plVar19 = 0;
      *(undefined4 *)(puVar8 + 4) = uVar3;
      puVar8[3] = uVar11;
      puVar8[8] = 0;
      puVar8[7] = 0;
      *(undefined4 *)(puVar8 + 9) = puVar18[0x12];
      puStack_80 = puVar8;
      FUN_1096bd964(plVar19,*(undefined8 *)(puVar18 + 0xc));
      plVar21 = *(long **)(puVar18 + 0xe);
      if (plVar21 != (long *)0x0) {
        plVar1 = puVar8 + 7;
        do {
          uVar9 = plVar21[2];
          uVar15 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
          uVar15 = (uVar9 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
          uVar15 = (uVar15 ^ uVar15 >> 0x2f) * -0x622015f714c7d297;
          uVar20 = puVar8[6];
          if (uVar20 != 0) {
            uVar14 = uVar20 - 1;
            if ((uVar20 & uVar14) == 0) {
              unaff_x24 = uVar15 & uVar14;
            }
            else {
              unaff_x24 = uVar15;
              if (uVar20 <= uVar15) {
                uVar17 = 0;
                if (uVar20 != 0) {
                  uVar17 = uVar15 / uVar20;
                }
                unaff_x24 = uVar15 - uVar17 * uVar20;
              }
            }
            plVar16 = *(long **)(*plVar19 + unaff_x24 * 8);
            if (plVar16 != (long *)0x0) {
              do {
                while( true ) {
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_1096e554c;
                  uVar17 = plVar16[1];
                  if (uVar17 != uVar15) break;
                  if (plVar16[2] == uVar9) goto LAB_1096e5684;
                }
                if ((uVar20 & uVar14) == 0) {
                  uVar17 = uVar17 & uVar14;
                }
                else if (uVar20 <= uVar17) {
                  uVar6 = 0;
                  if (uVar20 != 0) {
                    uVar6 = uVar17 / uVar20;
                  }
                  uVar17 = uVar17 - uVar6 * uVar20;
                }
              } while (uVar17 == unaff_x24);
            }
          }
LAB_1096e554c:
          plVar16 = (long *)0x28;
          __Znwm();
          uStack_68 = 1;
          *plVar16 = 0;
          plVar16[1] = uVar15;
          lVar12 = plVar21[2];
          plVar16[3] = plVar21[3];
          plVar16[2] = lVar12;
          lVar12 = plVar21[4];
          plVar16[4] = lVar12;
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = *plVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          plStack_78 = plVar16;
          plStack_70 = plVar19;
          if ((uVar20 == 0) || (*(float *)(puVar8 + 9) * (float)uVar20 < (float)(puVar8[8] + 1))) {
            uVar9 = 1;
            if (2 < uVar20) {
              uVar9 = (ulong)((uVar20 & uVar20 - 1) != 0);
            }
            uVar9 = uVar9 | uVar20 << 1;
            uVar20 = (ulong)((float)(puVar8[8] + 1) / *(float *)(puVar8 + 9));
            if (uVar9 <= uVar20) {
              uVar9 = uVar20;
            }
            FUN_1096bd964(plVar19,uVar9);
            uVar20 = puVar8[6];
            if ((uVar20 & uVar20 - 1) == 0) {
              unaff_x24 = uVar20 - 1 & uVar15;
            }
            else {
              unaff_x24 = uVar15;
              if (uVar20 <= uVar15) {
                uVar9 = 0;
                if (uVar20 != 0) {
                  uVar9 = uVar15 / uVar20;
                }
                unaff_x24 = uVar15 - uVar9 * uVar20;
              }
            }
          }
          lVar12 = *plVar19;
          plVar13 = *(long **)(lVar12 + unaff_x24 * 8);
          if (plVar13 == (long *)0x0) {
            *plVar16 = *plVar1;
            *plVar1 = (long)plVar16;
            *(long **)(lVar12 + unaff_x24 * 8) = plVar1;
            if (*plVar16 != 0) {
              uVar9 = *(ulong *)(*plVar16 + 8);
              if ((uVar20 & uVar20 - 1) == 0) {
                uVar9 = uVar9 & uVar20 - 1;
              }
              else if (uVar20 <= uVar9) {
                uVar15 = 0;
                if (uVar20 != 0) {
                  uVar15 = uVar9 / uVar20;
                }
                uVar9 = uVar9 - uVar15 * uVar20;
              }
              plVar13 = (long *)(*plVar19 + uVar9 * 8);
              goto LAB_1096e5674;
            }
          }
          else {
            *plVar16 = *plVar13;
LAB_1096e5674:
            *plVar13 = (long)plVar16;
          }
          puVar8[8] = puVar8[8] + 1;
LAB_1096e5684:
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      puVar18 = puVar18 + 0x14;
      puVar8 = puStack_80 + 10;
    } while (puVar18 != puVar2);
    uStack_90 = 1;
    puStack_80 = puVar8;
    FUN_1096c3d58(&puStack_a8);
    param_2[1] = puVar8;
  }
  return;
}



/* Entry: 1096e5740; end: 1096e576b;  */

void FUN_1096e5740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096e576c; end: 1096e57af;  */

bool FUN_1096e576c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096e57b0; end: 1096e57d7;  */

undefined8 FUN_1096e57b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096e57d8; end: 1096e582f;  */

void FUN_1096e57d8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a348;
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



/* Entry: 1096e5830; end: 1096e5837;  */

void FUN_1096e5830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096e5838; end: 1096e5867;  */

void FUN_1096e5838(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096e5868; end: 1096e58a3;  */

void FUN_1096e5868(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096e58a4; end: 1096e5903;  */

undefined8 FUN_1096e58a4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096e5904; end: 1096e5937;  */

undefined8 FUN_1096e5904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096e5938; end: 1096e5963;  */

void FUN_1096e5938(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a348;
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



/* Entry: 1096e5964; end: 1096e5a4b;  */

void FUN_1096e5964(undefined8 *param_1,long *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4();
    param_2 = (long *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  if (*param_2 != 0) {
    FUN_1096c3944();
    __ZdlPv(*param_2);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 1096e5a4c; end: 1096e5a83;  */

void FUN_1096e5a4c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1096c3944();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1096e5a84; end: 1096e5b43;  */

undefined8 *
FUN_1096e5a84(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_3 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  uStack_34 = param_4;
  uStack_30 = param_2;
  uStack_28 = param_1;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_3 = &PTR_FUN_110b0a5e8;
  param_3[1] = puVar1;
  FUN_1096e5b44(param_3,0x11382aaf8,&uStack_28);
  FUN_1096e5b44(param_3,0x11382aaf0,&uStack_30);
  FUN_1096a75d0(param_3,0x11382ab00,&uStack_34);
  return param_3;
}



/* Entry: 1096e5b44; end: 1096e5bc3;  */

void FUN_1096e5b44(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *puVar2 = *param_3;
  return;
}



/* Entry: 1096e5bc4; end: 1096e5c93;  */

undefined8 FUN_1096e5bc4(double param_1,double *param_2,int *param_3)

{
  int iVar1;
  double *pdVar2;
  
  pdVar2 = param_2;
  func_0x0001096c1e64(param_2,0x11382aaf0);
  if (0.0 < *pdVar2) {
    pdVar2 = param_2;
    func_0x0001096c1e64(param_2,0x11382aaf8);
    if (param_1 < *pdVar2) {
      return 1;
    }
    FUN_1096e5c94(param_3,param_2);
    pdVar2 = param_2;
    func_0x0001096c1e64(param_2,0x11382aaf0);
    if (*pdVar2 <= param_1) {
      *param_3 = 0;
    }
    else {
      iVar1 = *param_3;
      *param_3 = iVar1 + 1;
      FUN_1096a7580(param_2,0x11382ab00);
      if (*(int *)param_2 <= iVar1 + 1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 1096e5c94; end: 1096e5e07;  */

/* WARNING: Removing unreachable block (ram,0x0001096e5d78) */
/* WARNING: Removing unreachable block (ram,0x0001096e5d7c) */
/* WARNING: Removing unreachable block (ram,0x0001096e5d84) */
/* WARNING: Removing unreachable block (ram,0x0001096e5d8c) */
/* WARNING: Removing unreachable block (ram,0x0001096e5d90) */

long * FUN_1096e5c94(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 8);
  lVar5 = param_1 + 0x28;
  FUN_1096bd5b4(lVar5,&uStack_28);
  if (lVar5 == 0) {
    plVar6 = (long *)0x20;
    __Znwm();
    plVar4 = plVar6 + 1;
    *plVar4 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b0a7c0;
    plStack_48 = plVar6 + 3;
    *(undefined4 *)plStack_48 = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_50 = uStack_28;
    plStack_40 = plVar6;
    plStack_38 = plStack_48;
    plStack_30 = plVar6;
    FUN_1096bd704(param_1 + 0x28,&uStack_50,&uStack_50);
    plVar6 = plStack_40;
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar4 = plStack_30;
    plVar6 = plStack_38;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x18);
  }
  return plVar6;
}



/* Entry: 1096e5e08; end: 1096e5e3b;  */

undefined8 * FUN_1096e5e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e5e3c; end: 1096e5e6f;  */

void FUN_1096e5e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e5e70; end: 1096e5e9b;  */

void FUN_1096e5e70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096e5e9c; end: 1096e5edf;  */

bool FUN_1096e5e9c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c058);
  return (int)plVar1 == 1;
}



/* Entry: 1096e5ee0; end: 1096e5ef3;  */

undefined8 FUN_1096e5ee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096e5ef4; end: 1096e5f4b;  */

void FUN_1096e5ef4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a608;
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



/* Entry: 1096e5f4c; end: 1096e5fc3;  */

void FUN_1096e5f4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
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
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b0a5e8;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e5fc4; end: 1096e5ff3;  */

bool FUN_1096e5fc4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b0a608,0);
  return param_1 != 0;
}



/* Entry: 1096e5ff4; end: 1096e601f;  */

void FUN_1096e5ff4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(4);
  return;
}



/* Entry: 1096e6020; end: 1096e6063;  */

bool FUN_1096e6020(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c051);
  return (int)plVar1 == 1;
}



/* Entry: 1096e6064; end: 1096e608f;  */

undefined8 FUN_1096e6064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096e6090; end: 1096e60e7;  */

void FUN_1096e6090(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a608;
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



/* Entry: 1096e60e8; end: 1096e60f7;  */

void FUN_1096e60e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b0a7c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096e60f8; end: 1096e6117;  */

void FUN_1096e60f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b0a7c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096e6118; end: 1096e611f;  */

void FUN_1096e6118(void)

{
  return;
}



/* Entry: 1096e6120; end: 1096e6177;  */

long FUN_1096e6120(long param_1)

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



/* Entry: 1096e6178; end: 1096e61f3;  */

undefined8 * FUN_1096e6178(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
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
  *param_1 = &PTR_FUN_110b0a810;
  param_1[1] = puVar1;
  FUN_1096e61f4(param_1);
  return param_1;
}



/* Entry: 1096e61f4; end: 1096e628f;  */

void FUN_1096e61f4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  func_0x000107c2acd0(param_1,0x80);
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  param_1[1] = &PTR_FUN_110b01d60;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  puVar3 = param_1;
  func_0x000107c2acdc();
  param_1[0xe] = &PTR_FUN_110b01d60;
  uVar5 = *puVar3;
  param_1[0xf] = puVar3[1];
  param_1[0xe] = uVar5;
  if (param_1[0xf] != 0) {
    piVar4 = (int *)(param_1[0xf] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0xe] = &PTR_FUN_110b0a5e8;
  *param_1 = &PTR_FUN_110b0aba0;
  return;
}



/* Entry: 1096e6290; end: 1096e699b;  */

void FUN_1096e6290(double *param_1,undefined **param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  double *pdVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined **ppuVar10;
  int *piVar11;
  double dVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  double dStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined ***pppuStack_c8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = (undefined **)0x113735da8;
  pdVar5 = param_1;
  func_0x0001096b50e4();
  dVar12 = pdVar5[1];
  if (dVar12 != 0.0) {
    piVar11 = (int *)((long)dVar12 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar2) {
        *piVar11 = *piVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_120 = &PTR_FUN_110b00af0;
  dStack_118 = dVar12;
  func_0x000107c2acdc();
  ppuStack_130 = &PTR_FUN_110b01d60;
  ppuStack_128 = (undefined **)0x0;
  if (dVar12 != 0.0) {
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_e0);
    func_0x000107c2accc();
    ppuVar10 = &PTR_DAT_110b00b10;
    func_0x00010969659c(&ppuStack_f0);
    ppuVar4 = ppuStack_d8;
    ppuVar13 = ppuStack_e8;
    ppuStack_f0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_f0);
    ppuStack_e0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_e0);
    if (ppuVar4 == ppuVar13) {
      ppuVar10 = &PTR_DAT_110b01d40;
      pppuVar6 = &ppuStack_120;
      ___dynamic_cast(pppuVar6,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
      if (pppuVar6 == (undefined ***)0x0) {
        func_0x000107c2acdc();
      }
      ppuStack_e0 = &PTR_FUN_110b01d60;
      ppuStack_d8 = pppuVar6[1];
      if (ppuStack_d8 != (undefined **)0x0) {
        ppuVar13 = ppuStack_d8 + -1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
          if (bVar2) {
            *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppuStack_e0 = &PTR_FUN_110b00af0;
        if (ppuStack_d8 != (undefined **)0x0) {
          ppuVar10 = param_2;
          FUN_1096b3950(&ppuStack_100,pdVar5,param_2,&ppuStack_e0);
          FUN_1093e0930(&ppuStack_f0,&ppuStack_100);
          ppuVar13 = ppuStack_e8;
          ppuStack_e8 = ppuStack_128;
          ppuStack_128 = ppuVar13;
          ppuStack_130 = ppuStack_f0;
          ppuStack_f0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_f0);
          ppuStack_100 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_100);
        }
      }
      ppuStack_e0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_e0);
      if (ppuStack_128 != (undefined **)0x0) goto LAB_1096e6550;
    }
    FUN_1093e0930(&ppuStack_e0,&ppuStack_120);
    ppuVar13 = ppuStack_d8;
    ppuStack_d8 = ppuStack_128;
    ppuStack_128 = ppuVar13;
    ppuStack_130 = ppuStack_e0;
    ppuStack_e0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_e0);
    if (ppuStack_128 == (undefined **)0x0) {
      FUN_1096a4f30(&ppuStack_e0,&ppuStack_120);
      if (ppuStack_d8 != (undefined **)0x0) {
        pppuVar6 = &ppuStack_e0;
        (*(code *)ppuStack_e0[5])(&ppuStack_f0);
        FUN_1096978cc();
        if (ppuStack_e8 == pppuVar6[1]) {
          ppuStack_f0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_f0);
        }
        else {
          (*(code *)ppuStack_e0[5])(&ppuStack_100,&ppuStack_e0);
          func_0x000107c2accc();
          ppuVar10 = &PTR_DAT_110b07378;
          func_0x00010969659c(&ppuStack_110);
          ppuStack_110 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_110);
          ppuStack_100 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_100);
          ppuStack_f0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_f0);
          if (lStack_f8 != lStack_108) goto LAB_1096e6544;
        }
        (*(code *)ppuStack_e0[4])(&ppuStack_100,&ppuStack_e0);
        FUN_1093e0930(&ppuStack_f0,&ppuStack_100);
        ppuVar13 = ppuStack_e8;
        ppuStack_e8 = ppuStack_128;
        ppuStack_128 = ppuVar13;
        ppuStack_130 = ppuStack_f0;
        ppuStack_f0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_f0);
        ppuStack_100 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_100);
      }
LAB_1096e6544:
      ppuStack_e0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_e0);
    }
  }
LAB_1096e6550:
  dVar12 = param_1[1];
  uVar16 = *(undefined8 *)((long)dVar12 + 0x10);
  *(undefined ***)((long)dVar12 + 0x10) = ppuStack_128;
  *(undefined ***)((long)dVar12 + 8) = ppuStack_130;
  ppuStack_130 = &PTR_FUN_110b01d60;
  ppuStack_128 = (undefined **)uVar16;
  func_0x000107c2acd4(&ppuStack_130);
  lVar15 = *(long *)((long)param_1[1] + 0x10);
  if (lVar15 == 0) goto LAB_1096e6840;
  pdVar5 = param_1;
  FUN_1096e699c(param_1,0x11382ab08);
  ppuVar10 = (undefined **)pdVar5[1];
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar13 = ppuVar10 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar2) {
        *(int *)ppuVar13 = *(int *)ppuVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_f0 = &PTR_FUN_110b01738;
  puVar7 = param_2[1] + -0x20;
  ppuStack_e8 = ppuVar10;
  func_0x0001096966c0(puVar7,puRam000000011382ab08);
  puVar3 = puRam000000011382ab08;
  if ((puVar7 == (undefined *)0x0) ||
     (puVar14 = *(undefined8 **)(puVar7 + 8), puVar14 == (undefined8 *)0x0)) {
    puVar7 = param_2[1];
    puVar14 = puRam000000011382ab08;
    (**(code **)*puRam000000011382ab08)();
    puVar7 = puVar7 + -0x20;
    FUN_109696718(puVar7,puVar3);
    *(undefined8 **)(puVar7 + 8) = puVar14;
    puVar14[1] = ppuStack_e8;
    *puVar14 = ppuStack_f0;
    if (puVar14[1] != 0) {
      piVar11 = (int *)(puVar14[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *puVar14 = &PTR_FUN_110b01738;
  }
  else if ((undefined **)puVar14[1] != ppuVar10) {
    func_0x000107c2acd4(puVar14);
    puVar14[1] = ppuStack_e8;
    *puVar14 = ppuStack_f0;
    if (puVar14[1] != 0) {
      piVar11 = (int *)(puVar14[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  (**(code **)(*(long *)((long)param_1[1] + 8) + 0x20))((long *)((long)param_1[1] + 8),param_2);
  FUN_1096e505c(&ppuStack_e0,param_1);
  dVar12 = param_1[1];
  lVar8 = *(long *)((long)dVar12 + 0x18);
  if (lVar8 != 0) {
    *(long *)((long)dVar12 + 0x20) = lVar8;
    __ZdlPv();
    *(long *)((long)dVar12 + 0x18) = 0;
    *(undefined8 *)((long)dVar12 + 0x20) = 0;
    *(undefined8 *)((long)dVar12 + 0x28) = 0;
  }
  *(undefined ***)((long)dVar12 + 0x20) = ppuStack_d8;
  *(undefined ***)((long)dVar12 + 0x18) = ppuStack_e0;
  *(undefined8 *)((long)dVar12 + 0x28) = uStack_d0;
  FUN_1096e5140(&ppuStack_e0,param_1);
  dVar12 = param_1[1];
  lVar8 = *(long *)((long)dVar12 + 0x30);
  if (lVar8 != 0) {
    *(long *)((long)dVar12 + 0x38) = lVar8;
    __ZdlPv();
    *(long *)((long)dVar12 + 0x30) = 0;
    *(undefined8 *)((long)dVar12 + 0x38) = 0;
    *(undefined8 *)((long)dVar12 + 0x40) = 0;
  }
  *(undefined ***)((long)dVar12 + 0x38) = ppuStack_d8;
  *(undefined ***)((long)dVar12 + 0x30) = ppuStack_e0;
  *(undefined8 *)((long)dVar12 + 0x40) = uStack_d0;
  pdVar5 = param_1;
  func_0x0001096c1e64(param_1,0x113735db8);
  *(float *)((long)param_1[1] + 0x48) = (float)*pdVar5;
  FUN_1096c6b94(param_2,0x11382aaa8);
  FUN_1096c6db4(&ppuStack_e0,param_2);
  func_0x0001096c6e18((long)param_1[1] + 0x50,&ppuStack_e0);
  if (pppuStack_c8 == &ppuStack_e0) {
    lVar8 = 0x20;
LAB_1096e6764:
    (**(code **)((long)*pppuStack_c8 + lVar8))();
  }
  else if (pppuStack_c8 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_1096e6764;
  }
  lVar8 = (long)param_1[1] + -0x20;
  ppuVar10 = ppuRam0000000113735d98;
  func_0x0001096966c0();
  if ((lVar8 == 0) || (ppuVar13 = *(undefined ***)(lVar8 + 8), ppuVar13 == (undefined **)0x0)) {
    ppuVar13 = ppuRam0000000113735d98;
    (**(code **)(*ppuRam0000000113735d98 + 0x30))();
  }
  dVar12 = param_1[1];
  if (*(undefined **)((long)dVar12 + 0x78) != ppuVar13[1]) {
    func_0x000107c2acd4((long)dVar12 + 0x70);
    puVar7 = *ppuVar13;
    *(undefined **)((long)dVar12 + 0x78) = ppuVar13[1];
    *(undefined **)((long)dVar12 + 0x70) = puVar7;
    if (*(long *)((long)dVar12 + 0x78) != 0) {
      piVar11 = (int *)(*(long *)((long)dVar12 + 0x78) + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  if (*(long *)((long)param_1[1] + 0x78) == 0) {
    pdVar5 = param_1;
    func_0x0001096c1e64(param_1,0x113735db0);
    ppuVar10 = (undefined **)0x1;
    FUN_1096e5a84(*pdVar5,*pdVar5,&ppuStack_e0);
    dVar12 = param_1[1];
    ppuVar13 = *(undefined ***)((long)dVar12 + 0x78);
    *(undefined ***)((long)dVar12 + 0x78) = ppuStack_d8;
    *(undefined ***)((long)dVar12 + 0x70) = ppuStack_e0;
    ppuStack_e0 = &PTR_FUN_110b01d60;
    ppuStack_d8 = ppuVar13;
    func_0x000107c2acd4(&ppuStack_e0);
  }
  ppuStack_f0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f0);
LAB_1096e6840:
  ppuStack_120 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_120);
  uVar9 = (ulong)(lVar15 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar10 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(&ppuStack_f0);
    FUN_109696618(&ppuStack_120);
  }
  __Unwind_Resume();
  lVar15 = *(long *)(uVar9 + 8) + -0x20;
  func_0x0001096966c0(lVar15,*ppuVar10);
  if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096e69e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*ppuVar10 + 0x30))();
  return;
}



/* Entry: 1096e699c; end: 1096e69eb;  */

void FUN_1096e699c(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096e69e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096e69ec; end: 1096e7777;  */

undefined8 FUN_1096e69ec(byte *param_1,long *param_2,double *param_3)

{
  undefined **ppuVar1;
  ulong *puVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  double **ppdVar20;
  double *pdVar21;
  undefined8 *puVar22;
  double *pdVar23;
  double *pdVar24;
  ulong uVar25;
  float fVar26;
  int *piVar27;
  long lVar28;
  double **ppdVar29;
  uint *puVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  int *piVar34;
  ulong uVar35;
  undefined4 *puVar36;
  int *piVar37;
  double *pdVar38;
  long *plVar39;
  ulong *puVar40;
  undefined8 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar50;
  ulong uVar48;
  undefined8 uVar49;
  double dVar51;
  double dVar52;
  float fVar53;
  ulong uVar54;
  float fVar55;
  float fVar56;
  ulong *puStack_178;
  double *pdStack_168;
  byte **ppbStack_160;
  int *piStack_158;
  undefined **ppuStack_150;
  long *plStack_148;
  undefined1 auStack_140 [8];
  double *pdStack_138;
  double *pdStack_130;
  double *pdStack_128;
  undefined **ppuStack_120;
  long *plStack_118;
  byte *pbStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  double *pdStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long alStack_e0 [3];
  long *plStack_c8;
  double **ppdStack_c0;
  double **ppdStack_b8;
  double **ppdStack_b0;
  double **ppdStack_a8;
  double **ppdStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_100 = param_2[1];
  if (lStack_100 != 0) {
    piVar27 = (int *)(lStack_100 + -8);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar27,0x10);
      if (bVar12) {
        *piVar27 = *piVar27 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  ppuStack_108 = &PTR_FUN_110b03dd8;
  lVar14 = param_2[1] + -0x20;
  pbStack_110 = param_1;
  pdStack_f8 = param_3;
  func_0x0001096966c0(lVar14,plRam000000011382ab10);
  if ((lVar14 == 0) || (plVar15 = *(long **)(lVar14 + 8), plVar15 == (long *)0x0)) {
    plVar15 = plRam000000011382ab10;
    (**(code **)(*plRam000000011382ab10 + 0x30))();
  }
  lStack_f0 = *plVar15;
  plVar15 = param_2;
  func_0x000109693cdc(param_2,0x11382ab18);
  uStack_e8 = (undefined1)*plVar15;
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0) {
    FUN_109697928(&pdStack_138,&UNK_10f57e677,0x4f);
    func_0x0001096b50e4(param_1,0x113735da8);
    plStack_118 = *(long **)(param_1 + 8);
    if (plStack_118 != (long *)0x0) {
      plVar15 = plStack_118 + -1;
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar12) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
    }
    ppuStack_120 = &PTR_FUN_110b00af0;
    FUN_1096e7778(&ppdStack_c0,pdStack_130);
    ppdVar20 = ppdStack_b8 + 1;
    if (*(char *)((long)ppdStack_b8 + 0x1f) < '\0') {
      ppdVar20 = (double **)*ppdVar20;
    }
    func_0x000105688514(ppdVar20);
    goto LAB_1096e7608;
  }
  pbVar16 = param_1;
  FUN_1096ae760(param_1,0x11382aa48);
  iVar6 = *(int *)pbVar16;
  plVar15 = param_2;
  FUN_1096e4e0c(param_2,0x11382aac8);
  pbVar16 = param_1;
  FUN_10969e0b4(param_1,0x113735d90);
  bVar8 = *pbVar16;
  pbVar16 = param_1;
  FUN_10969e0b4(param_1,0x113735da0);
  bVar9 = *pbVar16;
  lVar14 = *(long *)(param_1 + 8);
  if (*(long *)(lVar14 + 0x68) == 0) {
    piVar27 = (int *)*plVar15;
    piVar37 = (int *)plVar15[1];
    if (piVar27 != piVar37) {
      do {
        bVar4 = bVar9 ^ 1;
        if (piVar27[7] == 0) {
          bVar4 = 1;
        }
        if (bVar8 != 0) {
          piVar34 = *(int **)(*(long *)(param_1 + 8) + 0x18);
          piVar5 = *(int **)(*(long *)(param_1 + 8) + 0x20);
          if (piVar34 != piVar5) {
            lVar14 = *(long *)(*(long *)(piVar27 + 4) + 8);
            do {
              if (((int)((ulong)(*(long *)(*(long *)(piVar27 + 4) + 0x10) - lVar14) >> 4) <=
                   *piVar34) || (*(long *)(lVar14 + (long)*piVar34 * 0x10 + 8) == 0))
              goto LAB_1096e6ea0;
              piVar34 = piVar34 + 1;
            } while (piVar34 != piVar5);
          }
        }
        if (((iVar6 == -1 || *piVar27 == iVar6) & bVar4) == 1) {
          FUN_1096e77b4(&pbStack_110,piVar27);
        }
LAB_1096e6ea0:
        piVar27 = piVar27 + 0x14;
      } while (piVar27 != piVar37);
    }
LAB_1096e6eac:
    pdVar21 = (double *)(*(long *)(param_1 + 8) + 0x70);
    func_0x0001096c1e64(pdVar21,0x11382aaf0);
    if (0.0 < *pdVar21) {
      iVar10 = **(int **)(*(long *)(param_1 + 8) + 0x30);
      lVar14 = (long)iVar10;
      puVar43 = (undefined4 *)*plVar15;
      puVar44 = (undefined4 *)plVar15[1];
      if (puVar43 != puVar44) {
        do {
          lVar28 = *(long *)(*(long *)(puVar43 + 4) + 8);
          if ((iVar10 < (int)((ulong)(*(long *)(*(long *)(puVar43 + 4) + 0x10) - lVar28) >> 4)) &&
             (lVar28 = *(long *)(lVar28 + lVar14 * 0x10 + 8), lVar28 != 0)) {
            pdVar21 = (double *)(lVar28 + -0x20);
            func_0x0001096966c0(pdVar21,uRam0000000113735dc0);
            if (pdVar21 != (double *)0x0) {
              puVar22 = (undefined8 *)(*(long *)(*(long *)(puVar43 + 4) + 8) + lVar14 * 0x10);
              func_0x0001096c1e14(puVar22,0x113735dc0);
              pdVar21 = (double *)(*(long *)(param_1 + 8) + 0x70);
              FUN_1096e5bc4(*puVar22,pdVar21,puVar43);
              if ((int)pdVar21 != 0) {
                pdVar21 = param_3;
                FUN_1096c377c(param_3,puVar43);
                lVar28 = *(long *)(puVar43 + 4);
                pdVar24 = *(double **)(lVar28 + 8);
                pdVar38 = *(double **)(lVar28 + 0x10);
                while (pdVar38 != pdVar24) {
                  pdVar38 = pdVar38 + -2;
                  pdVar21 = pdVar38;
                  (**(code **)*pdVar38)();
                }
                *(double **)(lVar28 + 0x10) = pdVar24;
              }
            }
          }
          puVar43 = puVar43 + 0x14;
        } while (puVar43 != puVar44);
        puVar43 = (undefined4 *)*plVar15;
        puVar44 = (undefined4 *)plVar15[1];
      }
      if (puVar44 != puVar43) {
        puVar40 = (ulong *)0x0;
        puStack_178 = (ulong *)0x0;
        uVar25 = 0;
        pdVar24 = (double *)0x0;
LAB_1096e6fe4:
        pdVar38 = pdVar24;
        if ((((iVar6 == -1) || (puVar43[uVar25 * 0x14] == iVar6)) &&
            (puVar30 = puVar43 + uVar25 * 0x14, puVar30[6] != 1)) &&
           ((lVar28 = *(long *)(*(long *)(puVar30 + 4) + 8),
            iVar10 < (int)((ulong)(*(long *)(*(long *)(puVar30 + 4) + 0x10) - lVar28) >> 4) &&
            (*(long *)(lVar28 + lVar14 * 0x10 + 8) != 0)))) {
          uVar7 = *puVar30;
          if (((int)uVar7 < 0) ||
             (lVar28 = *(long *)(*(long *)(param_2[1] + 0x28) + 8),
             (int)((ulong)(*(long *)(*(long *)(param_2[1] + 0x28) + 0x10) - lVar28) >> 4) <=
             (int)uVar7)) {
            func_0x000107c2acdc();
          }
          else {
            pdVar21 = (double *)(lVar28 + (ulong)uVar7 * 0x10);
          }
          pdVar23 = pdVar21;
          (**(code **)((long)*pdVar21 + 0x20))();
          (**(code **)((long)*pdVar21 + 0x28))();
          iVar3 = (int)pdVar23;
          if ((int)pdVar23 <= (int)pdVar21) {
            iVar3 = (int)pdVar21;
          }
          lVar31 = *(long *)(*plVar15 + uVar25 * 0x50 + 0x10);
          lVar28 = *(long *)(lVar31 + 8);
          if (iVar10 < (int)((ulong)(*(long *)(lVar31 + 0x10) - lVar28) >> 4)) {
            pdVar21 = (double *)(lVar28 + lVar14 * 0x10);
          }
          else {
            func_0x000107c2acdc();
          }
          ___dynamic_cast();
          if (pdVar21 == (double *)0x0) {
            ppdStack_c0 = (double **)&UNK_10f57d0c1;
            ppdStack_b8 = (double **)&UNK_10f57d0c5;
            ppdStack_b0 = (double **)0x55;
            FUN_109699380(&ppdStack_c0);
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1096e7634);
            (*pcVar13)();
          }
          FUN_1096ba0d4(&pdStack_138);
          if (pdStack_138 == pdStack_130) {
            fVar26 = 3.4028235e+38;
            fVar55 = -3.4028235e+38;
            fVar46 = fVar26;
            fVar56 = fVar55;
          }
          else {
            fVar55 = -3.4028235e+38;
            fVar26 = 3.4028235e+38;
            pdVar21 = pdStack_138;
            fVar56 = fVar55;
            fVar46 = fVar26;
            do {
              fVar45 = *(float *)pdVar21;
              fVar50 = fVar55;
              if ((!NAN(fVar45)) && (fVar47 = *(float *)((long)pdVar21 + 4), !NAN(fVar47))) {
                fVar50 = fVar45;
                if (fVar26 <= fVar45) {
                  fVar50 = fVar26;
                }
                fVar26 = fVar50;
                fVar50 = fVar47;
                if (fVar46 <= fVar47) {
                  fVar50 = fVar46;
                }
                fVar46 = fVar50;
                if (fVar45 <= fVar56) {
                  fVar45 = fVar56;
                }
                fVar56 = fVar45;
                fVar50 = fVar47;
                if (fVar47 <= fVar55) {
                  fVar50 = fVar55;
                }
              }
              fVar55 = fVar50;
              pdVar21 = pdVar21 + 1;
            } while (pdVar21 != pdStack_130);
          }
          pdVar21 = pdStack_138;
          if (pdStack_138 != (double *)0x0) {
            pdStack_130 = pdStack_138;
            __ZdlPv();
          }
          fVar56 = fVar56 - fVar26;
          fVar55 = fVar55 - fVar46;
          fVar50 = fVar55;
          if (fVar56 <= fVar55) {
            fVar50 = fVar56;
          }
          if (*(float *)(*(long *)(param_1 + 8) + 0x48) < fVar50) {
            fVar50 = fVar55;
            if (fVar55 <= fVar56) {
              fVar50 = fVar56;
            }
            if (fVar50 < (float)iVar3 + (float)iVar3) {
              if (puVar40 < puStack_178) {
                *puVar40 = uVar25;
                *(float *)(puVar40 + 1) = fVar26;
                *(float *)((long)puVar40 + 0xc) = fVar46;
                *(float *)(puVar40 + 2) = fVar56;
                *(float *)((long)puVar40 + 0x14) = fVar55;
                puVar40 = puVar40 + 3;
                goto LAB_1096e7210;
              }
              lVar28 = (long)puVar40 - (long)pdVar24;
              uVar33 = (lVar28 >> 3) * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar33) {
                FUN_1096e7bb4();
                goto LAB_1096e7608;
              }
              lVar31 = (long)puStack_178 - (long)pdVar24 >> 3;
              uVar32 = lVar31 * 0x5555555555555556;
              if (uVar32 < uVar33 || uVar32 - uVar33 == 0) {
                uVar32 = uVar33;
              }
              if (0x555555555555554 < (ulong)(lVar31 * -0x5555555555555555)) {
                uVar32 = 0xaaaaaaaaaaaaaaa;
              }
              if (0xaaaaaaaaaaaaaaa < uVar32) {
                func_0x000104c4f740();
                goto LAB_1096e7608;
              }
              lVar31 = uVar32 * 0x18;
              __Znwm();
              puVar2 = (ulong *)(lVar31 + lVar28);
              puStack_178 = (ulong *)(lVar31 + uVar32 * 0x18);
              *puVar2 = uVar25;
              *(float *)(puVar2 + 1) = fVar26;
              *(float *)((long)puVar2 + 0xc) = fVar46;
              *(float *)(puVar2 + 2) = fVar56;
              *(float *)((long)puVar2 + 0x14) = fVar55;
              puVar40 = puVar2 + 3;
              uVar33 = SUB168(SEXT816(lVar28) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
              pdVar38 = (double *)(puVar2 + ((uVar33 >> 2) - ((long)uVar33 >> 0x3f)) * 3);
              pdVar21 = pdVar38;
              _memcpy(pdVar38,pdVar24,lVar28);
              if (pdVar24 != (double *)0x0) {
                __ZdlPv();
                pdVar21 = pdVar24;
              }
              goto LAB_1096e7210;
            }
          }
          lVar28 = *(long *)(*plVar15 + uVar25 * 0x50 + 0x10);
          pdVar24 = *(double **)(lVar28 + 8);
          pdVar23 = *(double **)(lVar28 + 0x10);
          while (pdVar23 != pdVar24) {
            pdVar23 = pdVar23 + -2;
            pdVar21 = pdVar23;
            (**(code **)*pdVar23)();
          }
          *(double **)(lVar28 + 0x10) = pdVar24;
        }
LAB_1096e7210:
        uVar25 = uVar25 + 1;
        puVar43 = (undefined4 *)*plVar15;
        puVar44 = (undefined4 *)plVar15[1];
        pdVar24 = pdVar38;
        if ((ulong)(((long)puVar44 - (long)puVar43 >> 4) * -0x3333333333333333) <= uVar25)
        goto LAB_1096e7314;
        goto LAB_1096e6fe4;
      }
      pdVar38 = (double *)0x0;
      goto joined_r0x0001096e7444;
    }
    goto LAB_1096e748c;
  }
  pdStack_130 = (double *)0x0;
  pdStack_128 = (double *)0x0;
  pdStack_138 = (double *)0x0;
  piVar27 = (int *)*plVar15;
  piVar37 = (int *)plVar15[1];
  if ((long)piVar37 - (long)piVar27 == 0) {
LAB_1096e6b90:
    pdVar24 = pdStack_138;
    pdVar21 = pdStack_130;
    if (piVar27 != piVar37) {
      do {
        bVar4 = bVar9 ^ 1;
        if (piVar27[7] == 0) {
          bVar4 = 1;
        }
        if (bVar8 != 0) {
          piVar34 = *(int **)(*(long *)(param_1 + 8) + 0x18);
          piVar5 = *(int **)(*(long *)(param_1 + 8) + 0x20);
          if (piVar34 != piVar5) {
            lVar28 = *(long *)(*(long *)(piVar27 + 4) + 8);
            do {
              if (((int)((ulong)(*(long *)(*(long *)(piVar27 + 4) + 0x10) - lVar28) >> 4) <=
                   *piVar34) || (*(long *)(lVar28 + (long)*piVar34 * 0x10 + 8) == 0))
              goto LAB_1096e6dd8;
              piVar34 = piVar34 + 1;
            } while (piVar34 != piVar5);
          }
        }
        if (((iVar6 == -1 || *piVar27 == iVar6) & bVar4) == 1) {
          plVar17 = (long *)0x20;
          __Znwm();
          plVar39 = plVar17 + 1;
          *plVar39 = 0;
          plVar17[2] = 0;
          *plVar17 = (long)&PTR_FUN_110b0ac08;
          ppuVar1 = (undefined **)(plVar17 + 3);
          __ZNSt3__17promiseIvEC1Ev(ppuVar1);
          ppbStack_160 = &pbStack_110;
          do {
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar12) {
              *plVar39 = *plVar39 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          plStack_c8 = (long *)0x0;
          plVar18 = (long *)0x28;
          piStack_158 = piVar27;
          ppuStack_150 = ppuVar1;
          plStack_148 = plVar17;
          ppuStack_120 = ppuVar1;
          plStack_118 = plVar17;
          __Znwm();
          *plVar18 = (long)&PTR_DAT_110b0ac58;
          plVar18[2] = (long)piStack_158;
          plVar18[1] = (long)ppbStack_160;
          plVar18[3] = (long)ppuVar1;
          plVar18[4] = (long)plVar17;
          ppuStack_150 = (undefined **)0x0;
          plStack_148 = (long *)0x0;
          plVar19 = *(long **)(lVar14 + 0x68);
          plStack_c8 = plVar18;
          if (plVar19 == (long *)0x0) {
            func_0x000104c501e4();
            goto LAB_1096e7608;
          }
          (**(code **)(*plVar19 + 0x30))(auStack_140,plVar19,alStack_e0);
          __ZNSt3__16futureIvED1Ev(auStack_140);
          if (plStack_c8 == alStack_e0) {
            lVar28 = 0x20;
LAB_1096e6cdc:
            (**(code **)(*plStack_c8 + lVar28))();
          }
          else if (plStack_c8 != (long *)0x0) {
            lVar28 = 0x28;
            goto LAB_1096e6cdc;
          }
          __ZNSt3__17promiseIvE10get_futureEv(&pdStack_168,ppuVar1);
          if (pdStack_130 < pdStack_128) {
            pdVar21 = pdStack_130 + 1;
            *pdStack_130 = (double)pdStack_168;
            pdStack_168 = (double *)0x0;
          }
          else {
            lVar28 = (long)pdStack_130 - (long)pdStack_138;
            uVar25 = (lVar28 >> 3) + 1;
            if (uVar25 >> 0x3d != 0) {
              FUN_109519f18();
              goto LAB_1096e7608;
            }
            uVar33 = (long)pdStack_128 - (long)pdStack_138 >> 2;
            if (uVar33 <= uVar25) {
              uVar33 = uVar25;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)pdStack_128 - (long)pdStack_138)) {
              uVar33 = 0x1fffffffffffffff;
            }
            ppdStack_a0 = &pdStack_138;
            if (uVar33 == 0) {
              ppdVar20 = (double **)0x0;
            }
            else {
              ppdVar20 = &pdStack_138;
              FUN_109519f2c();
            }
            ppdStack_b8 = (double **)((long)ppdVar20 + lVar28);
            ppdStack_a8 = ppdVar20 + uVar33;
            ppdVar29 = ppdStack_b8 + 1;
            ppdStack_c0 = ppdVar20;
            *ppdStack_b8 = pdStack_168;
            pdStack_168 = (double *)0x0;
            ppdStack_b0 = ppdVar29;
            FUN_1096e7ac4(&pdStack_138,&ppdStack_c0);
            pdVar21 = pdStack_130;
            FUN_1096e7b68(&ppdStack_c0);
          }
          pdStack_130 = pdVar21;
          __ZNSt3__16futureIvED1Ev(&pdStack_168);
          do {
            lVar28 = *plVar39;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar12) {
              *plVar39 = lVar28 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (lVar28 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
LAB_1096e6dd8:
        piVar27 = piVar27 + 0x14;
        pdVar24 = pdStack_138;
        pdVar21 = pdStack_130;
      } while (piVar27 != piVar37);
    }
    for (; pdVar24 != pdVar21; pdVar24 = pdVar24 + 1) {
      __ZNSt3__16futureIvE3getEv(pdVar24);
    }
    ppdStack_c0 = &pdStack_138;
    FUN_109519f60(&ppdStack_c0);
    goto LAB_1096e6eac;
  }
  uVar25 = ((long)piVar37 - (long)piVar27 >> 4) * -0x3333333333333333;
  if (uVar25 >> 0x3d == 0) {
    ppdStack_a0 = &pdStack_138;
    ppdVar20 = &pdStack_138;
    FUN_109519f2c();
    ppdStack_a8 = ppdVar20 + uVar25;
    ppdStack_c0 = ppdVar20;
    ppdStack_b8 = ppdVar20;
    ppdStack_b0 = ppdVar20;
    FUN_1096e7ac4(&pdStack_138,&ppdStack_c0);
    FUN_1096e7b68(&ppdStack_c0);
    piVar27 = (int *)*plVar15;
    piVar37 = (int *)plVar15[1];
    goto LAB_1096e6b90;
  }
  goto LAB_1096e75f4;
LAB_1096e73ac:
  pdVar21 = pdVar21 + 3;
  uVar35 = uVar35 - 1;
  uVar33 = uVar33 - 1;
  if (uVar33 == 0) goto code_r0x0001096e73bc;
  goto LAB_1096e7364;
code_r0x0001096e73bc:
  uVar33 = ((long)puVar40 - (long)pdVar38 >> 3) * -0x5555555555555555;
LAB_1096e7428:
  uVar25 = uVar25 + 1;
  if (uVar33 <= uVar25) goto code_r0x0001096e7434;
  goto LAB_1096e7344;
code_r0x0001096e7434:
  puVar43 = (undefined4 *)*plVar15;
  puVar44 = (undefined4 *)plVar15[1];
  goto joined_r0x0001096e7444;
LAB_1096e7314:
  if ((long)puVar40 - (long)pdVar38 != 0) {
    uVar25 = 0;
    uVar32 = ((long)puVar40 - (long)pdVar38 >> 3) * -0x5555555555555555;
    uVar33 = uVar32;
LAB_1096e7344:
    fVar26 = SUB84(pdVar38[uVar25 * 3 + 2],0);
    fVar46 = (float)((ulong)pdVar38[uVar25 * 3 + 2] >> 0x20);
    fVar56 = fVar26 * fVar46;
    if (uVar33 < 2) {
      uVar33 = 1;
    }
    pdVar21 = pdVar38 + 2;
    uVar35 = uVar25;
LAB_1096e7364:
    if (uVar35 == 0) goto LAB_1096e73ac;
    fVar55 = SUB84(*pdVar21,0);
    fVar50 = (float)((ulong)*pdVar21 >> 0x20);
    if (fVar55 * fVar50 < fVar56) goto LAB_1096e73ac;
    dVar51 = pdVar38[uVar25 * 3 + 1];
    dVar52 = pdVar21[-1];
    fVar47 = (float)((ulong)dVar51 >> 0x20);
    fVar53 = (float)((ulong)dVar52 >> 0x20);
    uVar54 = (ulong)dVar51 ^
             ((ulong)dVar51 ^ (ulong)dVar52) &
             CONCAT44(-(uint)(fVar47 < fVar53),-(uint)(SUB84(dVar51,0) < SUB84(dVar52,0)));
    fVar45 = fVar26 + SUB84(dVar51,0);
    fVar47 = fVar46 + fVar47;
    fVar55 = fVar55 + SUB84(dVar52,0);
    fVar50 = fVar50 + fVar53;
    uVar48 = CONCAT44(fVar50,fVar55);
    uVar48 = uVar48 ^ (uVar48 ^ CONCAT44(fVar47,fVar45)) &
                      ~CONCAT44(-(uint)(fVar50 < fVar47),-(uint)(fVar55 < fVar45));
    uVar49 = NEON_fmaxnm(CONCAT44((float)(uVar48 >> 0x20) - (float)(uVar54 >> 0x20),
                                  (float)uVar48 - (float)uVar54),0,4);
    if ((float)uVar49 * (float)((ulong)uVar49 >> 0x20) <= fVar56 * 0.8) goto LAB_1096e73ac;
    pdVar38[uVar25 * 3 + 1] = 0.0;
    pdVar38[uVar25 * 3 + 2] = 0.0;
    lVar14 = *(long *)(*plVar15 + (long)pdVar38[uVar25 * 3] * 0x50 + 0x10);
    puVar22 = *(undefined8 **)(lVar14 + 8);
    puVar41 = *(undefined8 **)(lVar14 + 0x10);
    while (puVar41 != puVar22) {
      puVar41 = puVar41 + -2;
      (**(code **)*puVar41)(puVar41);
    }
    *(undefined8 **)(lVar14 + 0x10) = puVar22;
    uVar33 = uVar32;
    goto LAB_1096e7428;
  }
joined_r0x0001096e7444:
  for (; puVar42 = puVar44, puVar43 != puVar44; puVar43 = puVar43 + 0x14) {
    if ((*(long *)(*(long *)(puVar43 + 4) + 0x10) - *(long *)(*(long *)(puVar43 + 4) + 8) &
        0xffffffff0U) == 0) {
      puVar42 = puVar43;
      if ((puVar43 != puVar44) && (puVar36 = puVar43 + 0x14, puVar36 != puVar44)) {
        do {
          if ((*(long *)(*(long *)(puVar36 + 4) + 0x10) - *(long *)(*(long *)(puVar36 + 4) + 8) &
              0xffffffff0U) != 0) {
            *puVar43 = *puVar36;
            ppdStack_b8 = *(double ***)(puVar36 + 4);
            ppdStack_c0 = *(double ***)(puVar36 + 2);
            uVar49 = *(undefined8 *)(puVar43 + 2);
            *(undefined8 *)(puVar36 + 4) = *(undefined8 *)(puVar43 + 4);
            *(undefined8 *)(puVar36 + 2) = uVar49;
            *(double ***)(puVar43 + 4) = ppdStack_b8;
            *(double ***)(puVar43 + 2) = ppdStack_c0;
            uVar49 = *(undefined8 *)(puVar36 + 6);
            puVar43[8] = puVar36[8];
            *(undefined8 *)(puVar43 + 6) = uVar49;
            FUN_1096c3a6c(puVar43 + 10,puVar36 + 10);
            puVar43 = puVar43 + 0x14;
          }
          puVar36 = puVar36 + 0x14;
        } while (puVar36 != puVar44);
        puVar44 = (undefined4 *)plVar15[1];
        puVar42 = puVar43;
      }
      break;
    }
  }
  FUN_1096c38f0(plVar15,puVar42,puVar44);
  if (pdVar38 != (double *)0x0) {
    __ZdlPv(pdVar38);
  }
LAB_1096e748c:
  ppuStack_108 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_108);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return 1;
  }
  ___stack_chk_fail();
LAB_1096e75f4:
  FUN_109519f18();
LAB_1096e7608:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1096e760c);
  (*pcVar13)();
}



/* Entry: 1096e7778; end: 1096e77b3;  */

void FUN_1096e7778(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = (long)*(char *)(param_2 + 0x1f);
  if (lVar1 < 0) {
    lVar3 = *(long *)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
  }
  else {
    lVar3 = param_2 + 8;
  }
  lVar2 = (long)*(char *)(param_3 + 0x1f);
  if (lVar2 < 0) {
    lVar4 = *(long *)(param_3 + 8);
    lVar2 = *(long *)(param_3 + 0x10);
  }
  else {
    lVar4 = param_3 + 8;
  }
  FUN_109697928(param_1,lVar3,lVar1);
  FUN_109697b14(param_1,lVar4,lVar2);
  return;
}



/* Entry: 1096e77b4; end: 1096e79db;  */

void FUN_1096e77b4(long *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined ***pppuStack_98;
  long lStack_90;
  undefined1 uStack_88;
  uint *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_48;
  
  pppuVar4 = &ppuStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *param_1;
  uVar2 = *param_2;
  if (((int)uVar2 < 0) ||
     (lVar8 = *(long *)(*(long *)(param_1[2] + 0x28) + 8),
     (int)((ulong)(*(long *)(*(long *)(param_1[2] + 0x28) + 0x10) - lVar8) >> 4) <= (int)uVar2)) {
    plVar7 = param_1;
    func_0x000107c2acdc();
  }
  else {
    plVar7 = (long *)(lVar8 + (ulong)uVar2 * 0x10);
  }
  pppuVar3 = &ppuStack_70;
  func_0x000107c2acec();
  ppuStack_70 = &PTR_FUN_110afd8b8;
  piVar1 = *(int **)(*(long *)(lVar11 + 8) + 0x20);
  for (piVar13 = *(int **)(*(long *)(lVar11 + 8) + 0x18); piVar13 != piVar1; piVar13 = piVar13 + 1)
  {
    lVar8 = *(long *)(*(long *)(param_2 + 4) + 8);
    if (*piVar13 < (int)((ulong)(*(long *)(*(long *)(param_2 + 4) + 0x10) - lVar8) >> 4)) {
      pppuVar6 = (undefined ***)(lVar8 + (long)*piVar13 * 0x10);
    }
    else {
      func_0x000107c2acdc();
      pppuVar6 = pppuVar3;
    }
    pppuVar3 = (undefined ***)(lStack_68 + 8);
    FUN_1096985c0(pppuVar3,pppuVar6);
  }
  ppuStack_78 = (undefined **)0x7ff8000000000000;
  puStack_80 = param_2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_90 = param_1[4];
  uStack_88 = (undefined1)param_1[5];
  pppuVar6 = &ppuStack_70;
  pppuStack_98 = pppuVar3;
  (**(code **)(*(long *)(*(long *)(lVar11 + 8) + 8) + 0x28))(&ppuStack_b0);
  lVar8 = lStack_a8;
  lStack_a8 = lStack_68;
  lStack_68 = lVar8;
  ppuStack_70 = ppuStack_b0;
  ppuStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_b0);
  if (!NAN((double)ppuStack_78)) {
    ppuStack_b0 = ppuStack_78;
    plVar7 = (long *)0x113735dc0;
    FUN_1096c1eb4(*(undefined8 *)(lStack_68 + 8));
    pppuVar6 = pppuVar4;
  }
  lVar8 = *(long *)(lStack_68 + 8);
  if (0xffffffff < (*(long *)(lStack_68 + 0x10) - lVar8) * 0x10000000) {
    lVar9 = 0;
    lVar14 = 0;
    do {
      plVar7 = (long *)(ulong)*(uint *)(*(long *)(*(long *)(lVar11 + 8) + 0x30) + lVar14 * 4);
      pppuVar6 = (undefined ***)(lVar8 + lVar9);
      FUN_1096e4d6c(param_2);
      lVar14 = lVar14 + 1;
      lVar8 = *(long *)(lStack_68 + 8);
      lVar9 = lVar9 + 0x10;
    } while (lVar14 < (int)((ulong)(*(long *)(lStack_68 + 0x10) - lVar8) >> 4));
  }
  ppuStack_70 = &PTR_FUN_110b01d60;
  pppuVar4 = &ppuStack_70;
  func_0x000107c2acd4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((int)plVar7 != 0) {
      func_0x000104bd46a0();
      FUN_109696618(&ppuStack_70);
    }
    __Unwind_Resume();
    ppuVar5 = pppuVar4[1] + -4;
    func_0x0001096966c0(ppuVar5,*plVar7);
    if ((ppuVar5 == (undefined **)0x0) ||
       (puVar12 = (undefined8 *)ppuVar5[1], puVar12 == (undefined8 *)0x0)) {
      puVar10 = (undefined8 *)*plVar7;
      ppuVar5 = pppuVar4[1] + -4;
      puVar12 = puVar10;
      (**(code **)*puVar10)();
      FUN_109696718(ppuVar5,puVar10);
      ppuVar5[1] = (undefined *)puVar12;
    }
    *puVar12 = *pppuVar6;
    return;
  }
  return;
}



/* Entry: 1096e79dc; end: 1096e7a5b;  */

void FUN_1096e79dc(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  *puVar2 = *param_3;
  return;
}



/* Entry: 1096e7a5c; end: 1096e7a8f;  */

undefined8 * FUN_1096e7a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e7a90; end: 1096e7ac3;  */

void FUN_1096e7a90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e7ac4; end: 1096e7b67;  */

void FUN_1096e7ac4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puVar4 = puVar3;
  puVar7 = puVar1;
  if (puVar2 != puVar3) {
    do {
      *puVar7 = *puVar4;
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar5;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar2);
    do {
      __ZNSt3__16futureIvED1Ev();
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
    puVar3 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar3;
  param_2[1] = puVar3;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1096e7b68; end: 1096e7bb3;  */

long * FUN_1096e7b68(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    __ZNSt3__16futureIvED1Ev();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096e7bb4; end: 1096e7bc7;  */

void FUN_1096e7bb4(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096e7bc8; end: 1096e7bcf;  */

void FUN_1096e7bc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096e7bd0; end: 1096e7c07;  */

void FUN_1096e7bd0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096e7c08; end: 1096e7c4b;  */

void FUN_1096e7c08(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096e7c4c; end: 1096e7c77;  */

void FUN_1096e7c4c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a858;
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



/* Entry: 1096e7c78; end: 1096e7d5f;  */

void FUN_1096e7c78(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b01758;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acc4("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b01758;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4();
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
  pcStack_58 = FUN_1096e7d60;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1096e6178(&ppuStack_80);
  extraout_x8[1] = uStack_78;
  *extraout_x8 = ppuStack_80;
  ppuStack_80 = &PTR_FUN_110b01d60;
  uStack_78 = 0;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 1096e7d60; end: 1096e7dab;  */

void FUN_1096e7d60(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096e6178(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096e7dac; end: 1096e7ddb;  */

bool FUN_1096e7dac(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b0a858,0);
  return param_1 != 0;
}



/* Entry: 1096e7ddc; end: 1096e7e63;  */

void FUN_1096e7ddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096e7e64; end: 1096e7ebb;  */

void FUN_1096e7e64(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a858;
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



/* Entry: 1096e7ebc; end: 1096e7ec3;  */

void FUN_1096e7ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096e7ec4; end: 1096e7ef3;  */

void FUN_1096e7ec4(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096e7ef4; end: 1096e7f4f;  */

void FUN_1096e7ef4(undefined8 param_1,undefined8 param_2,byte *param_3)

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



/* Entry: 1096e7f50; end: 1096e7f7b;  */

void FUN_1096e7f50(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a858;
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



/* Entry: 1096e7f7c; end: 1096e80b7;  */

void FUN_1096e7f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar4 = 0x10b0a608;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == param_2[1]) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_DAT_110b0aad8;
    uStack_58 = 0;
    puVar1 = (undefined1 *)0x1;
    _malloc();
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puStack_48 = puVar1;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar4 = 0x10b0a608;
    func_0x00010969659c(&ppuStack_60);
    uVar5 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar5;
    func_0x000107c2acd4();
    param_2 = pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume();
  puVar3 = (undefined8 *)0x28;
  _malloc();
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 3) = 1;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3 = puVar3 + 4;
    *puVar3 = &PTR_DAT_110b00de0;
  }
  *param_2 = &PTR_FUN_110b0a5e8;
  param_2[1] = puVar3;
  return;
}



/* Entry: 1096e80b8; end: 1096e8107;  */

void FUN_1096e80b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
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
  *param_1 = &PTR_FUN_110b0a5e8;
  param_1[1] = puVar1;
  return;
}



/* Entry: 1096e8108; end: 1096e8163;  */

void FUN_1096e8108(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_110b01d60;
  uVar4 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar4;
  if (param_2[1] != 0) {
    piVar3 = (int *)(param_2[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_2 = &PTR_FUN_110b0a5e8;
  return;
}



/* Entry: 1096e8164; end: 1096e81ab;  */

void FUN_1096e8164(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

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



/* Entry: 1096e81ac; end: 1096e821b;  */

undefined8 * FUN_1096e81ac(undefined8 *param_1)

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



/* Entry: 1096e821c; end: 1096e8273;  */

void FUN_1096e821c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a608;
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



/* Entry: 1096e8274; end: 1096e8303;  */

long FUN_1096e8274(long param_1)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)(param_1 + 0x50)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1096e82c0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1096e82c0:
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096e8304; end: 1096e8393;  */

void FUN_1096e8304(long param_1)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)(param_1 + 0x50)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1096e8350;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1096e8350:
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 8) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e8394; end: 1096e83a3;  */

void FUN_1096e8394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b0ac08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096e83a4; end: 1096e83c3;  */

void FUN_1096e83a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b0ac08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096e83c4; end: 1096e83cf;  */

void FUN_1096e83c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_1103468b8)(param_1 + 0x18);
  return;
}



/* Entry: 1096e83d0; end: 1096e84e3;  */

long FUN_1096e83d0(long param_1)

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



/* Entry: 1096e84e4; end: 1096e8527;  */

void FUN_1096e84e4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_110b0ac58;
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  lVar4 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
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



/* Entry: 1096e8528; end: 1096e854f;  */

void FUN_1096e8528(long param_1)

{
  FUN_1096e83d0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096e8550; end: 1096e85cf;  */

void FUN_1096e8550(long param_1)

{
  FUN_1096e77b4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1096e85d0; end: 1096e860b;  */

long FUN_1096e85d0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b0acb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1096e860c; end: 1096e862b;  */

undefined ** FUN_1096e860c(void)

{
  return &PTR_DAT_110b0acb8;
}



/* Entry: 1096e862c; end: 1096e865b;  */

void FUN_1096e862c(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096e865c; end: 1096e8697;  */

void FUN_1096e865c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096e8698; end: 1096e86f7;  */

undefined8 FUN_1096e8698(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096e86f8; end: 1096e8723;  */

undefined8 FUN_1096e86f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096e8724; end: 1096e874f;  */

void FUN_1096e8724(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a858;
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



/* Entry: 1096e8750; end: 1096e8837;  */

void FUN_1096e8750(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4(&ppuStack_50);
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096e8838; end: 1096e8857;  */

void FUN_1096e8838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096e8858; end: 1096e889b;  */

bool FUN_1096e8858(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
  if (*(char *)(*(long *)(param_2 + 8) + 0x1f) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  _sscanf(plVar1,&UNK_10f57c058);
  return (int)plVar1 == 1;
}



/* Entry: 1096e889c; end: 1096e88d3;  */

undefined8 FUN_1096e889c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096e88d4; end: 1096e892b;  */

void FUN_1096e88d4(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a858;
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



/* Entry: 1096e892c; end: 1096e8997;  */

void FUN_1096e892c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(8);
  return;
}



/* Entry: 1096e8998; end: 1096e89ef;  */

void FUN_1096e8998(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b0a858;
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



/* Entry: 1096e89f0; end: 1096e8a03;  */

void FUN_1096e89f0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1096e8a04; end: 1096e8bf3;  */

/* WARNING: Removing unreachable block (ram,0x0001096e8b88) */

void FUN_1096e8a04(undefined8 *param_1,long param_2)

{
  undefined ***pppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_164 [4];
  undefined **appuStack_160 [2];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  byte ******ppppppbStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  lVar4 = *(long *)(param_2 + 8);
  lVar3 = (long)*(char *)(lVar4 + 0x1f);
  if (lVar3 < 0) {
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_1096e8b94;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = *(long *)(lVar4 + 8);
    lVar3 = *(long *)(lVar4 + 0x10);
  }
  else {
    if (*(char *)(lVar4 + 0x1f) == '\0') {
LAB_1096e8b94:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    lVar2 = lVar4 + 8;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  FUN_1092b29f8(&ppppppbStack_48,lVar2,lVar2 + (int)lVar3,(long)(int)lVar3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppppppbStack_48 = (byte ******)&ppppppbStack_48;
  }
  for (; uStack_40 != 0; uStack_40 = uStack_40 - 1) {
    if (*(byte *)ppppppbStack_48 - 0x28 < 0x36 &&
        (1L << ((ulong)(*(byte *)ppppppbStack_48 - 0x28) & 0x3f) & 0x28000000000013U) != 0) {
      *(byte *)ppppppbStack_48 = 0x20;
    }
    ppppppbStack_48 = (byte ******)((long)ppppppbStack_48 + 1);
  }
  FUN_10945ac64(appuStack_160,&ppppppbStack_48,0x18);
  while( true ) {
    pppuVar1 = appuStack_160;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERf(pppuVar1,auStack_164);
    if ((*(byte *)((long)pppuVar1 + (long)((*pppuVar1)[-3] + 0x20)) & 5) != 0) break;
    FUN_1092c9a40(param_1,auStack_164);
  }
  appuStack_e0[0] = &PTR_DAT_1108a5a88;
  appuStack_160[0] = &PTR_SUB_1108a5a38;
  ppuStack_150 = &PTR_DAT_1108a5a60;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_160,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 1096e8bf4; end: 1096e8de3;  */

/* WARNING: Removing unreachable block (ram,0x0001096e8d78) */

void FUN_1096e8bf4(undefined8 *param_1,long param_2)

{
  undefined ***pppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_164 [4];
  undefined **appuStack_160 [2];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  byte ******ppppppbStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  lVar4 = *(long *)(param_2 + 8);
  lVar3 = (long)*(char *)(lVar4 + 0x1f);
  if (lVar3 < 0) {
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_1096e8d84;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar2 = *(long *)(lVar4 + 8);
    lVar3 = *(long *)(lVar4 + 0x10);
  }
  else {
    if (*(char *)(lVar4 + 0x1f) == '\0') {
LAB_1096e8d84:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    lVar2 = lVar4 + 8;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  FUN_1092b29f8(&ppppppbStack_48,lVar2,lVar2 + (int)lVar3,(long)(int)lVar3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppppppbStack_48 = (byte ******)&ppppppbStack_48;
  }
  for (; uStack_40 != 0; uStack_40 = uStack_40 - 1) {
    if (*(byte *)ppppppbStack_48 - 0x28 < 0x36 &&
        (1L << ((ulong)(*(byte *)ppppppbStack_48 - 0x28) & 0x3f) & 0x28000000000013U) != 0) {
      *(byte *)ppppppbStack_48 = 0x20;
    }
    ppppppbStack_48 = (byte ******)((long)ppppppbStack_48 + 1);
  }
  FUN_10945ac64(appuStack_160,&ppppppbStack_48,0x18);
  while( true ) {
    pppuVar1 = appuStack_160;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(pppuVar1,auStack_164);
    if ((*(byte *)((long)pppuVar1 + (long)((*pppuVar1)[-3] + 0x20)) & 5) != 0) break;
    FUN_10923b3a0(param_1,auStack_164);
  }
  appuStack_e0[0] = &PTR_DAT_1108a5a88;
  appuStack_160[0] = &PTR_SUB_1108a5a38;
  ppuStack_150 = &PTR_DAT_1108a5a60;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_160,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



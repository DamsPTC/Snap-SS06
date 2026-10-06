/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094fe6b0; end: 1094fe6b7;  */

void FUN_1094fe6b0(void)

{
  return;
}



/* Entry: 1094fe6b8; end: 1094fe6eb;  */

void FUN_1094fe6b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110af9530;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1094fe6ec; end: 1094fe70f;  */

void FUN_1094fe6ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110af9530;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1094fe710; end: 1094fe74b;  */

long FUN_1094fe710(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af95b0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094fe74c; end: 1094fe757;  */

undefined ** FUN_1094fe74c(void)

{
  return &PTR_DAT_110af95b0;
}



/* Entry: 1094fe758; end: 1094fe8c3;  */

void FUN_1094fe758(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  puVar2 = (undefined8 *)0x10;
  __Znwm();
  *puVar2 = &PTR_FUN_110af9490;
  puVar2[1] = 0;
  *extraout_x8 = puVar2;
  return;
}



/* Entry: 1094fe8c4; end: 1094fe8f7;  */

void FUN_1094fe8c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110af9490;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1094fe8f8; end: 1094fe8ff;  */

void FUN_1094fe8f8(void)

{
  return;
}



/* Entry: 1094fe900; end: 1094fe933;  */

void FUN_1094fe900(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110af95e0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1094fe934; end: 1094fe957;  */

void FUN_1094fe934(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110af95e0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1094fe958; end: 1094fe993;  */

long FUN_1094fe958(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af9650);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094fe994; end: 1094fe99f;  */

undefined ** FUN_1094fe994(void)

{
  return &PTR_DAT_110af9650;
}



/* Entry: 1094fe9a0; end: 1094fe9d3;  */

void FUN_1094fe9a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110af94e8;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1094fe9d4; end: 1094fe9db;  */

void FUN_1094fe9d4(void)

{
  return;
}



/* Entry: 1094fe9dc; end: 1094fea0f;  */

void FUN_1094fe9dc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110af9680;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1094fea10; end: 1094fea33;  */

void FUN_1094fea10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110af9680;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1094fea34; end: 1094fea6f;  */

long FUN_1094fea34(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af96f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094fea70; end: 1094fea7b;  */

undefined ** FUN_1094fea70(void)

{
  return &PTR_DAT_110af96f0;
}



/* Entry: 1094fea7c; end: 1094fee97;  */

void FUN_1094fea7c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 ****ppppuStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 *puStack_88;
  char cStack_79;
  undefined8 ****appppuStack_78 [2];
  char cStack_61;
  
  plVar5 = param_1;
  FUN_1094fe0dc();
  lVar18 = param_1[1];
  lVar6 = param_1[2];
  while (lVar6 != lVar18) {
    lVar6 = lVar6 + -0x10;
    FUN_1094ff0f4();
  }
  param_1[2] = lVar18;
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)param_2[1];
  do {
    if (puVar2 == puVar3) {
      return;
    }
    uVar16 = *puVar2;
    func_0x000107c31940(&plStack_90,&DAT_10f6389e8);
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    FUN_1094a6b30(appppuStack_78,uVar16,&plStack_90,&uStack_a8);
    if (lStack_98 < 0) {
      __ZdlPv(uStack_a8);
    }
    if (cStack_79 < '\0') {
      __ZdlPv(plStack_90);
    }
    plVar7 = plVar5;
    func_0x000107c31944(plVar5,appppuStack_78);
    plVar17 = (long *)plVar5[1];
    if (plVar17 != (long *)0x0) {
      uVar19 = (long)plVar17 - 1;
      if (((ulong)plVar17 & uVar19) == 0) {
        plVar14 = (long *)(uVar19 & (ulong)plVar7);
      }
      else {
        plVar14 = plVar7;
        if (plVar17 <= plVar7) {
          uVar13 = 0;
          if (plVar17 != (long *)0x0) {
            uVar13 = (ulong)plVar7 / (ulong)plVar17;
          }
          plVar14 = (long *)((long)plVar7 - uVar13 * (long)plVar17);
        }
      }
      plVar10 = *(long **)(*plVar5 + (long)plVar14 * 8);
      if (plVar10 != (long *)0x0) {
        for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          plVar11 = (long *)plVar10[1];
          if (plVar7 == plVar11) {
            plVar11 = plVar5;
            func_0x000104c4fbc4(plVar5,plVar10 + 2,appppuStack_78);
            if (((ulong)plVar11 & 1) != 0) {
              if ((long *)plVar10[8] == (long *)0x0) {
                func_0x000104c501e4();
                goto LAB_1094fedf4;
              }
              (**(code **)(*(long *)plVar10[8] + 0x30))(&plStack_b0);
              if (plStack_b0 == (long *)0x0) goto LAB_1094febe0;
              plVar17 = plStack_b0;
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0,puVar2);
              plVar7 = plStack_b0;
              if ((int)plVar17 == 0) {
                ppppuStack_b8 = appppuStack_78[0];
                if (-1 < cStack_61) {
                  ppppuStack_b8 = appppuStack_78;
                }
                FUN_1093780e0(&plStack_90,&UNK_10f57121f,&ppppuStack_b8);
                FUN_109388c6c(1,&UNK_10f571180,&DAT_10f323079,0x16,&plStack_90);
                goto LAB_1094fec0c;
              }
              plStack_90 = plStack_b0;
              if (plStack_b0 == (long *)0x0) {
                puVar8 = (undefined8 *)0x0;
              }
              else {
                puVar8 = (undefined8 *)0x20;
                __Znwm();
                *puVar8 = &PTR_FUN_110af9760;
                puVar8[1] = 0;
                puVar8[2] = 0;
                puVar8[3] = plVar7;
              }
              plStack_b0 = (long *)0x0;
              puVar15 = (undefined8 *)param_1[2];
              puStack_88 = puVar8;
              if (puVar15 < (undefined8 *)param_1[3]) {
                *puVar15 = plVar7;
                puVar15[1] = puVar8;
                puVar15 = puVar15 + 2;
              }
              else {
                lVar6 = param_1[1];
                lVar18 = (long)puVar15 - lVar6;
                uVar19 = (lVar18 >> 4) + 1;
                if (uVar19 >> 0x3c != 0) {
                  FUN_1094ff070();
LAB_1094fedf4:
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1094fedf8);
                  (*pcVar4)();
                }
                uVar12 = param_1[3] - lVar6;
                uVar13 = (long)uVar12 >> 3;
                if (uVar13 <= uVar19) {
                  uVar13 = uVar19;
                }
                if (0x7fffffffffffffef < uVar12) {
                  uVar13 = 0xfffffffffffffff;
                }
                if (uVar13 >> 0x3c != 0) {
                  func_0x000104c4f740();
                  goto LAB_1094fedf4;
                }
                lVar9 = uVar13 << 4;
                __Znwm();
                puVar1 = (undefined8 *)(lVar9 + lVar18);
                *puVar1 = plVar7;
                puVar1[1] = puVar8;
                puVar15 = puVar1 + 2;
                _memcpy(puVar1 + (lVar18 >> 4) * -2,lVar6,lVar18);
                param_1[1] = (long)(puVar1 + (lVar18 >> 4) * -2);
                param_1[2] = (long)puVar15;
                param_1[3] = lVar9 + uVar13 * 0x10;
                if (lVar6 != 0) {
                  __ZdlPv(lVar6);
                }
              }
              param_1[2] = (long)puVar15;
              goto LAB_1094fec1c;
            }
          }
          else {
            if (((ulong)plVar17 & uVar19) == 0) {
              plVar11 = (long *)((ulong)plVar11 & uVar19);
            }
            else if (plVar17 <= plVar11) {
              uVar13 = 0;
              if (plVar17 != (long *)0x0) {
                uVar13 = (ulong)plVar11 / (ulong)plVar17;
              }
              plVar11 = (long *)((long)plVar11 - uVar13 * (long)plVar17);
            }
            if (plVar11 != plVar14) break;
          }
        }
      }
    }
    plStack_b0 = (long *)0x0;
LAB_1094febe0:
    FUN_10937e740(&plStack_90,&UNK_10f571263);
    FUN_109388c6c(1,&UNK_10f571180,&DAT_10f323079,0x19,&plStack_90);
LAB_1094fec0c:
    if (cStack_79 < '\0') {
      __ZdlPv(plStack_90);
    }
LAB_1094fec1c:
    plVar7 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (cStack_61 < '\0') {
      __ZdlPv(appppuStack_78[0]);
    }
    puVar2 = puVar2 + 2;
  } while( true );
}



/* Entry: 1094fee98; end: 1094fefe3;  */

undefined8 * FUN_1094fee98(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar7 = (undefined8 *)param_2[1];
  puVar4 = (undefined8 *)*param_2;
  puVar9 = puVar4;
  for (; puVar4 != puVar7; puVar4 = puVar4 + 0x10) {
    puVar1 = *(ulong **)(param_1 + 0x10);
    puVar8 = *(ulong **)(param_1 + 8);
    while (puVar8 != puVar1) {
      plVar3 = (long *)*puVar8;
      (**(code **)(*plVar3 + 0x18))(plVar3,puVar4);
      puVar8 = puVar8 + 2;
      if (((ulong)plVar3 & 1) != 0) {
        puVar9 = puVar4;
        if ((puVar4 == puVar7) || (puVar2 = puVar4 + 0x10, puVar4 + 0x10 == puVar7))
        goto LAB_1094fefc0;
        goto LAB_1094fef18;
      }
    }
    puVar9 = puVar7;
  }
  goto LAB_1094fefc0;
LAB_1094fef18:
  do {
    puVar5 = puVar2;
    puVar1 = *(ulong **)(param_1 + 0x10);
    puVar8 = *(ulong **)(param_1 + 8);
    do {
      if (puVar8 == puVar1) {
        uVar6 = *puVar5;
        puVar9[1] = puVar5[1];
        *puVar9 = uVar6;
        if (*(char *)((long)puVar9 + 0x27) < '\0') {
          __ZdlPv(puVar9[2]);
        }
        uVar10 = puVar4[0x13];
        uVar6 = puVar4[0x12];
        puVar9[4] = puVar4[0x14];
        puVar9[3] = uVar10;
        puVar9[2] = uVar6;
        *(undefined1 *)((long)puVar4 + 0xa7) = 0;
        *(undefined1 *)(puVar4 + 0x12) = 0;
        uVar6 = puVar4[0x15];
        *(undefined1 *)(puVar9 + 6) = *(undefined1 *)(puVar4 + 0x16);
        puVar9[5] = uVar6;
        func_0x0001094dc088(puVar9 + 7,puVar4 + 0x17);
        *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar4 + 0x1c);
        FUN_10939f678(puVar9 + 0xd,puVar4 + 0x1d);
        puVar9 = puVar9 + 0x10;
        break;
      }
      plVar3 = (long *)*puVar8;
      (**(code **)(*plVar3 + 0x18))(plVar3,puVar5);
      puVar8 = puVar8 + 2;
    } while (((ulong)plVar3 & 1) == 0);
    puVar2 = puVar5 + 0x10;
    puVar4 = puVar5;
  } while (puVar5 + 0x10 != puVar7);
LAB_1094fefc0:
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != puVar9) {
    FUN_1094dc17c(&stack0xffffffffffffffcf,puVar4,param_2[1],puVar9);
    puVar7 = (undefined8 *)param_2[1];
    while (puVar7 != puVar4) {
      puVar7 = puVar7 + -0x10;
      func_0x0001094d8080(puVar7);
    }
    param_2[1] = (long)puVar4;
  }
  return puVar9;
}



/* Entry: 1094fefe4; end: 1094ff06f;  */

undefined8 * FUN_1094fefe4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_110af9720;
  FUN_1094ff084(&puStack_28);
  return param_1;
}



/* Entry: 1094ff070; end: 1094ff083;  */

void FUN_1094ff070(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_1094ff0f4();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 1094ff084; end: 1094ff0f3;  */

void FUN_1094ff084(long *param_1)

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
        FUN_1094ff0f4();
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



/* Entry: 1094ff0f4; end: 1094ff14b;  */

long FUN_1094ff0f4(long param_1)

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



/* Entry: 1094ff14c; end: 1094ff14f;  */

void FUN_1094ff14c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094ff150; end: 1094ff163;  */

void FUN_1094ff150(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094ff164; end: 1094ff17b;  */

void FUN_1094ff164(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001094ff174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1094ff17c; end: 1094ff1b3;  */

undefined8 FUN_1094ff17c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af97a0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094ff1b4; end: 1094ff227;  */

void FUN_1094ff1b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094ff228; end: 1094ff3c3;  */

bool FUN_1094ff228(long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  uVar4 = *param_2;
  func_0x000107c31940(auStack_68,&DAT_10f62b0e2);
  fVar5 = 0.0;
  FUN_1094a73d0(uVar4,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_68,"y");
  fVar6 = 0.0;
  FUN_1094a73d0(uVar4,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_68,"width");
  fVar7 = 0.0;
  FUN_1094a73d0(uVar4,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  uVar4 = *param_2;
  func_0x000107c31940(auStack_68,"height");
  fVar8 = 0.0;
  FUN_1094a73d0(uVar4,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  bVar1 = false;
  *(float *)(param_1 + 8) = fVar5;
  *(float *)(param_1 + 0xc) = fVar6;
  *(float *)(param_1 + 0x10) = fVar7;
  *(float *)(param_1 + 0x14) = fVar8;
  if ((((0.0 <= fVar5) && (fVar5 <= 1.0)) && (0.0 <= fVar6)) &&
     (((fVar6 <= 1.0 && (0.0 < fVar7)) && (fVar7 <= 1.0)))) {
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar8 <= 1.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 < 0.0;
        bVar2 = fVar8 == 0.0;
        bVar3 = false;
      }
    }
    bVar1 = !bVar2 && bVar1 == bVar3;
  }
  return bVar1;
}



/* Entry: 1094ff3c4; end: 1094ff3cb;  */

void FUN_1094ff3c4(void)

{
  return;
}



/* Entry: 1094ff3cc; end: 109500007;  */

void FUN_1094ff3cc(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  bool bVar7;
  code *pcVar8;
  undefined ****ppppuVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined ****ppppuVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined ****ppppuVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_4c0;
  undefined **appuStack_448 [2];
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined1 auStack_428 [56];
  undefined8 uStack_3f0;
  char cStack_3d9;
  undefined **appuStack_3c8 [19];
  long lStack_330;
  long *plStack_328;
  undefined ***pppuStack_320;
  undefined ***pppuStack_318;
  undefined ***pppuStack_310;
  undefined8 auStack_308 [2];
  char cStack_2f1;
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  undefined8 auStack_2d8 [2];
  char cStack_2c1;
  undefined8 auStack_2c0 [2];
  char cStack_2a9;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  undefined8 auStack_290 [2];
  char cStack_279;
  undefined8 ****ppppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined8 ****ppppuStack_260;
  ulong uStack_258;
  byte bStack_249;
  undefined8 ****ppppuStack_248;
  ulong uStack_240;
  byte bStack_231;
  undefined8 ****ppppuStack_230;
  ulong uStack_228;
  byte bStack_219;
  undefined8 uStack_218;
  char cStack_201;
  undefined8 uStack_200;
  char cStack_1e9;
  undefined8 ****ppppuStack_1e8;
  ulong uStack_1e0;
  byte bStack_1d1;
  char cStack_1d0;
  int iStack_1cc;
  byte bStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  long lStack_1a0;
  char cStack_191;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined8 uStack_180;
  undefined ***pppuStack_178;
  undefined ***apppuStack_170 [7];
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [19];
  undefined1 auStack_71 [17];
  
  if (*(long *)(param_1 + 0x40) == 0) {
    FUN_10937e740(&pppuStack_190,&UNK_10f57132f);
    FUN_109388c6c(1,&UNK_10f571293,&UNK_10f571320,0x29,&pppuStack_190);
    if (uStack_180._7_1_ < '\0') {
      __ZdlPv(pppuStack_190);
    }
  }
  else {
    pppuStack_320 = (undefined ***)0x0;
    pppuStack_318 = (undefined ***)0x0;
    pppuStack_310 = (undefined ***)0x0;
    lVar23 = *param_2;
    lVar13 = param_2[1];
    if (lVar13 - lVar23 != 0) {
      uVar11 = (lVar13 - lVar23 >> 5) * -0x5555555555555555;
      if (0x13b13b13b13b13b < uVar11) {
        FUN_10950061c();
LAB_1094ffe74:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1094ffe78);
        (*pcVar8)();
      }
      apppuStack_170[0] = (undefined ***)&pppuStack_320;
      ppppuVar9 = &pppuStack_320;
      FUN_109500630();
      pppuVar10 = (undefined ***)((long)ppppuVar9 + ((long)pppuStack_320 - (long)pppuStack_318));
      pppuStack_190 = (undefined ***)ppppuVar9;
      pppuStack_188 = (undefined ***)ppppuVar9;
      uStack_180 = (undefined **)ppppuVar9;
      pppuStack_178 = (undefined ***)(ppppuVar9 + uVar11 * 0x1a);
      FUN_109500678(pppuStack_320,pppuStack_318,pppuVar10);
      uStack_180 = (undefined **)pppuStack_320;
      pppuStack_178 = pppuStack_310;
      pppuStack_188 = pppuStack_320;
      pppuStack_190 = pppuStack_320;
      pppuStack_320 = pppuVar10;
      pppuStack_318 = (undefined ***)ppppuVar9;
      pppuStack_310 = (undefined ***)(ppppuVar9 + uVar11 * 0x1a);
      FUN_1095007fc(&pppuStack_190);
      lVar23 = *param_2;
      lVar13 = param_2[1];
    }
    if (lVar13 != lVar23) {
      uVar11 = 0;
      ppppuVar9 = (undefined ****)
                  (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      do {
        lVar23 = lVar23 + uVar11 * 0x60;
        if (uVar11 < (ulong)(param_3[1] - *param_3 >> 4)) {
          plVar6 = (long *)(*param_3 + uVar11 * 0x10);
          plStack_328 = (long *)plVar6[1];
          lVar13 = *plVar6;
          if (plStack_328 != (long *)0x0) {
            plVar6 = plStack_328 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar5) {
                *plVar6 = *plVar6 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lStack_330 = lVar13;
          if ((lVar13 != 0) &&
             ((*(double *)(lVar13 + 0x18) != (double)*(int *)(lVar23 + 0xc) ||
              (*(double *)(lVar13 + 0x20) != (double)*(int *)(lVar23 + 8))))) {
            FUN_1092a988c(appuStack_448);
            pppuVar10 = &ppuStack_438;
            FUN_1092b4db8(pppuVar10,&UNK_10f57134b,0x10);
            uVar25 = *(undefined8 *)(lVar13 + 0x20);
            uVar24 = *(undefined8 *)(lVar13 + 0x18);
            uStack_1c0 = uVar24;
            uStack_1b8 = uVar25;
            func_0x000107c31940(auStack_290," ");
            func_0x000107c31940(auStack_2a8,&DAT_10f68f57e);
            func_0x000107c31940(auStack_2c0,"");
            func_0x000107c31940(auStack_2d8,"");
            func_0x000107c31940(auStack_2f0,"");
            func_0x000107c31940(auStack_308,"");
            FUN_1095008b8(&ppppuStack_278,0xffffffff,0,auStack_290,auStack_2a8,auStack_2c0,
                          auStack_2d8,auStack_2f0,auStack_308,0x20);
            if (iStack_1cc == -2) {
              lVar13 = 0xf;
LAB_1094ff678:
              bVar5 = false;
              uStack_4c0 = *(undefined8 *)((long)pppuVar10 + (long)((*pppuVar10)[-3] + 0x10));
              *(long *)((long)pppuVar10 + (long)((*pppuVar10)[-3] + 0x10)) = lVar13;
            }
            else {
              if ((iStack_1cc != -1) && (lVar13 = (long)iStack_1cc, iStack_1cc != 0))
              goto LAB_1094ff678;
              uStack_4c0 = 0;
              bVar5 = true;
            }
            if ((bStack_1c8 & 1) == 0) {
              lVar13 = 0;
              puVar20 = &uStack_1c0;
              bVar7 = true;
              do {
                bVar12 = bVar7;
                FUN_1092a988c(&pppuStack_190);
                __ZNSt3__19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_
                          ((undefined *)((long)&pppuStack_190 + (long)pppuStack_190[-3]),
                           (undefined *)((long)pppuVar10 + (long)(*pppuVar10)[-3]));
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(*puVar20,&uStack_180);
                FUN_10926dc5c(&uStack_1a8,&pppuStack_178,auStack_71);
                lVar14 = (long)cStack_191;
                if (lVar14 < 0) {
                  if (lVar13 <= lStack_1a0) {
                    lVar13 = lStack_1a0;
                  }
                  __ZdlPv(uStack_1a8);
                }
                else if (lVar13 <= lVar14) {
                  lVar13 = lVar14;
                }
                pppuStack_190 = (undefined ***)&PTR_SUB_1108a5a38;
                uStack_180 = &PTR_DAT_1108a5a60;
                appuStack_110[0] = &PTR_DAT_1108a5a88;
                pppuStack_178 = (undefined ***)&PTR_DAT_11088d7b0;
                if (cStack_121 < '\0') {
                  __ZdlPv(uStack_138);
                }
                pppuStack_178 = (undefined ***)ppppuVar9;
                __ZNSt3__16localeD1Ev(apppuStack_170);
                __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                          (&pppuStack_190,&PTR_PTR_1108a5aa0);
                __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
                puVar20 = (undefined8 *)((ulong)&uStack_1c0 | 8);
                bVar7 = false;
              } while (bVar12);
            }
            else {
              lVar13 = 0;
            }
            puVar2 = (undefined *)((long)pppuVar10 + (long)(*pppuVar10)[-3]);
            uVar22 = *(undefined8 *)(puVar2 + 0x18);
            iVar19 = *(int *)(puVar2 + 0x90);
            if (iVar19 == -1) {
              __ZNKSt3__18ios_base6getlocEv(&pppuStack_190,puVar2);
              ppppuVar16 = &pppuStack_190;
              __ZNKSt3__16locale9use_facetERNS0_2idE
                        (ppppuVar16,PTR___ZNSt3__15ctypeIcE2idE_110346770);
              (*(code *)(*ppppuVar16)[7])();
              iVar19 = (int)ppppuVar16;
              __ZNSt3__16localeD1Ev(&pppuStack_190);
              *(int *)(puVar2 + 0x90) = iVar19;
            }
            uVar17 = uStack_270;
            pppppuVar3 = (undefined8 *****)ppppuStack_278;
            if (-1 < (char)bStack_261) {
              uVar17 = (ulong)bStack_261;
              pppppuVar3 = &ppppuStack_278;
            }
            FUN_1092b4db8(pppuVar10,pppppuVar3,uVar17);
            uVar17 = uStack_240;
            pppppuVar3 = (undefined8 *****)ppppuStack_248;
            if (-1 < (char)bStack_231) {
              uVar17 = (ulong)bStack_231;
              pppppuVar3 = &ppppuStack_248;
            }
            FUN_1092b4db8(pppuVar10,pppppuVar3,uVar17);
            cVar4 = cStack_1d0;
            if (lVar13 != 0) {
              ppuVar15 = *pppuVar10;
              puVar2 = (undefined *)((long)pppuVar10 + (long)ppuVar15[-3]);
              if (*(int *)(puVar2 + 0x90) == -1) {
                __ZNKSt3__18ios_base6getlocEv(&pppuStack_190,puVar2);
                ppppuVar16 = &pppuStack_190;
                __ZNKSt3__16locale9use_facetERNS0_2idE
                          (ppppuVar16,PTR___ZNSt3__15ctypeIcE2idE_110346770);
                (*(code *)(*ppppuVar16)[7])();
                __ZNSt3__16localeD1Ev(&pppuStack_190);
                *(int *)(puVar2 + 0x90) = (int)ppppuVar16;
                ppuVar15 = *pppuVar10;
              }
              *(int *)(puVar2 + 0x90) = (int)cVar4;
              *(long *)((long)pppuVar10 + (long)(ppuVar15[-3] + 0x18)) = lVar13;
            }
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(uVar24,pppuVar10);
            uVar17 = uStack_1e0;
            pppppuVar3 = (undefined8 *****)ppppuStack_1e8;
            if (-1 < (char)bStack_1d1) {
              uVar17 = (ulong)bStack_1d1;
              pppppuVar3 = &ppppuStack_1e8;
            }
            FUN_1092b4db8(pppuVar10,pppppuVar3,uVar17);
            cVar4 = cStack_1d0;
            if (lVar13 != 0) {
              ppuVar15 = *pppuVar10;
              puVar2 = (undefined *)((long)pppuVar10 + (long)ppuVar15[-3]);
              if (*(int *)(puVar2 + 0x90) == -1) {
                __ZNKSt3__18ios_base6getlocEv(&pppuStack_190,puVar2);
                ppppuVar16 = &pppuStack_190;
                __ZNKSt3__16locale9use_facetERNS0_2idE
                          (ppppuVar16,PTR___ZNSt3__15ctypeIcE2idE_110346770);
                (*(code *)(*ppppuVar16)[7])();
                __ZNSt3__16localeD1Ev(&pppuStack_190);
                *(int *)(puVar2 + 0x90) = (int)ppppuVar16;
                ppuVar15 = *pppuVar10;
              }
              *(int *)(puVar2 + 0x90) = (int)cVar4;
              *(long *)((long)pppuVar10 + (long)(ppuVar15[-3] + 0x18)) = lVar13;
            }
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd(uVar25,pppuVar10);
            uVar17 = uStack_228;
            pppppuVar3 = (undefined8 *****)ppppuStack_230;
            if (-1 < (char)bStack_219) {
              uVar17 = (ulong)bStack_219;
              pppppuVar3 = &ppppuStack_230;
            }
            FUN_1092b4db8(pppuVar10,pppppuVar3,uVar17);
            uVar17 = uStack_258;
            pppppuVar3 = (undefined8 *****)ppppuStack_260;
            if (-1 < (char)bStack_249) {
              uVar17 = (ulong)bStack_249;
              pppppuVar3 = &ppppuStack_260;
            }
            FUN_1092b4db8(pppuVar10,pppppuVar3,uVar17);
            if (!bVar5) {
              *(undefined8 *)((long)pppuVar10 + (long)((*pppuVar10)[-3] + 0x10)) = uStack_4c0;
            }
            if (lVar13 != 0) {
              ppuVar15 = *pppuVar10;
              puVar2 = (undefined *)((long)pppuVar10 + (long)ppuVar15[-3]);
              if (*(int *)(puVar2 + 0x90) == -1) {
                __ZNKSt3__18ios_base6getlocEv(&pppuStack_190,puVar2);
                ppppuVar16 = &pppuStack_190;
                __ZNKSt3__16locale9use_facetERNS0_2idE
                          (ppppuVar16,PTR___ZNSt3__15ctypeIcE2idE_110346770);
                (*(code *)(*ppppuVar16)[7])();
                __ZNSt3__16localeD1Ev(&pppuStack_190);
                *(int *)(puVar2 + 0x90) = (int)ppppuVar16;
                ppuVar15 = *pppuVar10;
              }
              *(int *)(puVar2 + 0x90) = (int)(char)iVar19;
              *(undefined8 *)((long)pppuVar10 + (long)(ppuVar15[-3] + 0x18)) = uVar22;
            }
            if ((char)bStack_1d1 < '\0') {
              __ZdlPv(ppppuStack_1e8);
            }
            if (cStack_1e9 < '\0') {
              __ZdlPv(uStack_200);
            }
            if (cStack_201 < '\0') {
              __ZdlPv(uStack_218);
            }
            if ((char)bStack_219 < '\0') {
              __ZdlPv(ppppuStack_230);
            }
            if ((char)bStack_231 < '\0') {
              __ZdlPv(ppppuStack_248);
            }
            if ((char)bStack_249 < '\0') {
              __ZdlPv(ppppuStack_260);
            }
            if ((char)bStack_261 < '\0') {
              __ZdlPv(ppppuStack_278);
            }
            if (cStack_2f1 < '\0') {
              __ZdlPv(auStack_308[0]);
            }
            if (cStack_2d9 < '\0') {
              __ZdlPv(auStack_2f0[0]);
            }
            if (cStack_2c1 < '\0') {
              __ZdlPv(auStack_2d8[0]);
            }
            if (cStack_2a9 < '\0') {
              __ZdlPv(auStack_2c0[0]);
            }
            if (cStack_291 < '\0') {
              __ZdlPv(auStack_2a8[0]);
            }
            if (cStack_279 < '\0') {
              __ZdlPv(auStack_290[0]);
            }
            FUN_1092b4db8(pppuVar10,&UNK_10f57135c,0x2b);
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            FUN_1092b4db8();
            __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
            FUN_1092b4db8();
            FUN_10926dc5c(&ppppuStack_278,&ppuStack_430,&uStack_1a8);
            pppppuVar3 = (undefined8 *****)ppppuStack_278;
            if (-1 < (char)bStack_261) {
              pppppuVar3 = &ppppuStack_278;
            }
            FUN_10937e740(&pppuStack_190,pppppuVar3);
            FUN_109388c6c(1,&UNK_10f571293,&UNK_10f571320,0x3b,&pppuStack_190);
            if ((long)uStack_180 < 0) {
              __ZdlPv(pppuStack_190);
            }
            if ((char)bStack_261 < '\0') {
              __ZdlPv(ppppuStack_278);
            }
            appuStack_448[0] = &PTR_SUB_1108a5a38;
            ppuStack_438 = &PTR_DAT_1108a5a60;
            appuStack_3c8[0] = &PTR_DAT_1108a5a88;
            ppuStack_430 = &PTR_DAT_11088d7b0;
            if (cStack_3d9 < '\0') {
              __ZdlPv(uStack_3f0);
            }
            ppuStack_430 = (undefined **)
                           (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 +
                           0x10);
            __ZNSt3__16localeD1Ev(auStack_428);
            __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_448,&PTR_PTR_1108a5aa0);
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_3c8);
          }
        }
        else {
          lStack_330 = 0;
          plStack_328 = (long *)0x0;
        }
        pppuVar10 = pppuStack_318;
        if (pppuStack_318 < pppuStack_310) {
          FUN_1094d91e0(pppuStack_318,lVar23,*(undefined1 *)(param_1 + 0x2c),&lStack_330,param_4,
                        param_5,param_6);
          ppppuVar21 = (undefined ****)(pppuVar10 + 0x1a);
        }
        else {
          lVar13 = (long)pppuStack_318 - (long)pppuStack_320;
          uVar17 = (lVar13 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1;
          if (0x13b13b13b13b13b < uVar17) {
            FUN_10950061c();
            goto LAB_1094ffe74;
          }
          lVar14 = (long)pppuStack_310 - (long)pppuStack_320 >> 4;
          uVar18 = lVar14 * -0x6276276276276276;
          if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
            uVar18 = uVar17;
          }
          if (0x9d89d89d89d89c < (ulong)(lVar14 * 0x4ec4ec4ec4ec4ec5)) {
            uVar18 = 0x13b13b13b13b13b;
          }
          apppuStack_170[0] = (undefined ***)&pppuStack_320;
          if (uVar18 == 0) {
            ppppuVar16 = (undefined ****)0x0;
          }
          else {
            ppppuVar16 = &pppuStack_320;
            FUN_109500630();
          }
          lVar13 = (long)ppppuVar16 + lVar13;
          pppuStack_190 = (undefined ***)ppppuVar16;
          pppuStack_188 = (undefined ***)lVar13;
          uStack_180 = (undefined **)lVar13;
          pppuStack_178 = (undefined ***)(ppppuVar16 + uVar18 * 0x1a);
          FUN_1094d91e0(lVar13,lVar23,*(undefined1 *)(param_1 + 0x2c),&lStack_330,param_4,param_5,
                        param_6);
          ppppuVar21 = (undefined ****)(lVar13 + 0xd0);
          pppuVar10 = (undefined ***)((long)pppuStack_320 + (lVar13 - (long)pppuStack_318));
          uStack_180 = (undefined **)ppppuVar21;
          FUN_109500678(pppuStack_320,pppuStack_318,pppuVar10);
          uStack_180 = (undefined **)pppuStack_320;
          pppuStack_178 = pppuStack_310;
          pppuStack_188 = pppuStack_320;
          pppuStack_190 = pppuStack_320;
          pppuStack_320 = pppuVar10;
          pppuStack_318 = (undefined ***)ppppuVar21;
          pppuStack_310 = (undefined ***)(ppppuVar16 + uVar18 * 0x1a);
          FUN_1095007fc(&pppuStack_190);
        }
        plVar6 = plStack_328;
        pppuStack_318 = (undefined ***)ppppuVar21;
        if (plStack_328 != (long *)0x0) {
          plVar1 = plStack_328 + 1;
          do {
            lVar23 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar23 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plStack_328 + 0x10))(plStack_328);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        uVar11 = uVar11 + 1;
        lVar23 = *param_2;
      } while (uVar11 < (ulong)((param_2[1] - lVar23 >> 5) * -0x5555555555555555));
    }
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),&pppuStack_320);
    pppuStack_190 = (undefined ***)&pppuStack_320;
    FUN_109500848(&pppuStack_190);
  }
  return;
}



/* Entry: 109500008; end: 1095004d3;  */

long * FUN_109500008(undefined1 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plStack_90;
  long *plStack_88;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  char cStack_49;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10937e740(&lStack_60,&UNK_10f57138b);
    FUN_109388c6c(1,&UNK_10f571293,&DAT_10f323079,0x47,&lStack_60);
    if (cStack_49 < '\0') {
      __ZdlPv(lStack_60);
    }
    return (long *)0x0;
  }
  plVar7 = (long *)*param_2;
  func_0x000107c31940(&lStack_60,&DAT_10f2ecb66);
  (**(code **)(*plVar7 + 0x10))(&plStack_78,plVar7,&lStack_60);
  plVar7 = plStack_78;
  plVar3 = (long *)0x28;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar4 = plVar3 + 3;
  *plVar3 = (long)&PTR_FUN_110af82b8;
  FUN_109380ad4(plVar4,plVar7);
  plVar7 = plStack_78;
  plStack_78 = (long *)0x0;
  plStack_70 = plVar4;
  plStack_68 = plVar3;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (cStack_49 < '\0') {
    __ZdlPv(lStack_60);
  }
  puVar5 = (undefined8 *)0x58;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = &PTR_FUN_110af9858;
  *puVar5 = &PTR_FUN_110af9808;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 4) = 1;
  *(undefined1 *)((long)puVar5 + 0x2c) = 0;
  *(undefined8 *)((long)puVar5 + 0x24) = 0;
  func_0x000107c31940(puVar5 + 6,&UNK_10f57141a);
  puVar5[9] = 0;
  puVar5[10] = 0;
  plVar7 = *(long **)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x30) = puVar5 + 3;
  *(undefined8 **)(param_1 + 0x38) = puVar5;
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 1;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = *(long **)(param_1 + 0x30);
  plStack_88 = plStack_68;
  plStack_90 = plStack_70;
  if (plStack_68 != (long *)0x0) {
    plVar3 = plStack_68 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,&plStack_90,*(undefined4 *)(param_1 + 0x20));
  plVar3 = plStack_88;
  if (plStack_88 == (long *)0x0) {
LAB_10950020c:
    if (((ulong)plVar7 & 1) != 0) goto LAB_109500210;
LAB_10950035c:
    FUN_10937e740(&lStack_60,&UNK_10f5713a8);
    FUN_109388c6c(1,&UNK_10f571293,&DAT_10f323079,0x4f,&lStack_60);
  }
  else {
    plVar4 = plStack_88 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 != 0) goto LAB_10950020c;
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    if (((ulong)plVar7 & 1) == 0) goto LAB_10950035c;
LAB_109500210:
    FUN_10952110c();
    FUN_109521dcc(&lStack_60);
    plVar7 = plStack_58;
    lVar6 = lStack_60;
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    plVar3 = *(long **)(param_1 + 0x48);
    *(long **)(param_1 + 0x48) = plVar7;
    *(long *)(param_1 + 0x40) = lVar6;
    if (plVar3 != (long *)0x0) {
      plVar7 = plVar3 + 1;
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = *(long **)(param_1 + 0x40);
    if (plVar7 != (long *)0x0) {
      lStack_60 = *(long *)(param_1 + 0x30);
      *(undefined1 *)(lStack_60 + 8) = *param_1;
      *(undefined8 *)(lStack_60 + 0xc) = *(undefined8 *)(param_1 + 0x24);
      *(undefined1 *)(lStack_60 + 0x14) = param_1[0x2c];
      plStack_58 = *(long **)(param_1 + 0x38);
      if (plStack_58 != (long *)0x0) {
        plVar3 = plStack_58 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      (**(code **)(*plVar7 + 0x10))
                (plVar7,param_2,&lStack_60,*(undefined4 *)(param_1 + 0x20),param_1 + 8);
      plVar3 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      goto LAB_1095003d4;
    }
    FUN_10937e740(&lStack_60,&UNK_10f5713ba);
    FUN_109388c6c(1,&UNK_10f571293,&DAT_10f323079,0x56,&lStack_60);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(lStack_60);
  }
  plVar7 = (long *)0x0;
LAB_1095003d4:
  plVar3 = plStack_68;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return plVar7;
}



/* Entry: 1095004d4; end: 10950056f;  */

void FUN_1095004d4(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109500500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
    return;
  }
  FUN_10937e740(auStack_38,&UNK_10f5713f7);
  FUN_109388c6c(1,&UNK_10f571293,&UNK_10f5713f0,0x61,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 109500570; end: 10950061b;  */

void FUN_109500570(undefined8 *param_1,long param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long **)(param_2 + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001095005a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x40) + 0x28))(param_1);
    return;
  }
  FUN_10937e740(auStack_38,&UNK_10f5713f7);
  FUN_109388c6c(1,&UNK_10f571293,&UNK_10f57140f,0x69,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10950061c; end: 10950062f;  */

void FUN_10950061c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar5 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x13b13b13b13b13b < param_2) {
    func_0x000104c4f740();
    puVar9 = puVar5;
    if (puVar5 != param_2) {
      do {
        uVar10 = *puVar9;
        uVar12 = puVar9[3];
        uVar11 = puVar9[2];
        param_3[1] = puVar9[1];
        *param_3 = uVar10;
        param_3[3] = uVar12;
        param_3[2] = uVar11;
        uVar10 = puVar9[4];
        param_3[5] = puVar9[5];
        param_3[4] = uVar10;
        lVar6 = puVar9[7];
        uVar10 = puVar9[6];
        param_3[7] = puVar9[7];
        param_3[6] = uVar10;
        param_3[10] = 0;
        param_3[8] = param_3 + 1;
        param_3[9] = param_3 + 10;
        param_3[0xb] = 0;
        if (lVar6 != 0) {
          piVar1 = (int *)(lVar6 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(int *)((long)puVar9 + 4) < 3) {
          puVar7 = (undefined8 *)puVar9[9];
          puVar8 = (undefined8 *)param_3[9];
          *puVar8 = *puVar7;
          puVar8[1] = puVar7[1];
        }
        else {
          *(undefined4 *)((long)param_3 + 4) = 0;
          func_0x000109a84868(param_3,puVar9);
        }
        *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(puVar9 + 0xc);
        lVar6 = puVar9[0xe];
        uVar10 = puVar9[0xd];
        param_3[0xe] = puVar9[0xe];
        param_3[0xd] = uVar10;
        if (lVar6 != 0) {
          plVar2 = (long *)(lVar6 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar11 = puVar9[0x10];
        uVar10 = puVar9[0xf];
        uVar12 = puVar9[0x11];
        param_3[0x12] = puVar9[0x12];
        param_3[0x11] = uVar12;
        param_3[0x10] = uVar11;
        param_3[0xf] = uVar10;
        uVar11 = puVar9[0x14];
        uVar10 = puVar9[0x13];
        uVar13 = puVar9[0x16];
        uVar12 = puVar9[0x15];
        uVar15 = puVar9[0x18];
        uVar14 = puVar9[0x17];
        *(undefined1 *)(param_3 + 0x19) = *(undefined1 *)(puVar9 + 0x19);
        param_3[0x18] = uVar15;
        param_3[0x17] = uVar14;
        puVar9 = puVar9 + 0x1a;
        param_3[0x16] = uVar13;
        param_3[0x15] = uVar12;
        param_3[0x14] = uVar11;
        param_3[0x13] = uVar10;
        param_3 = param_3 + 0x1a;
      } while (puVar9 != param_2);
      do {
        FUN_1094d92f0(puVar5);
        puVar5 = puVar5 + 0x1a;
      } while (puVar5 != param_2);
    }
    return;
  }
  __Znwm((long)param_2 * 0xd0);
  return;
}



/* Entry: 109500630; end: 109500677;  */

void FUN_109500630(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((undefined8 *)0x13b13b13b13b13b < param_2) {
    func_0x000104c4f740();
    puVar8 = param_1;
    if (param_1 != param_2) {
      do {
        uVar9 = *puVar8;
        uVar11 = puVar8[3];
        uVar10 = puVar8[2];
        param_3[1] = puVar8[1];
        *param_3 = uVar9;
        param_3[3] = uVar11;
        param_3[2] = uVar10;
        uVar9 = puVar8[4];
        param_3[5] = puVar8[5];
        param_3[4] = uVar9;
        lVar5 = puVar8[7];
        uVar9 = puVar8[6];
        param_3[7] = puVar8[7];
        param_3[6] = uVar9;
        param_3[10] = 0;
        param_3[8] = param_3 + 1;
        param_3[9] = param_3 + 10;
        param_3[0xb] = 0;
        if (lVar5 != 0) {
          piVar1 = (int *)(lVar5 + 0x14);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (*(int *)((long)puVar8 + 4) < 3) {
          puVar6 = (undefined8 *)puVar8[9];
          puVar7 = (undefined8 *)param_3[9];
          *puVar7 = *puVar6;
          puVar7[1] = puVar6[1];
        }
        else {
          *(undefined4 *)((long)param_3 + 4) = 0;
          func_0x000109a84868(param_3,puVar8);
        }
        *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(puVar8 + 0xc);
        lVar5 = puVar8[0xe];
        uVar9 = puVar8[0xd];
        param_3[0xe] = puVar8[0xe];
        param_3[0xd] = uVar9;
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar10 = puVar8[0x10];
        uVar9 = puVar8[0xf];
        uVar11 = puVar8[0x11];
        param_3[0x12] = puVar8[0x12];
        param_3[0x11] = uVar11;
        param_3[0x10] = uVar10;
        param_3[0xf] = uVar9;
        uVar10 = puVar8[0x14];
        uVar9 = puVar8[0x13];
        uVar12 = puVar8[0x16];
        uVar11 = puVar8[0x15];
        uVar14 = puVar8[0x18];
        uVar13 = puVar8[0x17];
        *(undefined1 *)(param_3 + 0x19) = *(undefined1 *)(puVar8 + 0x19);
        param_3[0x18] = uVar14;
        param_3[0x17] = uVar13;
        puVar8 = puVar8 + 0x1a;
        param_3[0x16] = uVar12;
        param_3[0x15] = uVar11;
        param_3[0x14] = uVar10;
        param_3[0x13] = uVar9;
        param_3 = param_3 + 0x1a;
      } while (puVar8 != param_2);
      do {
        FUN_1094d92f0(param_1);
        param_1 = param_1 + 0x1a;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_2 * 0xd0);
  return;
}



/* Entry: 109500678; end: 1095007fb;  */

void FUN_109500678(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar8 = param_1;
  if (param_1 != param_2) {
    do {
      uVar9 = *puVar8;
      uVar11 = puVar8[3];
      uVar10 = puVar8[2];
      param_3[1] = puVar8[1];
      *param_3 = uVar9;
      param_3[3] = uVar11;
      param_3[2] = uVar10;
      uVar9 = puVar8[4];
      param_3[5] = puVar8[5];
      param_3[4] = uVar9;
      lVar5 = puVar8[7];
      uVar9 = puVar8[6];
      param_3[7] = puVar8[7];
      param_3[6] = uVar9;
      param_3[10] = 0;
      param_3[8] = param_3 + 1;
      param_3[9] = param_3 + 10;
      param_3[0xb] = 0;
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 0x14);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(int *)((long)puVar8 + 4) < 3) {
        puVar6 = (undefined8 *)puVar8[9];
        puVar7 = (undefined8 *)param_3[9];
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
      }
      else {
        *(undefined4 *)((long)param_3 + 4) = 0;
        func_0x000109a84868(param_3,puVar8);
      }
      *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(puVar8 + 0xc);
      lVar5 = puVar8[0xe];
      uVar9 = puVar8[0xd];
      param_3[0xe] = puVar8[0xe];
      param_3[0xd] = uVar9;
      if (lVar5 != 0) {
        plVar2 = (long *)(lVar5 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar10 = puVar8[0x10];
      uVar9 = puVar8[0xf];
      uVar11 = puVar8[0x11];
      param_3[0x12] = puVar8[0x12];
      param_3[0x11] = uVar11;
      param_3[0x10] = uVar10;
      param_3[0xf] = uVar9;
      uVar10 = puVar8[0x14];
      uVar9 = puVar8[0x13];
      uVar12 = puVar8[0x16];
      uVar11 = puVar8[0x15];
      uVar14 = puVar8[0x18];
      uVar13 = puVar8[0x17];
      *(undefined1 *)(param_3 + 0x19) = *(undefined1 *)(puVar8 + 0x19);
      param_3[0x18] = uVar14;
      param_3[0x17] = uVar13;
      puVar8 = puVar8 + 0x1a;
      param_3[0x16] = uVar12;
      param_3[0x15] = uVar11;
      param_3[0x14] = uVar10;
      param_3[0x13] = uVar9;
      param_3 = param_3 + 0x1a;
    } while (puVar8 != param_2);
    do {
      FUN_1094d92f0(param_1);
      param_1 = param_1 + 0x1a;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 1095007fc; end: 109500847;  */

long * FUN_1095007fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xd0;
    FUN_1094d92f0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109500848; end: 1095008b7;  */

void FUN_109500848(long *param_1)

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
        lVar1 = lVar1 + -0xd0;
        FUN_1094d92f0();
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



/* Entry: 1095008b8; end: 109500b1f;  */

undefined8 *
FUN_1095008b8(undefined8 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)((long)param_8 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_8,param_8[1]);
  }
  else {
    uVar5 = param_8[1];
    uVar4 = *param_8;
    param_1[2] = param_8[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  puVar1 = param_1 + 3;
  if (*(char *)((long)param_9 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_9,param_9[1]);
  }
  else {
    uVar5 = param_9[1];
    uVar4 = *param_9;
    param_1[5] = param_9[2];
    param_1[4] = uVar5;
    *puVar1 = uVar4;
  }
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 6,*param_6,param_6[1]);
  }
  else {
    uVar5 = param_6[1];
    uVar4 = *param_6;
    param_1[8] = param_6[2];
    param_1[7] = uVar5;
    param_1[6] = uVar4;
  }
  if (*(char *)((long)param_7 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 9,*param_7,param_7[1]);
  }
  else {
    uVar5 = param_7[1];
    uVar4 = *param_7;
    param_1[0xb] = param_7[2];
    param_1[10] = uVar5;
    param_1[9] = uVar4;
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0xc,*param_5,param_5[1]);
  }
  else {
    uVar5 = param_5[1];
    uVar4 = *param_5;
    param_1[0xe] = param_5[2];
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
  }
  func_0x000107c31940(param_1 + 0xf,"");
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x12,*param_4,param_4[1]);
  }
  else {
    uVar5 = param_4[1];
    uVar4 = *param_4;
    param_1[0x14] = param_4[2];
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar4;
  }
  *(undefined1 *)(param_1 + 0x15) = param_10;
  *(undefined4 *)((long)param_1 + 0xac) = param_2;
  *(uint *)(param_1 + 0x16) = param_3;
  if ((param_3 & 1) == 0) {
    uVar2 = (ulong)*(char *)((long)param_1 + 0x2f);
    if ((long)uVar2 < 0) {
      uVar2 = (ulong)*(uint *)(param_1 + 4);
    }
    for (uVar2 = uVar2 & 0xffffffff; 0 < (int)uVar2; uVar2 = uVar2 - 1) {
      puVar3 = puVar1;
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        puVar3 = (undefined8 *)*puVar1;
      }
      if (*(char *)((long)puVar3 + (uVar2 - 1)) == '\n') {
        return param_1;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 0xf,0x20);
    }
  }
  return param_1;
}



/* Entry: 109500b20; end: 109500baf;  */

undefined8 * FUN_109500b20(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 109500bb0; end: 109500bbf;  */

void FUN_109500bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9808;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109500bc0; end: 109500bdf;  */

void FUN_109500bc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9808;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109500be0; end: 109500bef;  */

void FUN_109500be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109500be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109500bf0; end: 109500c47;  */

long FUN_109500bf0(long param_1)

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



/* Entry: 109500c48; end: 109500dff;  */

/* WARNING: Removing unreachable block (ram,0x000109500d88) */

bool FUN_109500c48(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 auStack_58 [16];
  undefined7 uStack_48;
  undefined4 uStack_41;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  long lStack_38;
  
  FUN_1094f7728(param_1 + 0x30);
  uStack_3d = 0;
  uStack_3c = 0;
  if (param_3 < 2) {
    puVar1 = (undefined8 *)&UNK_10f5676e2;
  }
  else {
    if (param_3 != 2) {
      lStack_38 = 0xc;
      uStack_48 = 0x6769685f736f69;
      uStack_41 = 0x6e655f68;
      uStack_3d = 100;
      goto LAB_109500ce0;
    }
    puVar1 = (undefined8 *)&UNK_10f5676ee;
  }
  lStack_38 = 0xb;
  uStack_48 = (undefined7)*puVar1;
  uStack_41 = *(undefined4 *)((long)puVar1 + 7);
LAB_109500ce0:
  lStack_38 = lStack_38 << 0x38;
  FUN_1094a68cc(auStack_58,*param_2,&uStack_48);
  uVar2 = *param_2;
  func_0x000107c31940(auStack_88,&UNK_10f571430);
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  FUN_1094d1f9c(&uStack_70,auStack_58,auStack_88,uVar2,&uStack_a0);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x20) = uStack_68;
  *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_6f,uStack_70);
  *(ulong *)(param_1 + 0x28) = CONCAT17(uStack_59,uStack_60);
  uStack_59 = 0;
  uStack_70 = 0;
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  lVar3 = (long)*(char *)(param_1 + 0x2f);
  if (lVar3 < 0) {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  FUN_109380f8c(auStack_58);
  return lVar3 != 0;
}



/* Entry: 109500e00; end: 109500e03;  */

undefined8 * FUN_109500e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9858;
  func_0x0001094d0850(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 109500e04; end: 109500e17;  */

void FUN_109500e04(void)

{
  FUN_109500e18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109500e18; end: 109500e93;  */

undefined8 * FUN_109500e18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9858;
  func_0x0001094d0850(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 109500e94; end: 109500e97;  */

long FUN_109500e94(long param_1)

{
  long lVar1;
  
  FUN_109503ae4(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN_109503988();
  }
  return param_1;
}



/* Entry: 109500e98; end: 109500eab;  */

void FUN_109500e98(void)

{
  func_0x000109500e58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109500eac; end: 1095018bf;  */

long * FUN_109500eac(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0x160;
  __Znwm();
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x21] = 0;
  puVar4[0x20] = 0;
  puVar4[0x23] = 0;
  puVar4[0x22] = 0;
  puVar4[0x25] = 0;
  puVar4[0x24] = 0;
  puVar4[0x27] = 0;
  puVar4[0x26] = 0;
  puVar4[0x29] = 0;
  puVar4[0x28] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2a] = 0;
  puVar10 = puVar4 + 0x1c;
  puVar4[0x1d] = 0;
  *puVar10 = 0;
  *(undefined4 *)(puVar4 + 9) = 2;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  *(undefined1 *)(puVar4 + 0x10) = 0;
  *(undefined4 *)(puVar4 + 0x12) = 0x42ff0000;
  *(undefined8 *)((long)puVar4 + 0x9c) = 0;
  *(undefined8 *)((long)puVar4 + 0x94) = 0;
  *(undefined8 *)((long)puVar4 + 0xac) = 0;
  *(undefined8 *)((long)puVar4 + 0xa4) = 0;
  *(undefined8 *)((long)puVar4 + 0xbc) = 0;
  *(undefined8 *)((long)puVar4 + 0xb4) = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1a] = puVar4 + 0x13;
  puVar4[0x1b] = puVar10;
  puVar4[0x1d] = 0;
  *puVar10 = 0;
  *(undefined1 *)(puVar4 + 0x1e) = 4;
  puVar4[0x1f] = 0;
  puVar4[0x20] = 0;
  *(undefined1 *)(puVar4 + 0x21) = 0;
  plVar11 = (long *)(param_1 + 8);
  lVar9 = *plVar11;
  *plVar11 = (long)puVar4;
  if (lVar9 != 0) {
    FUN_109503988(plVar11);
  }
  puVar4 = (undefined8 *)0xf0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110af9908;
  puVar4[3] = &PTR_FUN_110af9bf8;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[0xb] = 0;
  puVar4[10] = 0;
  puVar4[0xd] = 0;
  puVar4[0xc] = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x10] = 0;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar10 = puVar4 + 8;
  puVar4[9] = 0;
  *puVar10 = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0x3f19999a;
  plStack_80 = (long *)0x0;
  *puVar10 = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  FUN_1093c71a0(puVar10,&plStack_80,&plStack_78,2);
  puVar4[0xb] = 0;
  plStack_80 = (long *)NEON_fmov(0x3f800000,4);
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  FUN_1093c71a0(puVar4 + 0xb,&plStack_80,&plStack_78,2);
  *(undefined4 *)(puVar4 + 0xe) = 0x3e99999a;
  *(undefined1 *)((long)puVar4 + 0x74) = 1;
  func_0x000107c31940(puVar4 + 0xf,&UNK_10f57159f);
  func_0x000107c31940(puVar4 + 0x12,&UNK_10f56f8b0);
  func_0x000107c31940(puVar4 + 0x15,&UNK_10f5715a3);
  puVar4[0x1b] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1d] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x19] = 0;
  puVar4[0x18] = 0;
  lVar9 = *plVar11;
  plVar12 = *(long **)(lVar9 + 0x40);
  *(undefined8 **)(lVar9 + 0x38) = puVar4 + 3;
  *(undefined8 **)(lVar9 + 0x40) = puVar4;
  if (plVar12 != (long *)0x0) {
    plVar5 = plVar12 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = *(long **)(*plVar11 + 0x38);
  lVar9 = *param_3;
  plStack_88 = *(long **)(lVar9 + 0x38);
  lStack_90 = *(long *)(lVar9 + 0x30);
  if (*(long *)(lVar9 + 0x38) != 0) {
    plVar5 = (long *)(*(long *)(lVar9 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = &lStack_90;
  (**(code **)(*plVar12 + 0x10))(plVar12,plVar5,param_4);
  plVar7 = plStack_88;
  plVar6 = plVar12;
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 1;
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar6 = plVar7;
    }
  }
  if (((ulong)plVar12 & 1) != 0) {
    lVar13 = param_2[1];
    lVar9 = *param_2;
    if (param_2[1] != 0) {
      plVar12 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar12 = *(long **)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar13;
    *(long *)(param_1 + 0x10) = lVar9;
    if (plVar12 != (long *)0x0) {
      plVar5 = plVar12 + 1;
      do {
        lVar9 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    lVar9 = *plVar11;
    *(int *)(lVar9 + 0x48) = (int)param_4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar9 + 0x50,param_5);
    FUN_1094d34f8();
    func_0x0001094d3a28(&plStack_80);
    FUN_1095018c0(*plVar11,&plStack_80);
    plVar12 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar9 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = (long *)*plVar11;
    if (*plVar12 == 0) {
      plStack_b0 = (long *)(plVar12[7] + 0x78);
      if (*(char *)(plVar12[7] + 0x8f) < '\0') {
        plStack_b0 = (long *)*plStack_b0;
      }
      FUN_1093780e0(&plStack_80,&UNK_10f5714d8,&plStack_b0);
      plVar5 = (long *)&UNK_10f571441;
      plVar6 = (long *)0x1;
      FUN_109388c6c(1,&UNK_10f571441,&DAT_10f323079,100,&plStack_80);
      if (cStack_69 < '\0') {
        plVar6 = plStack_80;
        __ZdlPv();
      }
    }
    else {
      puVar4 = (undefined8 *)0x40;
      __Znwm();
      puVar4[2] = 0;
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_110af9958;
      puVar4[7] = 0;
      puVar4[3] = &PTR_FUN_110afb118;
      *(undefined4 *)(puVar4 + 4) = 0xbf800000;
      *(undefined8 *)((long)puVar4 + 0x24) = 0x600000001;
      *(undefined8 *)((long)puVar4 + 0x34) = 0x3e99999a3ecccccd;
      *(undefined8 *)((long)puVar4 + 0x2c) = 0x3fc000003ecccccd;
      lVar9 = plVar12[7];
      plVar12 = *(long **)(lVar9 + 0xc0);
      *(undefined8 **)(lVar9 + 0xb8) = puVar4 + 3;
      *(undefined8 **)(lVar9 + 0xc0) = puVar4;
      if (plVar12 != (long *)0x0) {
        plVar5 = plVar12 + 1;
        do {
          lVar9 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = *(long **)(*(long *)(*plVar11 + 0x38) + 0xb8);
      lVar9 = *param_3;
      plStack_98 = *(long **)(lVar9 + 0x38);
      lStack_a0 = *(long *)(lVar9 + 0x30);
      if (*(long *)(lVar9 + 0x38) != 0) {
        plVar5 = (long *)(*(long *)(lVar9 + 0x38) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar5 = &lStack_a0;
      (**(code **)(*plVar12 + 0x10))(plVar12,plVar5,param_4);
      plVar7 = plStack_98;
      plVar6 = plVar12;
      if (plStack_98 != (long *)0x0) {
        plVar8 = plStack_98 + 1;
        do {
          lVar9 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar7;
        }
      }
      if (((ulong)plVar12 & 1) != 0) {
        puVar4 = (undefined8 *)0x28;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = &PTR_FUN_110af99a8;
        puVar4[4] = 0;
        puVar4[3] = &PTR_DAT_110af99f8;
        lVar9 = *plVar11;
        plVar12 = *(long **)(lVar9 + 0x30);
        *(undefined8 **)(lVar9 + 0x28) = puVar4 + 3;
        *(undefined8 **)(lVar9 + 0x30) = puVar4;
        if (plVar12 != (long *)0x0) {
          plVar5 = plVar12 + 1;
          do {
            lVar9 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        *(undefined1 *)(*(long *)(*plVar11 + 0x28) + 8) = 0;
        plVar12 = (long *)0x30;
        __Znwm();
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = (long)&PTR_FUN_110af9a28;
        plStack_80 = plVar12 + 3;
        *plStack_80 = (long)&PTR_FUN_110af9a78;
        plVar12[4] = 0;
        plVar12[5] = 0;
        plVar5 = (long *)0xe0;
        plStack_78 = plVar12;
        __Znwm();
        plVar5[1] = 0;
        plVar5[2] = 0;
        plVar5[3] = (long)&PTR_FUN_110af7738;
        *plVar5 = (long)&PTR_FUN_110af9a98;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[0xd] = 0;
        plVar5[0xc] = 0;
        plVar5[0xf] = 0;
        plVar5[0xe] = 0;
        plVar5[0x11] = 0;
        plVar5[0x10] = 0;
        plVar5[0x13] = 0;
        plVar5[0x12] = 0;
        plVar5[0x15] = 0;
        plVar5[0x14] = 0;
        plVar5[0x17] = 0;
        plVar5[0x16] = 0;
        plVar5[0x19] = 0;
        plVar5[0x18] = 0;
        plVar5[0x1b] = 0;
        plVar5[0x1a] = 0;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[9] = 0;
        plVar5[8] = 0;
        func_0x000107c31940(plVar5 + 10,"data");
        func_0x000107c31940(plVar5 + 0xd,&UNK_10f5715b4);
        func_0x000107c31940(plVar5 + 0x10,&UNK_10f5715bd);
        func_0x000107c31940(plVar5 + 0x13,&UNK_10f5715cf);
        plVar5[0x16] = 0x3dcccccd3f19999a;
        plVar5[0x18] = 0;
        plVar5[0x19] = 0;
        plVar5[0x17] = 0;
        plVar5[0x1a] = 0x3e4ccccdbe4ccccd;
        *(undefined4 *)(plVar5 + 0x1b) = 0x32;
        plStack_b0 = plVar5 + 3;
        plStack_a8 = plVar5;
        FUN_1094db0fc(*(long *)(*plVar11 + 0x38) + 200,&plStack_b0);
        plVar12 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar5 = plStack_a8 + 1;
          do {
            lVar9 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (*(long *)(*(long *)(*plVar11 + 0x38) + 200) + 0x20,param_5);
        plVar12 = *(long **)(*(long *)(*plVar11 + 0x38) + 200);
        lVar9 = *param_3;
        plStack_b8 = *(long **)(lVar9 + 0x38);
        lStack_c0 = *(long *)(lVar9 + 0x30);
        if (*(long *)(lVar9 + 0x38) != 0) {
          plVar5 = (long *)(*(long *)(lVar9 + 0x38) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar5 = &lStack_c0;
        FUN_1094d2bc0(plVar12,plVar5,param_4);
        plVar8 = plStack_b8;
        plVar6 = plVar12;
        plVar7 = plStack_80;
        if (plStack_b8 != (long *)0x0) {
          plVar1 = plStack_b8 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar8;
            plVar7 = plStack_80;
          }
        }
        plStack_80 = plVar7;
        if (((ulong)plVar12 & 1) != 0) {
          lVar9 = *(long *)(*plVar11 + 0x38);
          lVar14 = *(long *)(lVar9 + 0xd0);
          lVar13 = *(long *)(lVar9 + 200);
          if (*(long *)(lVar9 + 0xd0) != 0) {
            plVar5 = (long *)(*(long *)(lVar9 + 0xd0) + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *plVar5 = *plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar5 = (long *)plVar7[2];
          plVar7[2] = lVar14;
          plVar7[1] = lVar13;
          if (plVar5 != (long *)0x0) {
            plVar6 = plVar5 + 1;
            do {
              lVar9 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
          plVar6 = *(long **)*plVar11;
          plStack_c8 = plStack_78;
          if (plStack_78 != (long *)0x0) {
            plVar11 = plStack_78 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = *plVar11 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plStack_d0 = plVar7;
          (**(code **)(*plVar6 + 0x10))(plVar6,param_2,&plStack_d0);
          plVar11 = plStack_c8;
          plVar5 = param_2;
          if (plStack_c8 != (long *)0x0) {
            plVar7 = plStack_c8 + 1;
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
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              plVar6 = plVar11;
              plVar5 = param_2;
            }
          }
        }
        plVar11 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plVar7 = plStack_78 + 1;
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
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            plVar6 = plVar11;
          }
        }
        goto LAB_1095016c8;
      }
    }
  }
  plVar12 = (long *)0x0;
LAB_1095016c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar12;
  }
  ___stack_chk_fail();
  func_0x0001094da538(&plStack_d0);
  func_0x000109503dfc(&plStack_80);
  __Unwind_Resume();
  lVar13 = plVar5[1];
  lVar9 = *plVar5;
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar11 = (long *)plVar6[1];
  plVar6[1] = lVar13;
  *plVar6 = lVar9;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar9 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return plVar6;
}



/* Entry: 1095018c0; end: 109501923;  */

undefined8 * FUN_1095018c0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109501924; end: 109501b8f;  */

void FUN_109501924(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint3 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 auStack_e0 [2];
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar11 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(lVar11 + 0x38);
  puVar9 = (uint3 *)(lVar12 + 0x60);
  if (*(char *)(lVar12 + 0x77) < '\0') {
    if (*(long *)(lVar12 + 0x68) == 3) {
      puVar9 = *(uint3 **)puVar9;
      goto LAB_109501970;
    }
  }
  else if (*(char *)(lVar12 + 0x77) == '\x03') {
LAB_109501970:
    uVar6 = *puVar9 & 0xff00ff;
    uVar3 = uVar6 >> 8 | ((*puVar9 & 0xff00ff00) >> 8 | uVar6 << 8) << 0x10;
    uVar6 = (uint)(0x52474200 < uVar3);
    if (uVar3 < 0x52474200) {
      uVar6 = 0xffffffff;
    }
    uVar7 = 1;
    if (uVar6 != 0) {
      uVar7 = 2;
    }
    uVar8 = 3;
    if (uVar6 == 0) {
      uVar8 = 1;
    }
    goto LAB_1095019b4;
  }
  uVar8 = 3;
  uVar7 = 2;
LAB_1095019b4:
  param_2 = (undefined8 *)*param_2;
  uStack_70 = (ulong)&uStack_b0 | 8;
  uStack_a8 = *(undefined8 *)(lVar11 + 0x98);
  uStack_b0 = *(ulong *)(lVar11 + 0x90);
  uStack_98 = *(undefined8 *)(lVar11 + 0xa8);
  uStack_a0 = *(undefined8 *)(lVar11 + 0xa0);
  iVar2 = *(int *)(lVar11 + 0x94);
  uStack_88 = *(undefined8 *)(lVar11 + 0xb8);
  uStack_90 = *(undefined8 *)(lVar11 + 0xb0);
  lStack_78 = *(long *)(lVar11 + 200);
  uStack_80 = *(undefined8 *)(lVar11 + 0xc0);
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(lVar11 + 200) != 0) {
    piVar1 = (int *)(*(long *)(lVar11 + 200) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar2 = *(int *)(lVar11 + 0x94);
  }
  puStack_68 = &uStack_60;
  if (iVar2 < 3) {
    uStack_60 = **(undefined8 **)(lVar11 + 0xd8);
    uStack_58 = (*(undefined8 **)(lVar11 + 0xd8))[1];
  }
  else {
    uStack_b0 = uStack_b0 & 0xffffffff;
    func_0x000109a84868(&uStack_b0,lVar11 + 0x90);
  }
  uStack_b8 = 0;
  auStack_c8[0] = 0x1010000;
  auStack_e0[0] = 0x2010000;
  puStack_d8 = &uStack_b0;
  uStack_d0 = 0;
  puStack_c0 = param_2;
  FUN_109ac9fc8(auStack_c8,auStack_e0,uVar8,0);
  uVar10 = *(ulong *)(lVar12 + 0x10);
  if (uVar10 != 0) {
    puStack_d8 = &uStack_b0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    auStack_c8[0] = 0x1010000;
    iStack_e4 = (int)(((float)uVar10 * (float)*(int *)(param_2 + 1)) /
                     (float)*(int *)((long)param_2 + 0xc));
    uStack_e8 = (undefined4)uVar10;
    auStack_e0[0] = 0x2010000;
    puStack_c0 = puStack_d8;
    FUN_109b0f718(0,0,auStack_c8,auStack_e0,&uStack_e8,3);
  }
  FUN_109502d70(lVar11 + 0x90,param_2);
  FUN_109502ecc(lVar11 + 0x90,&uStack_b0,uVar7);
  if (lStack_78 != 0) {
    piVar1 = (int *)(lStack_78 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_b0);
    }
  }
  lStack_78 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (0 < uStack_b0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_70 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_b0._4_4_);
  }
  if (puStack_68 != &uStack_60 && puStack_68 != (undefined8 *)0x0) {
    _free(puStack_68[-1]);
  }
  return;
}



/* Entry: 109501b90; end: 109502067;  */

void FUN_109501b90(long param_1)

{
  long ****pppplVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long ***ppplVar16;
  ulong uVar17;
  long ***ppplVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  double dVar26;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  
  puVar14 = *(undefined8 **)(param_1 + 8);
  pppplVar9 = (long ****)*puVar14;
  ppplStack_98 = (long ***)puVar14[6];
  ppplStack_a0 = (long ***)puVar14[5];
  if (puVar14[6] != 0) {
    plVar12 = (long *)(puVar14[6] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (*(code *)(*pppplVar9)[4])(pppplVar9,puVar14 + 0x12,&ppplStack_a0);
  pppplVar10 = (long ****)ppplStack_98;
  pppplVar11 = pppplVar9;
  if ((long ****)ppplStack_98 != (long ****)0x0) {
    pppplVar1 = (long ****)(ppplStack_98 + 1);
    do {
      ppplVar16 = *pppplVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
      if (bVar5) {
        *pppplVar1 = (long ***)((long)ppplVar16 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppplVar16 == (long ***)0x0) {
      (*(code *)(*ppplStack_98)[2])(ppplStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppplVar11 = pppplVar10;
    }
  }
  dVar26 = *(double *)(*(long *)(param_1 + 8) + 0x150);
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x158);
  __ZNSt3__16chrono12system_clock3nowEv();
  if ((uVar3 & 1) == 0) {
    dVar26 = (double)(long)pppplVar11 * 1e-06;
  }
  lVar15 = *(long *)(param_1 + 8);
  *(double *)(lVar15 + 0x80) = dVar26;
  *(undefined1 *)(lVar15 + 0x88) = 1;
  if (((ulong)pppplVar9 & 1) != 0) {
    plVar12 = (long *)**(undefined8 **)(param_1 + 8);
    (**(code **)(*plVar12 + 0x30))();
    lVar15 = *(long *)(param_1 + 8);
    ppplStack_c0 = (long ***)0x0;
    ppplStack_b8 = (long ***)0x0;
    ppplStack_c8 = (long ***)0x0;
    pppplVar9 = (long ****)(plVar12[1] - *plVar12 >> 7);
    FUN_1094db160(&ppplStack_c8);
    pppplVar10 = (long ****)*plVar12;
    pppplVar11 = (long ****)plVar12[1];
    if (pppplVar10 != pppplVar11) {
      do {
        uVar6 = NEON_scvtf(*(undefined8 *)(*(long *)(param_1 + 8) + 0x98),4);
        auVar24._8_4_ = (int)uVar6;
        auVar24._0_8_ = uVar6;
        auVar24._12_4_ = (int)((ulong)uVar6 >> 0x20);
        auVar24 = NEON_rev64(auVar24,4);
        plStack_a8 = (long *)CONCAT44((float)((ulong)pppplVar10[1] >> 0x20) * auVar24._12_4_,
                                      SUB84(pppplVar10[1],0) * auVar24._8_4_);
        uStack_b0 = CONCAT44((float)((ulong)*pppplVar10 >> 0x20) * auVar24._4_4_,
                             SUB84(*pppplVar10,0) * auVar24._0_4_);
        plVar12 = *(long **)(lVar15 + 0x68);
        plVar2 = *(long **)(lVar15 + 0x70);
        if (plVar12 != plVar2) {
          fVar25 = *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x20);
          do {
            plVar21 = plVar12 + 2;
            uVar7 = *(undefined8 *)(*plVar12 + 0x28);
            uVar6 = *(undefined8 *)(*plVar12 + 0x20);
            fVar23 = (float)uVar6 * auVar24._0_4_;
            ppplStack_98 = (long ***)
                           CONCAT44((float)((ulong)uVar7 >> 0x20) * auVar24._12_4_,
                                    (float)uVar7 * auVar24._8_4_);
            ppplStack_a0 = (long ***)CONCAT44((float)((ulong)uVar6 >> 0x20) * auVar24._4_4_,fVar23);
            pppplVar9 = &ppplStack_a0;
            func_0x0001094cf7e0(&uStack_b0);
            if (fVar25 < fVar23) goto LAB_109501e00;
            plVar12 = plVar21;
          } while (plVar21 != plVar2);
        }
        ppplVar16 = ppplStack_c0;
        if (ppplStack_c0 < ppplStack_b8) {
          pppplVar9 = pppplVar10;
          FUN_1094d7948(ppplStack_c0);
          ppplStack_c0 = ppplVar16 + 0x10;
        }
        else {
          lVar22 = (long)ppplStack_c0 - (long)ppplStack_c8;
          uVar13 = (lVar22 >> 7) + 1;
          if (uVar13 >> 0x39 != 0) {
            FUN_1094d7860();
            goto LAB_109501ff8;
          }
          uVar19 = (long)ppplStack_b8 - (long)ppplStack_c8 >> 6;
          if (uVar19 <= uVar13) {
            uVar19 = uVar13;
          }
          if (0x7fffffffffffff7f < (ulong)((long)ppplStack_b8 - (long)ppplStack_c8)) {
            uVar19 = 0x1ffffffffffffff;
          }
          ppplStack_80 = (long ***)&ppplStack_c8;
          if (uVar19 == 0) {
            pppplVar9 = (long ****)0x0;
          }
          else {
            pppplVar9 = &ppplStack_c8;
            FUN_1094d7874();
          }
          lVar22 = (long)pppplVar9 + lVar22;
          ppplStack_88 = (long ***)(pppplVar9 + uVar19 * 0x10);
          ppplStack_a0 = (long ***)pppplVar9;
          ppplStack_98 = (long ***)lVar22;
          ppplStack_90 = (long ***)lVar22;
          FUN_1094d7948(lVar22,pppplVar10);
          ppplStack_90 = (long ***)(lVar22 + 0x80);
          pppplVar1 = (long ****)((long)ppplStack_c8 + (lVar22 - (long)ppplStack_c0));
          pppplVar9 = (long ****)ppplStack_c8;
          FUN_1094d78a8(&ppplStack_c8,ppplStack_c8,ppplStack_c0,pppplVar1);
          ppplVar18 = ppplStack_90;
          ppplVar16 = ppplStack_b8;
          ppplStack_b8 = ppplStack_88;
          ppplStack_c0 = ppplStack_90;
          ppplStack_90 = ppplStack_c8;
          ppplStack_88 = ppplVar16;
          ppplStack_a0 = ppplStack_c8;
          ppplStack_98 = ppplStack_c8;
          ppplStack_c8 = (long ***)pppplVar1;
          func_0x0001094d80cc(&ppplStack_a0);
          ppplStack_c0 = ppplVar18;
        }
LAB_109501e00:
        pppplVar10 = pppplVar10 + 0x10;
      } while (pppplVar10 != pppplVar11);
    }
    lVar22 = *(long *)(param_1 + 8);
    ppplVar16 = *(long ****)(lVar22 + 0x68);
    lVar15 = *(long *)(lVar22 + 0x70) - (long)ppplVar16;
    uVar13 = ((long)ppplStack_c0 - (long)ppplStack_c8 >> 7) + (lVar15 >> 4);
    pppplVar10 = (long ****)ppplStack_c8;
    pppplVar11 = (long ****)ppplStack_c0;
    if ((ulong)(*(long *)(lVar22 + 0x78) - (long)ppplVar16 >> 4) < uVar13) {
      if (uVar13 >> 0x3c != 0) {
        FUN_109503798();
LAB_109501ff8:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x109501ffc);
        (*pcVar8)();
      }
      ppplStack_80 = (long ***)(lVar22 + 0x68);
      FUN_1095037ac();
      lVar15 = uVar13 + lVar15;
      lVar20 = lVar15 - (*(long *)(lVar22 + 0x70) - *(long *)(lVar22 + 0x68));
      _memcpy(lVar20);
      ppplStack_a0 = *(long ****)(lVar22 + 0x68);
      *(long *)(lVar22 + 0x68) = lVar20;
      *(long *)(lVar22 + 0x70) = lVar15;
      ppplStack_88 = *(long ****)(lVar22 + 0x78);
      *(ulong *)(lVar22 + 0x78) = uVar13 + (long)pppplVar9 * 0x10;
      ppplStack_98 = ppplStack_a0;
      ppplStack_90 = ppplStack_a0;
      func_0x0001095037e0(&ppplStack_a0);
      pppplVar10 = (long ****)ppplStack_c8;
      pppplVar11 = (long ****)ppplStack_c0;
    }
    for (; ppplVar16 = ppplStack_c0, pppplVar10 != (long ****)ppplStack_c0;
        pppplVar10 = pppplVar10 + 0x10) {
      lVar15 = *(long *)(param_1 + 8);
      pppplVar9 = pppplVar10;
      ppplStack_c0 = (long ***)pppplVar11;
      FUN_109503f40(&uStack_b0,&ppplStack_a0);
      puVar14 = *(undefined8 **)(lVar15 + 0x70);
      if (puVar14 < *(undefined8 **)(lVar15 + 0x78)) {
        puVar14[1] = plStack_a8;
        *puVar14 = uStack_b0;
        *(undefined8 **)(lVar15 + 0x70) = puVar14 + 2;
      }
      else {
        ppplVar18 = *(long ****)(lVar15 + 0x68);
        lVar22 = (long)puVar14 - (long)ppplVar18;
        uVar13 = (lVar22 >> 4) + 1;
        if (uVar13 >> 0x3c != 0) {
          FUN_109503798();
          goto LAB_109501ff8;
        }
        uVar17 = (long)*(undefined8 **)(lVar15 + 0x78) - (long)ppplVar18;
        uVar19 = (long)uVar17 >> 3;
        if (uVar19 <= uVar13) {
          uVar19 = uVar13;
        }
        if (0x7fffffffffffffef < uVar17) {
          uVar19 = 0xfffffffffffffff;
        }
        ppplStack_80 = (long ***)(lVar15 + 0x68);
        FUN_1095037ac();
        puVar14 = (undefined8 *)(uVar19 + lVar22);
        puVar14[1] = plStack_a8;
        *puVar14 = uStack_b0;
        uStack_b0 = 0;
        plStack_a8 = (long *)0x0;
        lVar22 = (long)puVar14 - (*(long *)(lVar15 + 0x70) - *(long *)(lVar15 + 0x68));
        _memcpy(lVar22);
        ppplStack_a0 = *(long ****)(lVar15 + 0x68);
        *(long *)(lVar15 + 0x68) = lVar22;
        *(undefined8 **)(lVar15 + 0x70) = puVar14 + 2;
        ppplStack_88 = *(long ****)(lVar15 + 0x78);
        *(ulong *)(lVar15 + 0x78) = uVar19 + (long)pppplVar9 * 0x10;
        ppplStack_98 = ppplStack_a0;
        ppplStack_90 = ppplStack_a0;
        func_0x0001095037e0(&ppplStack_a0);
        plVar12 = plStack_a8;
        *(undefined8 **)(lVar15 + 0x70) = puVar14 + 2;
        if (plStack_a8 != (long *)0x0) {
          plVar2 = plStack_a8 + 1;
          do {
            lVar15 = *plVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *plVar2 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      FUN_109502068(param_1,*(long *)(*(long *)(param_1 + 8) + 0x70) + -0x10);
      pppplVar11 = (long ****)ppplStack_c0;
      ppplStack_c0 = ppplVar16;
    }
    ppplStack_a0 = (long ***)&ppplStack_c8;
    ppplStack_c0 = (long ***)pppplVar11;
    FUN_1094d8bdc(&ppplStack_a0);
  }
  return;
}



/* Entry: 109502068; end: 109502563;  */

void FUN_109502068(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  long *plStack_50;
  long *plStack_48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  if (*(long *)(*(long *)(param_1 + 8) + 0x10) != lVar10) {
    plVar7 = *(long **)(lVar10 + -0x10);
    (**(code **)(*plVar7 + 0x38))();
    if (((ulong)plVar7 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 8);
      plVar7 = *(long **)(*(long *)(lVar10 + 0x18) + -0x10);
      plStack_a8 = (long *)param_2[1];
      uStack_b0 = *param_2;
      if (param_2[1] != 0) {
        plVar8 = (long *)(param_2[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*plVar7 + 0x28))(plVar7,lVar10 + 0x90,&uStack_b0);
      if (plStack_a8 == (long *)0x0) {
        return;
      }
      plVar7 = plStack_a8 + 1;
      do {
        lVar10 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar8 = plStack_a8;
      } while (cVar4 != '\0');
      goto LAB_1095023b4;
    }
  }
  FUN_10952f15c();
  func_0x00010952f820(&plStack_50);
  if (plStack_50 == (long *)0x0) {
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x38);
    plStack_78 = (long *)(lVar10 + 0x90);
    if (*(char *)(lVar10 + 0xa7) < '\0') {
      plStack_78 = (long *)*plStack_78;
    }
    FUN_1093780e0(auStack_68,&UNK_10f57150a,&plStack_78);
    FUN_109388c6c(1,&UNK_10f571441,&UNK_10f5714fe,0xcc,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_68,&UNK_10f57152f,*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x90);
    FUN_109504074(auStack_68);
  }
  else {
    plVar7 = (long *)0x30;
    __Znwm();
    plVar8 = plVar7 + 1;
    *plVar8 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110af9b78;
    plStack_88 = plVar7 + 3;
    *plStack_88 = (long)&PTR_FUN_110af9bc8;
    plVar7[4] = 0;
    plVar7[5] = 0;
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x38);
    lVar10 = *(long *)(lVar11 + 0xb8);
    lVar11 = *(long *)(lVar11 + 0xc0);
    plStack_78 = plStack_88;
    plStack_70 = plVar7;
    if (lVar11 == 0) {
      plVar7[4] = lVar10;
      plVar7[5] = 0;
    }
    else {
      plVar15 = (long *)(lVar11 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar15 = (long *)plVar7[5];
      plVar7[4] = lVar10;
      plVar7[5] = lVar11;
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 1;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar8 = plStack_50;
    plStack_80 = plVar7;
    (**(code **)(*plStack_50 + 0x10))(plStack_50,param_1 + 0x10,&plStack_88);
    plVar7 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      plVar15 = plStack_80 + 1;
      do {
        lVar10 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((int)plVar8 != 0) {
      lVar10 = *(long *)(param_1 + 8);
      plStack_98 = (long *)param_2[1];
      uStack_a0 = *param_2;
      if (param_2[1] != 0) {
        plVar7 = (long *)(param_2[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = *plVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*plStack_50 + 0x28))(plStack_50,lVar10 + 0x90,&uStack_a0);
      plVar7 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar8 = plStack_98 + 1;
        do {
          lVar10 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      lVar10 = *(long *)(param_1 + 8);
      puVar3 = *(undefined8 **)(lVar10 + 0x18);
      if (puVar3 < *(undefined8 **)(lVar10 + 0x20)) {
        puVar16 = puVar3 + 2;
        puVar3[1] = plStack_48;
        *puVar3 = plStack_50;
        plStack_50 = (long *)0x0;
        plStack_48 = (long *)0x0;
      }
      else {
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar14 = (long)puVar3 - lVar11;
        uVar2 = (lVar14 >> 4) + 1;
        if (uVar2 >> 0x3c != 0) {
          FUN_10950382c();
          goto LAB_1095024cc;
        }
        uVar12 = (long)*(undefined8 **)(lVar10 + 0x20) - lVar11;
        uVar13 = (long)uVar12 >> 3;
        if (uVar13 <= uVar2) {
          uVar13 = uVar2;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar13 = 0xfffffffffffffff;
        }
        if (uVar13 >> 0x3c != 0) {
          func_0x000104c4f740();
          goto LAB_1095024cc;
        }
        lVar9 = uVar13 << 4;
        __Znwm();
        puVar3 = (undefined8 *)(lVar9 + lVar14);
        puVar16 = puVar3 + 2;
        puVar3[1] = plStack_48;
        *puVar3 = plStack_50;
        plStack_50 = (long *)0x0;
        plStack_48 = (long *)0x0;
        _memcpy(puVar3 + (lVar14 >> 4) * -2,lVar11,lVar14);
        *(undefined8 **)(lVar10 + 0x10) = puVar3 + (lVar14 >> 4) * -2;
        *(undefined8 **)(lVar10 + 0x18) = puVar16;
        *(ulong *)(lVar10 + 0x20) = lVar9 + uVar13 * 0x10;
        if (lVar11 != 0) {
          __ZdlPv(lVar11);
        }
      }
      plVar7 = plStack_70;
      *(undefined8 **)(lVar10 + 0x18) = puVar16;
      if (plStack_70 != (long *)0x0) {
        plVar8 = plStack_70 + 1;
        do {
          lVar10 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (plStack_48 == (long *)0x0) {
        return;
      }
      plVar7 = plStack_48 + 1;
      do {
        lVar10 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar8 = plStack_48;
      } while (cVar4 != '\0');
LAB_1095023b4:
      if (lVar10 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
      return;
    }
    FUN_10937e740(auStack_68,&UNK_10f571552);
    FUN_109388c6c(1,&UNK_10f571441,&UNK_10f5714fe,0xd7,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    func_0x000105688514(&UNK_10f57157c);
  }
LAB_1095024cc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1095024d0);
  (*pcVar6)();
}



/* Entry: 109502564; end: 109502cc3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109502564(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *plVar14;
  long *******ppppppplVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  long ******pppppplVar19;
  long lVar20;
  float *pfVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong *puVar27;
  long ******pppppplVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  long ******pppppplStack_108;
  long lStack_100;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *plStack_a8;
  
  lVar26 = *param_2;
  plVar11 = *(long **)(lVar26 + 8);
  plVar10 = *(long **)(lVar26 + 0x10);
  if (plVar11 != plVar10) {
    do {
      puVar27 = *(ulong **)(param_1 + 8);
      if (*(char *)(puVar27[7] + 0x5c) == '\x01') {
        lVar26 = *plVar11;
        ppppppplVar13 = (long *******)0x28;
        __Znwm();
        ppppppplVar15 = ppppppplVar13 + 1;
        *ppppppplVar15 = (long ******)0x0;
        ppppppplVar13[2] = (long ******)0x0;
        ppppppplVar13[4] = (long ******)0x1;
        plVar14 = (long *)*puVar27;
        *ppppppplVar13 = (long ******)&PTR_FUN_110af99a8;
        ppppppplStack_f0 = ppppppplVar13 + 3;
        *ppppppplStack_f0 = (long ******)&PTR_DAT_110af99f8;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
          if (bVar7) {
            *ppppppplVar15 = (long ******)((long)*ppppppplVar15 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        ppppppplStack_e8 = ppppppplVar13;
        ppppppplStack_d0 = ppppppplStack_f0;
        ppppppplStack_c8 = ppppppplVar13;
        (**(code **)(*plVar14 + 0x20))(plVar14,puVar27 + 0x12,&ppppppplStack_f0);
        ppppppplVar13 = ppppppplStack_e8;
        if (ppppppplStack_e8 != (long *******)0x0) {
          ppppppplVar15 = ppppppplStack_e8 + 1;
          do {
            pppppplVar19 = *ppppppplVar15;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
            if (bVar7) {
              *ppppppplVar15 = (long ******)((long)pppppplVar19 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_e8)[2])(ppppppplStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar13);
          }
        }
        if (((ulong)plVar14 & 1) != 0) {
          plVar14 = (long *)**(undefined8 **)(param_1 + 8);
          (**(code **)(*plVar14 + 0x30))();
          pfVar16 = (float *)*plVar14;
          pfVar21 = (float *)plVar14[1];
          if (pfVar16 != pfVar21) {
            fVar41 = (*(float *)(lVar26 + 0x20) +
                     *(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x28)) * 0.5;
            fVar42 = (*(float *)(lVar26 + 0x24) +
                     *(float *)(lVar26 + 0x24) + *(float *)(lVar26 + 0x2c)) * 0.5;
            fVar32 = *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x58);
            do {
              fVar33 = *pfVar16;
              if (fVar33 <= fVar41) {
                fVar35 = pfVar16[2];
                fVar38 = fVar33 + fVar35;
                if ((fVar41 < fVar38) && (fVar36 = pfVar16[1], fVar36 <= fVar42)) {
                  fVar37 = pfVar16[3];
                  fVar39 = fVar36 + fVar37;
                  if ((fVar42 < fVar39) &&
                     (fVar38 = (fVar33 + fVar38) * 0.5 - fVar41,
                     fVar39 = (fVar36 + fVar39) * 0.5 - fVar42,
                     fVar38 = SQRT(fVar39 * fVar39 + fVar38 * fVar38), fVar38 < fVar32)) {
                    *(float *)(lVar26 + 0x20) = fVar33;
                    *(float *)(lVar26 + 0x24) = fVar36;
                    *(float *)(lVar26 + 0x28) = fVar35;
                    *(float *)(lVar26 + 0x2c) = fVar37;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                              (lVar26 + 8,pfVar16 + 4);
                    *(float *)(lVar26 + 4) = pfVar16[10];
                    fVar32 = fVar38;
                  }
                }
              }
              pfVar16 = pfVar16 + 0x20;
            } while (pfVar16 != pfVar21);
            lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x38);
            pfVar16 = *(float **)(lVar20 + 0x28);
            pfVar21 = *(float **)(lVar20 + 0x40);
            fVar32 = pfVar16[1];
            fVar42 = *pfVar21;
            fVar41 = pfVar21[1];
            fVar33 = *(float *)(lVar26 + 0x28);
            if (fVar33 <= fVar42) {
              fVar42 = *pfVar16;
              fVar35 = *(float *)(lVar26 + 0x20);
              if (fVar33 < fVar42) {
                fVar33 = (fVar42 - fVar33) * -0.5;
                goto LAB_1095027c0;
              }
            }
            else {
              fVar35 = (fVar33 - fVar42) * 0.5;
              fVar33 = *(float *)(lVar26 + 0x20);
LAB_1095027c0:
              fVar35 = fVar35 + fVar33;
              *(float *)(lVar26 + 0x28) = fVar42;
            }
            fVar42 = 1.0;
            if (fVar35 <= 1.0) {
              fVar42 = fVar35;
            }
            fVar33 = 0.0;
            if (0.0 <= fVar35) {
              fVar33 = fVar42;
            }
            *(float *)(lVar26 + 0x20) = fVar33;
            fVar42 = *(float *)(lVar26 + 0x2c);
            if (fVar42 <= fVar41) {
              if (fVar32 <= fVar42) {
                fVar42 = *(float *)(lVar26 + 0x24);
              }
              else {
                fVar42 = *(float *)(lVar26 + 0x24) + (fVar32 - fVar42) * -0.5;
                *(float *)(lVar26 + 0x2c) = fVar32;
              }
            }
            else {
              fVar42 = (fVar42 - fVar41) * 0.5 + *(float *)(lVar26 + 0x24);
              *(float *)(lVar26 + 0x2c) = fVar41;
            }
            fVar32 = 1.0;
            if (fVar42 <= 1.0) {
              fVar32 = fVar42;
            }
            fVar41 = 0.0;
            if (0.0 <= fVar42) {
              fVar41 = fVar32;
            }
            *(float *)(lVar26 + 0x24) = fVar41;
          }
        }
        ppppppplVar13 = ppppppplStack_c8;
        if (ppppppplStack_c8 != (long *******)0x0) {
          ppppppplVar15 = ppppppplStack_c8 + 1;
          do {
            pppppplVar19 = *ppppppplVar15;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppplVar15,0x10);
            if (bVar7) {
              *ppppppplVar15 = (long ******)((long)pppppplVar19 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pppppplVar19 == (long ******)0x0) {
            (*(code *)(*ppppppplStack_c8)[2])(ppppppplStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar13);
          }
        }
      }
      FUN_109502068(param_1,plVar11);
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar10);
    lVar26 = *param_2;
  }
  puVar24 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x18);
  for (puVar30 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x10); puVar30 != puVar24;
      puVar30 = puVar30 + 2) {
    (**(code **)(*(long *)*puVar30 + 0x30))((long *)*puVar30,lVar26 + 0x20);
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  ppppppplStack_e8 = (long *******)0x0;
  ppppppplStack_e0 = (long *******)0x0;
  ppppppplStack_f0 = (long *******)0x0;
  lVar26 = *(long *)(param_1 + 8);
  puVar30 = *(undefined8 **)(lVar26 + 0x10);
  puVar24 = *(undefined8 **)(lVar26 + 0x18);
  if (puVar30 != puVar24) {
    do {
      (**(code **)(*(long *)*puVar30 + 0x20))
                (&pppppplStack_108,(long *)*puVar30,*(long *)(param_1 + 8) + 0x90);
      ppppppplVar13 = ppppppplStack_e8;
      pppppplVar19 = pppppplStack_108;
      lVar26 = lStack_100 - (long)pppppplStack_108;
      if (0 < lVar26) {
        if ((long)ppppppplStack_e0 - (long)ppppppplStack_e8 < lVar26) {
          lVar20 = (long)ppppppplStack_e8 - (long)ppppppplStack_f0;
          uVar22 = (lVar26 >> 7) * -0x5555555555555555 + (lVar20 >> 7) * -0x5555555555555555;
          if (0xaaaaaaaaaaaaaa < uVar22) {
            FUN_109503584();
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x109502c3c);
            (*pcVar9)();
          }
          lVar17 = (long)ppppppplStack_e0 - (long)ppppppplStack_f0 >> 7;
          uVar23 = lVar17 * 0x5555555555555556;
          if (uVar23 < uVar22 || uVar23 - uVar22 == 0) {
            uVar23 = uVar22;
          }
          if (0x55555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
            uVar23 = 0xaaaaaaaaaaaaaa;
          }
          ppppppplStack_b0 = (long *******)&ppppppplStack_f0;
          if (uVar23 == 0) {
            ppppppplVar15 = (long *******)0x0;
          }
          else {
            ppppppplVar15 = (long *******)&ppppppplStack_f0;
            FUN_109503598();
          }
          pppppplVar28 = (long ******)((long)ppppppplVar15 + lVar20);
          ppppppplStack_b8 = ppppppplVar15 + uVar23 * 0x30;
          lVar20 = (long)pppppplVar28 + lVar26;
          ppppppplStack_d0 = ppppppplVar15;
          ppppppplStack_c8 = (long *******)pppppplVar28;
          ppppppplStack_c0 = (long *******)pppppplVar28;
          do {
            FUN_1095030ec(pppppplVar28,pppppplVar19);
            pppppplVar28 = pppppplVar28 + 0x30;
            pppppplVar19 = pppppplVar19 + 0x30;
            lVar26 = lVar26 + -0x180;
          } while (lVar26 != 0);
          ppppppplStack_c0 = (long *******)lVar20;
          FUN_1095035dc(&ppppppplStack_f0,ppppppplVar13,ppppppplStack_e8,lVar20);
          ppppppplStack_c0 =
               (long *******)
               ((long)ppppppplStack_e8 + ((long)ppppppplStack_c0 - (long)ppppppplVar13));
          ppppppplVar15 =
               (long *******)
               ((long)ppppppplStack_f0 + ((long)ppppppplStack_c8 - (long)ppppppplVar13));
          ppppppplStack_e8 = ppppppplVar13;
          FUN_1095035dc(&ppppppplStack_f0,ppppppplStack_f0,ppppppplVar13,ppppppplVar15);
          ppppppplVar13 = ppppppplStack_e0;
          ppppppplStack_e0 = ppppppplStack_b8;
          ppppppplStack_e8 = ppppppplStack_c0;
          ppppppplStack_c0 = ppppppplStack_f0;
          ppppppplStack_b8 = ppppppplVar13;
          ppppppplStack_d0 = ppppppplStack_f0;
          ppppppplStack_c8 = ppppppplStack_f0;
          ppppppplStack_f0 = ppppppplVar15;
          FUN_109503678(&ppppppplStack_d0);
        }
        else {
          ppppppplVar13 = (long *******)&ppppppplStack_f0;
          FUN_10950306c(ppppppplVar13,pppppplStack_108,lStack_100,ppppppplStack_e8);
          ppppppplStack_e8 = ppppppplVar13;
        }
      }
      ppppppplStack_d0 = &pppppplStack_108;
      FUN_1095036c4(&ppppppplStack_d0);
      puVar30 = puVar30 + 2;
    } while (puVar30 != puVar24);
    lVar26 = *(long *)(param_1 + 8);
  }
  puVar31 = (undefined8 *)(lVar26 + 0x70);
  puVar30 = *(undefined8 **)(lVar26 + 0x68);
  puVar24 = (undefined8 *)*puVar31;
  while (puVar30 != puVar24) {
    ppppppplVar13 = ppppppplStack_f0;
    if (ppppppplStack_f0 == ppppppplStack_e8) {
LAB_109502aac:
      if (ppppppplVar13 == ppppppplStack_e8) goto LAB_109502ac0;
      FUN_1094fd9f4();
      puVar30 = puVar30 + 2;
    }
    else {
      do {
        if ((*(char *)(ppppppplVar13 + 0x2f) == '\x01') &&
           (*(int *)((long)ppppppplVar13 + 0x174) == *(int *)*puVar30)) goto LAB_109502aac;
        ppppppplVar13 = ppppppplVar13 + 0x30;
      } while (ppppppplVar13 != ppppppplStack_e8);
LAB_109502ac0:
      puVar25 = puVar30;
      puVar29 = puVar30;
      if (puVar30 + 2 != puVar24) {
        do {
          puVar25 = puVar29 + 2;
          FUN_109503734(puVar29,puVar25);
          puVar2 = puVar29 + 4;
          puVar29 = puVar25;
        } while (puVar2 != puVar24);
        puVar24 = (undefined8 *)*puVar31;
      }
      while (puVar24 != puVar25) {
        puVar24 = puVar24 + -2;
        FUN_109503e90(puVar24);
      }
      *puVar31 = puVar25;
    }
    puVar31 = (undefined8 *)(*(long *)(param_1 + 8) + 0x70);
    puVar24 = (undefined8 *)*puVar31;
  }
  ppppppplStack_d0 = (long *******)&ppppppplStack_f0;
  ppppppplVar13 = (long *******)&ppppppplStack_d0;
  FUN_1095036c4();
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar26 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar26 + 0x68) == *(long *)(lVar26 + 0x70)) &&
     ((*(byte *)(*(long *)(lVar26 + 0x38) + 8) & 1) == 0)) {
    lVar20 = *(long *)(lVar26 + 0x10);
    lVar17 = *(long *)(lVar26 + 0x18);
    while (lVar17 != lVar20) {
      lVar17 = lVar17 + -0x10;
      FUN_10950401c();
    }
    *(long *)(lVar26 + 0x18) = lVar20;
  }
  else {
    dVar40 = *(double *)(lVar26 + 0x150);
    uVar5 = *(uint *)(lVar26 + 0x158);
    __ZNSt3__16chrono12system_clock3nowEv();
    if ((uVar5 & 1) == 0) {
      dVar40 = (double)(long)ppppppplVar13 * 1e-06;
    }
    lVar26 = *(long *)(param_1 + 8);
    if (*(char *)(lVar26 + 0x88) == '\x01') {
      uVar22 = *(ulong *)(*(long *)(lVar26 + 0x38) + 0x18);
      if ((((long)uVar22 < 1) || (ABS(dVar40 - *(double *)(lVar26 + 0x80)) <= (double)uVar22)) ||
         ((*(byte *)(*(long *)(lVar26 + 0x38) + 8) & 1) != 0)) {
        return;
      }
    }
  }
  puVar27 = *(ulong **)(param_1 + 8);
  plVar10 = (long *)*puVar27;
  plVar11 = (long *)puVar27[6];
  if (puVar27[6] != 0) {
    plVar14 = (long *)(puVar27[6] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  (**(code **)(*plVar10 + 0x20))(plVar10,puVar27 + 0x12,&stack0xffffffffffffff60);
  plVar14 = plVar10;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar26 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar26 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar14 = plVar11;
    }
  }
  dVar40 = *(double *)(*(long *)(param_1 + 8) + 0x150);
  uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x158);
  __ZNSt3__16chrono12system_clock3nowEv();
  if ((uVar5 & 1) == 0) {
    dVar40 = (double)(long)plVar14 * 1e-06;
  }
  lVar26 = *(long *)(param_1 + 8);
  *(double *)(lVar26 + 0x80) = dVar40;
  *(undefined1 *)(lVar26 + 0x88) = 1;
  if (((ulong)plVar10 & 1) != 0) {
    plVar11 = (long *)**(undefined8 **)(param_1 + 8);
    (**(code **)(*plVar11 + 0x30))();
    lVar26 = *(long *)(param_1 + 8);
    ppppppplStack_c0 = (long *******)0x0;
    ppppppplStack_b8 = (long *******)0x0;
    ppppppplStack_c8 = (long *******)0x0;
    ppppppplVar13 = (long *******)(plVar11[1] - *plVar11 >> 7);
    FUN_1094db160(&ppppppplStack_c8);
    ppppppplVar4 = (long *******)plVar11[1];
    for (ppppppplVar15 = (long *******)*plVar11; ppppppplVar15 != ppppppplVar4;
        ppppppplVar15 = ppppppplVar15 + 0x10) {
      uVar8 = NEON_scvtf(*(undefined8 *)(*(long *)(param_1 + 8) + 0x98),4);
      auVar34._8_4_ = (int)uVar8;
      auVar34._0_8_ = uVar8;
      auVar34._12_4_ = (int)((ulong)uVar8 >> 0x20);
      auVar34 = NEON_rev64(auVar34,4);
      ppppppplStack_d8 = auVar34._8_8_;
      ppppppplStack_e0 = auVar34._0_8_;
      plStack_a8 = (long *)CONCAT44((float)((ulong)ppppppplVar15[1] >> 0x20) * auVar34._12_4_,
                                    SUB84(ppppppplVar15[1],0) * auVar34._8_4_);
      ppppppplStack_b0 =
           (long *******)
           CONCAT44((float)((ulong)*ppppppplVar15 >> 0x20) * auVar34._4_4_,
                    SUB84(*ppppppplVar15,0) * auVar34._0_4_);
      plVar11 = *(long **)(lVar26 + 0x68);
      plVar10 = *(long **)(lVar26 + 0x70);
      if (plVar11 != plVar10) {
        fVar32 = *(float *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x20);
        do {
          plVar14 = plVar11 + 2;
          fVar41 = (float)*(undefined8 *)(*plVar11 + 0x20) * SUB84(ppppppplStack_e0,0);
          ppppppplVar13 = (long *******)&stack0xffffffffffffff60;
          func_0x0001094cf7e0(&ppppppplStack_b0);
          if (fVar32 < fVar41) goto LAB_109501e00;
          plVar11 = plVar14;
        } while (plVar14 != plVar10);
      }
      ppppppplVar12 = ppppppplStack_c0;
      if (ppppppplStack_c0 < ppppppplStack_b8) {
        ppppppplVar13 = ppppppplVar15;
        FUN_1094d7948(ppppppplStack_c0);
        ppppppplStack_c0 = ppppppplVar12 + 0x10;
      }
      else {
        lVar20 = (long)ppppppplStack_c0 - (long)ppppppplStack_c8;
        uVar22 = (lVar20 >> 7) + 1;
        if (uVar22 >> 0x39 != 0) {
          FUN_1094d7860();
          goto LAB_109501ff8;
        }
        uVar23 = (long)ppppppplStack_b8 - (long)ppppppplStack_c8 >> 6;
        if (uVar23 <= uVar22) {
          uVar23 = uVar22;
        }
        if (0x7fffffffffffff7f < (ulong)((long)ppppppplStack_b8 - (long)ppppppplStack_c8)) {
          uVar23 = 0x1ffffffffffffff;
        }
        if (uVar23 == 0) {
          ppppppplVar12 = (long *******)0x0;
        }
        else {
          ppppppplVar12 = (long *******)&ppppppplStack_c8;
          FUN_1094d7874();
        }
        lVar20 = (long)ppppppplVar12 + lVar20;
        FUN_1094d7948(lVar20,ppppppplVar15);
        ppppppplVar3 = (long *******)((long)ppppppplStack_c8 + (lVar20 - (long)ppppppplStack_c0));
        FUN_1094d78a8(&ppppppplStack_c8,ppppppplStack_c8,ppppppplStack_c0,ppppppplVar3);
        ppppppplVar13 = ppppppplStack_c8;
        ppppppplStack_e0 = (long *******)(lVar20 + 0x80);
        ppppppplStack_d8 = ppppppplVar12 + uVar23 * 0x10;
        ppppppplStack_c8 = ppppppplVar3;
        ppppppplStack_c0 = (long *******)(lVar20 + 0x80);
        ppppppplStack_b8 = ppppppplVar12 + uVar23 * 0x10;
        func_0x0001094d80cc(&stack0xffffffffffffff60);
        ppppppplStack_c0 = ppppppplStack_e0;
      }
LAB_109501e00:
    }
    lVar20 = *(long *)(param_1 + 8);
    lVar26 = *(long *)(lVar20 + 0x70) - *(long *)(lVar20 + 0x68);
    uVar22 = ((long)ppppppplStack_c0 - (long)ppppppplStack_c8 >> 7) + (lVar26 >> 4);
    ppppppplVar15 = ppppppplStack_c8;
    ppppppplVar4 = ppppppplStack_c0;
    if ((ulong)(*(long *)(lVar20 + 0x78) - *(long *)(lVar20 + 0x68) >> 4) < uVar22) {
      if (uVar22 >> 0x3c != 0) {
        FUN_109503798();
LAB_109501ff8:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109501ffc);
        (*pcVar9)();
      }
      FUN_1095037ac();
      lVar26 = uVar22 + lVar26;
      lVar17 = lVar26 - (*(long *)(lVar20 + 0x70) - *(long *)(lVar20 + 0x68));
      _memcpy(lVar17);
      *(long *)(lVar20 + 0x68) = lVar17;
      *(long *)(lVar20 + 0x70) = lVar26;
      *(ulong *)(lVar20 + 0x78) = uVar22 + (long)ppppppplVar13 * 0x10;
      func_0x0001095037e0(&stack0xffffffffffffff60);
      ppppppplVar15 = ppppppplStack_c8;
      ppppppplVar4 = ppppppplStack_c0;
    }
    for (; ppppppplVar13 = ppppppplStack_c0, ppppppplVar15 != ppppppplStack_c0;
        ppppppplVar15 = ppppppplVar15 + 0x10) {
      lVar26 = *(long *)(param_1 + 8);
      ppppppplVar12 = ppppppplVar15;
      ppppppplStack_c0 = ppppppplVar4;
      FUN_109503f40(&ppppppplStack_b0,&stack0xffffffffffffff60);
      plVar11 = *(long **)(lVar26 + 0x70);
      if (plVar11 < *(long **)(lVar26 + 0x78)) {
        plVar11[1] = (long)plStack_a8;
        *plVar11 = (long)ppppppplStack_b0;
        *(long **)(lVar26 + 0x70) = plVar11 + 2;
      }
      else {
        lVar20 = (long)plVar11 - *(long *)(lVar26 + 0x68);
        uVar22 = (lVar20 >> 4) + 1;
        if (uVar22 >> 0x3c != 0) {
          FUN_109503798();
          goto LAB_109501ff8;
        }
        uVar18 = (long)*(long **)(lVar26 + 0x78) - *(long *)(lVar26 + 0x68);
        uVar23 = (long)uVar18 >> 3;
        if (uVar23 <= uVar22) {
          uVar23 = uVar22;
        }
        if (0x7fffffffffffffef < uVar18) {
          uVar23 = 0xfffffffffffffff;
        }
        FUN_1095037ac();
        plVar11 = (long *)(uVar23 + lVar20);
        plVar11[1] = (long)plStack_a8;
        *plVar11 = (long)ppppppplStack_b0;
        ppppppplStack_b0 = (long *******)0x0;
        plStack_a8 = (long *)0x0;
        lVar20 = (long)plVar11 - (*(long *)(lVar26 + 0x70) - *(long *)(lVar26 + 0x68));
        _memcpy(lVar20);
        *(long *)(lVar26 + 0x68) = lVar20;
        *(long **)(lVar26 + 0x70) = plVar11 + 2;
        *(ulong *)(lVar26 + 0x78) = uVar23 + (long)ppppppplVar12 * 0x10;
        func_0x0001095037e0(&stack0xffffffffffffff60);
        plVar10 = plStack_a8;
        *(long **)(lVar26 + 0x70) = plVar11 + 2;
        if (plStack_a8 != (long *)0x0) {
          plVar11 = plStack_a8 + 1;
          do {
            lVar26 = *plVar11;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *plVar11 = lVar26 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
      }
      FUN_109502068(param_1,*(long *)(*(long *)(param_1 + 8) + 0x70) + -0x10);
      ppppppplVar4 = ppppppplStack_c0;
      ppppppplStack_c0 = ppppppplVar13;
    }
    ppppppplStack_c0 = ppppppplVar4;
    FUN_1094d8bdc(&stack0xffffffffffffff60);
  }
  return;
}



/* Entry: 109502cc4; end: 109502d6b;  */

void FUN_109502cc4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar7 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x68);
  puVar2 = *(undefined8 **)(*(long *)(param_2 + 8) + 0x70);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar6 = (long)puVar2 - (long)puVar7;
  if (lVar6 != 0) {
    FUN_109503840(param_1,lVar6 >> 4);
    puVar5 = (undefined8 *)param_1[1];
    do {
      lVar6 = puVar7[1];
      uVar8 = *puVar7;
      puVar5[1] = puVar7[1];
      *puVar5 = uVar8;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7 = puVar7 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar7 != puVar2);
    param_1[1] = puVar5;
  }
  return;
}



/* Entry: 109502d6c; end: 109502d6f;  */

void FUN_109502d6c(void)

{
  return;
}



/* Entry: 109502d70; end: 109502ecb;  */

undefined4 * FUN_109502d70(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 == param_2) goto LAB_109502e78;
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_109502e20:
    if (2 < (int)param_2[1]) goto LAB_109502e54;
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    puVar7 = *(undefined8 **)(param_2 + 0x12);
    puVar9 = *(undefined8 **)(param_1 + 0x12);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
    *param_1 = *param_2;
    if ((int)param_1[1] < 3) goto LAB_109502e20;
LAB_109502e54:
    func_0x000109a84868(param_1,param_2);
  }
  uVar10 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar10;
LAB_109502e78:
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_109502ff0(param_1 + 0x1a,param_2 + 0x1a);
  uVar11 = *(undefined8 *)(param_2 + 0x24);
  uVar10 = *(undefined8 *)(param_2 + 0x22);
  uVar12 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = uVar12;
  *(undefined8 *)(param_1 + 0x24) = uVar11;
  *(undefined8 *)(param_1 + 0x22) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0x2c);
  uVar10 = *(undefined8 *)(param_2 + 0x2a);
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  uVar12 = *(undefined8 *)(param_2 + 0x2e);
  uVar3 = *(undefined1 *)(param_2 + 0x32);
  uVar14 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = uVar14;
  *(undefined1 *)(param_1 + 0x32) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  *(undefined8 *)(param_1 + 0x2e) = uVar12;
  *(undefined8 *)(param_1 + 0x2c) = uVar11;
  *(undefined8 *)(param_1 + 0x2a) = uVar10;
  return param_1;
}



/* Entry: 109502ecc; end: 109502fef;  */

void FUN_109502ecc(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) goto LAB_109502fdc;
  if (*(long *)(param_2 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)(param_1 + 0xe) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((int)param_1[1] < 1) {
    *param_1 = *param_2;
LAB_109502f84:
    if (2 < (int)param_2[1]) goto LAB_109502fb8;
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    puVar6 = *(undefined8 **)(param_2 + 0x12);
    puVar8 = *(undefined8 **)(param_1 + 0x12);
    *puVar8 = *puVar6;
    puVar8[1] = puVar6[1];
  }
  else {
    lVar5 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
    *param_1 = *param_2;
    if ((int)param_1[1] < 3) goto LAB_109502f84;
LAB_109502fb8:
    func_0x000109a84868(param_1,param_2);
  }
  uVar9 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar9;
LAB_109502fdc:
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 109502ff0; end: 10950306b;  */

undefined8 * FUN_109502ff0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10950306c; end: 1095030eb;  */

long FUN_10950306c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x180) {
    FUN_1095030ec(param_4,param_2);
    param_4 = param_4 + 0x180;
  }
  return param_4;
}



/* Entry: 1095030ec; end: 1095032cf;  */

undefined8 * FUN_1095030ec(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  FUN_1094cf9dc(param_1 + 2,param_2 + 2);
  FUN_1094d7a14(param_1 + 7,param_2 + 7);
  param_1[0xc] = param_2[0xc];
  uVar8 = param_2[0xe];
  uVar7 = param_2[0xd];
  uVar9 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar9;
  uVar9 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar9;
  lVar4 = param_2[0x14];
  uVar10 = param_2[0x14];
  uVar9 = param_2[0x13];
  param_1[0x17] = 0;
  param_1[0x14] = uVar10;
  param_1[0x13] = uVar9;
  param_1[0x15] = param_1 + 0xe;
  param_1[0x16] = param_1 + 0x17;
  param_1[0x18] = 0;
  param_1[0xe] = uVar8;
  param_1[0xd] = uVar7;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0x6c) < 3) {
    puVar5 = (undefined8 *)param_2[0x16];
    puVar6 = (undefined8 *)param_1[0x16];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    func_0x000109a84868(param_1 + 0xd);
  }
  uVar7 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar7;
  uVar7 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar7;
  uVar7 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar7;
  lVar4 = param_2[0x20];
  uVar7 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar7;
  param_1[0x21] = param_1 + 0x1a;
  param_1[0x22] = param_1 + 0x23;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 0xcc) < 3) {
    puVar5 = (undefined8 *)param_2[0x22];
    puVar6 = (undefined8 *)param_1[0x22];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 0xcc) = 0;
    func_0x000109a84868(param_1 + 0x19);
  }
  param_1[0x25] = param_2[0x25];
  FUN_1094e01d0(param_1 + 0x26,param_2 + 0x26);
  uVar8 = param_2[0x2c];
  uVar7 = param_2[0x2b];
  uVar10 = param_2[0x2e];
  uVar9 = param_2[0x2d];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x2c] = uVar8;
  param_1[0x2b] = uVar7;
  param_1[0x2e] = uVar10;
  param_1[0x2d] = uVar9;
  return param_1;
}



/* Entry: 1095032d0; end: 109503407;  */

long FUN_1095032d0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  FUN_1094e073c(param_1 + 0x130);
  if (*(long *)(param_1 + 0x100) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x100) + 0x14);
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
      func_0x000109a848d4(param_1 + 200);
    }
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (0 < *(int *)(param_1 + 0xcc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x108);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xcc));
  }
  lVar5 = *(long *)(param_1 + 0x110);
  if (lVar5 != param_1 + 0x118 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xa0) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x68);
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x6c));
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 != param_1 + 0xb8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  func_0x0001094d8004(param_1 + 0x38);
  func_0x0001094cffd4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109503408; end: 109503583;  */

undefined8 * FUN_109503408(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  FUN_1094e1794(param_1 + 2,param_2 + 2);
  FUN_1094d77f4(param_1 + 7,param_2 + 7);
  param_1[0xc] = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar4 = param_2[0xd];
  uVar6 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar6;
  uVar6 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar6;
  uVar7 = param_2[0x14];
  uVar6 = param_2[0x13];
  param_1[0x17] = 0;
  param_1[0xe] = uVar5;
  param_1[0xd] = uVar4;
  param_1[0x18] = 0;
  piVar2 = (int *)((long)param_2 + 0x6c);
  iVar1 = *piVar2;
  param_1[0x14] = uVar7;
  param_1[0x13] = uVar6;
  param_1[0x15] = param_1 + 0xe;
  param_1[0x16] = param_1 + 0x17;
  puVar3 = (undefined8 *)param_2[0x16];
  if (iVar1 < 3) {
    param_1[0x17] = *puVar3;
    param_1[0x18] = puVar3[1];
  }
  else {
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = puVar3;
    param_2[0x15] = param_2 + 0xe;
    param_2[0x16] = param_2 + 0x17;
  }
  *(undefined4 *)(param_2 + 0xd) = 0x42ff0000;
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  *(undefined8 *)((long)param_2 + 0x7c) = 0;
  *(undefined8 *)((long)param_2 + 0x94) = 0;
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  *(undefined8 *)((long)param_2 + 0x74) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  uVar4 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar4;
  uVar4 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar4;
  uVar4 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar4;
  uVar5 = param_2[0x20];
  uVar4 = param_2[0x1f];
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  piVar2 = (int *)((long)param_2 + 0xcc);
  iVar1 = *piVar2;
  param_1[0x20] = uVar5;
  param_1[0x1f] = uVar4;
  param_1[0x21] = param_1 + 0x1a;
  param_1[0x22] = param_1 + 0x23;
  puVar3 = (undefined8 *)param_2[0x22];
  if (iVar1 < 3) {
    param_1[0x23] = *puVar3;
    param_1[0x24] = puVar3[1];
  }
  else {
    param_1[0x21] = param_2[0x21];
    param_1[0x22] = puVar3;
    param_2[0x21] = param_2 + 0x1a;
    param_2[0x22] = param_2 + 0x23;
  }
  *(undefined4 *)(param_2 + 0x19) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xd4) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0xe4) = 0;
  *(undefined8 *)((long)param_2 + 0xdc) = 0;
  *(undefined8 *)((long)param_2 + 0xf4) = 0;
  *(undefined8 *)((long)param_2 + 0xec) = 0;
  param_2[0x20] = 0;
  param_2[0x1f] = 0;
  param_1[0x25] = param_2[0x25];
  func_0x0001094e186c(param_1 + 0x26,param_2 + 0x26);
  uVar5 = param_2[0x2c];
  uVar4 = param_2[0x2b];
  uVar7 = param_2[0x2e];
  uVar6 = param_2[0x2d];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x2c] = uVar5;
  param_1[0x2b] = uVar4;
  param_1[0x2e] = uVar7;
  param_1[0x2d] = uVar6;
  return param_1;
}



/* Entry: 109503584; end: 109503597;  */

void FUN_109503584(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  func_0x000104c4f6cc(&UNK_10f571598);
  if (0xaaaaaaaaaaaaaa < param_2) {
    func_0x000104c4f740();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_1095030ec(param_4,uVar1);
        uVar1 = uVar1 + 0x180;
        param_4 = param_4 + 0x180;
      } while (uVar1 != param_3);
      do {
        FUN_1095032d0(param_2);
        param_2 = param_2 + 0x180;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x180);
  return;
}



/* Entry: 109503598; end: 1095035db;  */

void FUN_109503598(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0xaaaaaaaaaaaaaa < param_2) {
    func_0x000104c4f740();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_1095030ec(param_4,uVar1);
        uVar1 = uVar1 + 0x180;
        param_4 = param_4 + 0x180;
      } while (uVar1 != param_3);
      do {
        FUN_1095032d0(param_2);
        param_2 = param_2 + 0x180;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x180);
  return;
}



/* Entry: 1095035dc; end: 109503677;  */

void FUN_1095035dc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_1095030ec(param_4,lVar1);
      lVar1 = lVar1 + 0x180;
      param_4 = param_4 + 0x180;
    } while (lVar1 != param_3);
    do {
      FUN_1095032d0(param_2);
      param_2 = param_2 + 0x180;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 109503678; end: 1095036c3;  */

long * FUN_109503678(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x180;
    FUN_1095032d0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095036c4; end: 109503733;  */

void FUN_1095036c4(long *param_1)

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
        lVar1 = lVar1 + -0x180;
        FUN_1095032d0();
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



/* Entry: 109503734; end: 109503797;  */

undefined8 * FUN_109503734(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109503798; end: 1095037ab;  */

undefined1  [16] FUN_109503798(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f571598;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_109503e90();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 1095037ac; end: 10950382b;  */

undefined1  [16] FUN_1095037ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_109503e90();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10950382c; end: 10950383f;  */

undefined1  [16] FUN_10950382c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar4 = (undefined8 *)&UNK_10f571598;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    puVar5 = puVar4;
    FUN_10950388c();
    *puVar4 = puVar5;
    puVar4[1] = puVar5;
    puVar4[2] = puVar5 + param_2 * 2;
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = puVar5;
    return auVar9;
  }
  FUN_109503878();
  puVar6 = &UNK_10f571598;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar7 = param_2 << 4;
    __Znwm(lVar7);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar7;
    return auVar10;
  }
  func_0x000104c4f740();
  plVar8 = *(long **)(puVar6 + 8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = puVar6;
  return auVar11;
}



/* Entry: 109503840; end: 109503877;  */

undefined1  [16] FUN_109503840(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 >> 0x3c == 0) {
    plVar6 = param_1;
    FUN_10950388c();
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)(plVar6 + param_2 * 2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar6;
    return auVar7;
  }
  FUN_109503878();
  puVar4 = &UNK_10f571598;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
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
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 109503878; end: 10950388b;  */

undefined1  [16] FUN_109503878(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f571598;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar5 = param_2 << 4;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
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



/* Entry: 10950388c; end: 109503917;  */

undefined1  [16] FUN_10950388c(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar4 = param_2 << 4;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
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



/* Entry: 109503918; end: 109503987;  */

void FUN_109503918(long *param_1)

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
        func_0x0001095038c0();
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



/* Entry: 109503988; end: 109503a03;  */

void FUN_109503988(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    FUN_1094d92f0(param_2 + 0x90);
    lStack_28 = param_2 + 0x68;
    FUN_109503a04(&lStack_28);
    if (*(char *)(param_2 + 0x67) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x50));
    }
    FUN_109503b7c(param_2 + 0x38);
    FUN_109503d04(param_2 + 0x28);
    lStack_28 = param_2 + 0x10;
    func_0x000109503a74(&lStack_28);
    func_0x000109503bd4(param_2);
    __ZdlPv();
  }
  return;
}



/* Entry: 109503a04; end: 109503ae3;  */

void FUN_109503a04(long *param_1)

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
        FUN_109503e90();
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



/* Entry: 109503ae4; end: 109503b3b;  */

long FUN_109503ae4(long param_1)

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



/* Entry: 109503b3c; end: 109503b4b;  */

void FUN_109503b3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9908;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109503b4c; end: 109503b6b;  */

void FUN_109503b4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9908;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109503b6c; end: 109503b7b;  */

void FUN_109503b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109503b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109503b7c; end: 109503c2b;  */

long FUN_109503b7c(long param_1)

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



/* Entry: 109503c2c; end: 109503c3b;  */

void FUN_109503c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9958;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109503c3c; end: 109503c5b;  */

void FUN_109503c3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9958;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109503c5c; end: 109503c63;  */

void FUN_109503c5c(void)

{
  return;
}



/* Entry: 109503c64; end: 109503cbb;  */

long FUN_109503c64(long param_1)

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



/* Entry: 109503cbc; end: 109503ccb;  */

void FUN_109503cbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af99a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109503ccc; end: 109503ceb;  */

void FUN_109503ccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af99a8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109503cec; end: 109503d03;  */

void FUN_109503cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109503cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109503d04; end: 109503d5b;  */

long FUN_109503d04(long param_1)

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



/* Entry: 109503d5c; end: 109503d6b;  */

void FUN_109503d5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9a28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109503d6c; end: 109503d8b;  */

void FUN_109503d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9a28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109503d8c; end: 109503d9b;  */

void FUN_109503d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109503d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109503d9c; end: 109503e53;  */

undefined8 * FUN_109503d9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9a78;
  FUN_109503c64(param_1 + 1);
  return param_1;
}



/* Entry: 109503e54; end: 109503e63;  */

void FUN_109503e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af9a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e57620; end: 106e57657;  */

long FUN_106e57620(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110980468);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106e57658; end: 106e5765f;  */

void FUN_106e57658(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e57660; end: 106e57673;  */

void FUN_106e57660(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e57674; end: 106e57683;  */

void FUN_106e57674(long param_1,undefined4 *param_2)

{
  *param_2 = 0xfffffc1e;
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 106e57684; end: 106e57697;  */

void FUN_106e57684(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e57698; end: 106e576cb;  */

undefined8 * FUN_106e57698(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e576cc; end: 106e57b93;  */

int * FUN_106e576cc(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  int aiStack_a0 [6];
  int iStack_88;
  
  piVar5 = param_1;
  do {
    piVar7 = param_2;
    if (piVar7 == param_3) {
      return piVar7;
    }
    iVar6 = *piVar7;
    if (iVar6 != 0x24) {
      if (iVar6 == 0x28) {
        if ((piVar7 + 1 == param_3) || (piVar7[1] != 0x3f || piVar7 + 2 == param_3)) {
LAB_106e578e0:
          if (piVar7 + 1 != param_3) {
            if (((piVar7 + 2 == param_3) || (piVar7[1] != 0x3f)) || (piVar7[2] != 0x3a)) {
              piVar5 = param_1;
              FUN_106e59914();
              param_1[9] = param_1[9] + 1;
              func_0x000106e5e76c();
              FUN_106e5744c();
              bVar4 = piVar5 == param_3;
              if ((!bVar4) && (func_0x000106e5e78c(), bVar4)) {
                piVar5 = param_1;
                func_0x000106e5e898();
                goto LAB_106e57974;
              }
            }
            else {
              param_1[9] = param_1[9] + 1;
              func_0x000106e5e6d4();
              FUN_106e5744c();
              bVar4 = piVar5 == param_3;
              if ((!bVar4) && (func_0x000106e5e78c(), bVar4)) {
LAB_106e57974:
                param_1[9] = param_1[9] + -1;
                piVar11 = piVar7 + 2;
                goto LAB_106e57984;
              }
            }
          }
          FUN_106888248();
LAB_106e57b58:
          FUN_106888e94();
          goto LAB_106e57b5c;
        }
        iVar6 = piVar7[2];
        uVar3 = iVar6 == 0x21;
        if ((bool)uVar3) {
          param_2 = aiStack_a0;
          FUN_106e5829c();
          iStack_88 = param_1[6];
          func_0x000106e5e678();
          FUN_106e57f80(param_1,aiStack_a0,1,param_1[7]);
          func_0x000106e5e9ec();
          if (((bool)uVar3) || (*param_2 != 0x29)) {
            FUN_106888248();
            goto LAB_106e57b70;
          }
LAB_106e5786c:
          piVar5 = aiStack_a0;
          func_0x000106e52c58();
          param_2 = param_2 + 1;
          if (param_2 == piVar7) {
            iVar6 = *piVar7;
            goto LAB_106e57884;
          }
          goto LAB_106e57b28;
        }
        uVar3 = iVar6 == 0x3d;
        if (!(bool)uVar3) goto LAB_106e578e0;
        param_2 = aiStack_a0;
        FUN_106e5829c();
        iStack_88 = param_1[6];
        func_0x000106e5e678();
        FUN_106e57f80(param_1,aiStack_a0,0,param_1[7]);
        func_0x000106e5e9ec();
        if ((!(bool)uVar3) && (*param_2 == 0x29)) goto LAB_106e5786c;
      }
      else {
        if (iVar6 == 0x5c) {
          if (piVar7 + 1 != param_3) {
            iVar6 = piVar7[1];
            if (iVar6 == 0x42) {
              uVar8 = 1;
            }
            else {
              if (iVar6 != 0x62) goto LAB_106e577ac;
              uVar8 = 0;
            }
            piVar5 = param_1;
            FUN_106e57f34(param_1,uVar8);
            param_2 = piVar7 + 2;
            goto LAB_106e57b28;
          }
LAB_106e577ac:
          uVar12 = param_1[7];
LAB_106e578a8:
          piVar1 = piVar7 + 1;
          if (piVar1 != param_3) {
            iVar6 = *piVar1;
            if (iVar6 == 0x30) {
              piVar5 = param_1;
              FUN_106e59c9c(param_1,0);
            }
            else if (iVar6 - 0x31U < 9) {
              for (piVar5 = piVar7 + 2; (piVar5 != param_3 && (*piVar5 - 0x30U < 10));
                  piVar5 = piVar5 + 1) {
                if (0x19999998 < iVar6 - 0x30U) goto LAB_106e57b58;
                iVar6 = *piVar5 + (iVar6 - 0x30U) * 10;
              }
              if (uVar12 <= iVar6 - 0x31U) goto LAB_106e57b58;
              piVar5 = param_1;
              FUN_106e59d5c();
            }
            else {
              if (iVar6 == 0x44) {
                uVar8 = 1;
LAB_106e57af8:
                piVar5 = param_1;
                FUN_106e5a1dc(param_1,uVar8);
                uVar12 = piVar5[0x28] | 0x400;
              }
              else {
                if (iVar6 != 0x53) {
                  if (iVar6 == 0x57) {
                    uVar8 = 1;
                  }
                  else {
                    if (iVar6 != 0x77) {
                      if (iVar6 != 0x73) {
                        if (iVar6 != 100) {
                          piVar5 = param_1;
                          FUN_106e599c0(param_1,piVar1,param_3,0);
                          piVar11 = piVar7;
                          if (piVar5 != piVar1) {
                            piVar11 = piVar5;
                          }
                          goto LAB_106e57984;
                        }
                        uVar8 = 0;
                        goto LAB_106e57af8;
                      }
                      uVar8 = 0;
                      goto LAB_106e57ae4;
                    }
                    uVar8 = 0;
                  }
                  piVar5 = param_1;
                  FUN_106e5a1dc(param_1,uVar8);
                  piVar5[0x28] = piVar5[0x28] | 0x500;
                  FUN_106e5a2fc();
                  goto LAB_106e57b0c;
                }
                uVar8 = 1;
LAB_106e57ae4:
                piVar5 = param_1;
                FUN_106e5a1dc(param_1,uVar8);
                uVar12 = piVar5[0x28] | 0x4000;
              }
              piVar5[0x28] = uVar12;
            }
LAB_106e57b0c:
            func_0x000106e5e76c();
            FUN_106e57c4c();
            param_2 = piVar5;
            goto LAB_106e57b28;
          }
        }
        else {
          if (iVar6 == 0x5e) {
            piVar5 = param_1;
            FUN_106e57ec4();
            goto LAB_106e577a4;
          }
LAB_106e57884:
          lVar10 = *(long *)(param_1 + 0xe);
          uVar12 = param_1[7];
          switch(iVar6) {
          case 0x24:
          case 0x29:
            goto LAB_106e57b30;
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x2c:
          case 0x2d:
code_r0x000106e57a74:
            func_0x000106e5e970();
            goto LAB_106e57b0c;
          case 0x28:
            goto LAB_106e578e0;
          case 0x2e:
            func_0x000106e5e3bc();
            uVar8 = *(undefined8 *)(lVar10 + 8);
            *(undefined ***)piVar5 = &PTR_FUN_110980668;
            *(undefined8 *)(piVar5 + 2) = uVar8;
            *(int **)(lVar10 + 8) = piVar5;
            *(int **)(param_1 + 0xe) = piVar5;
            goto LAB_106e57b0c;
          default:
            uVar9 = (ulong)(iVar6 - 0x5cU);
            if (iVar6 - 0x5cU < 0x22) {
              if (uVar9 == 0) goto LAB_106e578a8;
              if ((1L << (uVar9 & 0x3f) & 0x300000006U) != 0) {
                return piVar7;
              }
              if (uVar9 == 0x1f) goto LAB_106e57b5c;
            }
            if (iVar6 == 0x5b) {
              func_0x000106e5e360();
              FUN_106e58f6c();
              piVar11 = piVar5;
LAB_106e57984:
              if (piVar11 == piVar7) {
                return piVar7;
              }
              goto LAB_106e57b0c;
            }
            if (iVar6 != 0x3f) goto code_r0x000106e57a74;
          case 0x2a:
          case 0x2b:
LAB_106e57b5c:
            FUN_106888978();
          }
        }
        FUN_106888a18();
      }
      FUN_106888248();
LAB_106e57b70:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x106e57b74);
      (*pcVar2)();
    }
    piVar5 = param_1;
    func_0x000106e57efc();
LAB_106e577a4:
    param_2 = piVar7 + 1;
LAB_106e57b28:
  } while (param_2 != piVar7);
LAB_106e57b30:
  return piVar7;
}



/* Entry: 106e57b94; end: 106e57bc3;  */

void FUN_106e57b94(undefined8 *param_1)

{
  undefined8 extraout_x9;
  
  func_0x000106e5e3bc();
  func_0x000106e5ea64();
  *param_1 = &PTR_DAT_1109804a0;
  param_1[1] = extraout_x9;
  func_0x000106e5e850();
  return;
}



/* Entry: 106e57bc4; end: 106e57c4b;  */

void FUN_106e57bc4(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = param_1;
  func_0x000106e5e3d0();
  uVar2 = *(undefined8 *)(param_3 + 8);
  puVar1[1] = *(undefined8 *)(param_2 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_DAT_110980a10;
  *(undefined8 **)(param_2 + 8) = puVar1;
  *(undefined8 *)(param_3 + 8) = 0;
  func_0x000106e5e3bc();
  lVar3 = param_1[7];
  uVar2 = *(undefined8 *)(lVar3 + 8);
  *puVar1 = &PTR_DAT_1109804a0;
  puVar1[1] = uVar2;
  *(undefined8 **)(param_3 + 8) = puVar1;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000106e5e3bc();
  uVar2 = *(undefined8 *)(param_3 + 8);
  *puVar1 = &PTR_DAT_110980a58;
  puVar1[1] = uVar2;
  *(undefined8 **)(lVar3 + 8) = puVar1;
  param_1[7] = *(undefined8 *)(param_3 + 8);
  return;
}



/* Entry: 106e57c4c; end: 106e57ec3;  */

int * FUN_106e57c4c(int *param_1,int *param_2,int *param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 uVar6;
  int *piVar7;
  int iStack_54;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar1 = param_1[6] & 0x1f0;
  iVar2 = *param_2;
  if (iVar2 != 0x7b) {
    if (iVar2 == 0x2b) {
      piVar7 = param_2 + 1;
      bVar3 = uVar1 != 0 || piVar7 == param_3;
      if ((bVar3) || (func_0x000106e5e838(), !bVar3)) {
        lVar5 = 1;
LAB_106e57dbc:
        func_0x000106e5ba74(param_1,lVar5,param_4,param_5,param_6);
        return piVar7;
      }
      param_2 = param_2 + 2;
      lVar5 = 1;
LAB_106e57d04:
      func_0x000106e5ba54(param_1,lVar5,param_4,param_5,param_6);
      return param_2;
    }
    if (iVar2 != 0x3f) {
      if (iVar2 != 0x2a) {
        return param_2;
      }
      piVar7 = param_2 + 1;
      if (((uVar1 != 0) || (bVar3 = piVar7 == param_3, bVar3)) || (func_0x000106e5e838(), !bVar3)) {
        lVar5 = 0;
        goto LAB_106e57dbc;
      }
      param_2 = param_2 + 2;
      lVar5 = 0;
      goto LAB_106e57d04;
    }
    piVar7 = param_2 + 1;
    if (((uVar1 != 0) || (bVar3 = piVar7 == param_3, bVar3)) || (func_0x000106e5e838(), !bVar3)) {
      func_0x000106e5e350();
      goto LAB_106e57e34;
    }
    func_0x000106e5e350();
LAB_106e57d9c:
    piVar7 = param_2 + 2;
LAB_106e57e34:
    FUN_106e5ba94();
    return piVar7;
  }
  piVar7 = param_2 + 1;
  param_2 = param_1;
  func_0x000106e5e6e0();
  uVar4 = param_2 == piVar7;
  if (!(bool)uVar4) {
    uVar4 = 1;
    if (param_2 == param_3) goto LAB_106e57ec0;
    if (*param_2 == 0x2c) {
      piVar7 = param_2 + 1;
      uVar4 = piVar7 == param_3;
      if (!(bool)uVar4) {
        if (*piVar7 == 0x7d) {
          piVar7 = param_2 + 2;
          if (((uVar1 != 0) || (bVar3 = piVar7 == param_3, bVar3)) ||
             (func_0x000106e5e838(), !bVar3)) {
            lVar5 = (long)iStack_54;
            goto LAB_106e57dbc;
          }
          param_2 = param_2 + 3;
          lVar5 = (long)iStack_54;
          goto LAB_106e57d04;
        }
        func_0x000106e5e6e0();
        uVar4 = 1;
        if (((param_2 == piVar7) || (uVar4 = 1, param_2 == param_3)) ||
           (uVar4 = *param_2 == 0x7d, !(bool)uVar4)) goto LAB_106e57ec0;
        uVar4 = iStack_54 == -1;
        if (iStack_54 < 0) {
          piVar7 = param_2 + 1;
          if (((uVar1 == 0) && (piVar7 != param_3)) && (param_2[1] == 0x3f)) {
            piVar7 = param_2 + 2;
          }
          func_0x000106e5e350();
          goto LAB_106e57e34;
        }
      }
    }
    else {
      uVar4 = false;
      if (*param_2 == 0x7d) {
        piVar7 = param_2 + 1;
        if (((uVar1 != 0) || (bVar3 = piVar7 == param_3, bVar3)) || (func_0x000106e5e838(), !bVar3))
        {
          func_0x000106e5e350();
          goto LAB_106e57e34;
        }
        func_0x000106e5e350();
        goto LAB_106e57d9c;
      }
    }
  }
  FUN_10688ac98();
LAB_106e57ec0:
  FUN_10688acc0();
  func_0x000106e5e2e4();
  func_0x000106e5e808();
  uVar6 = *(undefined8 *)(extraout_x8 + 8);
  *(undefined ***)param_2 = &PTR_FUN_110980548;
  *(undefined8 *)(param_2 + 2) = uVar6;
  *(undefined1 *)(param_2 + 4) = uVar4;
  func_0x000106e5e850();
  return param_2;
}



/* Entry: 106e57ec4; end: 106e57f33;  */

void FUN_106e57ec4(undefined8 *param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 uVar1;
  
  func_0x000106e5e2e4();
  func_0x000106e5e808();
  uVar1 = *(undefined8 *)(extraout_x8 + 8);
  *param_1 = &PTR_FUN_110980548;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = in_ZR;
  func_0x000106e5e850();
  return;
}



/* Entry: 106e57f34; end: 106e57f7f;  */

void FUN_106e57f34(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000106e5e5bc();
  func_0x000106e5e904(*(undefined8 *)(*(long *)(param_1 + 0x38) + 8));
  *(undefined1 *)(lVar1 + 0x28) = param_2;
  *(long *)(*(long *)(param_1 + 0x38) + 8) = lVar1;
  *(long *)(param_1 + 0x38) = lVar1;
  return;
}



/* Entry: 106e57f80; end: 106e58017;  */

void FUN_106e57f80(long param_1,long param_2,undefined1 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar5 = puVar4;
  func_0x000106e5e85c();
  *puVar5 = &PTR_FUN_110980620;
  puVar5[1] = extraout_x8;
  FUN_106e5820c(puVar5 + 2,param_2);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  puVar4[6] = *(undefined8 *)(param_2 + 0x20);
  puVar4[5] = uVar7;
  lVar6 = *(long *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  puVar4[8] = *(undefined8 *)(param_2 + 0x30);
  puVar4[7] = uVar7;
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
  puVar4[9] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(puVar4 + 10) = param_4;
  *(undefined1 *)((long)puVar4 + 0x54) = param_3;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar4;
  *(undefined8 **)(param_1 + 0x38) = puVar4;
  return;
}



/* Entry: 106e58018; end: 106e5801b;  */

undefined8 * FUN_106e58018(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5801c; end: 106e5802f;  */

void FUN_106e5801c(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e58030; end: 106e58097;  */

void FUN_106e58030(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x17) == '\x01') {
    if ((*(long *)(param_2 + 4) == *(long *)(param_2 + 2)) && ((*(byte *)(param_2 + 0x16) & 1) == 0)
       ) {
LAB_106e58074:
      *param_2 = 0xfffffc1e;
      uVar1 = *(undefined8 *)(param_1 + 8);
      goto LAB_106e58090;
    }
  }
  else if ((*(char *)(param_1 + 0x10) == '\x01') &&
          (*(int *)(*(long *)(param_2 + 4) + -4) == 0xd ||
           *(int *)(*(long *)(param_2 + 4) + -4) == 10)) goto LAB_106e58074;
  uVar1 = 0;
  *param_2 = 0xfffffc1f;
LAB_106e58090:
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}



/* Entry: 106e58098; end: 106e580ab;  */

void FUN_106e58098(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e580ac; end: 106e580ff;  */

void FUN_106e580ac(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(int **)(param_2 + 4) == *(int **)(param_2 + 6)) &&
      ((*(byte *)(param_2 + 0x16) >> 1 & 1) == 0)) ||
     ((*(char *)(param_1 + 0x10) == '\x01' &&
      (iVar1 = **(int **)(param_2 + 4), iVar1 == 0xd || iVar1 == 10)))) {
    *param_2 = 0xfffffc1e;
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar2 = 0;
    *param_2 = 0xfffffc1f;
  }
  *(undefined8 *)(param_2 + 0x14) = uVar2;
  return;
}



/* Entry: 106e58100; end: 106e58113;  */

void FUN_106e58100(void)

{
  func_0x000106e58230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e58114; end: 106e5820b;  */

void FUN_106e58114(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  code *extraout_x8;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar6;
  
  func_0x000106e5e578();
  if (*(int **)(param_2 + 8) == *(int **)(param_2 + 0x18)) {
LAB_106e58190:
    uVar1 = 0;
  }
  else {
    piVar3 = *(int **)(unaff_x19 + 4);
    if (piVar3 == *(int **)(param_2 + 0x18)) {
      if ((*(byte *)(unaff_x19 + 0x16) >> 3 & 1) != 0) goto LAB_106e58190;
      iVar2 = piVar3[-1];
    }
    else {
      if ((piVar3 != *(int **)(param_2 + 8)) || (((uint)unaff_x19[0x16] >> 7 & 1) != 0)) {
        iVar2 = *piVar3;
        if (piVar3[-1] == 0x5f) {
          iVar6 = 1;
        }
        else {
          iVar6 = (int)*(undefined8 *)(unaff_x20 + 0x18);
          func_0x000106e5e2d4();
        }
        if (iVar2 == 0x5f) {
          iVar2 = 1;
        }
        else {
          iVar2 = (int)*(undefined8 *)(unaff_x20 + 0x18);
          func_0x000106e5e3c4();
          (*extraout_x8)();
        }
        uVar1 = (uint)(iVar6 != iVar2);
        goto LAB_106e581d0;
      }
      if (((uint)unaff_x19[0x16] >> 2 & 1) != 0) goto LAB_106e58190;
      iVar2 = *piVar3;
    }
    if (iVar2 == 0x5f) {
      uVar1 = 1;
    }
    else {
      uVar1 = (uint)*(undefined8 *)(unaff_x20 + 0x18);
      func_0x000106e5e2d4();
    }
  }
LAB_106e581d0:
  if (*(byte *)(unaff_x20 + 0x28) == uVar1) {
    uVar4 = 0;
    uVar5 = 0xfffffc1f;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 8);
    uVar5 = 0xfffffc1e;
  }
  *unaff_x19 = uVar5;
  *(undefined8 *)(unaff_x19 + 0x14) = uVar4;
  return;
}



/* Entry: 106e5820c; end: 106e5829b;  */

void FUN_106e5820c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  __ZNSt3__16localeC1ERKS0_();
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 106e5829c; end: 106e582bf;  */

void FUN_106e5829c(long param_1)

{
  FUN_106e571a8();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 106e582c0; end: 106e582c3;  */

undefined8 * FUN_106e582c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110980620;
  func_0x000106e52c58(param_1 + 2);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e582c4; end: 106e582d7;  */

void FUN_106e582c4(void)

{
  FUN_106e583f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e582d8; end: 106e583ef;  */

void FUN_106e582d8(long param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uVar7;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x000106e5e2f0();
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_6f = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  FUN_106e5841c(&lStack_90,*(int *)(param_1 + 0x2c) + 1,*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),0);
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 4) == *(long *)(unaff_x20 + 2)) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x17);
  }
  lVar5 = unaff_x19 + 0x10;
  FUN_106e58484(lVar5,*(long *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),&lStack_90,
                unaff_x20[0x16] & 0xfff | 0x40,uVar1);
  if ((uint)*(byte *)(unaff_x19 + 0x54) == (uint)lVar5) {
    *unaff_x20 = 0xfffffc1f;
    *(undefined8 *)(unaff_x20 + 0x14) = 0;
  }
  else {
    uVar3 = 0;
    *unaff_x20 = 0xfffffc1e;
    *(undefined8 *)(unaff_x20 + 0x14) = *(undefined8 *)(unaff_x19 + 8);
    lVar5 = *(long *)(unaff_x20 + 8);
    while( true ) {
      iVar2 = (int)uVar3;
      uVar3 = (ulong)(iVar2 + 1);
      if ((ulong)((lStack_88 - lStack_90) / 0x18) <= uVar3) break;
      puVar6 = (undefined8 *)(lStack_90 + uVar3 * 0x18);
      puVar4 = (undefined8 *)(lVar5 + (ulong)(uint)(iVar2 + *(int *)(unaff_x19 + 0x50)) * 0x18);
      uVar7 = *puVar6;
      puVar4[1] = puVar6[1];
      *puVar4 = uVar7;
      *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar6 + 2);
    }
  }
  FUN_106e58698(&lStack_90);
  return;
}



/* Entry: 106e583f0; end: 106e5841b;  */

undefined8 * FUN_106e583f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110980620;
  func_0x000106e52c58(param_1 + 2);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5841c; end: 106e58483;  */

void FUN_106e5841c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_106e586b0(param_1,param_2,puVar1);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = *puVar1;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_1 + 0x28);
  if ((param_5 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x68) = param_3;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 106e58484; end: 106e58697;  */

/* WARNING: Removing unreachable block (ram,0x000106e58554) */
/* WARNING: Removing unreachable block (ram,0x000106e58658) */

long * FUN_106e58484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined1 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  undefined4 auStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    func_0x000106e58f30(&uStack_78);
    return (long *)0x0;
  }
  uStack_80 = 0;
  auStack_f0[0] = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_9b = 0;
  uStack_98 = 0;
  uStack_90 = param_3;
  uStack_88 = param_3;
  func_0x000106e5e978();
  FUN_106e58c64(auStack_f0);
  lVar1 = lStack_70;
  *(undefined4 *)(lStack_70 + -0x60) = 0;
  *(undefined8 *)(lStack_70 + -0x58) = param_2;
  *(undefined8 *)(lStack_70 + -0x50) = param_2;
  *(undefined8 *)(lStack_70 + -0x48) = param_3;
  FUN_106e58878(lStack_70 + -0x40,*(undefined4 *)(param_1 + 0x1c),&uStack_90);
  func_0x000106e589b8(lVar1 + -0x28,*(undefined4 *)(param_1 + 0x20));
  *(long *)(lVar1 + -0x10) = lVar6;
  *(undefined4 *)(lVar1 + -8) = param_5;
  *(undefined1 *)(lVar1 + -4) = param_6;
  uVar4 = 0;
  uVar3 = 0;
  plVar5 = *(long **)(lVar1 + -0x10);
  if (plVar5 != (long *)0x0) {
    func_0x000106e5e9a0(*(undefined8 *)(*plVar5 + 0x10));
  }
  func_0x000106e5e71c();
  if ((bool)uVar4 && !(bool)uVar3) {
    FUN_106888720();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x106e58668);
    (*pcVar2)();
  }
                    /* WARNING: Could not recover jumptable at 0x000106e5858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10ddeec53)[extraout_x8] * 4 + 0x106e58590))();
  return plVar5;
}



/* Entry: 106e58698; end: 106e586af;  */

void FUN_106e58698(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e586b0; end: 106e5877b;  */

void FUN_106e586b0(long *param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)*param_1;
  if ((ulong)((param_1[2] - (long)puVar4) / 0x18) < param_2) {
    plVar3 = param_1;
    FUN_106e587b0();
    func_0x000106e5e3e4();
    FUN_106e58814();
    func_0x000106e587d4();
    func_0x000106e5e3e4();
  }
  else {
    uVar1 = (param_1[1] - (long)puVar4) / 0x18;
    puVar5 = puVar4;
    uVar2 = uVar1;
    if (param_2 <= uVar1) {
      uVar2 = param_2;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar7 = *param_3;
      puVar5[1] = param_3[1];
      *puVar5 = uVar7;
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(param_3 + 2);
      puVar5 = puVar5 + 3;
    }
    plVar3 = (long *)(param_2 - uVar1);
    if (param_2 < uVar1 || plVar3 == (long *)0x0) {
      param_1[1] = (long)(puVar4 + param_2 * 3);
      return;
    }
  }
  puVar5 = (undefined8 *)param_1[1];
  puVar4 = puVar5;
  for (lVar6 = (long)plVar3 * 0x18; lVar6 != 0; lVar6 = lVar6 + -0x18) {
    uVar8 = param_3[1];
    uVar7 = *param_3;
    puVar4[2] = param_3[2];
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
    puVar4 = puVar4 + 3;
  }
  param_1[1] = (long)(puVar5 + (long)plVar3 * 3);
  return;
}



/* Entry: 106e5877c; end: 106e587af;  */

void FUN_106e5877c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 * 0x18; lVar3 != 0; lVar3 = lVar3 + -0x18) {
    uVar5 = param_3[1];
    uVar4 = *param_3;
    puVar1[2] = param_3[2];
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1 = puVar1 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2 * 3;
  return;
}



/* Entry: 106e587b0; end: 106e58813;  */

void FUN_106e587b0(long param_1)

{
  func_0x000106e5e630();
  if (param_1 != 0) {
    func_0x000106e5e608();
    func_0x000106e5e7fc();
  }
  return;
}



/* Entry: 106e58814; end: 106e5883f;  */

/* WARNING: Possible PIC construction at 0x000106e58830: Changing call to branch */

undefined1  [16] FUN_106e58814(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *extraout_x8;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  ulong unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - *param_1) / 0x18;
    uVar8 = uVar3 * 2;
    if (uVar8 < param_2 || uVar8 - param_2 == 0) {
      uVar8 = param_2;
    }
    if (0x555555555555554 < uVar3) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = uVar8;
    return auVar13;
  }
  func_0x000106e5e118();
  func_0x000106e5e73c();
  if (param_1 < extraout_x8) {
    lVar4 = (long)param_1 * 0x18;
    __Znwm(lVar4);
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = lVar4;
    return auVar14;
  }
  func_0x000104bd35f4();
  func_0x000106e5e868();
  uVar8 = (param_1[1] - *param_1) / 0x18;
  uVar3 = param_2 - uVar8;
  if (param_2 < uVar8 || uVar3 == 0) {
    if (param_2 < uVar8) {
      unaff_x19[1] = *param_1 + unaff_x21 * 0x18;
    }
  }
  else {
    if (uVar3 <= (ulong)((unaff_x19[2] - param_1[1]) / 0x18)) {
      puVar5 = (undefined8 *)unaff_x19[1];
      puVar1 = puVar5;
      for (lVar4 = uVar3 * 0x18; lVar4 != 0; lVar4 = lVar4 + -0x18) {
        uVar10 = param_3[1];
        uVar9 = *param_3;
        puVar1[2] = param_3[2];
        puVar1[1] = uVar10;
        *puVar1 = uVar9;
        puVar1 = puVar1 + 3;
      }
      unaff_x19[1] = (long)(puVar5 + uVar3 * 3);
      auVar11._8_8_ = uVar3;
      auVar11._0_8_ = unaff_x19;
      return auVar11;
    }
    param_1 = unaff_x19;
    param_2 = unaff_x21;
    FUN_106e58814();
    lVar4 = *unaff_x19;
    lVar7 = unaff_x19[1];
    if (param_1 == (long *)0x0) {
      param_2 = 0;
    }
    else {
      FUN_106e58840();
    }
    puVar1 = (undefined8 *)((long)param_1 + (lVar7 - lVar4));
    puVar5 = puVar1;
    for (lVar4 = unaff_x21 * 0x18 + uVar8 * -0x18; lVar4 != 0; lVar4 = lVar4 + -0x18) {
      uVar10 = param_3[1];
      uVar9 = *param_3;
      puVar5[2] = param_3[2];
      puVar5[1] = uVar10;
      *puVar5 = uVar9;
      puVar5 = puVar5 + 3;
    }
    puVar5 = (undefined8 *)*unaff_x19;
    puVar2 = (undefined8 *)unaff_x19[1];
    lVar4 = (long)puVar2 - (long)puVar5;
    puVar6 = puVar1 + (lVar4 / -0x18) * 3;
    for (; puVar5 != puVar2; puVar5 = puVar5 + 3) {
      uVar10 = puVar5[1];
      uVar9 = *puVar5;
      puVar6[2] = puVar5[2];
      puVar6[1] = uVar10;
      *puVar6 = uVar9;
      puVar6 = puVar6 + 3;
    }
    lVar7 = *unaff_x19;
    *unaff_x19 = (long)(puVar1 + (lVar4 / -0x18) * 3);
    unaff_x19[1] = (long)(puVar1 + uVar3 * 3);
    unaff_x19[2] = (long)(param_1 + param_2 * 3);
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar7);
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = lVar7;
      return auVar15;
    }
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 106e58840; end: 106e58877;  */

void FUN_106e58840(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x000106e5e73c();
  if (param_1 < extraout_x8) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x000106e5e868();
  uVar3 = (param_1[1] - *param_1) / 0x18;
  uVar4 = param_2 - uVar3;
  if (param_2 < uVar3 || uVar4 == 0) {
    if (param_2 < uVar3) {
      unaff_x19[1] = *param_1 + unaff_x21 * 0x18;
    }
  }
  else {
    if (uVar4 <= (ulong)((unaff_x19[2] - param_1[1]) / 0x18)) {
      puVar7 = (undefined8 *)unaff_x19[1];
      puVar1 = puVar7;
      for (lVar10 = uVar4 * 0x18; lVar10 != 0; lVar10 = lVar10 + -0x18) {
        uVar12 = param_3[1];
        uVar11 = *param_3;
        puVar1[2] = param_3[2];
        puVar1[1] = uVar12;
        *puVar1 = uVar11;
        puVar1 = puVar1 + 3;
      }
      unaff_x19[1] = (long)(puVar7 + uVar4 * 3);
      return;
    }
    plVar5 = unaff_x19;
    lVar6 = unaff_x21;
    FUN_106e58814();
    lVar10 = *unaff_x19;
    lVar9 = unaff_x19[1];
    if (plVar5 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      FUN_106e58840();
    }
    puVar1 = (undefined8 *)((long)plVar5 + (lVar9 - lVar10));
    puVar7 = puVar1;
    for (lVar10 = unaff_x21 * 0x18 + uVar3 * -0x18; lVar10 != 0; lVar10 = lVar10 + -0x18) {
      uVar12 = param_3[1];
      uVar11 = *param_3;
      puVar7[2] = param_3[2];
      puVar7[1] = uVar12;
      *puVar7 = uVar11;
      puVar7 = puVar7 + 3;
    }
    puVar7 = (undefined8 *)*unaff_x19;
    puVar2 = (undefined8 *)unaff_x19[1];
    lVar10 = (long)puVar2 - (long)puVar7;
    puVar8 = puVar1 + (lVar10 / -0x18) * 3;
    for (; puVar7 != puVar2; puVar7 = puVar7 + 3) {
      uVar12 = puVar7[1];
      uVar11 = *puVar7;
      puVar8[2] = puVar7[2];
      puVar8[1] = uVar12;
      *puVar8 = uVar11;
      puVar8 = puVar8 + 3;
    }
    lVar9 = *unaff_x19;
    *unaff_x19 = (long)(puVar1 + (lVar10 / -0x18) * 3);
    unaff_x19[1] = (long)(puVar1 + uVar4 * 3);
    unaff_x19[2] = (long)(plVar5 + lVar6 * 3);
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar9);
      return;
    }
  }
  return;
}



/* Entry: 106e58878; end: 106e58aaf;  */

void FUN_106e58878(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x000106e5e868();
  uVar3 = (param_1[1] - *param_1) / 0x18;
  uVar4 = param_2 - uVar3;
  if (param_2 < uVar3 || uVar4 == 0) {
    if (param_2 < uVar3) {
      unaff_x19[1] = *param_1 + unaff_x21 * 0x18;
    }
  }
  else {
    if (uVar4 <= (ulong)((unaff_x19[2] - param_1[1]) / 0x18)) {
      puVar7 = (undefined8 *)unaff_x19[1];
      puVar1 = puVar7;
      for (lVar10 = uVar4 * 0x18; lVar10 != 0; lVar10 = lVar10 + -0x18) {
        uVar12 = param_3[1];
        uVar11 = *param_3;
        puVar1[2] = param_3[2];
        puVar1[1] = uVar12;
        *puVar1 = uVar11;
        puVar1 = puVar1 + 3;
      }
      unaff_x19[1] = (long)(puVar7 + uVar4 * 3);
      return;
    }
    plVar5 = unaff_x19;
    lVar6 = unaff_x21;
    FUN_106e58814();
    lVar10 = *unaff_x19;
    lVar9 = unaff_x19[1];
    if (plVar5 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      FUN_106e58840();
    }
    puVar1 = (undefined8 *)((long)plVar5 + (lVar9 - lVar10));
    puVar7 = puVar1;
    for (lVar10 = unaff_x21 * 0x18 + uVar3 * -0x18; lVar10 != 0; lVar10 = lVar10 + -0x18) {
      uVar12 = param_3[1];
      uVar11 = *param_3;
      puVar7[2] = param_3[2];
      puVar7[1] = uVar12;
      *puVar7 = uVar11;
      puVar7 = puVar7 + 3;
    }
    puVar7 = (undefined8 *)*unaff_x19;
    puVar2 = (undefined8 *)unaff_x19[1];
    lVar10 = (long)puVar2 - (long)puVar7;
    puVar8 = puVar1 + (lVar10 / -0x18) * 3;
    for (; puVar7 != puVar2; puVar7 = puVar7 + 3) {
      uVar12 = puVar7[1];
      uVar11 = *puVar7;
      puVar8[2] = puVar7[2];
      puVar8[1] = uVar12;
      *puVar8 = uVar11;
      puVar8 = puVar8 + 3;
    }
    lVar9 = *unaff_x19;
    *unaff_x19 = (long)(puVar1 + (lVar10 / -0x18) * 3);
    unaff_x19[1] = (long)(puVar1 + uVar4 * 3);
    unaff_x19[2] = (long)(plVar5 + lVar6 * 3);
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar9);
      return;
    }
  }
  return;
}



/* Entry: 106e58ab0; end: 106e58abb;  */

void FUN_106e58ab0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000106e5e578(param_1,*(long *)(param_1 + 8) + -0x60);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    FUN_106e58c64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 106e58abc; end: 106e58bfb;  */

void FUN_106e58abc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x19;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000106e5e868();
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 < (undefined8 *)unaff_x19[2]) {
    FUN_106e58bfc();
    puVar4 = puVar4 + 0xc;
  }
  else {
    lVar10 = (long)puVar4 - *unaff_x19;
    uVar1 = lVar10 / 0x60 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar1) {
      FUN_106e58c58();
LAB_106e58bf8:
      func_0x000104bd35f4();
      uVar7 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      puVar4[1] = param_2[1];
      *puVar4 = uVar7;
      puVar4[3] = uVar14;
      puVar4[2] = uVar13;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[4] = 0;
      uVar7 = param_2[4];
      puVar4[5] = param_2[5];
      puVar4[4] = uVar7;
      puVar4[6] = param_2[6];
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      uVar7 = param_2[7];
      puVar4[8] = param_2[8];
      puVar4[7] = uVar7;
      puVar4[9] = param_2[9];
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      uVar7 = param_2[10];
      *(undefined8 *)((long)puVar4 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
      puVar4[10] = uVar7;
      return;
    }
    uVar3 = (unaff_x19[2] - *unaff_x19) / 0x60;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x155555555555554 < uVar3) {
      uVar8 = 0x2aaaaaaaaaaaaaa;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x2aaaaaaaaaaaaaa < uVar8) goto LAB_106e58bf8;
      lVar5 = uVar8 * 0x60;
      __Znwm();
    }
    lVar10 = lVar5 + lVar10;
    FUN_106e58bfc(lVar10);
    lVar9 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar12 = lVar10 + ((lVar2 - lVar9) / -0x60) * 0x60;
    lVar6 = lVar12;
    for (lVar11 = lVar9; lVar11 != lVar2; lVar11 = lVar11 + 0x60) {
      FUN_106e58bfc(lVar6,lVar11);
      lVar6 = lVar6 + 0x60;
    }
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x60) {
      FUN_106e58c64(lVar9);
    }
    puVar4 = (undefined8 *)(lVar10 + 0x60);
    lVar10 = *unaff_x19;
    *unaff_x19 = lVar12;
    unaff_x19[1] = (long)puVar4;
    unaff_x19[2] = lVar5 + uVar8 * 0x60;
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = (long)puVar4;
  return;
}



/* Entry: 106e58bfc; end: 106e58c57;  */

void FUN_106e58bfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar1 = param_2[10];
  *(undefined8 *)((long)param_1 + 0x55) = *(undefined8 *)((long)param_2 + 0x55);
  param_1[10] = uVar1;
  return;
}



/* Entry: 106e58c58; end: 106e58c63;  */

long FUN_106e58c58(long param_1)

{
  func_0x000106e5e118();
  FUN_106e58c90(param_1 + 0x38);
  FUN_106e58698(param_1 + 0x20);
  return param_1;
}



/* Entry: 106e58c64; end: 106e58c8f;  */

long FUN_106e58c64(long param_1)

{
  FUN_106e58c90(param_1 + 0x38);
  FUN_106e58698(param_1 + 0x20);
  return param_1;
}



/* Entry: 106e58c90; end: 106e58ca7;  */

void FUN_106e58c90(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 106e58ca8; end: 106e58cf3;  */

/* WARNING: Possible PIC construction at 0x000106e58ce4: Changing call to branch */

undefined1  [16] FUN_106e58ca8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  func_0x000106e5e118();
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104bd35f4();
  func_0x000106e5e578();
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    FUN_106e58c64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar1;
  return auVar4;
}



/* Entry: 106e58cf4; end: 106e58d57;  */

void FUN_106e58cf4(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000106e5e578();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    FUN_106e58c64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 106e58d58; end: 106e58e53;  */

void FUN_106e58d58(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  
  func_0x000106e5e2f0();
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  puVar5 = param_1 + 4;
  *puVar5 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = param_2[4];
  lVar2 = param_2[5];
  uStack_58 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_60 = puVar5;
  if (lVar3 != 0) {
    func_0x000106e587d4(puVar5,lVar3 / 0x18);
    FUN_106e58e54(puVar5,lVar1,lVar2);
  }
  uStack_58 = 1;
  FUN_106e58e80(&puStack_60);
  puVar5 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  uStack_58 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_60 = puVar5;
  if (lVar3 != 0) {
    func_0x000106e58eac(puVar5,lVar3 >> 4);
    FUN_106e58ee4(puVar5,lVar1,lVar2);
  }
  uStack_58 = 1;
  FUN_106e58f04(&puStack_60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x55) = *(undefined8 *)(unaff_x20 + 0x55);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
  return;
}



/* Entry: 106e58e54; end: 106e58e7f;  */

void FUN_106e58e54(long param_1,undefined8 *param_2,undefined8 *param_3)

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



/* Entry: 106e58e80; end: 106e58ee3;  */

undefined8 * FUN_106e58e80(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_106e58698(*param_1);
  }
  return param_1;
}



/* Entry: 106e58ee4; end: 106e58f03;  */

void FUN_106e58ee4(long param_1,undefined8 *param_2,undefined8 *param_3)

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



/* Entry: 106e58f04; end: 106e58f63;  */

undefined8 * FUN_106e58f04(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_106e58c90(*param_1);
  }
  return param_1;
}



/* Entry: 106e58f64; end: 106e58f6b;  */

void FUN_106e58f64(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000106e5e578(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x60;
    FUN_106e58c64();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 106e58f6c; end: 106e59913;  */

uint ****** FUN_106e58f6c(uint ******param_1,uint ******param_2,uint ******param_3)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint ******ppppppuVar10;
  uint ******ppppppuVar11;
  uint ******ppppppuVar12;
  int iVar14;
  int extraout_w8;
  uint uVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined4 *extraout_x8_04;
  undefined4 *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  undefined4 *extraout_x8_09;
  code *extraout_x8_10;
  undefined4 *extraout_x8_11;
  undefined4 *extraout_x8_12;
  code *extraout_x8_13;
  undefined4 *extraout_x8_14;
  long extraout_x8_15;
  code *extraout_x8_16;
  long extraout_x8_17;
  ulong uVar16;
  undefined8 extraout_x9;
  uint ******ppppppuVar17;
  code *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined4 *extraout_x9_03;
  undefined4 *extraout_x9_04;
  ulong extraout_x9_05;
  long extraout_x9_06;
  ulong extraout_x9_07;
  uint ******extraout_x10;
  long extraout_x11;
  undefined8 extraout_x11_00;
  uint ******ppppppuVar18;
  uint *****pppppuVar19;
  long lVar20;
  undefined8 *****pppppuStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  uint *****pppppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  uint *****pppppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  uint *****pppppuStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  uint *****pppppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *****pppppuStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 *****pppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *****pppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uVar13;
  
  func_0x000106e5e340();
  bVar7 = true;
  uStack_70 = extraout_x8;
  if ((param_2 == param_3) || (bVar7 = *(int *)param_2 == 0x5b, !bVar7)) {
LAB_106e597d8:
    func_0x000106e5e168(uStack_70);
    if (bVar7) {
      return param_2;
    }
  }
  else {
    if ((uint ******)((long)param_2 + 4) != param_3) {
      ppppppuVar18 = param_2 + 1;
      if (*(int *)((long)param_2 + 4) != 0x5e) {
        ppppppuVar18 = (uint ******)((long)param_2 + 4);
      }
      ppppppuVar10 = param_1;
      FUN_106e5a1dc();
      if (ppppppuVar18 != param_3) {
        ppppppuVar11 = ppppppuVar10;
        if ((((ulong)param_1[3] & 0x1f0) != 0) && (*(int *)ppppppuVar18 == 0x5d)) {
          FUN_106e5a2fc(ppppppuVar10,0x5d);
          ppppppuVar18 = (uint ******)((long)ppppppuVar18 + 4);
        }
        if (ppppppuVar18 != param_3) {
          ppppppuVar12 = ppppppuVar18;
          do {
            ppppppuVar18 = ppppppuVar12;
            if ((ppppppuVar18 == param_3) || (*(int *)ppppppuVar18 == 0x5d)) break;
            pppppuStack_100 = (uint *****)0x0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            uVar16 = 0;
            ppppppuVar12 = ppppppuVar18;
            if (((uint ******)((long)ppppppuVar18 + 4) == param_3) || (*(int *)ppppppuVar18 != 0x5b)
               ) {
LAB_106e591dc:
              uVar8 = *(uint *)(param_1 + 3);
              uVar1 = uStack_f8;
              if (-1 < (char)uVar16) {
                uVar1 = uVar16;
              }
              if (uVar1 == 0) {
                if ((uVar8 & 0x1b0) == 0) {
                  iVar14 = *(int *)ppppppuVar12;
                  if (iVar14 == 0x5c) {
                    if ((uVar8 & 0x1f0) == 0) {
                      func_0x000106e5e6d4();
                      func_0x000106e5afe0();
                      ppppppuVar12 = ppppppuVar11;
                    }
                    else {
                      func_0x000106e5e6d4();
                      func_0x000106e5b148();
                      ppppppuVar12 = ppppppuVar11;
                    }
                    goto LAB_106e59318;
                  }
                }
                else {
                  iVar14 = *(int *)ppppppuVar12;
                }
                if ((char)uVar16 < '\0') {
                  uStack_f8 = 1;
                  ppppppuVar17 = (uint ******)pppppuStack_100;
                }
                else {
                  uStack_f0 = CONCAT17(1,(undefined7)uStack_f0);
                  ppppppuVar17 = &pppppuStack_100;
                }
                *(int *)ppppppuVar17 = iVar14;
                *(int *)((long)ppppppuVar17 + 4) = 0;
                ppppppuVar12 = (uint ******)((long)ppppppuVar12 + 4);
              }
LAB_106e59318:
              if ((((ppppppuVar12 == param_3) || (*(int *)ppppppuVar12 == 0x5d)) ||
                  (ppppppuVar17 = (uint ******)((long)ppppppuVar12 + 4), ppppppuVar17 == param_3))
                 || ((*(int *)ppppppuVar12 != 0x2d || (*(int *)ppppppuVar17 == 0x5d)))) {
                if ((long)uStack_f0 < 0) {
                  if (uStack_f8 != 0) {
                    ppppppuVar11 = (uint ******)pppppuStack_100;
                    if (uStack_f8 == 1) goto LAB_106e59360;
LAB_106e593d4:
                    FUN_106e5b3ac(ppppppuVar10,*(int *)ppppppuVar11,*(int *)((long)ppppppuVar11 + 4)
                                 );
                  }
                }
                else if (uStack_f0._7_1_ != '\0') {
                  ppppppuVar11 = &pppppuStack_100;
                  if (uStack_f0._7_1_ != '\x01') goto LAB_106e593d4;
LAB_106e59360:
                  FUN_106e5a2fc(ppppppuVar10,*(int *)ppppppuVar11);
                }
              }
              else {
                pppppuStack_a0 = (undefined8 ******)0x0;
                uStack_98 = 0;
                uStack_90 = 0;
                ppppppuVar12 = ppppppuVar12 + 1;
                if (((ppppppuVar12 == param_3) || (*(int *)ppppppuVar17 != 0x5b)) ||
                   (*(int *)ppppppuVar12 != 0x2e)) {
                  if ((uVar8 & 0x1b0) == 0) {
                    uVar15 = *(uint *)ppppppuVar17;
                    if (uVar15 == 0x5c) {
                      if ((uVar8 & 0x1f0) == 0) {
                        func_0x000106e5e370();
                        func_0x000106e5afe0();
                      }
                      else {
                        func_0x000106e5e370();
                        func_0x000106e5b148();
                      }
                      goto LAB_106e5954c;
                    }
                  }
                  else {
                    uVar15 = *(uint *)ppppppuVar17;
                  }
                  uStack_90 = 0x100000000000000;
                  pppppuStack_a0 = (undefined8 *****)(ulong)uVar15;
                  ppppppuVar11 = ppppppuVar12;
                }
                else {
                  func_0x000106e5e6d4();
                  FUN_106e5af18();
                }
LAB_106e5954c:
                uVar16 = uStack_f0;
                uStack_118 = uStack_f8;
                pppppuStack_120 = pppppuStack_100;
                uStack_110 = uStack_f0;
                uStack_f8 = 0;
                uStack_f0 = 0;
                pppppuStack_100 = (uint *****)0x0;
                uStack_138 = uStack_98;
                pppppuStack_140 = pppppuStack_a0;
                uStack_130 = uStack_90;
                pppppuStack_a0 = (undefined8 *****)0x0;
                uStack_98 = 0;
                uStack_90 = 0;
                if (*(char *)((long)ppppppuVar10 + 0xaa) != '\x01') {
                  uStack_110._7_1_ = (char)(uVar16 >> 0x38);
                  iVar14 = (int)uStack_110._7_1_;
                  uStack_110 = uVar16;
                  func_0x000106e5e710(iVar14);
                  if (extraout_x9_06 == 1) {
                    uVar16 = uStack_138;
                    if (-1 < (long)uStack_130) {
                      uVar16 = uStack_130 >> 0x38;
                    }
                    if (uVar16 == 1) {
                      if (*(char *)((long)ppppppuVar10 + 0xa9) == '\x01') {
                        func_0x000106e5e51c();
                        pppppuVar19 = ppppppuVar10[3];
                        func_0x000106e5e398(pppppuVar19,*extraout_x8_09);
                        uVar9 = SUB84(pppppuVar19,0);
                        (*extraout_x8_10)();
                        func_0x000106e5e51c((long)uStack_110._7_1_);
                        *extraout_x8_11 = uVar9;
                        func_0x000106e5e4ec((long)uStack_130._7_1_);
                        pppppuVar19 = ppppppuVar10[3];
                        func_0x000106e5e398(pppppuVar19,*extraout_x8_12);
                        uVar9 = SUB84(pppppuVar19,0);
                        (*extraout_x8_13)();
                        func_0x000106e5e4ec((long)uStack_130._7_1_);
                        *extraout_x8_14 = uVar9;
                      }
                      uStack_c8 = uStack_118;
                      pppppuStack_d0 = pppppuStack_120;
                      uStack_c0 = uStack_110;
                      pppppuStack_120 = (uint *****)0x0;
                      uStack_118 = 0;
                      uStack_110 = 0;
                      uStack_b0 = uStack_138;
                      pppppuStack_b8 = pppppuStack_140;
                      uStack_a8 = uStack_130;
                      pppppuStack_140 = (undefined8 ******)0x0;
                      uStack_138 = 0;
                      uStack_130 = 0;
                      func_0x000106e5e93c();
                      func_0x000106e5e670();
                      goto LAB_106e5976c;
                    }
                  }
                  FUN_10688a9cc();
                  goto LAB_106e59834;
                }
                if (*(char *)((long)ppppppuVar10 + 0xa9) == '\x01') {
                  uVar16 = 0;
                  while( true ) {
                    func_0x000106e5e710((int)uStack_110._7_1_);
                    if (extraout_x9_05 <= uVar16) break;
                    func_0x000106e5e51c();
                    pppppuVar19 = ppppppuVar10[3];
                    func_0x000106e5e398(pppppuVar19,*(undefined4 *)(extraout_x8_06 + uVar16 * 4));
                    uVar9 = SUB84(pppppuVar19,0);
                    (*extraout_x8_07)();
                    func_0x000106e5e51c((long)uStack_110._7_1_);
                    *(undefined4 *)(extraout_x8_08 + uVar16 * 4) = uVar9;
                    uVar16 = uVar16 + 1;
                  }
                  uVar16 = 0;
                  while( true ) {
                    func_0x000106e5e710((int)uStack_130._7_1_);
                    if (extraout_x9_07 <= uVar16) break;
                    func_0x000106e5e4ec();
                    pppppuVar19 = ppppppuVar10[3];
                    func_0x000106e5e398(pppppuVar19,*(undefined4 *)(extraout_x8_15 + uVar16 * 4));
                    uVar9 = SUB84(pppppuVar19,0);
                    (*extraout_x8_16)();
                    func_0x000106e5e4ec((long)uStack_130._7_1_);
                    *(undefined4 *)(extraout_x8_17 + uVar16 * 4) = uVar9;
                    uVar16 = uVar16 + 1;
                  }
                }
                uVar16 = uStack_118;
                ppppppuVar12 = (uint ******)pppppuStack_120;
                if (-1 < (long)uStack_110) {
                  uVar16 = uStack_110 >> 0x38;
                  ppppppuVar12 = &pppppuStack_120;
                }
                FUN_106e5b764(&pppppuStack_e8,ppppppuVar10 + 2,ppppppuVar12,
                              (int *)((long)ppppppuVar12 + uVar16 * 4));
                uVar16 = uStack_138;
                ppppppuVar2 = (undefined8 ******)pppppuStack_140;
                if (-1 < (long)uStack_130) {
                  uVar16 = uStack_130 >> 0x38;
                  ppppppuVar2 = &pppppuStack_140;
                }
                FUN_106e5b764(&pppppuStack_88,ppppppuVar10 + 2,ppppppuVar2,
                              (undefined4 *)((long)ppppppuVar2 + uVar16 * 4));
                uStack_c8 = uStack_e0;
                pppppuStack_d0 = pppppuStack_e8;
                uStack_c0 = uStack_d8;
                uStack_e0 = 0;
                uStack_d8 = 0;
                pppppuStack_e8 = (uint *****)0x0;
                uStack_b0 = uStack_80;
                pppppuStack_b8 = pppppuStack_88;
                uStack_a8 = uStack_78;
                pppppuStack_88 = (undefined8 ******)0x0;
                uStack_80 = 0;
                uStack_78 = 0;
                func_0x000106e5e93c();
                func_0x000106e5e670();
                func_0x000106e5e998();
                func_0x000106e5e3a4();
LAB_106e5976c:
                func_0x000106e5e8f0();
                __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev
                          (&pppppuStack_120);
                __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev
                          (&pppppuStack_a0);
                ppppppuVar12 = ppppppuVar11;
              }
            }
            else {
              iVar14 = *(int *)((long)ppppppuVar18 + 4);
              if (iVar14 == 0x2e) {
                func_0x000106e5e6d4();
                FUN_106e5af18();
                uVar16 = uStack_f0 >> 0x38;
                ppppppuVar12 = ppppppuVar11;
                goto LAB_106e591dc;
              }
              if (iVar14 == 0x3a) {
                pppppuStack_88 = (undefined8 ******)0x5d0000003a;
                ppppppuVar12 = ppppppuVar18 + 1;
                FUN_106e5b5f0(ppppppuVar12,param_3,&pppppuStack_88,&uStack_80);
                if (ppppppuVar12 == param_3) goto LAB_106e59810;
                uVar8 = *(uint *)(param_1 + 3);
                func_0x000106e5b668(&pppppuStack_d0,ppppppuVar18 + 1,ppppppuVar12);
                pppppuVar19 = param_1[1];
                func_0x000106e5e48c();
                (*(code *)(*pppppuVar19)[10])();
                pppppuStack_e8 = (uint *****)0x0;
                uStack_e0 = 0;
                uStack_d8 = 0;
                cVar6 = (long)uStack_c0 < 0;
                cVar5 = '\0';
                uVar16 = uStack_c8;
                if (!(bool)cVar6) {
                  uVar16 = uStack_c0 >> 0x38;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                          (&pppppuStack_e8,uVar16);
                func_0x000106e5e48c();
                lVar20 = extraout_x11;
                ppppppuVar11 = extraout_x10;
                if (cVar6 == cVar5) {
                  lVar20 = extraout_x8_00;
                  ppppppuVar11 = &pppppuStack_d0;
                }
                for (lVar20 = lVar20 << 2; lVar20 != 0; lVar20 = lVar20 + -4) {
                  uVar15 = *(uint *)ppppppuVar11;
                  cVar5 = SBORROW4(uVar15,0x7e);
                  cVar6 = (int)(uVar15 - 0x7e) < 0;
                  if (0x7e < uVar15) {
                    uVar8 = 0;
                    goto LAB_106e59258;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (&pppppuStack_e8);
                  ppppppuVar11 = (uint ******)((long)ppppppuVar11 + 4);
                }
                uStack_d8._7_1_ = (char)(uStack_d8 >> 0x38);
                lVar20 = (long)uStack_d8._7_1_;
                func_0x000106e5e72c(lVar20);
                uVar13 = extraout_x9;
                if (cVar6 == cVar5) {
                  uVar13 = extraout_x8_01;
                }
                __ZNSt3__115__get_classnameEPKcb(uVar13,uVar8 & 1);
                uVar8 = (uint)uVar13;
LAB_106e59258:
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                          (&pppppuStack_e8);
                __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev
                          (&pppppuStack_d0);
                if (uVar8 == 0) {
                  FUN_10688a878();
                  goto LAB_106e59834;
                }
                *(uint *)(ppppppuVar10 + 0x14) = *(uint *)(ppppppuVar10 + 0x14) | uVar8;
                ppppppuVar12 = ppppppuVar12 + 1;
              }
              else {
                if (iVar14 != 0x3d) {
                  uVar16 = 0;
                  goto LAB_106e591dc;
                }
                pppppuStack_a0 = (undefined8 *****)0x5d0000003d;
                ppppppuVar11 = ppppppuVar18 + 1;
                FUN_106e5b5f0(ppppppuVar11,param_3,&pppppuStack_a0,&uStack_98);
                cVar5 = SBORROW8((long)ppppppuVar11,(long)param_3);
                cVar6 = (long)ppppppuVar11 - (long)param_3 < 0;
                if (ppppppuVar11 == param_3) goto LAB_106e59810;
                FUN_106e5b414(&pppppuStack_e8,param_1,ppppppuVar18 + 1,ppppppuVar11);
                if ((long)uStack_d8._7_1_ < 0) {
                  ppppppuVar12 = (uint ******)pppppuStack_e8;
                  uVar16 = uStack_e0;
                  if (uStack_e0 == 0) goto LAB_106e59818;
                }
                else {
                  if (uStack_d8._7_1_ == '\0') {
LAB_106e59818:
                    FUN_10688a5a4();
                    goto LAB_106e59834;
                  }
                  ppppppuVar12 = &pppppuStack_e8;
                  uVar16 = (long)uStack_d8._7_1_;
                }
                FUN_106e5b6f8(&pppppuStack_d0,ppppppuVar12,(int *)((long)ppppppuVar12 + uVar16 * 4))
                ;
                func_0x000106e5e48c(param_1[2]);
                uVar13 = extraout_x11_00;
                if (cVar6 == cVar5) {
                  uVar13 = extraout_x8_02;
                }
                func_0x000106e5e238(uVar13);
                (*extraout_x9_00)(&pppppuStack_88);
                func_0x000106e5e710((int)uStack_78._7_1_);
                if (extraout_x9_01 != 1) {
                  if (extraout_x9_01 == 3) {
                    ppppppuVar2 = (undefined8 ******)pppppuStack_88;
                    if (-1 < extraout_w8) {
                      ppppppuVar2 = &pppppuStack_88;
                    }
                    *(undefined4 *)(ppppppuVar2 + 1) = *(undefined4 *)ppppppuVar2;
                  }
                  else if (extraout_w8 < 0) {
                    *(undefined4 *)pppppuStack_88 = 0;
                    uStack_80 = 0;
                  }
                  else {
                    pppppuStack_88 = (undefined8 *****)((ulong)pppppuStack_88 & 0xffffffff00000000);
                    uStack_78 = uStack_78 & 0xffffffffffffff;
                  }
                }
                __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev
                          (&pppppuStack_d0);
                func_0x000106e5e9d4(uStack_78._7_1_);
                if (extraout_x8_03 == 0) {
                  func_0x000106e5e710((int)uStack_d8._7_1_);
                  cVar5 = SBORROW8(extraout_x9_02,2);
                  cVar6 = extraout_x9_02 + -2 < 0;
                  if (extraout_x9_02 == 2) {
                    func_0x000106e5e72c();
                    puVar3 = extraout_x9_04;
                    if (cVar6 == cVar5) {
                      puVar3 = extraout_x8_05;
                    }
                    FUN_106e5b3ac(ppppppuVar10,*puVar3,puVar3[1]);
                  }
                  else {
                    cVar5 = SBORROW8(extraout_x9_02,1);
                    cVar6 = extraout_x9_02 + -1 < 0;
                    if (extraout_x9_02 != 1) {
                      FUN_10688a5a4();
                      goto LAB_106e59834;
                    }
                    func_0x000106e5e72c();
                    puVar3 = extraout_x9_03;
                    if (cVar6 == cVar5) {
                      puVar3 = extraout_x8_04;
                    }
                    FUN_106e5a2fc(ppppppuVar10,*puVar3);
                  }
                }
                else {
                  pppppuVar19 = ppppppuVar10[0x12];
                  if (pppppuVar19 < ppppppuVar10[0x13]) {
                    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                              (pppppuVar19,&pppppuStack_88);
                    pppppuVar19 = pppppuVar19 + 3;
                    ppppppuVar10[0x12] = pppppuVar19;
                  }
                  else {
                    ppppppuVar12 = ppppppuVar10 + 0x11;
                    FUN_106e56f34(ppppppuVar12,
                                  ((long)pppppuVar19 - (long)ppppppuVar10[0x11]) / 0x18 + 1);
                    FUN_106e56fa4(&pppppuStack_d0,ppppppuVar12,
                                  ((long)ppppppuVar10[0x12] - (long)ppppppuVar10[0x11]) / 0x18,
                                  ppppppuVar10 + 0x13);
                    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_
                              (uStack_c0,&pppppuStack_88);
                    uStack_c0 = uStack_c0 + 0x18;
                    FUN_106e56f54(ppppppuVar10 + 0x11,&pppppuStack_d0);
                    pppppuVar19 = ppppppuVar10[0x12];
                    FUN_106e57008(&pppppuStack_d0);
                  }
                  ppppppuVar10[0x12] = pppppuVar19;
                }
                func_0x000106e5e998();
                func_0x000106e5e3a4();
                ppppppuVar12 = ppppppuVar11 + 1;
              }
            }
            ppppppuVar11 = &pppppuStack_100;
            __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev();
          } while (ppppppuVar12 != ppppppuVar18);
        }
        if (ppppppuVar18 != param_3) {
          if (*(int *)ppppppuVar18 == 0x2d) {
            FUN_106e5a2fc(ppppppuVar10,0x2d);
            ppppppuVar18 = (uint ******)((long)ppppppuVar18 + 4);
          }
          if ((ppppppuVar18 != param_3) && (*(int *)ppppppuVar18 == 0x5d)) {
            param_2 = (uint ******)((long)ppppppuVar18 + 4);
            bVar7 = true;
            goto LAB_106e597d8;
          }
        }
      }
    }
    FUN_106889864();
  }
  ___stack_chk_fail();
LAB_106e59810:
  FUN_106889864();
LAB_106e59834:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x106e59838);
  (*pcVar4)();
}



/* Entry: 106e59914; end: 106e599a7;  */

void FUN_106e59914(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
    func_0x000106e5e2e4();
    iVar1 = *(int *)(unaff_x19 + 0x1c) + 1;
    *(int *)(unaff_x19 + 0x1c) = iVar1;
    lVar2 = *(long *)(unaff_x19 + 0x38);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    *param_1 = &PTR_FUN_1109808a8;
    param_1[1] = uVar3;
    *(int *)(param_1 + 2) = iVar1;
    *(undefined8 **)(lVar2 + 8) = param_1;
    *(undefined8 **)(unaff_x19 + 0x38) = param_1;
  }
  return;
}



/* Entry: 106e599a8; end: 106e599ab;  */

undefined8 * FUN_106e599a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e599ac; end: 106e599bf;  */

void FUN_106e599ac(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e599c0; end: 106e59c9b;  */

uint * FUN_106e599c0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar7;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar5 = *param_2;
  iVar1 = 0;
  puVar3 = param_1;
  puVar6 = param_2;
  switch(uVar5) {
  case 0x6e:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar7 = 10;
code_r0x000106e59c68:
      *(undefined8 *)param_4 = uVar7;
      goto LAB_106e59c6c;
    }
    uVar5 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
LAB_106e59a58:
    puVar3 = *(uint **)(param_1 + 2);
    func_0x000106e5e2d4();
    if (((ulong)puVar3 & 1) != 0) goto LAB_106e59c98;
    uVar5 = *param_2;
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      *param_4 = uVar5;
      param_4[1] = 0;
      goto LAB_106e59c6c;
    }
    break;
  case 0x72:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar7 = 0xd;
      goto code_r0x000106e59c68;
    }
    uVar5 = 0xd;
    break;
  case 0x74:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar7 = 9;
      goto code_r0x000106e59c68;
    }
    uVar5 = 9;
    break;
  case 0x75:
    if (param_2 + 1 != param_3) {
      func_0x000106e5e294();
      iVar1 = (int)puVar3;
      if ((iVar1 != -1) && (param_2 = param_2 + 2, param_2 != param_3)) {
        puVar6 = (uint *)(ulong)*param_2;
        puVar3 = *(uint **)(param_1 + 2);
        FUN_106e5aeac(puVar3,puVar6,0x10);
        if ((int)puVar3 != -1) {
          iVar1 = iVar1 * 0x100 + (int)puVar3 * 0x10;
          goto code_r0x000106e59ac4;
        }
      }
    }
    goto LAB_106e59c98;
  case 0x76:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar7 = 0xb;
      goto code_r0x000106e59c68;
    }
    uVar5 = 0xb;
    break;
  case 0x78:
code_r0x000106e59ac4:
    if (param_2 + 1 != param_3) {
      func_0x000106e5e294();
      iVar2 = (int)puVar3;
      if ((iVar2 != -1) && (param_2 + 2 != param_3)) {
        func_0x000106e5e294();
        if ((int)puVar3 != -1) {
          uVar5 = (int)puVar3 + (iVar2 + iVar1) * 0x10;
          if (param_4 == (uint *)0x0) {
            func_0x000106e5e960();
          }
          else {
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              func_0x000106e5e130();
            }
            else {
              func_0x000106e5e4e0();
            }
            *param_4 = uVar5;
            param_4[1] = 0;
          }
          return param_2 + 3;
        }
      }
    }
LAB_106e59c98:
    uVar5 = (uint)puVar6;
    FUN_106888a18();
    puVar6 = puVar3;
    if ((puVar3[6] & 1) == 0) {
      if ((puVar3[6] >> 3 & 1) == 0) {
        func_0x000106e5e3d0();
        puVar4 = puVar6;
        func_0x000106e5ea64();
        *(undefined ***)puVar4 = &PTR_FUN_110980740;
        *(undefined8 *)(puVar4 + 2) = extraout_x9;
        puVar4[4] = uVar5;
        *(uint **)(extraout_x8 + 8) = puVar4;
        goto LAB_106e59d34;
      }
      func_0x000106e5e5bc();
      puVar4 = puVar6;
      func_0x000106e5e85c();
      func_0x000106e5e4c4();
      puVar6[10] = uVar5;
    }
    else {
      func_0x000106e5e5bc();
      func_0x000106e5e85c();
      func_0x000106e5e4c4();
      puVar4 = *(uint **)(puVar3 + 2);
      func_0x000106e5e398();
      func_0x000106e5e668();
      puVar6[10] = (uint)puVar4;
    }
    *(uint **)(*(long *)(puVar3 + 0xe) + 8) = puVar6;
LAB_106e59d34:
    *(uint **)(puVar3 + 0xe) = puVar6;
    return puVar4;
  default:
    if (uVar5 == 0x30) {
      if (param_4 != (uint *)0x0) {
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e130();
        }
        else {
          func_0x000106e5e4e0();
        }
        param_4[0] = 0;
        param_4[1] = 0;
        goto LAB_106e59c6c;
      }
      uVar5 = 0;
    }
    else {
      if (uVar5 == 99) {
        if ((param_2 + 1 != param_3) && (uVar5 = param_2[1], (uVar5 & 0xffffffdf) - 0x41 < 0x1a)) {
          uVar5 = uVar5 & 0x1f;
          if (param_4 == (uint *)0x0) {
            func_0x000106e5e960();
          }
          else {
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              func_0x000106e5e130();
            }
            else {
              func_0x000106e5e4e0();
            }
            *param_4 = uVar5;
            param_4[1] = 0;
          }
          return param_2 + 2;
        }
        goto LAB_106e59c98;
      }
      if (uVar5 != 0x66) goto LAB_106e59a58;
      if (param_4 != (uint *)0x0) {
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e130();
        }
        else {
          func_0x000106e5e4e0();
        }
        uVar7 = 0xc;
        goto code_r0x000106e59c68;
      }
      uVar5 = 0xc;
    }
  }
  FUN_106e59c9c(param_1,uVar5);
LAB_106e59c6c:
  return param_2 + 1;
}



/* Entry: 106e59c9c; end: 106e59d5b;  */

void FUN_106e59c9c(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 extraout_x9;
  
  puVar3 = param_1;
  if ((*(uint *)(param_1 + 3) & 1) == 0) {
    if ((*(uint *)(param_1 + 3) >> 3 & 1) == 0) {
      func_0x000106e5e3d0();
      puVar2 = puVar3;
      func_0x000106e5ea64();
      *puVar2 = &PTR_FUN_110980740;
      puVar2[1] = extraout_x9;
      *(undefined4 *)(puVar2 + 2) = param_2;
      *(undefined8 **)(extraout_x8 + 8) = puVar2;
      goto LAB_106e59d34;
    }
    func_0x000106e5e5bc();
    func_0x000106e5e85c();
    func_0x000106e5e4c4();
    *(undefined4 *)(puVar3 + 5) = param_2;
  }
  else {
    func_0x000106e5e5bc();
    func_0x000106e5e85c();
    func_0x000106e5e4c4();
    uVar1 = (undefined4)param_1[1];
    func_0x000106e5e398();
    func_0x000106e5e668();
    *(undefined4 *)(puVar3 + 5) = uVar1;
  }
  *(undefined8 **)(param_1[7] + 8) = puVar3;
LAB_106e59d34:
  param_1[7] = puVar3;
  return;
}



/* Entry: 106e59d5c; end: 106e59deb;  */

void FUN_106e59d5c(undefined8 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 extraout_x9;
  
  puVar2 = param_1;
  if ((*(uint *)(param_1 + 3) & 1) == 0) {
    if ((*(uint *)(param_1 + 3) >> 3 & 1) == 0) {
      func_0x000106e5e3d0();
      puVar1 = puVar2;
      func_0x000106e5ea64();
      *puVar1 = &PTR_FUN_110980818;
      puVar1[1] = extraout_x9;
      *(undefined4 *)(puVar1 + 2) = param_2;
      *(undefined8 **)(extraout_x8 + 8) = puVar1;
      goto LAB_106e59de0;
    }
    func_0x000106e5e5bc();
    func_0x000106e5e85c();
  }
  else {
    func_0x000106e5e5bc();
    func_0x000106e5e85c();
  }
  func_0x000106e5e4c4();
  *(undefined4 *)(puVar2 + 5) = param_2;
  *(undefined8 **)(param_1[7] + 8) = puVar2;
LAB_106e59de0:
  param_1[7] = puVar2;
  return;
}



/* Entry: 106e59dec; end: 106e59def;  */

undefined8 * FUN_106e59dec(undefined8 *param_1)

{
  func_0x000106e5e5b4(&PTR_FUN_1109806b0);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e59df0; end: 106e59e03;  */

void FUN_106e59df0(void)

{
  func_0x000106e59e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e59e04; end: 106e59e8b;  */

void FUN_106e59e04(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  if (*(undefined4 **)(param_2 + 4) != *(undefined4 **)(param_2 + 6)) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x000106e5e210(uVar1,**(undefined4 **)(param_2 + 4));
    if ((int)uVar1 == *(int *)(param_1 + 0x28)) {
      *param_2 = 0xfffffc1d;
      func_0x000106e5e9e0(*(long *)(param_2 + 4) + 4);
      uVar1 = extraout_x8;
      goto LAB_106e59e58;
    }
  }
  func_0x000106e5e74c();
  uVar1 = extraout_x8_00;
LAB_106e59e58:
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}



/* Entry: 106e59e8c; end: 106e59e8f;  */

undefined8 * FUN_106e59e8c(undefined8 *param_1)

{
  func_0x000106e5e5b4(&PTR_FUN_1109806f8);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e59e90; end: 106e59ea3;  */

void FUN_106e59e90(void)

{
  FUN_106e59ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e59ea4; end: 106e59ee3;  */

void FUN_106e59ea4(long param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_2 + 4);
  if ((piVar1 == *(int **)(param_2 + 6)) || (*piVar1 != *(int *)(param_1 + 0x28))) {
    uVar2 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    *param_2 = 0xfffffc1d;
    *(int **)(param_2 + 4) = piVar1 + 1;
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_2 + 0x14) = uVar2;
  return;
}



/* Entry: 106e59ee4; end: 106e59f0b;  */

undefined8 * FUN_106e59ee4(undefined8 *param_1)

{
  func_0x000106e5e5b4(&PTR_FUN_1109806f8);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e59f0c; end: 106e59f0f;  */

undefined8 * FUN_106e59f0c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e59f10; end: 106e59f23;  */

void FUN_106e59f10(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e59f24; end: 106e59f67;  */

void FUN_106e59f24(long param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_2 + 4);
  if ((piVar1 == *(int **)(param_2 + 6)) || (*piVar1 != *(int *)(param_1 + 0x10))) {
    uVar2 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    *param_2 = 0xfffffc1d;
    *(int **)(param_2 + 4) = piVar1 + 1;
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_2 + 0x14) = uVar2;
  return;
}



/* Entry: 106e59f68; end: 106e59f7b;  */

void FUN_106e59f68(void)

{
  FUN_106e5a044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e59f7c; end: 106e5a043;  */

void FUN_106e59f7c(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  plVar3 = (long *)(*(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x28) - 1) * 0x18);
  if (((char)plVar3[2] == '\x01') &&
     (uVar4 = plVar3[1] - *plVar3, (long)uVar4 <= *(long *)(param_2 + 6) - *(long *)(param_2 + 4)))
  {
    lVar5 = 0;
    do {
      if ((uVar4 >> 2 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) * 4 - lVar5 == 0) {
        *param_2 = 0xfffffc1e;
        func_0x000106e5e9e0(*(long *)(param_2 + 4) + uVar4);
        uVar1 = extraout_x8_00;
        goto LAB_106e5a020;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x000106e5e210(uVar1,*(undefined4 *)(*plVar3 + lVar5));
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x000106e5e210(uVar2,*(undefined4 *)(*(long *)(param_2 + 4) + lVar5));
      lVar5 = lVar5 + 4;
    } while ((int)uVar1 == (int)uVar2);
  }
  func_0x000106e5e74c();
  uVar1 = extraout_x8;
LAB_106e5a020:
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}



/* Entry: 106e5a044; end: 106e5a06b;  */

undefined8 * FUN_106e5a044(undefined8 *param_1)

{
  func_0x000106e5e5b4(&PTR_DAT_110980788);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5a06c; end: 106e5a06f;  */

undefined8 * FUN_106e5a06c(undefined8 *param_1)

{
  func_0x000106e5e5b4(&PTR_FUN_1109807d0);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5a070; end: 106e5a083;  */

void FUN_106e5a070(void)

{
  FUN_106e5a108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5a084; end: 106e5a107;  */

void FUN_106e5a084(long param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  
  plVar4 = (long *)(*(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x28) - 1) * 0x18);
  if ((char)plVar4[2] == '\x01') {
    lVar5 = plVar4[1] - *plVar4;
    piVar1 = *(int **)(param_2 + 4);
    if (lVar5 <= *(long *)(param_2 + 6) - (long)piVar1) {
      uVar8 = lVar5 >> 2 & (lVar5 >> 0x3f ^ 0xffffffffffffffffU);
      piVar7 = (int *)*plVar4;
      piVar9 = piVar1;
      do {
        if (uVar8 == 0) {
          *param_2 = 0xfffffc1e;
          *(long *)(param_2 + 4) = (long)piVar1 + lVar5;
          uVar6 = *(undefined8 *)(param_1 + 8);
          goto LAB_106e5a0ec;
        }
        iVar2 = *piVar7;
        iVar3 = *piVar9;
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar2 == iVar3);
    }
  }
  uVar6 = 0;
  *param_2 = 0xfffffc1f;
LAB_106e5a0ec:
  *(undefined8 *)(param_2 + 0x14) = uVar6;
  return;
}



/* Entry: 106e5a108; end: 106e5a12f;  */

undefined8 * FUN_106e5a108(undefined8 *param_1)

{
  func_0x000106e5e5b4(&PTR_FUN_1109807d0);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5a130; end: 106e5a133;  */

undefined8 * FUN_106e5a130(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5a134; end: 106e5a147;  */

void FUN_106e5a134(void)

{
  FUN_106e57698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5a148; end: 106e5a1db;  */

long FUN_106e5a148(long param_1,undefined4 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  if ((ulong)((*(long *)(param_2 + 10) - *(long *)(param_2 + 8)) / 0x18) <
      (ulong)*(uint *)(param_1 + 0x10)) {
    FUN_106888e94();
    lVar2 = 0xb0;
    __Znwm();
    bVar1 = *(byte *)(param_1 + 0x18);
    func_0x000106e5e904(*(undefined8 *)(*(long *)(param_1 + 0x38) + 8));
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(char *)(lVar2 + 0xa8) = (char)param_2;
    *(byte *)(lVar2 + 0xa9) = bVar1 & 1;
    *(byte *)(lVar2 + 0xaa) = bVar1 >> 3 & 1;
    __ZNSt3__16localeC1ERKS0_(auStack_90,lVar2 + 0x10);
    __ZNKSt3__16locale4nameEv(auStack_88,auStack_90);
    puVar3 = auStack_88;
    func_0x000100152bb8(puVar3,&DAT_10f31a1fb);
    func_0x000106e5e698();
    __ZNSt3__16localeD1Ev(auStack_90);
    *(byte *)(lVar2 + 0xab) = (byte)puVar3 ^ 1;
    *(long *)(*(long *)(param_1 + 0x38) + 8) = lVar2;
    *(long *)(param_1 + 0x38) = lVar2;
    return lVar2;
  }
  plVar4 = (long *)(*(long *)(param_2 + 8) + (ulong)(*(uint *)(param_1 + 0x10) - 1) * 0x18);
  if ((char)plVar4[2] == '\x01') {
    param_1 = *plVar4;
    lVar6 = plVar4[1] - param_1;
    lVar2 = *(long *)(param_2 + 4);
    if (lVar6 <= *(long *)(param_2 + 6) - lVar2) {
      func_0x000106e5e844();
      _memcmp();
      if ((int)param_1 == 0) {
        *param_2 = 0xfffffc1e;
        func_0x000106e5e9e0(lVar2 + lVar6);
        uVar5 = extraout_x8_00;
        goto LAB_106e5a1b8;
      }
    }
  }
  func_0x000106e5e74c();
  uVar5 = extraout_x8;
LAB_106e5a1b8:
  *(undefined8 *)(param_2 + 0x14) = uVar5;
  return param_1;
}



/* Entry: 106e5a1dc; end: 106e5a2fb;  */

long FUN_106e5a1dc(long param_1,undefined1 param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0xb0;
  __Znwm();
  bVar1 = *(byte *)(param_1 + 0x18);
  func_0x000106e5e904(*(undefined8 *)(*(long *)(param_1 + 0x38) + 8));
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined1 *)(lVar2 + 0xa8) = param_2;
  *(byte *)(lVar2 + 0xa9) = bVar1 & 1;
  *(byte *)(lVar2 + 0xaa) = bVar1 >> 3 & 1;
  __ZNSt3__16localeC1ERKS0_(auStack_60,lVar2 + 0x10);
  __ZNKSt3__16locale4nameEv(auStack_58,auStack_60);
  puVar3 = auStack_58;
  func_0x000100152bb8(puVar3,&DAT_10f31a1fb);
  func_0x000106e5e698();
  __ZNSt3__16localeD1Ev(auStack_60);
  *(byte *)(lVar2 + 0xab) = (byte)puVar3 ^ 1;
  *(long *)(*(long *)(param_1 + 0x38) + 8) = lVar2;
  *(long *)(param_1 + 0x38) = lVar2;
  return lVar2;
}



/* Entry: 106e5a2fc; end: 106e5a353;  */

void FUN_106e5a2fc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x22;
  
  uVar1 = *(char *)(param_1 + 0xa9) != '\0';
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    param_2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000106e5e210(param_2);
  }
  else {
    uVar1 = *(char *)(param_1 + 0xaa) != '\0';
    if (*(char *)(param_1 + 0xaa) != '\x01') {
      func_0x000106e5e64c(param_1 + 0x28);
      if ((bool)uVar1) {
        func_0x000106e5e474();
        func_0x000106e5e3f0();
        func_0x000106e5e4a0();
        func_0x000106e5e930();
      }
      else {
        *unaff_x22 = unaff_w20;
        unaff_x22 = unaff_x22 + 1;
      }
      *(undefined4 **)(unaff_x19 + 8) = unaff_x22;
      return;
    }
  }
  func_0x000106e5e64c(param_1 + 0x28,param_2);
  if ((bool)uVar1) {
    func_0x000106e5e474();
    func_0x000106e5e3f0();
    func_0x000106e5e4a0();
    func_0x000106e5e930();
  }
  else {
    *unaff_x22 = unaff_w20;
    unaff_x22 = unaff_x22 + 1;
  }
  *(undefined4 **)(unaff_x19 + 8) = unaff_x22;
  return;
}



/* Entry: 106e5a354; end: 106e5a357;  */

undefined8 * FUN_106e5a354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110980860;
  func_0x000106e52d08(param_1 + 0x11);
  FUN_106e5a92c(param_1 + 0xe);
  func_0x000106e5a950(param_1 + 0xb);
  func_0x000106e5a9c0(param_1 + 8);
  func_0x000106e5a9c0(param_1 + 5);
  __ZNSt3__16localeD1Ev(param_1 + 2);
  *param_1 = &PTR_DAT_110980518;
  if (param_1[1] != 0) {
    func_0x000106e5e9b0();
  }
  return param_1;
}



/* Entry: 106e5a358; end: 106e5a36b;  */

void FUN_106e5a358(void)

{
  func_0x000106e5a9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106e5a36c; end: 106e5a92b;  */

void FUN_106e5a36c(undefined8 ****param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  uint ****ppppuVar6;
  long extraout_x8;
  int *piVar7;
  undefined8 uVar8;
  undefined8 extraout_x8_00;
  undefined4 uVar9;
  long lVar10;
  code *extraout_x9;
  undefined4 *unaff_x19;
  long unaff_x20;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [24];
  undefined8 ***pppuStack_80;
  long lStack_78;
  undefined8 uStack_70;
  uint ***pppuStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte bStack_51;
  
  func_0x000106e5e578();
  piVar7 = *(int **)(param_2 + 0x10);
  if (piVar7 == *(int **)(param_2 + 0x18)) {
    lVar13 = 0;
    uVar12 = (uint)*(byte *)(unaff_x20 + 0xa8);
    goto LAB_106e5a884;
  }
  if ((*(char *)(unaff_x20 + 0xab) == '\x01') && (piVar7 + 1 != *(int **)(param_2 + 0x18))) {
    iStack_a0 = *piVar7;
    iStack_9c = piVar7[1];
    if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
      iVar4 = (int)*(undefined8 *)(unaff_x20 + 0x18);
      func_0x000106e5e210();
      iStack_a0 = iVar4;
      func_0x000106e5e248();
      func_0x000106e5e668();
      iStack_9c = iVar4;
    }
    bStack_51 = 2;
    pppuStack_68 = (uint ***)CONCAT44(iStack_9c,iStack_a0);
    uStack_70 = 0;
    uStack_60 = 0;
    pppuStack_80 = (undefined8 ****)0x0;
    lStack_78 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&pppuStack_80,2);
    uVar11 = CONCAT44(uStack_5c,uStack_60);
    ppppuVar6 = (uint ****)pppuStack_68;
    if (-1 < (char)bStack_51) {
      uVar11 = (ulong)bStack_51;
      ppppuVar6 = &pppuStack_68;
    }
    for (lVar13 = uVar11 << 2; lVar13 != 0; lVar13 = lVar13 + -4) {
      if (0x7e < *(uint *)ppppuVar6) {
        puStack_b8 = (undefined4 *)0x0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        goto LAB_106e5a4d4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&pppuStack_80);
      ppppuVar6 = (uint ****)((long)ppppuVar6 + 4);
    }
    puStack_b8 = (undefined4 *)0x0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x000106e5e9d4(bStack_51);
    if (extraout_x8 != 0) {
      ppppuVar5 = (undefined8 ****)pppuStack_80;
      if (-1 < uStack_70) {
        ppppuVar5 = &pppuStack_80;
      }
      __ZNSt3__120__get_collation_nameEPKc(auStack_98,ppppuVar5);
      func_0x000100066230(&pppuStack_80,auStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      if ((long)uStack_70._7_1_ < 0) {
        ppppuVar5 = (undefined8 ****)pppuStack_80;
        lVar13 = lStack_78;
        if (lStack_78 != 0) goto LAB_106e5a4c8;
      }
      else if (uStack_70._7_1_ != '\0') {
        ppppuVar5 = &pppuStack_80;
        lVar13 = (long)uStack_70._7_1_;
LAB_106e5a4c8:
        FUN_106e5ab84(&puStack_b8,ppppuVar5,(long)ppppuVar5 + lVar13);
        goto LAB_106e5a4d4;
      }
      if ((char)bStack_51 < '\0') {
        ppppuVar6 = (uint ****)pppuStack_68;
        if (CONCAT44(uStack_5c,uStack_60) < 3) goto LAB_106e5a784;
      }
      else if (bStack_51 < 3) {
        ppppuVar6 = &pppuStack_68;
LAB_106e5a784:
        func_0x000106e5e238(*(undefined8 *)(unaff_x20 + 0x20),ppppuVar6);
        (*extraout_x9)(auStack_98);
        func_0x000106e5acac(&puStack_b8,auStack_98);
        __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(auStack_98);
        if ((long)uStack_a8 < 0) {
          if ((uStack_b0 | 2) == 3) goto LAB_106e5a8e4;
          *puStack_b8 = 0;
          uStack_b0 = 0;
        }
        else if ((uStack_a8._7_1_ & 0x7d) == 1) {
LAB_106e5a8e4:
          __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSERKS5_
                    (&puStack_b8,&pppuStack_68);
        }
        else {
          puStack_b8 = (undefined4 *)((ulong)puStack_b8 & 0xffffffff00000000);
          uStack_a8 = uStack_a8 & 0xffffffffffffff;
        }
      }
    }
LAB_106e5a4d4:
    param_1 = &pppuStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000106e5e3a4();
    uVar11 = uStack_b0;
    if (-1 < (long)uStack_a8) {
      uVar11 = uStack_a8 >> 0x38;
    }
    func_0x000106e5e2ac();
    if (uVar11 != 0) {
      piVar7 = (int *)(*(long *)(unaff_x20 + 0x70) + 4);
      lVar13 = (*(long *)(unaff_x20 + 0x78) - *(long *)(unaff_x20 + 0x70) >> 3) + 1;
      do {
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) {
          if ((*(char *)(unaff_x20 + 0xaa) != '\x01') ||
             (*(long *)(unaff_x20 + 0x58) == *(long *)(unaff_x20 + 0x60))) goto LAB_106e5a7dc;
          func_0x000106e5ea00();
          FUN_106e5aa40();
          lVar13 = 0;
          uVar11 = 0;
          goto LAB_106e5a624;
        }
        piVar1 = piVar7 + -1;
        iVar4 = *piVar7;
        piVar7 = piVar7 + 2;
      } while (iStack_a0 != *piVar1 || iStack_9c != iVar4);
      goto LAB_106e5a530;
    }
  }
  uVar12 = 0;
  lVar13 = 1;
  goto LAB_106e5a540;
LAB_106e5a624:
  uVar2 = (*(long *)(unaff_x20 + 0x60) - *(long *)(unaff_x20 + 0x58)) / 0x30;
  if (uVar2 <= uVar11) goto LAB_106e5a76c;
  param_1 = (undefined8 ****)(*(long *)(unaff_x20 + 0x58) + lVar13);
  FUN_106e5aa8c(param_1,&pppuStack_68);
  if (((char)param_1 < '\x01') &&
     (func_0x000106e5e8d8(*(long *)(unaff_x20 + 0x58) + lVar13), (char)param_1 < '\x01')) {
    iVar4 = 5;
    goto LAB_106e5a7d0;
  }
  uVar11 = uVar11 + 1;
  lVar13 = lVar13 + 0x30;
  goto LAB_106e5a624;
LAB_106e5a68c:
  uVar2 = (*(long *)(unaff_x20 + 0x60) - *(long *)(unaff_x20 + 0x58)) / 0x30;
  if (uVar2 <= uVar11) goto LAB_106e5a6e0;
  param_1 = (undefined8 ****)(*(long *)(unaff_x20 + 0x58) + lVar10);
  FUN_106e5aa8c(param_1,&pppuStack_68);
  if (((char)param_1 < '\x01') &&
     (func_0x000106e5e8d8(*(long *)(unaff_x20 + 0x58) + lVar10), (char)param_1 < '\x01')) {
    uVar12 = 1;
    goto LAB_106e5a6e0;
  }
  uVar11 = uVar11 + 1;
  lVar10 = lVar10 + 0x30;
  goto LAB_106e5a68c;
LAB_106e5a6e0:
  func_0x000106e5e3a4();
  if (uVar2 <= uVar11) {
LAB_106e5a6ec:
    uVar3 = (uint)param_1;
    if (*(long *)(unaff_x20 + 0x88) != *(long *)(unaff_x20 + 0x90)) {
      func_0x000106e5e7cc();
      FUN_106e5ab00();
      uVar11 = 0xffffffffffffffff;
      lVar10 = 0;
      do {
        uVar3 = (uint)param_1;
        uVar2 = (*(long *)(unaff_x20 + 0x90) - *(long *)(unaff_x20 + 0x88)) / 0x18;
        uVar11 = uVar11 + 1;
        if (uVar2 <= uVar11) goto LAB_106e5a738;
        func_0x000106e5e8cc(lVar10);
        uVar3 = (uint)param_1;
        lVar10 = lVar10 + 0x18;
      } while (uVar3 == 0);
      uVar12 = 1;
LAB_106e5a738:
      func_0x000106e5e3a4();
      if (uVar11 < uVar2) goto LAB_106e5a884;
    }
    func_0x000106e5e468();
    uVar12 = uVar12 | uVar3;
  }
  goto LAB_106e5a884;
LAB_106e5a76c:
  iVar4 = 0;
LAB_106e5a7d0:
  func_0x000106e5e3a4();
  if (uVar2 <= uVar11) {
LAB_106e5a7dc:
    if (*(long *)(unaff_x20 + 0x88) != *(long *)(unaff_x20 + 0x90)) {
      func_0x000106e5ea00();
      FUN_106e5ab00();
      uVar11 = 0xffffffffffffffff;
      lVar13 = 0;
      do {
        uVar2 = (*(long *)(unaff_x20 + 0x90) - *(long *)(unaff_x20 + 0x88)) / 0x18;
        uVar11 = uVar11 + 1;
        if (uVar2 <= uVar11) {
          iVar4 = 0;
          goto LAB_106e5a830;
        }
        func_0x000106e5e8cc(lVar13);
        lVar13 = lVar13 + 0x18;
      } while ((int)param_1 == 0);
      iVar4 = 5;
LAB_106e5a830:
      func_0x000106e5e3a4();
      if (uVar11 < uVar2) goto LAB_106e5a83c;
    }
    func_0x000106e5e468();
    if (((int)param_1 == 0) || (func_0x000106e5e468(), ((ulong)param_1 & 1) == 0)) {
      func_0x000106e5e8b4();
      iVar4 = (int)param_1;
      if ((((ulong)param_1 & 1) == 0) && (func_0x000106e5e8b4(), iVar4 == 0)) goto LAB_106e5a530;
      uVar12 = 0;
    }
    else {
LAB_106e5a530:
      uVar12 = 1;
    }
    lVar13 = 2;
    goto LAB_106e5a884;
  }
LAB_106e5a83c:
  uVar12 = 1;
  lVar13 = 2;
  if (iVar4 != 0) goto LAB_106e5a884;
LAB_106e5a540:
  pppuStack_80 = (undefined8 ***)CONCAT44(pppuStack_80._4_4_,**(uint **)(unaff_x19 + 4));
  ppppuVar5 = (undefined8 ****)(ulong)**(uint **)(unaff_x19 + 4);
  if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
    func_0x000106e5e248();
    func_0x000106e5e668();
    pppuStack_80 = (undefined8 ***)CONCAT44(pppuStack_80._4_4_,(int)param_1);
    ppppuVar5 = param_1;
  }
  lVar10 = *(long *)(unaff_x20 + 0x30) - (long)*(int **)(unaff_x20 + 0x28) >> 2;
  piVar7 = *(int **)(unaff_x20 + 0x28);
  do {
    if (lVar10 == 0) {
      if ((*(int *)(unaff_x20 + 0xa4) != 0) ||
         (*(long *)(unaff_x20 + 0x40) != *(long *)(unaff_x20 + 0x48))) {
        uVar11 = *(ulong *)(unaff_x20 + 0x18);
        func_0x000106e58258(uVar11,ppppuVar5);
        param_1 = *(undefined8 *****)(unaff_x20 + 0x40);
        func_0x000106e5acec(param_1,*(undefined8 *)(unaff_x20 + 0x48),ppppuVar5);
        if (((uVar11 & 1) == 0) && (*(undefined8 *****)(unaff_x20 + 0x48) == param_1)) break;
      }
      if (*(long *)(unaff_x20 + 0x58) == *(long *)(unaff_x20 + 0x60)) goto LAB_106e5a6ec;
      if (*(char *)(unaff_x20 + 0xaa) == '\x01') {
        func_0x000106e5e7cc();
        FUN_106e5aa40();
      }
      else {
        bStack_51 = 1;
        pppuStack_68 = (uint ***)((ulong)ppppuVar5 & 0xffffffff);
      }
      lVar10 = 0;
      uVar11 = 0;
      goto LAB_106e5a68c;
    }
    iVar4 = *piVar7;
    lVar10 = lVar10 + -1;
    piVar7 = piVar7 + 1;
  } while ((int)ppppuVar5 != iVar4);
  uVar12 = 1;
LAB_106e5a884:
  if ((uint)*(byte *)(unaff_x20 + 0xa8) == (uVar12 & 1)) {
    uVar8 = 0;
    uVar9 = 0xfffffc1f;
  }
  else {
    func_0x000106e5e9e0(*(long *)(unaff_x19 + 4) + lVar13 * 4);
    uVar9 = 0xfffffc1d;
    uVar8 = extraout_x8_00;
  }
  *unaff_x19 = uVar9;
  *(undefined8 *)(unaff_x19 + 0x14) = uVar8;
  return;
}



/* Entry: 106e5a92c; end: 106e5aa3f;  */

void FUN_106e5a92c(long param_1)

{
  func_0x000106e5e630();
  if (param_1 != 0) {
    func_0x000106e5e608();
  }
  return;
}



/* Entry: 106e5aa40; end: 106e5aa8b;  */

void FUN_106e5aa40(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined8 extraout_x11;
  long unaff_x19;
  
  func_0x000106e5e578();
  func_0x000106e5e554();
  FUN_106e5ac40();
  func_0x000106e5e17c(*(undefined8 *)(unaff_x19 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x000106e5e238(uVar1);
  (*extraout_x9)();
  func_0x000106e5e2ac();
  return;
}



/* Entry: 106e5aa8c; end: 106e5aaff;  */

uint FUN_106e5aa8c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar3 = param_1[1];
  puVar7 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar7 = param_1;
  }
  uVar4 = param_2[1];
  puVar6 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar6 = param_2;
  }
  uVar5 = uVar4;
  if (uVar3 <= uVar4) {
    uVar5 = uVar3;
  }
  func_0x0001057f96a4(puVar7,puVar6,uVar5);
  iVar1 = 1;
  if (uVar3 < uVar4) {
    iVar1 = -1;
  }
  iVar2 = 0;
  if (uVar3 != uVar4) {
    iVar2 = iVar1;
  }
  iVar1 = (int)puVar7;
  if ((int)puVar7 == 0) {
    iVar1 = iVar2;
  }
  uVar8 = (uint)(0 < iVar1);
  if (iVar1 < 0) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}



/* Entry: 106e5ab00; end: 106e5ab83;  */

void FUN_106e5ab00(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  code *extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x11;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000106e5e2f0();
  func_0x000106e5e554();
  FUN_106e5ac40();
  func_0x000106e5e17c(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x000106e5e238(uVar1);
  (*extraout_x9)();
  func_0x000106e5e710((int)*(char *)(unaff_x19 + 0x17));
  if (extraout_x9_00 != 1) {
    if (extraout_x9_00 == 3) {
      func_0x000106e5e4d0();
      extraout_x8_00[2] = *extraout_x8_00;
    }
    else {
      FUN_106e56e20();
    }
  }
  func_0x000106e5e2ac();
  return;
}



/* Entry: 106e5ab84; end: 106e5ac3f;  */

void FUN_106e5ab84(long param_1,long param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int *unaff_x19;
  char *unaff_x21;
  ulong uVar4;
  
  pcVar2 = param_3;
  func_0x000106e5e868();
  uVar4 = (long)pcVar2 - param_2;
  piVar3 = unaff_x19;
  if (*(char *)(param_1 + 0x17) < '\0') {
    if ((*(ulong *)(unaff_x19 + 4) & 0x7fffffffffffffff) - 1 < uVar4) goto LAB_106e5abd4;
    cVar1 = (char)(*(ulong *)(unaff_x19 + 4) >> 0x38);
  }
  else {
    if (uVar4 < 5) goto LAB_106e5ac10;
LAB_106e5abd4:
    FUN_106e57050();
    cVar1 = *(char *)((long)unaff_x19 + 0x17);
  }
  if (cVar1 < '\0') {
    piVar3 = *(int **)unaff_x19;
  }
LAB_106e5ac10:
  for (; unaff_x21 != param_3; unaff_x21 = unaff_x21 + 1) {
    *piVar3 = (int)*unaff_x21;
    piVar3 = piVar3 + 1;
  }
  *piVar3 = 0;
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(ulong *)(unaff_x19 + 2) = uVar4;
  }
  else {
    *(byte *)((long)unaff_x19 + 0x17) = (byte)uVar4 & 0x7f;
  }
  return;
}



/* Entry: 106e5ac40; end: 106e5acab;  */

void FUN_106e5ac40(long param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_3 - param_2);
  func_0x000106e5e77c();
  if (!(bool)in_CY) {
    func_0x000106e5ea50();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x000106e5e75c();
      func_0x0001057f96c8();
      func_0x000106e5ea28();
    }
    else {
      *(char *)((long)unaff_x20 + 0x17) = (char)((ulong)puVar1 >> 2);
    }
    if (unaff_x22 != unaff_x21) {
      func_0x000106e5e360();
      _memmove();
    }
    *(undefined4 *)((long)unaff_x20 + (long)puVar1) = 0;
    return;
  }
  func_0x0001057f96b4();
  func_0x000106e5e578();
  if (*(char *)(param_1 + 0x17) < '\0') {
    __ZdlPv(*unaff_x20);
  }
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
  unaff_x20[2] = puVar1[2];
  unaff_x20[1] = uVar3;
  *unaff_x20 = uVar2;
  *(undefined1 *)((long)puVar1 + 0x17) = 0;
  *(undefined4 *)puVar1 = 0;
  return;
}



/* Entry: 106e5acac; end: 106e5ad1f;  */

void FUN_106e5acac(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000106e5e578();
  if (*(char *)(param_1 + 0x17) < '\0') {
    __ZdlPv(*unaff_x20);
  }
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  *(undefined4 *)unaff_x19 = 0;
  return;
}



/* Entry: 106e5ad20; end: 106e5ad5f;  */

void FUN_106e5ad20(void)

{
  undefined1 in_CY;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x22;
  
  func_0x000106e5e64c();
  if ((bool)in_CY) {
    func_0x000106e5e474();
    func_0x000106e5e3f0();
    func_0x000106e5e4a0();
    func_0x000106e5e930();
  }
  else {
    *unaff_x22 = unaff_w20;
    unaff_x22 = unaff_x22 + 1;
  }
  *(undefined4 **)(unaff_x19 + 8) = unaff_x22;
  return;
}



/* Entry: 106e5ad60; end: 106e5ad9f;  */

ulong FUN_106e5ad60(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3e == 0) {
    uVar1 = param_1[2] - *param_1 >> 1;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x3fffffffffffffff;
    }
    return uVar1;
  }
  FUN_106e5add8();
  func_0x000106e5e578();
  uVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(uVar1);
  func_0x000106e5e2fc();
  return uVar1;
}



/* Entry: 106e5ada0; end: 106e5add7;  */

void FUN_106e5ada0(long *param_1,long param_2)

{
  func_0x000106e5e578();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x000106e5e2fc();
  return;
}



/* Entry: 106e5add8; end: 106e5ade3;  */

long * FUN_106e5add8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000106e5e118();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001057f96c8();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 106e5ade4; end: 106e5ae6b;  */

long * FUN_106e5ade4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001057f96c8();
  }
  lVar1 = param_4 + param_3 * 4;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 4;
  return param_1;
}



/* Entry: 106e5ae6c; end: 106e5aeab;  */

void FUN_106e5ae6c(void)

{
  undefined1 in_CY;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x22;
  
  func_0x000106e5e64c();
  if ((bool)in_CY) {
    func_0x000106e5e474();
    func_0x000106e5e3f0();
    func_0x000106e5e4a0();
    func_0x000106e5e930();
  }
  else {
    *unaff_x22 = unaff_w20;
    unaff_x22 = unaff_x22 + 1;
  }
  *(undefined4 **)(unaff_x19 + 8) = unaff_x22;
  return;
}



/* Entry: 106e5aeac; end: 106e5af17;  */

int FUN_106e5aeac(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0);
  uVar3 = (uint)param_1;
  iVar1 = -1;
  if (((uVar3 | 0x20) - 0x61 & 0xff) < 6) {
    iVar1 = (uVar3 | 0x20) - 0x57;
  }
  iVar2 = -1;
  if (param_3 == 0x10) {
    iVar2 = iVar1;
  }
  if ((uVar3 & 0xfffffffe) == 0x38) {
    iVar2 = uVar3 - 0x30;
  }
  if ((uVar3 & 0xfffffff8) == 0x30) {
    iVar2 = uVar3 - 0x30;
  }
  return iVar2;
}



/* Entry: 106e5af18; end: 106e5afdf;  */

uint * FUN_106e5af18(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  ulong uVar14;
  undefined8 extraout_x9;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  uint auStack_68 [6];
  uint auStack_50 [2];
  undefined8 uStack_48;
  
  puVar6 = param_2;
  func_0x000106e5e340();
  auStack_50[0] = 0x2e;
  auStack_50[1] = 0x5d;
  puVar8 = auStack_50;
  puVar13 = (uint *)&uStack_48;
  puVar7 = param_3;
  uStack_48 = extraout_x8_00;
  FUN_106e5b5f0();
  if (puVar6 == param_3) {
    FUN_106889864();
    puVar12 = puVar6;
LAB_106e5afd8:
    FUN_10688a5a4();
  }
  else {
    puVar12 = auStack_68;
    func_0x000106e5e844();
    puVar13 = puVar6;
    FUN_106e5b414();
    func_0x000106e5e910();
    func_0x000106e5e2ac();
    func_0x000106e5e9d4(*(undefined1 *)((long)param_4 + 0x17));
    bVar3 = extraout_x8_01 - 1U == 2;
    if (1 < extraout_x8_01 - 1U) goto LAB_106e5afd8;
    func_0x000106e5e168(uStack_48);
    if (bVar3) {
      return puVar6 + 2;
    }
  }
  ___stack_chk_fail();
  if (puVar7 == puVar8) {
    FUN_106888a18();
    puVar6 = puVar7;
    if (puVar7 != puVar8) {
      uVar10 = *puVar7;
      puVar6 = (uint *)(ulong)uVar10;
      switch(uVar10) {
      case 0x6e:
        if (puVar13 == (uint *)0x0) {
LAB_106e5b314:
          FUN_106e59c9c();
          goto LAB_106e5b398;
        }
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar19 = 10;
        break;
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x75:
LAB_106e5b1e0:
        param_4 = puVar7;
        if ((uVar10 & 0xfffffff8) == 0x30) {
          uVar10 = uVar10 - 0x30;
          puVar6 = puVar7 + 1;
          if ((puVar6 != puVar8) && ((*puVar6 & 0xfffffff8) == 0x30)) {
            uVar10 = (*puVar6 + uVar10 * 8) - 0x30;
            puVar12 = puVar7 + 2;
            puVar6 = puVar12;
            if (puVar12 != puVar8) {
              if ((*puVar12 & 0xfffffff8) == 0x30) {
                puVar6 = puVar7 + 3;
                uVar10 = (*puVar12 + uVar10 * 8) - 0x30;
              }
            }
          }
          if (puVar13 != (uint *)0x0) {
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              func_0x000106e5e108();
            }
            else {
              func_0x000106e5e3d8();
            }
            *puVar13 = uVar10;
            puVar13[1] = 0;
            return puVar6;
          }
          FUN_106e59c9c();
          return puVar6;
        }
        goto LAB_106e5b3a8;
      case 0x72:
        if (puVar13 == (uint *)0x0) goto LAB_106e5b314;
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar19 = 0xd;
        break;
      case 0x74:
        if (puVar13 == (uint *)0x0) goto LAB_106e5b314;
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar19 = 9;
        break;
      case 0x76:
        if (puVar13 == (uint *)0x0) goto LAB_106e5b314;
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar19 = 0xb;
        break;
      default:
        if ((uVar10 == 0x22) || (uVar10 == 0x2f)) {
LAB_106e5b1a0:
          if (puVar13 != (uint *)0x0) {
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              func_0x000106e5e108();
            }
            else {
              func_0x000106e5e3d8();
            }
            *puVar13 = uVar10;
            puVar13[1] = 0;
            goto LAB_106e5b398;
          }
          goto LAB_106e5b314;
        }
        if (uVar10 == 0x66) {
          if (puVar13 == (uint *)0x0) goto LAB_106e5b314;
          if (*(char *)((long)puVar13 + 0x17) < '\0') {
            func_0x000106e5e108();
          }
          else {
            func_0x000106e5e3d8();
          }
          uVar19 = 0xc;
        }
        else if (uVar10 == 0x61) {
          if (puVar13 == (uint *)0x0) goto LAB_106e5b314;
          if (*(char *)((long)puVar13 + 0x17) < '\0') {
            func_0x000106e5e108();
          }
          else {
            func_0x000106e5e3d8();
          }
          uVar19 = 7;
        }
        else {
          if (uVar10 != 0x62) {
            if (uVar10 != 0x5c) goto LAB_106e5b1e0;
            goto LAB_106e5b1a0;
          }
          if (puVar13 == (uint *)0x0) goto LAB_106e5b314;
          if (*(char *)((long)puVar13 + 0x17) < '\0') {
            func_0x000106e5e108();
          }
          else {
            func_0x000106e5e3d8();
          }
          uVar19 = 8;
        }
      }
      *(undefined8 *)puVar13 = uVar19;
LAB_106e5b398:
      return puVar7 + 1;
    }
LAB_106e5b3a8:
    FUN_106888a18();
    if (*(char *)((long)puVar12 + 0xa9) == '\x01') {
      puVar6 = *(uint **)(puVar12 + 6);
      func_0x000106e5e398(puVar6);
      func_0x000106e5e668();
      puVar8 = *(uint **)(puVar12 + 6);
      func_0x000106e5e398(puVar8);
      (*extraout_x8_03)();
    }
    puVar12 = puVar12 + 0x1c;
    func_0x000106e5e868(puVar12,(ulong)puVar6 & 0xffffffff | (long)puVar8 << 0x20);
    puVar2 = *(undefined8 **)(puVar12 + 2);
    if (puVar2 < *(undefined8 **)(puVar12 + 4)) {
      puVar18 = puVar2 + 1;
      *puVar2 = param_2;
    }
    else {
      lVar16 = *(long *)param_4;
      lVar17 = (long)puVar2 - lVar16;
      uVar1 = (lVar17 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_106e5b9c0();
FUN_106e57698:
        func_0x000104bd35f4();
        func_0x000106e5e118();
        *(undefined ***)puVar12 = &PTR_DAT_110980518;
        if (*(long *)(puVar12 + 2) == 0) {
          return puVar12;
        }
        func_0x000106e5e9b0();
        return puVar12;
      }
      uVar14 = (long)*(undefined8 **)(puVar12 + 4) - lVar16;
      uVar15 = (long)uVar14 >> 2;
      if (uVar15 <= uVar1) {
        uVar15 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar15 = 0x1fffffffffffffff;
      }
      if (uVar15 == 0) {
        lVar9 = 0;
      }
      else {
        if (uVar15 >> 0x3d != 0) goto FUN_106e57698;
        lVar9 = uVar15 << 3;
        __Znwm();
      }
      puVar2 = (undefined8 *)(lVar9 + lVar17);
      puVar7 = (uint *)(puVar2 + -(lVar17 >> 3));
      puVar18 = puVar2 + 1;
      *puVar2 = param_2;
      puVar12 = puVar7;
      _memcpy(puVar7,lVar16,lVar17);
      *(uint **)param_4 = puVar7;
      *(undefined8 **)(param_4 + 2) = puVar18;
      *(ulong *)(param_4 + 4) = lVar9 + uVar15 * 8;
      if (lVar16 != 0) {
        func_0x000106e5e6cc();
      }
    }
    *(undefined8 **)(param_4 + 2) = puVar18;
    return puVar12;
  }
  uVar10 = *puVar7;
  if (uVar10 == 0x77) {
    *(uint *)(param_5 + 0xa0) = *(uint *)(param_5 + 0xa0) | 0x500;
    FUN_106e5a2fc(param_5,0x5f);
    goto LAB_106e5b130;
  }
  if (uVar10 == 0x44) {
    uVar10 = *(uint *)(param_5 + 0xa4) | 0x400;
LAB_106e5b0d0:
    *(uint *)(param_5 + 0xa4) = uVar10;
LAB_106e5b130:
    return puVar7 + 1;
  }
  if (uVar10 == 0x53) {
    uVar10 = *(uint *)(param_5 + 0xa4) | 0x4000;
    goto LAB_106e5b0d0;
  }
  if (uVar10 == 0x57) {
    *(uint *)(param_5 + 0xa4) = *(uint *)(param_5 + 0xa4) | 0x500;
    if (*(char *)(param_5 + 0xa9) == '\x01') {
      func_0x000106e5e248();
      (*extraout_x8_02)();
    }
    else {
      puVar12 = (uint *)0x5f;
      if (*(char *)(param_5 + 0xaa) != '\x01') {
        FUN_106e5ae6c(param_5 + 0x40,0x5f);
        goto LAB_106e5b130;
      }
    }
    FUN_106e5ad20(param_5 + 0x40,puVar12);
    goto LAB_106e5b130;
  }
  if (uVar10 == 0x62) {
    if (*(char *)((long)puVar13 + 0x17) < '\0') {
      func_0x000106e5e108();
    }
    else {
      func_0x000106e5e3d8();
    }
    puVar13[0] = 8;
    puVar13[1] = 0;
    goto LAB_106e5b130;
  }
  if (uVar10 == 100) {
    uVar10 = *(uint *)(param_5 + 0xa0) | 0x400;
LAB_106e5b070:
    *(uint *)(param_5 + 0xa0) = uVar10;
    goto LAB_106e5b130;
  }
  if (uVar10 == 0x73) {
    uVar10 = *(uint *)(param_5 + 0xa0) | 0x4000;
    goto LAB_106e5b070;
  }
  if (uVar10 == 0) {
    if (*(char *)((long)puVar13 + 0x17) < '\0') {
      func_0x000106e5e108();
    }
    else {
      func_0x000106e5e3d8();
    }
    puVar13[0] = 0;
    puVar13[1] = 0;
    goto LAB_106e5b130;
  }
  if (puVar7 == puVar8) {
    return puVar7;
  }
  uVar10 = *puVar7;
  iVar4 = 0;
  puVar6 = puVar12;
  puVar11 = puVar7;
  switch(uVar10) {
  case 0x6e:
    if (puVar13 != (uint *)0x0) {
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar19 = 10;
code_r0x000106e59c68:
      *(undefined8 *)puVar13 = uVar19;
      goto LAB_106e59c6c;
    }
    uVar10 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
LAB_106e59a58:
    puVar6 = *(uint **)(puVar12 + 2);
    func_0x000106e5e2d4();
    if (((ulong)puVar6 & 1) != 0) goto LAB_106e59c98;
    uVar10 = *puVar7;
    if (puVar13 != (uint *)0x0) {
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      *puVar13 = uVar10;
      puVar13[1] = 0;
      goto LAB_106e59c6c;
    }
    break;
  case 0x72:
    if (puVar13 != (uint *)0x0) {
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar19 = 0xd;
      goto code_r0x000106e59c68;
    }
    uVar10 = 0xd;
    break;
  case 0x74:
    if (puVar13 != (uint *)0x0) {
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar19 = 9;
      goto code_r0x000106e59c68;
    }
    uVar10 = 9;
    break;
  case 0x75:
    if (puVar7 + 1 != puVar8) {
      func_0x000106e5e294();
      iVar4 = (int)puVar6;
      if ((iVar4 != -1) && (puVar7 = puVar7 + 2, puVar7 != puVar8)) {
        puVar11 = (uint *)(ulong)*puVar7;
        puVar6 = *(uint **)(puVar12 + 2);
        FUN_106e5aeac(puVar6,puVar11,0x10);
        if ((int)puVar6 != -1) {
          iVar4 = iVar4 * 0x100 + (int)puVar6 * 0x10;
          goto code_r0x000106e59ac4;
        }
      }
    }
    goto LAB_106e59c98;
  case 0x76:
    if (puVar13 != (uint *)0x0) {
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar19 = 0xb;
      goto code_r0x000106e59c68;
    }
    uVar10 = 0xb;
    break;
  case 0x78:
code_r0x000106e59ac4:
    if (puVar7 + 1 != puVar8) {
      func_0x000106e5e294();
      iVar5 = (int)puVar6;
      if ((iVar5 != -1) && (puVar7 + 2 != puVar8)) {
        func_0x000106e5e294();
        if ((int)puVar6 != -1) {
          uVar10 = (int)puVar6 + (iVar5 + iVar4) * 0x10;
          if (puVar13 == (uint *)0x0) {
            func_0x000106e5e960();
          }
          else {
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              func_0x000106e5e130();
            }
            else {
              func_0x000106e5e4e0();
            }
            *puVar13 = uVar10;
            puVar13[1] = 0;
          }
          return puVar7 + 3;
        }
      }
    }
LAB_106e59c98:
    uVar10 = (uint)puVar11;
    FUN_106888a18();
    puVar7 = puVar6;
    if ((puVar6[6] & 1) == 0) {
      if ((puVar6[6] >> 3 & 1) == 0) {
        func_0x000106e5e3d0();
        puVar8 = puVar7;
        func_0x000106e5ea64();
        *(undefined ***)puVar8 = &PTR_FUN_110980740;
        *(undefined8 *)(puVar8 + 2) = extraout_x9;
        puVar8[4] = uVar10;
        *(uint **)(extraout_x8 + 8) = puVar8;
        goto LAB_106e59d34;
      }
      func_0x000106e5e5bc();
      puVar8 = puVar7;
      func_0x000106e5e85c();
      func_0x000106e5e4c4();
      puVar7[10] = uVar10;
    }
    else {
      func_0x000106e5e5bc();
      func_0x000106e5e85c();
      func_0x000106e5e4c4();
      puVar8 = *(uint **)(puVar6 + 2);
      func_0x000106e5e398();
      func_0x000106e5e668();
      puVar7[10] = (uint)puVar8;
    }
    *(uint **)(*(long *)(puVar6 + 0xe) + 8) = puVar7;
LAB_106e59d34:
    *(uint **)(puVar6 + 0xe) = puVar7;
    return puVar8;
  default:
    if (uVar10 == 0x30) {
      if (puVar13 != (uint *)0x0) {
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          func_0x000106e5e130();
        }
        else {
          func_0x000106e5e4e0();
        }
        puVar13[0] = 0;
        puVar13[1] = 0;
        goto LAB_106e59c6c;
      }
      uVar10 = 0;
    }
    else {
      if (uVar10 == 99) {
        if ((puVar7 + 1 != puVar8) && (uVar10 = puVar7[1], (uVar10 & 0xffffffdf) - 0x41 < 0x1a)) {
          uVar10 = uVar10 & 0x1f;
          if (puVar13 == (uint *)0x0) {
            func_0x000106e5e960();
          }
          else {
            if (*(char *)((long)puVar13 + 0x17) < '\0') {
              func_0x000106e5e130();
            }
            else {
              func_0x000106e5e4e0();
            }
            *puVar13 = uVar10;
            puVar13[1] = 0;
          }
          return puVar7 + 2;
        }
        goto LAB_106e59c98;
      }
      if (uVar10 != 0x66) goto LAB_106e59a58;
      if (puVar13 != (uint *)0x0) {
        if (*(char *)((long)puVar13 + 0x17) < '\0') {
          func_0x000106e5e130();
        }
        else {
          func_0x000106e5e4e0();
        }
        uVar19 = 0xc;
        goto code_r0x000106e59c68;
      }
      uVar10 = 0xc;
    }
  }
  FUN_106e59c9c(puVar12,uVar10);
LAB_106e59c6c:
  return puVar7 + 1;
}



/* Entry: 106e5afe0; end: 106e5b3ab;  */

uint * FUN_106e5afe0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar10;
  undefined8 extraout_x9;
  ulong uVar11;
  uint *unaff_x19;
  long lVar12;
  undefined8 unaff_x21;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  if (param_2 == param_3) {
    FUN_106888a18();
    puVar5 = param_2;
    if (param_2 != param_3) {
      uVar8 = *param_2;
      puVar5 = (uint *)(ulong)uVar8;
      switch(uVar8) {
      case 0x6e:
        if (param_4 == (uint *)0x0) {
LAB_106e5b314:
          FUN_106e59c9c();
          goto LAB_106e5b398;
        }
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar15 = 10;
        break;
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x75:
LAB_106e5b1e0:
        unaff_x19 = param_2;
        if ((uVar8 & 0xfffffff8) == 0x30) {
          uVar8 = uVar8 - 0x30;
          puVar5 = param_2 + 1;
          if ((puVar5 != param_3) && ((*puVar5 & 0xfffffff8) == 0x30)) {
            uVar8 = (*puVar5 + uVar8 * 8) - 0x30;
            puVar9 = param_2 + 2;
            puVar5 = puVar9;
            if (puVar9 != param_3) {
              if ((*puVar9 & 0xfffffff8) == 0x30) {
                puVar5 = param_2 + 3;
                uVar8 = (*puVar9 + uVar8 * 8) - 0x30;
              }
            }
          }
          if (param_4 != (uint *)0x0) {
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              func_0x000106e5e108();
            }
            else {
              func_0x000106e5e3d8();
            }
            *param_4 = uVar8;
            param_4[1] = 0;
            return puVar5;
          }
          FUN_106e59c9c();
          return puVar5;
        }
        goto LAB_106e5b3a8;
      case 0x72:
        if (param_4 == (uint *)0x0) goto LAB_106e5b314;
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar15 = 0xd;
        break;
      case 0x74:
        if (param_4 == (uint *)0x0) goto LAB_106e5b314;
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar15 = 9;
        break;
      case 0x76:
        if (param_4 == (uint *)0x0) goto LAB_106e5b314;
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e108();
        }
        else {
          func_0x000106e5e3d8();
        }
        uVar15 = 0xb;
        break;
      default:
        if ((uVar8 == 0x22) || (uVar8 == 0x2f)) {
LAB_106e5b1a0:
          if (param_4 != (uint *)0x0) {
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              func_0x000106e5e108();
            }
            else {
              func_0x000106e5e3d8();
            }
            *param_4 = uVar8;
            param_4[1] = 0;
            goto LAB_106e5b398;
          }
          goto LAB_106e5b314;
        }
        if (uVar8 == 0x66) {
          if (param_4 == (uint *)0x0) goto LAB_106e5b314;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000106e5e108();
          }
          else {
            func_0x000106e5e3d8();
          }
          uVar15 = 0xc;
        }
        else if (uVar8 == 0x61) {
          if (param_4 == (uint *)0x0) goto LAB_106e5b314;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000106e5e108();
          }
          else {
            func_0x000106e5e3d8();
          }
          uVar15 = 7;
        }
        else {
          if (uVar8 != 0x62) {
            if (uVar8 != 0x5c) goto LAB_106e5b1e0;
            goto LAB_106e5b1a0;
          }
          if (param_4 == (uint *)0x0) goto LAB_106e5b314;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000106e5e108();
          }
          else {
            func_0x000106e5e3d8();
          }
          uVar15 = 8;
        }
      }
      *(undefined8 *)param_4 = uVar15;
LAB_106e5b398:
      return param_2 + 1;
    }
LAB_106e5b3a8:
    FUN_106888a18();
    if (*(char *)((long)param_1 + 0xa9) == '\x01') {
      puVar5 = *(uint **)(param_1 + 6);
      func_0x000106e5e398(puVar5);
      func_0x000106e5e668();
      param_3 = *(uint **)(param_1 + 6);
      func_0x000106e5e398(param_3);
      (*extraout_x8_01)();
    }
    param_1 = param_1 + 0x1c;
    func_0x000106e5e868(param_1,(ulong)puVar5 & 0xffffffff | (long)param_3 << 0x20);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (puVar2 < *(undefined8 **)(param_1 + 4)) {
      puVar14 = puVar2 + 1;
      *puVar2 = unaff_x21;
    }
    else {
      lVar12 = *(long *)unaff_x19;
      lVar13 = (long)puVar2 - lVar12;
      uVar1 = (lVar13 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_106e5b9c0();
LAB_106e5b9bc:
        func_0x000104bd35f4();
        func_0x000106e5e118();
        *(undefined ***)param_1 = &PTR_DAT_110980518;
        if (*(long *)(param_1 + 2) == 0) {
          return param_1;
        }
        func_0x000106e5e9b0();
        return param_1;
      }
      uVar10 = (long)*(undefined8 **)(param_1 + 4) - lVar12;
      uVar11 = (long)uVar10 >> 2;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        lVar7 = 0;
      }
      else {
        if (uVar11 >> 0x3d != 0) goto LAB_106e5b9bc;
        lVar7 = uVar11 << 3;
        __Znwm();
      }
      puVar2 = (undefined8 *)(lVar7 + lVar13);
      puVar5 = (uint *)(puVar2 + -(lVar13 >> 3));
      puVar14 = puVar2 + 1;
      *puVar2 = unaff_x21;
      param_1 = puVar5;
      _memcpy(puVar5,lVar12,lVar13);
      *(uint **)unaff_x19 = puVar5;
      *(undefined8 **)(unaff_x19 + 2) = puVar14;
      *(ulong *)(unaff_x19 + 4) = lVar7 + uVar11 * 8;
      if (lVar12 != 0) {
        func_0x000106e5e6cc();
      }
    }
    *(undefined8 **)(unaff_x19 + 2) = puVar14;
    return param_1;
  }
  uVar8 = *param_2;
  if (uVar8 == 0x77) {
    *(uint *)(param_5 + 0xa0) = *(uint *)(param_5 + 0xa0) | 0x500;
    FUN_106e5a2fc(param_5,0x5f);
    goto LAB_106e5b130;
  }
  if (uVar8 == 0x44) {
    uVar8 = *(uint *)(param_5 + 0xa4) | 0x400;
LAB_106e5b0d0:
    *(uint *)(param_5 + 0xa4) = uVar8;
LAB_106e5b130:
    return param_2 + 1;
  }
  if (uVar8 == 0x53) {
    uVar8 = *(uint *)(param_5 + 0xa4) | 0x4000;
    goto LAB_106e5b0d0;
  }
  if (uVar8 == 0x57) {
    *(uint *)(param_5 + 0xa4) = *(uint *)(param_5 + 0xa4) | 0x500;
    if (*(char *)(param_5 + 0xa9) == '\x01') {
      func_0x000106e5e248();
      (*extraout_x8_00)();
    }
    else {
      param_1 = (uint *)0x5f;
      if (*(char *)(param_5 + 0xaa) != '\x01') {
        FUN_106e5ae6c(param_5 + 0x40,0x5f);
        goto LAB_106e5b130;
      }
    }
    FUN_106e5ad20(param_5 + 0x40,param_1);
    goto LAB_106e5b130;
  }
  if (uVar8 == 0x62) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000106e5e108();
    }
    else {
      func_0x000106e5e3d8();
    }
    param_4[0] = 8;
    param_4[1] = 0;
    goto LAB_106e5b130;
  }
  if (uVar8 == 100) {
    uVar8 = *(uint *)(param_5 + 0xa0) | 0x400;
LAB_106e5b070:
    *(uint *)(param_5 + 0xa0) = uVar8;
    goto LAB_106e5b130;
  }
  if (uVar8 == 0x73) {
    uVar8 = *(uint *)(param_5 + 0xa0) | 0x4000;
    goto LAB_106e5b070;
  }
  if (uVar8 == 0) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      func_0x000106e5e108();
    }
    else {
      func_0x000106e5e3d8();
    }
    param_4[0] = 0;
    param_4[1] = 0;
    goto LAB_106e5b130;
  }
  if (param_2 == param_3) {
    return param_2;
  }
  uVar8 = *param_2;
  iVar3 = 0;
  puVar5 = param_1;
  puVar9 = param_2;
  switch(uVar8) {
  case 0x6e:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar15 = 10;
code_r0x000106e59c68:
      *(undefined8 *)param_4 = uVar15;
      goto LAB_106e59c6c;
    }
    uVar8 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
LAB_106e59a58:
    puVar5 = *(uint **)(param_1 + 2);
    func_0x000106e5e2d4();
    if (((ulong)puVar5 & 1) != 0) goto LAB_106e59c98;
    uVar8 = *param_2;
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      *param_4 = uVar8;
      param_4[1] = 0;
      goto LAB_106e59c6c;
    }
    break;
  case 0x72:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar15 = 0xd;
      goto code_r0x000106e59c68;
    }
    uVar8 = 0xd;
    break;
  case 0x74:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar15 = 9;
      goto code_r0x000106e59c68;
    }
    uVar8 = 9;
    break;
  case 0x75:
    if (param_2 + 1 != param_3) {
      func_0x000106e5e294();
      iVar3 = (int)puVar5;
      if ((iVar3 != -1) && (param_2 = param_2 + 2, param_2 != param_3)) {
        puVar9 = (uint *)(ulong)*param_2;
        puVar5 = *(uint **)(param_1 + 2);
        FUN_106e5aeac(puVar5,puVar9,0x10);
        if ((int)puVar5 != -1) {
          iVar3 = iVar3 * 0x100 + (int)puVar5 * 0x10;
          goto code_r0x000106e59ac4;
        }
      }
    }
    goto LAB_106e59c98;
  case 0x76:
    if (param_4 != (uint *)0x0) {
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000106e5e130();
      }
      else {
        func_0x000106e5e4e0();
      }
      uVar15 = 0xb;
      goto code_r0x000106e59c68;
    }
    uVar8 = 0xb;
    break;
  case 0x78:
code_r0x000106e59ac4:
    if (param_2 + 1 != param_3) {
      func_0x000106e5e294();
      iVar4 = (int)puVar5;
      if ((iVar4 != -1) && (param_2 + 2 != param_3)) {
        func_0x000106e5e294();
        if ((int)puVar5 != -1) {
          uVar8 = (int)puVar5 + (iVar4 + iVar3) * 0x10;
          if (param_4 == (uint *)0x0) {
            func_0x000106e5e960();
          }
          else {
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              func_0x000106e5e130();
            }
            else {
              func_0x000106e5e4e0();
            }
            *param_4 = uVar8;
            param_4[1] = 0;
          }
          return param_2 + 3;
        }
      }
    }
LAB_106e59c98:
    uVar8 = (uint)puVar9;
    FUN_106888a18();
    puVar9 = puVar5;
    if ((puVar5[6] & 1) == 0) {
      if ((puVar5[6] >> 3 & 1) == 0) {
        func_0x000106e5e3d0();
        puVar6 = puVar9;
        func_0x000106e5ea64();
        *(undefined ***)puVar6 = &PTR_FUN_110980740;
        *(undefined8 *)(puVar6 + 2) = extraout_x9;
        puVar6[4] = uVar8;
        *(uint **)(extraout_x8 + 8) = puVar6;
        goto LAB_106e59d34;
      }
      func_0x000106e5e5bc();
      puVar6 = puVar9;
      func_0x000106e5e85c();
      func_0x000106e5e4c4();
      puVar9[10] = uVar8;
    }
    else {
      func_0x000106e5e5bc();
      func_0x000106e5e85c();
      func_0x000106e5e4c4();
      puVar6 = *(uint **)(puVar5 + 2);
      func_0x000106e5e398();
      func_0x000106e5e668();
      puVar9[10] = (uint)puVar6;
    }
    *(uint **)(*(long *)(puVar5 + 0xe) + 8) = puVar9;
LAB_106e59d34:
    *(uint **)(puVar5 + 0xe) = puVar9;
    return puVar6;
  default:
    if (uVar8 == 0x30) {
      if (param_4 != (uint *)0x0) {
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e130();
        }
        else {
          func_0x000106e5e4e0();
        }
        param_4[0] = 0;
        param_4[1] = 0;
        goto LAB_106e59c6c;
      }
      uVar8 = 0;
    }
    else {
      if (uVar8 == 99) {
        if ((param_2 + 1 != param_3) && (uVar8 = param_2[1], (uVar8 & 0xffffffdf) - 0x41 < 0x1a)) {
          uVar8 = uVar8 & 0x1f;
          if (param_4 == (uint *)0x0) {
            func_0x000106e5e960();
          }
          else {
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              func_0x000106e5e130();
            }
            else {
              func_0x000106e5e4e0();
            }
            *param_4 = uVar8;
            param_4[1] = 0;
          }
          return param_2 + 2;
        }
        goto LAB_106e59c98;
      }
      if (uVar8 != 0x66) goto LAB_106e59a58;
      if (param_4 != (uint *)0x0) {
        if (*(char *)((long)param_4 + 0x17) < '\0') {
          func_0x000106e5e130();
        }
        else {
          func_0x000106e5e4e0();
        }
        uVar15 = 0xc;
        goto code_r0x000106e59c68;
      }
      uVar8 = 0xc;
    }
  }
  FUN_106e59c9c(param_1,uVar8);
LAB_106e59c6c:
  return param_2 + 1;
}



/* Entry: 106e5b3ac; end: 106e5b413;  */

undefined8 * FUN_106e5b3ac(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *extraout_x8;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    param_2 = *(ulong *)(param_1 + 0x18);
    func_0x000106e5e398(param_2);
    func_0x000106e5e668();
    param_3 = *(long *)(param_1 + 0x18);
    func_0x000106e5e398(param_3);
    (*extraout_x8)();
  }
  puVar2 = (undefined8 *)(param_1 + 0x70);
  func_0x000106e5e868(puVar2,param_2 & 0xffffffff | param_3 << 0x20);
  puVar8 = (undefined8 *)puVar2[1];
  if (puVar8 < (undefined8 *)puVar2[2]) {
    puVar9 = puVar8 + 1;
    *puVar8 = unaff_x21;
  }
  else {
    lVar6 = *unaff_x19;
    lVar7 = (long)puVar8 - lVar6;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_106e5b9c0();
LAB_106e5b9bc:
      func_0x000104bd35f4();
      func_0x000106e5e118();
      *puVar2 = &PTR_DAT_110980518;
      if (puVar2[1] != 0) {
        func_0x000106e5e9b0();
      }
      return puVar2;
    }
    uVar4 = (long)puVar2[2] - lVar6;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_106e5b9bc;
      lVar3 = uVar5 << 3;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar3 + lVar7);
    puVar8 = puVar2 + -(lVar7 >> 3);
    puVar9 = puVar2 + 1;
    *puVar2 = unaff_x21;
    puVar2 = puVar8;
    _memcpy(puVar8,lVar6,lVar7);
    *unaff_x19 = (long)puVar8;
    unaff_x19[1] = (long)puVar9;
    unaff_x19[2] = lVar3 + uVar5 * 8;
    if (lVar6 != 0) {
      func_0x000106e5e6cc();
    }
  }
  unaff_x19[1] = (long)puVar9;
  return puVar2;
}



/* Entry: 106e5b414; end: 106e5b5ef;  */

void FUN_106e5b414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  uint ****ppppuVar3;
  long extraout_x8;
  code *extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined8 ***pppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  uint ***pppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000106e5e2f0();
  func_0x000106e5b668(&pppuStack_48,param_3,param_4);
  pppuStack_60 = (undefined8 ****)0x0;
  lStack_58 = 0;
  uStack_50 = 0;
  uVar1 = uStack_40;
  if (-1 < (char)bStack_31) {
    uVar1 = (ulong)bStack_31;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(&pppuStack_60,uVar1);
  uVar1 = uStack_40;
  ppppuVar3 = (uint ****)pppuStack_48;
  if (-1 < (char)bStack_31) {
    uVar1 = (ulong)bStack_31;
    ppppuVar3 = &pppuStack_48;
  }
  for (lVar4 = uVar1 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
    if (0x7e < *(uint *)ppppuVar3) {
      func_0x000106e5e7fc();
      goto LAB_106e5b518;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&pppuStack_60);
    ppppuVar3 = (uint ****)((long)ppppuVar3 + 4);
  }
  func_0x000106e5e7fc();
  func_0x000106e5e9d4(bStack_31);
  if (extraout_x8 == 0) goto LAB_106e5b518;
  ppppuVar2 = (undefined8 ****)pppuStack_60;
  if (-1 < uStack_50) {
    ppppuVar2 = &pppuStack_60;
  }
  __ZNSt3__120__get_collation_nameEPKc(auStack_78,ppppuVar2);
  func_0x000100066230(&pppuStack_60,auStack_78);
  func_0x000106e5e698();
  if (uStack_50 < 0) {
    if (lStack_58 == 0) goto LAB_106e5b53c;
  }
  else if (uStack_50._7_1_ == '\0') {
LAB_106e5b53c:
    if ((char)bStack_31 < '\0') {
      if (2 < uStack_40) goto LAB_106e5b518;
    }
    else {
      if (2 < bStack_31) goto LAB_106e5b518;
      pppuStack_48 = (uint ***)&pppuStack_48;
    }
    func_0x000106e5e238(*(undefined8 *)(unaff_x20 + 0x10),pppuStack_48);
    (*extraout_x9)(auStack_78);
    func_0x000106e5e910();
    func_0x000106e5e2ac();
    lVar4 = (long)*(char *)(unaff_x19 + 0x17);
    if (lVar4 < 0) {
      lVar4 = *(long *)(unaff_x19 + 8);
      if (lVar4 != 1) goto LAB_106e5b59c;
    }
    else if (*(char *)(unaff_x19 + 0x17) != '\x01') {
LAB_106e5b59c:
      if (lVar4 != 3) {
        FUN_106e56e20();
        goto LAB_106e5b518;
      }
    }
    __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSERKS5_();
    goto LAB_106e5b518;
  }
  FUN_106e5ab84();
LAB_106e5b518:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_60);
  __ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(&pppuStack_48);
  return;
}



/* Entry: 106e5b5f0; end: 106e5b673;  */

int * FUN_106e5b5f0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = (long)param_4 - (long)param_3;
  piVar3 = param_1;
  if ((lVar2 != 0) && (piVar3 = param_2, lVar2 <= (long)param_2 - (long)param_1)) {
    piVar1 = (int *)((long)param_1 + (1 - (lVar2 >> 2)) * 4 + ((long)param_2 - (long)param_1));
    piVar4 = param_1;
    for (; piVar4 = piVar4 + 1, param_1 != piVar1; param_1 = param_1 + 1) {
      iVar8 = *param_3;
      iVar7 = *param_1;
      piVar6 = piVar4;
      piVar5 = param_3;
      while (piVar5 = piVar5 + 1, iVar7 == iVar8) {
        if (piVar5 == param_4) {
          return param_1;
        }
        iVar8 = *piVar5;
        iVar7 = *piVar6;
        piVar6 = piVar6 + 1;
      }
    }
  }
  return piVar3;
}



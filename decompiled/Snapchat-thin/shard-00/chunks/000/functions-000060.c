/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001b909c; end: 1001b90bb;  */

void FUN_1001b909c(void)

{
  func_0x000107c61168(&PTR_PTR_112de23a8);
  return;
}



/* Entry: 1001b90bc; end: 1001b90d7;  */

void FUN_1001b90bc(undefined8 param_1)

{
  FUN_1000285a8(0x112de2618,&UNK_10d9aa840);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_100c0dea0,param_1);
  return;
}



/* Entry: 1001b90d8; end: 1001b9127;  */

void FUN_1001b90d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001b9128; end: 1001b9147;  */

void FUN_1001b9128(void)

{
  func_0x000107c61168(&PTR_PTR_112de2690);
  return;
}



/* Entry: 1001b9148; end: 1001b9163;  */

void FUN_1001b9148(undefined8 param_1)

{
  FUN_1000285a8(0x112de2620,&UNK_10d9aa848);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_100c0de44,param_1);
  return;
}



/* Entry: 1001b9164; end: 1001b9aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b9164(double param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  long *plVar23;
  long lVar24;
  char cVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  double dVar30;
  double dVar31;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2 + 0x38;
  func_0x000107c61148();
  if (lVar7 == 0) {
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),0);
    goto LAB_1001b9960;
  }
  func_0x000107c6071c();
  uVar27 = *(ulong *)(param_2 + 0x30);
  func_0x000107c61174(uVar27);
  if ((*(byte *)(lVar7 + _DAT_11278eb24) & 1) == 0) {
    uVar12 = *(undefined8 *)(lVar7 + _DAT_11278eb10);
    func_0x000107c4aa34();
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar12;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    puVar9 = &UNK_10f780b5d;
    if (*(char *)(lVar7 + _DAT_11278eb3c) == '\0') {
      puVar9 = &DAT_10f519150;
    }
    dVar31 = 0.0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x3f800000;
    (**(code **)(lVar7 + _DAT_11278eb2c))
              (puVar9,&uStack_b0,puVar8,*(undefined8 *)(lVar7 + _DAT_11278eb14),
               *(undefined8 *)(lVar7 + _DAT_11278eb18),1,4);
    FUN_1001ba7c0(&uStack_b0);
    if ((int)puVar9 == 0x65) {
      *(undefined1 *)(lVar7 + _DAT_11278eb08) = 0;
      func_0x000107c54284(PTR_PTR_1126b04a8);
      puVar9 = PTR_PTR_1126e03c0;
      func_0x000107c610f4();
      FUN_1001c739c();
      (**(code **)(uVar27 + 0x10))(uVar27,puVar9);
      func_0x000107c6071c();
      uVar12 = *(undefined8 *)(lVar7 + _DAT_11278eb20);
      dVar30 = dVar31;
      func_0x000107c3db80();
      func_0x000107c61180();
      puVar10 = puVar8;
      func_0x000107c3e164();
      func_0x000107c61180();
      if (*(char *)(lVar7 + _DAT_11278eb08) == '\x01') {
        iVar22 = 0xf519174;
        (**(code **)(lVar7 + _DAT_11278eb30))
                  (&DAT_10f519174,0,puVar10,*(undefined8 *)(lVar7 + _DAT_11278eb14),
                   *(undefined8 *)(lVar7 + _DAT_11278eb18),1,4);
LAB_1001b93e0:
        func_0x000107c30728(puVar9);
        cVar25 = '\0';
      }
      else {
        iVar22 = 0xf51916d;
        (**(code **)(lVar7 + _DAT_11278eb30))
                  (&UNK_10f51916d,&DAT_10f519174,puVar10,*(undefined8 *)(lVar7 + _DAT_11278eb14),
                   *(undefined8 *)(lVar7 + _DAT_11278eb18),1,4);
        if (iVar22 != 0x65) goto LAB_1001b93e0;
        cVar25 = '\x01';
      }
      uVar21 = *(undefined8 *)(lVar7 + _DAT_11278eb18);
      func_0x000107c6071c();
      func_0x000107c421e8(dVar30 - dVar31,uVar21);
      func_0x000107c54284(PTR_PTR_1126b04a8);
      func_0x0001001cfc48(lVar7 + _DAT_11278eb44);
      if (cVar25 != '\0') {
        plVar23 = (long *)(lVar7 + _DAT_11278eb28);
        do {
          lVar20 = *plVar23 + 1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar4) {
            *plVar23 = lVar20;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar24 = (long)_DAT_11278eb48;
        plVar23 = *(long **)(lVar7 + lVar24 + 0x10);
        if (plVar23 != (long *)0x0) {
          plVar2 = (long *)(lVar7 + _DAT_11278eb4c);
          plVar1 = plVar2 + 2;
          uVar26 = plVar2[1];
          uVar28 = uVar27;
          do {
            uVar19 = plVar23[2];
            if (uVar26 != 0) {
              uVar13 = uVar26 - 1;
              if ((uVar26 & uVar13) == 0) {
                uVar28 = uVar19 & uVar13;
              }
              else {
                uVar28 = uVar19;
                if (uVar26 <= uVar19) {
                  uVar28 = 0;
                  if (uVar26 != 0) {
                    uVar28 = uVar19 / uVar26;
                  }
                  uVar28 = uVar19 - uVar28 * uVar26;
                }
              }
              puVar14 = *(undefined8 **)(*plVar2 + uVar28 * 8);
              if (puVar14 != (undefined8 *)0x0) {
                for (plVar29 = (long *)*puVar14; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29)
                {
                  uVar15 = plVar29[1];
                  if (uVar15 == uVar19) {
                    if (plVar29[2] == uVar19) goto LAB_1001b978c;
                  }
                  else {
                    if ((uVar26 & uVar13) == 0) {
                      uVar15 = uVar15 & uVar13;
                    }
                    else if (uVar26 <= uVar15) {
                      uVar5 = 0;
                      if (uVar26 != 0) {
                        uVar5 = uVar15 / uVar26;
                      }
                      uVar15 = uVar15 - uVar5 * uVar26;
                    }
                    if (uVar15 != uVar28) break;
                  }
                }
              }
            }
            plVar29 = (long *)0x20;
            func_0x000107c60e20();
            *plVar29 = 0;
            plVar29[1] = uVar19;
            plVar29[2] = plVar23[2];
            plVar29[3] = 0;
            if ((uVar26 == 0) || (*(float *)(plVar2 + 4) * (float)uVar26 < (float)(plVar2[3] + 1)))
            {
              uVar28 = 1;
              if (2 < uVar26) {
                uVar28 = (ulong)((uVar26 & uVar26 - 1) != 0);
              }
              uVar28 = uVar28 | uVar26 << 1;
              uVar13 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
              if (uVar28 <= uVar13) {
                uVar28 = uVar13;
              }
              if (uVar28 - 1 == 0) {
                uVar28 = 2;
              }
              else if ((uVar28 & uVar28 - 1) != 0) {
                func_0x000107c60c44();
                uVar26 = plVar2[1];
              }
              if (uVar26 < uVar28) {
LAB_1001b95b0:
                uVar26 = uVar28;
                if (uVar26 >> 0x3d != 0) goto LAB_1001b99a8;
                lVar24 = uVar26 << 3;
                func_0x000107c60e20();
                lVar11 = *plVar2;
                *plVar2 = lVar24;
                if (lVar11 != 0) {
                  func_0x000107c60e14();
                  lVar24 = *plVar2;
                }
                plVar2[1] = uVar26;
                func_0x000107c60ee4(lVar24,uVar26 << 3);
                plVar16 = (long *)plVar2[2];
                if (plVar16 != (long *)0x0) {
                  uVar28 = plVar16[1];
                  uVar13 = uVar26 - 1;
                  if ((uVar26 & uVar13) == 0) {
                    uVar28 = uVar28 & uVar13;
                  }
                  else if (uVar26 <= uVar28) {
                    uVar15 = 0;
                    if (uVar26 != 0) {
                      uVar15 = uVar28 / uVar26;
                    }
                    uVar28 = uVar28 - uVar15 * uVar26;
                  }
                  *(long **)(lVar24 + uVar28 * 8) = plVar1;
                  plVar17 = (long *)*plVar16;
                  while (plVar17 != (long *)0x0) {
                    uVar15 = plVar17[1];
                    if ((uVar26 & uVar13) == 0) {
                      uVar15 = uVar15 & uVar13;
                    }
                    else if (uVar26 <= uVar15) {
                      uVar5 = 0;
                      if (uVar26 != 0) {
                        uVar5 = uVar15 / uVar26;
                      }
                      uVar15 = uVar15 - uVar5 * uVar26;
                    }
                    plVar18 = plVar17;
                    if (uVar15 != uVar28) {
                      if (*(long *)(lVar24 + uVar15 * 8) == 0) {
                        *(long **)(lVar24 + uVar15 * 8) = plVar16;
                        uVar28 = uVar15;
                      }
                      else {
                        *plVar16 = *plVar17;
                        *plVar17 = **(undefined8 **)(lVar24 + uVar15 * 8);
                        **(long **)(lVar24 + uVar15 * 8) = (long)plVar17;
                        plVar18 = plVar16;
                      }
                    }
                    plVar16 = plVar18;
                    plVar17 = (long *)*plVar18;
                  }
                }
              }
              else if (uVar28 < uVar26) {
                uVar13 = (ulong)((float)(ulong)plVar2[3] / *(float *)(plVar2 + 4));
                if ((uVar26 < 3) || ((uVar26 & uVar26 - 1) != 0)) {
                  func_0x000107c60c44();
                }
                else if (1 < uVar13) {
                  uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
                }
                if (uVar28 <= uVar13) {
                  uVar28 = uVar13;
                }
                if (uVar28 < uVar26) {
                  if (uVar28 != 0) goto LAB_1001b95b0;
                  lVar24 = *plVar2;
                  *plVar2 = 0;
                  if (lVar24 != 0) {
                    func_0x000107c60e14();
                  }
                  uVar26 = 0;
                  plVar2[1] = 0;
                }
                else {
                  uVar26 = plVar2[1];
                }
              }
              if ((uVar26 & uVar26 - 1) == 0) {
                uVar28 = uVar26 - 1 & uVar19;
              }
              else {
                uVar28 = uVar19;
                if (uVar26 <= uVar19) {
                  uVar28 = 0;
                  if (uVar26 != 0) {
                    uVar28 = uVar19 / uVar26;
                  }
                  uVar28 = uVar19 - uVar28 * uVar26;
                }
              }
            }
            lVar24 = *plVar2;
            plVar16 = *(long **)(lVar24 + uVar28 * 8);
            if (plVar16 == (long *)0x0) {
              *plVar29 = *plVar1;
              *plVar1 = (long)plVar29;
              *(long **)(lVar24 + uVar28 * 8) = plVar1;
              if (*plVar29 != 0) {
                uVar19 = *(ulong *)(*plVar29 + 8);
                if ((uVar26 & uVar26 - 1) == 0) {
                  uVar19 = uVar19 & uVar26 - 1;
                }
                else if (uVar26 <= uVar19) {
                  uVar13 = 0;
                  if (uVar26 != 0) {
                    uVar13 = uVar19 / uVar26;
                  }
                  uVar19 = uVar19 - uVar13 * uVar26;
                }
                *(long **)(lVar24 + uVar19 * 8) = plVar29;
              }
            }
            else {
              *plVar29 = *plVar16;
              *plVar16 = (long)plVar29;
            }
            plVar2[3] = plVar2[3] + 1;
LAB_1001b978c:
            plVar29[3] = lVar20;
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
          lVar24 = (long)_DAT_11278eb48;
        }
        FUN_1001cfd38(lVar7 + lVar24,lVar7 + _DAT_11278eb50);
        uStack_b0 = *(undefined8 *)(lVar7 + _DAT_11278eb14);
        uStack_a8 = 0;
        FUN_1001cfe60(&uStack_b0,lVar7,*(undefined8 *)(lVar7 + _DAT_11278eb18),lVar20,
                      lVar7 + _DAT_11278eb48,lVar7 + _DAT_11278eb54);
        FUN_1000e76e0(&uStack_b0);
      }
      func_0x0001001cfc48(lVar7 + _DAT_11278eb48);
      if (iVar22 == 0xd) {
        func_0x000107c421d8(*(undefined8 *)(lVar7 + _DAT_11278eb18));
      }
      func_0x000107c61170(puVar10);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar9);
    }
    else {
      cVar25 = '\0';
    }
    func_0x000107c61170(puVar8);
  }
  else {
    cVar25 = '\0';
  }
  func_0x000107c61170(uVar27);
  lVar20 = *(long *)(param_2 + 0x28);
  if (lVar20 != 0) {
    lVar24 = *(long *)(param_2 + 0x20);
    if (lVar24 == 0) {
      (**(code **)(lVar20 + 0x10))(lVar20,cVar25);
    }
    else {
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_100818870;
      puStack_c8 = &UNK_1108b5ae0;
      func_0x000107c61174(lVar20);
      lStack_c0 = lVar20;
      cStack_b8 = cVar25;
      FUN_10007380c(lVar24,&puStack_e0);
      func_0x000107c61170(lStack_c0);
    }
  }
  lVar20 = (long)_DAT_11278eb20;
  uVar12 = *(undefined8 *)(lVar7 + lVar20);
  func_0x000107c3db80(uVar12);
  func_0x000107c61180();
  func_0x000107c4fe7c(*(undefined8 *)(lVar7 + lVar20));
  lVar20 = (long)_DAT_11278eb18;
  dVar31 = param_1 - *(double *)(param_2 + 0x48);
  func_0x000107c421d4(dVar31,*(undefined8 *)(lVar7 + lVar20));
  uVar21 = *(undefined8 *)(lVar7 + lVar20);
  func_0x000107c6071c();
  func_0x000107c421e0(dVar31 - param_1,uVar21);
  func_0x000107c61170(uVar12);
LAB_1001b9960:
  func_0x000107c61170(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
LAB_1001b99a8:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001b99b0);
  (*pcVar6)();
}



/* Entry: 1001b9aa4; end: 1001b9ac3;  */

void FUN_1001b9aa4(void)

{
  func_0x000107c61168(&PTR_PTR_1129ae690);
  return;
}



/* Entry: 1001b9ac4; end: 1001b9adb;  */

void FUN_1001b9ac4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1001b9adc; end: 1001b9d5f;  */

int FUN_1001b9adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char cStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e9;
  undefined4 uStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_71;
  undefined4 uStack_70;
  int iStack_64;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  lVar1 = param_4;
  FUN_1001b9e08(param_4,param_1);
  func_0x000107c613a8();
  iStack_64 = (int)lVar1;
  if (iStack_64 == 0x65) {
    iVar3 = 0x65;
  }
  else {
    uVar2 = *(undefined8 *)(param_4 + 0x58);
    func_0x000107c61374(uVar2);
    FUN_10002b838(auStack_c8,uVar2);
    FUN_10002b838(auStack_e0,param_1);
    uVar2 = *(undefined8 *)(param_4 + 0x58);
    func_0x000107c61380(uVar2);
    func_0x000107c310c4(auStack_b0,param_6,param_7,lVar1,auStack_c8,auStack_e0,uVar2);
    if (cStack_c9 < '\0') {
      func_0x000107c60e14(auStack_e0[0]);
    }
    if (cStack_b1 < '\0') {
      func_0x000107c60e14(auStack_c8[0]);
    }
    func_0x000107c2ab28(param_2,&iStack_64);
    if (cStack_89 < '\0') {
      FUN_100033dac(&uStack_118,uStack_a0,uStack_98);
    }
    else {
      uStack_110 = uStack_98;
      uStack_118 = uStack_a0;
      cStack_101 = cStack_89;
    }
    if (cStack_71 < '\0') {
      FUN_100033dac(&uStack_100,uStack_88,uStack_80);
    }
    else {
      uStack_f8 = uStack_80;
      uStack_100 = uStack_88;
      cStack_e9 = cStack_71;
    }
    uStack_e8 = uStack_70;
    func_0x000107c421dc(param_5);
    if (cStack_e9 < '\0') {
      func_0x000107c60e14(uStack_100);
    }
    if (cStack_101 < '\0') {
      func_0x000107c60e14(uStack_118);
    }
    if (cStack_71 < '\0') {
      func_0x000107c60e14(uStack_88);
    }
    iVar3 = iStack_64;
    if (cStack_89 < '\0') {
      func_0x000107c60e14(uStack_a0);
      iVar3 = iStack_64;
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return iVar3;
}



/* Entry: 1001b9d60; end: 1001b9e07;  */

long * FUN_1001b9d60(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1001b9e08; end: 1001b9f23;  */

undefined8 FUN_1001b9e08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *apuStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 **ppuStack_48;
  
  uStack_58 = 0;
  lVar2 = param_1 + 0x28;
  uStack_60 = param_2;
  FUN_1001b9d60(lVar2,&uStack_60);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c613a0(uVar3,param_2,0xffffffff,&uStack_58,0);
    uVar1 = uStack_58;
    uVar4 = 0;
    if ((int)uVar3 == 0) {
      apuStack_78[0] = &uStack_60;
      lVar2 = param_1 + 0x28;
      FUN_1001ba1dc(lVar2,&uStack_60,&UNK_10dd5b8f9,apuStack_78,&ppuStack_48);
      uVar4 = uStack_58;
      *(undefined8 *)(lVar2 + 0x18) = uVar1;
      FUN_10002b838(apuStack_78,param_2);
      ppuStack_48 = apuStack_78;
      FUN_1001ba588(param_1,apuStack_78,&UNK_10dd5b8f9,&ppuStack_48,&uStack_49);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      uVar4 = uStack_58;
      if (cStack_61 < '\0') {
        func_0x000107c60e14(apuStack_78[0]);
        uVar4 = uStack_58;
      }
    }
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c613a4(uVar4);
    func_0x000107c61344(uVar4);
  }
  return uVar4;
}



/* Entry: 1001b9f24; end: 1001ba127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b9f24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  float fVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d9d580);
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef7f830);
  fVar4 = 10.0;
  func_0x000107c436e4(uVar3);
  func_0x000107c61170(uVar1);
  *(double *)(unaff_x20 + _DAT_112d9d570) = (double)fVar4;
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef7f850);
  uVar2 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  *(char *)(unaff_x20 + _DAT_112d9d578) = (char)uVar2;
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef7f880);
  uVar2 = uVar3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  *(char *)(unaff_x20 + _DAT_112d9d520) = (char)uVar2;
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef7f8b0);
  fVar4 = 4.0;
  func_0x000107c436e4(uVar3);
  func_0x000107c61170(uVar1);
  *(double *)(unaff_x20 + _DAT_112d9d528) = (double)fVar4;
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef7f8d0);
  fVar4 = 10.0;
  func_0x000107c436e4(uVar3);
  func_0x000107c61170(uVar1);
  *(double *)(unaff_x20 + _DAT_112d9d530) = (double)fVar4;
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010ef7f8f0);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  *(char *)(unaff_x20 + _DAT_112d9d538) = (char)uVar3;
  return;
}



/* Entry: 1001ba128; end: 1001ba1db; +[RequestDomainRoutingRule descriptor] */

void FUN_1001ba128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f47c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c73250,
                        &PTR____CFConstantStringClassReference_110f61158,&PTR_DAT_11336f2b8,
                        &PTR_DAT_11336f2d0,2,0x18,0x1c);
    puRam00000001137f47c0 = puVar1;
  }
  return;
}



/* Entry: 1001ba1dc; end: 1001ba587;  */

undefined1  [16] FUN_1001ba1dc(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong unaff_x23;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  uVar16 = *param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x23 = uVar5 & uVar16;
    }
    else {
      unaff_x23 = uVar16;
      if (uVar14 <= uVar16) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar16 / uVar14;
        }
        unaff_x23 = uVar16 - uVar8 * uVar14;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x23 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar7; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        uVar8 = plVar13[1];
        if (uVar8 == uVar16) {
          if (plVar13[2] == uVar16) {
            uVar4 = 0;
            goto LAB_1001ba510;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar14 <= uVar8) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar6 * uVar14;
          }
          if (uVar8 != unaff_x23) break;
        }
      }
    }
  }
  plVar13 = (long *)0x20;
  func_0x000107c60e20();
  *plVar13 = 0;
  plVar13[1] = uVar16;
  plVar13[2] = *(long *)*param_4;
  plVar13[3] = 0;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_1001ba49c;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar8) {
    uVar5 = uVar8;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    func_0x000107c60c44();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_1001ba330:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ba574);
      (*pcVar2)();
    }
    lVar15 = uVar5 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar15;
    if (lVar3 != 0) {
      func_0x000107c60e14();
      lVar15 = *param_1;
    }
    param_1[1] = uVar5;
    func_0x000107c60ee4(lVar15,uVar5 << 3);
    plVar9 = (long *)param_1[2];
    uVar14 = uVar5;
    if (plVar9 != (long *)0x0) {
      uVar8 = plVar9[1];
      uVar6 = uVar5 - 1;
      if ((uVar5 & uVar6) == 0) {
        uVar8 = uVar8 & uVar6;
      }
      else if (uVar5 <= uVar8) {
        uVar12 = 0;
        if (uVar5 != 0) {
          uVar12 = uVar8 / uVar5;
        }
        uVar8 = uVar8 - uVar12 * uVar5;
      }
      *(long **)(lVar15 + uVar8 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar5 & uVar6) == 0) {
          uVar12 = uVar12 & uVar6;
        }
        else if (uVar5 <= uVar12) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar12 / uVar5;
          }
          uVar12 = uVar12 - uVar1 * uVar5;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar8) {
          if (*(long *)(lVar15 + uVar12 * 8) == 0) {
            *(long **)(lVar15 + uVar12 * 8) = plVar9;
            uVar8 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar15 + uVar12 * 8);
            **(long **)(lVar15 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_1001ba330;
      lVar15 = *param_1;
      *param_1 = 0;
      if (lVar15 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x23 = uVar14 - 1 & uVar16;
  }
  else {
    unaff_x23 = uVar16;
    if (uVar14 <= uVar16) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar16 / uVar14;
      }
      unaff_x23 = uVar16 - uVar5 * uVar14;
    }
  }
LAB_1001ba49c:
  lVar15 = *param_1;
  plVar9 = *(long **)(lVar15 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
    *(long **)(lVar15 + unaff_x23 * 8) = plVar9;
    if (*plVar13 != 0) {
      uVar16 = *(ulong *)(*plVar13 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar16 = uVar16 & uVar14 - 1;
      }
      else if (uVar14 <= uVar16) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar16 / uVar14;
        }
        uVar16 = uVar16 - uVar5 * uVar14;
      }
      *(long **)(lVar15 + uVar16 * 8) = plVar13;
    }
  }
  else {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
  }
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_1001ba510:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = plVar13;
  return auVar17;
}



/* Entry: 1001ba588; end: 1001ba7bf;  */

undefined1  [16]
FUN_1001ba588(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar6 = param_1 + 3;
  FUN_100102e7c();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1 + 4;
          FUN_100105738(plVar3,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1001ba784;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x25) break;
        }
      }
    }
  }
  plVar7 = (long *)0x30;
  func_0x000107c60e20();
  *plVar7 = 0;
  plVar7[1] = (long)plVar6;
  plVar3 = (long *)*param_4;
  lVar10 = plVar3[1];
  lVar4 = *plVar3;
  plVar7[4] = plVar3[2];
  plVar7[3] = lVar10;
  plVar7[2] = lVar4;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  plVar7[5] = 0;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_100103130(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x25 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar6;
    if (*plVar7 != 0) {
      plVar6 = *(long **)(*plVar7 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar6 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_1001ba784:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 1001ba7c0; end: 1001ba807;  */

long * FUN_1001ba7c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    func_0x000107c60e14();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1001ba808; end: 1001ba84b;  */

void FUN_1001ba808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001ba84c; end: 1001ba84f;  */

void FUN_1001ba84c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1001ba850; end: 1001bc933;  */

/* WARNING: Removing unreachable block (ram,0x0001001ba8c0) */
/* WARNING: Removing unreachable block (ram,0x0001001ba8a8) */
/* WARNING: Removing unreachable block (ram,0x0001001ba89c) */
/* WARNING: Removing unreachable block (ram,0x0001001ba8b4) */
/* WARNING: Removing unreachable block (ram,0x0001001ba8cc) */

void FUN_1001ba850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xf8;
  func_0x000107c60e20();
  func_0x0001001ba9d4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1001bc934; end: 1001bc973;  */

long FUN_1001bc934(long param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x000107276f04(param_3,*(undefined8 *)(param_1 + 8),param_2);
    FUN_10016436c(param_1);
  }
  return param_2;
}



/* Entry: 1001bc974; end: 1001bc97b;  */

void FUN_1001bc974(void)

{
  return;
}



/* Entry: 1001bc97c; end: 1001bec93;  */

void FUN_1001bc97c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x138);
  return;
}



/* Entry: 1001bec94; end: 1001beca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001bec94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278ea04),
             PTR_s_notifyObserversForChangedObjects_112614f20,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1001beca8; end: 1001c1c8b;  */

void FUN_1001beca8(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001001becb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,unaff_x19 + 0x18,unaff_x19 + 0x38,unaff_x19 + 0x100,&stack0x00000028);
  return;
}



/* Entry: 1001c1c8c; end: 1001c1cc7;  */

void FUN_1001c1c8c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  lVar3 = *plVar1;
  plVar2 = param_1 + 1;
  *plVar2 = lVar3;
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar3 + 0x10) = plVar2;
    *param_2 = plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    return;
  }
  *param_1 = plVar2;
  return;
}



/* Entry: 1001c1cc8; end: 1001c1cf7;  */

void FUN_1001c1cc8(undefined1 *param_1)

{
  FUN_1001c1c8c(param_1 + 8);
  *param_1 = 1;
  return;
}



/* Entry: 1001c1cf8; end: 1001c1d5b;  */

void FUN_1001c1cf8(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  if (param_2 != 0) {
    FUN_1001246dc();
    FUN_1001c1cf8();
    FUN_1001c1cf8();
    func_0x000107c60ca0(unaff_x19 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1001c1d5c; end: 1001c1e2f;  */

void FUN_1001c1d5c(char *param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  undefined8 *extraout_x8;
  char *pcVar6;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  pcVar5 = param_1 + 8;
  if (*param_1 == '\x01') {
    return;
  }
  func_0x000107c2d060();
  extraout_x8[2] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = extraout_x8 + 1;
  pcVar6 = *(char **)pcVar5;
  while (pcVar6 != pcVar5 + 8) {
    uStack_50 = 0xaaaaaaaaaaaaaaaa;
    uStack_48 = 0xaaaaaaaaaaaaaaaa;
    uStack_58 = 0xaaaaaaaaaaaaaaaa;
    cVar4 = pcVar6[0x37];
    pcVar1 = *(char **)(pcVar6 + 0x20);
    if (-1 < (long)cVar4) {
      pcVar1 = pcVar6 + 0x20;
    }
    lVar2 = *(long *)(pcVar6 + 0x28);
    if (-1 < cVar4) {
      lVar2 = (long)cVar4;
    }
    func_0x000107c2eda0(&uStack_58,pcVar1,lVar2);
    uVar3 = uStack_50;
    if (-1 < (long)uStack_48) {
      uVar3 = uStack_48 >> 0x38;
    }
    if (uVar3 != 0) {
      func_0x0001008854e4(extraout_x8,&uStack_58);
    }
    func_0x000107c60ca0(&uStack_58);
    func_0x000100173644();
  }
  return;
}



/* Entry: 1001c1e30; end: 1001c1e3b;  */

void FUN_1001c1e30(void)

{
  return;
}



/* Entry: 1001c1e3c; end: 1001c1e9f;  */

void FUN_1001c1e3c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar4;
  
  FUN_1001c1e30();
  plVar4 = (long *)(param_1 + 8);
  FUN_1001c1cf8();
  *unaff_x20 = *unaff_x19;
  plVar1 = unaff_x19 + 1;
  lVar2 = *plVar1;
  *plVar4 = lVar2;
  lVar3 = unaff_x19[2];
  unaff_x20[2] = lVar3;
  if (lVar3 == 0) {
    *unaff_x20 = plVar4;
  }
  else {
    *(long **)(lVar2 + 0x10) = plVar4;
    *unaff_x19 = plVar1;
    *plVar1 = 0;
    unaff_x19[2] = 0;
  }
  return;
}



/* Entry: 1001c1ea0; end: 1001c5a33;  */

int FUN_1001c1ea0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 != -0x329) {
    iVar1 = -0x69;
  }
  if (1 < param_1 + 0x6aU && 1 < param_1 + 1U) {
    param_1 = iVar1;
  }
  return param_1;
}



/* Entry: 1001c5a34; end: 1001c5a3b;  */

void FUN_1001c5a34(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  long lStack_198;
  long lStack_188;
  code *pcStack_180;
  int iStack_174;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
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
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  puVar7 = &uStack_130;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  puVar6 = param_2;
  if ((**(uint **)(*(long *)(lVar13 + 0xa0) + 0x30) & 1) == 0) {
    iVar11 = *(int *)(lVar13 + 0xb8);
    if (*(int *)(lVar13 + 0xbc) != iVar11) {
LAB_1001c5aa0:
      if ((bRam000000011336f8f9 & 1) != 0) {
        FUN_10012bb38(iVar11);
      }
      *(int *)(lVar13 + 0xbc) = iVar11;
    }
  }
  else {
    iVar11 = 1;
    if (*(int *)(lVar13 + 0xbc) != 1) goto LAB_1001c5aa0;
  }
  bVar3 = bRam000000011383c630;
  lVar12 = *(long *)(param_1 + 0x28);
  bVar1 = *(byte *)(lVar12 + 0xe5);
  uVar14 = (ulong)bVar1;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_70 = &uStack_c8;
  puStack_58 = &uStack_78;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0xaaaaaaaaaaaaaa00;
  uStack_78 = 0xaaaaaaaaaaaaaa01;
  lVar13 = lVar12 + 0x28;
  lStack_118 = lVar12;
  puStack_68 = puStack_70;
  puStack_60 = puStack_70;
  puStack_50 = puStack_70;
  func_0x000107c61264();
  if ((int)lVar13 == 0) {
    FUN_100128a9c();
    *(long *)(param_1 + 0x20) = lVar13;
    bVar2 = *(byte *)(param_1 + 0x3a);
  }
  else {
    lVar13 = lVar12 + 0x28;
    func_0x000107c2cfbc();
    FUN_100128a9c();
    *(long *)(param_1 + 0x20) = lVar13;
    bVar2 = *(byte *)(param_1 + 0x3a);
  }
  if ((bVar2 & 1) != 0) goto LAB_1001c5d44;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001c5da4);
    (*pcVar4)();
  }
  bVar1 = bVar1 | bVar3;
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(int *)(*(long *)(param_1 + 0x28) + 0x15c) = *(int *)(*(long *)(param_1 + 0x28) + 0x15c) + 1;
    if (((int)param_2 != 1 & (bVar1 ^ 1)) != 0) goto LAB_1001c5bb4;
LAB_1001c5b58:
    *(undefined1 *)(param_1 + 0x38) = 1;
    lVar13 = *(long *)(param_1 + 0x28);
    uVar9 = *(long *)(lVar13 + 0x138) + 1;
    *(ulong *)(lVar13 + 0x138) = uVar9;
    if ((*(long *)(lVar13 + 0x70) == *(long *)(lVar13 + 0x78)) ||
       (*(ulong *)(lVar13 + 0x148) < uVar9)) {
      *(undefined2 *)(lVar13 + 0xa8) = 0;
    }
    else {
      *(undefined2 *)(lVar13 + 0xa8) = *(undefined2 *)(*(long *)(lVar13 + 0x70) + 0x10);
    }
    (**(code **)(**(long **)(param_1 + 0x28) + 0x40))(*(long **)(param_1 + 0x28),&uStack_130);
    lVar13 = *(long *)(param_1 + 0x28);
    bVar1 = *(byte *)(lVar13 + 0x180);
    puVar6 = (undefined1 *)puVar7;
  }
  else {
    if (((int)param_2 != 1 & (bVar1 ^ 1)) == 0) goto LAB_1001c5b58;
LAB_1001c5bb4:
    *(int *)(*(long *)(param_1 + 0x28) + 0x158) = *(int *)(*(long *)(param_1 + 0x28) + 0x158) + 1;
    lVar13 = *(long *)(param_1 + 0x28);
    bVar1 = *(byte *)(lVar13 + 0x180);
  }
  if ((bVar1 & 1) == 0) {
    lVar10 = *(long *)(lVar13 + 0x150);
    uVar14 = *(ulong *)(lVar13 + 0x88);
    if (uVar14 != 0) {
      if (*(int *)(*(long *)(lVar13 + 8) + 0x3c) == 0) {
        if ((char)(*(long **)(lVar13 + 0x70))[2] == '\0') {
          plVar5 = (long *)**(long **)(lVar13 + 0x70);
          (**(code **)(*plVar5 + 8))();
          uVar14 = (long)plVar5 + (uVar14 - 1);
          if (uVar14 < 2) {
            uVar14 = 1;
          }
        }
      }
      else {
        uVar14 = 0;
      }
    }
    if ((uVar14 + lVar10 <= *(ulong *)(lVar13 + 0x140)) || (*(int *)(lVar13 + 0x15c) < 1)) {
      lVar10 = *(long *)(lVar13 + 0x148);
      uVar14 = *(ulong *)(lVar13 + 0x88);
      if (uVar14 != 0) {
        if (*(int *)(*(long *)(lVar13 + 8) + 0x3c) == 0) {
          if ((char)(*(long **)(lVar13 + 0x70))[2] == '\0') {
            plVar5 = (long *)**(long **)(lVar13 + 0x70);
            (**(code **)(*plVar5 + 8))();
            uVar14 = (long)plVar5 + (uVar14 - 1);
            if (uVar14 < 2) {
              uVar14 = 1;
            }
          }
        }
        else {
          uVar14 = 0;
        }
      }
      uVar9 = *(long *)(lVar13 + 0x98) + *(long *)(lVar13 + 0x90);
      if (uVar9 != 0) {
        if (*(uint *)(*(long *)(lVar13 + 8) + 0x3c) < 2) {
          if (*(byte *)(*(long **)(lVar13 + 0x70) + 2) - 1 < 2) {
            plVar5 = (long *)**(long **)(lVar13 + 0x70);
            (**(code **)(*plVar5 + 8))();
            uVar9 = (long)plVar5 + (uVar9 - 1);
            if (uVar9 < 2) {
              uVar9 = 1;
            }
          }
        }
        else {
          uVar9 = 0;
        }
      }
      if ((lVar10 + uVar14 + uVar9 + 1 <= *(ulong *)(lVar13 + 0x138)) ||
         (*(int *)(lVar13 + 0x158) < 1)) goto LAB_1001c5d44;
    }
    uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
    *(undefined1 *)(lVar13 + 0x180) = 1;
  }
LAB_1001c5d44:
  func_0x000107c61268(lVar12 + 0x28);
  FUN_10012a76c(&uStack_130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  plVar5 = (long *)*param_3;
  if (plVar5 == (long *)0x0) {
    func_0x0001001c5db4(&lStack_1b0);
    lVar13 = lStack_1b0;
    lStack_1b0 = 0;
    lVar10 = *param_3;
    *param_3 = lVar13;
    if (lVar10 != 0) {
      func_0x0001001d82c4();
      lVar13 = lStack_1b0;
      lStack_1b0 = 0;
      if (lVar13 != 0) {
        func_0x0001001d82c4();
      }
    }
    plVar5 = (long *)*param_3;
  }
  iStack_174 = 0;
  lStack_188 = -0x5555555555555556;
  pcStack_180 = (code *)0xaaaaaaaaaaaaaaaa;
  (**(code **)(*plVar5 + 0x10))(&lStack_188,plVar5,uVar14,puVar6,&iStack_174,lVar12);
  lStack_1a8 = lStack_188;
  if (lStack_188 == 0) {
    uVar8 = 0xffffff77;
    if (0xfffffffd < iStack_174 - 9U) {
      uVar8 = 0xffffff97;
    }
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    lStack_198 = 0;
    pcStack_1a0 = (code *)0x0;
    func_0x0001001d7e88();
    *(undefined4 *)(extraout_x8 + 0x20) = uVar8;
    *(int *)(extraout_x8 + 0x24) = iStack_174;
    func_0x0001001d7f64(&lStack_1b0);
  }
  else {
    lStack_188 = 0;
    lStack_198 = *param_3;
    *param_3 = 0;
    lStack_1b0 = CONCAT71(lStack_1b0._1_7_,1);
    uStack_1c8 = 0;
    pcStack_1c0 = pcStack_180;
    pcStack_1a0 = pcStack_180;
    uStack_1b8 = 0;
    func_0x0001001d7e88();
    *(undefined8 *)(extraout_x8 + 0x20) = 0;
    func_0x0001001d7f64(&lStack_1b0);
    func_0x0001001d7f2c(&uStack_1c8);
  }
  lVar13 = lStack_188;
  lStack_188 = 0;
  if (lVar13 != 0) {
    (*pcStack_180)();
  }
  return;
}



/* Entry: 1001c5a3c; end: 1001c5da7;  */

void FUN_1001c5a3c(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  long lStack_198;
  long lStack_188;
  code *pcStack_180;
  int iStack_174;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
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
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  puVar7 = &uStack_130;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar6 = param_2;
  if ((**(uint **)(*(long *)(lVar13 + 0xa0) + 0x30) & 1) == 0) {
    iVar11 = *(int *)(lVar13 + 0xb8);
    if (*(int *)(lVar13 + 0xbc) != iVar11) {
LAB_1001c5aa0:
      if ((bRam000000011336f8f9 & 1) != 0) {
        FUN_10012bb38(iVar11);
      }
      *(int *)(lVar13 + 0xbc) = iVar11;
    }
  }
  else {
    iVar11 = 1;
    if (*(int *)(lVar13 + 0xbc) != 1) goto LAB_1001c5aa0;
  }
  bVar3 = bRam000000011383c630;
  lVar12 = *(long *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar12 + 0xe5);
  uVar14 = (ulong)bVar1;
  uStack_88 = 0xaaaaaaaaaaaaaaaa;
  uStack_90 = 0xaaaaaaaaaaaaaaaa;
  uStack_80 = 0xaaaaaaaaaaaaaaaa;
  uStack_a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_98 = 0xaaaaaaaaaaaaaaaa;
  uStack_a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_70 = &uStack_c8;
  puStack_58 = &uStack_78;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0xaaaaaaaaaaaaaa00;
  uStack_78 = 0xaaaaaaaaaaaaaa01;
  lVar13 = lVar12 + 0x28;
  lStack_118 = lVar12;
  puStack_68 = puStack_70;
  puStack_60 = puStack_70;
  puStack_50 = puStack_70;
  func_0x000107c61264();
  if ((int)lVar13 == 0) {
    FUN_100128a9c();
    *(long *)(param_1 + 0x28) = lVar13;
    bVar2 = *(byte *)(param_1 + 0x42);
  }
  else {
    lVar13 = lVar12 + 0x28;
    func_0x000107c2cfbc();
    FUN_100128a9c();
    *(long *)(param_1 + 0x28) = lVar13;
    bVar2 = *(byte *)(param_1 + 0x42);
  }
  if ((bVar2 & 1) != 0) goto LAB_1001c5d44;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1001c5da4);
    (*pcVar4)();
  }
  bVar1 = bVar1 | bVar3;
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(int *)(*(long *)(param_1 + 0x30) + 0x15c) = *(int *)(*(long *)(param_1 + 0x30) + 0x15c) + 1;
    if (((int)param_2 != 1 & (bVar1 ^ 1)) != 0) goto LAB_1001c5bb4;
LAB_1001c5b58:
    *(undefined1 *)(param_1 + 0x40) = 1;
    lVar13 = *(long *)(param_1 + 0x30);
    uVar9 = *(long *)(lVar13 + 0x138) + 1;
    *(ulong *)(lVar13 + 0x138) = uVar9;
    if ((*(long *)(lVar13 + 0x70) == *(long *)(lVar13 + 0x78)) ||
       (*(ulong *)(lVar13 + 0x148) < uVar9)) {
      *(undefined2 *)(lVar13 + 0xa8) = 0;
    }
    else {
      *(undefined2 *)(lVar13 + 0xa8) = *(undefined2 *)(*(long *)(lVar13 + 0x70) + 0x10);
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x40))(*(long **)(param_1 + 0x30),&uStack_130);
    lVar13 = *(long *)(param_1 + 0x30);
    bVar1 = *(byte *)(lVar13 + 0x180);
    puVar6 = (undefined1 *)puVar7;
  }
  else {
    if (((int)param_2 != 1 & (bVar1 ^ 1)) == 0) goto LAB_1001c5b58;
LAB_1001c5bb4:
    *(int *)(*(long *)(param_1 + 0x30) + 0x158) = *(int *)(*(long *)(param_1 + 0x30) + 0x158) + 1;
    lVar13 = *(long *)(param_1 + 0x30);
    bVar1 = *(byte *)(lVar13 + 0x180);
  }
  if ((bVar1 & 1) == 0) {
    lVar10 = *(long *)(lVar13 + 0x150);
    uVar14 = *(ulong *)(lVar13 + 0x88);
    if (uVar14 != 0) {
      if (*(int *)(*(long *)(lVar13 + 8) + 0x3c) == 0) {
        if ((char)(*(long **)(lVar13 + 0x70))[2] == '\0') {
          plVar5 = (long *)**(long **)(lVar13 + 0x70);
          (**(code **)(*plVar5 + 8))();
          uVar14 = (long)plVar5 + (uVar14 - 1);
          if (uVar14 < 2) {
            uVar14 = 1;
          }
        }
      }
      else {
        uVar14 = 0;
      }
    }
    if ((uVar14 + lVar10 <= *(ulong *)(lVar13 + 0x140)) || (*(int *)(lVar13 + 0x15c) < 1)) {
      lVar10 = *(long *)(lVar13 + 0x148);
      uVar14 = *(ulong *)(lVar13 + 0x88);
      if (uVar14 != 0) {
        if (*(int *)(*(long *)(lVar13 + 8) + 0x3c) == 0) {
          if ((char)(*(long **)(lVar13 + 0x70))[2] == '\0') {
            plVar5 = (long *)**(long **)(lVar13 + 0x70);
            (**(code **)(*plVar5 + 8))();
            uVar14 = (long)plVar5 + (uVar14 - 1);
            if (uVar14 < 2) {
              uVar14 = 1;
            }
          }
        }
        else {
          uVar14 = 0;
        }
      }
      uVar9 = *(long *)(lVar13 + 0x98) + *(long *)(lVar13 + 0x90);
      if (uVar9 != 0) {
        if (*(uint *)(*(long *)(lVar13 + 8) + 0x3c) < 2) {
          if (*(byte *)(*(long **)(lVar13 + 0x70) + 2) - 1 < 2) {
            plVar5 = (long *)**(long **)(lVar13 + 0x70);
            (**(code **)(*plVar5 + 8))();
            uVar9 = (long)plVar5 + (uVar9 - 1);
            if (uVar9 < 2) {
              uVar9 = 1;
            }
          }
        }
        else {
          uVar9 = 0;
        }
      }
      if ((lVar10 + uVar14 + uVar9 + 1 <= *(ulong *)(lVar13 + 0x138)) ||
         (*(int *)(lVar13 + 0x158) < 1)) goto LAB_1001c5d44;
    }
    uStack_d0 = CONCAT71(uStack_d0._1_7_,1);
    *(undefined1 *)(lVar13 + 0x180) = 1;
  }
LAB_1001c5d44:
  func_0x000107c61268(lVar12 + 0x28);
  FUN_10012a76c(&uStack_130);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  plVar5 = (long *)*param_3;
  if (plVar5 == (long *)0x0) {
    func_0x0001001c5db4(&lStack_1b0);
    lVar13 = lStack_1b0;
    lStack_1b0 = 0;
    lVar10 = *param_3;
    *param_3 = lVar13;
    if (lVar10 != 0) {
      func_0x0001001d82c4();
      lVar13 = lStack_1b0;
      lStack_1b0 = 0;
      if (lVar13 != 0) {
        func_0x0001001d82c4();
      }
    }
    plVar5 = (long *)*param_3;
  }
  iStack_174 = 0;
  lStack_188 = -0x5555555555555556;
  pcStack_180 = (code *)0xaaaaaaaaaaaaaaaa;
  (**(code **)(*plVar5 + 0x10))(&lStack_188,plVar5,uVar14,puVar6,&iStack_174,lVar12);
  lStack_1a8 = lStack_188;
  if (lStack_188 == 0) {
    uVar8 = 0xffffff77;
    if (0xfffffffd < iStack_174 - 9U) {
      uVar8 = 0xffffff97;
    }
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    lStack_198 = 0;
    pcStack_1a0 = (code *)0x0;
    func_0x0001001d7e88();
    *(undefined4 *)(extraout_x8 + 0x20) = uVar8;
    *(int *)(extraout_x8 + 0x24) = iStack_174;
    func_0x0001001d7f64(&lStack_1b0);
  }
  else {
    lStack_188 = 0;
    lStack_198 = *param_3;
    *param_3 = 0;
    lStack_1b0 = CONCAT71(lStack_1b0._1_7_,1);
    uStack_1c8 = 0;
    pcStack_1c0 = pcStack_180;
    pcStack_1a0 = pcStack_180;
    uStack_1b8 = 0;
    func_0x0001001d7e88();
    *(undefined8 *)(extraout_x8 + 0x20) = 0;
    func_0x0001001d7f64(&lStack_1b0);
    func_0x0001001d7f2c(&uStack_1c8);
  }
  lVar13 = lStack_188;
  lStack_188 = 0;
  if (lVar13 != 0) {
    (*pcStack_180)();
  }
  return;
}



/* Entry: 1001c5da8; end: 1001c7003;  */

void FUN_1001c5da8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  long lStack_68;
  long lStack_58;
  code *pcStack_50;
  int iStack_44;
  
  plVar2 = (long *)*param_4;
  if (plVar2 == (long *)0x0) {
    func_0x0001001c5db4(&lStack_80);
    lVar1 = lStack_80;
    lStack_80 = 0;
    lVar3 = *param_4;
    *param_4 = lVar1;
    if (lVar3 != 0) {
      func_0x0001001d82c4();
      lVar1 = lStack_80;
      lStack_80 = 0;
      if (lVar1 != 0) {
        func_0x0001001d82c4();
      }
    }
    plVar2 = (long *)*param_4;
  }
  iStack_44 = 0;
  lStack_58 = -0x5555555555555556;
  pcStack_50 = (code *)0xaaaaaaaaaaaaaaaa;
  (**(code **)(*plVar2 + 0x10))(&lStack_58);
  lStack_78 = lStack_58;
  if (lStack_58 == 0) {
    uVar4 = 0xffffff77;
    if (0xfffffffd < iStack_44 - 9U) {
      uVar4 = 0xffffff97;
    }
    lStack_78 = 0;
    lStack_80 = 0;
    lStack_68 = 0;
    pcStack_70 = (code *)0x0;
    func_0x0001001d7e88();
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    *(int *)(param_1 + 0x24) = iStack_44;
    func_0x0001001d7f64(&lStack_80);
  }
  else {
    lStack_58 = 0;
    lStack_68 = *param_4;
    *param_4 = 0;
    lStack_80 = CONCAT71(lStack_80._1_7_,1);
    uStack_98 = 0;
    pcStack_90 = pcStack_50;
    pcStack_70 = pcStack_50;
    uStack_88 = 0;
    func_0x0001001d7e88();
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x0001001d7f64(&lStack_80);
    func_0x0001001d7f2c(&uStack_98);
  }
  lVar1 = lStack_58;
  lStack_58 = 0;
  if (lVar1 != 0) {
    (*pcStack_50)();
  }
  return;
}



/* Entry: 1001c7004; end: 1001c7043;  */

void FUN_1001c7004(void)

{
  FUN_1000285a8(0x112e07b90,&UNK_10d9dc200);
  FUN_1000823a8(FUN_10079b760,0);
  return;
}



/* Entry: 1001c7044; end: 1001c70c3;  */

void FUN_1001c7044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ded0c0,&UNK_10d9b9580);
  puVar1 = &UNK_11042eba8;
  func_0x000107c613fc(&UNK_11042eba8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100722170,puVar1);
  return;
}



/* Entry: 1001c70c4; end: 1001c70e3;  */

void FUN_1001c70c4(void)

{
  func_0x000107c61168(&PTR_PTR_112ded138);
  return;
}



/* Entry: 1001c70e4; end: 1001c7193; +[SCDocObjectContext setDocObjectCurrentContext:] */

/* WARNING: Possible PIC construction at 0x0001001c713c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001c7140) */

void FUN_1001c70e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c41010(PTR__OBJC_CLASS___NSThread_1126b47e0);
  func_0x000107c61180();
  func_0x000107c5c8f4();
  func_0x000107c61180();
  func_0x000107c56bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1001c7194; end: 1001c72fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1001c7194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff90;
  *(undefined8 *)(unaff_x20 + _DAT_1130807f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130807f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113080810) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113080800) = param_4;
  puVar1 = &UNK_11077cb98;
  func_0x000107c613fc(&UNK_11077cb98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  FUN_1000285a8(0x113080818,&UNK_10dd0c1e8);
  func_0x000107c613fc();
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  pcVar2 = FUN_1001c8a14;
  FUN_1000bdd8c(FUN_1001c8a14,puVar1);
  *(code **)(unaff_x20 + _DAT_113080808) = pcVar2;
  FUN_1000a06bc();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_6);
  return puVar3;
}



/* Entry: 1001c72fc; end: 1001c7347;  */

void FUN_1001c72fc(undefined8 param_1)

{
  FUN_1000285a8(0x112dc2260,&UNK_10d97ed10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10079de94,param_1);
  return;
}



/* Entry: 1001c7348; end: 1001c739b; -[SCSQLiteDocObjectTransactionContext .cxx_construct] */

void FUN_1001c7348(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 8;
  *(undefined8 *)(param_1 + 0xa0) = 0x400;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 1;
  *(undefined2 *)(param_1 + 0xe0) = 0x100;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}



/* Entry: 1001c739c; end: 1001c745f;  */

undefined1 * FUN_1001c739c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_112706600;
    lStack_40 = param_1;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      func_0x000107c611a0((undefined1 *)((long)plVar1 + 0x40),param_2);
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      func_0x000107c61174(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = param_4;
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return puVar3;
}



/* Entry: 1001c7460; end: 1001c751b;  */

/* WARNING: Possible PIC construction at 0x0001001c74e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001c74e4) */

void FUN_1001c7460(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126e0350;
  FUN_1001c751c(PTR_PTR_1126e0350,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e0350;
    func_0x000107c3068c(PTR_PTR_1126e0350,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
  }
  else {
    FUN_1001cc1f4(*(undefined8 *)(param_1 + 0x20),puVar1);
  }
  func_0x000107c5c28c(param_2);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1001c751c; end: 1001c758f;  */

void FUN_1001c751c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61168(param_1);
  lVar1 = param_2;
  FUN_1001c75fc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1001c7590; end: 1001c75af;  */

void FUN_1001c7590(void)

{
  func_0x000107c61168(&PTR_PTR_1129c35c8);
  return;
}



/* Entry: 1001c75b0; end: 1001c75fb;  */

void FUN_1001c75b0(undefined8 param_1)

{
  FUN_1000285a8(0x11303e9c8,&UNK_10dcb7ab0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f4b0c,param_1);
  return;
}



/* Entry: 1001c75fc; end: 1001c7a7f;  */

void FUN_1001c75fc(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  func_0x000107c61174();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x000107c50940();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x000107c4a8c4();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x000107c421f0();
        func_0x000107c61180();
        puVar10 = puVar1;
        func_0x000107c41220();
        func_0x000107c61170(puVar1);
        FUN_1001b9e08(puVar10,&UNK_10f78064f);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x000107c4a8c4(param_2);
          func_0x000107c61180();
          func_0x000107c61174();
          puVar2 = puVar1;
          func_0x000107c61178(puVar1);
          func_0x000107c3ac4c();
          func_0x000107c61338(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
          func_0x000107c61170(puVar1);
          func_0x000107c61170(puVar1);
          puVar1 = puVar10;
          func_0x000107c613a8();
          if ((int)puVar1 == 100) {
            puVar1 = puVar10;
            func_0x000107c61358(puVar10,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x000107c421f0();
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126e0340);
            func_0x000107c6134c(puVar10,1);
            func_0x000107c61350(puVar10,1);
            puVar3 = puVar2;
            func_0x000107c4d9b8();
            func_0x000107c61180();
            func_0x000107c61170(param_2);
            func_0x000107c61170(puVar2);
            func_0x000107c613a4(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_1001c79ac;
            puVar10 = PTR_PTR_1126e0350;
            func_0x000107c610f4(PTR_PTR_1126e0350);
            puVar2 = puVar3;
            func_0x000107c4a8c4(puVar3);
            func_0x000107c61180();
            puVar4 = puVar3;
            func_0x000107c4d3ec(puVar3);
            func_0x000107c61180();
            puVar5 = puVar3;
            func_0x000107c5dba0(puVar3);
            puVar6 = puVar3;
            func_0x000107c5db80(puVar3);
            puVar7 = puVar3;
            func_0x000107c5db98(puVar3);
            puVar8 = puVar3;
            func_0x000107c5dba8(puVar3);
            func_0x000107c5db90(puVar3);
            uVar11 = param_1;
            func_0x000107c5db88(puVar3);
            puVar9 = puVar3;
            func_0x000107c5db8c();
            func_0x000107c61180();
            FUN_1001cc0ac(param_1,uVar11,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,
                          puVar9);
            param_2 = puVar3;
            goto LAB_1001c776c;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x000107c50940(param_2);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      func_0x000107c61158(PTR_PTR_1126e0340);
      puVar3 = puVar10;
      func_0x000107c4d9b8();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c61170(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126e0350;
        func_0x000107c610f4(PTR_PTR_1126e0350);
        puVar2 = puVar3;
        func_0x000107c4a8c4(puVar3);
        func_0x000107c61180();
        puVar4 = puVar3;
        func_0x000107c4d3ec(puVar3);
        func_0x000107c61180();
        puVar5 = puVar3;
        func_0x000107c5dba0(puVar3);
        puVar6 = puVar3;
        func_0x000107c5db80(puVar3);
        puVar7 = puVar3;
        func_0x000107c5db98(puVar3);
        puVar8 = puVar3;
        func_0x000107c5dba8(puVar3);
        func_0x000107c5db90(puVar3);
        uVar11 = param_1;
        func_0x000107c5db88(puVar3);
        puVar9 = puVar3;
        func_0x000107c5db8c();
        func_0x000107c61180();
        FUN_1001cc0ac(param_1,uVar11,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9
                     );
        param_2 = puVar3;
LAB_1001c776c:
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar2);
        goto LAB_1001c79b4;
      }
LAB_1001c79ac:
      param_2 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_1001c79b4:
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1001c7a80; end: 1001c7a9f;  */

void FUN_1001c7a80(void)

{
  func_0x000107c61168(&PTR_PTR_112975d10);
  return;
}



/* Entry: 1001c7aa0; end: 1001c7abb;  */

void FUN_1001c7aa0(undefined8 param_1)

{
  FUN_1000285a8(0x112ded758,&UNK_10d9ba280);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3bbc8,param_1);
  return;
}



/* Entry: 1001c7abc; end: 1001c7b0b;  */

void FUN_1001c7abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001c7b0c; end: 1001c7b2b;  */

void FUN_1001c7b0c(void)

{
  func_0x000107c61168(&PTR_PTR_112ded7d0);
  return;
}



/* Entry: 1001c7b2c; end: 1001c7b47;  */

void FUN_1001c7b2c(undefined8 param_1)

{
  FUN_1000285a8(0x112ded760,&UNK_10d9ba288);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3bcbc,param_1);
  return;
}



/* Entry: 1001c7b48; end: 1001c7b67;  */

void FUN_1001c7b48(void)

{
  func_0x000107c61168(&PTR_PTR_112975f50);
  return;
}



/* Entry: 1001c7b68; end: 1001c7b83;  */

void FUN_1001c7b68(undefined8 param_1)

{
  FUN_1000285a8(0x112ded930,&UNK_10d9ba620);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3bf74,param_1);
  return;
}



/* Entry: 1001c7b84; end: 1001c7bd3;  */

void FUN_1001c7b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001c7bd4; end: 1001c7bf3;  */

void FUN_1001c7bd4(void)

{
  func_0x000107c61168(&PTR_PTR_112ded9a8);
  return;
}



/* Entry: 1001c7bf4; end: 1001c7c0f;  */

void FUN_1001c7bf4(undefined8 param_1)

{
  FUN_1000285a8(0x112ded938,&UNK_10d9ba628);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3c068,param_1);
  return;
}



/* Entry: 1001c7c10; end: 1001c7c2f;  */

void FUN_1001c7c10(void)

{
  func_0x000107c61168(&PTR_PTR_11285f478);
  return;
}



/* Entry: 1001c7c30; end: 1001c7cbb;  */

void FUN_1001c7c30(void)

{
  FUN_1000285a8(0x112dc2758,&UNK_10d97f430);
  FUN_1000823a8(&UNK_1016e1bd4,0);
  return;
}



/* Entry: 1001c7cbc; end: 1001c7cdb;  */

void FUN_1001c7cbc(void)

{
  func_0x000107c61168(&PTR_PTR_112955f88);
  return;
}



/* Entry: 1001c7cdc; end: 1001c7de7;  */

void FUN_1001c7cdc(void)

{
  FUN_1000285a8(0x112dd79e0,&UNK_10d99a9a0);
  FUN_1000823a8(&UNK_10194a69c,0);
  return;
}



/* Entry: 1001c7de8; end: 1001c7e07;  */

void FUN_1001c7de8(void)

{
  func_0x000107c61168(&PTR_PTR_112805bc8);
  return;
}



/* Entry: 1001c7e08; end: 1001c7e17;  */

void FUN_1001c7e08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_lock_11034c908)(0x113170128);
  return;
}



/* Entry: 1001c7e18; end: 1001c7ee7;  */

void FUN_1001c7e18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_5c;
  int iStack_54;
  undefined1 auStack_38 [8];
  
  FUN_1001c7e08();
  func_0x000107c613c8();
  uVar1 = param_2;
  uRam000000011381b458 = param_1;
  func_0x000107c613c8();
  uRam000000011381b460 = uVar1;
  FUN_1001b79c8(param_2);
  FUN_1001c8ed4();
  func_0x000107c61698(auStack_38);
  func_0x000107c6102c(auStack_38,&iStack_70);
  uVar2 = ((long)iStack_70 + (long)iStack_6c * 0x3d + (long)iStack_68 * 0xe4c +
           (long)iStack_54 * 0x15720 + (long)iStack_5c * 0x1ea8fc0) * 0x800000;
  uRam000000011381b468 = uVar2 & 0xffffffff00000000;
  uRam000000011381b470 = (undefined4)uVar2;
  func_0x000107c61268();
  return;
}



/* Entry: 1001c7ee8; end: 1001c7eeb;  */

void FUN_1001c7ee8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1001c7eec; end: 1001c7f7f;  */

void FUN_1001c7eec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4af88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f7fc(0xff);
  puVar2 = PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8;
  func_0x000107c61520(PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8,uVar1);
  puRam0000000112d4af88 = puVar2;
  return;
}



/* Entry: 1001c7f80; end: 1001c7fab;  */

void FUN_1001c7f80(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = uRam00000001138473b0;
  uRam00000001138473b0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001c7fac; end: 1001c7fb7;  */

void FUN_1001c7fac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126a6db0;
  func_0x000107c610f8();
  func_0x000107c4622c();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1001c7fb8; end: 1001c8073;  */

void FUN_1001c7fb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a6db0;
  func_0x000107c610f8();
  func_0x000107c4622c();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1001c8074; end: 1001c8153; -[SCKSCrashManagerTweaks initWithCrashLogger:blizzardCrashLogger:metricLogger:preferences:] */

undefined8 FUN_1001c8074(void)

{
  func_0x000107c61170();
  return 0;
}



/* Entry: 1001c8154; end: 1001c815b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c8154(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long *plStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  plVar9 = *(long **)(lStack_48 + _DAT_113083e08);
  func_0x000107c6157c(plVar9);
  func_0x000107c61170(lStack_48);
  FUN_1000d224c(&plStack_50);
  func_0x000107c61574(plVar9);
  if (plStack_50 == (long *)0x0) {
LAB_1001c82a8:
    func_0x0001000ad7c4();
  }
  else {
    plVar4 = plStack_50;
    func_0x000107c4a98c();
    func_0x000107c61180();
    func_0x000107c615e8(plStack_50);
    plVar9 = plVar4;
    func_0x000107c5f9e8(plVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170();
    FUN_1001c842c();
    if (plVar9[2] == 0) {
LAB_1001c82a0:
      func_0x000107c6142c(plVar9);
      goto LAB_1001c82a8;
    }
    lVar5 = *plVar4;
    uVar2 = plVar4[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61434(plVar9);
    uVar7 = uVar2;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(plVar9);
      goto LAB_1001c82a0;
    }
    puVar1 = (undefined8 *)(plVar9[7] + lVar5 * 0x10);
    uVar8 = *puVar1;
    lVar5 = puVar1[1];
    func_0x000107c61434(lVar5);
    func_0x000107c6142c(uVar2);
    func_0x000107c61430(plVar9,2);
    func_0x0001000ad7c4();
    if (lVar5 != 0) {
      func_0x000107c5fadc(uVar8,lVar5);
      func_0x000107c6142c(lVar5);
      goto LAB_1001c82b8;
    }
  }
  uVar8 = 0;
LAB_1001c82b8:
  puVar6 = PTR_PTR_1126a6d88;
  func_0x000107c610f8();
  func_0x000107c470e0();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(uVar8);
  if (puVar6 != (undefined *)0x0) {
    *param_1 = puVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c8308);
  (*pcVar3)();
}



/* Entry: 1001c815c; end: 1001c8307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c815c(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  plVar9 = *(long **)(lStack_48 + _DAT_113083e08);
  func_0x000107c6157c(plVar9);
  func_0x000107c61170(lStack_48);
  FUN_1000d224c(&plStack_50);
  func_0x000107c61574(plVar9);
  if (plStack_50 == (long *)0x0) {
LAB_1001c82a8:
    func_0x0001000ad7c4();
  }
  else {
    plVar4 = plStack_50;
    func_0x000107c4a98c();
    func_0x000107c61180();
    func_0x000107c615e8(plStack_50);
    plVar9 = plVar4;
    func_0x000107c5f9e8(plVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170();
    FUN_1001c842c();
    if (plVar9[2] == 0) {
LAB_1001c82a0:
      func_0x000107c6142c(plVar9);
      goto LAB_1001c82a8;
    }
    lVar5 = *plVar4;
    uVar2 = plVar4[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61434(plVar9);
    uVar7 = uVar2;
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(plVar9);
      goto LAB_1001c82a0;
    }
    puVar1 = (undefined8 *)(plVar9[7] + lVar5 * 0x10);
    uVar8 = *puVar1;
    lVar5 = puVar1[1];
    func_0x000107c61434(lVar5);
    func_0x000107c6142c(uVar2);
    func_0x000107c61430(plVar9,2);
    func_0x0001000ad7c4();
    if (lVar5 != 0) {
      func_0x000107c5fadc(uVar8,lVar5);
      func_0x000107c6142c(lVar5);
      goto LAB_1001c82b8;
    }
  }
  uVar8 = 0;
LAB_1001c82b8:
  puVar6 = PTR_PTR_1126a6d88;
  func_0x000107c610f8();
  func_0x000107c470e0();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(uVar8);
  if (puVar6 != (undefined *)0x0) {
    *param_1 = puVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001c8308);
  (*pcVar3)();
}



/* Entry: 1001c8308; end: 1001c842b; -[_TtC33SCAppInsightsMetadataServicesImpl28SCAppInsightsMetadataStorage lastAppSessionMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c8308(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1000d224c(&uStack_38);
  func_0x0001001c8394();
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5f9dc(uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1001c842c; end: 1001c8437;  */

undefined * FUN_1001c842c(void)

{
  return &UNK_1103ce8b8;
}



/* Entry: 1001c8438; end: 1001c84db; -[SCBlizzardCrashLogger initWithLastPageView:blizzardLogger:] */

undefined1 *
FUN_1001c8438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7358;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1001c84dc; end: 1001c8507;  */

void FUN_1001c84dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001c8508; end: 1001c8587;  */

void FUN_1001c8508(void)

{
  FUN_1000285a8(0x112dc32a8,&UNK_10d980650);
  FUN_1000823a8(&UNK_1016fac3c,0);
  return;
}



/* Entry: 1001c8588; end: 1001c8607;  */

void FUN_1001c8588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc3490,&UNK_10d9809a0);
  puVar1 = &UNK_1103fc8e0;
  func_0x000107c613fc(&UNK_1103fc8e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1004fa904,puVar1);
  return;
}



/* Entry: 1001c8608; end: 1001c8627;  */

void FUN_1001c8608(void)

{
  func_0x000107c61168(&PTR_PTR_112977898);
  return;
}



/* Entry: 1001c8628; end: 1001c8673;  */

void FUN_1001c8628(undefined8 param_1)

{
  FUN_1000285a8(0x113040358,&UNK_10dcb9bb8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009ab2d8,param_1);
  return;
}



/* Entry: 1001c8674; end: 1001c8693;  */

void FUN_1001c8674(void)

{
  func_0x000107c61168(&PTR_PTR_1129776c8);
  return;
}



/* Entry: 1001c8694; end: 1001c86df;  */

void FUN_1001c8694(undefined8 param_1)

{
  FUN_1000285a8(0x112dc34d8,&UNK_10d980ac0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003fbb80,param_1);
  return;
}



/* Entry: 1001c86e0; end: 1001c86ff;  */

void FUN_1001c86e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5bd0);
  return;
}



/* Entry: 1001c8700; end: 1001c87bb;  */

void FUN_1001c8700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de8508,&UNK_10d9b3170);
  puVar1 = &UNK_110429d80;
  func_0x000107c613fc(&UNK_110429d80,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1003ca304,puVar1);
  return;
}



/* Entry: 1001c87bc; end: 1001c87db;  */

void FUN_1001c87bc(void)

{
  func_0x000107c61168(&PTR_PTR_112de8580);
  return;
}



/* Entry: 1001c87dc; end: 1001c87f7;  */

void FUN_1001c87dc(undefined8 param_1)

{
  FUN_1000285a8(0x112de8510,&UNK_10d9b3180);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003ca2a8,param_1);
  return;
}



/* Entry: 1001c87f8; end: 1001c8847;  */

void FUN_1001c87f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001c8848; end: 1001c885f;  */

void FUN_1001c8848(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  puVar3 = *(ulong **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x78))();
  func_0x000107c4aa50(uVar2);
  puVar4 = PTR_PTR_1126a6da8;
  func_0x000107c61168(PTR_PTR_1126a6da8);
  puVar5 = puVar4;
  func_0x0001000ad7c4();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_70 = FUN_100213268;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x100213230;
  puStack_78 = &UNK_1103b7c28;
  ppuVar7 = &puStack_90;
  uStack_68 = uVar1;
  func_0x000107c60bc4();
  uVar2 = uStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x0001000ad7c4();
  func_0x000107c50270(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(ppuVar7);
  return;
}



/* Entry: 1001c8860; end: 1001c8897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001c8860(void)

{
  undefined8 uStack_28;
  
  FUN_1000d224c(&uStack_28);
  return uStack_28;
}



/* Entry: 1001c8898; end: 1001c8a13;  */

void FUN_1001c8898(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x78))();
  func_0x000107c4aa50(param_2);
  puVar2 = PTR_PTR_1126a6da8;
  func_0x000107c61168(PTR_PTR_1126a6da8);
  puVar3 = puVar2;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_70 = FUN_100213268;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x100213230;
  puStack_78 = &UNK_1103b7c28;
  ppuVar5 = &puStack_90;
  uStack_68 = param_5;
  func_0x000107c60bc4();
  uVar1 = uStack_68;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x0001000ad7c4();
  func_0x000107c50270(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(ppuVar5);
  return;
}



/* Entry: 1001c8a14; end: 1001c8a17;  */

void FUN_1001c8a14(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1001c8a18; end: 1001c8a3f;  */

void FUN_1001c8a18(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 1001c8a40; end: 1001c8a4f;  */

undefined * FUN_1001c8a40(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_90;
  func_0x000107c4aa50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  puVar1 = PTR_PTR_1126a6da8;
  func_0x000107c61168(PTR_PTR_1126a6da8);
  FUN_100083b20(&uStack_58);
  func_0x000107c4aa4c(uStack_58);
  func_0x000107c615e8(uStack_58);
  FUN_100083b20(&uStack_60);
  pcStack_70 = FUN_1001de3ac;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1001de374;
  puStack_78 = &UNK_1103b7c50;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c3fa28(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uStack_60);
  return puVar1;
}



/* Entry: 1001c8a50; end: 1001c8b63;  */

undefined * FUN_1001c8a50(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_90;
  func_0x000107c4aa50();
  puVar1 = PTR_PTR_1126a6da8;
  func_0x000107c61168(PTR_PTR_1126a6da8);
  FUN_100083b20(&uStack_58);
  func_0x000107c4aa4c(uStack_58);
  func_0x000107c615e8(uStack_58);
  FUN_100083b20(&uStack_60);
  pcStack_70 = FUN_1001de3ac;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1001de374;
  puStack_78 = &UNK_1103b7c50;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c3fa28(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uStack_60);
  return puVar1;
}



/* Entry: 1001c8b64; end: 1001c8b6b; -[SCCrashAppStateTracker lastSessionAppState] */

undefined8 FUN_1001c8b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1001c8b6c; end: 1001c8b7f; -[_TtC22SCCrashLoggerThreadsV227SCEventDelayMonitorThreadV2 lastSessionANRCrashed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1001c8b6c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112d9d568);
}



/* Entry: 1001c8b80; end: 1001c8d23; +[SCAbnormalExitLogger classifyLastSessionWithLastApplicationState:crashLogger:appTerminationType:lastSessionANRCrashed:preferences:isDebugBuild:] */

void FUN_1001c8b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_4);
  puVar6 = PTR_PTR_1126b6bf0;
  uStack_68 = 0;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  func_0x000107c4a6a0(puVar6,param_2,&uStack_68,param_7);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uStack_70 = 0;
  uVar3 = param_1;
  func_0x000107c3b508(param_1,param_2,&uStack_70,param_7);
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = param_5;
  func_0x000107c5c734(param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  uVar5 = param_1;
  func_0x000107c3b4c4(param_1,param_2,uVar3,puVar6,uVar4,param_3,param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c3b4cc(param_1,param_2,uVar5,param_6,param_4,param_8);
  func_0x000107c61170(param_8);
  if (((int)uVar5 == 0) || (uVar3 = param_4, func_0x000107c447f4(), (int)uVar3 != 0)) {
    puVar6 = PTR_PTR_1126b6bf8;
    func_0x000107c610f4(PTR_PTR_1126b6bf8);
    func_0x000107c46240();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1001c8d24; end: 1001c8d43;  */

void FUN_1001c8d24(void)

{
  func_0x000107c61168(&PTR_PTR_1129731a8);
  return;
}



/* Entry: 1001c8d44; end: 1001c8dc3; +[SCUpdater isUserUpdatingOrHasUpdatedAppRecently:preferences:] */

undefined8
FUN_1001c8d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c3b510(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    func_0x000107c4a69c(param_1,param_2,param_4);
  }
  else {
    func_0x000107c558dc(param_1,param_2,0,0,param_4);
    param_1 = 1;
  }
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 1001c8dc4; end: 1001c8ec3; +[SCUpdater _didUserJustUpdateApp:preferences:] */

uint FUN_1001c8dc4(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4539c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c4d9e8(puVar2,param_2,*(undefined8 *)PTR__kCFBundleVersionKey_11034abb0);
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c5c1ac(param_4,param_2,&PTR____CFConstantStringClassReference_110e1e318);
  func_0x000107c61180();
  if (param_3 != (ulong *)0x0) {
    func_0x000107c61178(uVar3);
    *param_3 = uVar3;
  }
  uVar4 = uVar3;
  func_0x000107c49d0c(uVar3,param_2,puVar1);
  if ((uVar4 & 1) == 0) {
    func_0x000107c56bd8(param_4,param_2,puVar1,&PTR____CFConstantStringClassReference_110e1e318);
  }
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  return (uint)uVar4 ^ 1;
}



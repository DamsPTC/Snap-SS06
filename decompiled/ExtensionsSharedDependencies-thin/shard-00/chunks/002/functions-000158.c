/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003ddd64; end: 003dde1b;  */

ulong FUN_003ddd64(long *param_1,char *param_2,long param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((ulong)param_1[1] < param_4) {
    param_4 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    lVar6 = *param_1;
    lVar3 = lVar6 + param_4;
    lVar1 = lVar6 + param_1[1];
    lVar4 = lVar1 - lVar3;
    lVar5 = lVar1;
    if (param_3 <= lVar4) {
      cVar2 = *param_2;
      do {
        lVar5 = lVar1;
        if (((0xfffffffffffffffe < (ulong)(lVar4 - param_3)) ||
            (_memchr(lVar3,(long)cVar2,(lVar4 - param_3) + 1), lVar3 == 0)) ||
           (lVar4 = lVar3, _memcmp(), lVar5 = lVar3, (int)lVar4 == 0)) break;
        lVar3 = lVar3 + 1;
        lVar4 = lVar1 - lVar3;
        lVar5 = lVar1;
      } while (param_3 <= lVar4);
    }
    param_4 = lVar5 - lVar6;
    if (lVar5 == lVar1) {
      param_4 = 0xffffffffffffffff;
    }
  }
  return param_4;
}



/* Entry: 003dde1c; end: 003dde63;  */

long * FUN_003dde1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != 0) {
    FUN_003da600();
  }
  *param_1 = lVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 003dde64; end: 003ddea3;  */

void FUN_003dde64(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0x36;
  uStack_18 = 1;
  *param_1 = uVar1;
  uStack_20 = 0x36;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_0033e1ac(&uStack_20);
  return;
}



/* Entry: 003ddea4; end: 003ddea7;  */

long FUN_003ddea4(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003ddea8; end: 003dded7;  */

long FUN_003ddea8(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003dded8; end: 003ddf87;  */

void FUN_003dded8(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  pcVar1 = segment_command_00000020.segname + 8;
  __Znwm();
  pcVar1[0] = '\x01';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  *(qword *)(pcVar1 + 8) = 0;
  uStack_38 = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *param_1 = pcVar1;
  FUN_003da5d0(&uStack_38);
  FUN_003db408(pcVar1,"transport_security_type",&UNK_007fa7a0);
  uVar2 = 0;
  func_0x004076ac(0);
  uVar3 = uVar2;
  _strlen();
  FUN_003db39c(pcVar1,"security_level",uVar2,uVar3);
  return;
}



/* Entry: 003ddf88; end: 003ddfb7;  */

void FUN_003ddf88(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_003ba3ac();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 003ddfb8; end: 003de067;  */

void FUN_003ddfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = 0;
  plVar3 = &lStack_38;
  FUN_004039c4();
  if ((int)plVar3 == 0) {
    FUN_003e3b18(&plStack_40,lStack_38,param_1,param_2);
    FUN_003fc17c(param_4,&plStack_40);
    if (plStack_40 == (long *)0x0) {
      return;
    }
    plVar3 = plStack_40 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = plStack_40;
    if (lVar4 + -1 != 0) {
      return;
    }
  }
  else {
    func_0x00774ea0();
  }
  (**(code **)(*plVar3 + 8))();
  return;
}



/* Entry: 003de068; end: 003de0ef;  */

void FUN_003de068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  FUN_003dded8(auStack_38);
  FUN_003dde1c(param_5,auStack_38);
  FUN_003da5d0(auStack_38);
  FUN_00407978(&uStack_30);
  uStack_40 = 0;
  FUN_003c1e6c(auStack_38,param_6,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003de0f0; end: 003de0f3;  */

void FUN_003de0f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00774ee0();
  }
  else if (*(long *)(param_2 + 0x20) != 0) {
    FUN_003823f4();
    return;
  }
  func_0x00774f14();
                    /* WARNING: Could not recover jumptable at 0x003de82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x20) + 0x28))();
  return;
}



/* Entry: 003de0f4; end: 003de233;  */

undefined8 * FUN_003de0f4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_009e1018;
  lVar4 = param_1[6];
  param_1[6] = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar5 = (long *)param_1[5];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[4];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 003de234; end: 003de243;  */

void FUN_003de234(void)

{
  return;
}



/* Entry: 003de244; end: 003de2af;  */

void FUN_003de244(long param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    _snprintf(param_3,0x400,"%s/%s");
    if ((int)param_3 == 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/load_system_roots_supported.cc"
                   ,0x5d,2,"failed to get absolute path for file: %s");
    }
  }
  return;
}



/* Entry: 003de2b0; end: 003de613;  */

void FUN_003de2b0(undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4,char *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long *extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  char *pcStack_5a0;
  ulong uStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined1 *puStack_530;
  code *pcStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_510;
  undefined1 auStack_508 [4];
  ushort uStack_504;
  long lStack_4a8;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar16 = param_2;
  FUN_003ec024(param_1);
  puVar11 = param_1;
  if (param_2 != (undefined8 *)0x0) {
    puVar4 = param_2;
    _opendir();
    puVar16 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)0x0;
      lVar13 = 0;
      puVar11 = (undefined8 *)0x0;
      puStack_510 = param_1;
      while( true ) {
        puVar17 = puVar4;
        _readdir();
        if (puVar17 == (undefined8 *)0x0) break;
        FUN_003de244(param_2,(long)puVar17 + 0x15,&uStack_478);
        puVar17 = &uStack_478;
        _stat(puVar17,auStack_508);
        lVar1 = lStack_4a8;
        if ((int)puVar17 == -1) {
          puStack_520 = &uStack_478;
          param_5 = "failed to get status for file: %s";
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/load_system_roots_supported.cc"
                       ,0x7c,2);
        }
        else if ((uStack_504 & 0xf000) == 0x8000) {
          lStack_78 = lStack_4a8;
          if (puVar15 < puVar16) {
            _memcpy(puVar15,&uStack_478,0x408);
            puVar12 = puVar11;
            puVar17 = puVar15;
          }
          else {
            lVar6 = (long)puVar15 - (long)puVar11 >> 3;
            uVar14 = lVar6 * -0x7f01fc07f01fc07f + 1;
            if (0x3f80fe03f80fe0 < uVar14) {
              FUN_003de77c();
LAB_003de5d4:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x3de5d8);
              (*pcVar2)();
            }
            lVar7 = (long)puVar16 - (long)puVar11 >> 3;
            uVar10 = lVar7 * 0x1fc07f01fc07f02;
            if (uVar10 < uVar14 || uVar10 - uVar14 == 0) {
              uVar10 = uVar14;
            }
            if (0x1fc07f01fc07ef < (ulong)(lVar7 * -0x7f01fc07f01fc07f)) {
              uVar10 = 0x3f80fe03f80fe0;
            }
            if (uVar10 == 0) {
              lVar7 = 0;
            }
            else {
              if (0x3f80fe03f80fe0 < uVar10) {
                FUN_00349558();
                goto LAB_003de5d4;
              }
              lVar7 = uVar10 * 0x408;
              __Znwm();
            }
            puVar17 = (undefined8 *)(lVar7 + lVar6 * 8);
            _memcpy(puVar17,&uStack_478,0x408);
            puVar12 = puVar17;
            while (puVar15 != puVar11) {
              puVar15 = puVar15 + -0x81;
              puVar12 = puVar12 + -0x81;
              _memcpy(puVar12,puVar15,0x408);
            }
            puVar16 = (undefined8 *)(lVar7 + uVar10 * 0x408);
            if (puVar11 != (undefined8 *)0x0) {
              __ZdlPv(puVar11);
            }
          }
          puVar15 = puVar17 + 0x81;
          lVar13 = lVar1 + lVar13;
          puVar11 = puVar12;
        }
      }
      _closedir(puVar4);
      puVar16 = (undefined8 *)(lVar13 + 1);
      func_0x00338c94();
      if ((long)puVar15 - (long)puVar11 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = 0;
        uVar14 = ((long)puVar15 - (long)puVar11) / 0x408;
        if (uVar14 < 2) {
          uVar14 = 1;
        }
        puVar4 = puVar11;
        do {
          puVar15 = puVar4;
          _open(puVar4,0);
          iVar3 = (int)puVar15;
          if (iVar3 != -1) {
            _read();
            if (iVar3 == -1) {
              param_5 = "failed to read file: %s";
              puStack_520 = puVar4;
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/load_system_roots_supported.cc"
                           ,0x91,2);
            }
            else {
              param_3 = param_3 + iVar3;
            }
          }
          puVar4 = puVar4 + 0x81;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      param_4 = FUN_00338cb8;
      FUN_003ec1dc(&uStack_478);
      puStack_510[1] = uStack_470;
      *puStack_510 = uStack_478;
      puStack_510[3] = uStack_460;
      puStack_510[2] = uStack_468;
      if (puVar11 != (undefined8 *)0x0) {
        puVar16 = puVar11;
        __ZdlPv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (puVar11 != (undefined8 *)0x0) {
    __ZdlPv(puVar11);
  }
  __Unwind_Resume(puVar16);
  pcStack_528 = FUN_003de614;
  lStack_548 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_540 = puVar16;
  puStack_538 = puVar11;
  puStack_530 = &stack0xfffffffffffffff0;
  FUN_003ec024(extraout_x8);
  FUN_0033adac(&pcStack_5a0,&PTR_DAT_00afb070);
  if (*pcStack_5a0 != '\0') {
    FUN_003de2b0(&lStack_568);
    extraout_x8[1] = lStack_560;
    *extraout_x8 = lStack_568;
    extraout_x8[3] = lStack_550;
    extraout_x8[2] = lStack_558;
  }
  lVar13 = *extraout_x8;
  uVar8 = extraout_x8[1];
  uVar10 = uVar8 & 0xff;
  uVar14 = uVar10;
  if (lVar13 != 0) {
    uVar14 = uVar8;
  }
  if (uVar14 == 0) {
    FUN_003ec024(&lStack_568);
    param_4 = (code *)&lStack_568;
    param_3 = 1;
    FUN_003c35b8(&uStack_598,"/etc/ssl/cert.pem");
    if (uStack_598 == 0) {
      lStack_588 = lStack_560;
      lStack_590 = lStack_568;
      lStack_578 = lStack_550;
      lStack_580 = lStack_558;
    }
    else {
      if ((uStack_598 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_003ec024(&lStack_590);
    }
    extraout_x8[1] = lStack_588;
    *extraout_x8 = lStack_590;
    extraout_x8[3] = lStack_578;
    extraout_x8[2] = lStack_580;
    lVar13 = *extraout_x8;
    uVar8 = extraout_x8[1];
    uVar10 = uVar8 & 0xff;
  }
  if (lVar13 != 0) {
    uVar10 = uVar8;
  }
  if (uVar10 == 0) {
    FUN_003de2b0(&lStack_568,"");
    extraout_x8[1] = lStack_560;
    *extraout_x8 = lStack_568;
    extraout_x8[3] = lStack_550;
    extraout_x8[2] = lStack_558;
  }
  pcVar5 = pcStack_5a0;
  pcStack_5a0 = (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_548) {
    ___stack_chk_fail();
    if ((int)param_3 != 0) {
      func_0x0040cf10(pcVar5);
      param_3 = 0;
      FUN_0033904c(&pcStack_5a0);
    }
    __Unwind_Resume(pcVar5);
    pcVar5 = "vector";
    FUN_0033b32c();
    *(long *)(pcVar5 + 0x10) = param_3;
    *(code **)(pcVar5 + 0x18) = param_4;
    *(undefined ***)pcVar5 = &PTR_FUN_009e1018;
    pcVar5[8] = '\x01';
    pcVar5[9] = '\0';
    pcVar5[10] = '\0';
    pcVar5[0xb] = '\0';
    pcVar5[0xc] = '\0';
    pcVar5[0xd] = '\0';
    pcVar5[0xe] = '\0';
    pcVar5[0xf] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = '\0';
    pcVar5[0x28] = '\0';
    pcVar5[0x29] = '\0';
    pcVar5[0x2a] = '\0';
    pcVar5[0x2b] = '\0';
    pcVar5[0x2c] = '\0';
    pcVar5[0x2d] = '\0';
    pcVar5[0x2e] = '\0';
    pcVar5[0x2f] = '\0';
    uVar9 = *param_6;
    *(undefined8 *)(pcVar5 + 0x20) = *(undefined8 *)param_5;
    param_5[0] = '\0';
    param_5[1] = '\0';
    param_5[2] = '\0';
    param_5[3] = '\0';
    param_5[4] = '\0';
    param_5[5] = '\0';
    param_5[6] = '\0';
    param_5[7] = '\0';
    *(undefined8 *)(pcVar5 + 0x28) = uVar9;
    *param_6 = 0;
    pcVar5[0x30] = '\0';
    pcVar5[0x31] = '\0';
    pcVar5[0x32] = '\0';
    pcVar5[0x33] = '\0';
    pcVar5[0x34] = '\0';
    pcVar5[0x35] = '\0';
    pcVar5[0x36] = '\0';
    pcVar5[0x37] = '\0';
    return;
  }
  return;
}



/* Entry: 003de614; end: 003de77b;  */

void FUN_003de614(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003ec024(param_1);
  FUN_0033adac(&pcStack_80,&PTR_DAT_00afb070);
  if (*pcStack_80 != '\0') {
    FUN_003de2b0(&lStack_48);
    param_1[1] = lStack_40;
    *param_1 = lStack_48;
    param_1[3] = lStack_30;
    param_1[2] = lStack_38;
  }
  lVar3 = *param_1;
  uVar4 = param_1[1];
  uVar6 = uVar4 & 0xff;
  uVar1 = uVar6;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0) {
    FUN_003ec024(&lStack_48);
    param_4 = &lStack_48;
    param_3 = 1;
    FUN_003c35b8(&uStack_78,"/etc/ssl/cert.pem");
    if (uStack_78 == 0) {
      lStack_68 = lStack_40;
      lStack_70 = lStack_48;
      lStack_58 = lStack_30;
      lStack_60 = lStack_38;
    }
    else {
      if ((uStack_78 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_003ec024(&lStack_70);
    }
    param_1[1] = lStack_68;
    *param_1 = lStack_70;
    param_1[3] = lStack_58;
    param_1[2] = lStack_60;
    lVar3 = *param_1;
    uVar4 = param_1[1];
    uVar6 = uVar4 & 0xff;
  }
  if (lVar3 != 0) {
    uVar6 = uVar4;
  }
  if (uVar6 == 0) {
    FUN_003de2b0(&lStack_48,"");
    param_1[1] = lStack_40;
    *param_1 = lStack_48;
    param_1[3] = lStack_30;
    param_1[2] = lStack_38;
  }
  pcVar2 = pcStack_80;
  pcStack_80 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    func_0x0040cf10(pcVar2);
    param_3 = 0;
    FUN_0033904c(&pcStack_80);
  }
  __Unwind_Resume(pcVar2);
  pcVar2 = "vector";
  FUN_0033b32c();
  *(undefined8 *)(pcVar2 + 0x10) = param_3;
  *(long **)(pcVar2 + 0x18) = param_4;
  *(undefined ***)pcVar2 = &PTR_FUN_009e1018;
  pcVar2[8] = '\x01';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  pcVar2[0x20] = '\0';
  pcVar2[0x21] = '\0';
  pcVar2[0x22] = '\0';
  pcVar2[0x23] = '\0';
  pcVar2[0x24] = '\0';
  pcVar2[0x25] = '\0';
  pcVar2[0x26] = '\0';
  pcVar2[0x27] = '\0';
  pcVar2[0x28] = '\0';
  pcVar2[0x29] = '\0';
  pcVar2[0x2a] = '\0';
  pcVar2[0x2b] = '\0';
  pcVar2[0x2c] = '\0';
  pcVar2[0x2d] = '\0';
  pcVar2[0x2e] = '\0';
  pcVar2[0x2f] = '\0';
  uVar5 = *param_6;
  *(undefined8 *)(pcVar2 + 0x20) = *param_5;
  *param_5 = 0;
  *(undefined8 *)(pcVar2 + 0x28) = uVar5;
  *param_6 = 0;
  pcVar2[0x30] = '\0';
  pcVar2[0x31] = '\0';
  pcVar2[0x32] = '\0';
  pcVar2[0x33] = '\0';
  pcVar2[0x34] = '\0';
  pcVar2[0x35] = '\0';
  pcVar2[0x36] = '\0';
  pcVar2[0x37] = '\0';
  return;
}



/* Entry: 003de77c; end: 003de78f;  */

void FUN_003de77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = "vector";
  FUN_0033b32c();
  *(undefined8 *)(pcVar1 + 0x10) = param_2;
  *(undefined8 *)(pcVar1 + 0x18) = param_3;
  *(undefined ***)pcVar1 = &PTR_FUN_009e1018;
  pcVar1[8] = '\x01';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  pcVar1[0x20] = '\0';
  pcVar1[0x21] = '\0';
  pcVar1[0x22] = '\0';
  pcVar1[0x23] = '\0';
  pcVar1[0x24] = '\0';
  pcVar1[0x25] = '\0';
  pcVar1[0x26] = '\0';
  pcVar1[0x27] = '\0';
  pcVar1[0x28] = '\0';
  pcVar1[0x29] = '\0';
  pcVar1[0x2a] = '\0';
  pcVar1[0x2b] = '\0';
  pcVar1[0x2c] = '\0';
  pcVar1[0x2d] = '\0';
  pcVar1[0x2e] = '\0';
  pcVar1[0x2f] = '\0';
  uVar2 = *param_5;
  *(undefined8 *)(pcVar1 + 0x20) = *param_4;
  *param_4 = 0;
  *(undefined8 *)(pcVar1 + 0x28) = uVar2;
  *param_5 = 0;
  pcVar1[0x30] = '\0';
  pcVar1[0x31] = '\0';
  pcVar1[0x32] = '\0';
  pcVar1[0x33] = '\0';
  pcVar1[0x34] = '\0';
  pcVar1[0x35] = '\0';
  pcVar1[0x36] = '\0';
  pcVar1[0x37] = '\0';
  return;
}



/* Entry: 003de790; end: 003de7c7;  */

void FUN_003de790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[2] = param_2;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_009e1018;
  param_1[1] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_5;
  param_1[4] = *param_4;
  *param_4 = 0;
  param_1[5] = uVar1;
  *param_5 = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 003de7c8; end: 003de81f;  */

void FUN_003de7c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00774ee0();
  }
  else if (*(long *)(param_2 + 0x20) != 0) {
    FUN_003823f4();
    return;
  }
  func_0x00774f14();
                    /* WARNING: Could not recover jumptable at 0x003de82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x20) + 0x28))();
  return;
}



/* Entry: 003de820; end: 003de847;  */

void FUN_003de820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003de82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
  return;
}



/* Entry: 003de848; end: 003de8bb;  */

undefined8 FUN_003de848(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  _strcmp(uVar1,"grpc.internal.security_connector");
  if ((int)uVar1 == 0) {
    if (*param_1 == 2) {
      return *(undefined8 *)(param_1 + 4);
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
                 ,0x6e,2,"Invalid type %d for arg %s");
  }
  return 0;
}



/* Entry: 003de8bc; end: 003de91b;  */

void FUN_003de8bc(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_1 != (ulong *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_1[1] + lVar2;
      FUN_003de848();
      if (lVar1 != 0) {
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *param_1);
  }
  return;
}



/* Entry: 003de91c; end: 003de977;  */

void FUN_003de91c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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



/* Entry: 003de978; end: 003dee23;  */

void FUN_003de978(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                 long param_5,char *param_6,undefined8 param_7)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  
  if ((param_4 == (long *)0x0) || (param_5 == 0)) {
    pcVar8 = "An ssl channel needs a config and a target name.";
    uVar11 = 0x1a3;
LAB_003de9e0:
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                 ,uVar11,2,pcVar8);
    *param_1 = 0;
    return;
  }
  puVar16 = (undefined8 *)param_4[1];
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = param_2;
    FUN_003e021c();
    if (puVar16 == (undefined8 *)0x0) {
      pcVar8 = "Could not get default pem root certs.";
      uVar11 = 0x1ad;
      goto LAB_003de9e0;
    }
    puVar14 = puVar16;
    func_0x003e026c();
  }
  else {
    puVar14 = (undefined8 *)0x0;
  }
  pcVar8 = section_00000068.segname;
  __Znwm();
  plStack_c8 = (long *)*param_2;
  *param_2 = 0;
  plStack_d0 = (long *)*param_3;
  *param_3 = 0;
  FUN_003de790();
  if (plStack_d0 != (long *)0x0) {
    plVar12 = plStack_d0 + 1;
    do {
      lVar13 = *plVar12;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plStack_d0 + 8))();
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar12 = plStack_c8 + 1;
    do {
      lVar13 = *plVar12;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plStack_c8 + 8))();
    }
  }
  *(undefined ***)pcVar8 = &PTR_FUN_009e10c8;
  puVar15 = (ulong *)(pcVar8 + 0x40);
  *puVar15 = 0;
  *(undefined8 *)(pcVar8 + 0x48) = 0;
  *(undefined8 *)(pcVar8 + 0x50) = 0;
  pcVar1 = "";
  if (param_6 != (char *)0x0) {
    pcVar1 = param_6;
  }
  FUN_00353254((long)pcVar8 + 0x58,pcVar1);
  *(long **)(pcVar8 + 0x70) = param_4 + 2;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lVar13 = param_5;
  _strlen(param_5);
  FUN_0033af30(param_5,lVar13,&uStack_e0,&uStack_f0);
  uVar4 = uStack_d8;
  uVar11 = uStack_e0;
  if (0x7ffffffffffffff7 < uStack_d8) {
    func_0x0033b318(&ppppppuStack_c0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x3decf8);
    (*pcVar5)();
  }
  if (uStack_d8 < 0x17) {
    uStack_b0 = (undefined8 *)CONCAT17((char)uStack_d8,(undefined7)uStack_b0);
    pppppppuVar9 = &ppppppuStack_c0;
    if (uStack_d8 == 0) goto LAB_003deb68;
  }
  else {
    uVar2 = (uStack_d8 & 0xfffffffffffffff8) + 8;
    if ((uStack_d8 | 7) != 0x17) {
      uVar2 = uStack_d8 | 7;
    }
    pppppppuVar9 = (undefined8 *******)(uVar2 + 1);
    __Znwm();
    uStack_b0 = (undefined8 *)(uVar2 + 1 | 0x8000000000000000);
    puStack_b8 = (undefined8 *)uVar4;
    ppppppuStack_c0 = pppppppuVar9;
  }
  _memmove(pppppppuVar9,uVar11,uVar4);
LAB_003deb68:
  *(undefined1 *)((long)pppppppuVar9 + uVar4) = 0;
  if (pcVar8[0x57] < '\0') {
    __ZdlPv(*puVar15);
  }
  *(undefined8 **)(pcVar8 + 0x48) = puStack_b8;
  *puVar15 = (ulong)ppppppuStack_c0;
  *(undefined8 **)(pcVar8 + 0x50) = uStack_b0;
  plVar12 = (long *)*param_4;
  if ((plVar12 == (long *)0x0) || (*plVar12 == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = plVar12[1] != 0;
  }
  ppppppuStack_c0 = (undefined8 ******)0x0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  puStack_a0 = (undefined8 *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7c = 0x100000000;
  uStack_70 = 0;
  puVar10 = &uStack_98;
  puStack_b8 = puVar16;
  uStack_b0 = puVar14;
  FUN_003dfd34();
  if (bVar6) {
    ppppppuStack_c0 = (undefined8 ******)*param_4;
  }
  puStack_a0 = puVar10;
  FUN_003df760();
  uVar7 = (undefined4)param_4[5];
  puStack_a8 = puVar10;
  uStack_90 = param_7;
  func_0x003df7c0();
  uStack_7c = CONCAT44(uStack_7c._4_4_,uVar7);
  uVar7 = *(undefined4 *)((long)param_4 + 0x2c);
  func_0x003df7c0();
  uStack_7c = CONCAT44(uVar7,(undefined4)uStack_7c);
  pppppppuVar9 = &ppppppuStack_c0;
  FUN_00405430(pppppppuVar9,pcVar8 + 0x38);
  FUN_00338cb8(puStack_a0);
  if ((int)pppppppuVar9 == 0) {
    *param_1 = pcVar8;
  }
  else {
    func_0x00407688();
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                 ,0x80,2,"Handshaker factory creation failed with %s.");
    *param_1 = 0;
    pcVar1 = pcVar8 + 8;
    do {
      lVar13 = *(long *)pcVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar6) {
        *(long *)pcVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*(long *)pcVar8 + 8))(pcVar8);
    }
  }
  return;
}



/* Entry: 003dee24; end: 003deeef;  */

undefined8 * FUN_003dee24(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_004053d8(param_1[7]);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  *param_1 = &PTR_FUN_009e1018;
  lVar4 = param_1[6];
  param_1[6] = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar5 = (long *)param_1[5];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)param_1[4];
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
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 003deef0; end: 003def03;  */

void FUN_003deef0(void)

{
  FUN_003dee24();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003def04; end: 003df247;  */

void FUN_003def04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  char *pcStack_d0;
  char acStack_c8 [31];
  undefined1 uStack_a9;
  undefined8 ***pppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  char *pcStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = (long *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_003def54;
LAB_003def60:
    plVar7 = (long *)*plVar7;
  }
  else if (*(char *)(param_1 + 0x6f) == '\0') {
LAB_003def54:
    plVar7 = (long *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x57) < '\0') goto LAB_003def60;
  }
  uStack_68 = param_2;
  uStack_60 = param_3;
  FUN_003df578(&pcStack_70,plVar7,&uStack_68,param_5);
  if ((pcStack_70 != (char *)0x0) || (**(long **)(param_1 + 0x70) == 0)) goto LAB_003def80;
  puVar4 = &uStack_68;
  FUN_00407b0c(puVar4,"x509_pem_cert");
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = puVar4[2] + 1;
    FUN_00338c74();
    _memcpy();
    *(undefined1 *)(lVar5 + puVar4[2]) = 0;
    (*(code *)**(undefined8 **)(param_1 + 0x70))(plVar7,lVar5,(*(undefined8 **)(param_1 + 0x70))[1])
    ;
    FUN_00338cb8(lVar5);
    if ((int)plVar7 == 0) goto LAB_003def80;
    pcStack_58 = (char *)((ulong)plVar7 & 0xffffffff);
    uStack_50 = 0x5606ac;
    FUN_0056189c(&pppuStack_a8,"Verify peer callback returned a failure (%d)",0x2c,&pcStack_58,1);
    ppppuVar3 = (undefined8 ****)pppuStack_a8;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      ppppuVar3 = &pppuStack_a8;
    }
    acStack_c8[8] = '\0';
    acStack_c8[9] = '\0';
    acStack_c8[10] = '\0';
    acStack_c8[0xb] = '\0';
    acStack_c8[0xc] = '\0';
    acStack_c8[0xd] = '\0';
    acStack_c8[0xe] = '\0';
    acStack_c8[0xf] = '\0';
    acStack_c8[0x10] = '\0';
    acStack_c8[0x11] = '\0';
    acStack_c8[0x12] = '\0';
    acStack_c8[0x13] = '\0';
    acStack_c8[0x14] = '\0';
    acStack_c8[0x15] = '\0';
    acStack_c8[0x16] = '\0';
    acStack_c8[0x17] = '\0';
    acStack_c8[0] = '\0';
    acStack_c8[1] = '\0';
    acStack_c8[2] = '\0';
    acStack_c8[3] = '\0';
    acStack_c8[4] = '\0';
    acStack_c8[5] = '\0';
    acStack_c8[6] = '\0';
    acStack_c8[7] = '\0';
    FUN_003b646c(&pcStack_90,2,ppppuVar3,uStack_a0,&uStack_a9,acStack_c8);
    pcVar6 = pcStack_70;
    if (pcStack_90 == pcStack_70) {
LAB_003df0f4:
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      pcStack_70 = pcStack_90;
      pcStack_90 = segment_command_00000020.segname + 0xe;
      if (((ulong)pcVar6 & 1) != 0) {
        FUN_0055293c();
        pcVar6 = pcStack_90;
        goto LAB_003df0f4;
      }
    }
    pcStack_58 = acStack_c8;
    FUN_0033d548(&pcStack_58);
    if ((char)bStack_91 < '\0') {
      __ZdlPv(pppuStack_a8);
    }
    goto LAB_003def80;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_88 = (undefined8 ***)0x0;
  FUN_003b646c(&pcStack_58,2,"Cannot check peer: missing pem cert property.",0x2d,&pcStack_90,
               &ppuStack_88);
  pcVar6 = pcStack_70;
  if (pcStack_58 == pcStack_70) {
LAB_003df170:
    if (((ulong)pcVar6 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    pcStack_70 = pcStack_58;
    pcStack_58 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar6 & 1) != 0) {
      FUN_0055293c();
      pcVar6 = pcStack_58;
      goto LAB_003df170;
    }
  }
  pppuStack_a8 = &ppuStack_88;
  FUN_0033d548(&pppuStack_a8);
LAB_003def80:
  pcStack_d0 = pcStack_70;
  if (((ulong)pcStack_70 & 1) != 0) {
    pcVar6 = pcStack_70 + -1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar2) {
        *(int *)pcVar6 = *(int *)pcVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&pppuStack_a8,param_6,&pcStack_d0);
  if (((ulong)pcStack_d0 & 1) != 0) {
    FUN_0055293c();
  }
  FUN_00407978(&uStack_68);
  pcVar6 = pcStack_70;
  if (((ulong)pcStack_70 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_58);
  pppuStack_a8 = &ppuStack_88;
  FUN_0033d548(&pppuStack_a8);
  FUN_0033c494(&pcStack_70);
  __Unwind_Resume(pcVar6);
  return;
}



/* Entry: 003df248; end: 003df24b;  */

void FUN_003df248(void)

{
  return;
}



/* Entry: 003df24c; end: 003df333;  */

void FUN_003df24c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar5 = param_1;
  FUN_003de7c8();
  if ((int)lVar5 == 0) {
    if ((char)*(byte *)(param_1 + 0x57) < '\0') {
      lVar5 = *(long *)(param_1 + 0x40);
      uVar6 = *(ulong *)(param_1 + 0x48);
    }
    else {
      lVar5 = param_1 + 0x40;
      uVar6 = (ulong)*(byte *)(param_1 + 0x57);
    }
    plVar1 = (long *)*(long *)(param_2 + 0x40);
    uVar4 = *(ulong *)(param_2 + 0x48);
    if (-1 < (char)*(byte *)(param_2 + 0x57)) {
      plVar1 = (long *)(param_2 + 0x40);
      uVar4 = (ulong)*(byte *)(param_2 + 0x57);
    }
    uVar2 = uVar4;
    if (uVar4 >= uVar6) {
      uVar2 = uVar6;
    }
    _memcmp(lVar5,plVar1,uVar2);
    uVar7 = (uint)(uVar4 < uVar6);
    if (uVar6 < uVar4) {
      uVar7 = 0xffffffff;
    }
    if ((uint)lVar5 != 0) {
      uVar7 = (uint)lVar5;
    }
    if (uVar7 == 0) {
      if ((char)*(byte *)(param_1 + 0x6f) < '\0') {
        lVar5 = *(long *)(param_1 + 0x58);
        uVar6 = *(ulong *)(param_1 + 0x60);
      }
      else {
        lVar5 = param_1 + 0x58;
        uVar6 = (ulong)*(byte *)(param_1 + 0x6f);
      }
      puVar3 = *(undefined8 **)(param_2 + 0x58);
      uVar4 = *(ulong *)(param_2 + 0x60);
      if (-1 < (char)*(byte *)(param_2 + 0x6f)) {
        puVar3 = (undefined8 *)(param_2 + 0x58);
        uVar4 = (ulong)*(byte *)(param_2 + 0x6f);
      }
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      _memcmp(lVar5,puVar3,uVar4);
    }
  }
  return;
}



/* Entry: 003df334; end: 003df46b;  */

void FUN_003df334(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uStack_60;
  ulong uStack_58;
  
  plVar10 = (long *)(param_2 + 0x40);
  if (*(char *)(param_2 + 0x57) < '\0') {
    plVar10 = (long *)*plVar10;
  }
  lVar5 = (long)plVar10;
  _strlen(plVar10);
  plVar11 = (long *)(param_2 + 0x58);
  if (*(char *)(param_2 + 0x6f) < '\0') {
    plVar11 = (long *)*plVar11;
  }
  lVar6 = (long)plVar11;
  _strlen(plVar11);
  FUN_003df9bc(&uStack_60,param_3,param_4,plVar10,lVar5,plVar11,lVar6,param_5);
  uVar4 = uStack_60;
  uStack_60 = 0x36;
  uStack_58 = uVar4;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)();
  puVar8 = (ulong *)*ppuVar7;
  do {
    uVar9 = *puVar8;
    uVar1 = uVar9 + 0x10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar3) {
      *puVar8 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar8[2] < uVar1) {
    func_0x003d6048(puVar8,0x10);
  }
  else {
    puVar8 = (ulong *)((long)puVar8 + uVar9 + 0x30);
  }
  *puVar8 = (ulong)&PTR_FUN_009e0f78;
  puVar8[1] = uVar4;
  uStack_58 = 0x36;
  *param_1 = puVar8;
  if ((uStack_60 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003df46c; end: 003df577;  */

void FUN_003df46c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  plVar4 = (long *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_003df4b0;
  }
  else {
    if (*(char *)(param_1 + 0x6f) != '\0') goto LAB_003df4c0;
LAB_003df4b0:
    plVar4 = (long *)(param_1 + 0x40);
    if (-1 < *(char *)(param_1 + 0x57)) goto LAB_003df4c0;
  }
  plVar4 = (long *)*plVar4;
LAB_003df4c0:
  FUN_004050f4(uVar3,plVar4,0,0,&uStack_38);
  if ((int)uVar3 == 0) {
    FUN_003e3b18(&plStack_40,uStack_38,param_1,param_2);
    FUN_003fc17c(param_4,&plStack_40);
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  else {
    func_0x00407688();
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                 ,0x93,2,"Handshaker creation failed with error %s.");
  }
  return;
}



/* Entry: 003df578; end: 003df753;  */

void FUN_003df578(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_101;
  undefined8 ***pppuStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  char *pcStack_e8;
  undefined1 *puStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_a8;
  long lStack_a0;
  char *pcStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003df800(&pcStack_e8,param_3);
  if (pcStack_e8 == (char *)0x0) {
    if (param_2 != 0) {
      lVar2 = param_2;
      _strlen(param_2);
      uVar3 = param_3;
      FUN_003df8d0(param_3,param_2,lVar2);
      if ((int)uVar3 == 0) {
        pcStack_78 = "Peer name ";
        uStack_70 = 10;
        lVar2 = param_2;
        _strlen();
        pcStack_d8 = " is not in peer certificate";
        uStack_d0 = 0x1b;
        lStack_a8 = param_2;
        lStack_a0 = lVar2;
        FUN_00575ddc(&pppuStack_100,&pcStack_78,&lStack_a8,&pcStack_d8);
        ppppuVar1 = (undefined8 ****)pppuStack_100;
        if (-1 < (char)bStack_e9) {
          uStack_f8 = (ulong)bStack_e9;
          ppppuVar1 = &pppuStack_100;
        }
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_120 = 0;
        FUN_003b646c(param_1,2,ppppuVar1,uStack_f8,&uStack_101,&uStack_120);
        puStack_e0 = (undefined1 *)&uStack_120;
        FUN_0033d548(&puStack_e0);
        param_4 = &uStack_120;
        if ((char)bStack_e9 < '\0') {
          __ZdlPv(pppuStack_100);
          param_4 = &uStack_120;
        }
        goto LAB_003df620;
      }
    }
    FUN_003dfda0(&pcStack_78,param_3,"ssl");
    FUN_003dde1c(param_4,&pcStack_78);
    FUN_003da5d0(&pcStack_78);
    *param_1 = 0;
  }
  else {
    *param_1 = pcStack_e8;
    pcStack_e8 = segment_command_00000020.segname + 0xe;
  }
LAB_003df620:
  pcVar4 = pcStack_e8;
  if (((ulong)pcStack_e8 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    puStack_e0 = (undefined1 *)param_4;
    FUN_0033d548(&puStack_e0);
    if ((char)bStack_e9 < '\0') {
      __ZdlPv(pppuStack_100);
    }
    FUN_0033c494(&pcStack_e8);
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x003df75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pcVar4 + 8))();
    return;
  }
  return;
}



/* Entry: 003df754; end: 003df75f;  */

void FUN_003df754(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003df75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 003df760; end: 003df7ff;  */

undefined8 FUN_003df760(void)

{
  func_0x00339fa0(0xafb080,0x3df78c);
  return uRam0000000000b5ec20;
}



/* Entry: 003df800; end: 003df8cf;  */

void FUN_003df800(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  puVar2 = &uStack_60;
  FUN_00407b0c(param_2,"ssl_alpn_selected_protocol");
  if (param_2 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    puVar2 = &uStack_48;
    FUN_003b646c(param_1,2,"Cannot check peer: missing selected ALPN property.",0x32,&uStack_29,
                 &uStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    FUN_0038097c(uVar1,*(undefined8 *)(param_2 + 0x10));
    if ((int)uVar1 != 0) {
      *param_1 = 0;
      return;
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    FUN_003b646c(param_1,2,"Cannot check peer: invalid ALPN value.",0x26,&uStack_29,&uStack_60);
  }
  puStack_28 = puVar2;
  FUN_0033d548(&puStack_28);
  return;
}



/* Entry: 003df8d0; end: 003df9bb;  */

void FUN_003df8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = 0;
  lStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_0033af30(param_2,param_3,&lStack_40,&uStack_50);
  lVar4 = lStack_38;
  lVar1 = lStack_40;
  if (lStack_38 != 0) {
    lVar2 = lStack_40;
    _memchr(lStack_40,0x25,lStack_38);
    lVar3 = lVar2 - lVar1;
    if (lVar2 != 0 && lVar3 != -1) {
      lVar4 = lVar3;
      lStack_38 = lVar3;
    }
    FUN_00405f8c(param_1,lVar1,lVar4);
  }
  return;
}



/* Entry: 003df9bc; end: 003dfa9f;  */

void FUN_003df9bc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  iVar1 = (int)&lStack_60;
  lVar2 = param_3;
  FUN_003dfaa0();
  lStack_60 = param_8;
  lStack_58 = lVar2;
  FUN_003df8d0(&lStack_60,param_2,param_3);
  if ((((param_7 == 0) || (param_3 != param_5)) ||
      (_memcmp(param_2,param_4,param_3), (int)param_2 != 0)) && (iVar1 == 0)) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                 ,0xc2,2,"call host does not match SSL server name");
    if (lStack_60 != 0) {
      FUN_00338cb8();
    }
    func_0x00553610(param_1,"call host does not match SSL server name",0x28);
  }
  else {
    if (lStack_60 != 0) {
      FUN_00338cb8();
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 003dfaa0; end: 003dfd33;  */

undefined1  [16] FUN_003dfaa0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  FUN_003db2ac(&uStack_80);
  lVar5 = -0x18;
  lVar6 = 1;
  do {
    puVar1 = &uStack_80;
    FUN_003db1c4();
    lVar5 = lVar5 + 0x18;
    lVar6 = lVar6 + -1;
  } while (puVar1 != (undefined8 *)0x0);
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_00338c74();
    FUN_003db2ac(&uStack_98,param_1);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    puVar1 = &uStack_80;
    FUN_003db1c4();
    if (puVar1 != (undefined8 *)0x0) {
      lVar6 = 0;
      do {
        uVar7 = *puVar1;
        uVar2 = uVar7;
        _strcmp(uVar7,"x509_subject_alternative_name");
        if ((int)uVar2 == 0) {
          pcVar3 = "x509_subject_alternative_name";
LAB_003dfcbc:
          puVar4 = (undefined8 *)(lVar5 + lVar6 * 0x18);
          lVar6 = lVar6 + 1;
          *puVar4 = pcVar3;
          puVar4[1] = puVar1[1];
          puVar4[2] = puVar1[2];
        }
        else {
          uVar2 = uVar7;
          _strcmp(uVar7,"x509_subject");
          pcVar3 = "x509_subject";
          if ((int)uVar2 == 0) goto LAB_003dfcbc;
          uVar2 = uVar7;
          _strcmp(uVar7,"x509_common_name");
          if ((int)uVar2 == 0) {
            pcVar3 = "x509_subject_common_name";
            goto LAB_003dfcbc;
          }
          uVar2 = uVar7;
          _strcmp(uVar7,"x509_pem_cert");
          pcVar3 = "x509_pem_cert";
          if ((((int)uVar2 == 0) ||
              (uVar2 = uVar7, _strcmp(uVar7,"security_level"), pcVar3 = "security_level",
              (int)uVar2 == 0)) ||
             (uVar2 = uVar7, _strcmp(uVar7,"x509_pem_cert_chain"), pcVar3 = "x509_pem_cert_chain",
             (int)uVar2 == 0)) goto LAB_003dfcbc;
          uVar2 = uVar7;
          _strcmp(uVar7,"peer_dns");
          if ((int)uVar2 == 0) {
            pcVar3 = "x509_dns";
            goto LAB_003dfcbc;
          }
          uVar2 = uVar7;
          _strcmp(uVar7,"peer_uri");
          if (((int)uVar2 == 0) || (uVar2 = uVar7, _strcmp(uVar7,"peer_spiffe_id"), (int)uVar2 == 0)
             ) {
            pcVar3 = "x509_uri";
            goto LAB_003dfcbc;
          }
          uVar2 = uVar7;
          _strcmp(uVar7,"peer_email");
          if ((int)uVar2 == 0) {
            pcVar3 = "x509_email";
            goto LAB_003dfcbc;
          }
          _strcmp(uVar7,"peer_ip");
          if ((int)uVar7 == 0) {
            pcVar3 = "x509_ip";
            goto LAB_003dfcbc;
          }
        }
        puVar1 = &uStack_80;
        FUN_003db1c4();
      } while (puVar1 != (undefined8 *)0x0);
      goto LAB_003dfd0c;
    }
  }
  lVar6 = 0;
LAB_003dfd0c:
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = lVar5;
  return auVar8;
}



/* Entry: 003dfd34; end: 003dfd9f;  */

char * FUN_003dfd34(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  long lStack_f0;
  long lStack_e8;
  int iStack_dc;
  long *plStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  undefined1 uStack_91;
  
  if (param_1 != (ulong *)0x0) {
    puVar4 = param_1;
    FUN_003809e0();
    *param_1 = (ulong)puVar4;
    pcVar5 = (char *)((long)puVar4 << 3);
    FUN_00338c74();
    if (*param_1 != 0) {
      uVar10 = 0;
      do {
        uVar13 = uVar10;
        FUN_003809e8();
        *(ulong *)(pcVar5 + uVar10 * 8) = uVar13;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *param_1);
    }
    return pcVar5;
  }
  func_0x00774fa8();
  if (param_1[1] == 0) {
    func_0x00774fe0();
  }
  else {
    pcVar6 = segment_command_00000020.segname + 8;
    __Znwm();
    pcVar6[0] = '\x01';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6[4] = '\0';
    pcVar6[5] = '\0';
    pcVar6[6] = '\0';
    pcVar6[7] = '\0';
    *(qword *)(pcVar6 + 8) = 0;
    pcStack_b0 = (char *)0x0;
    *(qword *)(pcVar6 + 0x18) = 0;
    *(qword *)(pcVar6 + 0x10) = 0;
    *(undefined8 *)(pcVar6 + 0x28) = 0;
    *(qword *)(pcVar6 + 0x20) = 0;
    *extraout_x8 = pcVar6;
    FUN_003da5d0(&pcStack_b0);
    pcVar5 = pcVar6;
    FUN_003db408(pcVar6,"transport_security_type",param_2);
    if (param_1[1] == 0) {
      return pcVar5;
    }
    lVar11 = 0;
    uVar10 = 0;
    bVar2 = false;
    iStack_dc = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    pcVar14 = (char *)0x0;
    do {
      uVar13 = *param_1;
      pcVar9 = *(char **)(uVar13 + lVar11);
      pcVar12 = pcVar14;
      if (pcVar9 != (char *)0x0) {
        pcVar5 = pcVar9;
        _strcmp(pcVar9,"x509_subject");
        if ((int)pcVar5 == 0) {
          pcVar12 = "x509_subject";
          goto LAB_003dff78;
        }
        pcVar5 = pcVar9;
        _strcmp(pcVar9,"x509_subject_common_name");
        pcVar12 = "x509_subject_alternative_name";
        if ((int)pcVar5 == 0) {
          pcVar12 = "x509_common_name";
          if (pcVar14 != (char *)0x0) {
            pcVar12 = pcVar14;
          }
          pcVar5 = pcVar6;
          FUN_003db39c(pcVar6,"x509_common_name",*(undefined8 *)(uVar13 + lVar11 + 8),
                       *(undefined8 *)(uVar13 + lVar11 + 0x10));
        }
        else {
          pcVar5 = pcVar9;
          _strcmp(pcVar9,"x509_subject_alternative_name");
          if ((int)pcVar5 == 0) {
            pcVar5 = pcVar6;
            FUN_003db39c(pcVar6,"x509_subject_alternative_name",*(undefined8 *)(uVar13 + lVar11 + 8)
                         ,*(undefined8 *)(uVar13 + lVar11 + 0x10));
          }
          else {
            pcVar5 = pcVar9;
            _strcmp(pcVar9,"x509_pem_cert");
            pcVar12 = "x509_pem_cert";
            if ((int)pcVar5 != 0) {
              pcVar12 = "x509_pem_cert_chain";
              pcVar5 = pcVar9;
              _strcmp(pcVar9,"x509_pem_cert_chain");
              if ((int)pcVar5 != 0) {
                pcVar12 = "ssl_session_reused";
                pcVar5 = pcVar9;
                _strcmp(pcVar9,"ssl_session_reused");
                if ((int)pcVar5 != 0) {
                  pcVar12 = "security_level";
                  pcVar5 = pcVar9;
                  _strcmp(pcVar9,"security_level");
                  if ((int)pcVar5 != 0) {
                    pcVar5 = pcVar9;
                    _strcmp(pcVar9,"x509_dns");
                    if ((int)pcVar5 == 0) {
                      pcVar12 = "peer_dns";
                    }
                    else {
                      pcVar5 = pcVar9;
                      _strcmp(pcVar9,"x509_uri");
                      if ((int)pcVar5 == 0) {
                        lVar1 = uVar13 + lVar11;
                        pcVar5 = pcVar6;
                        FUN_003db39c(pcVar6,"peer_uri",*(undefined8 *)(lVar1 + 8),
                                     *(undefined8 *)(lVar1 + 0x10));
                        iStack_dc = iStack_dc + 1;
                        uVar13 = *(ulong *)(lVar1 + 0x10);
                        pcVar12 = pcVar14;
                        if ((8 < uVar13) &&
                           (plVar8 = *(long **)(lVar1 + 8),
                           *plVar8 == 0x2f3a656666697073 && (char)plVar8[1] == '/')) {
                          if (uVar13 < 0x801) {
                            uStack_b8 = 0x2f;
                            plStack_c8 = plVar8;
                            uStack_c0 = uVar13;
                            FUN_003dd048(&pcStack_b0,&uStack_91,&plStack_c8);
                            if (((ulong)((long)pcStack_a8 - (long)pcStack_b0) < 0x40) ||
                               (*(long *)(pcStack_b0 + 0x38) == 0)) {
                              uVar7 = 0xfb;
                              pcVar5 = "Invalid SPIFFE ID: workload id is empty.";
                            }
                            else {
                              if (*(ulong *)(pcStack_b0 + 0x28) < 0x100) {
                                pcStack_a8 = pcStack_b0;
                                pcVar5 = pcStack_b0;
                                __ZdlPv();
                                lStack_e8 = *(long *)(lVar1 + 8);
                                lStack_f0 = *(long *)(lVar1 + 0x10);
                                bVar2 = true;
                                goto LAB_003dff88;
                              }
                              uVar7 = 0xff;
                              pcVar5 = "Invalid SPIFFE ID: domain longer than 255 characters.";
                            }
                            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                                         ,uVar7,1,pcVar5);
                            pcVar5 = pcStack_b0;
                            if (pcStack_b0 != (char *)0x0) {
                              pcStack_a8 = pcStack_b0;
                              __ZdlPv();
                            }
                          }
                          else {
                            pcVar5 = 
                            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                            ;
                            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                                         ,0xf6,1,"Invalid SPIFFE ID: ID longer than 2048 bytes.");
                          }
                        }
                        goto LAB_003dff88;
                      }
                      pcVar5 = pcVar9;
                      _strcmp(pcVar9,"x509_email");
                      if ((int)pcVar5 == 0) {
                        pcVar12 = "peer_email";
                      }
                      else {
                        _strcmp(pcVar9,"x509_ip");
                        pcVar5 = pcVar9;
                        pcVar12 = pcVar14;
                        if ((int)pcVar9 != 0) goto LAB_003dff88;
                        pcVar12 = "peer_ip";
                      }
                    }
                  }
                }
              }
            }
LAB_003dff78:
            pcVar5 = pcVar6;
            FUN_003db39c(pcVar6,pcVar12,*(undefined8 *)(uVar13 + lVar11 + 8),
                         *(undefined8 *)(uVar13 + lVar11 + 0x10));
            pcVar12 = pcVar14;
          }
        }
      }
LAB_003dff88:
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x18;
      pcVar14 = pcVar12;
    } while (uVar10 < param_1[1]);
    if ((pcVar12 == (char *)0x0) ||
       (FUN_003db110(pcVar6,pcVar12), pcVar5 = pcVar6, (int)pcVar6 == 1)) {
      if (!bVar2) {
        return pcVar5;
      }
      if (iStack_dc != 1) {
        pcVar5 = 
        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
        ;
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                     ,0x15a,1,"Invalid SPIFFE ID: multiple URI SANs.");
        return pcVar5;
      }
      if (lStack_f0 == 0) {
        uVar7 = 0x154;
      }
      else {
        if (lStack_e8 != 0) {
          pcVar5 = (char *)*extraout_x8;
          FUN_003db39c(pcVar5,"peer_spiffe_id");
          return pcVar5;
        }
        uVar7 = 0x155;
      }
      goto LAB_003e01b8;
    }
  }
  uVar7 = 0x14f;
LAB_003e01b8:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
               ,uVar7,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x3e01dc);
  (*pcVar3)();
}



/* Entry: 003dfda0; end: 003e021b;  */

void FUN_003dfda0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long lStack_c0;
  long lStack_b8;
  int iStack_ac;
  long *plStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_61;
  
  if (param_2[1] == 0) {
    func_0x00774fe0();
  }
  else {
    pcVar3 = segment_command_00000020.segname + 8;
    __Znwm();
    pcVar3[0] = '\x01';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    *(qword *)(pcVar3 + 8) = 0;
    lStack_80 = 0;
    *(qword *)(pcVar3 + 0x18) = 0;
    *(qword *)(pcVar3 + 0x10) = 0;
    *(undefined8 *)(pcVar3 + 0x28) = 0;
    *(qword *)(pcVar3 + 0x20) = 0;
    *param_1 = pcVar3;
    FUN_003da5d0(&lStack_80);
    FUN_003db408(pcVar3,"transport_security_type",param_3);
    if (param_2[1] == 0) {
      return;
    }
    lVar9 = 0;
    uVar13 = 0;
    bVar1 = false;
    iStack_ac = 0;
    lStack_c0 = 0;
    lStack_b8 = 0;
    pcVar12 = (char *)0x0;
    do {
      lVar11 = *param_2;
      lVar8 = *(long *)(lVar11 + lVar9);
      pcVar10 = pcVar12;
      if (lVar8 != 0) {
        lVar4 = lVar8;
        _strcmp(lVar8,"x509_subject");
        if ((int)lVar4 == 0) {
          pcVar10 = "x509_subject";
          goto LAB_003dff78;
        }
        lVar4 = lVar8;
        _strcmp(lVar8,"x509_subject_common_name");
        pcVar10 = "x509_subject_alternative_name";
        if ((int)lVar4 == 0) {
          pcVar10 = "x509_common_name";
          if (pcVar12 != (char *)0x0) {
            pcVar10 = pcVar12;
          }
          FUN_003db39c(pcVar3,"x509_common_name",*(undefined8 *)(lVar11 + lVar9 + 8),
                       *(undefined8 *)(lVar11 + lVar9 + 0x10));
        }
        else {
          lVar4 = lVar8;
          _strcmp(lVar8,"x509_subject_alternative_name");
          if ((int)lVar4 == 0) {
            FUN_003db39c(pcVar3,"x509_subject_alternative_name",*(undefined8 *)(lVar11 + lVar9 + 8),
                         *(undefined8 *)(lVar11 + lVar9 + 0x10));
          }
          else {
            lVar4 = lVar8;
            _strcmp(lVar8,"x509_pem_cert");
            pcVar10 = "x509_pem_cert";
            if ((int)lVar4 != 0) {
              pcVar10 = "x509_pem_cert_chain";
              lVar4 = lVar8;
              _strcmp(lVar8,"x509_pem_cert_chain");
              if ((int)lVar4 != 0) {
                pcVar10 = "ssl_session_reused";
                lVar4 = lVar8;
                _strcmp(lVar8,"ssl_session_reused");
                if ((int)lVar4 != 0) {
                  pcVar10 = "security_level";
                  lVar4 = lVar8;
                  _strcmp(lVar8,"security_level");
                  if ((int)lVar4 != 0) {
                    lVar4 = lVar8;
                    _strcmp(lVar8,"x509_dns");
                    if ((int)lVar4 == 0) {
                      pcVar10 = "peer_dns";
                    }
                    else {
                      lVar4 = lVar8;
                      _strcmp(lVar8,"x509_uri");
                      if ((int)lVar4 == 0) {
                        lVar11 = lVar11 + lVar9;
                        FUN_003db39c(pcVar3,"peer_uri",*(undefined8 *)(lVar11 + 8),
                                     *(undefined8 *)(lVar11 + 0x10));
                        iStack_ac = iStack_ac + 1;
                        uVar6 = *(ulong *)(lVar11 + 0x10);
                        pcVar10 = pcVar12;
                        if ((8 < uVar6) &&
                           (plVar7 = *(long **)(lVar11 + 8),
                           *plVar7 == 0x2f3a656666697073 && (char)plVar7[1] == '/')) {
                          if (uVar6 < 0x801) {
                            uStack_88 = 0x2f;
                            plStack_98 = plVar7;
                            uStack_90 = uVar6;
                            FUN_003dd048(&lStack_80,&uStack_61,&plStack_98);
                            if (((ulong)(lStack_78 - lStack_80) < 0x40) ||
                               (*(long *)(lStack_80 + 0x38) == 0)) {
                              uVar5 = 0xfb;
                              pcVar10 = "Invalid SPIFFE ID: workload id is empty.";
                            }
                            else {
                              if (*(ulong *)(lStack_80 + 0x28) < 0x100) {
                                lStack_78 = lStack_80;
                                __ZdlPv();
                                lStack_b8 = *(long *)(lVar11 + 8);
                                lStack_c0 = *(long *)(lVar11 + 0x10);
                                bVar1 = true;
                                goto LAB_003dff88;
                              }
                              uVar5 = 0xff;
                              pcVar10 = "Invalid SPIFFE ID: domain longer than 255 characters.";
                            }
                            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                                         ,uVar5,1,pcVar10);
                            pcVar10 = pcVar12;
                            if (lStack_80 != 0) {
                              lStack_78 = lStack_80;
                              __ZdlPv();
                            }
                          }
                          else {
                            FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                                         ,0xf6,1,"Invalid SPIFFE ID: ID longer than 2048 bytes.");
                          }
                        }
                        goto LAB_003dff88;
                      }
                      lVar4 = lVar8;
                      _strcmp(lVar8,"x509_email");
                      if ((int)lVar4 == 0) {
                        pcVar10 = "peer_email";
                      }
                      else {
                        _strcmp(lVar8,"x509_ip");
                        pcVar10 = pcVar12;
                        if ((int)lVar8 != 0) goto LAB_003dff88;
                        pcVar10 = "peer_ip";
                      }
                    }
                  }
                }
              }
            }
LAB_003dff78:
            FUN_003db39c(pcVar3,pcVar10,*(undefined8 *)(lVar11 + lVar9 + 8),
                         *(undefined8 *)(lVar11 + lVar9 + 0x10));
            pcVar10 = pcVar12;
          }
        }
      }
LAB_003dff88:
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 0x18;
      pcVar12 = pcVar10;
    } while (uVar13 < (ulong)param_2[1]);
    if ((pcVar10 == (char *)0x0) || (FUN_003db110(pcVar3,pcVar10), (int)pcVar3 == 1)) {
      if (!bVar1) {
        return;
      }
      if (iStack_ac != 1) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
                     ,0x15a,1,"Invalid SPIFFE ID: multiple URI SANs.");
        return;
      }
      if (lStack_c0 == 0) {
        uVar5 = 0x154;
      }
      else {
        if (lStack_b8 != 0) {
          FUN_003db39c(*param_1,"peer_spiffe_id");
          return;
        }
        uVar5 = 0x155;
      }
      goto LAB_003e01b8;
    }
  }
  uVar5 = 0x14f;
LAB_003e01b8:
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl_utils.cc"
               ,uVar5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3e01dc);
  (*pcVar2)();
}



/* Entry: 003e021c; end: 003e0297;  */

undefined8 FUN_003e021c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00339fa0(0xafb090,FUN_003e0568);
  uVar1 = uRam0000000000b65d78 & 0xff;
  if (lRam0000000000b65d70 != 0) {
    uVar1 = uRam0000000000b65d78;
  }
  uVar2 = 0xb65d79;
  if (lRam0000000000b65d70 != 0) {
    uVar2 = uRam0000000000b65d80;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 003e0298; end: 003e0567;  */

/* WARNING: Possible PIC construction at 0x003e02d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003e02d8) */
/* WARNING: Removing unreachable block (ram,0x003e02e4) */
/* WARNING: Removing unreachable block (ram,0x003e02fc) */
/* WARNING: Removing unreachable block (ram,0x003e0304) */
/* WARNING: Removing unreachable block (ram,0x003e0308) */
/* WARNING: Removing unreachable block (ram,0x003e0310) */
/* WARNING: Removing unreachable block (ram,0x003e0318) */
/* WARNING: Removing unreachable block (ram,0x003e033c) */
/* WARNING: Removing unreachable block (ram,0x003e0340) */
/* WARNING: Removing unreachable block (ram,0x003e0348) */
/* WARNING: Removing unreachable block (ram,0x003e034c) */
/* WARNING: Removing unreachable block (ram,0x003e0358) */
/* WARNING: Removing unreachable block (ram,0x003e0368) */
/* WARNING: Removing unreachable block (ram,0x003e036c) */
/* WARNING: Removing unreachable block (ram,0x003e0378) */
/* WARNING: Removing unreachable block (ram,0x003e038c) */
/* WARNING: Removing unreachable block (ram,0x003e04b8) */
/* WARNING: Removing unreachable block (ram,0x003e0394) */
/* WARNING: Removing unreachable block (ram,0x003e03b8) */
/* WARNING: Removing unreachable block (ram,0x003e0370) */
/* WARNING: Removing unreachable block (ram,0x003e03c8) */
/* WARNING: Removing unreachable block (ram,0x003e03cc) */
/* WARNING: Removing unreachable block (ram,0x003e03d4) */
/* WARNING: Removing unreachable block (ram,0x003e03dc) */
/* WARNING: Removing unreachable block (ram,0x003e03f8) */
/* WARNING: Removing unreachable block (ram,0x003e03fc) */
/* WARNING: Removing unreachable block (ram,0x003e0404) */
/* WARNING: Removing unreachable block (ram,0x003e040c) */
/* WARNING: Removing unreachable block (ram,0x003e042c) */
/* WARNING: Removing unreachable block (ram,0x003e0434) */
/* WARNING: Removing unreachable block (ram,0x003e0438) */
/* WARNING: Removing unreachable block (ram,0x003e0440) */
/* WARNING: Removing unreachable block (ram,0x003e0448) */
/* WARNING: Removing unreachable block (ram,0x003e046c) */
/* WARNING: Removing unreachable block (ram,0x003e0470) */
/* WARNING: Removing unreachable block (ram,0x003e0478) */
/* WARNING: Removing unreachable block (ram,0x003e047c) */
/* WARNING: Removing unreachable block (ram,0x003e0488) */
/* WARNING: Removing unreachable block (ram,0x003e048c) */
/* WARNING: Removing unreachable block (ram,0x003e04e8) */
/* WARNING: Removing unreachable block (ram,0x003e0534) */
/* WARNING: Removing unreachable block (ram,0x003e053c) */
/* WARNING: Removing unreachable block (ram,0x003e0550) */
/* WARNING: Removing unreachable block (ram,0x003e0560) */
/* WARNING: Removing unreachable block (ram,0x003e05ac) */
/* WARNING: Removing unreachable block (ram,0x003e05b4) */
/* WARNING: Removing unreachable block (ram,0x003e05c4) */
/* WARNING: Removing unreachable block (ram,0x003e05d4) */
/* WARNING: Removing unreachable block (ram,0x003e05f8) */
/* WARNING: Removing unreachable block (ram,0x003e05ec) */
/* WARNING: Removing unreachable block (ram,0x003e04a4) */

void FUN_003e0298(undefined8 param_1)

{
  undefined **ppuVar1;
  
  FUN_003ec024(param_1);
  func_0x003e0608();
  ppuVar1 = &PTR_DAT_00afb0f0;
  FUN_0033ab54();
  FUN_00338dd0();
  if (ppuVar1 == (undefined **)0x0) {
    FUN_00339490();
  }
  return;
}



/* Entry: 003e0568; end: 003e05fb;  */

void FUN_003e0568(void)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003e0298(&lStack_38);
  uRam0000000000b65d78 = uStack_30;
  lRam0000000000b65d70 = lStack_38;
  uRam0000000000b65d88 = uStack_20;
  uRam0000000000b65d80 = uStack_28;
  uVar1 = uStack_30 & 0xff;
  if (lStack_38 != 0) {
    uVar1 = uStack_30;
  }
  if (uVar1 != 0) {
    uVar3 = 0xb65d79;
    if (lStack_38 != 0) {
      uVar3 = uStack_28;
    }
    FUN_00404d1c();
    uRam0000000000b65d68 = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &PTR_DAT_00afb0f0;
  FUN_0033ab54();
  FUN_00338dd0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = (undefined **)PTR_s__00afb0f8;
    FUN_00339490();
  }
  *extraout_x8 = ppuVar2;
  return;
}



/* Entry: 003e05fc; end: 003e0613;  */

void FUN_003e05fc(undefined8 *param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_00afb0f0;
  FUN_0033ab54();
  FUN_00338dd0();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = (undefined **)PTR_s__00afb0f8;
    FUN_00339490();
  }
  *param_1 = ppuVar1;
  return;
}



/* Entry: 003e0614; end: 003e0b5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003e0614(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined **ppuStack_c0;
  ulong uStack_b8;
  undefined **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong auStack_88 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  ppuVar5 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
  plVar11 = *(long **)*ppuVar5;
  plVar15 = *(long **)(*(long *)(param_2 + 8) + 0x28);
  if (plVar11 == (long *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *plVar11 != 0;
  }
  if ((plVar15 != (long *)0x0) || (bVar4)) {
    bVar2 = false;
    if (plVar15 != (long *)0x0) {
      bVar2 = bVar4;
    }
    if (bVar2) {
      FUN_003dc0fc(plVar15,*plVar11,0);
      if (plVar15 == (long *)0x0) {
        func_0x00553610(auStack_88,"Incompatible credentials set on channel and call.",0x31);
        uVar1 = auStack_88[0];
        auStack_88[0] = 0x36;
        uStack_b8 = uVar1;
        ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
        (*(code *)PTR___tlv_bootstrap_00b2c390)();
        puVar7 = (ulong *)*ppuVar5;
        do {
          uVar12 = *puVar7;
          uVar13 = uVar12 + 0x10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = uVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar7[2] < uVar13) {
          func_0x003d6048(puVar7,0x10);
        }
        else {
          puVar7 = (ulong *)((long)puVar7 + uVar12 + 0x30);
        }
        *puVar7 = (ulong)&PTR_FUN_009e1248;
        puVar7[1] = uVar1;
        uStack_b8 = 0x36;
        *param_1 = puVar7;
        if ((auStack_88[0] & 1) == 0) {
          return;
        }
        FUN_0055293c();
        return;
      }
    }
    else {
      if (bVar4) {
        plVar15 = (long *)*plVar11;
      }
      plVar11 = plVar15 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = *plVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_003db1a4(&uStack_68,*(undefined8 *)(param_2 + 0x10),"security_level");
    puVar8 = &uStack_68;
    FUN_003db1c4();
    if (puVar8 == (undefined8 *)0x0) {
      func_0x00553610(&uStack_90,
                      "Established channel does not have an auth property representing a security level."
                      ,0x51);
      uVar1 = uStack_90;
      uStack_90 = 0x36;
      uStack_b8 = uVar1;
      ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
      (*(code *)PTR___tlv_bootstrap_00b2c390)();
      puVar7 = (ulong *)*ppuVar5;
      do {
        uVar12 = *puVar7;
        uVar13 = uVar12 + 0x10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar4) {
          *puVar7 = uVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar7[2] < uVar13) {
        func_0x003d6048(puVar7,0x10);
      }
      else {
        puVar7 = (ulong *)((long)puVar7 + uVar12 + 0x30);
      }
      *puVar7 = (ulong)&PTR_FUN_009e1248;
      puVar7[1] = uVar1;
      uStack_b8 = 0x36;
      *param_1 = puVar7;
      if ((uStack_90 & 1) != 0) {
        FUN_0055293c();
      }
      if (plVar15 == (long *)0x0) {
        return;
      }
    }
    else {
      plVar11 = plVar15;
      (**(code **)(*plVar15 + 0x18))();
      uVar16 = puVar8[1];
      uVar9 = uVar16;
      _strcmp(uVar16,"TSI_INTEGRITY_ONLY");
      if ((int)uVar9 == 0) {
        iVar10 = 1;
      }
      else {
        _strcmp(uVar16,"TSI_PRIVACY_AND_INTEGRITY");
        iVar10 = (uint)((int)uVar16 == 0) << 1;
      }
      if (iVar10 < (int)plVar11) {
        func_0x00553610(&uStack_98,
                        "Established channel does not have a sufficient security level to transfer call credential."
                        ,0x5a);
        uVar1 = uStack_98;
        uStack_98 = 0x36;
        uStack_b8 = uVar1;
        ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
        (*(code *)PTR___tlv_bootstrap_00b2c390)();
        puVar7 = (ulong *)*ppuVar5;
        do {
          uVar12 = *puVar7;
          uVar13 = uVar12 + 0x10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = uVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar7[2] < uVar13) {
          func_0x003d6048(puVar7,0x10);
        }
        else {
          puVar7 = (ulong *)((long)puVar7 + uVar12 + 0x30);
        }
        *puVar7 = (ulong)&PTR_FUN_009e1248;
        puVar7[1] = uVar1;
        uStack_b8 = 0x36;
        *param_1 = puVar7;
        if ((uStack_98 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        (**(code **)(*plVar15 + 0x10))(&ppuStack_c0,plVar15,param_3,(long *)(param_2 + 8));
        ppuVar17 = ppuStack_c0;
        ppuStack_c0 = &PTR_PTR_00afb048;
        uStack_b8 = uStack_b8 & 0xffffffffffffff00;
        ppuStack_b0 = ppuVar17;
        uStack_a8 = 0;
        uStack_a0 = param_4;
        (**(code **)(PTR_PTR_00afb048 + 8))(&PTR_PTR_00afb048);
        ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
        (*(code *)PTR___tlv_bootstrap_00b2c390)();
        puVar7 = (ulong *)*ppuVar5;
        do {
          uVar13 = *puVar7;
          uVar1 = uVar13 + 0x30;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *puVar7 = uVar1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar7[2] < uVar1) {
          func_0x003d6048(puVar7,0x30);
          param_4 = uStack_a0;
          ppuVar17 = ppuStack_b0;
        }
        else {
          puVar7 = (ulong *)((long)puVar7 + uVar13 + 0x30);
          uStack_a8 = 0;
        }
        *puVar7 = (ulong)&PTR_FUN_009e1280;
        *(undefined1 *)(puVar7 + 1) = 0;
        puVar7[3] = uStack_a8;
        puVar7[2] = (ulong)ppuVar17;
        ppuStack_b0 = &PTR_PTR_00afb048;
        uStack_a8 = 0;
        puVar7[4] = param_4;
        *param_1 = puVar7;
        FUN_003e0b5c(&uStack_b8);
        (**(code **)(*ppuStack_c0 + 8))();
      }
    }
    plVar11 = plVar15 + 1;
    do {
      lVar14 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
  }
  else {
    auStack_88[2] = 0;
    auStack_88[1] = 0;
    ppuStack_b0 = (undefined **)0x0;
    uStack_b8 = 0;
    uStack_68 = 0;
    uStack_a8 = param_4;
    auStack_88[3] = param_4;
    uStack_60 = param_3;
    uStack_58 = param_4;
    FUN_003e11d0(&uStack_b8);
    ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar6 = *ppuVar5;
    FUN_003e1200(puVar6,&uStack_68);
    *param_1 = puVar6;
    FUN_003e11d0(&uStack_68);
    FUN_003e11d0(auStack_88 + 1);
  }
  return;
}



/* Entry: 003e0b5c; end: 003e0bb7;  */

char * FUN_003e0b5c(char *param_1)

{
  code *pcVar1;
  
  if (*param_1 == '\x01') {
    FUN_003e11d0(param_1 + 8);
  }
  else {
    if (*param_1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3e0bb0);
      (*pcVar1)();
    }
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  return param_1;
}



/* Entry: 003e0bb8; end: 003e0e57;  */

void FUN_003e0bb8(undefined8 *param_1,long param_2,byte ******param_3,long *param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  byte ******ppppppbVar7;
  byte *****pppppbVar8;
  byte *****pppppbVar9;
  long *plVar10;
  undefined1 *extraout_x8;
  long lVar11;
  undefined8 *extraout_x8_00;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  byte *****pppppbStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  byte ****ppppbStack_130;
  long *plStack_128;
  long **pplStack_120;
  undefined1 *puStack_118;
  long *plStack_110;
  long alStack_108 [3];
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long alStack_b0 [3];
  long *plStack_98;
  byte *****pppppbStack_90;
  long *plStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar3 = &PTR___tlv_bootstrap_00b2c3a8;
  ppppppbVar7 = param_3;
  plVar5 = param_4;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)();
  puVar13 = (undefined8 *)*ppuVar3;
  puVar12 = (undefined *)*puVar13;
  if (puVar12 == (undefined *)0x0) {
    ppuVar3 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar12 = *ppuVar3;
    ppppppbVar7 = (byte ******)0x0;
    FUN_003daecc();
    *puVar13 = puVar12;
    puVar13[1] = FUN_003daf50;
  }
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 == (long *)0x0) {
    uVar14 = 0;
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar14 = *(undefined8 *)(param_2 + 0x10);
  }
  if (*(long *)(puVar12 + 8) != 0) {
    FUN_003da600();
  }
  *(undefined8 *)(puVar12 + 8) = uVar14;
  if ((*(byte *)param_3 >> 1 & 1) == 0) {
    plVar10 = *(long **)(param_5 + 0x18);
    pppppbStack_90 = (byte *****)param_3;
    plStack_88 = param_4;
    if (plVar10 != (long *)0x0) {
      ppppppbVar7 = &pppppbStack_90;
      (**(code **)(*plVar10 + 0x30))(param_1);
      goto LAB_003e0d7c;
    }
  }
  else {
    if (param_3[0x36] == (byte *****)0x0) {
      pppppbVar8 = (byte *****)((long)param_3 + 0x1b9);
      pppppbVar9 = (byte *****)(ulong)*(byte *)(param_3 + 0x37);
    }
    else {
      pppppbVar9 = param_3[0x37];
      pppppbVar8 = param_3[0x38];
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x30))
              (&plStack_b8,*(long **)(param_2 + 8),pppppbVar8,pppppbVar9,
               *(undefined8 *)(param_2 + 0x10));
    FUN_003e0614(&plStack_c0,param_2,param_3,param_4);
    FUN_003e1a78(alStack_b0,param_5);
    plVar5 = alStack_b0;
    FUN_003e0e58(&pppppbStack_90,&plStack_b8,&plStack_c0,plVar5);
    ppuVar3 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar12 = *ppuVar3;
    ppppppbVar7 = &pppppbStack_90;
    FUN_003e1c6c();
    *param_1 = puVar12;
    FUN_003e1adc(&pppppbStack_90);
    if (plStack_98 == alStack_b0) {
      lVar11 = 4;
      plStack_98 = alStack_b0;
LAB_003e0d50:
      (**(code **)(*plStack_98 + lVar11 * 8))();
    }
    else if (plStack_98 != (long *)0x0) {
      lVar11 = 5;
      goto LAB_003e0d50;
    }
    (**(code **)(*plStack_c0 + 8))();
    (**(code **)(*plStack_b8 + 8))();
    plVar10 = plStack_b8;
LAB_003e0d7c:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_0033e390();
  if ((int)ppppppbVar7 != 0) {
    func_0x0040cf10();
  }
  plVar4 = plVar10;
  __Unwind_Resume();
  lStack_e0 = param_5;
  plStack_d8 = plVar10;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_003e0e58;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_128 = (long *)*plVar4;
  *plVar4 = (long)&PTR_PTR_00afb130;
  ppppbStack_130 = (byte ****)*ppppppbVar7;
  *ppppppbVar7 = (byte *****)&PTR_PTR_00afb138;
  FUN_0033f548(alStack_108,plVar5);
  *extraout_x8 = 0;
  pplStack_120 = &plStack_128;
  iVar6 = (int)&pplStack_120;
  puStack_118 = (undefined1 *)&ppppbStack_130;
  plStack_110 = alStack_108;
  FUN_003e1914(extraout_x8 + 8);
  if (plStack_f0 == alStack_108) {
    lVar11 = 4;
    plStack_f0 = alStack_108;
  }
  else {
    if (plStack_f0 == (long *)0x0) goto LAB_003e0efc;
    lVar11 = 5;
  }
  (**(code **)(*plStack_f0 + lVar11 * 8))();
LAB_003e0efc:
  (*(code *)(*ppppbStack_130)[1])();
  plVar5 = plStack_128;
  (**(code **)(*plStack_128 + 8))();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume(plVar5);
  }
  plVar10 = plVar5;
  func_0x0040cf10();
  pcStack_138 = FUN_003e0fc0;
  plVar4 = plVar10;
  pppppbStack_160 = (byte *****)param_3;
  plStack_158 = param_4;
  plStack_150 = alStack_108;
  plStack_148 = plVar5;
  ppuStack_140 = &puStack_d0;
  FUN_003a2164();
  if (plVar4 == (long *)0x0) {
    func_0x005535e8(&ppuStack_178,"Security connector missing from client auth filter args",0x37);
    FUN_003e2278(extraout_x8_00,&ppuStack_178);
    if (((ulong)ppuStack_178 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    FUN_003a2164(plVar10,"grpc.auth_context",0x11);
    if (plVar10 == (long *)0x0) {
      func_0x005535e8(&ppuStack_178,"Auth context missing from client auth filter args",0x31);
      FUN_003e2278(extraout_x8_00,&ppuStack_178);
      if (((ulong)ppuStack_178 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      plVar5 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      extraout_x8_00[2] = plVar4;
      extraout_x8_00[3] = plVar10;
      plStack_170 = (long *)0x0;
      uStack_168 = 0;
      uStack_180 = 0;
      ppuStack_178 = &PTR_FUN_009e1130;
      *extraout_x8_00 = 0;
      extraout_x8_00[1] = &PTR_FUN_009e1130;
      FUN_003da5d0(&uStack_168);
      if (plStack_170 != (long *)0x0) {
        plVar5 = plStack_170 + 1;
        do {
          lVar11 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plStack_170 + 8))();
        }
      }
      FUN_003da5d0(&uStack_180);
    }
  }
  return;
}



/* Entry: 003e0e58; end: 003e0fbf;  */

void FUN_003e0e58(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 *extraout_x8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_70;
  long *plStack_68;
  long **pplStack_60;
  undefined1 *puStack_58;
  long *plStack_50;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plStack_68 = (long *)*param_2;
  *param_2 = &PTR_PTR_00afb130;
  plStack_70 = (long *)*param_3;
  *param_3 = &PTR_PTR_00afb138;
  FUN_0033f548(alStack_48,param_4);
  *param_1 = 0;
  pplStack_60 = &plStack_68;
  iVar6 = (int)&pplStack_60;
  puStack_58 = (undefined1 *)&plStack_70;
  plStack_50 = alStack_48;
  FUN_003e1914(param_1 + 8);
  if (plStack_30 == alStack_48) {
    lVar7 = 4;
    plStack_30 = alStack_48;
  }
  else {
    if (plStack_30 == (long *)0x0) goto LAB_003e0efc;
    lVar7 = 5;
  }
  (**(code **)(*plStack_30 + lVar7 * 8))();
LAB_003e0efc:
  (**(code **)(*plStack_70 + 8))();
  plVar4 = plStack_68;
  (**(code **)(*plStack_68 + 8))();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume(plVar4);
  }
  func_0x0040cf10();
  plVar5 = plVar4;
  FUN_003a2164();
  if (plVar5 == (long *)0x0) {
    func_0x005535e8(&ppuStack_b8,"Security connector missing from client auth filter args",0x37);
    FUN_003e2278(extraout_x8,&ppuStack_b8);
    if (((ulong)ppuStack_b8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    FUN_003a2164(plVar4,"grpc.auth_context",0x11);
    if (plVar4 == (long *)0x0) {
      func_0x005535e8(&ppuStack_b8,"Auth context missing from client auth filter args",0x31);
      FUN_003e2278(extraout_x8,&ppuStack_b8);
      if (((ulong)ppuStack_b8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      extraout_x8[2] = plVar5;
      extraout_x8[3] = plVar4;
      plStack_b0 = (long *)0x0;
      uStack_a8 = 0;
      uStack_c0 = 0;
      ppuStack_b8 = &PTR_FUN_009e1130;
      *extraout_x8 = 0;
      extraout_x8[1] = &PTR_FUN_009e1130;
      FUN_003da5d0(&uStack_a8);
      if (plStack_b0 != (long *)0x0) {
        plVar4 = plStack_b0 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plStack_b0 + 8))();
        }
      }
      FUN_003da5d0(&uStack_c0);
    }
  }
  return;
}



/* Entry: 003e0fc0; end: 003e111f;  */

void FUN_003e0fc0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar4 = param_2;
  FUN_003a2164(param_2,"grpc.internal.security_connector",0x20);
  if (plVar4 == (long *)0x0) {
    func_0x005535e8(&ppuStack_48,"Security connector missing from client auth filter args",0x37);
    FUN_003e2278(param_1,&ppuStack_48);
    if (((ulong)ppuStack_48 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    FUN_003a2164(param_2,"grpc.auth_context",0x11);
    if (param_2 == (long *)0x0) {
      func_0x005535e8(&ppuStack_48,"Auth context missing from client auth filter args",0x31);
      FUN_003e2278(param_1,&ppuStack_48);
      if (((ulong)ppuStack_48 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      plVar1 = plVar4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar3) {
          *param_2 = *param_2 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_1[2] = plVar4;
      param_1[3] = param_2;
      plStack_40 = (long *)0x0;
      uStack_38 = 0;
      uStack_50 = 0;
      ppuStack_48 = &PTR_FUN_009e1130;
      *param_1 = 0;
      param_1[1] = &PTR_FUN_009e1130;
      FUN_003da5d0(&uStack_38);
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
        if (lVar5 + -1 == 0) {
          (**(code **)(*plStack_40 + 8))();
        }
      }
      FUN_003da5d0(&uStack_50);
    }
  }
  return;
}



/* Entry: 003e1120; end: 003e11cf;  */

long FUN_003e1120(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  FUN_003da5d0(param_1 + 0x10);
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 003e11d0; end: 003e11ff;  */

ulong * FUN_003e11d0(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003e1200; end: 003e127f;  */

void FUN_003e1200(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    uVar3 = *param_1;
    uVar4 = uVar3 + 0x20;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[2] < uVar4) {
    func_0x003d6048(param_1,0x20);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar3 + 0x30);
  }
  *param_1 = (ulong)&PTR_FUN_009e11f0;
  if (*param_2 == 0) {
    uVar4 = param_2[1];
    param_1[3] = param_2[2];
    param_1[2] = uVar4;
    param_2[1] = 0;
    param_1[1] = 0;
  }
  else {
    param_1[1] = *param_2;
    *param_2 = 0x36;
  }
  return;
}



/* Entry: 003e1280; end: 003e12db;  */

void FUN_003e1280(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined4 uStack_18;
  
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 == 0) {
    uStack_30 = 0;
    lVar1 = *(long *)(param_2 + 0x10);
    lStack_20 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    uStack_28 = 0;
    param_1[1] = lVar1;
    param_1[2] = lStack_20;
  }
  else {
    uStack_30 = 0x36;
    *(undefined8 *)(param_2 + 8) = 0x36;
  }
  uStack_18 = 1;
  *param_1 = lVar2;
  *(undefined4 *)(param_1 + 3) = 1;
  FUN_003e12e4(&uStack_30);
  return;
}



/* Entry: 003e12dc; end: 003e12e3;  */

ulong * FUN_003e12dc(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return (ulong *)(param_1 + 8);
}



/* Entry: 003e12e4; end: 003e133b;  */

long FUN_003e12e4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e1228)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



/* Entry: 003e133c; end: 003e1347;  */

void FUN_003e133c(void)

{
  return;
}



/* Entry: 003e1348; end: 003e13a3;  */

void FUN_003e1348(long param_1)

{
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0x36;
  uStack_28 = 1;
  FUN_003e13a8(&uStack_30);
  FUN_0033e1ac(&uStack_30);
  return;
}



/* Entry: 003e13a4; end: 003e13a7;  */

long FUN_003e13a4(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003e13a8; end: 003e13e3;  */

long * FUN_003e13a8(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      FUN_0033e178();
      *param_1 = *param_2;
      *param_2 = 0x36;
      if (*param_1 == 0) {
        FUN_0055142c(param_1);
      }
      return param_1;
    }
    FUN_003e13e4();
  }
  *(int *)(param_1 + 3) = iVar1;
  return param_1;
}



/* Entry: 003e13e4; end: 003e143b;  */

long * FUN_003e13e4(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003e143c; end: 003e146b;  */

long FUN_003e143c(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003e146c; end: 003e16a3;  */

void FUN_003e146c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  int iStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  pcVar4 = (char *)(param_2 + 8);
  if (*pcVar4 == '\x01') {
    FUN_003e1714(&lStack_e8,pcVar4);
LAB_003e15e4:
    lVar1 = lStack_e0;
    lVar5 = lStack_e8;
    if (iStack_d0 == 0) {
LAB_003e1618:
      *(int *)(param_1 + 3) = iStack_d0;
      FUN_003e12e4(&lStack_e8);
      return;
    }
    if (iStack_d0 == 1) {
      if (lStack_e8 == 0) {
        lStack_e0 = 0;
        param_1[2] = lStack_d8;
        param_1[1] = lVar1;
      }
      else {
        lStack_e8 = 0x36;
      }
      *param_1 = lVar5;
      goto LAB_003e1618;
    }
  }
  else {
    if (*pcVar4 == '\0') {
      (**(code **)**(undefined8 **)(param_2 + 0x10))(&lStack_58);
      FUN_003dc650(&lStack_b8,&lStack_58);
      FUN_003dc7e4(&lStack_58);
      uVar2 = uStack_b0;
      if (iStack_a8 == 1) {
        if (lStack_b8 == 0) {
          uStack_b0 = 0;
          lStack_c8 = 0;
          uStack_c0 = uVar2;
          (**(code **)(**(long **)(param_2 + 0x10) + 8))();
          uVar2 = uStack_c0;
          if (lStack_c8 != 0) {
            FUN_0055169c(&lStack_c8);
            goto LAB_003e1658;
          }
          uStack_c0 = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          lVar5 = *(long *)(param_2 + 0x20);
          uStack_68 = 0;
          uStack_70 = 0;
          lStack_50 = 0;
          lStack_58 = 0;
          uStack_88 = 0;
          lStack_78 = lVar5;
          lStack_60 = lVar5;
          lStack_48 = lVar5;
          FUN_003e11d0(&lStack_58);
          FUN_003e11d0(&uStack_70);
          uStack_80 = 0;
          uStack_a0 = 0;
          lStack_90 = lVar5;
          FUN_003e11d0(&uStack_88);
          uStack_98 = 0;
          *(undefined8 *)(param_2 + 0x18) = uVar2;
          *(long *)(param_2 + 0x20) = lVar5;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined1 *)(param_2 + 8) = 1;
          FUN_003e1714(&lStack_e8,pcVar4);
        }
        else {
          lStack_c8 = lStack_b8;
          lStack_b8 = 0x36;
          FUN_003e16ac();
          lVar5 = lStack_50;
          lStack_e8 = lStack_58;
          if (lStack_58 == 0) {
            lStack_50 = 0;
            lStack_d8 = lStack_48;
            lStack_e0 = lVar5;
          }
          else {
            lStack_58 = 0x36;
          }
          iStack_d0 = 1;
        }
        FUN_003e11d0();
        FUN_003dc7b4(&lStack_c8);
      }
      else {
        if (iStack_a8 != 0) {
          FUN_0033e178();
          goto LAB_003e1658;
        }
        iStack_d0 = 0;
      }
      FUN_003dc7e4(&lStack_b8);
      goto LAB_003e15e4;
    }
    _abort();
  }
  FUN_0033e178();
LAB_003e1658:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x3e165c);
  (*pcVar3)();
}



/* Entry: 003e16a4; end: 003e16ab;  */

char * FUN_003e16a4(long param_1)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x01') {
    FUN_003e11d0(param_1 + 0x10);
  }
  else {
    if (cVar1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x3e0bb0);
      (*pcVar2)();
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  return (char *)(param_1 + 8);
}



/* Entry: 003e16ac; end: 003e1713;  */

ulong * FUN_003e16ac(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar3 = *param_1;
  }
  if (uVar3 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003e1714; end: 003e17bf;  */

void FUN_003e1714(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  int iStack_28;
  
  FUN_003e17c0(&lStack_40,param_2 + 8);
  lVar2 = lStack_38;
  lVar1 = lStack_40;
  if (iStack_28 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (iStack_28 != 1) {
      FUN_0033e178();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3e17ac);
      (*pcVar3)();
    }
    if (lStack_40 == 0) {
      uStack_58 = 0;
      lStack_38 = 0;
      uStack_50 = 0;
      lStack_48 = lStack_30;
      param_1[1] = lVar2;
      param_1[2] = lStack_30;
    }
    else {
      uStack_58 = 0x36;
      lStack_40 = 0x36;
    }
    *param_1 = lVar1;
    *(undefined4 *)(param_1 + 3) = 1;
    FUN_003e11d0(&uStack_58);
  }
  FUN_003e12e4(&lStack_40);
  return;
}



/* Entry: 003e17c0; end: 003e181b;  */

void FUN_003e17c0(undefined8 param_1,long *param_2)

{
  long lStack_30;
  long lStack_28;
  long lStack_20;
  undefined4 uStack_18;
  
  lStack_30 = *param_2;
  if (lStack_30 == 0) {
    lStack_20 = param_2[2];
    lStack_28 = param_2[1];
    param_2[1] = 0;
  }
  else {
    *param_2 = 0x36;
  }
  uStack_18 = 1;
  FUN_003e181c(param_1,&lStack_30);
  FUN_003e12e4(&lStack_30);
  return;
}



/* Entry: 003e181c; end: 003e184f;  */

undefined1 * FUN_003e181c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_003e1850();
  return param_1;
}



/* Entry: 003e1850; end: 003e18db;  */

void FUN_003e1850(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e1228)[*(uint *)(param_1 + 0x18)])(&uStack_31,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_009e12a8)[uVar1])(&uStack_32,param_1,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 003e18dc; end: 003e1913;  */

void FUN_003e18dc(void)

{
  return;
}



/* Entry: 003e1914; end: 003e1a17;  */

undefined8 * FUN_003e1914(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  puVar3 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar1 = param_1 + 2;
  FUN_0033f548(alStack_58,param_2[2]);
  FUN_0033f548(plVar1,alStack_58);
  if (plStack_40 == alStack_58) {
    lVar4 = 4;
    plStack_40 = alStack_58;
LAB_003e1980:
    (**(code **)(*plStack_40 + lVar4 * 8))();
  }
  else if (plStack_40 != (long *)0x0) {
    lVar4 = 5;
    goto LAB_003e1980;
  }
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_60 = param_2[2];
  puVar2 = param_1;
  FUN_003e1a18();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar6 = (long *)param_1[5];
  if (plVar6 == plVar1) {
    lVar4 = 4;
    plVar6 = plVar1;
  }
  else {
    if (plVar6 == (long *)0x0) goto LAB_003e1a10;
    lVar4 = 5;
  }
  (**(code **)(*plVar6 + lVar4 * 8))(plVar6);
LAB_003e1a10:
  __Unwind_Resume();
  puVar5 = (undefined8 *)*puVar3;
  *puVar2 = *puVar5;
  *puVar5 = &PTR_PTR_00afb130;
  uVar7 = *(undefined8 *)puVar3[1];
  *(undefined8 *)puVar3[1] = &PTR_PTR_00afb138;
  puVar2[1] = uVar7;
  (**(code **)(PTR_PTR_00afb138 + 8))();
  return puVar2;
}



/* Entry: 003e1a18; end: 003e1a77;  */

undefined8 * FUN_003e1a18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  *param_1 = *puVar1;
  *puVar1 = &PTR_PTR_00afb130;
  uVar2 = *(undefined8 *)param_2[1];
  *(undefined8 *)param_2[1] = &PTR_PTR_00afb138;
  param_1[1] = uVar2;
  (**(code **)(PTR_PTR_00afb138 + 8))();
  return param_1;
}



/* Entry: 003e1a78; end: 003e1adb;  */

long FUN_003e1a78(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 003e1adc; end: 003e1b13;  */

char * FUN_003e1adc(char *param_1)

{
  FUN_003e1b14((long)*param_1,param_1,param_1,param_1);
  return param_1;
}



/* Entry: 003e1b14; end: 003e1b67;  */

void FUN_003e1b14(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = (int)param_1;
  if (iVar2 == 2) {
    (**(code **)(**(long **)(param_4 + 8) + 8))();
    return;
  }
  if (iVar2 == 1) {
    (**(code **)(**(long **)(param_3 + 8) + 8))();
    plVar4 = (long *)(param_3 + 0x18);
    plVar3 = *(long **)(param_3 + 0x30);
    if (plVar3 == plVar4) {
      lVar5 = 4;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = 5;
      plVar4 = plVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x003e1c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + lVar5 * 8))();
    return;
  }
  if (iVar2 != 0) {
    _abort();
    unaff_x30 = FUN_003e1b68;
    func_0x0040cf10();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    param_2 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  (**(code **)(**(long **)(param_2 + 8) + 8))();
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  (**(code **)(**(long **)(param_2 + 0x10) + 8))();
  plVar4 = (long *)(param_2 + 0x18);
  plVar3 = *(long **)(param_2 + 0x30);
  if (plVar3 == plVar4) {
    lVar5 = 4;
  }
  else {
    if (plVar3 == (long *)0x0) {
      return;
    }
    lVar5 = 5;
    plVar4 = plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x003e1bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + lVar5 * 8))();
  return;
}



/* Entry: 003e1b68; end: 003e1b9b;  */

void FUN_003e1b68(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  plVar2 = (long *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x003e1bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}



/* Entry: 003e1b9c; end: 003e1c03;  */

void FUN_003e1b9c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  plVar2 = (long *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x003e1bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}



/* Entry: 003e1c04; end: 003e1c6b;  */

void FUN_003e1c04(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  plVar2 = (long *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x003e1c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}



/* Entry: 003e1c6c; end: 003e1cf7;  */

ulong * FUN_003e1c6c(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    uVar3 = *param_1;
    uVar4 = uVar3 + 0x40;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (param_1[2] < uVar4) {
    func_0x003d6048(param_1,0x40);
  }
  else {
    param_1 = (ulong *)((long)param_1 + uVar3 + 0x30);
  }
  *param_1 = (ulong)&PTR_FUN_009e1338;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_0033f548(param_1 + 4,param_2 + 0x18);
  uVar4 = *(ulong *)(param_2 + 8);
  param_1[3] = *(ulong *)(param_2 + 0x10);
  param_1[2] = uVar4;
  *(undefined ***)(param_2 + 8) = &PTR_PTR_00afb130;
  *(undefined ***)(param_2 + 0x10) = &PTR_PTR_00afb138;
  return param_1;
}



/* Entry: 003e1cf8; end: 003e1d2b;  */

undefined1  [16] FUN_003e1cf8(long param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pcVar3 = (char *)(param_1 + 8);
  lVar1 = (long)*pcVar3;
  FUN_003e1d34(lVar1,pcVar3,pcVar3,pcVar3);
  if (((ulong)pcVar3 & 0xfffffffe) == 0) {
    auVar5._8_8_ = (ulong)pcVar3 & 0xffffffff;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  FUN_0033e178();
  pcVar3 = (char *)(lVar1 + 8);
  pcVar2 = pcVar3;
  FUN_003e1b14((long)*pcVar3,pcVar3,pcVar3,pcVar3);
  auVar4._8_8_ = pcVar2;
  auVar4._0_8_ = pcVar3;
  return auVar4;
}



/* Entry: 003e1d2c; end: 003e1d33;  */

char * FUN_003e1d2c(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 8);
  FUN_003e1b14((long)*pcVar1,pcVar1,pcVar1,pcVar1);
  return pcVar1;
}



/* Entry: 003e1d34; end: 003e1d6b;  */

undefined1  [16]
FUN_003e1d34(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined1 *puVar7;
  undefined8 unaff_x20;
  ulong uVar8;
  undefined8 unaff_x21;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 in_stack_ffffffffffffffe0;
  ulong in_stack_ffffffffffffffe8;
  
  iVar2 = (int)param_1;
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      (**(code **)**(undefined8 **)(param_3 + 8))(&stack0xffffffffffffffb0);
      FUN_003e181c(&lStack_70,&stack0xffffffffffffffb0);
      FUN_003e12e4(&stack0xffffffffffffffb0);
      uVar8 = uStack_58 & 0xffffffff;
      uVar9 = uVar8;
      if ((int)uStack_58 != 0) {
        if ((int)uStack_58 != 1) {
          FUN_0033e178();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x3e2030);
          (*pcVar1)();
        }
        if (lStack_70 == 0) {
          ppuStack_68 = (undefined **)0x0;
        }
        else {
          lStack_70 = 0x36;
        }
        puVar3 = &stack0xffffffffffffff78;
        FUN_003e2054(puVar3,param_3);
        uVar9 = (ulong)param_3 & 0xffffffff00000000;
        FUN_003e11d0(&stack0xffffffffffffff78);
        uVar8 = (ulong)param_3 & 0xffffffff;
        param_3 = puVar3;
      }
      FUN_003e12e4(&lStack_70);
      auVar11._8_8_ = uVar9 | uVar8;
      auVar11._0_8_ = param_3;
      return auVar11;
    }
    if (iVar2 != 0) {
      unaff_x29 = &stack0xfffffffffffffff0;
      unaff_x30 = FUN_003e1d6c;
      _abort();
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      param_2 = param_1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    (**(code **)**(undefined8 **)(param_2 + 8))((undefined1 *)((long)register0x00000008 + -0x40));
    FUN_0033dc34((undefined1 *)((long)register0x00000008 + -0x50),
                 (undefined1 *)((long)register0x00000008 + -0x40));
    FUN_0033e1ac((undefined1 *)((long)register0x00000008 + -0x40));
    if (*(int *)((long)register0x00000008 + -0x48) == 0) {
      puVar7 = (undefined1 *)0x0;
      uVar9 = 0;
      puVar3 = param_2;
    }
    else {
      if (*(int *)((long)register0x00000008 + -0x48) != 1) {
        FUN_0033e178();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x3e1e24);
        (*pcVar1)();
      }
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0x36;
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x58);
      FUN_003e1e4c(puVar3,param_2);
      uVar9 = (ulong)param_2 >> 0x20;
      puVar7 = param_2;
      if ((*(ulong *)((long)register0x00000008 + -0x58) & 1) != 0) {
        FUN_0055293c();
      }
    }
    FUN_0033e1ac((undefined1 *)((long)register0x00000008 + -0x50));
    auVar10._8_8_ = (ulong)puVar7 & 0xffffffff | uVar9 << 0x20;
    auVar10._0_8_ = puVar3;
    return auVar10;
  }
  plVar6 = (long *)&stack0xffffffffffffffd0;
  (**(code **)**(undefined8 **)(param_4 + 8))();
  puVar3 = &stack0xffffffffffffffe0;
  FUN_00378628();
  if ((in_stack_ffffffffffffffe8 & 0xfffffffe) != 0) {
    FUN_0033e178();
    uStack_58 = plVar6[1];
    lStack_60 = *plVar6;
    *plVar6 = 0;
    plVar4 = *(long **)(puVar3 + 0x18);
    if (plVar4 == (long *)0x0) {
      FUN_0033e390();
      func_0x0040cf10();
      *plVar4 = *plVar6;
      *plVar6 = 0x36;
      if (*plVar4 == 0) {
        FUN_0055142c(plVar4);
      }
      auVar14._8_8_ = plVar6;
      auVar14._0_8_ = plVar4;
      return auVar14;
    }
    plVar6 = &lStack_60;
    (**(code **)(*plVar4 + 0x30))(&ppuStack_68,plVar4,plVar6);
    *extraout_x8 = ppuStack_68;
    ppuVar5 = &PTR_PTR_00afa4e0;
    ppuStack_68 = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    auVar13._8_8_ = plVar6;
    auVar13._0_8_ = ppuVar5;
    return auVar13;
  }
  auVar12._8_8_ = in_stack_ffffffffffffffe8 & 0xffffffff;
  auVar12._0_8_ = in_stack_ffffffffffffffe0;
  return auVar12;
}



/* Entry: 003e1d6c; end: 003e1e4b;  */

undefined1  [16] FUN_003e1d6c(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uStack_58;
  ulong uStack_50;
  int iStack_48;
  undefined1 auStack_40 [16];
  
  (*(code *)**(undefined8 **)param_1[1])(auStack_40);
  FUN_0033dc34(&uStack_50,auStack_40);
  FUN_0033e1ac(auStack_40);
  if (iStack_48 == 0) {
    puVar3 = (ulong *)0x0;
    uVar4 = 0;
    puVar2 = param_1;
  }
  else {
    if (iStack_48 != 1) {
      FUN_0033e178();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3e1e24);
      (*pcVar1)();
    }
    uStack_58 = uStack_50;
    uStack_50 = 0x36;
    puVar2 = &uStack_58;
    FUN_003e1e4c(puVar2,param_1);
    uVar4 = (ulong)param_1 >> 0x20;
    puVar3 = param_1;
    if ((uStack_58 & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_0033e1ac(&uStack_50);
  auVar5._8_8_ = (ulong)puVar3 & 0xffffffff | uVar4 << 0x20;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Entry: 003e1e4c; end: 003e1e97;  */

void FUN_003e1e4c(long *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (*param_1 == 0) {
    FUN_003e1e98(&uStack_18,param_1);
  }
  else {
    FUN_0037849c(auStack_20,param_1);
  }
  return;
}



/* Entry: 003e1e98; end: 003e1f63;  */

undefined1  [16] FUN_003e1e98(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *param_1;
  (**(code **)(**(long **)(lVar2 + 8) + 8))();
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined ***)(lVar2 + 0x10) = &PTR_PTR_00afb138;
  (**(code **)(PTR_PTR_00afb138 + 8))(&PTR_PTR_00afb138);
  (**(code **)(**(long **)(lVar2 + 0x10) + 8))();
  puVar1 = (undefined1 *)*param_1;
  *(undefined8 *)(puVar1 + 8) = uVar3;
  *puVar1 = 1;
  FUN_003e1f64();
  (**(code **)(PTR_PTR_00afb138 + 8))(&PTR_PTR_00afb138);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 003e1f64; end: 003e2053;  */

undefined1  [16] FUN_003e1f64(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined1 auStack_50 [32];
  
  (*(code *)**(undefined8 **)param_1[1])(auStack_50);
  FUN_003e181c(&lStack_70,auStack_50);
  FUN_003e12e4(auStack_50);
  uVar2 = uStack_68;
  lVar1 = lStack_70;
  if (iStack_58 == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    if (iStack_58 != 1) {
      FUN_0033e178();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3e2030);
      (*pcVar3)();
    }
    if (lStack_70 == 0) {
      uStack_68 = 0;
      uStack_78 = uStack_60;
      uStack_80 = uVar2;
    }
    else {
      lStack_70 = 0x36;
    }
    lStack_88 = lVar1;
    plVar4 = &lStack_88;
    FUN_003e2054(plVar4,param_1);
    uVar6 = (ulong)param_1 & 0xffffffff00000000;
    FUN_003e11d0(&lStack_88);
    uVar5 = (ulong)param_1 & 0xffffffff;
    param_1 = plVar4;
  }
  FUN_003e12e4(&lStack_70);
  auVar7._8_8_ = uVar6 | uVar5;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 003e2054; end: 003e209f;  */

void FUN_003e2054(long *param_1,undefined8 param_2)

{
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (*param_1 == 0) {
    FUN_003e20a0(&uStack_18,param_1);
  }
  else {
    FUN_0037849c(auStack_20,param_1);
  }
  return;
}



/* Entry: 003e20a0; end: 003e218f;  */

undefined1  [16] FUN_003e20a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined **ppuStack_38;
  
  lVar4 = *param_1;
  (**(code **)(**(long **)(lVar4 + 8) + 8))();
  plVar2 = (long *)(lVar4 + 0x18);
  FUN_003e2190(&ppuStack_38,plVar2,param_2);
  plVar1 = *(long **)(lVar4 + 0x30);
  if (plVar1 == plVar2) {
    lVar4 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_003e2110;
    lVar4 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar4 * 8))();
LAB_003e2110:
  puVar3 = (undefined1 *)*param_1;
  *(undefined ***)(puVar3 + 8) = ppuStack_38;
  ppuStack_38 = &PTR_PTR_00afa4e0;
  *puVar3 = 2;
  func_0x003e21b4();
  (**(code **)(*ppuStack_38 + 8))();
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 003e2190; end: 003e2203;  */

undefined1  [16] FUN_003e2190(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 **ppuVar5;
  undefined1 *puVar6;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  code *unaff_x30;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*param_3 == 0) {
    ppuVar5 = (undefined8 **)(param_3 + 1);
    ppuVar1 = (undefined8 **)register0x00000008;
  }
  else {
    plVar3 = param_3;
    FUN_0055169c();
    ppuVar1 = &puStack_40;
    ppuVar5 = &puStack_40;
    uStack_18 = 0x3e21b4;
    unaff_x29 = &puStack_20;
    puVar2 = (undefined8 *)param_3[1];
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar2)();
    param_2 = &uStack_30;
    puStack_40 = puVar2;
    plStack_38 = plVar3;
    FUN_00378628();
    if ((uStack_28 & 0xfffffffe) == 0) {
      auVar8._8_8_ = uStack_28 & 0xffffffff;
      auVar8._0_8_ = uStack_30;
      return auVar8;
    }
    unaff_x30 = FUN_003e2204;
    FUN_0033e178();
    param_1 = extraout_x8;
  }
  *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = unaff_x29;
  *(code **)((long)ppuVar1 + -8) = unaff_x30;
  lVar7 = (long)*ppuVar5;
  *ppuVar5 = (undefined8 *)0x0;
  *(undefined8 **)((long)ppuVar1 + -0x28) = ppuVar5[1];
  *(long *)((long)ppuVar1 + -0x30) = lVar7;
  plVar3 = (long *)param_2[3];
  if (plVar3 != (long *)0x0) {
    puVar6 = (undefined1 *)((long)ppuVar1 + -0x30);
    (**(code **)(*plVar3 + 0x30))((undefined1 *)((long)ppuVar1 + -0x38),plVar3,puVar6);
    *param_1 = *(undefined8 *)((long)ppuVar1 + -0x38);
    ppuVar4 = &PTR_PTR_00afa4e0;
    *(undefined ***)((long)ppuVar1 + -0x38) = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    auVar9._8_8_ = puVar6;
    auVar9._0_8_ = ppuVar4;
    return auVar9;
  }
  FUN_0033e390();
  func_0x0040cf10();
  *(undefined8 *)((long)ppuVar1 + -0x60) = unaff_x20;
  *(undefined8 *)((long)ppuVar1 + -0x58) = unaff_x19;
  *(undefined1 **)((long)ppuVar1 + -0x50) = (undefined1 *)((long)ppuVar1 + -0x10);
  *(code **)((long)ppuVar1 + -0x48) = FUN_003e2278;
  *plVar3 = (long)*ppuVar5;
  *ppuVar5 = (undefined8 *)0x36;
  if (*plVar3 == 0) {
    FUN_0055142c(plVar3);
  }
  auVar10._8_8_ = ppuVar5;
  auVar10._0_8_ = plVar3;
  return auVar10;
}



/* Entry: 003e2204; end: 003e2277;  */

undefined ** FUN_003e2204(undefined8 *param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined **ppuStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = param_3[1];
  lStack_30 = *param_3;
  *param_3 = 0;
  ppuVar1 = *(undefined ***)(param_2 + 0x18);
  if (ppuVar1 != (undefined **)0x0) {
    (**(code **)(*ppuVar1 + 0x30))(&ppuStack_38,ppuVar1,&lStack_30);
    *param_1 = ppuStack_38;
    ppuVar1 = &PTR_PTR_00afa4e0;
    ppuStack_38 = &PTR_PTR_00afa4e0;
    (**(code **)(PTR_PTR_00afa4e0 + 8))();
    return ppuVar1;
  }
  FUN_0033e390();
  func_0x0040cf10();
  *ppuVar1 = (undefined *)*param_3;
  *param_3 = 0x36;
  if (*ppuVar1 == (undefined *)0x0) {
    FUN_0055142c(ppuVar1);
  }
  return ppuVar1;
}



/* Entry: 003e2278; end: 003e22cf;  */

long * FUN_003e2278(long *param_1,long *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  if (*param_1 == 0) {
    FUN_0055142c(param_1);
  }
  return param_1;
}



/* Entry: 003e22d0; end: 003e22d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003e22d0(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *extraout_x8;
  undefined *extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *extraout_x8_02;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long alStack_130 [4];
  undefined8 uStack_110;
  long lStack_78;
  long lStack_70;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar5 = &PTR___tlv_bootstrap_00b2c390;
  (*(code *)PTR___tlv_bootstrap_00b2c390)(*(undefined8 *)(lVar9 + 0x20));
  puVar18 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  ppuVar6 = &PTR___tlv_bootstrap_00b2c3a8;
  (*(code *)PTR___tlv_bootstrap_00b2c3a8)(*(undefined8 *)(lVar9 + 0x40));
  puVar19 = *ppuVar6;
  *ppuVar6 = extraout_x8_00;
  ppuVar7 = &PTR___tlv_bootstrap_00b2c3c0;
  (*(code *)PTR___tlv_bootstrap_00b2c3c0)(*(undefined8 *)(lVar9 + 0x48));
  puVar20 = *ppuVar7;
  *ppuVar7 = extraout_x8_01;
  ppuVar8 = &PTR___tlv_bootstrap_00b2c3d8;
  (*(code *)PTR___tlv_bootstrap_00b2c3d8)(lVar9 + 0x38);
  puVar21 = *ppuVar8;
  *ppuVar8 = extraout_x8_02;
  *(undefined8 *)(param_2 + 0x38) = 1;
  alStack_130[1] = 0;
  uStack_110 = 0;
  plVar12 = *(long **)(lVar9 + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  bVar1 = *(byte *)(param_2 + 0x10);
  uVar11 = (uint)bVar1;
  alStack_130[0] = param_2;
  lStack_78 = lVar9;
  if ((bVar1 >> 6 & 1) == 0) {
    if (((bVar1 >> 3 & 1) == 0) ||
       (puVar15 = *(undefined4 **)(lVar9 + 0x70), puVar15 == (undefined4 *)0x0)) goto LAB_003acf78;
    uVar16 = 3;
    switch(*puVar15) {
    case 1:
      uVar16 = 4;
    case 0:
      *puVar15 = uVar16;
      break;
    case 2:
      goto LAB_003acf78;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      goto code_r0x003ad260;
    }
    lVar13 = *(long *)(param_2 + 8);
    *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(lVar13 + 0x48);
    *(code **)(puVar15 + 6) = FUN_003afc08;
    *(long *)(puVar15 + 8) = lVar9;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(long *)(*(long *)(param_2 + 8) + 0x48) = *(long *)(lVar9 + 0x70) + 0x10;
    uVar11 = (uint)*(byte *)(param_2 + 0x10);
LAB_003acf78:
    if ((uVar11 & 1) == 0) {
      if ((uVar11 >> 5 & 1) == 0) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
        if (uVar17 != 0) {
          if ((uVar17 & 1) != 0) {
            piVar14 = (int *)(uVar17 - 1);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar3) {
                *piVar14 = *piVar14 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_158 = uVar17;
          FUN_003ac8fc(alStack_130,&uStack_158,alStack_130 + 1);
          if ((uVar17 & 1) != 0) {
            FUN_0055293c(uVar17);
          }
        }
      }
      else if (*(int *)(lVar9 + 0xac) == 5) {
        uVar17 = *(ulong *)(lVar9 + 0xa0);
        if ((uVar17 & 1) != 0) {
          piVar14 = (int *)(uVar17 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar3) {
              *piVar14 = *piVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_148 = uVar17;
        FUN_003ac8fc(alStack_130,&uStack_148,alStack_130 + 1);
        if ((uVar17 & 1) != 0) {
          FUN_0055293c(uVar17);
        }
      }
      else {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x24a;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar9 + 0xac) = 2;
        if (*(long *)(param_2 + 0x38) != 0) {
          *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
        }
        lVar13 = *(long *)(param_2 + 8);
        *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar13 + 0x80);
        *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar13 + 0x90);
        *(long *)(lVar13 + 0x90) = lVar9 + 0x80;
        lStack_150 = param_2;
        FUN_003ac6f4(&lStack_150);
      }
    }
    else if ((*(int *)(lVar9 + 0xa8) == 3) || (*(int *)(lVar9 + 0xac) == 5)) {
      uVar17 = *(ulong *)(lVar9 + 0xa0);
      if ((uVar17 & 1) != 0) {
        piVar14 = (int *)(uVar17 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_140 = uVar17;
      FUN_003ac8fc(alStack_130,&uStack_140,alStack_130 + 1);
      if ((uVar17 & 1) != 0) {
        FUN_0055293c(uVar17);
      }
    }
    else {
      if (*(int *)(lVar9 + 0xa8) != 0) {
        uVar10 = 0x237;
LAB_003ad208:
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                     ,uVar10,2,"assertion failed: %s");
        _abort();
        goto LAB_003ad264;
      }
      *(undefined4 *)(lVar9 + 0xa8) = 1;
      if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
        if (*(int *)(lVar9 + 0xac) != 0) {
          uVar10 = 0x23c;
          goto LAB_003ad208;
        }
        *(undefined4 *)(lVar9 + 0xac) = 1;
      }
      FUN_003ac75c(lVar9 + 0x60,alStack_130);
      FUN_003ad4b8(lVar9,alStack_130 + 1);
    }
    if (alStack_130[0] != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
      if (lVar13 == *(long *)(lVar9 + 0x18)) {
        uStack_160 = 4;
        FUN_003ac8fc(alStack_130,&uStack_160,alStack_130 + 1);
      }
      else {
LAB_003ad17c:
        FUN_003ac7b0(alStack_130,alStack_130 + 1);
      }
    }
  }
  else {
    if ((bVar1 & 0x3f) != 0) {
      uVar10 = 0x1ff;
      goto LAB_003ad208;
    }
    uVar17 = *(ulong *)(*(long *)(param_2 + 8) + 0x98);
    if ((uVar17 & 1) != 0) {
      piVar14 = (int *)(uVar17 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar3) {
          *piVar14 = *piVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_138 = uVar17;
    FUN_003ad2f4(lVar9,&uStack_138);
    if ((uVar17 & 1) != 0) {
      FUN_0055293c(uVar17);
    }
    lVar13 = *(long *)(lVar9 + 0x10);
    func_0x003a6564(lVar13,*(long *)(lVar13 + 0x28) + -1);
    if (lVar13 != *(long *)(lVar9 + 0x18)) goto LAB_003ad17c;
    FUN_003ac84c(alStack_130,alStack_130 + 1);
  }
  FUN_003aca08(alStack_130 + 1);
  FUN_003ac6f4(alStack_130);
  *ppuVar8 = puVar21;
  *ppuVar7 = puVar20;
  *ppuVar6 = puVar19;
  *ppuVar5 = puVar18;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
code_r0x003ad260:
  _abort();
LAB_003ad264:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3ad268);
  (*pcVar4)();
}



/* Entry: 003e22d8; end: 003e23d7;  */

void FUN_003e22d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = *(long **)(param_2 + 8);
  FUN_0033f548(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_003e2360:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_003e2360;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_003e23d0;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_003e23d0:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 003e23d8; end: 003e2463;  */

void FUN_003e23d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 003e2464; end: 003e2467;  */

undefined8 * FUN_003e2464(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_009df750;
  param_1[1] = &PTR_FUN_009df7a8;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ac6f4(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_009df6d8;
    param_1[1] = &PTR_FUN_009df730;
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
               ,0x1e5,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3acdd4);
  (*pcVar1)();
}



/* Entry: 003e2468; end: 003e247b;  */

void FUN_003e2468(void)

{
  FUN_003acd30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003e247c; end: 003e2483;  */

void FUN_003e247c(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uStack_41;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar6 = (long *)(lVar4 + 0x48);
  do {
    lVar5 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == 0) {
    return;
  }
  func_0x00771390();
  pcStack_18 = FUN_0033f680;
  plVar6 = *(long **)(lVar4 + 0x10);
  puVar3 = (undefined8 *)plVar6[7];
  plVar6[7] = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    puStack_20 = &stack0xfffffffffffffff0;
    (**(code **)*puVar3)();
  }
  (**(code **)(*plVar6 + 8))(plVar6);
  if (param_3 == 0) {
    return;
  }
  func_0x007713c4();
  pcStack_38 = FUN_0033f6d0;
  ppuStack_40 = &puStack_20;
  FUN_0033f6f8(&uStack_41,plVar6,param_2);
  return;
}



/* Entry: 003e2484; end: 003e24d3;  */

void FUN_003e2484(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  if (param_3 == 0) {
    return;
  }
  func_0x00775030();
  pcStack_28 = FUN_003e24d4;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_003e24fc(&uStack_31,plVar2,param_2);
  return;
}



/* Entry: 003e24d4; end: 003e24fb;  */

void FUN_003e24d4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_003e24fc(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 003e24fc; end: 003e2637;  */

ulong * FUN_003e24fc(undefined8 *param_1,ulong *param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  ulong auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_4 + 0x14) == 0) {
    FUN_003a1d70(auStack_60,*(undefined8 *)(param_4 + 8));
    FUN_003e0fc0(auStack_50,auStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    puVar6 = *(undefined8 **)(param_3 + 8);
    if (auStack_50[0] == 0) {
      *puVar6 = &PTR_FUN_009e1130;
      puVar6[2] = 0;
      puVar6[1] = 0;
      puVar6[2] = uStack_38;
      puVar6[1] = uStack_40;
      uStack_38 = 0;
      uStack_40 = 0;
      *param_1 = 0;
    }
    else {
      *puVar6 = &PTR_FUN_009db778;
      uStack_68 = auStack_50[0];
      if ((auStack_50[0] & 1) != 0) {
        piVar7 = (int *)(auStack_50[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003fbec4(param_1,&uStack_68);
      if ((uStack_68 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puVar4 = auStack_50;
    FUN_003e2638(puVar4);
    return puVar4;
  }
  func_0x00775064();
  func_0x0040cf10();
  FUN_0033c494(&uStack_68);
  FUN_003e2638(auStack_50);
  __Unwind_Resume();
  if (*param_2 == 0) {
    FUN_003da5d0(param_2 + 3);
    plVar5 = (long *)param_2[2];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  else if ((*param_2 & 1) != 0) {
    FUN_0055293c();
  }
  return param_2;
}



/* Entry: 003e2638; end: 003e26a7;  */

ulong * FUN_003e2638(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    FUN_003da5d0(param_1 + 3);
    plVar4 = (long *)param_1[2];
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
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003e26a8; end: 003e26c7;  */

void FUN_003e26a8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x003e26b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



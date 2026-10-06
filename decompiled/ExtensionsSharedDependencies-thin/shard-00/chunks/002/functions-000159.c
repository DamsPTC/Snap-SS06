/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003e26c8; end: 003e270f;  */

void FUN_003e26c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003a6a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 003e2710; end: 003e2717;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003e2710(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003e2718; end: 003e2b2b;  */

qword * FUN_003e2718(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                    undefined8 param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *****pppppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  qword *pqVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long unaff_x21;
  ulong uVar23;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [32];
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  qword *pqStack_158;
  undefined8 ****ppppuStack_150;
  qword *pqStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 ****ppppuStack_120;
  ulong uStack_118;
  byte bStack_109;
  long *plStack_108;
  undefined1 auStack_100 [16];
  char *pcStack_f0;
  undefined8 uStack_e8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar10 = &section_00000608.size;
  puVar11 = param_2;
  lVar15 = param_4;
  uVar17 = param_5;
  __Znwm();
  pqVar10[1] = param_3;
  pqVar10[2] = param_1;
  pqVar10[3] = (qword)param_2;
  FUN_00339d50(pqVar10 + 0xc);
  lStack_128 = (long)(pqVar10 + 0x14);
  lStack_130 = (long)(pqVar10 + 0xc);
  FUN_00339d50();
  pqVar10[0x22] = 0;
  lVar1 = (long)(pqVar10 + 0x9a);
  lVar18 = (long)(pqVar10 + 0x9c);
  pqVar10[0x1c] = 0;
  pqVar10[0x1d] = 0;
  pqVar10[0x9b] = 0;
  pqVar10[0x9a] = 0;
  pqVar10[0x9d] = 0;
  pqVar10[0x9c] = 0;
  pqVar10[0x9e] = 0;
  *pqVar10 = (qword)&PTR_FUN_009e13f0;
  FUN_00339d50(pqVar10 + 4);
  pqVar10[0x1f] = (qword)FUN_003e30f8;
  pqVar10[0x20] = (qword)pqVar10;
  pqVar10[0x21] = 0;
  FUN_003ecf38(pqVar10 + 0x23);
  FUN_003ecf38(pqVar10 + 0x48);
  if (param_6 != 0) {
    unaff_x21 = 0;
    do {
      puVar11 = (undefined8 *)(param_4 + unaff_x21 * 0x20);
      plVar19 = (long *)*puVar11;
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar19) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *plVar19 = *plVar19 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_88 = puVar11[1];
      uStack_90 = *puVar11;
      uStack_78 = puVar11[3];
      uStack_80 = puVar11[2];
      puVar11 = &uStack_90;
      FUN_003ecb34(pqVar10 + 0x48);
      unaff_x21 = unaff_x21 + 1;
    } while (unaff_x21 != param_6);
  }
  FUN_003ecf38(pqVar10 + 0x75);
  func_0x003d5b44(&plStack_108,param_5);
  lVar3 = plStack_108[2];
  plVar19 = (long *)plStack_108[3];
  if (plVar19 != (long *)0x0) {
    plVar2 = plVar19 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar20 = param_3;
  func_0x003bcf60();
  pcStack_f0 = ":secure_endpoint";
  uStack_e8 = 0x10;
  lStack_c0 = lVar20;
  puStack_b8 = puVar11;
  FUN_00575d30(&ppppuStack_120,&lStack_c0,&pcStack_f0);
  pppppuVar6 = (undefined8 *****)ppppuStack_120;
  if (-1 < (char)bStack_109) {
    uStack_118 = (ulong)bStack_109;
    pppppuVar6 = &ppppuStack_120;
  }
  FUN_003d77d0(auStack_100,lVar3,pppppuVar6,uStack_118);
  func_0x003cb644(lVar1,auStack_100);
  FUN_00377730(auStack_100);
  if ((char)bStack_109 < '\0') {
    __ZdlPv(ppppuStack_120);
  }
  if (plVar19 != (long *)0x0) {
    plVar2 = plVar19 + 1;
    do {
      lVar20 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  if (plStack_108 != (long *)0x0) {
    plVar2 = plStack_108 + 1;
    do {
      lVar20 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plStack_108 + 8))();
    }
  }
  uVar14 = 0x630;
  FUN_003839ec(&lStack_c0,lVar1,0x630);
  func_0x003cb644(lVar18,&lStack_c0);
  pqVar10[0x9e] = uStack_b0;
  FUN_00388a1c(&lStack_c0);
  if (param_2 == (undefined8 *)0x0) {
    FUN_003b639c(&lStack_c0,lVar1,0x2000,0x2000);
    pqVar10[0x6e] = (qword)puStack_b8;
    pqVar10[0x6d] = lStack_c0;
    pqVar10[0x70] = uStack_a8;
    pqVar10[0x6f] = uStack_b0;
    uVar14 = 0x2000;
    FUN_003b639c(&lStack_c0,lVar1,0x2000);
  }
  else {
    FUN_003ec024(&lStack_c0);
    pqVar10[0x6e] = (qword)puStack_b8;
    pqVar10[0x6d] = lStack_c0;
    pqVar10[0x70] = uStack_a8;
    pqVar10[0x6f] = uStack_b0;
    FUN_003ec024(&lStack_c0);
  }
  pqVar10[0x72] = (qword)puStack_b8;
  pqVar10[0x71] = lStack_c0;
  pqVar10[0x74] = uStack_a8;
  pqVar10[0x73] = uStack_b0;
  *(undefined1 *)(pqVar10 + 0x9f) = 0;
  *(undefined4 *)((long)pqVar10 + 0x4fc) = 1;
  FUN_003ecf38(pqVar10 + 0xa0);
  lVar20 = (long)(pqVar10 + 0xc5);
  uVar12 = 1;
  FUN_00339cc8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return pqVar10;
  }
  ___stack_chk_fail();
  FUN_00388a1c(lVar18);
  FUN_00377730(lVar1);
  func_0x00339d70(lStack_128);
  func_0x00339d70(lStack_130);
  __ZdlPv(pqVar10);
  __Unwind_Resume(lVar20);
  lVar7 = lVar20;
  func_0x0040cf10();
  pcStack_138 = FUN_003e2b2c;
  *(undefined8 *)(lVar7 + 0xe0) = uVar14;
  *(undefined8 *)(lVar7 + 0x110) = uVar12;
  lVar16 = lVar15;
  ppppuStack_150 = &ppppuStack_120;
  pqStack_148 = pqVar10;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x003ecf8c(uVar12);
  func_0x00339cd4(lVar7 + 0x628);
  if (*(long *)(lVar7 + 0x250) == 0) {
    pqVar10 = *(qword **)(lVar7 + 8);
                    /* WARNING: Could not recover jumptable at 0x003bceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pqVar10)(pqVar10,lVar7 + 0x118,lVar7 + 0xf0,lVar15,*(undefined4 *)(lVar7 + 0x4fc));
    return pqVar10;
  }
  lVar8 = lVar7 + 0x240;
  lVar13 = lVar7 + 0x118;
  FUN_003ed190();
  if (*(long *)(lVar7 + 0x250) == 0) {
    pqStack_158 = (qword *)0x0;
    FUN_003e30f8(lVar7,&pqStack_158);
    if (((ulong)pqStack_158 & 1) != 0) {
      FUN_0055293c();
    }
    return pqStack_158;
  }
  func_0x00775098();
  func_0x0040cf10();
  FUN_0033c494(&pqStack_158);
  lVar9 = lVar8;
  __Unwind_Resume();
  pcStack_168 = FUN_003e2be4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = lVar9 + 0xa0;
  lStack_1c0 = param_4;
  lStack_1b8 = lVar3;
  lStack_1b0 = param_3;
  plStack_1a8 = plVar19;
  lStack_1a0 = lVar20;
  lStack_198 = lVar18;
  lStack_190 = lVar1;
  lStack_188 = unaff_x21;
  lStack_180 = lVar15;
  lStack_178 = lVar8;
  ppuStack_170 = &puStack_140;
  func_0x00339d8c(lVar7);
  if (*(long *)(lVar9 + 0x388) == 0) {
    lStack_218 = lVar9 + 0x391;
    uVar21 = (ulong)*(byte *)(lVar9 + 0x390);
  }
  else {
    lStack_218 = *(long *)(lVar9 + 0x398);
    uVar21 = *(ulong *)(lVar9 + 0x390);
  }
  lStack_220 = lStack_218 + uVar21;
  lVar1 = lVar9 + 0x3a8;
  func_0x003ecf8c(lVar1);
  if (*(long *)(lVar9 + 0x18) == 0) {
    uVar21 = *(ulong *)(lVar13 + 0x10);
    lStack_260 = lVar7;
    if (uVar21 != 0) {
      uVar23 = 0;
      do {
        puVar11 = (undefined8 *)(*(long *)(lVar13 + 8) + uVar23 * 0x20);
        uStack_1e8 = puVar11[1];
        puStack_1f0 = (undefined8 *)*puVar11;
        uStack_1d8 = puVar11[3];
        lStack_1e0 = puVar11[2];
        uVar22 = uStack_1e8 & 0xff;
        if (puStack_1f0 != (undefined8 *)0x0) {
          uVar22 = uStack_1e8;
        }
        if (uVar22 != 0) {
          lVar18 = (long)&uStack_1e8 + 1;
          if (puStack_1f0 != (undefined8 *)0x0) {
            lVar18 = lStack_1e0;
          }
          do {
            lVar3 = lStack_218;
            lVar15 = lStack_220;
            lStack_228 = lStack_220 - lStack_218;
            uStack_230 = uVar22;
            func_0x00339d8c(lVar9 + 0x20);
            uVar12 = *(undefined8 *)(lVar9 + 0x10);
            func_0x004076d0(uVar12,lVar18,&uStack_230,lVar3,&lStack_228);
            func_0x00339da8(lVar9 + 0x20);
            uVar21 = uStack_230;
            if ((int)uVar12 != 0) {
              func_0x00407688();
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/secure_endpoint.cc"
                           ,0x1bf,2,"Encryption error: %s");
              goto LAB_003e2e78;
            }
            lStack_218 = lVar3 + lStack_228;
            if (lStack_218 == lVar15) {
              FUN_003e36b0(lVar9,&lStack_218,&lStack_220);
            }
            uVar22 = uVar22 - uVar21;
            lVar18 = lVar18 + uVar21;
          } while (uVar22 != 0);
          uVar21 = *(ulong *)(lVar13 + 0x10);
        }
        uVar23 = (ulong)((int)uVar23 + 1);
      } while (uVar23 < uVar21);
    }
    do {
      lVar15 = lStack_218;
      lVar18 = lStack_220;
      lStack_228 = lStack_220 - lStack_218;
      func_0x00339d8c(lVar9 + 0x20);
      uVar12 = *(undefined8 *)(lVar9 + 0x10);
      func_0x00407714(uVar12,lVar15,&lStack_228,&puStack_1f0);
      func_0x00339da8(lVar9 + 0x20);
      if ((int)uVar12 != 0) break;
      lStack_218 = lVar15 + lStack_228;
      if (lStack_218 == lVar18) {
        FUN_003e36b0(lVar9,&lStack_218,&lStack_220);
      }
      lVar15 = lStack_218;
    } while (puStack_1f0 != (undefined8 *)0x0);
    if (*(long *)(lVar9 + 0x388) == 0) {
      lVar18 = lVar9 + 0x391;
    }
    else {
      lVar18 = *(long *)(lVar9 + 0x398);
    }
    if (lVar15 != lVar18) {
      FUN_003ec688(auStack_210,(long *)(lVar9 + 0x388),lVar15 - lVar18);
      FUN_003ecb34(lVar1,auStack_210);
    }
  }
  else {
    uVar12 = 0;
    lVar18 = lVar9 + 0x500;
    while( true ) {
      if (*(ulong *)(lVar13 + 0x20) <= (ulong)(long)(int)uVar17 || (int)uVar12 != 0) break;
      FUN_003ed3c8(lVar13,(long)(int)uVar17,lVar18);
      uVar12 = *(undefined8 *)(lVar9 + 0x18);
      func_0x00407bcc(uVar12,lVar18,lVar1);
    }
    if ((int)uVar12 == 0) {
      if (*(ulong *)(lVar13 + 0x20) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar9 + 0x18);
        func_0x00407bcc(uVar12,lVar13,lVar1);
      }
    }
    func_0x003ecf8c(lVar18);
  }
LAB_003e2e78:
  func_0x00339da8(lVar7);
  if ((int)uVar12 == 0) {
    pqVar10 = *(qword **)(lVar9 + 8);
    func_0x003bceb0(pqVar10,lVar1,uVar14,lVar16,uVar17);
  }
  else {
    func_0x003ecf8c(lVar1);
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_258 = 0;
    FUN_003b646c(&uStack_240,2,"Wrap failed",0xb,&lStack_220,&uStack_258);
    FUN_003e89d0(&uStack_238,&uStack_240,uVar12);
    FUN_003c1e6c(&lStack_218,uVar14,&uStack_238);
    if ((uStack_238 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_240 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_1f0 = &uStack_258;
    pqVar10 = (qword *)&puStack_1f0;
    FUN_0033d548();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_1d0) {
    ___stack_chk_fail();
    func_0x00339da8(lStack_260);
    __Unwind_Resume(pqVar10);
    func_0x0040cf10();
    pqVar10 = (qword *)pqVar10[1];
                    /* WARNING: Could not recover jumptable at 0x003bcec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*pqVar10 + 0x10))();
    return pqVar10;
  }
  return pqVar10;
}



/* Entry: 003e2b2c; end: 003e2be3;  */

void FUN_003e2b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [32];
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_28;
  
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  *(undefined8 *)(param_1 + 0x110) = param_2;
  uVar8 = param_4;
  func_0x003ecf8c(param_2);
  func_0x00339cd4(param_1 + 0x628);
  if (*(long *)(param_1 + 0x250) == 0) {
                    /* WARNING: Could not recover jumptable at 0x003bceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))
              (*(undefined8 **)(param_1 + 8),param_1 + 0x118,param_1 + 0xf0,param_4,
               *(undefined4 *)(param_1 + 0x4fc));
    return;
  }
  lVar6 = param_1 + 0x240;
  lVar9 = param_1 + 0x118;
  FUN_003ed190();
  if (*(long *)(param_1 + 0x250) == 0) {
    uStack_28 = 0;
    FUN_003e30f8(param_1,&uStack_28);
    if ((uStack_28 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  func_0x00775098();
  func_0x0040cf10();
  FUN_0033c494(&uStack_28);
  __Unwind_Resume();
  lStack_a0 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = lVar6 + 0xa0;
  func_0x00339d8c(lVar1);
  if (*(long *)(lVar6 + 0x388) == 0) {
    lStack_e8 = lVar6 + 0x391;
    uVar10 = (ulong)*(byte *)(lVar6 + 0x390);
  }
  else {
    lStack_e8 = *(long *)(lVar6 + 0x398);
    uVar10 = *(ulong *)(lVar6 + 0x390);
  }
  lStack_f0 = lStack_e8 + uVar10;
  lVar2 = lVar6 + 0x3a8;
  func_0x003ecf8c(lVar2);
  if (*(long *)(lVar6 + 0x18) == 0) {
    uVar10 = *(ulong *)(lVar9 + 0x10);
    lStack_130 = lVar1;
    if (uVar10 != 0) {
      uVar12 = 0;
      do {
        puVar3 = (undefined8 *)(*(long *)(lVar9 + 8) + uVar12 * 0x20);
        uStack_b8 = puVar3[1];
        puStack_c0 = (undefined8 *)*puVar3;
        uStack_a8 = puVar3[3];
        lStack_b0 = puVar3[2];
        uVar11 = uStack_b8 & 0xff;
        if (puStack_c0 != (undefined8 *)0x0) {
          uVar11 = uStack_b8;
        }
        if (uVar11 != 0) {
          lVar14 = (long)&uStack_b8 + 1;
          if (puStack_c0 != (undefined8 *)0x0) {
            lVar14 = lStack_b0;
          }
          do {
            lVar5 = lStack_e8;
            lVar4 = lStack_f0;
            lStack_f8 = lStack_f0 - lStack_e8;
            uStack_100 = uVar11;
            func_0x00339d8c(lVar6 + 0x20);
            uVar13 = *(undefined8 *)(lVar6 + 0x10);
            func_0x004076d0(uVar13,lVar14,&uStack_100,lVar5,&lStack_f8);
            func_0x00339da8(lVar6 + 0x20);
            uVar10 = uStack_100;
            if ((int)uVar13 != 0) {
              func_0x00407688();
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/secure_endpoint.cc"
                           ,0x1bf,2,"Encryption error: %s");
              goto LAB_003e2e78;
            }
            lStack_e8 = lVar5 + lStack_f8;
            if (lStack_e8 == lVar4) {
              FUN_003e36b0(lVar6,&lStack_e8,&lStack_f0);
            }
            uVar11 = uVar11 - uVar10;
            lVar14 = lVar14 + uVar10;
          } while (uVar11 != 0);
          uVar10 = *(ulong *)(lVar9 + 0x10);
        }
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar12 < uVar10);
    }
    do {
      lVar14 = lStack_e8;
      lVar9 = lStack_f0;
      lStack_f8 = lStack_f0 - lStack_e8;
      func_0x00339d8c(lVar6 + 0x20);
      uVar13 = *(undefined8 *)(lVar6 + 0x10);
      func_0x00407714(uVar13,lVar14,&lStack_f8,&puStack_c0);
      func_0x00339da8(lVar6 + 0x20);
      if ((int)uVar13 != 0) break;
      lStack_e8 = lVar14 + lStack_f8;
      if (lStack_e8 == lVar9) {
        FUN_003e36b0(lVar6,&lStack_e8,&lStack_f0);
      }
      lVar14 = lStack_e8;
    } while (puStack_c0 != (undefined8 *)0x0);
    if (*(long *)(lVar6 + 0x388) == 0) {
      lVar9 = lVar6 + 0x391;
    }
    else {
      lVar9 = *(long *)(lVar6 + 0x398);
    }
    if (lVar14 != lVar9) {
      FUN_003ec688(auStack_e0,(long *)(lVar6 + 0x388),lVar14 - lVar9);
      FUN_003ecb34(lVar2,auStack_e0);
    }
  }
  else {
    uVar13 = 0;
    lVar14 = lVar6 + 0x500;
    while( true ) {
      if (*(ulong *)(lVar9 + 0x20) <= (ulong)(long)(int)param_5 || (int)uVar13 != 0) break;
      FUN_003ed3c8(lVar9,(long)(int)param_5,lVar14);
      uVar13 = *(undefined8 *)(lVar6 + 0x18);
      func_0x00407bcc(uVar13,lVar14,lVar2);
    }
    if ((int)uVar13 == 0) {
      if (*(ulong *)(lVar9 + 0x20) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar6 + 0x18);
        func_0x00407bcc(uVar13,lVar9,lVar2);
      }
    }
    func_0x003ecf8c(lVar14);
  }
LAB_003e2e78:
  func_0x00339da8(lVar1);
  if ((int)uVar13 == 0) {
    ppuVar7 = *(undefined8 ***)(lVar6 + 8);
    func_0x003bceb0(ppuVar7,lVar2,param_3,uVar8,param_5);
  }
  else {
    func_0x003ecf8c(lVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    FUN_003b646c(&uStack_110,2,"Wrap failed",0xb,&lStack_f0,&uStack_128);
    FUN_003e89d0(&uStack_108,&uStack_110,uVar13);
    FUN_003c1e6c(&lStack_e8,param_3,&uStack_108);
    if ((uStack_108 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_110 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_c0 = &uStack_128;
    ppuVar7 = &puStack_c0;
    FUN_0033d548();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00339da8(lStack_130);
  __Unwind_Resume(ppuVar7);
  func_0x0040cf10();
                    /* WARNING: Could not recover jumptable at 0x003bcec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar7[1] + 0x10))();
  return;
}



/* Entry: 003e2be4; end: 003e300f;  */

void FUN_003e2be4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = param_1 + 0xa0;
  func_0x00339d8c(lVar1);
  if (*(long *)(param_1 + 0x388) == 0) {
    lStack_b8 = param_1 + 0x391;
    uVar7 = (ulong)*(byte *)(param_1 + 0x390);
  }
  else {
    lStack_b8 = *(long *)(param_1 + 0x398);
    uVar7 = *(ulong *)(param_1 + 0x390);
  }
  lStack_c0 = lStack_b8 + uVar7;
  lVar2 = param_1 + 0x3a8;
  func_0x003ecf8c(lVar2);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar7 = *(ulong *)(param_2 + 0x10);
    lStack_100 = lVar1;
    if (uVar7 != 0) {
      uVar9 = 0;
      do {
        puVar3 = (undefined8 *)(*(long *)(param_2 + 8) + uVar9 * 0x20);
        uStack_88 = puVar3[1];
        puStack_90 = (undefined8 *)*puVar3;
        uStack_78 = puVar3[3];
        lStack_80 = puVar3[2];
        uVar8 = uStack_88 & 0xff;
        if (puStack_90 != (undefined8 *)0x0) {
          uVar8 = uStack_88;
        }
        if (uVar8 != 0) {
          lVar6 = (long)&uStack_88 + 1;
          if (puStack_90 != (undefined8 *)0x0) {
            lVar6 = lStack_80;
          }
          do {
            lVar4 = lStack_b8;
            lVar11 = lStack_c0;
            lStack_c8 = lStack_c0 - lStack_b8;
            uStack_d0 = uVar8;
            func_0x00339d8c(param_1 + 0x20);
            uVar10 = *(undefined8 *)(param_1 + 0x10);
            func_0x004076d0(uVar10,lVar6,&uStack_d0,lVar4,&lStack_c8);
            func_0x00339da8(param_1 + 0x20);
            uVar7 = uStack_d0;
            if ((int)uVar10 != 0) {
              func_0x00407688();
              FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/secure_endpoint.cc"
                           ,0x1bf,2,"Encryption error: %s");
              goto LAB_003e2e78;
            }
            lStack_b8 = lVar4 + lStack_c8;
            if (lStack_b8 == lVar11) {
              FUN_003e36b0(param_1,&lStack_b8,&lStack_c0);
            }
            uVar8 = uVar8 - uVar7;
            lVar6 = lVar6 + uVar7;
          } while (uVar8 != 0);
          uVar7 = *(ulong *)(param_2 + 0x10);
        }
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < uVar7);
    }
    do {
      lVar11 = lStack_b8;
      lVar6 = lStack_c0;
      lStack_c8 = lStack_c0 - lStack_b8;
      func_0x00339d8c(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      func_0x00407714(uVar10,lVar11,&lStack_c8,&puStack_90);
      func_0x00339da8(param_1 + 0x20);
      if ((int)uVar10 != 0) break;
      lStack_b8 = lVar11 + lStack_c8;
      if (lStack_b8 == lVar6) {
        FUN_003e36b0(param_1,&lStack_b8,&lStack_c0);
      }
      lVar11 = lStack_b8;
    } while (puStack_90 != (undefined8 *)0x0);
    if (*(long *)(param_1 + 0x388) == 0) {
      lVar6 = param_1 + 0x391;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x398);
    }
    if (lVar11 != lVar6) {
      FUN_003ec688(auStack_b0,(long *)(param_1 + 0x388),lVar11 - lVar6);
      FUN_003ecb34(lVar2,auStack_b0);
    }
  }
  else {
    uVar10 = 0;
    lVar6 = param_1 + 0x500;
    while( true ) {
      if (*(ulong *)(param_2 + 0x20) <= (ulong)(long)(int)param_5 || (int)uVar10 != 0) break;
      FUN_003ed3c8(param_2,(long)(int)param_5,lVar6);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      func_0x00407bcc(uVar10,lVar6,lVar2);
    }
    if ((int)uVar10 == 0) {
      if (*(ulong *)(param_2 + 0x20) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        func_0x00407bcc(uVar10,param_2,lVar2);
      }
    }
    func_0x003ecf8c(lVar6);
  }
LAB_003e2e78:
  func_0x00339da8(lVar1);
  if ((int)uVar10 == 0) {
    ppuVar5 = *(undefined8 ***)(param_1 + 8);
    func_0x003bceb0(ppuVar5,lVar2,param_3,param_4,param_5);
  }
  else {
    func_0x003ecf8c(lVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0;
    FUN_003b646c(&uStack_e0,2,"Wrap failed",0xb,&lStack_c0,&uStack_f8);
    FUN_003e89d0(&uStack_d8,&uStack_e0,uVar10);
    FUN_003c1e6c(&lStack_b8,param_3,&uStack_d8);
    if ((uStack_d8 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_e0 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_90 = &uStack_f8;
    ppuVar5 = &puStack_90;
    FUN_0033d548();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00339da8(lStack_100);
  __Unwind_Resume(ppuVar5);
  func_0x0040cf10();
                    /* WARNING: Could not recover jumptable at 0x003bcec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar5[1] + 0x10))();
  return;
}



/* Entry: 003e3010; end: 003e3027;  */

void FUN_003e3010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003bcec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 003e3028; end: 003e3097;  */

void FUN_003e3028(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bcee0(uVar3,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e3098; end: 003e30d7;  */

void FUN_003e3098(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x4d0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x4d0) + 0x20))();
  }
  FUN_0038bb68(param_1 + 0x4d0);
  iVar3 = (int)param_1 + 0x628;
  FUN_00339d14();
  if ((param_1 != 0) && (iVar3 != 0)) {
    FUN_003bcf54(*(undefined8 *)(param_1 + 8));
    func_0x00407798(*(undefined8 *)(param_1 + 0x10));
    func_0x00407c44(*(undefined8 *)(param_1 + 0x18));
    FUN_003ecf54(param_1 + 0x118);
    FUN_003ecf54(param_1 + 0x240);
    plVar4 = *(long **)(param_1 + 0x368);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
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
        (*(code *)plVar4[1])();
      }
    }
    plVar4 = *(long **)(param_1 + 0x388);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
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
        (*(code *)plVar4[1])();
      }
    }
    FUN_003ecf54(param_1 + 0x3a8);
    FUN_003ecf54(param_1 + 0x500);
    func_0x00339d70(param_1 + 0x20);
    FUN_00388a1c(param_1 + 0x4e0);
    FUN_00377730(param_1 + 0x4d0);
    func_0x00339d70(param_1 + 0xa0);
    func_0x00339d70(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003e30d8; end: 003e30f7;  */

void FUN_003e30d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003bcf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}



/* Entry: 003e30f8; end: 003e352f;  */

void FUN_003e30f8(dword **param_1,dword *param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  dword **ppdVar4;
  dword **ppdVar5;
  dword *pdVar6;
  int *piVar7;
  dword *pdVar8;
  int iVar9;
  dword *pdVar10;
  ulong uVar11;
  dword **ppdVar12;
  dword *pdVar13;
  dword *pdVar14;
  dword *pdVar15;
  long lVar16;
  ulong uStack_1b0;
  undefined1 uStack_1a1;
  dword **ppdStack_1a0;
  dword **ppdStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  dword *pdStack_180;
  dword *pdStack_170;
  dword **ppdStack_168;
  int iStack_15c;
  dword *pdStack_158;
  dword **ppdStack_150;
  dword adStack_148 [8];
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong auStack_100 [4];
  long lStack_e0;
  undefined8 uStack_d8;
  dword *pdStack_d0;
  undefined8 uStack_c8;
  dword *pdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  dword *pdStack_a0;
  dword *pdStack_98;
  dword *pdStack_90;
  dword *pdStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  ppdVar12 = param_1 + 0xc;
  pdVar6 = param_2;
  func_0x00339d8c(ppdVar12);
  if (param_1[0x6d] == (dword *)0x0) {
    pdVar13 = (dword *)((long)param_1 + 0x371);
    pdVar8 = (dword *)(ulong)*(byte *)(param_1 + 0x6e);
  }
  else {
    pdVar13 = param_1[0x6f];
    pdVar8 = param_1[0x6e];
  }
  lVar16 = *(long *)param_2;
  if (lVar16 == 0) {
    pdVar15 = param_1[3];
    if (pdVar15 == (dword *)0x0) {
      ppdVar4 = param_1 + 0x6d;
      pdVar15 = param_1[0x25];
      if (pdVar15 == (dword *)0x0) {
        pdVar15 = (dword *)0x0;
      }
      else {
        pdVar10 = (dword *)0x0;
        pdVar8 = (dword *)((long)pdVar13 + (long)pdVar8);
        pdVar14 = (dword *)((long)&uStack_d8 + 1);
        ppdStack_150 = param_1 + 0x9a;
        pdStack_158 = (dword *)((long)param_1 + 0x371);
        pdStack_170 = pdVar14;
        ppdStack_168 = ppdVar12;
        do {
          iVar9 = (int)pdVar10;
          pdVar10 = param_1[0x24] + (long)pdVar10 * 8;
          uStack_d8 = *(ulong *)(pdVar10 + 2);
          lStack_e0 = *(long *)pdVar10;
          uStack_c8 = *(undefined8 *)(pdVar10 + 6);
          pdStack_d0 = *(dword **)(pdVar10 + 4);
          uVar11 = uStack_d8 & 0xff;
          if (lStack_e0 != 0) {
            uVar11 = uStack_d8;
          }
          if (uVar11 != 0) {
            iStack_15c = iVar9;
            if (lStack_e0 != 0) {
              pdVar14 = pdStack_d0;
            }
            do {
              lStack_110 = (long)pdVar8 - (long)pdVar13;
              uStack_118 = uVar11;
              func_0x00339d8c(param_1 + 4);
              pdVar15 = param_1[2];
              pdVar6 = pdVar14;
              func_0x00407754(pdVar15,pdVar14,&uStack_118,pdVar13,&lStack_110);
              func_0x00339da8(param_1 + 4);
              uVar2 = uStack_118;
              if ((int)pdVar15 != 0) {
                pdVar8 = pdVar15;
                func_0x00407688();
                pdVar6 = (dword *)((long)&section_00000108.size + 2);
                pdStack_180 = pdVar8;
                FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/secure_endpoint.cc"
                             ,0x132,2,"Decryption error: %s");
                ppdVar12 = ppdStack_168;
                goto LAB_003e3368;
              }
              pdVar13 = (dword *)((long)pdVar13 + lStack_110);
              if (pdVar13 == pdVar8) {
                pdStack_98 = param_1[0x6e];
                pdStack_a0 = *ppdVar4;
                pdStack_88 = param_1[0x70];
                pdStack_90 = param_1[0x6f];
                FUN_003ecd90(param_1[0x22],&pdStack_a0);
                pdVar6 = &dylib_command_00001ff0.dylib.current_version;
                FUN_003b639c(&pdStack_c0,ppdStack_150,0x2000,0x2000);
                param_1[0x6e] = pdStack_b8;
                *ppdVar4 = pdStack_c0;
                param_1[0x70] = pdStack_a8;
                param_1[0x6f] = pdStack_b0;
                if (*ppdVar4 == (dword *)0x0) {
                  pdVar8 = (dword *)(ulong)*(byte *)(param_1 + 0x6e);
                  pdVar13 = pdStack_158;
                }
                else {
                  pdVar8 = param_1[0x6e];
                  pdVar13 = param_1[0x6f];
                }
                pdVar8 = (dword *)((long)pdVar13 + (long)pdVar8);
                bVar3 = true;
              }
              else {
                bVar3 = lStack_110 != 0;
              }
              pdVar14 = (dword *)((long)pdVar14 + uVar2);
              uVar11 = uVar11 - uVar2;
            } while ((bVar3) || (uVar11 != 0));
            pdVar15 = param_1[0x25];
            pdVar14 = pdStack_170;
            iVar9 = iStack_15c;
          }
          pdVar10 = (dword *)(ulong)(iVar9 + 1);
        } while (pdVar10 < pdVar15);
        pdVar15 = (dword *)0x0;
        ppdVar12 = ppdStack_168;
      }
LAB_003e3368:
      if (*ppdVar4 == (dword *)0x0) {
        pdVar8 = (dword *)((long)param_1 + 0x371);
      }
      else {
        pdVar8 = param_1[0x6f];
      }
      if (pdVar13 != pdVar8) {
        pdVar14 = param_1[0x22];
        FUN_003ec688(auStack_100,ppdVar4,(long)pdVar13 - (long)pdVar8);
        pdVar6 = (dword *)auStack_100;
        FUN_003ecb34(pdVar14);
      }
    }
    else {
      pdStack_a0 = (dword *)CONCAT44(pdStack_a0._4_4_,1);
      pdVar6 = (dword *)(param_1 + 0x23);
      func_0x00407c08(pdVar15,pdVar6,param_1[0x22],&pdStack_a0);
      iVar9 = (int)pdStack_a0;
      if ((int)pdStack_a0 < 2) {
        iVar9 = 1;
      }
      if ((int)pdVar15 != 0) {
        iVar9 = 1;
      }
      *(int *)((long)param_1 + 0x4fc) = iVar9;
    }
  }
  else {
    func_0x003ecf8c(param_1[0x22]);
    FUN_003bdf2c(&uStack_108,2,"Secure read failed",0x12,&pdStack_a0,1,param_2);
    pdVar6 = (dword *)&uStack_108;
    FUN_003e3530(param_1);
    if ((uStack_108 & 1) != 0) {
      FUN_0055293c();
    }
    pdVar15 = (dword *)0x0;
  }
  ppdVar4 = ppdVar12;
  func_0x00339da8();
  if (lVar16 == 0) {
    func_0x003ecf8c(param_1 + 0x23);
    if ((int)pdVar15 == 0) {
      adStack_148[0] = 0;
      adStack_148[1] = 0;
      pdVar6 = adStack_148;
      FUN_003e3530();
      ppdVar4 = param_1;
    }
    else {
      func_0x003ecf8c(param_1[0x22]);
      adStack_148[4] = 0;
      adStack_148[5] = 0;
      adStack_148[6] = 0;
      adStack_148[7] = 0;
      adStack_148[2] = 0;
      adStack_148[3] = 0;
      FUN_003b646c(adStack_148 + 8,2,"Unwrap failed",0xd,&pdStack_c0,adStack_148 + 2);
      FUN_003e89d0(&uStack_120,adStack_148 + 8,pdVar15);
      pdVar6 = (dword *)&uStack_120;
      FUN_003e3530(param_1);
      if ((uStack_120 & 1) != 0) {
        FUN_0055293c();
      }
      if ((uStack_128 & 1) != 0) {
        FUN_0055293c();
      }
      pdStack_a0 = adStack_148 + 2;
      ppdVar4 = &pdStack_a0;
      FUN_0033d548();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_78) {
    ___stack_chk_fail();
    if ((int)pdVar6 == 0) {
      __Unwind_Resume(ppdVar4);
    }
    ppdVar5 = ppdVar4;
    func_0x0040cf10();
    pcStack_188 = FUN_003e3530;
    ppdVar5[0x22] = (dword *)0x0;
    pdVar13 = ppdVar5[0x1c];
    uStack_1b0 = *(ulong *)pdVar6;
    if ((uStack_1b0 & 1) != 0) {
      piVar7 = (int *)(uStack_1b0 - 1);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppdStack_1a0 = ppdVar12;
    ppdStack_198 = ppdVar4;
    puStack_190 = &stack0xfffffffffffffff0;
    FUN_003c1e6c(&uStack_1a1,pdVar13,&uStack_1b0);
    if ((uStack_1b0 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003e35b8(ppdVar5);
    return;
  }
  return;
}



/* Entry: 003e3530; end: 003e35b7;  */

void FUN_003e3530(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(undefined8 *)(param_1 + 0x110) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar4 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  FUN_003e35b8(param_1);
  return;
}



/* Entry: 003e35b8; end: 003e36af;  */

void FUN_003e35b8(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  iVar3 = (int)param_1 + 0x628;
  FUN_00339d14();
  if ((param_1 != 0) && (iVar3 != 0)) {
    FUN_003bcf54(*(undefined8 *)(param_1 + 8));
    func_0x00407798(*(undefined8 *)(param_1 + 0x10));
    func_0x00407c44(*(undefined8 *)(param_1 + 0x18));
    FUN_003ecf54(param_1 + 0x118);
    FUN_003ecf54(param_1 + 0x240);
    plVar4 = *(long **)(param_1 + 0x368);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
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
        (*(code *)plVar4[1])();
      }
    }
    plVar4 = *(long **)(param_1 + 0x388);
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
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
        (*(code *)plVar4[1])();
      }
    }
    FUN_003ecf54(param_1 + 0x3a8);
    FUN_003ecf54(param_1 + 0x500);
    func_0x00339d70(param_1 + 0x20);
    FUN_00388a1c(param_1 + 0x4e0);
    FUN_00377730(param_1 + 0x4d0);
    func_0x00339d70(param_1 + 0xa0);
    func_0x00339d70(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003e36b0; end: 003e393b;  */

void FUN_003e36b0(qword param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  dword *pdVar4;
  segment_command *psVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 uVar8;
  dword *pdVar9;
  dword *pdVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *extraout_x8;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char cStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long *plStack_e0;
  dword *pdStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char *pcStack_b0;
  dword *pdStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar6 = (long *)(param_1 + 0x388);
  uStack_78 = *(undefined8 *)(param_1 + 0x390);
  lStack_80 = *plVar6;
  uStack_68 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_70 = *(undefined8 *)(param_1 + 0x398);
  FUN_003ecd90(param_1 + 0x3a8,&lStack_80);
  plVar14 = (long *)(param_1 + 0x4d0);
  pdVar9 = &dylib_command_00001ff0.dylib.current_version;
  uVar11 = 0x2000;
  plVar15 = plVar14;
  FUN_003b639c(&pdStack_a0);
  *(undefined8 *)(param_1 + 0x390) = uStack_98;
  *plVar6 = (long)pdStack_a0;
  *(undefined8 *)(param_1 + 0x3a0) = uStack_88;
  *(undefined8 *)(param_1 + 0x398) = uStack_90;
  if (*plVar6 == 0) {
    lVar12 = param_1 + 0x391;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x398);
  }
  *param_2 = lVar12;
  if (*plVar6 == 0) {
    lVar12 = param_1 + 0x391;
    uVar13 = (ulong)*(byte *)(param_1 + 0x390);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x398);
    uVar13 = *(ulong *)(param_1 + 0x390);
  }
  *param_3 = lVar12 + uVar13;
  pdVar4 = (dword *)(param_1 + 0x4f8);
  if ((*(byte *)pdVar4 & 1) == 0) {
    func_0x00339cd4(param_1 + 0x628);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pdVar4,0x10);
      if (bVar2) {
        *(byte *)pdVar4 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar12 = *plVar14;
    plVar14 = (long *)(lVar12 + 0x40);
    func_0x00339d8c(plVar14);
    if (*(char *)(lVar12 + 0x80) != '\0') {
      pcStack_b0 = "!shutdown_";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.h"
                   ,0x13a,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3e38b8);
      (*pcVar3)();
    }
    lVar17 = *(long *)(lVar12 + 0x18);
    pdVar4 = &MACH_HEADER.flags;
    __Znwm();
    uVar8 = *(undefined8 *)(lVar17 + 0x30);
    param_2 = *(long **)(lVar17 + 0x38);
    if (param_2 != (long *)0x0) {
      plVar6 = param_2 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pbVar18 = (byte *)(pdVar4 + 2);
    pbVar18[0] = 1;
    pbVar18[1] = 0;
    pbVar18[2] = 0;
    pbVar18[3] = 0;
    pbVar18[4] = 0;
    pbVar18[5] = 0;
    pbVar18[6] = 0;
    pbVar18[7] = 0;
    *(undefined ***)pdVar4 = &PTR_FUN_009e07f8;
    psVar5 = &segment_command_00000020;
    __Znwm();
    *(undefined ***)psVar5 = &PTR_FUN_009e1458;
    *(undefined8 *)psVar5->segname = uVar8;
    *(long **)(psVar5->segname + 8) = param_2;
    psVar5->vmaddr = param_1;
    *(segment_command **)(pdVar4 + 4) = psVar5;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pbVar18,0x10);
      if (bVar2) {
        *(long *)pbVar18 = *(long *)pbVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pdStack_a0 = pdVar4;
    FUN_003d62f4(lVar17 + 0x30,&pdStack_a0);
    if (pdStack_a0 != (dword *)0x0) {
      pbVar18 = (byte *)(pdStack_a0 + 2);
      do {
        lVar17 = *(long *)pbVar18;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pbVar18,0x10);
        if (bVar2) {
          *(long *)pbVar18 = lVar17 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar17 + -1 == 0) {
        (**(code **)(*(long *)pdStack_a0 + 0x10))();
      }
    }
    pdVar9 = pdVar4;
    FUN_0038aa60(lVar12 + 0x90);
    plVar15 = plVar14;
    func_0x00339da8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pdVar9 == 0) {
    __Unwind_Resume(plVar15);
  }
  plVar6 = plVar15;
  func_0x0040cf10();
  puVar7 = &uStack_130;
  pcStack_b8 = FUN_003e393c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar10 = pdVar9;
  plStack_e0 = param_2;
  pdStack_d8 = pdVar4;
  plStack_d0 = plVar15;
  plStack_c8 = plVar14;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (*(byte *)(pdVar9 + 8) == 0) {
    FUN_003d6390(plVar6);
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    cStack_110 = '\0';
    if (*(byte *)(pdVar9 + 8) == 0) goto LAB_003e3a94;
  }
  plVar16 = plVar6 + 3;
  uStack_128 = *(undefined8 *)(pdVar9 + 2);
  uStack_130 = *(ulong *)pdVar9;
  *(undefined8 *)pdVar9 = 0;
  pbVar18 = (byte *)(pdVar9 + 2);
  pbVar18[0] = 0;
  pbVar18[1] = 0;
  pbVar18[2] = 0;
  pbVar18[3] = 0;
  pbVar18[4] = 0;
  pbVar18[5] = 0;
  pbVar18[6] = 0;
  pbVar18[7] = 0;
  uStack_120 = *(undefined8 *)(pdVar9 + 4);
  uStack_118 = *(undefined8 *)(pdVar9 + 6);
  pbVar18 = (byte *)(pdVar9 + 6);
  pbVar18[0] = 0;
  pbVar18[1] = 0;
  pbVar18[2] = 0;
  pbVar18[3] = 0;
  pbVar18[4] = 0;
  pbVar18[5] = 0;
  pbVar18[6] = 0;
  pbVar18[7] = 0;
  cStack_110 = '\x01';
  func_0x00339d8c(*plVar16 + 0x60);
  plVar14 = *(long **)(*plVar16 + 0x368);
  FUN_003ec024(&uStack_108);
  lVar12 = *plVar16;
  *(undefined8 *)(lVar12 + 0x370) = uStack_100;
  *(undefined8 *)(lVar12 + 0x368) = uStack_108;
  *(undefined8 *)(lVar12 + 0x380) = uStack_f0;
  *(undefined8 *)(lVar12 + 0x378) = uStack_f8;
  func_0x00339da8(*plVar16 + 0x60);
  func_0x00339d8c(*plVar16 + 0xa0);
  plVar15 = *(long **)(*plVar16 + 0x388);
  FUN_003ec024(&uStack_108);
  lVar12 = *plVar16;
  *(undefined8 *)(lVar12 + 0x390) = uStack_100;
  *(undefined8 *)(lVar12 + 0x388) = uStack_108;
  *(undefined8 *)(lVar12 + 0x3a0) = uStack_f0;
  *(undefined8 *)(lVar12 + 0x398) = uStack_f8;
  func_0x00339da8(*plVar16 + 0xa0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar14) {
    do {
      lVar12 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar14[1])(plVar14);
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar15) {
    do {
      lVar12 = *plVar15;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar12 + -1 == 0) {
      (*(code *)plVar15[1])(plVar15);
    }
  }
  lVar12 = *plVar16;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass((undefined1 *)(lVar12 + 0x4f8),0x10);
    if (bVar2) {
      *(undefined1 *)(lVar12 + 0x4f8) = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_003e3a94:
  plVar14 = (long *)plVar6[3];
  FUN_003e35b8();
  if (cStack_110 != '\0') {
    FUN_003d61b4();
    plVar14 = (long *)puVar7;
  }
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)&PTR____cxa_pure_virtual_009deca0;
    func_0x0038aa08(plVar6 + 1);
    __ZdlPv();
    plVar14 = plVar6;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_e8) {
    ___stack_chk_fail();
    if (cStack_110 != '\0') {
      FUN_003d61b4(&uStack_130);
    }
    __Unwind_Resume();
    if (plVar14 == (long *)0x0) {
      pdVar9 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined ***)pdVar9 = &PTR_FUN_009e1488;
      *(undefined8 *)(pdVar9 + 2) = 1;
    }
    else {
      pdVar9 = &section_000001f8.flags;
      __Znwm();
      *(undefined ***)pdVar9 = &PTR_FUN_009e1508;
      *(undefined8 *)(pdVar9 + 2) = 1;
      *(long **)(pdVar9 + 4) = plVar14;
      pbVar18 = (byte *)(pdVar10 + 2);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pbVar18,0x10);
        if (bVar2) {
          *(long *)pbVar18 = *(long *)pbVar18 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(dword **)(pdVar9 + 6) = pdVar10;
      func_0x00339d50(pdVar9 + 8);
      *(undefined1 *)(pdVar9 + 0x18) = 0;
      *(undefined8 *)(pdVar9 + 0x1c) = 0;
      *(undefined8 *)(pdVar9 + 0x1a) = 0;
      *(undefined8 *)(pdVar9 + 0x20) = 0;
      *(undefined8 *)(pdVar9 + 0x1e) = 0;
      *(undefined8 *)(pdVar9 + 0x22) = 0x100;
      uVar8 = 0x100;
      FUN_00338c74();
      *(undefined8 *)(pdVar9 + 0x24) = uVar8;
      *(undefined8 *)(pdVar9 + 0x8a) = 0;
      *(undefined8 *)(pdVar9 + 0x88) = 0;
      func_0x003a2d4c(uVar11,"grpc.tsi.max_frame_size",0,0x7fffffff);
      *(long *)(pdVar9 + 0x8c) = (long)(int)uVar11;
      FUN_003ecf38(pdVar9 + 0x26);
      *(code **)(pdVar9 + 0x82) = FUN_003e3ef0;
      *(dword **)(pdVar9 + 0x84) = pdVar9;
      *(undefined8 *)(pdVar9 + 0x86) = 0;
    }
    *extraout_x8 = pdVar9;
    return;
  }
  return;
}



/* Entry: 003e393c; end: 003e3b17;  */

void FUN_003e393c(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  dword *pdVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 *extraout_x8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar7 = param_2;
  if ((char)param_2[4] == '\0') {
    FUN_003d6390(param_1);
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    cStack_60 = '\0';
    if ((char)param_2[4] == '\0') goto LAB_003e3a94;
  }
  plVar11 = param_1 + 3;
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_70 = param_2[2];
  uStack_68 = param_2[3];
  param_2[3] = 0;
  cStack_60 = '\x01';
  func_0x00339d8c(*plVar11 + 0x60);
  plVar9 = *(long **)(*plVar11 + 0x368);
  FUN_003ec024(&uStack_58);
  lVar8 = *plVar11;
  *(undefined8 *)(lVar8 + 0x370) = uStack_50;
  *(undefined8 *)(lVar8 + 0x368) = uStack_58;
  *(undefined8 *)(lVar8 + 0x380) = uStack_40;
  *(undefined8 *)(lVar8 + 0x378) = uStack_48;
  func_0x00339da8(*plVar11 + 0x60);
  func_0x00339d8c(*plVar11 + 0xa0);
  plVar10 = *(long **)(*plVar11 + 0x388);
  FUN_003ec024(&uStack_58);
  lVar8 = *plVar11;
  *(undefined8 *)(lVar8 + 0x390) = uStack_50;
  *(undefined8 *)(lVar8 + 0x388) = uStack_58;
  *(undefined8 *)(lVar8 + 0x3a0) = uStack_40;
  *(undefined8 *)(lVar8 + 0x398) = uStack_48;
  func_0x00339da8(*plVar11 + 0xa0);
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plVar9[1])(plVar9);
    }
  }
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar10) {
    do {
      lVar8 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (*(code *)plVar10[1])(plVar10);
    }
  }
  lVar8 = *plVar11;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass((undefined1 *)(lVar8 + 0x4f8),0x10);
    if (bVar2) {
      *(undefined1 *)(lVar8 + 0x4f8) = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_003e3a94:
  puVar3 = (undefined8 *)param_1[3];
  FUN_003e35b8();
  if (cStack_60 != '\0') {
    FUN_003d61b4();
    puVar3 = puVar4;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR____cxa_pure_virtual_009deca0;
    func_0x0038aa08(param_1 + 1);
    __ZdlPv();
    puVar3 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_60 != '\0') {
      FUN_003d61b4(&uStack_80);
    }
    __Unwind_Resume();
    if (puVar3 == (undefined8 *)0x0) {
      pdVar6 = &MACH_HEADER.ncmds;
      __Znwm();
      *(undefined ***)pdVar6 = &PTR_FUN_009e1488;
      *(undefined8 *)(pdVar6 + 2) = 1;
    }
    else {
      pdVar6 = &section_000001f8.flags;
      __Znwm();
      *(undefined ***)pdVar6 = &PTR_FUN_009e1508;
      *(undefined8 *)(pdVar6 + 2) = 1;
      *(undefined8 **)(pdVar6 + 4) = puVar3;
      puVar4 = puVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *puVar4 = *puVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *(ulong **)(pdVar6 + 6) = puVar7;
      func_0x00339d50(pdVar6 + 8);
      *(undefined1 *)(pdVar6 + 0x18) = 0;
      *(undefined8 *)(pdVar6 + 0x1c) = 0;
      *(undefined8 *)(pdVar6 + 0x1a) = 0;
      *(undefined8 *)(pdVar6 + 0x20) = 0;
      *(undefined8 *)(pdVar6 + 0x1e) = 0;
      *(undefined8 *)(pdVar6 + 0x22) = 0x100;
      uVar5 = 0x100;
      FUN_00338c74();
      *(undefined8 *)(pdVar6 + 0x24) = uVar5;
      *(undefined8 *)(pdVar6 + 0x8a) = 0;
      *(undefined8 *)(pdVar6 + 0x88) = 0;
      func_0x003a2d4c(param_3,"grpc.tsi.max_frame_size",0,0x7fffffff);
      *(long *)(pdVar6 + 0x8c) = (long)(int)param_3;
      FUN_003ecf38(pdVar6 + 0x26);
      *(code **)(pdVar6 + 0x82) = FUN_003e3ef0;
      *(dword **)(pdVar6 + 0x84) = pdVar6;
      *(undefined8 *)(pdVar6 + 0x86) = 0;
    }
    *extraout_x8 = pdVar6;
    return;
  }
  return;
}



/* Entry: 003e3b18; end: 003e3c8f;  */

void FUN_003e3b18(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  dword *pdVar5;
  
  if (param_2 == 0) {
    pdVar5 = &MACH_HEADER.ncmds;
    __Znwm();
    *(undefined ***)pdVar5 = &PTR_FUN_009e1488;
    *(undefined8 *)(pdVar5 + 2) = 1;
  }
  else {
    pdVar5 = &section_000001f8.flags;
    __Znwm();
    *(undefined ***)pdVar5 = &PTR_FUN_009e1508;
    *(undefined8 *)(pdVar5 + 2) = 1;
    *(long *)(pdVar5 + 4) = param_2;
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(pdVar5 + 6) = param_3;
    FUN_00339d50(pdVar5 + 8);
    *(undefined1 *)(pdVar5 + 0x18) = 0;
    *(undefined8 *)(pdVar5 + 0x1c) = 0;
    *(undefined8 *)(pdVar5 + 0x1a) = 0;
    *(undefined8 *)(pdVar5 + 0x20) = 0;
    *(undefined8 *)(pdVar5 + 0x1e) = 0;
    *(undefined8 *)(pdVar5 + 0x22) = 0x100;
    uVar4 = 0x100;
    FUN_00338c74();
    *(undefined8 *)(pdVar5 + 0x24) = uVar4;
    *(undefined8 *)(pdVar5 + 0x8a) = 0;
    *(undefined8 *)(pdVar5 + 0x88) = 0;
    func_0x003a2d4c(param_4,"grpc.tsi.max_frame_size",0,0x7fffffff);
    *(long *)(pdVar5 + 0x8c) = (long)(int)param_4;
    FUN_003ecf38(pdVar5 + 0x26);
    *(code **)(pdVar5 + 0x82) = FUN_003e3ef0;
    *(dword **)(pdVar5 + 0x84) = pdVar5;
    *(undefined8 *)(pdVar5 + 0x86) = 0;
  }
  *param_1 = pdVar5;
  return;
}



/* Entry: 003e3c90; end: 003e3d73;  */

void FUN_003e3c90(long param_1)

{
  dword *pdVar1;
  dword *pdStack_30;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e15a8;
  pdStack_28 = pdVar1;
  FUN_003fcc74(param_1 + 0x90,0,0,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 0x10))();
  }
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_FUN_009e15f8;
  pdStack_30 = pdVar1;
  FUN_003fcc74(param_1 + 0x90,0,1,&pdStack_30);
  pdVar1 = pdStack_30;
  pdStack_30 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 0x10))();
  }
  return;
}



/* Entry: 003e3d74; end: 003e3d7f;  */

void FUN_003e3d74(void)

{
  return;
}



/* Entry: 003e3d80; end: 003e3ee3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003e3d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_70;
  ulong auStack_68 [4];
  undefined1 uStack_41;
  ulong uStack_40;
  ulong *puStack_38;
  
  auStack_68[2] = 0;
  auStack_68[3] = 0;
  auStack_68[1] = 0;
  FUN_003b646c(&uStack_40,2,"Failed to create security handshaker",0x24,&uStack_41,auStack_68 + 1);
  puStack_38 = auStack_68 + 1;
  FUN_0033d548(&puStack_38);
  uVar3 = *param_4;
  auStack_68[0] = uStack_40;
  if ((uStack_40 & 1) != 0) {
    piVar4 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003bcee0(uVar3,auStack_68);
  if ((auStack_68[0] & 1) != 0) {
    FUN_0055293c();
  }
  FUN_003bcf54(*param_4);
  *param_4 = 0;
  FUN_003a2a64(param_4[1]);
  param_4[1] = 0;
  FUN_003ecf54(param_4[2]);
  FUN_00338cb8(param_4[2]);
  param_4[2] = 0;
  uStack_70 = uStack_40;
  if ((uStack_40 & 1) != 0) {
    piVar4 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&puStack_38,param_3,&uStack_70);
  if ((uStack_70 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e3ee4; end: 003e3eef;  */

char * FUN_003e3ee4(void)

{
  return "security_fail";
}



/* Entry: 003e3ef0; end: 003e455b;  */

void FUN_003e3ef0(long ****param_1,undefined8 *param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  long **pplVar9;
  int *piVar10;
  long ***ppplVar11;
  long lVar12;
  long ****pppplVar13;
  long **pplVar14;
  long *plVar15;
  long ***ppplStack_118;
  undefined1 uStack_109;
  undefined1 auStack_108 [8];
  long *plStack_100;
  int iStack_f4;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *aplStack_d8 [4];
  long ***ppplStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long ***ppplStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplVar13 = (long ****)*param_2;
  if (((ulong)pppplVar13 & 1) != 0) {
    piVar10 = (int *)((long)pppplVar13 + -1);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar7) {
        *piVar10 = *piVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pppplVar1 = param_1 + 4;
  ppplStack_118 = (long ***)pppplVar13;
  func_0x00339d8c(pppplVar1);
  if (pppplVar13 == (long ****)0x0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      lStack_e8 = 0;
      uStack_e0 = 0;
      ppplVar11 = param_1[0x45];
      func_0x004078ec(ppplVar11,&uStack_e0,&lStack_e8);
      if ((int)ppplVar11 == 0) {
        ppplVar11 = param_1[0x45];
        func_0x00407888(ppplVar11,&iStack_f4);
        if ((int)ppplVar11 == 0) {
          uStack_f0 = 0;
          plStack_100 = (long *)0x0;
          if (iStack_f4 - 1U < 2) {
            ppplVar11 = param_1[0x45];
            pppplVar13 = (long ****)0x0;
            if (param_1[0x46] != (long ***)0x0) {
              pppplVar13 = param_1 + 0x46;
            }
            FUN_00407b94(ppplVar11,pppplVar13,&uStack_f0);
            if ((int)ppplVar11 != 0) {
              pppuStack_b0 = (undefined8 ****)0x0;
              uStack_a8 = 0;
              ppplStack_b8 = (long ***)0x0;
              FUN_003b646c(auStack_108,2,"Zero-copy frame protector creation failed",0x29,
                           &uStack_109,&ppplStack_b8);
              FUN_003e89d0(aplStack_d8,auStack_108,ppplVar11);
              FUN_003e4940(param_1,aplStack_d8);
LAB_003e4174:
              FUN_0033c494(aplStack_d8);
              FUN_0033c494(auStack_108);
              goto LAB_003e4184;
            }
          }
          else if (iStack_f4 == 0) {
            ppplVar11 = param_1[0x45];
            pppplVar13 = (long ****)0x0;
            if (param_1[0x46] != (long ***)0x0) {
              pppplVar13 = param_1 + 0x46;
            }
            func_0x004078b4(ppplVar11,pppplVar13,&plStack_100);
            if ((int)ppplVar11 != 0) {
              pppuStack_b0 = (undefined8 ****)0x0;
              uStack_a8 = 0;
              ppplStack_b8 = (long ***)0x0;
              FUN_003b646c(auStack_108,2,"Frame protector creation failed",0x1f,&uStack_109,
                           &ppplStack_b8);
              FUN_003e89d0(aplStack_d8,auStack_108,ppplVar11);
              FUN_003e4940(param_1,aplStack_d8);
              goto LAB_003e4174;
            }
          }
          bVar7 = uStack_f0 == 0;
          bVar8 = (long **)plStack_100 == (long **)0x0;
          if (uStack_f0 == 0 && (long **)plStack_100 == (long **)0x0) {
            if (lStack_e8 != 0) {
              func_0x003ec288(&ppplStack_b8,uStack_e0);
              pppuStack_68 = pppuStack_b0;
              ppplStack_70 = ppplStack_b8;
              uStack_58 = uStack_a0;
              uStack_60 = uStack_a8;
              FUN_003ecb34(param_1[0xf][2],&ppplStack_70);
            }
          }
          else if (lStack_e8 == 0) {
            pplVar14 = (long **)plStack_100;
            FUN_003e2718(plStack_100,uStack_f0,*param_1[0xf],0,param_1[0xf][1],0);
            *param_1[0xf] = pplVar14;
          }
          else {
            func_0x003ec288(&ppplStack_b8,uStack_e0);
            pplVar14 = (long **)plStack_100;
            FUN_003e2718(plStack_100,uStack_f0,*param_1[0xf],&ppplStack_b8,param_1[0xf][1],1);
            *param_1[0xf] = pplVar14;
            if ((long ****)((long)&MACH_HEADER.magic + 1) < ppplStack_b8) {
              do {
                ppplVar11 = (long ***)*ppplStack_b8;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppplStack_b8,0x10);
                if (bVar5) {
                  *ppplStack_b8 = (long **)((long)ppplVar11 + -1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((long ***)((long)ppplVar11 + -1) == (long ***)0x0) {
                (*(code *)ppplStack_b8[1])();
              }
            }
          }
          func_0x00407928(param_1[0x45]);
          param_1[0x45] = (long ***)0x0;
          FUN_003db440(aplStack_d8,param_1[0x44]);
          FUN_00353aa0(&ppplStack_b8,aplStack_d8,&ppplStack_b8,auStack_108);
          if (bVar7 && bVar8) {
            plVar15 = (long *)0x0;
          }
          else {
            FUN_003e4b94(aplStack_d8,param_1[0x44]);
            FUN_003a9d6c(aplStack_d8,aplStack_d8[0]);
            FUN_00354a68(&ppplStack_b8,aplStack_d8);
            plVar15 = aplStack_d8[0];
          }
          pplVar14 = param_1[0xf][1];
          ppppuVar4 = &pppuStack_b0;
          if (((ulong)ppplStack_b8 & 1) != 0) {
            ppppuVar4 = (undefined8 ****)pppuStack_b0;
          }
          pplVar9 = pplVar14;
          FUN_003a1ecc(pplVar14,ppppuVar4,(ulong)ppplStack_b8 >> 1);
          param_1[0xf][1] = pplVar9;
          FUN_003a2a64(pplVar14);
          aplStack_d8[0] = (long *)0x0;
          FUN_003c1e6c(auStack_108,param_1[0x10],aplStack_d8);
          FUN_0033c494(aplStack_d8);
          *(undefined1 *)(param_1 + 0xc) = 1;
          if (plVar15 != (long *)0x0) {
            plVar3 = plVar15 + 1;
            do {
              lVar12 = *plVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *plVar3 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
          if (((ulong)ppplStack_b8 & 1) != 0) {
            __ZdlPv(pppuStack_b0);
          }
          goto LAB_003e4194;
        }
        pppuStack_b0 = (undefined8 ****)0x0;
        uStack_a8 = 0;
        ppplStack_b8 = (long ***)0x0;
        FUN_003b646c(&uStack_f0,2,
                     "TSI handshaker result does not implement get_frame_protector_type",0x41,
                     &plStack_100,&ppplStack_b8);
        FUN_003e89d0(aplStack_d8,&uStack_f0,ppplVar11);
        FUN_003e4940(param_1,aplStack_d8);
        if (((ulong)aplStack_d8[0] & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_f0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pppuStack_b0 = (undefined8 ****)0x0;
        uStack_a8 = 0;
        ppplStack_b8 = (long ***)0x0;
        FUN_003b646c(&uStack_f0,2,"TSI handshaker result does not provide unused bytes",0x33,
                     &plStack_100,&ppplStack_b8);
        FUN_003e89d0(aplStack_d8,&uStack_f0,ppplVar11);
        FUN_003e4940(param_1,aplStack_d8);
        if (((ulong)aplStack_d8[0] & 1) != 0) {
          FUN_0055293c();
        }
        if ((uStack_f0 & 1) != 0) {
          FUN_0055293c();
        }
      }
LAB_003e4184:
      ppplStack_70 = (long ***)&ppplStack_b8;
      FUN_0033d548(&ppplStack_70);
      goto LAB_003e4194;
    }
    ppplStack_b8 = (long ***)0x0;
  }
  else {
    ppplStack_b8 = (long ***)pppplVar13;
    if (((ulong)pppplVar13 & 1) != 0) {
      piVar10 = (int *)((long)pppplVar13 + -1);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  FUN_003e4940(param_1,&ppplStack_b8);
  if (((ulong)ppplStack_b8 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003e4194:
  func_0x00339da8(pppplVar1);
  pppplVar13 = (long ****)ppplStack_118;
  if (((ulong)ppplStack_118 & 1) != 0) {
    FUN_0055293c();
  }
  if (param_1 != (long ****)0x0) {
    pppplVar2 = param_1 + 1;
    do {
      ppplVar11 = *pppplVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
      if (bVar7) {
        *pppplVar2 = (long ***)((long)ppplVar11 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((long ***)((long)ppplVar11 + -1) == (long ***)0x0) {
      pppplVar13 = param_1;
      (*(code *)(*param_1)[1])(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    FUN_0033c494(aplStack_d8);
    FUN_0033c494(auStack_108);
    ppplStack_70 = (long ***)&ppplStack_b8;
    FUN_0033d548(&ppplStack_70);
    func_0x00339da8(pppplVar1);
    FUN_0033c494(&ppplStack_118);
    if (param_1 != (long ****)0x0) {
      pppplVar1 = param_1 + 1;
      do {
        ppplVar11 = *pppplVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
        if (bVar7) {
          *pppplVar1 = (long ***)((long)ppplVar11 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((long ***)((long)ppplVar11 + -1) == (long ***)0x0) goto LAB_003e4548;
    }
    do {
      __Unwind_Resume(pppplVar13);
LAB_003e4548:
      (*(code *)(*param_1)[1])(param_1);
    } while( true );
  }
  return;
}



/* Entry: 003e455c; end: 003e4667;  */

undefined8 * FUN_003e455c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_009e1508;
  FUN_00407834(param_1[2]);
  func_0x00407928(param_1[0x45]);
  if (param_1[0xd] != 0) {
    FUN_003bcf54();
  }
  if (param_1[0xe] != 0) {
    FUN_003ecf54();
    FUN_00338cb8(param_1[0xe]);
  }
  FUN_00338cb8(param_1[0x12]);
  FUN_003ecf54(param_1 + 0x13);
  FUN_003db020(param_1 + 0x44,&uStack_21,"handshake",0);
  plVar4 = (long *)param_1[3];
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
  param_1[3] = 0;
  FUN_003da5d0(param_1 + 0x44);
  func_0x00339d70(param_1 + 4);
  plVar4 = (long *)param_1[3];
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



/* Entry: 003e4668; end: 003e467b;  */

void FUN_003e4668(void)

{
  FUN_003e455c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003e467c; end: 003e47bb;  */

void FUN_003e467c(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uStack_40;
  ulong uStack_38;
  
  func_0x00339d8c(param_1 + 0x20);
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 1;
    plVar4 = *(long **)(param_1 + 0x18);
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar6 = (int *)(uStack_38 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1 + 0x200,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    FUN_004077f4(*(undefined8 *)(param_1 + 0x10));
    uVar5 = **(undefined8 **)(param_1 + 0x78);
    uStack_40 = *param_2;
    if ((uStack_40 & 1) != 0) {
      piVar6 = (int *)(uStack_40 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003bcee0(uVar5,&uStack_40);
    if ((uStack_40 & 1) != 0) {
      FUN_0055293c();
    }
    puVar7 = *(undefined8 **)(param_1 + 0x78);
    uVar5 = *puVar7;
    uVar1 = puVar7[1];
    *puVar7 = 0;
    uVar8 = puVar7[2];
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    puVar7[2] = 0;
    FUN_003a2a64(uVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x78) + 8) = 0;
  }
  func_0x00339da8(param_1 + 0x20);
  return;
}



/* Entry: 003e47bc; end: 003e4933;  */

void FUN_003e47bc(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = param_1 + 4;
  func_0x00339d8c(plVar1);
  param_1[0xf] = param_4;
  param_1[0x10] = param_3;
  plVar4 = param_1;
  FUN_003e4f98(param_1);
  FUN_003e5058(&uStack_48,param_1,param_1[0x12],plVar4);
  if (uStack_48 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    uStack_50 = uStack_48;
    if ((uStack_48 & 1) != 0) {
      piVar5 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003e4940(param_1,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339da8(plVar1);
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}



/* Entry: 003e4934; end: 003e493f;  */

char * FUN_003e4934(void)

{
  return "security";
}



/* Entry: 003e4940; end: 003e4b93;  */

void FUN_003e4940(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 *apuStack_70 [2];
  char cStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  uStack_78 = *param_2;
  if (uStack_78 != 0) goto LAB_003e49d0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_003b646c(&uStack_38,2,"Handshaker shutdown",0x13,&uStack_39,&uStack_58);
  uVar3 = *param_2;
  if (uStack_38 == uVar3) {
LAB_003e49b4:
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_2 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
      uVar3 = uStack_38;
      goto LAB_003e49b4;
    }
  }
  apuStack_70[0] = &uStack_58;
  FUN_0033d548(apuStack_70);
  uStack_78 = *param_2;
LAB_003e49d0:
  if ((uStack_78 & 1) != 0) {
    piVar5 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be004(apuStack_70,&uStack_78);
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/security_handshaker.cc"
               ,0xce,0,"Security handshake failed: %s");
  if (cStack_59 < '\0') {
    __ZdlPv(apuStack_70[0]);
  }
  if ((uStack_78 & 1) != 0) {
    FUN_0055293c();
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_004077f4(*(undefined8 *)(param_1 + 0x10));
    uVar4 = **(undefined8 **)(param_1 + 0x78);
    uStack_80 = *param_2;
    if ((uStack_80 & 1) != 0) {
      piVar5 = (int *)(uStack_80 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bcee0(uVar4,&uStack_80);
    if ((uStack_80 & 1) != 0) {
      FUN_0055293c();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x68) = *puVar6;
    *puVar6 = 0;
    *(undefined8 *)(param_1 + 0x70) = puVar6[2];
    puVar6[2] = 0;
    FUN_003a2a64(puVar6[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x78) + 8) = 0;
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uStack_88 = *param_2;
  if ((uStack_88 & 1) != 0) {
    piVar5 = (int *)(uStack_88 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(apuStack_70,uVar4,&uStack_88);
  if ((uStack_88 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e4b94; end: 003e4cc7;  */

void FUN_003e4b94(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  pcVar1 = section_000000b8.segname;
  __Znwm();
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(undefined8 *)(pcVar1 + 0x20) = 0;
  *(undefined8 *)(pcVar1 + 0x38) = 0;
  *(undefined8 *)(pcVar1 + 0x30) = 0;
  *(undefined8 *)(pcVar1 + 0x48) = 0;
  *(undefined8 *)(pcVar1 + 0x40) = 0;
  *(undefined8 *)(pcVar1 + 0x58) = 0;
  *(undefined8 *)(pcVar1 + 0x50) = 0;
  *(undefined8 *)(pcVar1 + 0x68) = 0;
  *(undefined8 *)(pcVar1 + 0x60) = 0;
  *(undefined8 *)(pcVar1 + 0x78) = 0;
  *(undefined8 *)(pcVar1 + 0x70) = 0;
  *(undefined8 *)(pcVar1 + 0x88) = 0;
  *(undefined8 *)(pcVar1 + 0x80) = 0;
  *(undefined8 *)(pcVar1 + 0x98) = 0;
  *(undefined8 *)(pcVar1 + 0x90) = 0;
  *(undefined8 *)(pcVar1 + 0xa8) = 0;
  *(undefined8 *)(pcVar1 + 0xa0) = 0;
  *(undefined8 *)(pcVar1 + 0xb8) = 0;
  *(undefined8 *)(pcVar1 + 0xb0) = 0;
  *(undefined8 *)(pcVar1 + 0xc0) = 0;
  pcVar1[8] = '\x01';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  *(undefined ***)pcVar1 = &PTR_FUN_009e1558;
  pcVar1[0x70] = 0;
  *param_1 = pcVar1;
  *(undefined4 *)(pcVar1 + 0x10) = 1;
  auStack_88[0] = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 1;
  FUN_003e4da4(pcVar1 + 0x18,auStack_88);
  func_0x003e4f40(auStack_88);
  FUN_003db1a4(auStack_88,param_2,"x509_pem_cert");
  puVar2 = auStack_88;
  FUN_003db1c4();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0035d0e4(&uStack_a0,*(undefined8 *)(puVar2 + 2),*(undefined8 *)(puVar2 + 4));
    if (pcVar1[0x67] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar1 + 0x50));
    }
    *(undefined8 *)(pcVar1 + 0x58) = uStack_98;
    *(undefined8 *)(pcVar1 + 0x50) = uStack_a0;
    *(undefined8 *)(pcVar1 + 0x60) = uStack_90;
  }
  return;
}



/* Entry: 003e4cc8; end: 003e4da3;  */

undefined8 * FUN_003e4cc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e1558;
  func_0x003e4d48(param_1 + 0xe);
  func_0x003e4f40(param_1 + 3);
  return param_1;
}



/* Entry: 003e4da4; end: 003e4ee7;  */

void FUN_003e4da4(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == *(char *)(param_2 + 0x14)) {
    if (cVar1 != '\0') {
      *param_1 = *param_2;
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 2));
      }
      uVar3 = *(undefined8 *)(param_2 + 4);
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar2;
      *(undefined1 *)((long)param_2 + 0x1f) = 0;
      *(undefined1 *)(param_2 + 2) = 0;
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 8));
      }
      uVar3 = *(undefined8 *)(param_2 + 10);
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = uVar3;
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined1 *)((long)param_2 + 0x37) = 0;
      *(undefined1 *)(param_2 + 8) = 0;
      if (*(char *)((long)param_1 + 0x4f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0xe));
      }
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar2 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(undefined8 *)(param_1 + 0xe) = uVar2;
      *(undefined1 *)((long)param_2 + 0x4f) = 0;
      *(undefined1 *)(param_2 + 0xe) = 0;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x14) != '\0') {
        if (*(char *)((long)param_1 + 0x4f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 0xe));
        }
        if (*(char *)((long)param_1 + 0x37) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 8));
        }
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 2));
        }
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      return;
    }
    *param_1 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    uVar3 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}



/* Entry: 003e4ee8; end: 003e4f97;  */

void FUN_003e4ee8(long param_1)

{
  if (*(char *)(param_1 + 0x50) != '\0') {
    if (*(char *)(param_1 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x38));
    }
    if (*(char *)(param_1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x20));
    }
    if (*(char *)(param_1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 003e4f98; end: 003e5057;  */

ulong FUN_003e4f98(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
  uVar4 = *(ulong *)(lVar2 + 0x20);
  if (*(ulong *)(param_1 + 0x88) < uVar4) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    FUN_00338cbc(uVar1,uVar4);
    *(ulong *)(param_1 + 0x88) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar5 = 0;
    do {
      plVar6 = *(long **)(lVar2 + 8);
      if (*plVar6 == 0) {
        lVar2 = (long)plVar6 + 9;
        uVar3 = (ulong)*(byte *)(plVar6 + 1);
      }
      else {
        uVar3 = plVar6[1];
        lVar2 = plVar6[2];
      }
      _memcpy(*(long *)(param_1 + 0x90) + lVar5,lVar2,uVar3);
      if (*plVar6 == 0) {
        uVar3 = (ulong)*(byte *)(plVar6 + 1);
      }
      else {
        uVar3 = plVar6[1];
      }
      lVar5 = uVar3 + lVar5;
      FUN_003edd10(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10));
      lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
    } while (*(long *)(lVar2 + 0x10) != 0);
  }
  return uVar4;
}



/* Entry: 003e5058; end: 003e50cf;  */

void FUN_003e5058(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x004077ac();
  if ((int)uVar1 == 0xd) {
    *param_1 = 0;
  }
  else {
    FUN_003e5238(param_1,param_2,uVar1,0,0,0);
  }
  return;
}



/* Entry: 003e50d0; end: 003e5237;  */

void FUN_003e50d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_50;
  ulong uStack_48;
  
  plVar1 = param_2 + 4;
  func_0x00339d8c(plVar1);
  FUN_003e5238(&uStack_48,param_2,param_1,param_3,param_4,param_5);
  if (uStack_48 == 0) {
    param_2 = (long *)0x0;
  }
  else {
    uStack_50 = uStack_48;
    if ((uStack_48 & 1) != 0) {
      piVar4 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar3) {
          *piVar4 = *piVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_003e4940(param_2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((uStack_48 & 1) != 0) {
    FUN_0055293c();
  }
  func_0x00339da8(plVar1);
  if (param_2 != (long *)0x0) {
    plVar1 = param_2 + 1;
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
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  return;
}



/* Entry: 003e5238; end: 003e557f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003e5238(undefined8 *param_1,ulong *******param_2,ulong *******param_3,undefined8 param_4,
                 long param_5,ulong ******param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *******pppppppuVar4;
  ulong *****pppppuVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong *******pppppppuVar8;
  int *piVar9;
  ulong ******ppppppuStack_160;
  undefined1 uStack_151;
  ulong *******pppppppuStack_150;
  ulong *******pppppppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  char *pcStack_130;
  ulong *****pppppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_109;
  ulong *******pppppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  ulong auStack_f0 [5];
  ulong ******ppppppuStack_c8;
  ulong *******pppppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_98;
  undefined8 uStack_90;
  ulong *******pppppppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  auStack_f0[4] = 0;
  if (*(char *)(param_2 + 0xc) != '\0') {
    auStack_f0[2] = 0;
    auStack_f0[3] = 0;
    auStack_f0[1] = 0;
    pcVar6 = "Handshaker shutdown";
    param_3 = (ulong *******)(auStack_f0 + 1);
    FUN_003b646c(param_1,2,"Handshaker shutdown",0x13,&pcStack_98,auStack_f0 + 1);
    pppppppuVar4 = (ulong *******)&pppppppuStack_68;
    pppppppuStack_68 = param_3;
    FUN_0033d548();
    goto LAB_003e52a4;
  }
  pcVar6 = (char *)param_3;
  if ((int)param_3 != 0) {
    if ((int)param_3 == 4) {
      if (param_5 != 0) {
        pcStack_130 = "bytes_to_send_size == 0";
        uVar7 = 0x186;
        goto LAB_003e54d4;
      }
      pppppppuVar4 = (ulong *******)*param_2[0xf];
      pcVar6 = (char *)param_2[0xf][2];
      param_2[0x3d] = (ulong ******)FUN_003e5580;
      param_2[0x3e] = (ulong ******)param_2;
      param_2[0x3f] = (ulong ******)0x0;
      FUN_003bcea4(pppppppuVar4,pcVar6,param_2 + 0x3c,1,1);
      *param_1 = 0;
    }
    else {
      pppppuVar5 = param_2[0xf][1];
      FUN_003de8bc();
      if (pppppuVar5 == (ulong *****)0x0) {
        pppppppuStack_68 = (ulong *******)0x8c3931;
        uStack_60 = 9;
      }
      else {
        (*(code *)(*pppppuVar5)[5])(&pppppppuStack_68);
      }
      pcStack_98 = " handshake failed";
      uStack_90 = 0x11;
      FUN_00575d30(&pppppppuStack_108,&pppppppuStack_68,&pcStack_98);
      pppppppuVar4 = pppppppuStack_108;
      if (-1 < (char)bStack_f1) {
        uStack_100 = (ulong)bStack_f1;
        pppppppuVar4 = (ulong *******)&pppppppuStack_108;
      }
      uStack_120 = 0;
      uStack_118 = 0;
      pppppuStack_128 = (ulong *****)0x0;
      FUN_003b646c(auStack_f0,2,pppppppuVar4,uStack_100,&uStack_109,&pppppuStack_128);
      FUN_003e89d0(param_1,auStack_f0);
      if ((auStack_f0[0] & 1) != 0) {
        FUN_0055293c();
      }
      ppppppuStack_c8 = &pppppuStack_128;
      pppppppuVar4 = &ppppppuStack_c8;
      FUN_0033d548();
      if ((char)bStack_f1 < '\0') {
        __ZdlPv();
        pppppppuVar4 = pppppppuStack_108;
      }
    }
    goto LAB_003e52a4;
  }
  if (param_6 == (ulong ******)0x0) {
    if (param_5 == 0) {
      pppppppuVar4 = (ulong *******)*param_2[0xf];
      pcVar6 = (char *)param_2[0xf][2];
      param_2[0x3d] = (ulong ******)FUN_003e5580;
      param_2[0x3e] = (ulong ******)param_2;
      param_2[0x3f] = (ulong ******)0x0;
      FUN_003bcea4(pppppppuVar4,pcVar6,param_2 + 0x3c,1,1);
      pppppppuVar8 = (ulong *******)0x0;
    }
    else {
LAB_003e5370:
      func_0x003ec288(&pppppppuStack_68,param_4,param_5);
      param_3 = param_2 + 0x13;
      func_0x003ecf8c(param_3);
      uStack_b8 = uStack_60;
      pppppppuStack_c0 = pppppppuStack_68;
      uStack_a8 = uStack_50;
      uStack_b0 = uStack_58;
      FUN_003ecb34(param_3,&pppppppuStack_c0);
      pppppppuVar4 = (ulong *******)*param_2[0xf];
      param_2[0x39] = (ulong ******)FUN_003e5608;
      param_2[0x3a] = (ulong ******)param_2;
      param_2[0x3b] = (ulong ******)0x0;
      pcVar6 = (char *)param_3;
      func_0x003bceb0(pppppppuVar4,param_3,param_2 + 0x38,0,0x7fffffff);
      pppppppuVar8 = (ulong *******)0x0;
    }
  }
  else {
    if (param_2[0x45] != (ulong ******)0x0) {
      pcStack_130 = "handshaker_result_ == nullptr";
      uVar7 = 0x19e;
LAB_003e54d4:
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/security_handshaker.cc"
                   ,uVar7,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x3e54f8);
      (*pcVar3)();
    }
    param_2[0x45] = param_6;
    if (param_5 != 0) goto LAB_003e5370;
    FUN_003e5690(&pppppppuStack_68);
    pppppppuVar4 = param_2;
    pppppppuVar8 = pppppppuStack_68;
  }
  *param_1 = pppppppuVar8;
LAB_003e52a4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    FUN_0033c494(auStack_f0 + 4);
    pppppppuVar8 = pppppppuVar4;
    __Unwind_Resume();
    pcStack_138 = FUN_003e5580;
    pppppppuVar8[0x3d] = (ulong ******)FUN_003e5784;
    pppppppuVar8[0x3e] = (ulong ******)pppppppuVar8;
    pppppppuVar8[0x3f] = (ulong ******)0x0;
    ppppppuStack_160 = *(ulong *******)pcVar6;
    if (((ulong)ppppppuStack_160 & 1) != 0) {
      piVar9 = (int *)((long)ppppppuStack_160 + -1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppppppuStack_150 = param_3;
    pppppppuStack_148 = pppppppuVar4;
    puStack_140 = &stack0xfffffffffffffff0;
    FUN_003c1e6c(&uStack_151,pppppppuVar8 + 0x3c,&ppppppuStack_160);
    if (((ulong)ppppppuStack_160 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003e5580; end: 003e5607;  */

void FUN_003e5580(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0x1e8) = FUN_003e5784;
  *(long *)(param_1 + 0x1f0) = param_1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,param_1 + 0x1e0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e5608; end: 003e568f;  */

void FUN_003e5608(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0x1c8) = FUN_003e5968;
  *(long *)(param_1 + 0x1d0) = param_1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_21,param_1 + 0x1c0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e5690; end: 003e5783;  */

void FUN_003e5690(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x228);
  func_0x00407848(uVar1,&uStack_48);
  if ((int)uVar1 == 0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x10))
              (*(long **)(param_2 + 0x18),uStack_48,uStack_40,**(undefined8 **)(param_2 + 0x78),
               param_2 + 0x220,param_2 + 0x200);
    *param_1 = 0;
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    FUN_003b646c(&uStack_50,2,"Peer extraction failed",0x16,&uStack_51,&uStack_70);
    FUN_003e89d0(param_1,&uStack_50,uVar1);
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_38 = (undefined1 *)&uStack_70;
    FUN_0033d548(&puStack_38);
  }
  return;
}



/* Entry: 003e5784; end: 003e5967;  */

void FUN_003e5784(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar1 = param_1 + 4;
  func_0x00339d8c(plVar1);
  if ((*param_2 != 0) || ((char)param_1[0xc] != '\0')) {
    FUN_003bdf2c(&uStack_38,2,"Handshake read failed",0x15,&uStack_40,1,param_2);
    FUN_003e4940(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003e57f8;
  }
  plVar4 = param_1;
  FUN_003e4f98(param_1);
  FUN_003e5058(&uStack_40,param_1,param_1[0x12],plVar4);
  uVar6 = uStack_40;
  uVar5 = *param_2;
  if (uStack_40 == uVar5) {
LAB_003e5874:
    if ((uVar5 & 1) != 0) {
      FUN_0055293c();
    }
    uVar6 = *param_2;
  }
  else {
    *param_2 = uStack_40;
    uStack_40 = 0x36;
    if ((uVar5 & 1) != 0) {
      FUN_0055293c();
      uVar5 = uStack_40;
      goto LAB_003e5874;
    }
  }
  if (uVar6 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    if ((uVar6 & 1) != 0) {
      piVar7 = (int *)(uVar6 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_48 = uVar6;
    FUN_003e4940(param_1,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003e57f8:
  func_0x00339da8(plVar1);
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
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
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}



/* Entry: 003e5968; end: 003e5b7f;  */

void FUN_003e5968(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  plVar1 = param_1 + 4;
  func_0x00339d8c(plVar1);
  if ((*param_2 != 0) || ((char)param_1[0xc] != '\0')) {
    FUN_003bdf2c(&uStack_38,2,"Handshake write failed",0x16,&uStack_40,1,param_2);
    FUN_003e4940(param_1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    goto LAB_003e59e0;
  }
  if (param_1[0x45] == 0) {
    uVar5 = *(undefined8 *)param_1[0xf];
    uVar6 = ((undefined8 *)param_1[0xf])[2];
    param_1[0x3d] = (long)FUN_003e5580;
    param_1[0x3e] = (long)param_1;
    param_1[0x3f] = 0;
    FUN_003bcea4(uVar5,uVar6,param_1 + 0x3c,1,1);
    param_1 = (long *)0x0;
    goto LAB_003e59e0;
  }
  FUN_003e5690(&uStack_40,param_1);
  uVar7 = uStack_40;
  uVar4 = *param_2;
  if (uStack_40 == uVar4) {
LAB_003e5a54:
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
    }
    uVar7 = *param_2;
  }
  else {
    *param_2 = uStack_40;
    uStack_40 = 0x36;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c();
      uVar4 = uStack_40;
      goto LAB_003e5a54;
    }
  }
  if (uVar7 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    if ((uVar7 & 1) != 0) {
      piVar8 = (int *)(uVar7 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_48 = uVar7;
    FUN_003e4940(param_1,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      FUN_0055293c();
    }
  }
LAB_003e59e0:
  func_0x00339da8(plVar1);
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}



/* Entry: 003e5b80; end: 003e5bdb;  */

void FUN_003e5b80(undefined8 param_1,long *param_2)

{
  FUN_003de8bc();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e5bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x38))();
    return;
  }
  return;
}



/* Entry: 003e5bdc; end: 003e5be3;  */

void FUN_003e5bdc(void)

{
  return;
}



/* Entry: 003e5be4; end: 003e5c3f;  */

void FUN_003e5be4(undefined8 param_1,long *param_2)

{
  FUN_003de8bc();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e5c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x30))();
    return;
  }
  return;
}



/* Entry: 003e5c40; end: 003e5c8f;  */

void FUN_003e5c40(void)

{
  return;
}



/* Entry: 003e5c90; end: 003e5d9b;  */

void FUN_003e5c90(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plStack_48;
  
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  uVar5 = *param_3;
  *puVar6 = param_3[7];
  puVar6[1] = uVar5;
  puVar6[0xe] = 0;
  *(undefined1 *)(puVar6 + 0xf) = 0;
  puVar6[0x17] = 0;
  puVar6[5] = FUN_003e5ed8;
  puVar6[6] = param_2;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[10] = FUN_003e7904;
  puVar6[0xb] = param_2;
  puVar6[0xc] = 0;
  lVar3 = param_3[6];
  FUN_003db0c4();
  plStack_48 = (long *)**(undefined8 **)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plStack_48,0x10);
    if (bVar2) {
      *plStack_48 = *plStack_48 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_003dde1c(lVar3,&plStack_48);
  FUN_003da5d0(&plStack_48);
  plVar4 = (long *)param_3[2];
  if (*plVar4 != 0) {
    (*(code *)plVar4[1])();
    plVar4 = (long *)param_3[2];
  }
  *plVar4 = lVar3;
  plVar4[1] = (long)FUN_003db10c;
  *param_1 = 0;
  return;
}



/* Entry: 003e5d9c; end: 003e5dd7;  */

void FUN_003e5d9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ulong *)(lVar1 + 0x70) & 1) != 0) {
    FUN_0055293c();
  }
  if ((*(ulong *)(lVar1 + 0x40) & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e5dd8; end: 003e5e5f;  */

void FUN_003e5dd8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 uStack_51;
  long lStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    plVar4 = *(long **)(param_3 + 8);
    FUN_003db4cc();
    lVar5 = 0;
    unaff_x20 = param_2;
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(param_3 + 8);
      FUN_003dcd20();
      puVar6 = *(undefined8 **)(param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar6 = plVar4;
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar6[1] = lVar5;
      *param_1 = 0;
      return;
    }
  }
  else {
    func_0x00775188();
    lVar5 = param_2;
  }
  FUN_00775154();
  pcStack_38 = FUN_003e5e60;
  lVar5 = *(long *)(lVar5 + 8);
  lStack_50 = unaff_x20;
  puStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_003db020(lVar5,&uStack_51,"server_auth_filter",0);
  plVar4 = *(long **)(lVar5 + 8);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_003da5d0(lVar5);
  return;
}



/* Entry: 003e5e60; end: 003e5ed7;  */

void FUN_003e5e60(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_21;
  
  lVar6 = *(long *)(param_1 + 8);
  FUN_003db020(lVar6,&uStack_21,"server_auth_filter",0);
  plVar4 = *(long **)(lVar6 + 8);
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
  FUN_003da5d0(lVar6);
  return;
}



/* Entry: 003e5ed8; end: 003e7903;  */

void FUN_003e5ed8(long param_1,ulong *param_2)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  char *pcStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar15 = *(undefined8 **)(param_1 + 0x10);
  if (*param_2 == 0) {
    puVar16 = *(undefined8 **)(param_1 + 8);
    if ((puVar16[1] == 0) || (*(long *)(puVar16[1] + 0x10) == 0)) goto LAB_003e5f18;
    plVar8 = (long *)puVar15[1];
    lVar9 = puVar15[2];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar15[0x14] = FUN_003e7aac;
    puVar15[0x15] = param_1;
    puVar15[0x16] = 0;
    FUN_003bba54(*puVar15,puVar15 + 0x13);
    plVar8 = (long *)puVar15[1];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar17 = *(uint **)(*(long *)(lVar9 + 8) + 0x38);
    FUN_003f9bc8(&uStack_f0);
    uVar6 = *puVar17;
    puStack_d8 = &uStack_f0;
    if ((uVar6 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 5;
      pcStack_80 = ":path";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x74);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x76);
      plStack_b0 = *(long **)(puVar17 + 0x74);
      lStack_98 = *(long *)(puVar17 + 0x7a);
      lStack_a0 = *(long *)(puVar17 + 0x78);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 1 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 10;
      pcStack_80 = ":authority";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x6c);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x6e);
      plStack_b0 = *(long **)(puVar17 + 0x6c);
      lStack_98 = *(long *)(puVar17 + 0x72);
      lStack_a0 = *(long *)(puVar17 + 0x70);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 3 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 7;
      pcStack_80 = ":status";
      lStack_78 = 0;
      FUN_0034eb70(&plStack_b0,puVar17[0x69]);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 4 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 7;
      pcStack_80 = ":scheme";
      lStack_78 = 0;
      FUN_003febf4(&plStack_d0,puVar17[0x68]);
      lStack_a8 = lStack_c8;
      plStack_b0 = plStack_d0;
      lStack_98 = lStack_b8;
      lStack_a0 = lStack_c0;
      lStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 5 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0xc;
      pcStack_80 = "content-type";
      lStack_78 = 0;
      func_0x003fe828(&plStack_d0,puVar17[0x67]);
      lStack_a8 = lStack_c8;
      plStack_b0 = plStack_d0;
      lStack_98 = lStack_b8;
      lStack_a0 = lStack_c0;
      lStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 6 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 2;
      pcStack_80 = "te";
      lStack_78 = 0;
      FUN_0034f090(&plStack_d0,(char)puVar17[0x66]);
      lStack_a8 = lStack_c8;
      plStack_b0 = plStack_d0;
      lStack_98 = lStack_b8;
      lStack_a0 = lStack_c0;
      lStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      lStack_b8 = 0;
      lStack_c0 = 0;
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 7 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0xd;
      pcStack_80 = "grpc-encoding";
      lStack_78 = 0;
      FUN_0034f290(&plStack_b0,puVar17[0x65]);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 8 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0x1e;
      pcStack_80 = "grpc-internal-encoding-request";
      lStack_78 = 0;
      FUN_0034f290(&plStack_b0,puVar17[100]);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 9 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0x14;
      pcStack_80 = "grpc-accept-encoding";
      lStack_78 = 0;
      plStack_d0 = (long *)CONCAT71(plStack_d0._1_7_,(char)puVar17[99]);
      func_0x003b095c(&plStack_b0,&plStack_d0);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 10 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0xb;
      pcStack_80 = "grpc-status";
      lStack_78 = 0;
      FUN_0034eb70(&plStack_b0,(long)(int)puVar17[0x62]);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xb & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0xc;
      pcStack_80 = "grpc-timeout";
      lStack_78 = 0;
      func_0x003fe980(&plStack_b0,*(undefined8 *)(puVar17 + 0x60));
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xc & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0x1a;
      pcStack_80 = "grpc-previous-rpc-attempts";
      lStack_78 = 0;
      FUN_0034eb70(&plStack_b0,puVar17[0x5e]);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xd & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0x16;
      pcStack_80 = "grpc-retry-pushback-ms";
      lStack_78 = 0;
      FUN_0034eb70(&plStack_b0,*(undefined8 *)(puVar17 + 0x5c));
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xe & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 10;
      pcStack_80 = "user-agent";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x54);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x56);
      plStack_b0 = *(long **)(puVar17 + 0x54);
      lStack_98 = *(long *)(puVar17 + 0x5a);
      lStack_a0 = *(long *)(puVar17 + 0x58);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0xf & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0xc;
      pcStack_80 = "grpc-message";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x4c);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x4e);
      plStack_b0 = *(long **)(puVar17 + 0x4c);
      lStack_98 = *(long *)(puVar17 + 0x52);
      lStack_a0 = *(long *)(puVar17 + 0x50);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x10 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 4;
      pcStack_80 = "host";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x44);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x46);
      plStack_b0 = *(long **)(puVar17 + 0x44);
      lStack_98 = *(long *)(puVar17 + 0x4a);
      lStack_a0 = *(long *)(puVar17 + 0x48);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x11 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0x19;
      pcStack_80 = "endpoint-load-metrics-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x3c);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x3e);
      plStack_b0 = *(long **)(puVar17 + 0x3c);
      lStack_98 = *(long *)(puVar17 + 0x42);
      lStack_a0 = *(long *)(puVar17 + 0x40);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x12 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0x15;
      pcStack_80 = "grpc-server-stats-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x34);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x36);
      plStack_b0 = *(long **)(puVar17 + 0x34);
      lStack_98 = *(long *)(puVar17 + 0x3a);
      lStack_a0 = *(long *)(puVar17 + 0x38);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x13 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0xe;
      pcStack_80 = "grpc-trace-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x2c);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x2e);
      plStack_b0 = *(long **)(puVar17 + 0x2c);
      lStack_98 = *(long *)(puVar17 + 0x32);
      lStack_a0 = *(long *)(puVar17 + 0x30);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x14 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 0xd;
      pcStack_80 = "grpc-tags-bin";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x24);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x26);
      plStack_b0 = *(long **)(puVar17 + 0x24);
      lStack_98 = *(long *)(puVar17 + 0x2a);
      lStack_a0 = *(long *)(puVar17 + 0x28);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
      uVar6 = *puVar17;
    }
    if ((uVar6 >> 0x15 & 1) != 0) goto LAB_003e6f04;
    if ((uVar6 >> 0x16 & 1) != 0) {
      uVar11 = *(ulong *)(puVar17 + 0x18);
      puVar14 = puVar17 + 0x1a;
      if ((uVar11 & 1) != 0) {
        puVar14 = *(uint **)(puVar17 + 0x1a);
      }
      if (1 < uVar11) {
        puVar1 = puVar14 + (uVar11 >> 1) * 8;
        do {
          plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
          lStack_88 = 0xb;
          pcStack_80 = "lb-cost-bin";
          lStack_78 = 0;
          FUN_003fee84(&plStack_b0,puVar14);
          FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
            do {
              lVar9 = *plStack_b0;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
              if (bVar3) {
                *plStack_b0 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plStack_b0[1])();
            }
          }
          if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
            do {
              lVar9 = *plStack_90;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
              if (bVar3) {
                *plStack_90 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 + -1 == 0) {
              (*(code *)plStack_90[1])();
            }
          }
          puVar14 = puVar14 + 8;
        } while (puVar14 != puVar1);
        uVar6 = *puVar17;
      }
    }
    if ((uVar6 >> 0x17 & 1) != 0) {
      plStack_90 = (long *)((long)&MACH_HEADER.magic + 1);
      lStack_88 = 8;
      pcStack_80 = "lb-token";
      lStack_78 = 0;
      plVar8 = *(long **)(puVar17 + 0x10);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar8) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_a8 = *(long *)(puVar17 + 0x12);
      plStack_b0 = *(long **)(puVar17 + 0x10);
      lStack_98 = *(long *)(puVar17 + 0x16);
      lStack_a0 = *(long *)(puVar17 + 0x14);
      FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
        do {
          lVar9 = *plStack_b0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
          if (bVar3) {
            *plStack_b0 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_b0[1])();
        }
      }
      if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
        do {
          lVar9 = *plStack_90;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
          if (bVar3) {
            *plStack_90 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (*(code *)plStack_90[1])();
        }
      }
    }
    plVar8 = *(long **)(puVar17 + 0x7e);
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      lVar9 = 0;
      do {
        plVar12 = (long *)plVar8[lVar9 * 8 + 2];
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar12) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_88 = plVar8[lVar9 * 8 + 3];
        plStack_90 = (long *)plVar8[lVar9 * 8 + 2];
        lStack_78 = plVar8[lVar9 * 8 + 5];
        pcStack_80 = (char *)plVar8[lVar9 * 8 + 4];
        plVar12 = (long *)plVar8[lVar9 * 8 + 6];
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar12) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_a8 = plVar8[lVar9 * 8 + 7];
        plStack_b0 = (long *)plVar8[lVar9 * 8 + 6];
        lStack_98 = plVar8[lVar9 * 8 + 9];
        lStack_a0 = plVar8[lVar9 * 8 + 8];
        FUN_003e88f4(&puStack_d8,&plStack_90,&plStack_b0);
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_b0) {
          do {
            lVar10 = *plStack_b0;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_b0,0x10);
            if (bVar3) {
              *plStack_b0 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (*(code *)plStack_b0[1])();
          }
        }
        if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_90) {
          do {
            lVar10 = *plStack_90;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
            if (bVar3) {
              *plStack_90 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 + -1 == 0) {
            (*(code *)plStack_90[1])();
          }
        }
        lVar9 = lVar9 + 1;
        do {
          if (lVar9 != plVar8[1]) goto LAB_003e6e8c;
          lVar9 = 0;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
        lVar9 = 0;
LAB_003e6e8c:
      } while ((plVar8 != (long *)0x0) || (lVar9 != 0));
    }
    puVar15[0x11] = uStack_e8;
    puVar15[0x10] = uStack_f0;
    puVar15[0x12] = uStack_e0;
    (**(code **)(puVar16[1] + 0x10))
              (*(undefined8 *)(puVar16[1] + 0x20),*puVar16,puVar15[0x12],puVar15[0x10],FUN_003e7b7c,
               param_1);
  }
  else {
LAB_003e5f18:
    uVar13 = puVar15[3];
    puVar15[3] = 0;
    if (*(char *)(puVar15 + 0xf) != '\0') {
      uVar5 = *puVar15;
      uStack_f8 = puVar15[0xe];
      if ((uStack_f8 & 1) != 0) {
        piVar7 = (int *)(uStack_f8 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = *piVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_003bb88c(uVar5,puVar15 + 9,&uStack_f8,"continue recv_trailing_metadata_ready");
      if ((uStack_f8 & 1) != 0) {
        FUN_0055293c();
      }
    }
    uStack_100 = *param_2;
    if ((uStack_100 & 1) != 0) {
      piVar7 = (int *)(uStack_100 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_00342584(&plStack_90,uVar13,&uStack_100);
    if ((uStack_100 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_003e6f04:
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3e6f0c);
  (*pcVar4)();
}



/* Entry: 003e7904; end: 003e7aab;  */

void FUN_003e7904(long param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  char *pcVar11;
  undefined8 *puVar12;
  bool bVar13;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  if (puVar12[3] != 0) {
    uVar4 = puVar12[0xe];
    uVar9 = *param_2;
    if (uVar9 != uVar4) {
      if ((uVar9 & 1) != 0) {
        piVar10 = (int *)(uVar9 - 1);
        do {
          cVar1 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar13) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar9 = *param_2;
      }
      puVar12[0xe] = uVar9;
      if ((uVar4 & 1) != 0) {
        FUN_0055293c();
      }
    }
    *(undefined1 *)(puVar12 + 0xf) = 1;
    plVar5 = (long *)*puVar12;
    pcVar6 = "deferring recv_trailing_metadata_ready until after recv_initial_metadata_ready";
    do {
      lVar8 = *plVar5;
      lVar2 = lVar8 + -1;
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar13) {
        *plVar5 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar2 != 0) {
      if (lVar8 == 0) {
        func_0x00773d94();
        func_0x0040cf10();
        func_0x0040cf10();
        FUN_0033c494(&uStack_38);
        FUN_0033c494(&uStack_30);
        __Unwind_Resume();
        plVar5 = plVar5 + 0xb;
        do {
          pcVar11 = (char *)*plVar5;
          if (((ulong)pcVar11 & 1) == 0) {
            uStack_78 = 0;
LAB_003bbad0:
            do {
              if ((char *)*plVar5 != pcVar11) {
                ClearExclusiveLocal();
                bVar13 = true;
                goto LAB_003bbb24;
              }
              cVar1 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar13) {
                *plVar5 = (long)pcVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (pcVar11 == (char *)0x0) goto LAB_003bbb14;
            uStack_90 = 0;
            FUN_003c1e6c(&uStack_79,pcVar11,&uStack_90);
            if ((uStack_90 & 1) != 0) {
              FUN_0055293c();
            }
            bVar13 = false;
            pcVar6 = pcVar11;
          }
          else {
            FUN_003b7b3c(&uStack_78,(ulong)pcVar11 & 0xfffffffffffffffe);
            if (uStack_78 == 0) goto LAB_003bbad0;
            uStack_88 = uStack_78;
            if ((uStack_78 & 1) != 0) {
              piVar10 = (int *)(uStack_78 - 1);
              do {
                cVar1 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar13) {
                  *piVar10 = *piVar10 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_003c1e6c(&uStack_79,pcVar6,&uStack_88);
            if ((uStack_88 & 1) != 0) {
              FUN_0055293c();
            }
LAB_003bbb14:
            bVar13 = false;
          }
LAB_003bbb24:
          if ((uStack_78 & 1) != 0) {
            FUN_0055293c();
          }
          if (!bVar13) {
            return;
          }
        } while( true );
      }
      plVar5 = plVar5 + 1;
      plVar3 = plVar5;
      FUN_0033b3e4(plVar5,(long)&uStack_28 + 7);
      while (plVar3 == (long *)0x0) {
        plVar3 = plVar5;
        FUN_0033b3e4(plVar5,(long)&uStack_28 + 7);
      }
      FUN_003b7b6c(&uStack_30,plVar3[3]);
      uVar4 = uStack_30;
      plVar3[3] = 0;
      uStack_38 = uStack_30;
      if ((uStack_30 & 1) != 0) {
        piVar10 = (int *)(uStack_30 - 1);
        do {
          cVar1 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar13) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_003bb81c();
      if ((uVar4 & 1) != 0) {
        FUN_0055293c(uVar4);
      }
      if ((uStack_30 & 1) != 0) {
        FUN_0055293c();
      }
    }
    return;
  }
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar10 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar13) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_38 = puVar12[8];
  if ((uStack_38 & 1) != 0) {
    piVar10 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar13) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003be56c(&uStack_28,&uStack_30,&uStack_38);
  uVar4 = *param_2;
  if (uStack_28 != uVar4) {
    *param_2 = uStack_28;
    uStack_28 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_003e7a00;
    FUN_0055293c();
    uVar4 = uStack_28;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0055293c();
  }
LAB_003e7a00:
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_30 & 1) != 0) {
    FUN_0055293c();
  }
  uVar7 = puVar12[0xd];
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar10 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar13) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_00342584(&uStack_28,uVar7,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e7aac; end: 003e7b7b;  */

void FUN_003e7aac(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (*param_2 != 0) {
    plVar3 = (long *)(lVar7 + 0xb8);
    do {
      if (*plVar3 != 0) {
        ClearExclusiveLocal();
        goto LAB_003e7b2c;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) {
      piVar5 = (int *)(uVar6 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_28 = uVar6;
    FUN_003e7e2c(param_1,0,0,0,0,&uStack_28);
    if ((uVar6 & 1) != 0) {
      FUN_0055293c(uVar6);
    }
  }
LAB_003e7b2c:
  plVar3 = *(long **)(lVar7 + 8);
  do {
    lVar7 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 == 0) {
    plVar4 = plVar3;
    FUN_003c3188();
    if ((((ulong)plVar4 & 1) == 0) && (func_0x003c1f6c(), (*(byte *)(*plVar4 + 0x28) >> 1 & 1) != 0)
       ) {
      uStack_28 = 0;
      FUN_003c2968(plVar3 + 1,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      FUN_0055293c();
      return;
    }
    uStack_38 = 0;
    FUN_003c1e6c(&uStack_29,plVar3 + 1,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
    return;
  }
  return;
}



/* Entry: 003e7b7c; end: 003e7e2b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003e7b7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,char *param_7)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  ulong auStack_108 [4];
  undefined1 uStack_e1;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  
  lVar10 = *(long *)(param_1 + 0x10);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_00341380(&uStack_80,0);
  FUN_003413d4(auStack_c8);
  plVar4 = (long *)(lVar10 + 0xb8);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      goto LAB_003e7cdc;
    }
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar9) {
      *plVar4 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_d0 = 0;
  if (param_6 == 0) {
    auStack_108[0] = 0;
  }
  else {
    pcVar1 = "Authentication metadata processing failed.";
    if (param_7 != (char *)0x0) {
      pcVar1 = param_7;
    }
    pcVar3 = pcVar1;
    _strlen(pcVar1);
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    auStack_108[1] = 0;
    FUN_003b646c(&uStack_e0,2,pcVar1,pcVar3,&uStack_e1,auStack_108 + 1);
    FUN_003be104(&uStack_d8,&uStack_e0,3,(long)param_6);
    uVar8 = uStack_d8;
    if (uStack_d8 != 0) {
      uStack_d8 = 0x36;
      uStack_d0 = uVar8;
    }
    if ((uStack_e0 & 1) != 0) {
      FUN_0055293c();
    }
    puStack_68 = auStack_108 + 1;
    FUN_0033d548(&puStack_68);
    auStack_108[0] = uVar8;
    if ((uVar8 & 1) != 0) {
      piVar5 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar9) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar9 = false;
      goto LAB_003e7cac;
    }
  }
  bVar9 = true;
LAB_003e7cac:
  uVar8 = auStack_108[0];
  FUN_003e7e2c(param_1,param_2,param_3,param_4,param_5,auStack_108);
  if (!bVar9) {
    FUN_0055293c(uVar8);
    FUN_0055293c(uVar8);
  }
LAB_003e7cdc:
  puVar7 = (ulong *)(lVar10 + 0x80);
  if (*puVar7 != 0) {
    uVar8 = 0;
    do {
      plVar4 = *(long **)(*(long *)(lVar10 + 0x90) + uVar8 * 0x60);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (*(code *)plVar4[1])();
        }
      }
      plVar4 = *(long **)(*(long *)(lVar10 + 0x90) + uVar8 * 0x60 + 0x20);
      if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
        do {
          lVar6 = *plVar4;
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar9) {
            *plVar4 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (*(code *)plVar4[1])();
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar7);
  }
  func_0x003f9bd4(puVar7);
  plVar4 = *(long **)(lVar10 + 8);
  do {
    lVar10 = *plVar4;
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar9) {
      *plVar4 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    FUN_004005ec();
  }
  FUN_00341470(auStack_c8);
  FUN_003414dc(&uStack_80);
  return;
}



/* Entry: 003e7e2c; end: 003e7fcf;  */

void FUN_003e7e2c(long param_1,long param_2,long param_3,long param_4,long param_5,ulong *param_6)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  lVar10 = puVar9[2];
  if ((param_4 != 0) && (param_5 != 0)) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/server_auth_filter.cc"
                 ,0xaa,2,
                 "response_md in auth metadata processing not supported for now. Ignoring...");
  }
  uVar5 = *param_6;
  if (uVar5 == 0 && param_3 != 0) {
    puVar8 = (ulong *)(param_2 + 8);
    do {
      uStack_48 = *(undefined8 *)(*(long *)(lVar10 + 8) + 0x38);
      uVar5 = puVar8[1];
      if (puVar8[-1] == 0) {
        uVar5 = (long)puVar8 + 1;
      }
      uVar3 = *puVar8 & 0xff;
      if (puVar8[-1] != 0) {
        uVar3 = *puVar8;
      }
      FUN_003e7fd0(uVar5,uVar3,&uStack_48);
      puVar8 = puVar8 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = *param_6;
  }
  uVar3 = puVar9[8];
  if (uVar5 != uVar3) {
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar5 = *param_6;
    }
    puVar9[8] = uVar5;
    if ((uVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uVar7 = puVar9[3];
  puVar9[3] = 0;
  if (*(char *)(puVar9 + 0xf) != '\0') {
    uVar4 = *puVar9;
    uStack_50 = puVar9[0xe];
    if ((uStack_50 & 1) != 0) {
      piVar6 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_003bb88c(uVar4,puVar9 + 9,&uStack_50,"continue recv_trailing_metadata_ready");
    if ((uStack_50 & 1) != 0) {
      FUN_0055293c();
    }
  }
  uStack_58 = *param_6;
  if ((uStack_58 & 1) != 0) {
    piVar6 = (int *)(uStack_58 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_003c1e6c(&uStack_48,uVar7,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e7fd0; end: 003e88f3;  */

uint * FUN_003e7fd0(long *param_1,ulong param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  uint *unaff_x19;
  long *unaff_x20;
  long *plVar9;
  uint *puVar10;
  ulong unaff_x21;
  long *plVar11;
  ulong unaff_x22;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x23;
  ulong unaff_x24;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  
  if ((param_2 == 5) && ((int)*param_1 == 0x7461703a && *(char *)((long)param_1 + 4) == 'h')) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xfffffffe;
    if ((uVar2 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x74;
code_r0x0034b418:
    plVar5 = *(long **)puVar8;
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
      do {
        lVar7 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (*(code *)plVar5[1])();
      }
    }
    return puVar8;
  }
  if ((param_2 == 10) && (*param_1 == 0x69726f687475613a && (short)param_1[1] == 0x7974)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xfffffffd;
    if ((uVar2 >> 1 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x6c;
    goto code_r0x0034b418;
  }
  if ((param_2 == 7) && ((int)*param_1 == 0x74656d3a && *(int *)((long)param_1 + 3) == 0x646f6874))
  {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffffb;
    return param_3;
  }
  if ((param_2 == 7) && ((int)*param_1 == 0x6174733a && *(int *)((long)param_1 + 3) == 0x73757461))
  {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffff7;
    return param_3;
  }
  if ((param_2 == 7) && ((int)*param_1 == 0x6863733a && *(int *)((long)param_1 + 3) == 0x656d6568))
  {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffffef;
    return param_3;
  }
  if ((param_2 == 0xc) && (*param_1 == 0x2d746e65746e6f63 && (int)param_1[1] == 0x65707974)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffffdf;
    return param_3;
  }
  if ((param_2 == 2) && ((short)*param_1 == 0x6574)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffffbf;
    return param_3;
  }
  if ((param_2 == 0xd) &&
     (*param_1 == 0x636e652d63707267 && *(long *)((long)param_1 + 5) == 0x676e69646f636e65)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffff7f;
    return param_3;
  }
  if ((param_2 == 0x1e) &&
     (((*param_1 == 0x746e692d63707267 && param_1[1] == 0x6e652d6c616e7265) &&
      param_1[2] == 0x722d676e69646f63) && *(long *)((long)param_1 + 0x16) == 0x747365757165722d)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffeff;
    return param_3;
  }
  if ((param_2 == 0x14) &&
     ((*param_1 == 0x6363612d63707267 && param_1[1] == 0x6f636e652d747065) &&
      (int)param_1[2] == 0x676e6964)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffdff;
    return param_3;
  }
  if ((param_2 == 0xb) &&
     (*param_1 == 0x6174732d63707267 && *(long *)((long)param_1 + 3) == 0x7375746174732d63)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffffbff;
    return param_3;
  }
  if ((param_2 == 0xc) && (*param_1 == 0x6d69742d63707267 && (int)param_1[1] == 0x74756f65)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xfffff7ff;
    return param_3;
  }
  if ((param_2 == 0x1a) &&
     (((*param_1 == 0x6572702d63707267 && param_1[1] == 0x70722d73756f6976) &&
      param_1[2] == 0x706d657474612d63) && (short)param_1[3] == 0x7374)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffefff;
    return param_3;
  }
  if ((param_2 == 0x16) &&
     ((*param_1 == 0x7465722d63707267 && param_1[1] == 0x62687375702d7972) &&
      *(long *)((long)param_1 + 0xe) == 0x736d2d6b63616268)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffffdfff;
    return param_3;
  }
  if ((param_2 == 10) && (*param_1 == 0x6567612d72657375 && (short)param_1[1] == 0x746e)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xffffbfff;
    if ((uVar2 >> 0xe & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x54;
    goto code_r0x0034b418;
  }
  if ((param_2 == 0xc) && (*param_1 == 0x73656d2d63707267 && (int)param_1[1] == 0x65676173)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xffff7fff;
    if ((uVar2 >> 0xf & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x4c;
    goto code_r0x0034b418;
  }
  if ((param_2 == 4) && ((int)*param_1 == 0x74736f68)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xfffeffff;
    if ((uVar2 >> 0x10 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x44;
    goto code_r0x0034b418;
  }
  if ((param_2 == 0x19) &&
     (((*param_1 == 0x746e696f70646e65 && param_1[1] == 0x656d2d64616f6c2d) &&
      param_1[2] == 0x69622d7363697274) && (char)param_1[3] == 'n')) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xfffdffff;
    if ((uVar2 >> 0x11 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x3c;
    goto code_r0x0034b418;
  }
  if ((param_2 == 0x15) &&
     ((*param_1 == 0x7265732d63707267 && param_1[1] == 0x746174732d726576) &&
      *(long *)((long)param_1 + 0xd) == 0x6e69622d73746174)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xfffbffff;
    if ((uVar2 >> 0x12 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x34;
    goto code_r0x0034b418;
  }
  if ((param_2 == 0xe) &&
     (*param_1 == 0x6172742d63707267 && *(long *)((long)param_1 + 6) == 0x6e69622d65636172)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xfff7ffff;
    if ((uVar2 >> 0x13 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x2c;
    goto code_r0x0034b418;
  }
  if ((param_2 == 0xd) &&
     (*param_1 == 0x6761742d63707267 && *(long *)((long)param_1 + 5) == 0x6e69622d73676174)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xffefffff;
    if ((uVar2 >> 0x14 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x24;
    goto code_r0x0034b418;
  }
  if ((param_2 == 0x13) &&
     ((*param_1 == 0x635f626c63707267 && param_1[1] == 0x74735f746e65696c) &&
      *(long *)((long)param_1 + 0xb) == 0x73746174735f746e)) {
    **(uint **)param_3 = **(uint **)param_3 & 0xffdfffff;
    return param_3;
  }
  if ((param_2 == 0xb) &&
     (*param_1 == 0x2d74736f632d626c && *(long *)((long)param_1 + 3) == 0x6e69622d74736f63)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xffbfffff;
    if ((uVar2 >> 0x16 & 1) != 0) {
      puVar8 = puVar8 + 0x18;
      if (*(long *)puVar8 != 0) {
        FUN_00366fe0(puVar8);
      }
      return puVar8;
    }
    return param_3;
  }
  if ((param_2 == 8) && (*param_1 == 0x6e656b6f742d626c)) {
    puVar8 = *(uint **)param_3;
    uVar2 = *puVar8;
    *puVar8 = uVar2 & 0xff7fffff;
    if ((uVar2 >> 0x17 & 1) == 0) {
      return param_3;
    }
    puVar8 = puVar8 + 0x10;
    goto code_r0x0034b418;
  }
  puVar8 = (uint *)(*(long *)param_3 + 0x1f0);
  puVar1 = &stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar9 = *(long **)(*(long *)param_3 + 0x1f8);
  puVar6 = puVar8;
  plVar5 = param_1;
  uVar13 = param_2;
  uVar14 = unaff_x24;
  if (plVar9 != (long *)0x0) {
    if (plVar9[1] != 0) {
      uVar12 = 0;
      do {
        uVar15 = plVar9[uVar12 * 8 + 3] & 0xff;
        if (plVar9[uVar12 * 8 + 2] != 0) {
          uVar15 = plVar9[uVar12 * 8 + 3];
        }
        if (uVar15 == param_2) {
          puVar6 = (uint *)((long)plVar9 + uVar12 * 0x40 + 0x19);
          if (plVar9[uVar12 * 8 + 2] != 0) {
            puVar6 = (uint *)plVar9[uVar12 * 8 + 4];
          }
          plVar5 = param_1;
          uVar13 = param_2;
          _memcmp();
          uVar15 = uVar12;
          plVar11 = plVar9;
          if ((int)puVar6 == 0) goto LAB_003fe3ec;
        }
        uVar12 = uVar12 + 1;
        do {
          if (uVar12 != plVar9[1]) goto LAB_003fe38c;
          uVar12 = 0;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
        uVar12 = 0;
LAB_003fe38c:
      } while ((plVar9 != (long *)0x0) || (uVar12 != 0));
      plVar9 = (long *)0x0;
      goto LAB_003fe3a4;
    }
    plVar9 = (long *)0x0;
  }
  uVar12 = 0;
  param_2 = unaff_x21;
  param_1 = unaff_x23;
LAB_003fe3a4:
  puVar10 = puVar8;
  plVar11 = plVar9;
  uVar15 = uVar12;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    unaff_x30 = FUN_003fe4b0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)&lStack_80;
    puVar10 = puVar6;
    plVar11 = plVar5;
    uVar15 = uVar13;
    unaff_x19 = puVar8;
    unaff_x20 = plVar9;
    unaff_x21 = param_2;
    unaff_x22 = uVar12;
    unaff_x23 = param_1;
    unaff_x24 = uVar14;
    unaff_x29 = puVar1;
  }
  if (plVar11 != (long *)0x0 || uVar15 != 0) {
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar8 = puVar10;
    if (uVar15 < (ulong)plVar11[1]) {
      plVar5 = plVar11 + uVar15 * 8 + 6;
      uVar13 = uVar15;
      do {
        puVar8 = (uint *)(plVar5 + -4);
        FUN_0034b418(plVar5);
        FUN_0034b418(puVar8);
        uVar13 = uVar13 + 1;
        plVar5 = plVar5 + 8;
      } while (uVar13 < (ulong)plVar11[1]);
    }
    plVar11[1] = uVar15;
    *(long **)(puVar10 + 4) = plVar11;
    puVar10 = puVar8;
    for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11[1] != 0) {
        uVar13 = 0;
        lVar7 = (long)(plVar11 + 6);
        do {
          puVar10 = (uint *)(lVar7 + -0x20);
          FUN_0034b418(lVar7);
          FUN_0034b418(puVar10);
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 0x40;
        } while (uVar13 < (ulong)plVar11[1]);
      }
      plVar11[1] = 0;
    }
  }
  return puVar10;
LAB_003fe3ec:
  uVar15 = uVar15 + 1;
  if (plVar11 == (long *)0x0) {
    uVar14 = 0;
    if (uVar15 == 0) goto LAB_003fe3a4;
    plVar11 = (long *)0x0;
  }
  else {
    while (uVar15 == plVar11[1]) {
      uVar15 = 0;
      plVar11 = (long *)*plVar11;
      uVar14 = uVar15;
      if (plVar11 == (long *)0x0) goto LAB_003fe3a4;
    }
  }
  plVar16 = plVar11 + uVar15 * 8 + 2;
  uVar14 = plVar11[uVar15 * 8 + 3] & 0xff;
  if (*plVar16 != 0) {
    uVar14 = plVar11[uVar15 * 8 + 3];
  }
  if (uVar14 == param_2) goto code_r0x003fe434;
  goto LAB_003fe454;
code_r0x003fe434:
  puVar6 = (uint *)((long)plVar11 + uVar15 * 0x40 + 0x19);
  if (*plVar16 != 0) {
    puVar6 = (uint *)plVar11[uVar15 * 8 + 4];
  }
  plVar5 = param_1;
  uVar13 = param_2;
  _memcmp();
  if ((int)puVar6 != 0) {
LAB_003fe454:
    lVar18 = plVar9[uVar12 * 8 + 3];
    lVar7 = plVar9[uVar12 * 8 + 2];
    lVar21 = plVar9[uVar12 * 8 + 5];
    lVar19 = plVar9[uVar12 * 8 + 4];
    lVar17 = *plVar16;
    lVar22 = plVar11[uVar15 * 8 + 5];
    lVar20 = plVar11[uVar15 * 8 + 4];
    plVar9[uVar12 * 8 + 3] = plVar11[uVar15 * 8 + 3];
    plVar9[uVar12 * 8 + 2] = lVar17;
    plVar9[uVar12 * 8 + 5] = lVar22;
    plVar9[uVar12 * 8 + 4] = lVar20;
    plVar11[uVar15 * 8 + 3] = lVar18;
    *plVar16 = lVar7;
    plVar11[uVar15 * 8 + 5] = lVar21;
    plVar11[uVar15 * 8 + 4] = lVar19;
    lStack_78 = plVar9[uVar12 * 8 + 7];
    lStack_80 = plVar9[uVar12 * 8 + 6];
    lStack_68 = plVar9[uVar12 * 8 + 9];
    lStack_70 = plVar9[uVar12 * 8 + 8];
    lVar7 = plVar11[uVar15 * 8 + 6];
    lVar18 = plVar11[uVar15 * 8 + 9];
    lVar17 = plVar11[uVar15 * 8 + 8];
    plVar9[uVar12 * 8 + 7] = plVar11[uVar15 * 8 + 7];
    plVar9[uVar12 * 8 + 6] = lVar7;
    plVar9[uVar12 * 8 + 9] = lVar18;
    plVar9[uVar12 * 8 + 8] = lVar17;
    plVar11[uVar15 * 8 + 7] = lStack_78;
    plVar11[uVar15 * 8 + 6] = lStack_80;
    plVar11[uVar15 * 8 + 9] = lStack_68;
    plVar11[uVar15 * 8 + 8] = lStack_70;
    uVar12 = uVar12 + 1;
    do {
      if (uVar12 != plVar9[1]) goto LAB_003fe3ec;
      uVar12 = 0;
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    uVar12 = 0;
  }
  goto LAB_003fe3ec;
}



/* Entry: 003e88f4; end: 003e89c7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003e88f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined7 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong *puVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte *apbStack_258 [2];
  char cStack_241;
  undefined1 auStack_240 [56];
  undefined8 uStack_208;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  ulong auStack_1b8 [2];
  undefined7 *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  code *pcStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 *puStack_110;
  byte abStack_108 [64];
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar11 = (long *)*param_1;
  lVar13 = *plVar11;
  if (lVar13 == plVar11[1]) {
    uVar15 = lVar13 + 8U;
    if (lVar13 + 8U <= (ulong)(lVar13 * 2)) {
      uVar15 = lVar13 << 1;
    }
    plVar11[1] = uVar15;
    pbVar5 = (byte *)plVar11[2];
    puVar8 = (undefined8 *)(uVar15 * 0x60);
    FUN_00338cbc();
    plVar11 = (long *)*param_1;
    plVar11[2] = (long)pbVar5;
    lVar13 = *plVar11;
  }
  else {
    pbVar5 = (byte *)plVar11[2];
    puVar8 = param_2;
  }
  *plVar11 = lVar13 + 1;
  pbVar12 = pbVar5 + lVar13 * 0x60;
  uVar18 = param_2[1];
  uVar17 = *param_2;
  uVar16 = param_2[3];
  uVar1 = param_2[2];
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  *(undefined8 *)(pbVar12 + 8) = uVar18;
  *(undefined8 *)pbVar12 = uVar17;
  *(undefined8 *)(pbVar12 + 0x18) = uVar16;
  *(undefined8 *)(pbVar12 + 0x10) = uVar1;
  uVar18 = param_3[1];
  uVar17 = *param_3;
  uVar16 = param_3[3];
  uVar1 = param_3[2];
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  *(undefined8 *)(pbVar12 + 0x28) = uVar18;
  *(undefined8 *)(pbVar12 + 0x20) = uVar17;
  *(undefined8 *)(pbVar12 + 0x38) = uVar16;
  *(undefined8 *)(pbVar12 + 0x30) = uVar1;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return pbVar5;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_003e89c8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar12 = (byte *)((long)&MACH_HEADER.magic + 2);
  puVar6 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar12 != 0) {
    puStack_110 = auStack_80;
    pbVar12 = abStack_108;
    _vsnprintf(pbVar12,0x40,param_4,auStack_80);
    if ((int)(uint)pbVar12 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar12;
      if ((uint)pbVar12 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_108;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar12 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_110 = auStack_80;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    puVar6 = puVar8;
    FUN_00338e80(pbVar5,puVar8,2,unaff_x23);
    pbVar12 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return pbVar12;
  }
  ___stack_chk_fail();
  uStack_128 = 2;
  pcStack_118 = FUN_00339178;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_150 = unaff_x24;
  pbStack_148 = unaff_x23;
  pbStack_140 = param_4;
  pbStack_138 = pbVar5;
  puStack_130 = puVar8;
  ppuStack_120 = &puStack_90;
  FUN_0033a598();
  lVar13 = *(long *)pbVar12;
  lVar2 = lVar13;
  uStack_208 = uVar1;
  _strrchr(lVar13,0x2f);
  if (lVar2 != 0) {
    lVar13 = lVar2 + 1;
  }
  puVar8 = &uStack_208;
  _localtime_r(puVar8,auStack_240);
  if (puVar8 == (undefined8 *)0x0) {
    uStack_1f8 = 0x656d69746c6163;
    uStack_1f1 = 0;
    uStack_200 = 0x6c3a726f727265;
    uStack_1f9 = 0x6f;
  }
  else {
    puVar3 = &uStack_200;
    _strftime(puVar3,0x40,"%m%d %H:%M:%S",auStack_240);
    if (puVar3 == (undefined7 *)0x0) {
      uStack_200 = 0x733a726f727265;
      uStack_1f9 = 0x74;
      uStack_1f8 = 0x656d69746672;
    }
  }
  uVar4 = (ulong)*(uint *)(pbVar12 + 0xc);
  func_0x00338e1c();
  uVar15 = uVar4;
  _pthread_self();
  auStack_1b8[1] = 0x560e98;
  puStack_1a8 = &uStack_200;
  uStack_1a0 = 0x560e98;
  uStack_198 = (ulong)puVar6 & 0xffffffff;
  uStack_190 = 0x5606ac;
  pcStack_180 = FUN_00560738;
  uStack_170 = 0x560e98;
  uStack_168 = (ulong)*(uint *)(pbVar12 + 8);
  uStack_160 = 0x5606ac;
  puVar10 = auStack_1b8;
  auStack_1b8[0] = uVar4;
  uStack_188 = uVar15;
  lStack_178 = lVar13;
  FUN_0056189c(apbStack_258,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar12 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_1b8[0] = auStack_1b8[0] & 0xffffffffffffff00;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
LAB_00339300:
    pbVar5 = *(byte **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_1b8);
    if ((char)uStack_1a0 == '\0') goto LAB_00339300;
    pbVar5 = *(byte **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_241 < '\0') {
    pbVar5 = apbStack_258[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return pbVar5;
  }
  ___stack_chk_fail();
  if (cStack_241 < '\0') {
    __ZdlPv(apbStack_258[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar7) {
    uVar15 = (ulong)pcVar7 >> 2;
    pbVar12 = pbVar5;
    do {
      uVar9 = (*(int *)pbVar12 * 0x16a88000 | (uint)(*(int *)pbVar12 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar15 = uVar15 - 1;
      pbVar12 = pbVar12 + 4;
    } while (uVar15 != 0);
    pbVar5 = pbVar5 + ((ulong)pcVar7 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar15 = (ulong)pcVar7 & 3;
  if (uVar15 != 1) {
    if (uVar15 != 2) {
      if (uVar15 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar5[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar5[1] << 8;
  }
  uVar9 = ((uVar14 ^ *pbVar5) * 0x16a88000 | (uVar14 ^ *pbVar5) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar7;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003e89c8; end: 003e89cf;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003e89c8(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003e89d0; end: 003e8a9f;  */

void FUN_003e89d0(undefined8 param_1,ulong *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uStack_40;
  ulong uStack_38;
  
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar5 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar3 = param_3;
  func_0x00407688(param_3);
  uVar4 = uVar3;
  _strlen();
  FUN_003be254(&uStack_38,&uStack_40,7,uVar3,uVar4);
  FUN_003be104(param_1,&uStack_38,8,param_3 & 0xffffffff);
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
  return;
}



/* Entry: 003e8aa0; end: 003e8c0b;  */

void FUN_003e8aa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 long *param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  char cStack_81;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  long *plStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_c0;
  ppuVar4 = &puStack_c0;
  plStack_50 = param_5;
  uStack_48 = param_2;
  FUN_003d0f18(auStack_a0,param_3,param_4,param_5);
  if (*param_5 != 0) {
    *param_1 = 0;
    goto LAB_003e8b8c;
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x0033b318(&puStack_c0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x3e8be0);
    (*pcVar2)();
  }
  if (param_4 < 0x17) {
    uStack_b0 = CONCAT17((char)param_4,(undefined7)uStack_b0);
    if (param_4 != 0) goto LAB_003e8b44;
  }
  else {
    uVar1 = (param_4 & 0xfffffffffffffff8) + 8;
    if ((param_4 | 7) != 0x17) {
      uVar1 = param_4 | 7;
    }
    ppuVar3 = (undefined1 **)(uVar1 + 1);
    __Znwm();
    uStack_b0 = (ulong)(uVar1 + 1) | 0x8000000000000000;
    puStack_c0 = (undefined1 *)ppuVar3;
    uStack_b8 = param_4;
LAB_003e8b44:
    _memmove(ppuVar3,param_3,param_4);
    ppuVar4 = ppuVar3;
  }
  *(undefined1 *)((long)ppuVar4 + param_4) = 0;
  FUN_003e8c0c(&uStack_a8,&uStack_48,&puStack_c0,auStack_a0,&plStack_50);
  *param_1 = uStack_a8;
  uStack_a8 = 0;
  if ((long)uStack_b0 < 0) {
    __ZdlPv(puStack_c0);
  }
LAB_003e8b8c:
  puStack_c0 = auStack_68;
  FUN_0034a050(&puStack_c0);
  func_0x003499b4(auStack_80,uStack_78);
  if (cStack_81 < '\0') {
    __ZdlPv(uStack_98);
  }
  return;
}



/* Entry: 003e8c0c; end: 003e8d2b;  */

void FUN_003e8c0c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  
  uVar1 = 0xd8;
  __Znwm();
  uVar2 = *param_2;
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  lStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  auStack_b0[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_90 = &uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  FUN_00358178(auStack_b0,param_4);
  FUN_003e8d2c(uVar1,uVar2,&uStack_60,auStack_b0,*param_5);
  puStack_48 = &uStack_78;
  *param_1 = uVar1;
  FUN_0034a050(&puStack_48);
  func_0x003499b4(&puStack_90,uStack_88);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 003e8d2c; end: 003e903b;  */

undefined8 *
FUN_003e8d2c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long lVar1;
  char *pcVar2;
  char **ppcVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uStack_a1;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  char *pcStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  char acStack_60 [24];
  char *pcStack_48;
  
  *param_1 = &PTR_FUN_009e16a0;
  param_1[1] = 1;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[2];
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  piVar4 = (int *)(param_1 + 5);
  *piVar4 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_00358178(piVar4,param_4);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  if (*piVar4 == 5) {
    pcStack_78 = (char *)0x0;
    pcStack_70 = (char *)0x0;
    uStack_68 = 0;
    uStack_80 = 0;
    lVar1 = lRam0000000000b65d18;
    if (lRam0000000000b65d18 == 0) {
      FUN_003b171c();
    }
    FUN_003eafc0(&pcStack_a0,lVar1 + 0xd8,param_2,piVar4,&uStack_80);
    func_0x003ea574(param_1 + 0xf);
    param_1[0x10] = uStack_98;
    param_1[0xf] = pcStack_a0;
    param_1[0x11] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    pcStack_a0 = (char *)0x0;
    pcStack_48 = (char *)&pcStack_a0;
    FUN_003ea43c(&pcStack_48);
    if (uStack_80 != 0) {
      FUN_0035d2f8(&pcStack_78,&uStack_80);
    }
    FUN_003e903c(&pcStack_a0,param_1,param_2);
    if (pcStack_a0 != (char *)0x0) {
      FUN_0035d2f8(&pcStack_78,&pcStack_a0);
    }
    if (pcStack_78 != pcStack_70) {
      FUN_003e9438(&pcStack_48,&uStack_a1,"Service config parsing error",0x1c,&pcStack_78);
      pcVar2 = (char *)*param_5;
      if (pcStack_48 != pcVar2) {
        *param_5 = pcStack_48;
        pcStack_48 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar2 & 1) == 0) goto LAB_003e8ec8;
        FUN_0055293c();
        pcVar2 = pcStack_48;
      }
      if (((ulong)pcVar2 & 1) != 0) {
        FUN_0055293c();
      }
    }
LAB_003e8ec8:
    if (((ulong)pcStack_a0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((uStack_80 & 1) != 0) {
      FUN_0055293c();
    }
    pcStack_a0 = (char *)&pcStack_78;
    ppcVar3 = &pcStack_a0;
    goto LAB_003e8f54;
  }
  acStack_60[8] = '\0';
  acStack_60[9] = '\0';
  acStack_60[10] = '\0';
  acStack_60[0xb] = '\0';
  acStack_60[0xc] = '\0';
  acStack_60[0xd] = '\0';
  acStack_60[0xe] = '\0';
  acStack_60[0xf] = '\0';
  acStack_60[0x10] = '\0';
  acStack_60[0x11] = '\0';
  acStack_60[0x12] = '\0';
  acStack_60[0x13] = '\0';
  acStack_60[0x14] = '\0';
  acStack_60[0x15] = '\0';
  acStack_60[0x16] = '\0';
  acStack_60[0x17] = '\0';
  acStack_60[0] = '\0';
  acStack_60[1] = '\0';
  acStack_60[2] = '\0';
  acStack_60[3] = '\0';
  acStack_60[4] = '\0';
  acStack_60[5] = '\0';
  acStack_60[6] = '\0';
  acStack_60[7] = '\0';
  FUN_003b646c(&pcStack_a0,2,"JSON value is not an object",0x1b,&pcStack_48,acStack_60);
  pcVar2 = (char *)*param_5;
  if (pcStack_a0 == pcVar2) {
LAB_003e8f40:
    if (((ulong)pcVar2 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_5 = pcStack_a0;
    pcStack_a0 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar2 & 1) != 0) {
      FUN_0055293c();
      pcVar2 = pcStack_a0;
      goto LAB_003e8f40;
    }
  }
  pcStack_78 = acStack_60;
  ppcVar3 = &pcStack_78;
LAB_003e8f54:
  FUN_0033d548(ppcVar3);
  return param_1;
}



/* Entry: 003e903c; end: 003e9437;  */

void FUN_003e903c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int *piVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b1;
  ulong *puStack_b0;
  long lStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  ulong **ppuStack_70;
  
  lStack_a8 = 0;
  puStack_a0 = (ulong *)0x0;
  puStack_98 = (ulong *)0x0;
  FUN_00353254(&ppuStack_90,"methodConfig");
  lVar10 = param_2 + 0x48;
  FUN_0035d420(lVar10,&ppuStack_90);
  if ((long)ppuStack_80 < 0) {
    __ZdlPv(ppuStack_90);
  }
  if (param_2 + 0x50 != lVar10) {
    if (*(int *)(lVar10 + 0x38) != 6) {
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = (ulong *)0x0;
      FUN_003b646c(&puStack_b0,2,"field:methodConfig error:not of type Array",0x2a,&uStack_b1,
                   &uStack_d0);
      if (puStack_a0 < puStack_98) {
        *puStack_a0 = (ulong)puStack_b0;
        puStack_b0 = (ulong *)0x36;
        puStack_a0 = puStack_a0 + 1;
      }
      else {
        lVar8 = (long)puStack_a0 - lStack_a8 >> 3;
        uVar1 = lVar8 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(&lStack_a8);
LAB_003e9374:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x3e9378);
          (*pcVar4)();
        }
        ppuVar5 = &puStack_98;
        uVar7 = (long)puStack_98 - lStack_a8 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_98 - lStack_a8)) {
          uVar7 = 0x1fffffffffffffff;
        }
        ppuStack_70 = ppuVar5;
        if (uVar7 == 0) {
          ppuStack_90 = (ulong **)0x0;
        }
        else {
          FUN_0035d534();
          ppuStack_90 = ppuVar5;
        }
        ppuStack_88 = ppuStack_90 + lVar8;
        ppuStack_78 = ppuStack_90 + uVar7;
        ppuVar5 = ppuStack_88 + 1;
        *ppuStack_88 = puStack_b0;
        puStack_b0 = (ulong *)0x36;
        ppuStack_80 = ppuVar5;
        FUN_0035d4ac(&lStack_a8,&ppuStack_90);
        puVar3 = puStack_a0;
        FUN_0035d67c(&ppuStack_90);
        puStack_a0 = puVar3;
        if (((ulong)puStack_b0 & 1) != 0) {
          FUN_0055293c();
        }
      }
      ppuStack_90 = (ulong **)&uStack_d0;
      FUN_0033d548(&ppuStack_90);
    }
    piVar9 = *(int **)(lVar10 + 0x70);
    piVar2 = *(int **)(lVar10 + 0x78);
    if (piVar9 != piVar2) {
      do {
        if (*piVar9 == 5) {
          FUN_003e95bc(&ppuStack_90,param_2,param_3,piVar9);
          if (ppuStack_90 != (ulong **)0x0) {
            FUN_0035d2f8(&lStack_a8,&ppuStack_90);
            if (((ulong)ppuStack_90 & 1) != 0) {
              FUN_0055293c();
            }
          }
        }
        else {
          uStack_e0 = 0;
          uStack_d8 = 0;
          uStack_e8 = (ulong *)0x0;
          FUN_003b646c(&puStack_b0,2,"field:methodConfig error:not of type Object",0x2b,&uStack_b1,
                       &uStack_e8);
          if (puStack_a0 < puStack_98) {
            *puStack_a0 = (ulong)puStack_b0;
            puStack_b0 = (ulong *)0x36;
            puStack_a0 = puStack_a0 + 1;
          }
          else {
            lVar10 = (long)puStack_a0 - lStack_a8 >> 3;
            uVar1 = lVar10 + 1;
            if (uVar1 >> 0x3d != 0) {
              FUN_0035d520(&lStack_a8);
              goto LAB_003e9374;
            }
            uVar7 = (long)puStack_98 - lStack_a8 >> 2;
            if (uVar7 <= uVar1) {
              uVar7 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)puStack_98 - lStack_a8)) {
              uVar7 = 0x1fffffffffffffff;
            }
            ppuStack_70 = &puStack_98;
            if (uVar7 == 0) {
              ppuVar5 = (ulong **)0x0;
            }
            else {
              ppuVar5 = &puStack_98;
              FUN_0035d534();
            }
            ppuStack_88 = ppuVar5 + lVar10;
            ppuStack_78 = ppuVar5 + uVar7;
            ppuVar6 = ppuStack_88 + 1;
            ppuStack_90 = ppuVar5;
            *ppuStack_88 = puStack_b0;
            puStack_b0 = (ulong *)0x36;
            ppuStack_80 = ppuVar6;
            FUN_0035d4ac(&lStack_a8,&ppuStack_90);
            puVar3 = puStack_a0;
            FUN_0035d67c(&ppuStack_90);
            puStack_a0 = puVar3;
            if (((ulong)puStack_b0 & 1) != 0) {
              FUN_0055293c();
            }
          }
          ppuStack_90 = (ulong **)&uStack_e8;
          FUN_0033d548(&ppuStack_90);
        }
        piVar9 = piVar9 + 0x14;
      } while (piVar9 != piVar2);
    }
  }
  FUN_003e9438(param_1,&ppuStack_90,"Method Params",0xd,&lStack_a8);
  ppuStack_90 = (ulong **)&lStack_a8;
  FUN_0033d548(&ppuStack_90);
  return;
}



/* Entry: 003e9438; end: 003e94d7;  */

void FUN_003e9438(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_003bdf2c(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_0033d5cc(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 003e94d8; end: 003e95a3;  */

long FUN_003e94d8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  
  for (plVar5 = *(long **)(param_1 + 0xa0); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar3 = (long *)plVar5[2];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  lStack_28 = param_1 + 0xc0;
  FUN_003ea500(&lStack_28);
  FUN_003ea4b8(param_1 + 0x90);
  lStack_28 = param_1 + 0x78;
  FUN_003ea43c(&lStack_28);
  lStack_28 = param_1 + 0x60;
  FUN_0034a050(&lStack_28);
  func_0x003499b4(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 003e95a4; end: 003e95a7;  */

long FUN_003e95a4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  
  for (plVar5 = *(long **)(param_1 + 0xa0); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    plVar3 = (long *)plVar5[2];
    if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)plVar3[1])();
      }
    }
  }
  lStack_28 = param_1 + 0xc0;
  FUN_003ea500(&lStack_28);
  FUN_003ea4b8(param_1 + 0x90);
  lStack_28 = param_1 + 0x78;
  FUN_003ea43c(&lStack_28);
  lStack_28 = param_1 + 0x60;
  FUN_0034a050(&lStack_28);
  func_0x003499b4(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 003e95a8; end: 003e95bb;  */

void FUN_003e95a8(void)

{
  FUN_003e94d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003e95bc; end: 003e9dff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_003e95bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  ulong *****pppppuVar4;
  code *pcVar5;
  dword *pdVar6;
  ulong ******ppppppuVar7;
  char *pcVar8;
  long *plVar9;
  ulong uVar10;
  ulong ******ppppppuVar11;
  ulong *******pppppppuVar12;
  ulong ******ppppppuVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong *****pppppuVar17;
  ulong ******ppppppuVar18;
  bool bVar19;
  long lVar20;
  ulong ******ppppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_141;
  ulong ******ppppppuStack_140;
  ulong ******ppppppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  long lStack_118;
  char cStack_109;
  ulong auStack_108 [5];
  dword *pdStack_e0;
  ulong ******ppppppuStack_d8;
  ulong *****pppppuStack_d0;
  ulong *****pppppuStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  ulong *******pppppppuStack_b0;
  ulong ******ppppppuStack_a8;
  ulong ******ppppppuStack_a0;
  ulong ******ppppppuStack_98;
  ulong *******apppppppuStack_90 [4];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppppppuStack_d8 = (ulong ******)0x0;
  pppppuStack_d0 = (ulong *****)0x0;
  pppppuStack_c8 = (ulong *****)0x0;
  pdVar6 = &MACH_HEADER.flags;
  __Znwm();
  *(undefined8 *)pdVar6 = 0;
  *(undefined8 *)(pdVar6 + 2) = 0;
  *(undefined8 *)(pdVar6 + 4) = 0;
  auStack_108[4] = 0;
  lVar15 = lRam0000000000b65d18;
  pdStack_e0 = pdVar6;
  if (lRam0000000000b65d18 == 0) {
    FUN_003b171c();
  }
  FUN_003eb30c(&pppppppuStack_c0,lVar15 + 0xd8,param_3,param_4,auStack_108 + 4);
  pdVar6 = pdStack_e0;
  func_0x003ea574(pdStack_e0);
  *(ulong ********)(pdVar6 + 2) = pppppppuStack_b8;
  *(ulong ********)pdVar6 = pppppppuStack_c0;
  *(ulong ********)(pdVar6 + 4) = pppppppuStack_b0;
  pppppppuStack_c0 = (ulong *******)0x0;
  pppppppuStack_b8 = (ulong *******)0x0;
  pppppppuStack_b0 = (ulong *******)0x0;
  apppppppuStack_90[0] = (ulong *******)&pppppppuStack_c0;
  FUN_003ea43c(apppppppuStack_90);
  if (auStack_108[4] != 0) {
    FUN_0035d2f8(&ppppppuStack_d8,auStack_108 + 4);
  }
  pdVar6 = pdStack_e0;
  ppppppuVar7 = (ulong ******)(param_2 + 0xd0);
  pppppuVar17 = *(ulong ******)(param_2 + 200);
  if (pppppuVar17 < *ppppppuVar7) {
    pdStack_e0 = (dword *)0x0;
    ppppppuVar18 = (ulong ******)(pppppuVar17 + 1);
    *pppppuVar17 = (ulong ****)pdVar6;
LAB_003e9770:
    *(ulong *******)(param_2 + 200) = ppppppuVar18;
    pppppuVar17 = ppppppuVar18[-1];
    FUN_00353254(&pppppppuStack_c0,"name");
    plVar16 = (long *)(param_4 + 0x20);
    FUN_0035d420(plVar16,&pppppppuStack_c0);
    if ((long)pppppppuStack_b0 < 0) {
      __ZdlPv(pppppppuStack_c0);
    }
    if ((long *)(param_4 + 0x28) == plVar16) goto LAB_003e9ac0;
    if ((int)plVar16[7] == 6) {
      lVar15 = plVar16[0xe];
      lVar2 = plVar16[0xf];
      if (lVar15 == lVar2) {
LAB_003e9ac0:
        lVar15 = *(long *)(param_2 + 200) + -8;
        FUN_003ea5e4(lVar15,0);
        *(long *)(param_2 + 200) = lVar15;
      }
      else {
        bVar19 = false;
        plVar16 = (long *)(param_2 + 0x90);
        do {
          auStack_108[0] = 0;
          FUN_003e9e00(&pcStack_120,lVar15,auStack_108);
          if (auStack_108[0] == 0) {
            if (cStack_109 < '\0') {
              pcVar8 = pcStack_120;
              if (lStack_118 != 0) goto LAB_003e9834;
LAB_003e98ac:
              if (*(long *)(param_2 + 0xb8) != 0) {
                uStack_130 = 0;
                uStack_128 = 0;
                ppppppuStack_138 = (ulong ******)0x0;
                FUN_003b646c(&ppppppuStack_98,2,"field:name error:multiple default method configs",
                             0x30,&ppppppuStack_140,&ppppppuStack_138);
                if (pppppuStack_d0 < pppppuStack_c8) {
                  *pppppuStack_d0 = (ulong ****)ppppppuStack_98;
                  ppppppuStack_98 = (ulong ******)0x36;
                  pppppuStack_d0 = pppppuStack_d0 + 1;
                }
                else {
                  lVar20 = (long)pppppuStack_d0 - (long)ppppppuStack_d8 >> 3;
                  uVar1 = lVar20 + 1;
                  if (uVar1 >> 0x3d != 0) {
                    FUN_0035d520(&ppppppuStack_d8);
                    goto LAB_003e9ca0;
                  }
                  uVar14 = (long)pppppuStack_c8 - (long)ppppppuStack_d8 >> 2;
                  if (uVar14 <= uVar1) {
                    uVar14 = uVar1;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_c8 - (long)ppppppuStack_d8)) {
                    uVar14 = 0x1fffffffffffffff;
                  }
                  if (uVar14 == 0) {
                    ppppppuVar7 = (ulong ******)0x0;
                    ppppppuStack_a0 = &pppppuStack_c8;
                  }
                  else {
                    ppppppuVar7 = &pppppuStack_c8;
                    ppppppuStack_a0 = &pppppuStack_c8;
                    FUN_0035d534();
                  }
                  pppppppuStack_b8 = (ulong *******)(ppppppuVar7 + lVar20);
                  ppppppuStack_a8 = ppppppuVar7 + uVar14;
                  pppppppuVar12 = pppppppuStack_b8 + 1;
                  pppppppuStack_c0 = (ulong *******)ppppppuVar7;
                  *pppppppuStack_b8 = ppppppuStack_98;
                  ppppppuStack_98 = (ulong ******)0x36;
                  pppppppuStack_b0 = pppppppuVar12;
                  FUN_0035d4ac(&ppppppuStack_d8,&pppppppuStack_c0);
                  pppppuVar4 = pppppuStack_d0;
                  FUN_0035d67c(&pppppppuStack_c0);
                  pppppuStack_d0 = pppppuVar4;
                  if (((ulong)ppppppuStack_98 & 1) != 0) {
                    FUN_0055293c();
                  }
                }
                pppppppuStack_c0 = &ppppppuStack_138;
                FUN_0033d548(&pppppppuStack_c0);
              }
              *(ulong ******)(param_2 + 0xb8) = pppppuVar17;
            }
            else {
              if (cStack_109 == '\0') goto LAB_003e98ac;
              pcVar8 = (char *)&pcStack_120;
LAB_003e9834:
              FUN_003ec31c(apppppppuStack_90,pcVar8);
              plVar9 = plVar16;
              pppppppuStack_c0 = (ulong *******)apppppppuStack_90;
              FUN_003ea6bc(plVar16,apppppppuStack_90,&UNK_008000a0,&pppppppuStack_c0,
                           &ppppppuStack_98);
              if (plVar9[6] == 0) {
                plVar9[6] = (long)pppppuVar17;
              }
              else {
                uStack_158 = 0;
                uStack_150 = 0;
                ppppppuStack_160 = (ulong ******)0x0;
                FUN_003b646c(&ppppppuStack_140,2,
                             "field:name error:multiple method configs with same name",0x37,
                             &uStack_141,&ppppppuStack_160);
                if (pppppuStack_d0 < pppppuStack_c8) {
                  *pppppuStack_d0 = (ulong ****)ppppppuStack_140;
                  ppppppuStack_140 = (ulong ******)0x36;
                  pppppuStack_d0 = pppppuStack_d0 + 1;
                }
                else {
                  lVar20 = (long)pppppuStack_d0 - (long)ppppppuStack_d8 >> 3;
                  uVar1 = lVar20 + 1;
                  if (uVar1 >> 0x3d != 0) {
                    FUN_0035d520(&ppppppuStack_d8);
                    goto LAB_003e9ca0;
                  }
                  uVar14 = (long)pppppuStack_c8 - (long)ppppppuStack_d8 >> 2;
                  if (uVar14 <= uVar1) {
                    uVar14 = uVar1;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_c8 - (long)ppppppuStack_d8)) {
                    uVar14 = 0x1fffffffffffffff;
                  }
                  if (uVar14 == 0) {
                    ppppppuVar7 = (ulong ******)0x0;
                    ppppppuStack_a0 = &pppppuStack_c8;
                  }
                  else {
                    ppppppuVar7 = &pppppuStack_c8;
                    ppppppuStack_a0 = &pppppuStack_c8;
                    FUN_0035d534();
                  }
                  pppppppuStack_b8 = (ulong *******)(ppppppuVar7 + lVar20);
                  ppppppuStack_a8 = ppppppuVar7 + uVar14;
                  pppppppuVar12 = pppppppuStack_b8 + 1;
                  pppppppuStack_c0 = (ulong *******)ppppppuVar7;
                  *pppppppuStack_b8 = ppppppuStack_140;
                  ppppppuStack_140 = (ulong ******)0x36;
                  pppppppuStack_b0 = pppppppuVar12;
                  FUN_0035d4ac(&ppppppuStack_d8,&pppppppuStack_c0);
                  pppppuVar4 = pppppuStack_d0;
                  FUN_0035d67c(&pppppppuStack_c0);
                  pppppuStack_d0 = pppppuVar4;
                  if (((ulong)ppppppuStack_140 & 1) != 0) {
                    FUN_0055293c();
                  }
                }
                pppppppuStack_c0 = &ppppppuStack_160;
                FUN_0033d548(&pppppppuStack_c0);
                pppppppuVar12 = apppppppuStack_90[0];
                if ((ulong *******)((long)&MACH_HEADER.magic + 1) < apppppppuStack_90[0]) {
                  do {
                    ppppppuVar7 = *pppppppuVar12;
                    cVar3 = '\x01';
                    bVar19 = (bool)ExclusiveMonitorPass(pppppppuVar12,0x10);
                    if (bVar19) {
                      *pppppppuVar12 = (ulong ******)((long)ppppppuVar7 + -1);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if ((ulong ******)((long)ppppppuVar7 + -1) == (ulong ******)0x0) {
                    (*(code *)pppppppuVar12[1])();
                  }
                }
              }
            }
            bVar19 = true;
          }
          else {
            FUN_0035d2f8(&ppppppuStack_d8,auStack_108);
          }
          if (cStack_109 < '\0') {
            __ZdlPv(pcStack_120);
          }
          if ((auStack_108[0] & 1) != 0) {
            FUN_0055293c();
          }
          lVar15 = lVar15 + 0x50;
        } while (lVar15 != lVar2);
        if (!bVar19) goto LAB_003e9ac0;
      }
      FUN_003e9438(param_1,&pppppppuStack_c0,"methodConfig",0xc,&ppppppuStack_d8);
    }
    else {
      auStack_108[2] = 0;
      auStack_108[3] = 0;
      auStack_108[1] = 0;
      FUN_003b646c(&pcStack_120,2,"field:name error:not of type Array",0x22,&ppppppuStack_98,
                   auStack_108 + 1);
      if (pppppuStack_d0 < pppppuStack_c8) {
        *pppppuStack_d0 = (ulong ****)pcStack_120;
        pcStack_120 = segment_command_00000020.segname + 0xe;
        pppppuStack_d0 = pppppuStack_d0 + 1;
      }
      else {
        lVar15 = (long)pppppuStack_d0 - (long)ppppppuStack_d8 >> 3;
        uVar1 = lVar15 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(&ppppppuStack_d8);
          goto LAB_003e9ca0;
        }
        ppppppuVar7 = &pppppuStack_c8;
        uVar14 = (long)pppppuStack_c8 - (long)ppppppuStack_d8 >> 2;
        if (uVar14 <= uVar1) {
          uVar14 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)pppppuStack_c8 - (long)ppppppuStack_d8)) {
          uVar14 = 0x1fffffffffffffff;
        }
        ppppppuStack_a0 = ppppppuVar7;
        if (uVar14 == 0) {
          pppppppuStack_c0 = (ulong *******)0x0;
        }
        else {
          FUN_0035d534();
          pppppppuStack_c0 = (ulong *******)ppppppuVar7;
        }
        pppppppuStack_b8 = pppppppuStack_c0 + lVar15;
        ppppppuStack_a8 = (ulong ******)(pppppppuStack_c0 + uVar14);
        pppppppuVar12 = pppppppuStack_b8 + 1;
        *pppppppuStack_b8 = (ulong ******)pcStack_120;
        pcStack_120 = segment_command_00000020.segname + 0xe;
        pppppppuStack_b0 = pppppppuVar12;
        FUN_0035d4ac(&ppppppuStack_d8,&pppppppuStack_c0);
        pppppuVar17 = pppppuStack_d0;
        FUN_0035d67c(&pppppppuStack_c0);
        pppppuStack_d0 = pppppuVar17;
        if (((ulong)pcStack_120 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pppppppuStack_c0 = (ulong *******)(auStack_108 + 1);
      FUN_0033d548(&pppppppuStack_c0);
      FUN_003e9438(param_1,&pppppppuStack_c0,"methodConfig",0xc,&ppppppuStack_d8);
    }
    if ((auStack_108[4] & 1) != 0) {
      FUN_0055293c();
    }
    FUN_003ea5e4(&pdStack_e0,0);
    pppppppuStack_c0 = &ppppppuStack_d8;
    FUN_0033d548(&pppppppuStack_c0);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    plVar16 = (long *)(param_2 + 0xc0);
    lVar15 = (long)pppppuVar17 - *plVar16 >> 3;
    uVar1 = lVar15 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar10 = (long)*ppppppuVar7 - *plVar16;
      uVar14 = (long)uVar10 >> 2;
      if (uVar14 <= uVar1) {
        uVar14 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar14 = 0x1fffffffffffffff;
      }
      ppppppuStack_a0 = ppppppuVar7;
      if (uVar14 == 0) {
        ppppppuVar7 = (ulong ******)0x0;
      }
      else {
        FUN_003ea638();
      }
      pdVar6 = pdStack_e0;
      ppppppuVar11 = ppppppuVar7 + lVar15;
      pdStack_e0 = (dword *)0x0;
      ppppppuVar18 = ppppppuVar11 + 1;
      *ppppppuVar11 = (ulong *****)pdVar6;
      pppppppuVar12 = *(ulong ********)(param_2 + 0xc0);
      pppppppuStack_c0 = *(ulong ********)(param_2 + 200);
      pppppppuStack_b0 = pppppppuStack_c0;
      if (pppppppuStack_c0 != pppppppuVar12) {
        do {
          pppppppuStack_c0 = pppppppuStack_c0 + -1;
          ppppppuVar13 = *pppppppuStack_c0;
          *pppppppuStack_c0 = (ulong ******)0x0;
          ppppppuVar11 = ppppppuVar11 + -1;
          *ppppppuVar11 = (ulong *****)ppppppuVar13;
        } while (pppppppuStack_c0 != pppppppuVar12);
        pppppppuStack_c0 = (ulong *******)*plVar16;
        pppppppuStack_b0 = *(ulong ********)(param_2 + 200);
      }
      *(ulong *******)(param_2 + 0xc0) = ppppppuVar11;
      *(ulong *******)(param_2 + 200) = ppppppuVar18;
      ppppppuStack_a8 = *(ulong *******)(param_2 + 0xd0);
      *(ulong *******)(param_2 + 0xd0) = ppppppuVar7 + uVar14;
      pppppppuStack_b8 = pppppppuStack_c0;
      func_0x003ea66c(&pppppppuStack_c0);
      goto LAB_003e9770;
    }
  }
  FUN_003ea624(plVar16);
LAB_003e9ca0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3e9ca4);
  (*pcVar5)();
}



/* Entry: 003e9e00; end: 003ea2e7;  */

/* WARNING: Removing unreachable block (ram,0x003e9e70) */
/* WARNING: Removing unreachable block (ram,0x003ea00c) */

undefined1  [16] FUN_003e9e00(char **param_1,char *param_2,undefined8 *param_3)

{
  int *piVar1;
  char **ppcVar2;
  char *pcVar3;
  char **ppcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  int *unaff_x21;
  char *unaff_x22;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char **ppcStack_218;
  char acStack_210 [32];
  char *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1c8;
  char *pcStack_1c0;
  int *piStack_1b8;
  undefined8 *puStack_1b0;
  char **ppcStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  char **ppcStack_190;
  ulong uStack_188;
  ulong uStack_180;
  char acStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char acStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char **ppcStack_118;
  ulong uStack_110;
  char *pcStack_e8;
  undefined8 uStack_e0;
  char *pcStack_b8;
  ulong uStack_b0;
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(int *)param_2 == 5) {
    FUN_00353254(&pcStack_88,"service");
    unaff_x21 = (int *)(param_2 + 0x20);
    piVar1 = unaff_x21;
    FUN_0035d420(unaff_x21,&pcStack_88);
    if (((int *)(param_2 + 0x28) == piVar1) || (piVar1[0xe] == 0)) {
      unaff_x22 = (char *)0x0;
    }
    else {
      if (piVar1[0xe] != 4) {
        acStack_148[8] = '\0';
        acStack_148[9] = '\0';
        acStack_148[10] = '\0';
        acStack_148[0xb] = '\0';
        acStack_148[0xc] = '\0';
        acStack_148[0xd] = '\0';
        acStack_148[0xe] = '\0';
        acStack_148[0xf] = '\0';
        acStack_148[0x10] = '\0';
        acStack_148[0x11] = '\0';
        acStack_148[0x12] = '\0';
        acStack_148[0x13] = '\0';
        acStack_148[0x14] = '\0';
        acStack_148[0x15] = '\0';
        acStack_148[0x16] = '\0';
        acStack_148[0x17] = '\0';
        acStack_148[0] = '\0';
        acStack_148[1] = '\0';
        acStack_148[2] = '\0';
        acStack_148[3] = '\0';
        acStack_148[4] = '\0';
        acStack_148[5] = '\0';
        acStack_148[6] = '\0';
        acStack_148[7] = '\0';
        FUN_003b646c(&pcStack_b8,2,"field:name error: field:service error:not of type string",0x38,
                     &pcStack_e8,acStack_148);
        pcVar3 = (char *)*param_3;
        if (pcStack_b8 == pcVar3) {
LAB_003e9fac:
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_3 = pcStack_b8;
          pcStack_b8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
            pcVar3 = pcStack_b8;
            goto LAB_003e9fac;
          }
        }
        pcStack_88 = acStack_148;
        FUN_0033d548(&pcStack_88);
        pcVar3 = "";
        FUN_00353254();
        unaff_x22 = param_2;
        goto LAB_003e9f20;
      }
      if ((char)*(byte *)((long)piVar1 + 0x57) < '\0') {
        uVar8 = *(ulong *)(piVar1 + 0x12);
      }
      else {
        uVar8 = (ulong)*(byte *)((long)piVar1 + 0x57);
      }
      unaff_x22 = (char *)0x0;
      if (uVar8 != 0) {
        unaff_x22 = (char *)(piVar1 + 0x10);
      }
    }
    FUN_00353254(&pcStack_88,"method");
    FUN_0035d420(unaff_x21,&pcStack_88);
    if (((int *)(param_2 + 0x28) == unaff_x21) || (unaff_x21[0xe] == 0)) {
      piVar1 = (int *)0x0;
    }
    else {
      if (unaff_x21[0xe] != 4) {
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_160 = 0;
        FUN_003b646c(&pcStack_b8,2,"field:name error: field:method error:not of type string",0x37,
                     &pcStack_e8,&uStack_160);
        pcVar3 = (char *)*param_3;
        if (pcStack_b8 == pcVar3) {
LAB_003ea0e8:
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
          }
        }
        else {
          *param_3 = pcStack_b8;
          pcStack_b8 = segment_command_00000020.segname + 0xe;
          if (((ulong)pcVar3 & 1) != 0) {
            FUN_0055293c();
            pcVar3 = pcStack_b8;
            goto LAB_003ea0e8;
          }
        }
        pcStack_88 = (char *)&uStack_160;
        FUN_0033d548(&pcStack_88);
        pcVar3 = "";
        FUN_00353254();
        goto LAB_003e9f20;
      }
      if ((char)*(byte *)((long)unaff_x21 + 0x57) < '\0') {
        uVar8 = *(ulong *)(unaff_x21 + 0x12);
      }
      else {
        uVar8 = (ulong)*(byte *)((long)unaff_x21 + 0x57);
      }
      piVar1 = (int *)0x0;
      if (uVar8 != 0) {
        piVar1 = unaff_x21 + 0x10;
      }
    }
    if (unaff_x22 != (char *)0x0) {
      pcStack_88 = "/";
      uStack_80 = 1;
      uStack_b0 = *(ulong *)(unaff_x22 + 8);
      pcStack_b8 = *(char **)unaff_x22;
      if (-1 < unaff_x22[0x17]) {
        uStack_b0 = (ulong)(byte)unaff_x22[0x17];
        pcStack_b8 = unaff_x22;
      }
      pcStack_e8 = "/";
      uStack_e0 = 1;
      if (piVar1 == (int *)0x0) {
        FUN_00353254(&ppcStack_190,"");
      }
      else if (*(char *)((long)piVar1 + 0x17) < '\0') {
        FUN_002971d4(&ppcStack_190,*(undefined8 *)piVar1,*(undefined8 *)(piVar1 + 2));
      }
      else {
        uStack_188 = *(ulong *)(piVar1 + 2);
        ppcStack_190 = *(char ***)piVar1;
        uStack_180 = *(ulong *)(piVar1 + 4);
      }
      uStack_110 = uStack_188;
      ppcStack_118 = ppcStack_190;
      if (-1 < (long)uStack_180) {
        uStack_110 = uStack_180 >> 0x38;
        ppcStack_118 = (char **)&ppcStack_190;
      }
      ppcVar2 = &pcStack_88;
      pcVar3 = (char *)&pcStack_b8;
      FUN_00575ebc(param_1,ppcVar2,pcVar3,&pcStack_e8,&ppcStack_118);
      param_1 = ppcVar2;
      if ((long)uStack_180 < 0) {
        param_1 = ppcStack_190;
        __ZdlPv();
      }
      goto LAB_003e9f20;
    }
    if (piVar1 != (int *)0x0) {
      acStack_178[8] = '\0';
      acStack_178[9] = '\0';
      acStack_178[10] = '\0';
      acStack_178[0xb] = '\0';
      acStack_178[0xc] = '\0';
      acStack_178[0xd] = '\0';
      acStack_178[0xe] = '\0';
      acStack_178[0xf] = '\0';
      acStack_178[0x10] = '\0';
      acStack_178[0x11] = '\0';
      acStack_178[0x12] = '\0';
      acStack_178[0x13] = '\0';
      acStack_178[0x14] = '\0';
      acStack_178[0x15] = '\0';
      acStack_178[0x16] = '\0';
      acStack_178[0x17] = '\0';
      acStack_178[0] = '\0';
      acStack_178[1] = '\0';
      acStack_178[2] = '\0';
      acStack_178[3] = '\0';
      acStack_178[4] = '\0';
      acStack_178[5] = '\0';
      acStack_178[6] = '\0';
      acStack_178[7] = '\0';
      FUN_003b646c(&pcStack_b8,2,"field:name error:method name populated without service name",0x3b,
                   &pcStack_e8,acStack_178);
      pcVar3 = (char *)*param_3;
      if (pcStack_b8 == pcVar3) {
LAB_003ea1e4:
        if (((ulong)pcVar3 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_3 = pcStack_b8;
        pcStack_b8 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar3 & 1) != 0) {
          FUN_0055293c();
          pcVar3 = pcStack_b8;
          goto LAB_003ea1e4;
        }
      }
      pcStack_88 = acStack_178;
      FUN_0033d548(&pcStack_88);
    }
    pcVar3 = "";
    FUN_00353254();
    goto LAB_003e9f20;
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_130 = 0;
  FUN_003b646c(&pcStack_b8,2,"field:name error:type is not object",0x23,&pcStack_e8,&uStack_130);
  pcVar3 = (char *)*param_3;
  if (pcStack_b8 == pcVar3) {
LAB_003e9ef8:
    if (((ulong)pcVar3 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else {
    *param_3 = pcStack_b8;
    pcStack_b8 = segment_command_00000020.segname + 0xe;
    if (((ulong)pcVar3 & 1) != 0) {
      FUN_0055293c();
      pcVar3 = pcStack_b8;
      goto LAB_003e9ef8;
    }
  }
  pcStack_88 = (char *)&uStack_130;
  FUN_0033d548(&pcStack_88);
  pcVar3 = "";
  FUN_00353254();
LAB_003e9f20:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    auVar10._8_8_ = pcVar3;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  ___stack_chk_fail();
  FUN_0033c494(&pcStack_b8);
  pcStack_88 = acStack_178;
  FUN_0033d548(&pcStack_88);
  ppcVar2 = param_1;
  __Unwind_Resume();
  pcStack_198 = FUN_003ea2e8;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_1c0 = unaff_x22;
  piStack_1b8 = unaff_x21;
  puStack_1b0 = param_3;
  ppcStack_1a8 = param_1;
  puStack_1a0 = &stack0xfffffffffffffff0;
  if (ppcVar2[0x15] == (char *)0x0) {
    pcVar9 = ppcVar2[0x17];
  }
  else {
    ppcVar6 = ppcVar2 + 0x12;
    ppcVar4 = ppcVar6;
    pcVar7 = pcVar3;
    FUN_003eabb0();
    if (ppcVar4 == (char **)0x0) {
      uStack_1e8 = *(undefined8 *)(pcVar3 + 8);
      pcStack_1f0 = *(char **)pcVar3;
      uStack_1d8 = *(undefined8 *)(pcVar3 + 0x18);
      uStack_1e0 = *(undefined8 *)(pcVar3 + 0x10);
      ppcVar4 = &pcStack_1f0;
      FUN_003ebfac();
      pcVar3 = segment_command_00000020.segname + 7;
      ppcVar5 = ppcVar4;
      ppcStack_218 = ppcVar4;
      _strrchr();
      if (ppcVar5 == (char **)0x0) {
        pcVar9 = (char *)0x0;
        ppcVar6 = (char **)0x0;
      }
      else {
        *(undefined1 *)((long)ppcVar5 + 1) = 0;
        FUN_003ec14c(acStack_210,ppcVar4);
        pcVar3 = acStack_210;
        FUN_003eabb0();
        ppcVar2 = ppcVar2 + 0x17;
        if (ppcVar6 != (char **)0x0) {
          ppcVar2 = ppcVar6 + 6;
        }
        pcVar9 = *ppcVar2;
      }
      ppcStack_218 = (char **)0x0;
      ppcVar2 = ppcVar6;
      if (ppcVar4 != (char **)0x0) {
        FUN_00338cb8();
        ppcVar2 = ppcVar4;
      }
    }
    else {
      pcVar9 = ppcVar4[6];
      ppcVar2 = ppcVar4;
      pcVar3 = pcVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_1c8) {
    ___stack_chk_fail();
    if ((int)pcVar3 != 0) {
      func_0x0040cf10();
      FUN_0033904c(&ppcStack_218,0);
    }
    __Unwind_Resume();
    if (*(char *)((long)ppcVar2 + 0x27) < '\0') {
      return *(undefined1 (*) [16])(ppcVar2 + 2);
    }
    auVar12[8] = *(char *)((long)ppcVar2 + 0x27);
    auVar12._0_8_ = ppcVar2 + 2;
    auVar12._9_7_ = 0;
    return auVar12;
  }
  auVar11._8_8_ = pcVar3;
  auVar11._0_8_ = pcVar9;
  return auVar11;
}



/* Entry: 003ea2e8; end: 003ea40f;  */

undefined1  [16] FUN_003ea2e8(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puStack_88;
  char acStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[0x15] == 0) {
    uVar5 = param_1[0x17];
  }
  else {
    puVar3 = param_1 + 0x12;
    puVar1 = puVar3;
    pcVar4 = param_2;
    FUN_003eabb0();
    if (puVar1 == (undefined8 *)0x0) {
      uStack_58 = *(undefined8 *)(param_2 + 8);
      uStack_60 = *(undefined8 *)param_2;
      uStack_48 = *(undefined8 *)(param_2 + 0x18);
      uStack_50 = *(undefined8 *)(param_2 + 0x10);
      puVar1 = &uStack_60;
      FUN_003ebfac();
      param_2 = segment_command_00000020.segname + 7;
      puVar2 = puVar1;
      puStack_88 = puVar1;
      _strrchr();
      if (puVar2 == (undefined8 *)0x0) {
        uVar5 = 0;
        puVar3 = (undefined8 *)0x0;
      }
      else {
        *(undefined1 *)((long)puVar2 + 1) = 0;
        FUN_003ec14c(acStack_80,puVar1);
        param_2 = acStack_80;
        FUN_003eabb0();
        puVar2 = param_1 + 0x17;
        if (puVar3 != (undefined8 *)0x0) {
          puVar2 = puVar3 + 6;
        }
        uVar5 = *puVar2;
      }
      puStack_88 = (undefined8 *)0x0;
      param_1 = puVar3;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00338cb8();
        param_1 = puVar1;
      }
    }
    else {
      uVar5 = puVar1[6];
      param_1 = puVar1;
      param_2 = pcVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = uVar5;
    return auVar6;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x0040cf10();
    FUN_0033904c(&puStack_88,0);
  }
  __Unwind_Resume();
  if (-1 < *(char *)((long)param_1 + 0x27)) {
    auVar7[8] = *(char *)((long)param_1 + 0x27);
    auVar7._0_8_ = param_1 + 2;
    auVar7._9_7_ = 0;
    return auVar7;
  }
  return *(undefined1 (*) [16])(param_1 + 2);
}



/* Entry: 003ea410; end: 003ea43b;  */

undefined1  [16] FUN_003ea410(long param_1)

{
  undefined1 auVar1 [16];
  
  if (-1 < *(char *)(param_1 + 0x27)) {
    auVar1[8] = *(char *)(param_1 + 0x27);
    auVar1._0_8_ = param_1 + 0x10;
    auVar1._9_7_ = 0;
    return auVar1;
  }
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 003ea43c; end: 003ea4b7;  */

void FUN_003ea43c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 003ea4b8; end: 003ea4ff;  */

long * FUN_003ea4b8(long *param_1)

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



/* Entry: 003ea500; end: 003ea5e3;  */

void FUN_003ea500(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -8;
        FUN_003ea5e4(lVar2,0);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 003ea5e4; end: 003ea623;  */

void FUN_003ea5e4(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_003ea43c(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 003ea624; end: 003ea637;  */

undefined1  [16] FUN_003ea624(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  lVar2 = *(long *)((long)pcVar1 + 8);
  lVar3 = *(long *)((long)pcVar1 + 0x10);
  while (lVar3 != lVar2) {
    *(long *)((long)pcVar1 + 0x10) = lVar3 + -8;
    param_2 = 0;
    FUN_003ea5e4(lVar3 + -8,0);
    lVar3 = *(long *)((long)pcVar1 + 0x10);
  }
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = pcVar1;
  return auVar5;
}



/* Entry: 003ea638; end: 003ea6bb;  */

undefined1  [16] FUN_003ea638(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    param_2 = 0;
    FUN_003ea5e4(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 003ea6bc; end: 003ea97b;  */

qword * FUN_003ea6bc(qword *param_1,undefined1 **param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  undefined1 *puVar5;
  qword *pqVar6;
  qword qVar7;
  qword *pqVar8;
  undefined8 *puVar9;
  ulong uVar10;
  qword *pqVar11;
  long *plVar12;
  ulong uVar13;
  qword *extraout_x8;
  qword *pqVar14;
  undefined8 *puVar15;
  qword *pqVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined2 uVar20;
  undefined8 uVar21;
  qword qVar22;
  qword qVar23;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  qword qStack_170;
  qword qStack_168;
  qword qStack_160;
  qword qStack_158;
  qword qStack_150;
  qword qStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 **ppuStack_100;
  undefined8 *puStack_f8;
  qword *pqStack_f0;
  qword *pqStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  qword *pqStack_d0;
  qword *pqStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  qword qStack_90;
  qword qStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = (undefined1 *)((long)param_2 + 9);
  if (*param_2 != (undefined1 *)0x0) {
    puVar5 = param_2[2];
  }
  puVar1 = (undefined1 *)((ulong)param_2[1] & 0xff);
  if (*param_2 != (undefined1 *)0x0) {
    puVar1 = param_2[1];
  }
  FUN_003393b4(puVar5,puVar1,uRam0000000000b65d90);
  uVar18 = (ulong)puVar5 & 0xffffffff;
  uVar17 = param_1[1];
  if (uVar17 != 0) {
    uVar21 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar17 
                                                  >> 8)),POPCOUNT((char)uVar17))))))));
    uVar20 = NEON_uaddlv(uVar21,1);
    unaff_x26 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
    if (unaff_x26 < 2) {
      unaff_x25 = (int)uVar17 - 1 & uVar18;
    }
    else {
      unaff_x25 = uVar18;
      if (uVar17 <= uVar18) {
        uVar10 = 0;
        if (uVar17 != 0) {
          uVar10 = uVar18 / uVar17;
        }
        unaff_x25 = uVar18 - uVar10 * uVar17;
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (pqVar16 = (qword *)*puVar9, pqVar16 != (qword *)0x0)) {
      do {
        uVar10 = pqVar16[1];
        if (uVar10 == uVar18) {
          qStack_88 = pqVar16[3];
          qStack_90 = pqVar16[2];
          uStack_78 = pqVar16[5];
          uStack_80 = pqVar16[4];
          puStack_a8 = param_2[1];
          puStack_b0 = *param_2;
          puStack_98 = param_2[3];
          puStack_a0 = param_2[2];
          pqVar11 = &qStack_90;
          FUN_003ec788(pqVar11,&puStack_b0);
          if ((int)pqVar11 != 0) {
            pqVar8 = (qword *)0x0;
            goto LAB_003ea918;
          }
        }
        else {
          if (unaff_x26 < 2) {
            uVar10 = uVar10 & uVar17 - 1;
          }
          else if (uVar17 <= uVar10) {
            uVar19 = 0;
            if (uVar17 != 0) {
              uVar19 = uVar10 / uVar17;
            }
            uVar10 = uVar10 - uVar19 * uVar17;
          }
          if (uVar10 != unaff_x25) break;
        }
        pqVar16 = (qword *)*pqVar16;
      } while (pqVar16 != (qword *)0x0);
    }
  }
  param_2 = (undefined1 **)(ulong)(uVar17 == 0);
  pqVar16 = &segment_command_00000020.vmaddr;
  __Znwm();
  *pqVar16 = 0;
  pqVar16[1] = uVar18;
  pqVar11 = (qword *)*param_4;
  qVar23 = *pqVar11;
  qVar22 = pqVar11[3];
  qVar7 = pqVar11[2];
  pqVar16[3] = pqVar11[1];
  pqVar16[2] = qVar23;
  pqVar16[5] = qVar22;
  pqVar16[4] = qVar7;
  qVar7 = param_1[3];
  pqVar16[6] = 0;
  pqVar11 = pqVar16;
  if (*(float *)(param_1 + 4) * (float)uVar17 < (float)(qVar7 + 1) || uVar17 == 0) {
    uVar10 = 1;
    if (2 < uVar17) {
      uVar10 = (ulong)((uVar17 & uVar17 - 1) != 0);
    }
    uVar10 = uVar10 | uVar17 << 1;
    uVar17 = (ulong)((float)(qVar7 + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar17) {
      uVar10 = uVar17;
    }
    pqVar11 = param_1;
    FUN_003ea97c(param_1,uVar10);
    uVar17 = param_1[1];
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x25 = (int)uVar17 - 1 & uVar18;
    }
    else {
      unaff_x25 = uVar18;
      if (uVar17 <= uVar18) {
        uVar10 = 0;
        if (uVar17 != 0) {
          uVar10 = uVar18 / uVar17;
        }
        unaff_x25 = uVar18 - uVar10 * uVar17;
      }
    }
  }
  qVar7 = *param_1;
  pqVar8 = *(qword **)(qVar7 + unaff_x25 * 8);
  if (pqVar8 == (qword *)0x0) {
    pqVar8 = param_1 + 2;
    *pqVar16 = *pqVar8;
    *pqVar8 = (qword)pqVar16;
    *(qword **)(qVar7 + unaff_x25 * 8) = pqVar8;
    if (*pqVar16 != 0) {
      uVar10 = *(ulong *)(*pqVar16 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar10 = uVar10 & uVar17 - 1;
      }
      else if (uVar17 <= uVar10) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar10 / uVar17;
        }
        uVar10 = uVar10 - uVar19 * uVar17;
      }
      pqVar8 = (qword *)(*param_1 + uVar10 * 8);
      goto LAB_003ea904;
    }
  }
  else {
    *pqVar16 = *pqVar8;
LAB_003ea904:
    *pqVar8 = (qword)pqVar16;
  }
  param_1[3] = param_1[3] + 1;
  pqVar8 = (qword *)((long)&MACH_HEADER.magic + 1);
LAB_003ea918:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pqVar16;
  }
  ___stack_chk_fail();
  __ZdlPv(pqVar16);
  pqVar6 = pqVar11;
  __Unwind_Resume();
  ppuStack_e0 = param_2;
  pcStack_d8 = (code *)param_4;
  pqStack_d0 = pqVar16;
  pqStack_c8 = pqVar11;
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = FUN_003ea97c;
  pqVar16 = pqVar6;
  if ((char *)((long)pqVar8 - 1U) == (char *)0x0) {
    pqVar8 = (qword *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)pqVar8 & (long)pqVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    pqVar16 = pqVar8;
  }
  puVar9 = (undefined8 *)pqVar6[1];
  if (pqVar8 <= puVar9) {
    if (puVar9 <= pqVar8) {
      return pqVar16;
    }
    pqVar16 = (qword *)(long)((float)pqVar6[3] / *(float *)(pqVar6 + 4));
    if ((puVar9 < (undefined8 *)((long)&MACH_HEADER.magic + 3)) ||
       (uVar21 = CONCAT17(POPCOUNT((char)((ulong)puVar9 >> 0x38)),
                          CONCAT16(POPCOUNT((char)((ulong)puVar9 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)((ulong)puVar9 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)((ulong)puVar9 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)((ulong)puVar9 >> 0x18)
                                                                      ),
                                                              CONCAT12(POPCOUNT((char)((ulong)puVar9
                                                                                      >> 0x10)),
                                                                       CONCAT11(POPCOUNT((char)((
                                                  ulong)puVar9 >> 8)),POPCOUNT((char)puVar9)))))))),
       uVar20 = NEON_uaddlv(uVar21,1),
       1 < (CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff))) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined8 *)((long)&MACH_HEADER.magic + 1) < pqVar16) {
      pqVar16 = (qword *)(1L << (-LZCOUNT((char *)((long)pqVar16 + -1)) & 0x3fU));
    }
    if (pqVar8 <= pqVar16) {
      pqVar8 = pqVar16;
    }
    if (puVar9 <= pqVar8) {
      return pqVar16;
    }
  }
  pcVar4 = pcStack_d8;
  ppuVar3 = ppuStack_e0;
  if (pqVar8 == (qword *)0x0) {
    pqVar16 = (qword *)*pqVar6;
    *pqVar6 = 0;
    if (pqVar16 != (qword *)0x0) {
      __ZdlPv();
    }
    pqVar6[1] = 0;
    return pqVar16;
  }
  if ((ulong)pqVar8 >> 0x3d == 0) {
    qVar7 = (long)pqVar8 << 3;
    __Znwm();
    pqVar16 = (qword *)*pqVar6;
    *pqVar6 = qVar7;
    if (pqVar16 != (qword *)0x0) {
      __ZdlPv();
    }
    puVar9 = (undefined8 *)0x0;
    pqVar6[1] = (qword)pqVar8;
    do {
      *(undefined8 *)(*pqVar6 + (long)puVar9 * 8) = 0;
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (pqVar8 != puVar9);
    pqVar11 = (qword *)pqVar6[2];
    if (pqVar11 == (qword *)0x0) {
      return pqVar16;
    }
    puVar9 = (undefined8 *)pqVar11[1];
    uVar21 = CONCAT17(POPCOUNT((char)((ulong)pqVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)pqVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)pqVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)pqVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)pqVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)pqVar8 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  pqVar8 >> 8)),POPCOUNT((char)pqVar8))))))));
    uVar20 = NEON_uaddlv(uVar21,1);
    uVar17 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
    if (uVar17 < 2) {
      puVar9 = (undefined8 *)((ulong)puVar9 & (ulong)((long)pqVar8 + -1));
    }
    else if (pqVar8 <= puVar9) {
      uVar18 = 0;
      if (pqVar8 != (qword *)0x0) {
        uVar18 = (ulong)puVar9 / (ulong)pqVar8;
      }
      puVar9 = (undefined8 *)((long)puVar9 - uVar18 * (long)pqVar8);
    }
    *(qword **)(*pqVar6 + (long)puVar9 * 8) = pqVar6 + 2;
    pqVar14 = (qword *)*pqVar11;
    if (pqVar14 == (qword *)0x0) {
      return pqVar16;
    }
    do {
      puVar15 = (undefined8 *)pqVar14[1];
      if (uVar17 < 2) {
        puVar15 = (undefined8 *)((ulong)puVar15 & (ulong)((long)pqVar8 + -1));
      }
      else if (pqVar8 <= puVar15) {
        uVar18 = 0;
        if (pqVar8 != (qword *)0x0) {
          uVar18 = (ulong)puVar15 / (ulong)pqVar8;
        }
        puVar15 = (undefined8 *)((long)puVar15 - uVar18 * (long)pqVar8);
      }
      if (puVar15 != puVar9) {
        if (*(long *)(*pqVar6 + (long)puVar15 * 8) == 0) {
          *(qword **)(*pqVar6 + (long)puVar15 * 8) = pqVar11;
          puVar9 = puVar15;
        }
        else {
          *pqVar11 = *pqVar14;
          *pqVar14 = **(qword **)(*pqVar6 + (long)puVar15 * 8);
          **(qword **)(*pqVar6 + (long)puVar15 * 8) = (qword)pqVar14;
          pqVar14 = pqVar11;
        }
      }
      pqVar11 = pqVar14;
      pqVar14 = (qword *)*pqVar11;
    } while (pqVar14 != (qword *)0x0);
    return pqVar16;
  }
  pqVar11 = pqVar6;
  pqVar14 = pqVar8;
  FUN_00349558();
  ppuStack_100 = ppuVar3;
  puStack_f8 = (undefined8 *)pcVar4;
  pcStack_d8 = FUN_003eabb0;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pqVar16 = (qword *)((long)pqVar14 + 9);
  if (*pqVar14 != 0) {
    pqVar16 = (qword *)pqVar14[2];
  }
  uVar10 = pqVar14[1] & 0xff;
  if (*pqVar14 != 0) {
    uVar10 = pqVar14[1];
  }
  uStack_120 = unaff_x26;
  uStack_118 = unaff_x25;
  uStack_110 = uVar18;
  uStack_108 = uVar17;
  pqStack_f0 = pqVar8;
  pqStack_e8 = pqVar6;
  ppuStack_e0 = &puStack_c0;
  FUN_003393b4(pqVar16,uVar10,uRam0000000000b65d90);
  uVar17 = pqVar11[1];
  if (uVar17 != 0) {
    uVar18 = (ulong)pqVar16 & 0xffffffff;
    uVar21 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar17 
                                                  >> 8)),POPCOUNT((char)uVar17))))))));
    uVar20 = NEON_uaddlv(uVar21,1);
    uVar10 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
    if (uVar10 < 2) {
      uVar19 = (int)uVar17 - 1 & uVar18;
    }
    else {
      uVar19 = uVar18;
      if (uVar17 <= uVar18) {
        uVar19 = 0;
        if (uVar17 != 0) {
          uVar19 = uVar18 / uVar17;
        }
        uVar19 = uVar18 - uVar19 * uVar17;
      }
    }
    plVar12 = *(long **)(*pqVar11 + uVar19 * 8);
    if (plVar12 != (long *)0x0) {
      pqVar11 = (qword *)*plVar12;
      if (pqVar11 != (qword *)0x0) {
        do {
          uVar13 = pqVar11[1];
          if (uVar13 == uVar18) {
            qStack_148 = pqVar11[3];
            qStack_150 = pqVar11[2];
            lStack_138 = pqVar11[5];
            lStack_140 = pqVar11[4];
            qStack_168 = pqVar14[1];
            qStack_170 = *pqVar14;
            qStack_158 = pqVar14[3];
            qStack_160 = pqVar14[2];
            pqVar16 = &qStack_150;
            FUN_003ec788(pqVar16,&qStack_170);
            if ((int)pqVar16 != 0) break;
          }
          else {
            if (uVar10 < 2) {
              uVar13 = uVar13 & uVar17 - 1;
            }
            else if (uVar17 <= uVar13) {
              uVar2 = 0;
              if (uVar17 != 0) {
                uVar2 = uVar13 / uVar17;
              }
              uVar13 = uVar13 - uVar2 * uVar17;
            }
            if (uVar13 != uVar19) goto LAB_003eacd0;
          }
          pqVar11 = (qword *)*pqVar11;
        } while (pqVar11 != (qword *)0x0);
      }
      goto LAB_003eacd4;
    }
  }
LAB_003eacd0:
  pqVar11 = (qword *)0x0;
LAB_003eacd4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_128) {
    ___stack_chk_fail();
    puStack_188 = (undefined1 *)&uStack_1a0;
    pcStack_178 = FUN_003ead10;
    qVar7 = pqVar16[2];
    qVar23 = pqVar16[1];
    qVar22 = *pqVar16;
    pqVar16[1] = 0;
    pqVar16[2] = 0;
    *pqVar16 = 0;
    extraout_x8[1] = qVar23;
    *extraout_x8 = qVar22;
    extraout_x8[2] = qVar7;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    pqVar16 = (qword *)&puStack_188;
    pppuStack_180 = &ppuStack_e0;
    FUN_003b1adc(pqVar16);
    return pqVar16;
  }
  return pqVar11;
}



/* Entry: 003ea97c; end: 003eaa57;  */

undefined1 ** FUN_003ea97c(undefined1 **param_1,undefined1 **param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  long *plVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_78;
  
  ppuVar2 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (undefined1 **)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    ppuVar2 = param_2;
  }
  ppuVar9 = (undefined1 **)param_1[1];
  if (param_2 <= ppuVar9) {
    if (ppuVar9 <= param_2) {
      return ppuVar2;
    }
    ppuVar2 = (undefined1 **)(long)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((ppuVar9 < (undefined1 **)((long)&MACH_HEADER.magic + 3)) ||
       (uVar13 = CONCAT17(POPCOUNT((char)((ulong)ppuVar9 >> 0x38)),
                          CONCAT16(POPCOUNT((char)((ulong)ppuVar9 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)((ulong)ppuVar9 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)((ulong)ppuVar9 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)((ulong)ppuVar9 >> 0x18
                                                                             )),
                                                              CONCAT12(POPCOUNT((char)((ulong)
                                                  ppuVar9 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)((ulong)ppuVar9 >> 8)),
                                                           POPCOUNT((char)ppuVar9)))))))),
       uVar12 = NEON_uaddlv(uVar13,1),
       1 < (CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff))) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((undefined1 **)((long)&MACH_HEADER.magic + 1) < ppuVar2) {
      ppuVar2 = (undefined1 **)(1L << (-LZCOUNT((long)ppuVar2 + -1) & 0x3fU));
    }
    if (param_2 <= ppuVar2) {
      param_2 = ppuVar2;
    }
    if (ppuVar9 <= param_2) {
      return ppuVar2;
    }
  }
  if (param_2 == (undefined1 **)0x0) {
    ppuVar2 = (undefined1 **)*param_1;
    *param_1 = (undefined1 *)0x0;
    if (ppuVar2 != (undefined1 **)0x0) {
      __ZdlPv();
    }
    param_1[1] = (undefined1 *)0x0;
    return ppuVar2;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar3 = (undefined1 *)((long)param_2 << 3);
    __Znwm();
    ppuVar2 = (undefined1 **)*param_1;
    *param_1 = puVar3;
    if (ppuVar2 != (undefined1 **)0x0) {
      __ZdlPv();
    }
    ppuVar9 = (undefined1 **)0x0;
    param_1[1] = (undefined1 *)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)ppuVar9 * 8) = 0;
      ppuVar9 = (undefined1 **)((long)ppuVar9 + 1);
    } while (param_2 != ppuVar9);
    plVar4 = (long *)param_1[2];
    if (plVar4 == (long *)0x0) {
      return ppuVar2;
    }
    ppuVar9 = (undefined1 **)plVar4[1];
    uVar13 = CONCAT17(POPCOUNT((char)((ulong)param_2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)param_2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)param_2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)param_2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)param_2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)param_2 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      ppuVar9 = (undefined1 **)((ulong)ppuVar9 & (long)param_2 - 1U);
    }
    else if (param_2 <= ppuVar9) {
      uVar1 = 0;
      if (param_2 != (undefined1 **)0x0) {
        uVar1 = (ulong)ppuVar9 / (ulong)param_2;
      }
      ppuVar9 = (undefined1 **)((long)ppuVar9 - uVar1 * (long)param_2);
    }
    *(undefined1 ***)(*param_1 + (long)ppuVar9 * 8) = param_1 + 2;
    plVar7 = (long *)*plVar4;
    if (plVar7 == (long *)0x0) {
      return ppuVar2;
    }
    do {
      ppuVar8 = (undefined1 **)plVar7[1];
      if (uVar6 < 2) {
        ppuVar8 = (undefined1 **)((ulong)ppuVar8 & (long)param_2 - 1U);
      }
      else if (param_2 <= ppuVar8) {
        uVar1 = 0;
        if (param_2 != (undefined1 **)0x0) {
          uVar1 = (ulong)ppuVar8 / (ulong)param_2;
        }
        ppuVar8 = (undefined1 **)((long)ppuVar8 - uVar1 * (long)param_2);
      }
      if (ppuVar8 != ppuVar9) {
        if (*(long *)(*param_1 + (long)ppuVar8 * 8) == 0) {
          *(long **)(*param_1 + (long)ppuVar8 * 8) = plVar4;
          ppuVar9 = ppuVar8;
        }
        else {
          *plVar4 = *plVar7;
          *plVar7 = **(long **)(*param_1 + (long)ppuVar8 * 8);
          **(undefined8 **)(*param_1 + (long)ppuVar8 * 8) = plVar7;
          plVar7 = plVar4;
        }
      }
      plVar4 = plVar7;
      plVar7 = (long *)*plVar4;
    } while (plVar7 != (long *)0x0);
    return ppuVar2;
  }
  FUN_00349558();
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar2 = (undefined1 **)((long)param_2 + 9);
  if (*param_2 != (undefined1 *)0x0) {
    ppuVar2 = (undefined1 **)param_2[2];
  }
  puVar3 = (undefined1 *)((ulong)param_2[1] & 0xff);
  if (*param_2 != (undefined1 *)0x0) {
    puVar3 = param_2[1];
  }
  FUN_003393b4(ppuVar2,puVar3,uRam0000000000b65d90);
  puVar3 = param_1[1];
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)((ulong)ppuVar2 & 0xffffffff);
    uVar13 = CONCAT17(POPCOUNT((char)((ulong)puVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)puVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)puVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)puVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)puVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)puVar3 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  puVar3 >> 8)),POPCOUNT((char)puVar3))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      puVar11 = (undefined1 *)((ulong)((int)puVar3 - 1) & (ulong)puVar10);
    }
    else {
      puVar11 = puVar10;
      if (puVar3 <= puVar10) {
        uVar1 = 0;
        if (puVar3 != (undefined1 *)0x0) {
          uVar1 = (ulong)puVar10 / (ulong)puVar3;
        }
        puVar11 = puVar10 + -(uVar1 * (long)puVar3);
      }
    }
    if (*(long **)(*param_1 + (long)puVar11 * 8) != (long *)0x0) {
      ppuVar9 = (undefined1 **)**(long **)(*param_1 + (long)puVar11 * 8);
      if (ppuVar9 != (undefined1 **)0x0) {
        do {
          puVar5 = ppuVar9[1];
          if (puVar5 == puVar10) {
            puStack_98 = ppuVar9[3];
            puStack_a0 = ppuVar9[2];
            puStack_88 = ppuVar9[5];
            puStack_90 = ppuVar9[4];
            puStack_b8 = param_2[1];
            puStack_c0 = *param_2;
            puStack_a8 = param_2[3];
            puStack_b0 = param_2[2];
            ppuVar2 = &puStack_a0;
            FUN_003ec788(ppuVar2,&puStack_c0);
            if ((int)ppuVar2 != 0) break;
          }
          else {
            if (uVar6 < 2) {
              puVar5 = (undefined1 *)((ulong)puVar5 & (ulong)(puVar3 + -1));
            }
            else if (puVar3 <= puVar5) {
              uVar1 = 0;
              if (puVar3 != (undefined1 *)0x0) {
                uVar1 = (ulong)puVar5 / (ulong)puVar3;
              }
              puVar5 = puVar5 + -(uVar1 * (long)puVar3);
            }
            if (puVar5 != puVar11) goto LAB_003eacd0;
          }
          ppuVar9 = (undefined1 **)*ppuVar9;
        } while (ppuVar9 != (undefined1 **)0x0);
      }
      goto LAB_003eacd4;
    }
  }
LAB_003eacd0:
  ppuVar9 = (undefined1 **)0x0;
LAB_003eacd4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  puStack_d8 = (undefined1 *)&uStack_f0;
  pcStack_c8 = FUN_003ead10;
  puVar3 = ppuVar2[2];
  puVar11 = ppuVar2[1];
  puVar10 = *ppuVar2;
  ppuVar2[1] = (undefined1 *)0x0;
  ppuVar2[2] = (undefined1 *)0x0;
  *ppuVar2 = (undefined1 *)0x0;
  extraout_x8[1] = puVar11;
  *extraout_x8 = puVar10;
  extraout_x8[2] = puVar3;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  ppuVar2 = &puStack_d8;
  puStack_d0 = &stack0xffffffffffffffd0;
  FUN_003b1adc(ppuVar2);
  return ppuVar2;
}



/* Entry: 003eaa58; end: 003eabaf;  */

undefined1 ** FUN_003eaa58(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 == (long *)0x0) {
    ppuVar3 = (undefined1 **)*param_1;
    *param_1 = 0;
    if (ppuVar3 != (undefined1 **)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
    return ppuVar3;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    ppuVar3 = (undefined1 **)*param_1;
    *param_1 = lVar2;
    if (ppuVar3 != (undefined1 **)0x0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 == (long *)0x0) {
      return ppuVar3;
    }
    plVar7 = (long *)plVar4[1];
    uVar15 = CONCAT17(POPCOUNT((char)((ulong)param_2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)param_2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)param_2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)param_2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)param_2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)param_2 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      plVar7 = (long *)((ulong)plVar7 & (long)param_2 - 1U);
    }
    else if (param_2 <= plVar7) {
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)param_2;
      }
      plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
    }
    *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
    plVar8 = (long *)*plVar4;
    if (plVar8 == (long *)0x0) {
      return ppuVar3;
    }
    do {
      plVar9 = (long *)plVar8[1];
      if (uVar6 < 2) {
        plVar9 = (long *)((ulong)plVar9 & (long)param_2 - 1U);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      if (plVar9 != plVar7) {
        if (*(long *)(*param_1 + (long)plVar9 * 8) == 0) {
          *(long **)(*param_1 + (long)plVar9 * 8) = plVar4;
          plVar7 = plVar9;
        }
        else {
          *plVar4 = *plVar8;
          *plVar8 = **(long **)(*param_1 + (long)plVar9 * 8);
          **(undefined8 **)(*param_1 + (long)plVar9 * 8) = plVar8;
          plVar8 = plVar4;
        }
      }
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
    } while (plVar8 != (long *)0x0);
    return ppuVar3;
  }
  FUN_00349558();
  pcStack_28 = FUN_003eabb0;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar3 = (undefined1 **)((long)param_2 + 9);
  if (*param_2 != 0) {
    ppuVar3 = (undefined1 **)param_2[2];
  }
  uVar6 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar6 = param_2[1];
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_003393b4(ppuVar3,uVar6,uRam0000000000b65d90);
  puVar11 = (undefined1 *)param_1[1];
  if (puVar11 != (undefined1 *)0x0) {
    puVar12 = (undefined1 *)((ulong)ppuVar3 & 0xffffffff);
    uVar15 = CONCAT17(POPCOUNT((char)((ulong)puVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)puVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)puVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)puVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)puVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)puVar11 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  puVar11 >> 8)),POPCOUNT((char)puVar11))))))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar6 < 2) {
      puVar13 = (undefined1 *)((ulong)((int)puVar11 - 1) & (ulong)puVar12);
    }
    else {
      puVar13 = puVar12;
      if (puVar11 <= puVar12) {
        uVar1 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar1 = (ulong)puVar12 / (ulong)puVar11;
        }
        puVar13 = puVar12 + -(uVar1 * (long)puVar11);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)puVar13 * 8);
    if (plVar4 != (long *)0x0) {
      ppuVar10 = (undefined1 **)*plVar4;
      if (ppuVar10 != (undefined1 **)0x0) {
        do {
          puVar5 = ppuVar10[1];
          if (puVar5 == puVar12) {
            puStack_98 = ppuVar10[3];
            puStack_a0 = ppuVar10[2];
            puStack_88 = ppuVar10[5];
            puStack_90 = ppuVar10[4];
            lStack_b8 = param_2[1];
            lStack_c0 = *param_2;
            lStack_a8 = param_2[3];
            lStack_b0 = param_2[2];
            ppuVar3 = &puStack_a0;
            FUN_003ec788(ppuVar3,&lStack_c0);
            if ((int)ppuVar3 != 0) break;
          }
          else {
            if (uVar6 < 2) {
              puVar5 = (undefined1 *)((ulong)puVar5 & (ulong)(puVar11 + -1));
            }
            else if (puVar11 <= puVar5) {
              uVar1 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar1 = (ulong)puVar5 / (ulong)puVar11;
              }
              puVar5 = puVar5 + -(uVar1 * (long)puVar11);
            }
            if (puVar5 != puVar13) goto LAB_003eacd0;
          }
          ppuVar10 = (undefined1 **)*ppuVar10;
        } while (ppuVar10 != (undefined1 **)0x0);
      }
      goto LAB_003eacd4;
    }
  }
LAB_003eacd0:
  ppuVar10 = (undefined1 **)0x0;
LAB_003eacd4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  puStack_d8 = (undefined1 *)&uStack_f0;
  pcStack_c8 = FUN_003ead10;
  puVar11 = ppuVar3[2];
  puVar13 = ppuVar3[1];
  puVar12 = *ppuVar3;
  ppuVar3[1] = (undefined1 *)0x0;
  ppuVar3[2] = (undefined1 *)0x0;
  *ppuVar3 = (undefined1 *)0x0;
  extraout_x8[1] = puVar13;
  *extraout_x8 = puVar12;
  extraout_x8[2] = puVar11;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  ppuVar3 = &puStack_d8;
  ppuStack_d0 = &puStack_30;
  FUN_003b1adc(ppuVar3);
  return ppuVar3;
}



/* Entry: 003eabb0; end: 003ead0f;  */

undefined1 ** FUN_003eabb0(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *extraout_x8;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar2 = (undefined1 **)((long)param_2 + 9);
  if (*param_2 != 0) {
    ppuVar2 = (undefined1 **)param_2[2];
  }
  uVar8 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar8 = param_2[1];
  }
  FUN_003393b4(ppuVar2,uVar8,uRam0000000000b65d90);
  puVar6 = (undefined1 *)param_1[1];
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)((ulong)ppuVar2 & 0xffffffff);
    uVar11 = CONCAT17(POPCOUNT((char)((ulong)puVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)puVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)puVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)puVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)puVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)puVar6 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  puVar6 >> 8)),POPCOUNT((char)puVar6))))))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)((int)puVar6 - 1) & (ulong)puVar7);
    }
    else {
      puVar9 = puVar7;
      if (puVar6 <= puVar7) {
        uVar1 = 0;
        if (puVar6 != (undefined1 *)0x0) {
          uVar1 = (ulong)puVar7 / (ulong)puVar6;
        }
        puVar9 = puVar7 + -(uVar1 * (long)puVar6);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)puVar9 * 8);
    if (plVar3 != (long *)0x0) {
      ppuVar5 = (undefined1 **)*plVar3;
      if (ppuVar5 != (undefined1 **)0x0) {
        do {
          puVar4 = ppuVar5[1];
          if (puVar4 == puVar7) {
            puStack_78 = ppuVar5[3];
            puStack_80 = ppuVar5[2];
            puStack_68 = ppuVar5[5];
            puStack_70 = ppuVar5[4];
            lStack_98 = param_2[1];
            lStack_a0 = *param_2;
            lStack_88 = param_2[3];
            lStack_90 = param_2[2];
            ppuVar2 = &puStack_80;
            FUN_003ec788(ppuVar2,&lStack_a0);
            if ((int)ppuVar2 != 0) break;
          }
          else {
            if (uVar8 < 2) {
              puVar4 = (undefined1 *)((ulong)puVar4 & (ulong)(puVar6 + -1));
            }
            else if (puVar6 <= puVar4) {
              uVar1 = 0;
              if (puVar6 != (undefined1 *)0x0) {
                uVar1 = (ulong)puVar4 / (ulong)puVar6;
              }
              puVar4 = puVar4 + -(uVar1 * (long)puVar6);
            }
            if (puVar4 != puVar9) goto LAB_003eacd0;
          }
          ppuVar5 = (undefined1 **)*ppuVar5;
        } while (ppuVar5 != (undefined1 **)0x0);
      }
      goto LAB_003eacd4;
    }
  }
LAB_003eacd0:
  ppuVar5 = (undefined1 **)0x0;
LAB_003eacd4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    puStack_b8 = (undefined1 *)&uStack_d0;
    pcStack_a8 = FUN_003ead10;
    puVar6 = ppuVar2[2];
    puVar9 = ppuVar2[1];
    puVar7 = *ppuVar2;
    ppuVar2[1] = (undefined1 *)0x0;
    ppuVar2[2] = (undefined1 *)0x0;
    *ppuVar2 = (undefined1 *)0x0;
    extraout_x8[1] = puVar9;
    *extraout_x8 = puVar7;
    extraout_x8[2] = puVar6;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    ppuVar2 = &puStack_b8;
    puStack_b0 = &stack0xfffffffffffffff0;
    FUN_003b1adc(ppuVar2);
    return ppuVar2;
  }
  return ppuVar5;
}



/* Entry: 003ead10; end: 003ead57;  */

void FUN_003ead10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_30;
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_30 = 0;
  FUN_003b1adc(&puStack_18);
  return;
}



/* Entry: 003ead58; end: 003eafbf;  */

void FUN_003ead58(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long *extraout_x8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  long lStack_188;
  long *plStack_180;
  ulong uStack_178;
  undefined8 auStack_100 [2];
  char cStack_e9;
  char *pcStack_e8;
  undefined8 uStack_e0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar12 = (long *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  plVar6 = param_2;
  plVar10 = param_2;
  if (plVar12 != puVar2) {
    do {
      plVar4 = (long *)*plVar12;
      (**(code **)(*plVar4 + 0x10))();
      plVar5 = (long *)*param_2;
      plVar10 = plVar6;
      (**(code **)(*plVar5 + 0x10))();
      if ((plVar6 == plVar10) &&
         (_memcmp(plVar4,plVar5,plVar6), plVar10 = plVar5, param_3 = plVar6, (int)plVar4 == 0)) {
        plStack_88 = (long *)0x8cc1b2;
        plStack_80 = (long *)0x12;
        param_2 = (long *)*param_2;
        (**(code **)(*param_2 + 0x10))();
        pcStack_e8 = "\' already registered";
        uStack_e0 = 0x14;
        plStack_b8 = param_2;
        plStack_b0 = plVar5;
        FUN_00575ddc(auStack_100,&plStack_88,&plStack_b8,&pcStack_e8);
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/service_config/service_config_parser.cc"
                     ,0x27,2,"%s");
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_100);
        _abort();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x3eaf90);
        (*pcVar3)();
      }
      plVar12 = plVar12 + 1;
      plVar6 = plVar10;
    } while (plVar12 != puVar2);
    plVar12 = (long *)param_1[1];
  }
  plVar6 = param_1 + 2;
  if (plVar12 < (long *)*plVar6) {
    lVar8 = *param_2;
    *param_2 = 0;
    plVar4 = plVar12 + 1;
    *plVar12 = lVar8;
LAB_003eaecc:
    param_1[1] = (long)plVar4;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar8 = (long)plVar12 - *param_1 >> 3;
    plVar12 = (long *)(lVar8 + 1);
    if ((ulong)plVar12 >> 0x3d == 0) {
      uVar13 = *plVar6 - *param_1;
      plVar10 = (long *)((long)uVar13 >> 2);
      if (plVar10 <= plVar12) {
        plVar10 = plVar12;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        plVar10 = (long *)0x1fffffffffffffff;
      }
      plStack_68 = plVar6;
      if (plVar10 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        FUN_003eb64c();
      }
      plVar12 = plVar6 + lVar8;
      lVar8 = *param_2;
      *param_2 = 0;
      plVar4 = plVar12 + 1;
      *plVar12 = lVar8;
      plVar5 = (long *)*param_1;
      plStack_88 = (long *)param_1[1];
      plStack_78 = plStack_88;
      if (plStack_88 != plVar5) {
        do {
          plStack_88 = plStack_88 + -1;
          lVar8 = *plStack_88;
          *plStack_88 = 0;
          plVar12 = plVar12 + -1;
          *plVar12 = lVar8;
        } while (plStack_88 != plVar5);
        plStack_88 = (long *)*param_1;
        plStack_78 = (long *)param_1[1];
      }
      *param_1 = (long)plVar12;
      param_1[1] = (long)plVar4;
      lStack_70 = param_1[2];
      param_1[2] = (long)(plVar6 + (long)plVar10);
      plStack_80 = plStack_88;
      func_0x003eb680(&plStack_88);
      goto LAB_003eaecc;
    }
  }
  FUN_003eb638();
  if (cStack_e9 < '\0') {
    __ZdlPv(auStack_100[0]);
  }
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_1a8 = 0;
  lVar8 = *param_1;
  if (param_1[1] != lVar8) {
    uVar13 = 0;
    plVar12 = extraout_x8 + 2;
    do {
      uStack_178 = 0;
      plVar6 = *(long **)(lVar8 + uVar13 * 8);
      (**(code **)(*plVar6 + 0x18))(&plStack_1c0,plVar6,plVar10,param_3,&uStack_178);
      if (uStack_178 != 0) {
        FUN_0035d2f8(&lStack_1b8,&uStack_178);
      }
      plVar5 = plStack_1c0;
      plVar6 = (long *)extraout_x8[1];
      if (plVar6 < (long *)extraout_x8[2]) {
        plStack_1c0 = (long *)0x0;
        plVar14 = plVar6 + 1;
        *plVar6 = (long)plVar5;
      }
      else {
        lVar8 = (long)plVar6 - *extraout_x8 >> 3;
        uVar1 = lVar8 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_003eb6e0(extraout_x8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x3eb1fc);
          (*pcVar3)();
        }
        uVar9 = extraout_x8[2] - *extraout_x8;
        uVar11 = (long)uVar9 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        plStack_180 = plVar12;
        if (uVar11 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar12;
          FUN_003eb6f4();
        }
        plVar4 = plStack_1c0;
        plVar5 = plVar6 + lVar8;
        plStack_1c0 = (long *)0x0;
        plVar14 = plVar5 + 1;
        *plVar5 = (long)plVar4;
        puVar2 = (undefined8 *)*extraout_x8;
        pcStack_1a0 = (char *)extraout_x8[1];
        pcStack_190 = pcStack_1a0;
        if (pcStack_1a0 != (char *)puVar2) {
          do {
            pcStack_1a0 = pcStack_1a0 + -8;
            pcStack_1a0[0] = '\0';
            pcStack_1a0[1] = '\0';
            pcStack_1a0[2] = '\0';
            pcStack_1a0[3] = '\0';
            pcStack_1a0[4] = '\0';
            pcStack_1a0[5] = '\0';
            pcStack_1a0[6] = '\0';
            pcStack_1a0[7] = '\0';
            plVar5 = plVar5 + -1;
            *plVar5 = *(long *)pcStack_1a0;
          } while (pcStack_1a0 != (char *)puVar2);
          pcStack_1a0 = (char *)*extraout_x8;
          pcStack_190 = (char *)extraout_x8[1];
        }
        *extraout_x8 = (long)plVar5;
        extraout_x8[1] = (long)plVar14;
        lStack_188 = extraout_x8[2];
        extraout_x8[2] = (long)(plVar6 + uVar11);
        pcStack_198 = pcStack_1a0;
        func_0x003eb728(&pcStack_1a0);
      }
      plVar6 = plStack_1c0;
      extraout_x8[1] = (long)plVar14;
      plStack_1c0 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if ((uStack_178 & 1) != 0) {
        FUN_0055293c();
      }
      uVar13 = uVar13 + 1;
      lVar8 = *param_1;
    } while (uVar13 < (ulong)(param_1[1] - lVar8 >> 3));
    if (lStack_1b8 != lStack_1b0) {
      FUN_003eb26c(&pcStack_1a0,&uStack_178,"Global Params",0xd,&lStack_1b8);
      pcVar7 = (char *)*param_4;
      if (pcStack_1a0 != pcVar7) {
        *param_4 = pcStack_1a0;
        pcStack_1a0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar7 & 1) == 0) goto LAB_003eb1c0;
        FUN_0055293c();
        pcVar7 = pcStack_1a0;
      }
      if (((ulong)pcVar7 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
LAB_003eb1c0:
  pcStack_1a0 = (char *)&lStack_1b8;
  FUN_0033d548(&pcStack_1a0);
  return;
}



/* Entry: 003eafc0; end: 003eb26b;  */

void FUN_003eafc0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lVar12 = *param_2;
  if (param_2[1] != lVar12) {
    uVar11 = 0;
    plVar1 = param_1 + 2;
    do {
      uStack_68 = 0;
      plVar6 = *(long **)(lVar12 + uVar11 * 8);
      (**(code **)(*plVar6 + 0x18))(&plStack_b0,plVar6,param_3,param_4,&uStack_68);
      if (uStack_68 != 0) {
        FUN_0035d2f8(&lStack_a8,&uStack_68);
      }
      plVar9 = plStack_b0;
      plVar6 = (long *)param_1[1];
      if (plVar6 < (long *)param_1[2]) {
        plStack_b0 = (long *)0x0;
        plVar13 = plVar6 + 1;
        *plVar6 = (long)plVar9;
      }
      else {
        lVar12 = (long)plVar6 - *param_1 >> 3;
        uVar2 = lVar12 + 1;
        if (uVar2 >> 0x3d != 0) {
          FUN_003eb6e0(param_1);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x3eb1fc);
          (*pcVar5)();
        }
        uVar8 = param_1[2] - *param_1;
        uVar10 = (long)uVar8 >> 2;
        if (uVar10 <= uVar2) {
          uVar10 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        plStack_70 = plVar1;
        if (uVar10 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar1;
          FUN_003eb6f4();
        }
        plVar4 = plStack_b0;
        plVar9 = plVar6 + lVar12;
        plStack_b0 = (long *)0x0;
        plVar13 = plVar9 + 1;
        *plVar9 = (long)plVar4;
        puVar3 = (undefined8 *)*param_1;
        pcStack_90 = (char *)param_1[1];
        pcStack_80 = pcStack_90;
        if (pcStack_90 != (char *)puVar3) {
          do {
            pcStack_90 = pcStack_90 + -8;
            pcStack_90[0] = '\0';
            pcStack_90[1] = '\0';
            pcStack_90[2] = '\0';
            pcStack_90[3] = '\0';
            pcStack_90[4] = '\0';
            pcStack_90[5] = '\0';
            pcStack_90[6] = '\0';
            pcStack_90[7] = '\0';
            plVar9 = plVar9 + -1;
            *plVar9 = *(long *)pcStack_90;
          } while (pcStack_90 != (char *)puVar3);
          pcStack_90 = (char *)*param_1;
          pcStack_80 = (char *)param_1[1];
        }
        *param_1 = (long)plVar9;
        param_1[1] = (long)plVar13;
        lStack_78 = param_1[2];
        param_1[2] = (long)(plVar6 + uVar10);
        pcStack_88 = pcStack_90;
        func_0x003eb728(&pcStack_90);
      }
      plVar6 = plStack_b0;
      param_1[1] = (long)plVar13;
      plStack_b0 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if ((uStack_68 & 1) != 0) {
        FUN_0055293c();
      }
      uVar11 = uVar11 + 1;
      lVar12 = *param_2;
    } while (uVar11 < (ulong)(param_2[1] - lVar12 >> 3));
    if (lStack_a8 != lStack_a0) {
      FUN_003eb26c(&pcStack_90,&uStack_68,"Global Params",0xd,&lStack_a8);
      pcVar7 = (char *)*param_5;
      if (pcStack_90 != pcVar7) {
        *param_5 = pcStack_90;
        pcStack_90 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar7 & 1) == 0) goto LAB_003eb1c0;
        FUN_0055293c();
        pcVar7 = pcStack_90;
      }
      if (((ulong)pcVar7 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
LAB_003eb1c0:
  pcStack_90 = (char *)&lStack_a8;
  FUN_0033d548(&pcStack_90);
  return;
}



/* Entry: 003eb26c; end: 003eb30b;  */

void FUN_003eb26c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  *param_1 = 0;
  if (param_5[1] - *param_5 != 0) {
    FUN_003bdf2c(&lStack_38,2,param_3,param_4,param_2,param_5[1] - *param_5 >> 3);
    if (lStack_38 != 0) {
      *param_1 = lStack_38;
    }
    lVar1 = *param_5;
    lVar2 = param_5[1];
    if (lVar2 != lVar1) {
      do {
        lVar2 = lVar2 + -8;
        FUN_0033d5cc(param_5 + 2,lVar2);
      } while (lVar2 != lVar1);
    }
    param_5[1] = lVar1;
  }
  return;
}



/* Entry: 003eb30c; end: 003eb5b7;  */

void FUN_003eb30c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lVar12 = *param_2;
  if (param_2[1] != lVar12) {
    uVar11 = 0;
    plVar1 = param_1 + 2;
    do {
      uStack_68 = 0;
      plVar6 = *(long **)(lVar12 + uVar11 * 8);
      (**(code **)(*plVar6 + 0x20))(&plStack_b0,plVar6,param_3,param_4,&uStack_68);
      if (uStack_68 != 0) {
        FUN_0035d2f8(&lStack_a8,&uStack_68);
      }
      plVar9 = plStack_b0;
      plVar6 = (long *)param_1[1];
      if (plVar6 < (long *)param_1[2]) {
        plStack_b0 = (long *)0x0;
        plVar13 = plVar6 + 1;
        *plVar6 = (long)plVar9;
      }
      else {
        lVar12 = (long)plVar6 - *param_1 >> 3;
        uVar2 = lVar12 + 1;
        if (uVar2 >> 0x3d != 0) {
          FUN_003eb6e0(param_1);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x3eb548);
          (*pcVar5)();
        }
        uVar8 = param_1[2] - *param_1;
        uVar10 = (long)uVar8 >> 2;
        if (uVar10 <= uVar2) {
          uVar10 = uVar2;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        plStack_70 = plVar1;
        if (uVar10 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar1;
          FUN_003eb6f4();
        }
        plVar4 = plStack_b0;
        plVar9 = plVar6 + lVar12;
        plStack_b0 = (long *)0x0;
        plVar13 = plVar9 + 1;
        *plVar9 = (long)plVar4;
        puVar3 = (undefined8 *)*param_1;
        pcStack_90 = (char *)param_1[1];
        pcStack_80 = pcStack_90;
        if (pcStack_90 != (char *)puVar3) {
          do {
            pcStack_90 = pcStack_90 + -8;
            pcStack_90[0] = '\0';
            pcStack_90[1] = '\0';
            pcStack_90[2] = '\0';
            pcStack_90[3] = '\0';
            pcStack_90[4] = '\0';
            pcStack_90[5] = '\0';
            pcStack_90[6] = '\0';
            pcStack_90[7] = '\0';
            plVar9 = plVar9 + -1;
            *plVar9 = *(long *)pcStack_90;
          } while (pcStack_90 != (char *)puVar3);
          pcStack_90 = (char *)*param_1;
          pcStack_80 = (char *)param_1[1];
        }
        *param_1 = (long)plVar9;
        param_1[1] = (long)plVar13;
        lStack_78 = param_1[2];
        param_1[2] = (long)(plVar6 + uVar10);
        pcStack_88 = pcStack_90;
        func_0x003eb728(&pcStack_90);
      }
      plVar6 = plStack_b0;
      param_1[1] = (long)plVar13;
      plStack_b0 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      if ((uStack_68 & 1) != 0) {
        FUN_0055293c();
      }
      uVar11 = uVar11 + 1;
      lVar12 = *param_2;
    } while (uVar11 < (ulong)(param_2[1] - lVar12 >> 3));
    if (lStack_a8 != lStack_a0) {
      FUN_003eb26c(&pcStack_90,&uStack_68,"methodConfig",0xc,&lStack_a8);
      pcVar7 = (char *)*param_5;
      if (pcStack_90 != pcVar7) {
        *param_5 = pcStack_90;
        pcStack_90 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar7 & 1) == 0) goto LAB_003eb50c;
        FUN_0055293c();
        pcVar7 = pcStack_90;
      }
      if (((ulong)pcVar7 & 1) != 0) {
        FUN_0055293c();
      }
    }
  }
LAB_003eb50c:
  pcStack_90 = (char *)&lStack_a8;
  FUN_0033d548(&pcStack_90);
  return;
}



/* Entry: 003eb5b8; end: 003eb637;  */

ulong FUN_003eb5b8(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *param_1;
  if (param_1[1] != lVar4) {
    uVar5 = 0;
    lVar3 = param_2;
    do {
      plVar2 = *(long **)(lVar4 + uVar5 * 8);
      (**(code **)(*plVar2 + 0x10))();
      iVar1 = (int)plVar2;
      if ((lVar3 == param_3) && (lVar3 = param_2, _memcmp(), iVar1 == 0)) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar4 = *param_1;
    } while (uVar5 < (ulong)(param_1[1] - lVar4 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 003eb638; end: 003eb64b;  */

undefined1  [16] FUN_003eb638(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  lVar2 = *(long *)((long)pcVar1 + 8);
  lVar4 = *(long *)((long)pcVar1 + 0x10);
  while (lVar4 != lVar2) {
    *(long *)((long)pcVar1 + 0x10) = lVar4 + -8;
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = *(long *)((long)pcVar1 + 0x10);
  }
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pcVar1;
  return auVar6;
}



/* Entry: 003eb64c; end: 003eb6df;  */

undefined1  [16] FUN_003eb64c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 003eb6e0; end: 003eb6f3;  */

undefined1  [16] FUN_003eb6e0(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  lVar2 = *(long *)((long)pcVar1 + 8);
  lVar4 = *(long *)((long)pcVar1 + 0x10);
  while (lVar4 != lVar2) {
    *(long *)((long)pcVar1 + 0x10) = lVar4 + -8;
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = *(long *)((long)pcVar1 + 0x10);
  }
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pcVar1;
  return auVar6;
}



/* Entry: 003eb6f4; end: 003eb787;  */

undefined1  [16] FUN_003eb6f4(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 003eb788; end: 003eb81f;  */

ulong FUN_003eb788(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = SUB168(auVar1 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  uVar2 = uVar2 + ((param_2 + 3) / 3) * 4 | 1;
  FUN_00338c74(uVar2);
  FUN_003eb820();
  return uVar2;
}



/* Entry: 003eb820; end: 003eb9db;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003eb820(byte *param_1,byte *param_2,ulong param_3,byte *param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  byte bVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1e8 [2];
  char cStack_1d1;
  undefined1 auStack_1d0 [56];
  undefined8 uStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  ulong auStack_148 [2];
  undefined7 *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  byte abStack_98 [64];
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ((int)param_4 != 0) {
    pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  uVar14 = 0;
  if (param_5 != 0) {
    uVar14 = SUB168(auVar1 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  if (param_3 < 3) {
    lVar16 = 0;
    pbVar6 = param_1;
    uVar5 = param_3;
  }
  else {
    lVar15 = 0;
    lVar16 = 0;
    pbVar12 = param_1;
    pbVar7 = param_2;
    do {
      *pbVar12 = pcVar8[*pbVar7 >> 2];
      pbVar12[1] = pcVar8[(ulong)(pbVar7[1] >> 4) | ((ulong)*pbVar7 & 3) << 4];
      pbVar12[2] = pcVar8[(ulong)(pbVar7[2] >> 6) | ((ulong)pbVar7[1] & 0xf) << 2];
      pbVar6 = pbVar12 + 4;
      pbVar12[3] = pcVar8[(ulong)pbVar7[2] & 0x3f];
      if ((param_5 != 0) && (lVar16 = lVar16 + 1, lVar16 == 0x13)) {
        lVar16 = 0;
        pbVar12[4] = 0xd;
        pbVar12[5] = 10;
        pbVar6 = pbVar12 + 6;
      }
      pbVar7 = pbVar7 + 3;
      lVar15 = lVar15 + -3;
      pbVar12 = pbVar6;
    } while (2 < param_3 + lVar15);
    lVar16 = -lVar15;
    uVar5 = param_3 + lVar15;
  }
  if (uVar5 == 1) {
    *pbVar6 = pcVar8[param_2[lVar16] >> 2];
    pbVar6[1] = pcVar8[((ulong)param_2[lVar16] & 3) * 0x10];
    bVar11 = 0x3d;
LAB_003eb98c:
    pbVar6[2] = bVar11;
    pbVar6[3] = 0x3d;
    pbVar6 = pbVar6 + 4;
  }
  else if (uVar5 == 2) {
    pbVar7 = param_2 + lVar16;
    *pbVar6 = pcVar8[*pbVar7 >> 2];
    pbVar6[1] = pcVar8[(ulong)(pbVar7[1] >> 4) | ((ulong)*pbVar7 & 3) << 4];
    bVar11 = pcVar8[((ulong)pbVar7[1] & 0xf) * 4];
    goto LAB_003eb98c;
  }
  if (pbVar6 < param_1) {
    func_0x007751bc();
  }
  else if ((ulong)((long)pbVar6 - (long)param_1) < (uVar14 + ((param_3 + 3) / 3) * 4 | 1)) {
    param_1[(long)pbVar6 - (long)param_1] = 0;
    return param_1;
  }
  func_0x007751f0();
  pcStack_18 = FUN_003eb9dc;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar6 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar7 = param_2;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar6 != 0) {
    puStack_a0 = &stack0xfffffffffffffff0;
    pbVar6 = abStack_98;
    _vsnprintf(pbVar6,0x40,param_4,&stack0xfffffffffffffff0);
    if ((int)(uint)pbVar6 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar6;
      if ((uint)pbVar6 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_98;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar6 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_a0 = &stack0xfffffffffffffff0;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    pbVar7 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar6 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pbVar6;
  }
  ___stack_chk_fail();
  uStack_b8 = 2;
  pcStack_a8 = FUN_00339178;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_e0 = unaff_x24;
  pbStack_d8 = unaff_x23;
  pbStack_d0 = param_4;
  pbStack_c8 = param_1;
  pbStack_c0 = param_2;
  ppuStack_b0 = &puStack_20;
  FUN_0033a598();
  lVar16 = *(long *)pbVar6;
  lVar15 = lVar16;
  uStack_198 = uVar2;
  _strrchr(lVar16,0x2f);
  if (lVar15 != 0) {
    lVar16 = lVar15 + 1;
  }
  puVar3 = &uStack_198;
  _localtime_r(puVar3,auStack_1d0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_188 = 0x656d69746c6163;
    uStack_181 = 0;
    uStack_190 = 0x6c3a726f727265;
    uStack_189 = 0x6f;
  }
  else {
    puVar4 = &uStack_190;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1d0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_190 = 0x733a726f727265;
      uStack_189 = 0x74;
      uStack_188 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar6 + 0xc);
  func_0x00338e1c();
  uVar14 = uVar5;
  _pthread_self();
  auStack_148[1] = 0x560e98;
  puStack_138 = &uStack_190;
  uStack_130 = 0x560e98;
  uStack_128 = (ulong)pbVar7 & 0xffffffff;
  uStack_120 = 0x5606ac;
  pcStack_110 = FUN_00560738;
  uStack_100 = 0x560e98;
  uStack_f8 = (ulong)*(uint *)(pbVar6 + 8);
  uStack_f0 = 0x5606ac;
  puVar10 = auStack_148;
  auStack_148[0] = uVar5;
  uStack_118 = uVar14;
  lStack_108 = lVar16;
  FUN_0056189c(apbStack_1e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar6 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_148[0] = auStack_148[0] & 0xffffffffffffff00;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
LAB_00339300:
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_148);
    if ((char)uStack_130 == '\0') goto LAB_00339300;
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1d1 < '\0') {
    pbVar6 = apbStack_1e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return pbVar6;
  }
  ___stack_chk_fail();
  if (cStack_1d1 < '\0') {
    __ZdlPv(apbStack_1e8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar14 = (ulong)pcVar8 >> 2;
    pbVar7 = pbVar6;
    do {
      uVar9 = (*(int *)pbVar7 * 0x16a88000 | (uint)(*(int *)pbVar7 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar14 = uVar14 - 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar14 != 0);
    pbVar6 = pbVar6 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar8 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar6[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar6[1] << 8;
  }
  uVar9 = ((uVar13 ^ *pbVar6) * 0x16a88000 | (uVar13 ^ *pbVar6) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003eb9dc; end: 003eb9e3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003eb9dc(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003eb9e4; end: 003ebc03;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_003eb9e4(long *param_1,long *******param_2,int param_3)

{
  byte *pbVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  long *******ppppppplVar10;
  uint uVar11;
  byte *pbVar12;
  long *extraout_x8;
  byte *pbVar13;
  long *extraout_x8_00;
  long ******pppppplVar15;
  long *****ppppplVar16;
  long ******pppppplVar17;
  long *******ppppppplVar18;
  undefined *puVar19;
  byte *pbVar20;
  long ******pppppplVar21;
  long ******pppppplStack_1c0;
  long ******pppppplStack_1b8;
  long ******pppppplStack_1b0;
  long ******pppppplStack_1a8;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  long lStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *******ppppppplStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  long *******ppppppplStack_110;
  ulong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  long lStack_40;
  long lStack_38;
  byte *pbVar14;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_3 == 0) {
    puVar19 = &UNK_007fb058;
LAB_003eba30:
    ppppppplVar18 = param_2;
    if (*param_2 == (long ******)0x0) {
      pppppplVar15 = (long ******)((long)param_2 + 9);
      pppppplVar17 = (long ******)(ulong)*(byte *)(param_2 + 1);
      if (pppppplVar17 != (long ******)0x0) goto LAB_003eba50;
LAB_003ebac4:
      pppppplVar15 = *param_2;
      pppppplVar21 = param_2[3];
      pppppplVar17 = param_2[2];
      param_1[1] = (long)param_2[1];
      *param_1 = (long)pppppplVar15;
      param_1[3] = (long)pppppplVar21;
      param_1[2] = (long)pppppplVar17;
      param_2[1] = (long ******)0x0;
      *param_2 = (long ******)0x0;
      param_2[3] = (long ******)0x0;
      param_2[2] = (long ******)0x0;
    }
    else {
      pppppplVar17 = param_2[1];
      pppppplVar15 = param_2[2];
      if (pppppplVar17 == (long ******)0x0) goto LAB_003ebac4;
LAB_003eba50:
      bVar4 = false;
      ppppppplVar10 = (long *******)0x0;
      do {
        bVar6 = (1L << ((ulong)*(byte *)pppppplVar15 & 0x3f) &
                *(ulong *)(puVar19 + ((ulong)(*(byte *)pppppplVar15 >> 3) & 0x18))) == 0;
        ppppppplVar18 = (long *******)((long)ppppppplVar10 + 3);
        if (!bVar6) {
          ppppppplVar18 = (long *******)((long)ppppppplVar10 + 1);
        }
        bVar4 = (bool)(bVar4 | bVar6);
        pppppplVar17 = (long ******)((long)pppppplVar17 + -1);
        ppppppplVar10 = ppppppplVar18;
        pppppplVar15 = (long ******)((long)pppppplVar15 + 1);
      } while (pppppplVar17 != (long ******)0x0);
      if (!bVar4) goto LAB_003ebac4;
      FUN_003ec0c8(&lStack_58,ppppppplVar18);
      pbVar20 = (byte *)((long)&uStack_50 + 1);
      if (lStack_58 != 0) {
        pbVar20 = pbStack_48;
      }
      if (*param_2 == (long ******)0x0) {
        pppppplVar15 = (long ******)((long)param_2 + 9);
        pppppplVar17 = (long ******)(ulong)*(byte *)(param_2 + 1);
      }
      else {
        pppppplVar17 = param_2[1];
        pppppplVar15 = param_2[2];
      }
      for (; pppppplVar17 != (long ******)0x0; pppppplVar17 = (long ******)((long)pppppplVar17 + -1)
          ) {
        bVar7 = *(byte *)pppppplVar15;
        if ((*(ulong *)(puVar19 + ((ulong)(bVar7 >> 3) & 0x18)) >> ((ulong)bVar7 & 0x3f) & 1) == 0)
        {
          *pbVar20 = 0x25;
          pbVar20[1] = "0123456789ABCDEF"[bVar7 >> 4];
          pbVar20[2] = "0123456789ABCDEF"[(ulong)bVar7 & 0xf];
          pbVar12 = pbVar20 + 3;
        }
        else {
          pbVar12 = pbVar20 + 1;
          *pbVar20 = bVar7;
        }
        pppppplVar15 = (long ******)((long)pppppplVar15 + 1);
        pbVar20 = pbVar12;
      }
      uVar2 = uStack_50 & 0xff;
      pbVar12 = (byte *)((long)&uStack_50 + 1);
      if (lStack_58 != 0) {
        uVar2 = uStack_50;
        pbVar12 = pbStack_48;
      }
      if (pbVar20 != pbVar12 + uVar2) {
        pcStack_60 = "q == out.end()";
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                     ,0x71,2,"assertion failed: %s");
        _abort();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x3ebbcc);
        (*pcVar5)();
      }
      param_1[1] = uStack_50;
      *param_1 = lStack_58;
      param_1[3] = lStack_40;
      param_1[2] = (long)pbStack_48;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return ppppppplVar18;
    }
    ___stack_chk_fail();
  }
  else if (param_3 == 1) {
    puVar19 = &UNK_007fb078;
    goto LAB_003eba30;
  }
  pcVar9 = "abort()";
  iVar8 = 0x8cc305;
  func_0x00338df0("abort()",
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                  ,0x50);
  __Unwind_Resume();
  pcStack_68 = FUN_003ebc04;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*(long *******)pcVar9 == (long ******)0x0) {
    pppppplVar15 = (long ******)((long)pcVar9 + 9);
    pppppplVar17 = (long ******)(ulong)*(byte *)((long)pcVar9 + 8);
  }
  else {
    pppppplVar17 = *(long *******)((long)pcVar9 + 8);
    pppppplVar15 = *(long *******)((long)pcVar9 + 0x10);
  }
  for (; puStack_70 = &stack0xfffffffffffffff0, pppppplVar17 != (long ******)0x0;
      pppppplVar17 = (long ******)((long)pppppplVar17 - 1)) {
    if (*(char *)pppppplVar15 == '%') {
      param_2 = (long *******)&ppppppplStack_130;
      FUN_003ebe60(&ppppppplStack_130);
      uVar2 = uStack_128 & 0xff;
      pbVar20 = (byte *)((long)&uStack_128 + 1);
      if (ppppppplStack_130 != (long *******)0x0) {
        uVar2 = uStack_128;
        pbVar20 = pbStack_120;
      }
      if (uVar2 == 0) goto LAB_003ebdc0;
      pbVar12 = pbVar20 + uVar2;
      pbVar14 = pbVar20;
      goto LAB_003ebcf8;
    }
    pppppplVar15 = (long ******)((long)pppppplVar15 + 1);
  }
  pppppplVar15 = *(long *******)pcVar9;
  pppppplVar21 = *(long *******)((long)pcVar9 + 0x18);
  pppppplVar17 = *(long *******)((long)pcVar9 + 0x10);
  extraout_x8[1] = (long)*(long *******)((long)pcVar9 + 8);
  *extraout_x8 = (long)pppppplVar15;
  extraout_x8[3] = (long)pppppplVar21;
  extraout_x8[2] = (long)pppppplVar17;
  *(long *******)((long)pcVar9 + 8) = (long ******)0x0;
  *(long *******)pcVar9 = (long ******)0x0;
  *(long *******)((long)pcVar9 + 0x18) = (long ******)0x0;
  *(long *******)((long)pcVar9 + 0x10) = (long ******)0x0;
  goto LAB_003ebc70;
LAB_003ebcf8:
  do {
    pbVar13 = pbVar14 + 1;
    if (*pbVar14 == 0x25) {
      if (pbVar13 < pbVar12) {
        bVar7 = *pbVar13;
        ppppppplVar18 = (long *******)(ulong)bVar7;
        if (((((bVar7 - 0x30 & 0xff) < 10) ||
             (uVar11 = bVar7 - 0x41,
             uVar11 < 0x26 && (1L << ((ulong)uVar11 & 0x3f) & 0x3f0000003fU) != 0)) &&
            (pbVar1 = pbVar14 + 2, pbVar1 < pbVar12)) &&
           (((*pbVar1 - 0x30 & 0xff) < 10 ||
            (uVar11 = *pbVar1 - 0x41,
            uVar11 < 0x26 && (1L << ((ulong)uVar11 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_003ebf08();
          bVar7 = *pbVar1;
          FUN_003ebf08();
          *pbVar20 = bVar7 | (byte)((int)ppppppplVar18 << 4);
          pbVar13 = pbVar14 + 3;
          param_2 = ppppppplVar18;
          goto LAB_003ebda8;
        }
      }
      *pbVar20 = 0x25;
    }
    else {
      *pbVar20 = *pbVar14;
    }
LAB_003ebda8:
    pbVar20 = pbVar20 + 1;
    pbVar14 = pbVar13;
  } while (pbVar13 != pbVar12);
LAB_003ebdc0:
  pbVar12 = (byte *)((long)&uStack_128 + 1);
  if (ppppppplStack_130 != (long *******)0x0) {
    pbVar12 = pbStack_120;
  }
  uStack_108 = uStack_128;
  ppppppplStack_110 = ppppppplStack_130;
  uStack_f8 = uStack_118;
  pbStack_100 = pbStack_120;
  uStack_128 = 0;
  ppppppplStack_130 = (long *******)0x0;
  uStack_118 = 0;
  pbStack_120 = (byte *)0x0;
  iVar8 = 0;
  FUN_003ec404(&lStack_e8,&ppppppplStack_110,0,(long)pbVar20 - (long)pbVar12);
  lStack_148 = lStack_e0;
  lStack_150 = lStack_e8;
  lStack_138 = lStack_d0;
  lStack_140 = lStack_d8;
  extraout_x8[1] = lStack_e0;
  *extraout_x8 = lStack_e8;
  extraout_x8[3] = lStack_d0;
  extraout_x8[2] = lStack_d8;
  pcVar9 = (char *)ppppppplStack_130;
  if ((long *******)((long)&MACH_HEADER.magic + 1) < ppppppplStack_130) {
    do {
      pppppplVar15 = *ppppppplStack_130;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppplStack_130,0x10);
      if (bVar4) {
        *ppppppplStack_130 = (long ******)((long)pppppplVar15 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((long ******)((long)pppppplVar15 + -1) == (long ******)0x0) {
      (*(code *)ppppppplStack_130[1])();
    }
  }
LAB_003ebc70:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return (long *******)pcVar9;
  }
  ___stack_chk_fail();
  if (iVar8 != 0) {
    func_0x0040cf10();
    FUN_003ebf60(&ppppppplStack_130);
  }
  ppppppplVar18 = (long *******)pcVar9;
  __Unwind_Resume();
  ppppppplVar10 = &pppppplStack_1c0;
  pcStack_158 = FUN_003ebe60;
  lStack_178 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppplVar15 = *ppppppplVar18;
  ppppppplStack_170 = param_2;
  ppppppplStack_168 = (long *******)pcVar9;
  ppuStack_160 = &puStack_70;
  if (pppppplVar15 == (long ******)((long)&MACH_HEADER.magic + 1)) {
LAB_003ebebc:
    pppppplStack_1b8 = ppppppplVar18[1];
    pppppplStack_1c0 = *ppppppplVar18;
    pppppplStack_1a8 = ppppppplVar18[3];
    pppppplStack_1b0 = ppppppplVar18[2];
    FUN_003ec030(&pppppplStack_198);
  }
  else {
    if (pppppplVar15 != (long ******)0x0) {
      if (*pppppplVar15 == (long *****)0x1) {
        pppppplVar15 = *ppppppplVar18;
        pppppplVar21 = ppppppplVar18[3];
        pppppplVar17 = ppppppplVar18[2];
        extraout_x8_00[1] = (long)ppppppplVar18[1];
        *extraout_x8_00 = (long)pppppplVar15;
        extraout_x8_00[3] = (long)pppppplVar21;
        extraout_x8_00[2] = (long)pppppplVar17;
        ppppppplVar18[1] = (long ******)0x0;
        *ppppppplVar18 = (long ******)0x0;
        ppppppplVar18[3] = (long ******)0x0;
        ppppppplVar18[2] = (long ******)0x0;
        goto LAB_003ebedc;
      }
      goto LAB_003ebebc;
    }
    pppppplStack_190 = ppppppplVar18[1];
    pppppplStack_198 = *ppppppplVar18;
    pppppplStack_180 = ppppppplVar18[3];
    pppppplStack_188 = ppppppplVar18[2];
    ppppppplVar10 = ppppppplVar18;
  }
  extraout_x8_00[1] = (long)pppppplStack_190;
  *extraout_x8_00 = (long)pppppplStack_198;
  extraout_x8_00[3] = (long)pppppplStack_180;
  extraout_x8_00[2] = (long)pppppplStack_188;
  ppppppplVar18 = ppppppplVar10;
LAB_003ebedc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_178) {
    return ppppppplVar18;
  }
  ___stack_chk_fail();
  iVar8 = (int)ppppppplVar18;
  uVar11 = iVar8 - 0x30;
  if (9 < uVar11) {
    if (iVar8 - 0x41U < 6) {
      uVar11 = iVar8 - 0x37;
    }
    else {
      if (5 < iVar8 - 0x61U) {
        pcVar9 = "return 255";
        func_0x00338df0("return 255",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                        ,0x7f);
        pppppplVar15 = *(long *******)pcVar9;
        if ((long ******)((long)&MACH_HEADER.magic + 1) < pppppplVar15) {
          do {
            ppppplVar16 = *pppppplVar15;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
            if (bVar4) {
              *pppppplVar15 = (long *****)((long)ppppplVar16 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long *****)((long)ppppplVar16 + -1) == (long *****)0x0) {
            (*(code *)pppppplVar15[1])();
          }
        }
        return (long *******)pcVar9;
      }
      uVar11 = iVar8 - 0x57;
    }
  }
  return (long *******)(ulong)(uVar11 & 0xff);
}



/* Entry: 003ebc04; end: 003ebe5f;  */

long * FUN_003ebc04(long *param_1,long *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  uint uVar10;
  byte *pbVar11;
  long *extraout_x8;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long **pplVar16;
  long **unaff_x20;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long **pplStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  byte *pbVar12;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (*param_2 == 0) {
    pcVar8 = (char *)((long)param_2 + 9);
    uVar15 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar15 = param_2[1];
    pcVar8 = (char *)param_2[2];
  }
  for (; uVar15 != 0; uVar15 = uVar15 - 1) {
    if (*pcVar8 == '%') {
      unaff_x20 = &plStack_d0;
      FUN_003ebe60(&plStack_d0);
      uVar15 = uStack_c8 & 0xff;
      pbVar17 = (byte *)((long)&uStack_c8 + 1);
      if (plStack_d0 != (long *)0x0) {
        uVar15 = uStack_c8;
        pbVar17 = pbStack_c0;
      }
      if (uVar15 == 0) goto LAB_003ebdc0;
      pbVar2 = pbVar17 + uVar15;
      pbVar12 = pbVar17;
      goto LAB_003ebcf8;
    }
    pcVar8 = pcVar8 + 1;
  }
  lVar14 = *param_2;
  lVar19 = param_2[3];
  lVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar14;
  param_1[3] = lVar19;
  param_1[2] = lVar18;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  goto LAB_003ebc70;
LAB_003ebcf8:
  do {
    pbVar11 = pbVar12 + 1;
    if (*pbVar12 == 0x25) {
      if (pbVar11 < pbVar2) {
        bVar5 = *pbVar11;
        pplVar16 = (long **)(ulong)bVar5;
        if (((((bVar5 - 0x30 & 0xff) < 10) ||
             (uVar10 = bVar5 - 0x41,
             uVar10 < 0x26 && (1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0)) &&
            (pbVar1 = pbVar12 + 2, pbVar1 < pbVar2)) &&
           (((*pbVar1 - 0x30 & 0xff) < 10 ||
            (uVar10 = *pbVar1 - 0x41,
            uVar10 < 0x26 && (1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_003ebf08();
          bVar5 = *pbVar1;
          FUN_003ebf08();
          *pbVar17 = bVar5 | (byte)((int)pplVar16 << 4);
          pbVar11 = pbVar12 + 3;
          unaff_x20 = pplVar16;
          goto LAB_003ebda8;
        }
      }
      *pbVar17 = 0x25;
    }
    else {
      *pbVar17 = *pbVar12;
    }
LAB_003ebda8:
    pbVar17 = pbVar17 + 1;
    pbVar12 = pbVar11;
  } while (pbVar11 != pbVar2);
LAB_003ebdc0:
  pbVar2 = (byte *)((long)&uStack_c8 + 1);
  if (plStack_d0 != (long *)0x0) {
    pbVar2 = pbStack_c0;
  }
  uStack_a8 = uStack_c8;
  plStack_b0 = plStack_d0;
  uStack_98 = uStack_b8;
  pbStack_a0 = pbStack_c0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  pbStack_c0 = (byte *)0x0;
  param_3 = 0;
  FUN_003ec404(&lStack_88,&plStack_b0,0,(long)pbVar17 - (long)pbVar2);
  lStack_e8 = lStack_80;
  lStack_f0 = lStack_88;
  lStack_d8 = lStack_70;
  lStack_e0 = lStack_78;
  param_1[1] = lStack_80;
  *param_1 = lStack_88;
  param_1[3] = lStack_70;
  param_1[2] = lStack_78;
  param_2 = plStack_d0;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plStack_d0) {
    do {
      lVar14 = *plStack_d0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plStack_d0,0x10);
      if (bVar4) {
        *plStack_d0 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 + -1 == 0) {
      (*(code *)plStack_d0[1])();
    }
  }
LAB_003ebc70:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return param_2;
  }
  ___stack_chk_fail();
  if (param_3 != 0) {
    func_0x0040cf10();
    FUN_003ebf60(&plStack_d0);
  }
  plVar9 = param_2;
  __Unwind_Resume();
  plVar7 = &lStack_160;
  pcStack_f8 = FUN_003ebe60;
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar13 = (long *)*plVar9;
  pplStack_110 = unaff_x20;
  plStack_108 = param_2;
  puStack_100 = &stack0xfffffffffffffff0;
  if (plVar13 == (long *)((long)&MACH_HEADER.magic + 1)) {
LAB_003ebebc:
    lStack_158 = plVar9[1];
    lStack_160 = *plVar9;
    lStack_148 = plVar9[3];
    lStack_150 = plVar9[2];
    FUN_003ec030(&lStack_138);
  }
  else {
    if (plVar13 != (long *)0x0) {
      if (*plVar13 == 1) {
        lVar14 = *plVar9;
        lVar19 = plVar9[3];
        lVar18 = plVar9[2];
        extraout_x8[1] = plVar9[1];
        *extraout_x8 = lVar14;
        extraout_x8[3] = lVar19;
        extraout_x8[2] = lVar18;
        plVar9[1] = 0;
        *plVar9 = 0;
        plVar9[3] = 0;
        plVar9[2] = 0;
        goto LAB_003ebedc;
      }
      goto LAB_003ebebc;
    }
    lStack_130 = plVar9[1];
    lStack_138 = *plVar9;
    lStack_120 = plVar9[3];
    lStack_128 = plVar9[2];
    plVar7 = plVar9;
  }
  extraout_x8[1] = lStack_130;
  *extraout_x8 = lStack_138;
  extraout_x8[3] = lStack_120;
  extraout_x8[2] = lStack_128;
  plVar9 = plVar7;
LAB_003ebedc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
    return plVar9;
  }
  ___stack_chk_fail();
  iVar6 = (int)plVar9;
  uVar10 = iVar6 - 0x30;
  if (9 < uVar10) {
    if (iVar6 - 0x41U < 6) {
      uVar10 = iVar6 - 0x37;
    }
    else {
      if (5 < iVar6 - 0x61U) {
        pcVar8 = "return 255";
        func_0x00338df0("return 255",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                        ,0x7f);
        plVar9 = *(long **)pcVar8;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar9) {
          do {
            lVar14 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 + -1 == 0) {
            (*(code *)plVar9[1])();
          }
        }
        return (long *)pcVar8;
      }
      uVar10 = iVar6 - 0x57;
    }
  }
  return (long *)(ulong)(uVar10 & 0xff);
}



/* Entry: 003ebe60; end: 003ebf07;  */

long * FUN_003ebe60(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar5 = &lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar7 = (long *)*param_2;
  if (plVar7 == (long *)((long)&MACH_HEADER.magic + 1)) {
LAB_003ebebc:
    lStack_68 = param_2[1];
    lStack_70 = *param_2;
    lStack_58 = param_2[3];
    lStack_60 = param_2[2];
    FUN_003ec030(&lStack_48);
  }
  else {
    if (plVar7 != (long *)0x0) {
      if (*plVar7 == 1) {
        lVar8 = *param_2;
        lVar10 = param_2[3];
        lVar9 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = lVar8;
        param_1[3] = lVar10;
        param_1[2] = lVar9;
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        goto LAB_003ebedc;
      }
      goto LAB_003ebebc;
    }
    lStack_40 = param_2[1];
    lStack_48 = *param_2;
    lStack_30 = param_2[3];
    lStack_38 = param_2[2];
    plVar5 = param_2;
  }
  param_1[1] = lStack_40;
  *param_1 = lStack_48;
  param_1[3] = lStack_30;
  param_1[2] = lStack_38;
  param_2 = plVar5;
LAB_003ebedc:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  iVar3 = (int)param_2;
  uVar6 = iVar3 - 0x30;
  if (9 < uVar6) {
    if (iVar3 - 0x41U < 6) {
      uVar6 = iVar3 - 0x37;
    }
    else {
      if (5 < iVar3 - 0x61U) {
        pcVar4 = "return 255";
        func_0x00338df0("return 255",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                        ,0x7f);
        plVar5 = *(long **)pcVar4;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar5) {
          do {
            lVar8 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 + -1 == 0) {
            (*(code *)plVar5[1])();
          }
        }
        return (long *)pcVar4;
      }
      uVar6 = iVar3 - 0x57;
    }
  }
  return (long *)(ulong)(uVar6 & 0xff);
}



/* Entry: 003ebf08; end: 003ebf5f;  */

char * FUN_003ebf08(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = param_1 - 0x30;
  if (9 < uVar5) {
    if (param_1 - 0x41U < 6) {
      uVar5 = param_1 - 0x37;
    }
    else {
      if (5 < param_1 - 0x61U) {
        pcVar3 = "return 255";
        func_0x00338df0("return 255",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/percent_encoding.cc"
                        ,0x7f);
        plVar4 = *(long **)pcVar3;
        if ((long *)((long)&MACH_HEADER.magic + 1) < plVar4) {
          do {
            lVar6 = *plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar6 + -1 == 0) {
            (*(code *)plVar4[1])();
          }
        }
        return pcVar3;
      }
      uVar5 = param_1 - 0x57;
    }
  }
  return (char *)(ulong)(uVar5 & 0xff);
}



/* Entry: 003ebf60; end: 003ebfab;  */

undefined8 * FUN_003ebf60(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if ((long *)((long)&MACH_HEADER.magic + 1) < plVar3) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  return param_1;
}



/* Entry: 003ebfac; end: 003ec023;  */

long FUN_003ebfac(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
  }
  lVar1 = uVar3 + 1;
  FUN_00338c74();
  if (*param_1 == 0) {
    lVar2 = (long)param_1 + 9;
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
    lVar2 = param_1[2];
  }
  _memcpy(lVar1,lVar2,uVar3);
  if (*param_1 == 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
  }
  *(undefined1 *)(lVar1 + uVar3) = 0;
  return lVar1;
}



/* Entry: 003ec024; end: 003ec02f;  */

void FUN_003ec024(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 003ec030; end: 003ec0c7;  */

void FUN_003ec030(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar5 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar5 = param_2[1];
  }
  if (uVar5 < 0x18) {
    puVar2 = (undefined8 *)0x0;
    *(char *)(param_1 + 1) = (char)uVar5;
    puVar3 = (undefined8 *)param_1[2];
  }
  else {
    puVar2 = (undefined8 *)(uVar5 + 0x10);
    __Znam();
    *puVar2 = 1;
    puVar2[1] = FUN_003ec9ec;
    puVar3 = puVar2 + 2;
    param_1[1] = uVar5;
    param_1[2] = puVar3;
  }
  *param_1 = puVar2;
  if (lVar4 == 0) {
    lVar4 = (long)param_2 + 9;
    uVar5 = uVar5 & 0xff;
  }
  else {
    uVar5 = param_2[1];
    lVar4 = param_2[2];
  }
  puVar1 = (undefined8 *)((long)param_1 + 9);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_0099a3f8)(puVar1,lVar4,uVar5);
  return;
}



/* Entry: 003ec0c8; end: 003ec11f;  */

void FUN_003ec0c8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x18) {
    puVar1 = (undefined8 *)0x0;
    *(char *)(param_1 + 1) = (char)param_2;
  }
  else {
    puVar1 = (undefined8 *)(param_2 + 0x10);
    __Znam();
    *puVar1 = 1;
    puVar1[1] = FUN_003ec9ec;
    param_1[1] = param_2;
    param_1[2] = puVar1 + 2;
  }
  *param_1 = puVar1;
  return;
}



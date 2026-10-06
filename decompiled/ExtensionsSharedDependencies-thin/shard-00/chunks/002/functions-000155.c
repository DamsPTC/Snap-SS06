/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 003d01b0; end: 003d0297;  */

void FUN_003d01b0(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long alStack_128 [9];
  long lStack_e0;
  long alStack_d8 [3];
  undefined2 auStack_60 [4];
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  qword qStack_38;
  
  if ((bRam0000000000b5eb78 & 1) != 0) {
    iRam0000000000b5eb80 = iRam0000000000b5eb80 + 1;
    iRam0000000000b5eb7c = iRam0000000000b5eb7c + 1;
    func_0x00339da8(0xb5ead8);
    pcVar4 = segment_command_00000020.segname;
    FUN_00338c74();
    auStack_60[0] = 0x101;
    uStack_58 = 0;
    FUN_0033b6e0(auStack_50,"grpc_global_timer",FUN_003d0298,pcVar4,0,auStack_60);
    if (pcVar4 != (char *)auStack_50) {
      *(undefined4 *)pcVar4 = auStack_50[0];
      *(undefined8 *)(pcVar4 + 8) = uStack_48;
      *(qword *)(pcVar4 + 0x18) = qStack_38;
      *(qword *)(pcVar4 + 0x10) = CONCAT62(uStack_3e,uStack_40);
      auStack_50[0] = 5;
      uStack_48 = 0;
      uStack_40 = 0x101;
      qStack_38 = 0;
    }
    FUN_003b3a7c(auStack_50);
    FUN_003b3344(pcVar4);
    return;
  }
  func_0x00774784();
  plVar5 = alStack_128;
  FUN_003c2a78(plVar5,4);
  plVar1 = (long *)0xb5ead8;
  do {
    while( true ) {
      lStack_e0 = 0x7fffffffffffffff;
      func_0x003c1f6c();
      *(undefined1 *)(*plVar5 + 0x34) = 0;
      plVar5 = &lStack_e0;
      func_0x003cf030();
      iVar3 = (int)plVar5;
      if (iVar3 == 0) break;
      if (iVar3 == 1) goto LAB_003d037c;
      if (iVar3 == 2) {
        alStack_d8[0] = 1;
        alStack_d8[1] = 0;
        alStack_d8[2] = 0;
        func_0x003c1f8c();
        if (*plVar5 == 0) {
          func_0x003c1f8c();
          *plVar5 = (long)alStack_d8;
        }
        plVar5 = plVar1;
        func_0x00339d8c();
        iRam0000000000b5eb80 = iRam0000000000b5eb80 + -1;
        if ((iRam0000000000b5eb80 == 0) && (bRam0000000000b5eb78 == 1)) {
          FUN_003d01b0();
        }
        else {
          if ((bRam0000000000b5eb90 & 1) == 0) {
            FUN_00339f68(0xb5eb18);
          }
          plVar5 = plVar1;
          func_0x00339da8();
        }
        func_0x003c1f6c();
        FUN_003c1d50(*plVar5);
        func_0x00339d8c(0xb5ead8);
        FUN_003d055c();
        iRam0000000000b5eb80 = iRam0000000000b5eb80 + 1;
        func_0x00339da8(0xb5ead8);
        plVar5 = alStack_d8;
        FUN_003414dc();
      }
    }
    lStack_e0 = 0x7fffffffffffffff;
LAB_003d037c:
    lVar2 = lStack_e0;
    alStack_d8[0] = lStack_e0;
    func_0x00339d8c(0xb5ead8);
    if (bRam0000000000b5eb78 != 1) {
      func_0x00339da8(0xb5ead8);
      func_0x00339d8c(0xb5ead8);
      iRam0000000000b5eb80 = iRam0000000000b5eb80 + -1;
      iRam0000000000b5eb7c = iRam0000000000b5eb7c + -1;
      if (iRam0000000000b5eb7c == 0) {
        FUN_00339f68(0xb5eb48);
      }
      *(long *)(param_1 + 0x20) = lRam0000000000b5eb88;
      lRam0000000000b5eb88 = param_1;
      func_0x00339da8(0xb5ead8);
      FUN_00341470(alStack_128);
      return;
    }
    if ((bRam0000000000b5eba0 & 1) == 0) {
      lVar7 = lRam0000000000b5eba8 + -1;
      if (lVar2 != 0x7fffffffffffffff) {
        if ((bRam0000000000b5eb90 == 1) && (lRam0000000000b5eb98 <= lVar2)) {
          alStack_d8[0] = 0x7fffffffffffffff;
        }
        else {
          lVar7 = lRam0000000000b5eba8 + 1;
          bRam0000000000b5eb90 = 1;
          lRam0000000000b5eb98 = lVar2;
          lRam0000000000b5eba8 = lVar7;
        }
      }
      plVar5 = alStack_d8;
      uVar6 = 0;
      FUN_003b8d70(plVar5,0);
      FUN_00339e80(0xb5eb18,0xb5ead8,plVar5,uVar6);
      if (lVar7 == lRam0000000000b5eba8) {
        lRam0000000000b5ebb0 = lRam0000000000b5ebb0 + 1;
        bRam0000000000b5eb90 = 0;
        lRam0000000000b5eb98 = 0x7fffffffffffffff;
      }
      if (bRam0000000000b5eba0 == 1) goto LAB_003d0494;
    }
    else {
LAB_003d0494:
      func_0x003cf060();
      bRam0000000000b5eba0 = 0;
    }
    plVar5 = plVar1;
    func_0x00339da8();
  } while( true );
}



/* Entry: 003d0298; end: 003d055b;  */

void FUN_003d0298(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long alStack_c8 [9];
  long lStack_80;
  long alStack_78 [3];
  
  plVar4 = alStack_c8;
  FUN_003c2a78(plVar4,4);
  plVar1 = (long *)0xb5ead8;
  do {
    while( true ) {
      lStack_80 = 0x7fffffffffffffff;
      func_0x003c1f6c();
      *(undefined1 *)(*plVar4 + 0x34) = 0;
      plVar4 = &lStack_80;
      func_0x003cf030();
      iVar3 = (int)plVar4;
      if (iVar3 == 0) break;
      if (iVar3 == 1) goto LAB_003d037c;
      if (iVar3 == 2) {
        alStack_78[0] = 1;
        alStack_78[1] = 0;
        alStack_78[2] = 0;
        func_0x003c1f8c();
        if (*plVar4 == 0) {
          func_0x003c1f8c();
          *plVar4 = (long)alStack_78;
        }
        plVar4 = plVar1;
        func_0x00339d8c();
        iRam0000000000b5eb80 = iRam0000000000b5eb80 + -1;
        if ((iRam0000000000b5eb80 == 0) && (cRam0000000000b5eb78 == '\x01')) {
          FUN_003d01b0();
        }
        else {
          if ((bRam0000000000b5eb90 & 1) == 0) {
            FUN_00339f68(0xb5eb18);
          }
          plVar4 = plVar1;
          func_0x00339da8();
        }
        func_0x003c1f6c();
        FUN_003c1d50(*plVar4);
        func_0x00339d8c(0xb5ead8);
        FUN_003d055c();
        iRam0000000000b5eb80 = iRam0000000000b5eb80 + 1;
        func_0x00339da8(0xb5ead8);
        plVar4 = alStack_78;
        FUN_003414dc();
      }
    }
    lStack_80 = 0x7fffffffffffffff;
LAB_003d037c:
    lVar2 = lStack_80;
    alStack_78[0] = lStack_80;
    func_0x00339d8c(0xb5ead8);
    if (cRam0000000000b5eb78 != '\x01') {
      func_0x00339da8(0xb5ead8);
      func_0x00339d8c(0xb5ead8);
      iRam0000000000b5eb80 = iRam0000000000b5eb80 + -1;
      iRam0000000000b5eb7c = iRam0000000000b5eb7c + -1;
      if (iRam0000000000b5eb7c == 0) {
        FUN_00339f68(0xb5eb48);
      }
      *(long *)(param_1 + 0x20) = lRam0000000000b5eb88;
      lRam0000000000b5eb88 = param_1;
      func_0x00339da8(0xb5ead8);
      FUN_00341470(alStack_c8);
      return;
    }
    if ((bRam0000000000b5eba0 & 1) == 0) {
      lVar6 = lRam0000000000b5eba8 + -1;
      if (lVar2 != 0x7fffffffffffffff) {
        if ((bRam0000000000b5eb90 == 1) && (lRam0000000000b5eb98 <= lVar2)) {
          alStack_78[0] = 0x7fffffffffffffff;
        }
        else {
          lVar6 = lRam0000000000b5eba8 + 1;
          bRam0000000000b5eb90 = 1;
          lRam0000000000b5eb98 = lVar2;
          lRam0000000000b5eba8 = lVar6;
        }
      }
      plVar4 = alStack_78;
      uVar5 = 0;
      FUN_003b8d70(plVar4,0);
      FUN_00339e80(0xb5eb18,0xb5ead8,plVar4,uVar5);
      if (lVar6 == lRam0000000000b5eba8) {
        lRam0000000000b5ebb0 = lRam0000000000b5ebb0 + 1;
        bRam0000000000b5eb90 = 0;
        lRam0000000000b5eb98 = 0x7fffffffffffffff;
      }
      if (bRam0000000000b5eba0 == 1) goto LAB_003d0494;
    }
    else {
LAB_003d0494:
      func_0x003cf060();
      bRam0000000000b5eba0 = 0;
    }
    plVar4 = plVar1;
    func_0x00339da8();
  } while( true );
}



/* Entry: 003d055c; end: 003d05bf;  */

/* WARNING: Possible PIC construction at 0x003d0580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003d0584) */
/* WARNING: Removing unreachable block (ram,0x003d05a0) */
/* WARNING: Removing unreachable block (ram,0x00339d8c) */
/* WARNING: Removing unreachable block (ram,0x00339da4) */
/* WARNING: Removing unreachable block (ram,0x00339d9c) */
/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003d055c(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2d8 [2];
  char cStack_2c1;
  undefined1 auStack_2c0 [56];
  undefined8 uStack_288;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  ulong auStack_238 [2];
  undefined7 *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  code *pcStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  byte abStack_188 [64];
  long lStack_148;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  byte abStack_78 [16];
  long lStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  if (lRam0000000000b5eb88 == 0) {
    return param_1;
  }
  lRam0000000000b5eb88 = 0;
  pbVar7 = (byte *)0xb5ead8;
  uStack_28 = 0x3d0584;
  _pthread_mutex_unlock();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770db4();
  uStack_38 = 0x339dc4;
  puStack_40 = (undefined1 *)&puStack_30;
  _pthread_mutex_trylock();
  if (((uint)pbVar7 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar7 == 0);
  }
  func_0x00770de8();
  pcStack_48 = FUN_00339df0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar15 = abStack_78;
  puStack_50 = (undefined1 *)&puStack_40;
  _pthread_condattr_init();
  if ((int)pbVar15 == 0) {
    param_2 = abStack_78;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
    pbVar7 = pbVar15;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_00339e64;
  ppuStack_90 = &puStack_50;
  _pthread_cond_destroy();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770e84();
  pcStack_98 = FUN_00339e80;
  uVar8 = (ulong)param_4 >> 0x20;
  pbVar15 = param_2;
  puStack_a0 = (undefined1 *)&ppuStack_90;
  func_0x0033a068(uVar8);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar8);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar8 = (ulong)param_4 >> 0x20;
    pbVar15 = param_4;
    FUN_0033a598(uVar8);
    FUN_0033a01c(param_3,param_4,uVar8);
    lStack_c8 = (long)(int)param_4;
    uStack_d0 = param_3;
    _pthread_cond_timedwait(pbVar7,param_2,&uStack_d0);
  }
  if (((uint)pbVar7 < 0x3d) && ((1L << ((ulong)pbVar7 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar7 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_d8 = FUN_00339f68;
  ppuStack_e0 = &puStack_a0;
  _pthread_cond_signal();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770eec();
  uStack_e8 = 0x339f84;
  puStack_f0 = (undefined1 *)&ppuStack_e0;
  _pthread_cond_broadcast();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f20();
  uStack_f8 = 0x339fa0;
  puStack_100 = (undefined1 *)&puStack_f0;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_108 = FUN_00339fbc;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = param_2;
  puStack_110 = (undefined1 *)&puStack_100;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_190 = &puStack_100;
    pbVar1 = abStack_188;
    _vsnprintf(pbVar1,0x40,pbVar15,&puStack_100);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar15 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar15 = (byte *)0x0;
        unaff_x23 = abStack_188;
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_190 = &puStack_100;
        _vsnprintf();
        unaff_x23 = pbVar15;
      }
    }
    pbVar9 = param_2;
    FUN_00338e80(pbVar7,param_2,2,unaff_x23);
    pbVar1 = pbVar15;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_1a8 = 2;
  pcStack_198 = FUN_00339178;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1d0 = unaff_x24;
  pbStack_1c8 = unaff_x23;
  pbStack_1c0 = pbVar15;
  pbStack_1b8 = pbVar7;
  pbStack_1b0 = param_2;
  ppuStack_1a0 = &puStack_110;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar3 = lVar14;
  uStack_288 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar3 != 0) {
    lVar14 = lVar3 + 1;
  }
  puVar4 = &uStack_288;
  _localtime_r(puVar4,auStack_2c0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_278 = 0x656d69746c6163;
    uStack_271 = 0;
    uStack_280 = 0x6c3a726f727265;
    uStack_279 = 0x6f;
  }
  else {
    puVar5 = &uStack_280;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2c0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_280 = 0x733a726f727265;
      uStack_279 = 0x74;
      uStack_278 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar6;
  _pthread_self();
  auStack_238[1] = 0x560e98;
  puStack_228 = &uStack_280;
  uStack_220 = 0x560e98;
  uStack_218 = (ulong)pbVar9 & 0xffffffff;
  uStack_210 = 0x5606ac;
  pcStack_200 = FUN_00560738;
  uStack_1f0 = 0x560e98;
  uStack_1e8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1e0 = 0x5606ac;
  puVar12 = auStack_238;
  auStack_238[0] = uVar6;
  uStack_208 = uVar8;
  lStack_1f8 = lVar14;
  FUN_0056189c(apbStack_2d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_238[0] = auStack_238[0] & 0xffffffffffffff00;
    uStack_220 = uStack_220 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_238);
    if ((char)uStack_220 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2c1 < '\0') {
    pbVar7 = apbStack_2d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_2c1 < '\0') {
    __ZdlPv(apbStack_2d8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar8 = (ulong)pcVar10 >> 2;
    pbVar15 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar8 = uVar8 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar8 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar8 = (ulong)pcVar10 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar7[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar7) * 0x16a88000 | (uVar13 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003d05c0; end: 003d05d7;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003d05c0(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

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



/* Entry: 003d05d8; end: 003d0643;  */

void FUN_003d05d8(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_b0 [4];
  ushort uStack_ac;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    pcVar2 = (char *)(param_1 + 2);
    if ((((*pcVar2 != '\0') || (*(char *)(param_1 + 3) == '\0')) &&
        (pcVar1 = pcVar2, _stat(pcVar2,auStack_b0), (int)pcVar1 == 0)) &&
       ((uStack_ac & 0xf000) == 0xc000)) {
      _unlink(pcVar2);
    }
  }
  return;
}



/* Entry: 003d0644; end: 003d064b;  */

undefined8 FUN_003d0644(void)

{
  return 0;
}



/* Entry: 003d064c; end: 003d079f;  */

void FUN_003d064c(long *param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 uStack_141;
  uint *puStack_140;
  int *piStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char *pcStack_120;
  undefined1 uStack_111;
  long lStack_110;
  undefined1 auStack_108 [128];
  long lStack_88;
  undefined8 *puStack_80;
  uint *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  char *pcStack_60;
  ulong uStack_58;
  long lStack_48;
  uint auStack_40 [2];
  long lStack_38;
  uint uStack_30;
  uint uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = &uStack_30;
  _pipe();
  if ((int)puVar5 == 0) {
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    puVar5 = (uint *)(ulong)uStack_30;
    FUN_003c4e4c(&lStack_48,puVar5,1);
    lStack_38 = lStack_48;
    if (lStack_48 == 0) {
      puVar5 = (uint *)(ulong)uStack_2c;
      FUN_003c4e4c(&lStack_48,puVar5,1);
      lStack_38 = lStack_48;
      if (lStack_48 == 0) {
        *param_2 = CONCAT44(uStack_2c,uStack_30);
      }
    }
  }
  else {
    ___error();
    param_2 = (undefined8 *)(ulong)*puVar5;
    ___error();
    uVar3 = (ulong)*puVar5;
    _strerror();
    pcVar4 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/wakeup_fd_pipe.cc"
    ;
    pcStack_60 = (char *)param_2;
    uStack_58 = uVar3;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/wakeup_fd_pipe.cc"
                 ,0x27,2,"pipe creation failed (%d): %s");
    ___error();
    puVar5 = auStack_40;
    FUN_003be008(&lStack_38,puVar5,*(undefined4 *)pcVar4,"pipe");
    if (lStack_38 == 0) {
      pcStack_60 = "!GRPC_ERROR_IS_NONE(error)";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x3d0708);
      (*pcVar2)();
    }
  }
  *param_1 = lStack_38;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_0033c494(auStack_40);
  puVar6 = puVar5;
  __Unwind_Resume();
  puStack_80 = param_2;
  puStack_78 = puVar5;
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_003d07a0;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    do {
      piVar7 = (int *)(ulong)*puVar6;
      _read(piVar7,auStack_108,0x80);
    } while (0 < (long)piVar7);
    if (piVar7 == (int *)0x0) goto LAB_003d07fc;
    ___error();
  } while (*piVar7 == 4);
  if (*piVar7 == 0x23) {
LAB_003d07fc:
    *extraout_x8 = 0;
  }
  else {
    ___error();
    iVar1 = *piVar7;
    piVar7 = (int *)&uStack_111;
    FUN_003be008(&lStack_110,piVar7,iVar1,"read");
    if (lStack_110 == 0) {
      pcStack_120 = "!GRPC_ERROR_IS_NONE(error)";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x3d0884);
      (*pcVar2)();
    }
    *extraout_x8 = lStack_110;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  piVar8 = piVar7;
  __Unwind_Resume();
  pcStack_128 = FUN_003d08a4;
  uStack_141 = 0;
  puStack_140 = puVar6;
  piStack_138 = piVar7;
  ppuStack_130 = &puStack_70;
  do {
    piVar7 = (int *)(ulong)(uint)piVar8[1];
    _write(piVar7,&uStack_141,1);
    if (piVar7 == (int *)((long)&MACH_HEADER.magic + 1)) break;
    ___error();
  } while (*piVar7 == 4);
  *extraout_x8_00 = 0;
  return;
}



/* Entry: 003d07a0; end: 003d08a3;  */

void FUN_003d07a0(long *param_1,uint *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *extraout_x8;
  undefined1 uStack_e1;
  uint *puStack_e0;
  int *piStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char *pcStack_c0;
  undefined1 uStack_b1;
  long lStack_b0;
  undefined1 auStack_a8 [128];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  do {
    do {
      piVar3 = (int *)(ulong)*param_2;
      _read(piVar3,auStack_a8,0x80);
    } while (0 < (long)piVar3);
    if (piVar3 == (int *)0x0) goto LAB_003d07fc;
    ___error();
  } while (*piVar3 == 4);
  if (*piVar3 == 0x23) {
LAB_003d07fc:
    *param_1 = 0;
  }
  else {
    ___error();
    iVar1 = *piVar3;
    piVar3 = (int *)&uStack_b1;
    FUN_003be008(&lStack_b0,piVar3,iVar1,"read");
    if (lStack_b0 == 0) {
      pcStack_c0 = "!GRPC_ERROR_IS_NONE(error)";
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
                   ,0xd5,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x3d0884);
      (*pcVar2)();
    }
    *param_1 = lStack_b0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  piVar4 = piVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_003d08a4;
  uStack_e1 = 0;
  puStack_e0 = param_2;
  piStack_d8 = piVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  do {
    piVar3 = (int *)(ulong)(uint)piVar4[1];
    _write(piVar3,&uStack_e1,1);
    if (piVar3 == (int *)((long)&MACH_HEADER.magic + 1)) break;
    ___error();
  } while (*piVar3 == 4);
  *extraout_x8 = 0;
  return;
}



/* Entry: 003d08a4; end: 003d0937;  */

void FUN_003d08a4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  do {
    piVar1 = (int *)(ulong)*(uint *)(param_2 + 4);
    _write(piVar1,&uStack_21,1);
    if (piVar1 == (int *)((long)&MACH_HEADER.magic + 1)) break;
    ___error();
  } while (*piVar1 == 4);
  *param_1 = 0;
  return;
}



/* Entry: 003d0938; end: 003d09e3;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_003d0938(void)

{
  int iVar1;
  ulong uStack_38;
  ulong auStack_30 [2];
  ulong *puVar2;
  
  auStack_30[1] = 0xffffffffffffffff;
  FUN_003d064c(auStack_30,auStack_30 + 1);
  uStack_38 = 0;
  if (auStack_30[0] == 0) {
    iVar1 = 1;
  }
  else {
    puVar2 = auStack_30;
    FUN_00552b00(puVar2,&uStack_38);
    iVar1 = (int)puVar2;
    if ((uStack_38 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((auStack_30[0] & 1) != 0) {
    FUN_0055293c();
  }
  if (iVar1 != 0) {
    func_0x003d08fc(auStack_30 + 1);
  }
  return iVar1 != 0;
}



/* Entry: 003d09e4; end: 003d0a4f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003d09e4(void)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  code *pcVar8;
  char *pcVar9;
  code *pcVar10;
  uint uVar11;
  ulong *puVar12;
  byte *in_x3;
  uint uVar13;
  ulong uVar14;
  long lVar15;
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
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  byte abStack_98 [64];
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  pbVar7 = (byte *)0xafb038;
  pcVar10 = FUN_003d0a50;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_18 = FUN_00339fbc;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pcVar8 = pcVar10;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    puStack_a0 = &stack0xfffffffffffffff0;
    pbVar1 = abStack_98;
    _vsnprintf(pbVar1,0x40,in_x3,&stack0xfffffffffffffff0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      in_x3 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        in_x3 = (byte *)0x0;
        unaff_x23 = abStack_98;
      }
      else {
        in_x3 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_a0 = &stack0xfffffffffffffff0;
        _vsnprintf();
        unaff_x23 = in_x3;
      }
    }
    pcVar8 = pcVar10;
    FUN_00338e80(pbVar7,pcVar10,2,unaff_x23);
    pbVar1 = in_x3;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_b8 = 2;
  pcStack_a8 = FUN_00339178;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_e0 = unaff_x24;
  pbStack_d8 = unaff_x23;
  pbStack_d0 = in_x3;
  pbStack_c8 = pbVar7;
  pcStack_c0 = pcVar10;
  ppuStack_b0 = &puStack_20;
  FUN_0033a598();
  lVar15 = *(long *)pbVar1;
  lVar3 = lVar15;
  uStack_198 = uVar2;
  _strrchr(lVar15,0x2f);
  if (lVar3 != 0) {
    lVar15 = lVar3 + 1;
  }
  puVar4 = &uStack_198;
  _localtime_r(puVar4,auStack_1d0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_188 = 0x656d69746c6163;
    uStack_181 = 0;
    uStack_190 = 0x6c3a726f727265;
    uStack_189 = 0x6f;
  }
  else {
    puVar5 = &uStack_190;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_1d0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_190 = 0x733a726f727265;
      uStack_189 = 0x74;
      uStack_188 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar14 = uVar6;
  _pthread_self();
  auStack_148[1] = 0x560e98;
  puStack_138 = &uStack_190;
  uStack_130 = 0x560e98;
  uStack_128 = (ulong)pcVar8 & 0xffffffff;
  uStack_120 = 0x5606ac;
  pcStack_110 = FUN_00560738;
  uStack_100 = 0x560e98;
  uStack_f8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_f0 = 0x5606ac;
  puVar12 = auStack_148;
  auStack_148[0] = uVar6;
  uStack_118 = uVar14;
  lStack_108 = lVar15;
  FUN_0056189c(apbStack_1e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_148[0] = auStack_148[0] & 0xffffffffffffff00;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_148);
    if ((char)uStack_130 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1d1 < '\0') {
    pbVar7 = apbStack_1e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1d1 < '\0') {
    __ZdlPv(apbStack_1e8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar9) {
    uVar14 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar14 = uVar14 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar14 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar14 = (ulong)pcVar9 & 3;
  if (uVar14 != 1) {
    if (uVar14 != 2) {
      if (uVar14 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar7[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar7) * 0x16a88000 | (uVar13 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar9;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 003d0a50; end: 003d0abf;  */

void FUN_003d0a50(int param_1)

{
  bool bVar1;
  
  if (iRam0000000000afb030 != 0) {
    FUN_003d0644();
    bVar1 = param_1 != 0;
    param_1 = 0;
    if (bVar1) {
      ppuRam0000000000b5ebc0 = (undefined **)&UNK_009e04b8;
      return;
    }
  }
  if (iRam0000000000afb034 != 0) {
    FUN_003d0938();
    if (param_1 != 0) {
      ppuRam0000000000b5ebc0 = &PTR_FUN_009e04e0;
      return;
    }
  }
  uRam0000000000b5ebb8 = 1;
  return;
}



/* Entry: 003d0ac0; end: 003d0c03;  */

void FUN_003d0ac0(long *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_60 [8];
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = (ulong *)(param_1 + 1);
  do {
    uVar10 = *puVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = uVar10 + 0x1000000000001;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (uVar10 >> 0x30 == 0) {
    plVar5 = *(long **)(param_2 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x30))();
      plVar6 = param_1;
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) goto code_r0x003d0c04;
      goto LAB_003d0bf8;
    }
  }
  else {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 - 0x1000000000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    unaff_x20 = segment_command_00000020.segname + 8;
    __Znwm();
    unaff_x22 = alStack_58;
    FUN_003b2c04(alStack_58,param_2);
    unaff_x20[0] = '\0';
    unaff_x20[1] = '\0';
    unaff_x20[2] = '\0';
    unaff_x20[3] = '\0';
    unaff_x20[4] = '\0';
    unaff_x20[5] = '\0';
    unaff_x20[6] = '\0';
    unaff_x20[7] = '\0';
    FUN_003b2c04(unaff_x20 + 8,alStack_58);
    if (plStack_40 == unaff_x22) {
      lVar9 = 4;
      plStack_40 = alStack_58;
LAB_003d0bb4:
      (**(code **)(*plStack_40 + lVar9 * 8))();
    }
    else if (plStack_40 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_003d0bb4;
    }
    plVar5 = param_1 + 2;
    FUN_0033b3a0(plVar5,unaff_x20);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
LAB_003d0bf8:
    ___stack_chk_fail();
  }
  FUN_0033e390();
  unaff_x30 = FUN_003d0c04;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)auStack_60;
  plVar6 = plVar5;
  unaff_x19 = param_1;
  unaff_x21 = param_2;
  unaff_x29 = puVar1;
code_r0x003d0c04:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(char **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar2 = (ulong *)(plVar6 + 1);
  do {
    do {
      uVar10 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar10 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = uVar10 & 0xffffffffffff;
    if (uVar10 == 2) {
      while (*puVar2 == 0x1000000000001) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
      if ((*puVar2 & 0xffffffffffff) == 0) goto LAB_003d0cf0;
    }
    else if (uVar10 == 1) {
LAB_003d0cf0:
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      return;
    }
    do {
      plVar5 = plVar6 + 2;
      FUN_0033b3e4(plVar6 + 2,(undefined1 *)((long)register0x00000008 + -0x41));
    } while (plVar5 == (long *)0x0);
    plVar7 = (long *)plVar5[4];
    if (plVar7 == (long *)0x0) {
      FUN_0033e390();
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar10 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar10 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 >> 0x30 != 0 || plVar7 == (long *)0x0) || uVar10 != 1) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x003d0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    plVar8 = plVar5 + 1;
    (**(code **)(*plVar7 + 0x30))();
    plVar7 = (long *)plVar5[4];
    if (plVar7 == plVar8) {
      lVar9 = 4;
LAB_003d0cd8:
      (**(code **)(*plVar8 + lVar9 * 8))();
    }
    else if (plVar7 != (long *)0x0) {
      lVar9 = 5;
      plVar8 = plVar7;
      goto LAB_003d0cd8;
    }
    __ZdlPv(plVar5);
  } while( true );
}



/* Entry: 003d0c04; end: 003d0d1f;  */

void FUN_003d0c04(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uStack_41;
  
  puVar1 = (ulong *)(param_1 + 1);
  do {
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = uVar7 & 0xffffffffffff;
    if (uVar7 == 2) {
      while (*puVar1 == 0x1000000000001) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
      if ((*puVar1 & 0xffffffffffff) == 0) goto LAB_003d0cf0;
    }
    else if (uVar7 == 1) {
LAB_003d0cf0:
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x10))(param_1);
      }
      return;
    }
    do {
      plVar4 = param_1 + 2;
      FUN_0033b3e4(param_1 + 2,&uStack_41);
    } while (plVar4 == (long *)0x0);
    plVar5 = (long *)plVar4[4];
    if (plVar5 == (long *)0x0) {
      FUN_0033e390();
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 >> 0x30 != 0 || plVar5 == (long *)0x0) || uVar7 != 1) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x003d0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    plVar6 = plVar4 + 1;
    (**(code **)(*plVar5 + 0x30))();
    plVar5 = (long *)plVar4[4];
    if (plVar5 == plVar6) {
      lVar8 = 4;
LAB_003d0cd8:
      (**(code **)(*plVar6 + lVar8 * 8))();
    }
    else if (plVar5 != (long *)0x0) {
      lVar8 = 5;
      plVar6 = plVar5;
      goto LAB_003d0cd8;
    }
    __ZdlPv(plVar4);
  } while( true );
}



/* Entry: 003d0d20; end: 003d0d57;  */

void FUN_003d0d20(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_1 + 1);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 - 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar4 >> 0x30 != 0 || param_1 == (long *)0x0) || uVar4 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003d0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 003d0d58; end: 003d0daf;  */

undefined8 * FUN_003d0d58(undefined8 *param_1)

{
  dword *pdVar1;
  undefined8 *puVar2;
  
  pdVar1 = &segment_command_00000020.nsects;
  __Znwm();
  *(undefined8 *)(pdVar1 + 6) = 0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined8 *)(pdVar1 + 10) = 0;
  *(undefined8 *)(pdVar1 + 8) = 0;
  *(undefined8 *)(pdVar1 + 0xe) = 0;
  *(undefined8 *)(pdVar1 + 0xc) = 0;
  *(undefined8 *)(pdVar1 + 0x12) = 0;
  *(undefined8 *)(pdVar1 + 0x10) = 0;
  *(undefined ***)pdVar1 = &PTR_FUN_009e0518;
  *(undefined8 *)(pdVar1 + 2) = 1;
  puVar2 = (undefined8 *)(pdVar1 + 0x16);
  *puVar2 = 0;
  *(undefined8 **)(pdVar1 + 4) = puVar2;
  *(undefined8 **)(pdVar1 + 0x14) = puVar2;
  *param_1 = pdVar1;
  return param_1;
}



/* Entry: 003d0db0; end: 003d0deb;  */

long * FUN_003d0db0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 003d0dec; end: 003d0eb7;  */

long * FUN_003d0dec(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long alStack_48 [3];
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = *param_1;
  FUN_003b2c04(alStack_48);
  FUN_003d0ac0(uVar3,alStack_48);
  if (plStack_30 == alStack_48) {
    lVar2 = 4;
    plVar1 = alStack_48;
LAB_003d0e48:
    (**(code **)(*plVar1 + lVar2 * 8))();
  }
  else {
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_003d0e48;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar1;
  }
  ___stack_chk_fail();
  if (plStack_30 == alStack_48) {
    lVar2 = 4;
    plStack_30 = alStack_48;
  }
  else {
    if (plStack_30 == (long *)0x0) goto LAB_003d0eb0;
    lVar2 = 5;
  }
  (**(code **)(*plStack_30 + lVar2 * 8))();
LAB_003d0eb0:
  __Unwind_Resume();
  *plVar1 = (long)&PTR_FUN_009e0518;
  FUN_003bbcd4(plVar1 + 2);
  return plVar1;
}



/* Entry: 003d0eb8; end: 003d0f17;  */

undefined8 * FUN_003d0eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e0518;
  FUN_003bbcd4(param_1 + 2);
  return param_1;
}



/* Entry: 003d0f18; end: 003d1d77;  */

void FUN_003d0f18(undefined4 *param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 *****pppppuVar3;
  int5 iVar4;
  ulong *puVar5;
  code *pcVar6;
  bool bVar7;
  byte **ppbVar8;
  byte *pbVar9;
  ulong **ppuVar10;
  undefined1 auVar11 [4];
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  ulong **ppuStack_240;
  char acStack_238 [31];
  undefined1 uStack_219;
  undefined8 ****ppppuStack_218;
  ulong uStack_210;
  byte bStack_201;
  ulong *puStack_200;
  ulong *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [4];
  undefined4 uStack_1c4;
  short sStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined2 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  char *pcStack_100;
  ulong **ppuStack_f8;
  ulong **ppuStack_f0;
  ulong **ppuStack_e8;
  ulong **ppuStack_e0;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  ulong **ppuStack_a0;
  ulong **ppuStack_98;
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  _auStack_1c8 = 3;
  auStack_198[0] = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  puStack_178 = &uStack_170;
  uStack_170 = 0;
  uStack_168 = 0;
  sStack_1c0 = 0;
  puStack_1b0 = (ulong *)0x0;
  puStack_1a8 = (ulong *)0x0;
  puStack_1b8 = (ulong *)0x0;
  uStack_1a0 = 0;
  lStack_180 = 0;
  uStack_118 = 0;
  lStack_120 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  lStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  puStack_160 = (ulong *)0x0;
  lStack_148 = 0;
  uStack_150 = 0;
  lStack_1d0 = param_3;
  pbStack_1e0 = param_2;
  pbStack_1d8 = param_2;
  if (param_3 != 0) {
LAB_003d0fdc:
    pbVar9 = pbStack_1d8 + 1;
    bVar1 = *pbStack_1d8;
    uVar14 = (ulong)bVar1;
    lStack_1d0 = lStack_1d0 + -1;
    pbStack_1d8 = pbVar9;
    if (bVar1 == 0) {
      lStack_1d0 = 0;
      goto LAB_003d1830;
    }
    auVar11 = auStack_1c8;
    if (bVar1 < 0x5c) {
      if (bVar1 < 0x2d) {
        if ((1L << (uVar14 & 0x3f) & 0x100002600U) != 0) {
          bVar7 = true;
          if (0x1b < (uint)auStack_1c8) goto LAB_003d1880;
          uVar2 = 1 << (ulong)((uint)auStack_1c8 & 0x1f);
          if ((uVar2 & 0xc00000d) == 0) {
            if ((uVar2 & 0x9c00) != 0) {
              FUN_003d1e0c(&pbStack_1e0);
              _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
              goto LAB_003d128c;
            }
            if ((((uVar2 & 0x12) != 0) && (bVar1 == 0x20)) && (sStack_1c0 == 0)) {
              ppbVar8 = &pbStack_1e0;
              FUN_003d1eac(ppbVar8,0x20);
              goto LAB_003d1194;
            }
            goto LAB_003d1880;
          }
          goto LAB_003d128c;
        }
        if (uVar14 == 0x2c) goto LAB_003d10b4;
      }
LAB_003d1060:
      _auStack_1c8 = (uint6)_auStack_1c8;
      if ((uint)auVar11 < 0x1c) {
                    /* WARNING: Could not recover jumptable at 0x003d1088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_007f9bfc + ((ulong)_auStack_1c8 & 0xffffffff) * 2) * 4 +
                  0x3d108c))();
        return;
      }
    }
    else {
      if (bVar1 == 0x5c) {
        if (auStack_1c8 == (undefined1  [4])0x5) {
          if (sStack_1c0 != 0) goto LAB_003d186c;
          ppbVar8 = &pbStack_1e0;
          FUN_003d1eac(ppbVar8,0x5c);
          if ((int)ppbVar8 == 0) goto LAB_003d186c;
          if ((char)uStack_1c4 != '\0') {
            _auStack_1c8 = CONCAT44(uStack_1c4,1);
            goto LAB_003d128c;
          }
          uVar12 = 4;
        }
        else {
          if (auStack_1c8 == (undefined1  [4])0x4) {
            iVar4 = 0;
          }
          else {
            if (auStack_1c8 != (undefined1  [4])0x1) goto LAB_003d186c;
            iVar4 = 1;
          }
          _auStack_1c8 = CONCAT35(uStack_1c4._1_3_,iVar4 << 0x20);
          uVar12 = 5;
        }
      }
      else {
        if ((bVar1 != 0x5d) && (bVar1 != 0x7d)) goto LAB_003d1060;
LAB_003d10b4:
        bVar7 = true;
        if (0x1a < (uint)auStack_1c8) goto LAB_003d1880;
        uVar2 = 1 << (ulong)((uint)auStack_1c8 & 0x1f);
        if ((uVar2 & 0x9c00) == 0) {
          if ((uVar2 & 0x4000009) == 0) {
            if (((uVar2 & 0x12) != 0) && (sStack_1c0 == 0)) {
              ppbVar8 = &pbStack_1e0;
              FUN_003d1eac(ppbVar8,uVar14);
LAB_003d1194:
              bVar7 = true;
              if (((ulong)ppbVar8 & 1) != 0) goto LAB_003d128c;
            }
            goto LAB_003d1880;
          }
          if (bVar1 == 0x2c) {
            if (auStack_1c8 != (undefined1  [4])0x1a) goto LAB_003d1880;
LAB_003d11d8:
            if (lStack_148 == lStack_140) goto LAB_003d1880;
            if (**(int **)(lStack_140 + -8) != 6) {
              if (**(int **)(lStack_140 + -8) == 5) {
                _auStack_1c8 = (ulong)uStack_1c4 << 0x20;
                goto LAB_003d128c;
              }
              goto LAB_003d1880;
            }
            _auStack_1c8 = CONCAT44(uStack_1c4,3);
            goto LAB_003d128c;
          }
        }
        else {
          if (lStack_148 == lStack_140) goto LAB_003d1880;
          if (bVar1 == 0x5d) {
            if (**(int **)(lStack_140 + -8) != 6) goto LAB_003d1880;
          }
          else {
            if (bVar1 != 0x7d) {
              FUN_003d1e0c(&pbStack_1e0);
              auVar11 = (undefined1  [4])0x1a;
              _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
              if (bVar1 == 0x2c) goto LAB_003d11d8;
              goto LAB_003d1204;
            }
            if (**(int **)(lStack_140 + -8) != 5) goto LAB_003d1880;
          }
          FUN_003d1e0c(&pbStack_1e0);
          auVar11 = (undefined1  [4])0x1a;
          _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
        }
LAB_003d1204:
        if (lStack_148 == lStack_140) goto LAB_003d1880;
        if (bVar1 == 0x5d) {
          if (**(int **)(lStack_140 + -8) != 6) goto LAB_003d1880;
          if (auVar11 == (undefined1  [4])0x3) {
LAB_003d1250:
            if (uStack_1c4._1_1_ == '\0') goto LAB_003d1880;
          }
        }
        else if (bVar1 == 0x7d) {
          if (**(int **)(lStack_140 + -8) != 5) goto LAB_003d1880;
          if (auVar11 == (undefined1  [4])0x0) goto LAB_003d1250;
        }
        _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
        lStack_140 = lStack_140 + -8;
        if (lStack_148 != lStack_140) goto LAB_003d128c;
        uVar12 = 0x1b;
      }
      _auStack_1c8 = CONCAT44(uStack_1c4,uVar12);
    }
LAB_003d128c:
    if (lStack_1d0 == 0) goto LAB_003d1830;
    goto LAB_003d0fdc;
  }
LAB_003d1830:
  auVar11 = auStack_1c8;
  if (((uint)auStack_1c8 < 0x10) && ((1 << (ulong)((uint)auStack_1c8 & 0x1f) & 0x9c00U) != 0)) {
    FUN_003d1e0c(&pbStack_1e0);
    auVar11 = (undefined1  [4])0x1a;
    _auStack_1c8 = CONCAT44(uStack_1c4,0x1a);
  }
  if (lStack_148 == lStack_140) {
    bVar7 = ((uint)auVar11 & 0xfffffffe) != 0x1a;
  }
  else {
LAB_003d186c:
    bVar7 = true;
  }
LAB_003d1880:
  if ((char)uStack_1a0 == '\0') {
LAB_003d1988:
    if (bVar7) {
      ppuStack_a0 = (ulong **)0x8ca637;
      ppuStack_98 = (ulong **)((long)&MACH_HEADER.flags + 2);
      pbVar9 = pbStack_1d8 + ~(ulong)pbStack_1e0;
      func_0x00574ad8(pbVar9,auStack_c0);
      lStack_c8 = (long)pbVar9 - (long)auStack_c0;
      puStack_d0 = auStack_c0;
      FUN_00575d30(&ppppuStack_218,&ppuStack_a0,&puStack_d0);
      pppppuVar3 = (undefined8 *****)ppppuStack_218;
      if (-1 < (char)bStack_201) {
        uStack_210 = (ulong)bStack_201;
        pppppuVar3 = &ppppuStack_218;
      }
      acStack_238[8] = '\0';
      acStack_238[9] = '\0';
      acStack_238[10] = '\0';
      acStack_238[0xb] = '\0';
      acStack_238[0xc] = '\0';
      acStack_238[0xd] = '\0';
      acStack_238[0xe] = '\0';
      acStack_238[0xf] = '\0';
      acStack_238[0x10] = '\0';
      acStack_238[0x11] = '\0';
      acStack_238[0x12] = '\0';
      acStack_238[0x13] = '\0';
      acStack_238[0x14] = '\0';
      acStack_238[0x15] = '\0';
      acStack_238[0x16] = '\0';
      acStack_238[0x17] = '\0';
      acStack_238[0] = '\0';
      acStack_238[1] = '\0';
      acStack_238[2] = '\0';
      acStack_238[3] = '\0';
      acStack_238[4] = '\0';
      acStack_238[5] = '\0';
      acStack_238[6] = '\0';
      acStack_238[7] = '\0';
      FUN_003b646c(&puStack_200,2,pppppuVar3,uStack_210,&uStack_219,acStack_238);
      if (puStack_1b0 < puStack_1a8) {
        *puStack_1b0 = (ulong)puStack_200;
        puStack_200 = (ulong *)0x36;
        puStack_1b0 = puStack_1b0 + 1;
      }
      else {
        lVar15 = (long)puStack_1b0 - (long)puStack_1b8 >> 3;
        uVar14 = lVar15 + 1;
        if (uVar14 >> 0x3d != 0) {
          FUN_0035d520(&puStack_1b8);
          goto LAB_003d1c98;
        }
        ppuVar10 = &puStack_1a8;
        uVar13 = (long)puStack_1a8 - (long)puStack_1b8 >> 2;
        if (uVar13 <= uVar14) {
          uVar13 = uVar14;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)puStack_1a8 - (long)puStack_1b8)) {
          uVar13 = 0x1fffffffffffffff;
        }
        ppuStack_e0 = ppuVar10;
        if (uVar13 == 0) {
          pcStack_100 = (char *)0x0;
        }
        else {
          FUN_0035d534();
          pcStack_100 = (char *)ppuVar10;
        }
        ppuStack_f8 = (ulong **)((long)pcStack_100 + lVar15 * 8);
        ppuStack_e8 = (ulong **)((long)pcStack_100 + uVar13 * 8);
        ppuVar10 = ppuStack_f8 + 1;
        *ppuStack_f8 = puStack_200;
        puStack_200 = (ulong *)0x36;
        ppuStack_f0 = ppuVar10;
        FUN_0035d4ac(&puStack_1b8,&pcStack_100);
        puVar5 = puStack_1b0;
        FUN_0035d67c(&pcStack_100);
        puStack_1b0 = puVar5;
        if (((ulong)puStack_200 & 1) != 0) {
          FUN_0055293c();
        }
      }
      pcStack_100 = acStack_238;
      FUN_0033d548(&pcStack_100);
      if ((char)bStack_201 < '\0') {
        __ZdlPv(ppppuStack_218);
      }
    }
    if (puStack_1b8 == puStack_1b0) {
      FUN_00358178(param_1,auStack_198);
      ppuStack_240 = (ulong **)0x0;
    }
    else {
      ppuStack_240 = (ulong **)0x0;
      FUN_003bdf2c(&ppuStack_a0,2,"JSON parsing failed",0x13,&puStack_d0,
                   (long)puStack_1b0 - (long)puStack_1b8 >> 3);
      puVar5 = puStack_1b8;
      if (ppuStack_a0 != (ulong **)0x0) {
        ppuStack_240 = ppuStack_a0;
      }
      if (puStack_1b0 != puStack_1b8) {
        puVar16 = puStack_1b0;
        do {
          puVar16 = puVar16 + -1;
          FUN_0033d5cc(&puStack_1a8,puVar16);
        } while (puVar16 != puVar5);
      }
      puStack_1b0 = puVar5;
    }
    if (lStack_108 < 0) {
      __ZdlPv(uStack_118);
    }
    if (lStack_120 < 0) {
      __ZdlPv(uStack_130);
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    ppuStack_a0 = &puStack_160;
    FUN_0034a050(&ppuStack_a0);
    func_0x003499b4(&puStack_178,uStack_170);
    if (lStack_180 < 0) {
      __ZdlPv(uStack_190);
    }
    ppuStack_a0 = &puStack_1b8;
    FUN_0033d548(&ppuStack_a0);
    ppuVar10 = (ulong **)*param_4;
    if (ppuStack_240 == ppuVar10) {
LAB_003d1c04:
      if (((ulong)ppuVar10 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      *param_4 = ppuStack_240;
      if (((ulong)ppuVar10 & 1) != 0) {
        FUN_0055293c();
        ppuVar10 = (ulong **)0x0;
        goto LAB_003d1c04;
      }
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    puStack_1f8 = (ulong *)0x0;
    FUN_003b646c(&pcStack_100,2,
                 "too many errors encountered during JSON parsing -- fix reported errors and try again to see additional errors"
                 ,0x6d,&ppppuStack_218,&puStack_1f8);
    if (puStack_1b0 < puStack_1a8) {
      *puStack_1b0 = (ulong)pcStack_100;
      pcStack_100 = segment_command_00000020.segname + 0xe;
      puStack_1b0 = puStack_1b0 + 1;
LAB_003d1978:
      ppuStack_a0 = &puStack_1f8;
      FUN_0033d548(&ppuStack_a0);
      goto LAB_003d1988;
    }
    lVar15 = (long)puStack_1b0 - (long)puStack_1b8 >> 3;
    uVar14 = lVar15 + 1;
    if (uVar14 >> 0x3d == 0) {
      ppuVar10 = &puStack_1a8;
      uVar13 = (long)puStack_1a8 - (long)puStack_1b8 >> 2;
      if (uVar13 <= uVar14) {
        uVar13 = uVar14;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)puStack_1a8 - (long)puStack_1b8)) {
        uVar13 = 0x1fffffffffffffff;
      }
      ppuStack_80 = ppuVar10;
      if (uVar13 == 0) {
        ppuStack_a0 = (ulong **)0x0;
      }
      else {
        FUN_0035d534();
        ppuStack_a0 = ppuVar10;
      }
      ppuStack_98 = ppuStack_a0 + lVar15;
      ppuStack_88 = ppuStack_a0 + uVar13;
      ppuVar10 = ppuStack_98 + 1;
      *ppuStack_98 = (ulong *)pcStack_100;
      pcStack_100 = segment_command_00000020.segname + 0xe;
      ppuStack_90 = ppuVar10;
      FUN_0035d4ac(&puStack_1b8,&ppuStack_a0);
      puVar5 = puStack_1b0;
      FUN_0035d67c(&ppuStack_a0);
      puStack_1b0 = puVar5;
      if (((ulong)pcStack_100 & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003d1978;
    }
  }
  FUN_0035d520(&puStack_1b8);
LAB_003d1c98:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3d1c9c);
  (*pcVar6)();
}



/* Entry: 003d1d78; end: 003d1e0b;  */

long FUN_003d1d78(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x80;
  FUN_0034a050(&lStack_28);
  func_0x003499b4(param_1 + 0x68,*(undefined8 *)(param_1 + 0x70));
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  lStack_28 = param_1 + 0x28;
  FUN_0033d548(&lStack_28);
  return param_1;
}



/* Entry: 003d1e0c; end: 003d1eab;  */

void FUN_003d1e0c(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  char cStack_69;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  lVar1 = param_1;
  FUN_003d241c();
  FUN_00358048(auStack_88,param_1 + 200,1);
  FUN_00358178(lVar1,auStack_88);
  puStack_38 = auStack_50;
  FUN_0034a050(&puStack_38);
  func_0x003499b4(auStack_68,uStack_60);
  if (cStack_69 < '\0') {
    __ZdlPv(uStack_80);
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    **(undefined1 **)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xdf) = 0;
  }
  return;
}



/* Entry: 003d1eac; end: 003d1f3f;  */

bool FUN_003d1eac(ulong *param_1,uint param_2)

{
  ulong uVar1;
  ulong ****ppppuVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong ***pppuVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong **ppuVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  ulong ***pppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  ulong *apuStack_a0 [2];
  ulong **ppuStack_90;
  ulong **ppuStack_88;
  ulong **ppuStack_80;
  ulong **ppuStack_78;
  ulong **ppuStack_70;
  long lStack_68;
  
  uVar8 = *(byte *)((long)param_1 + 0x41) - 1;
  if (uVar8 < 3) {
    if ((param_2 & 0xc0) != 0x80) {
      return false;
    }
LAB_003d1f20:
    *(char *)((long)param_1 + 0x41) = (char)uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 0x19,(int)(char)param_2);
    return true;
  }
  if (*(byte *)((long)param_1 + 0x41) == 0) {
    if ((param_2 >> 7 & 1) == 0) {
      uVar8 = 0;
    }
    else if ((param_2 & 0xe0) == 0xc0) {
      uVar8 = 1;
    }
    else if ((param_2 & 0xf0) == 0xe0) {
      uVar8 = 2;
    }
    else {
      if ((param_2 & 0xf8) != 0xf0) {
        return false;
      }
      uVar8 = 3;
    }
    goto LAB_003d1f20;
  }
  _abort();
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar13 = param_1 + 0x13;
  lVar17 = param_1[0x14] - *puVar13;
  if (lVar17 == 0x7f8) {
    puVar13 = param_1 + 5;
    if (param_1[6] - *puVar13 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      ppuStack_80 = (ulong **)(~*param_1 + param_1[1]);
      ppuStack_90 = (ulong **)((long)&section_000000b8.reserved1 + 3);
      ppuStack_88 = (ulong **)0x5606ac;
      ppuStack_78 = (ulong **)0x560a20;
      FUN_0056189c(&pppuStack_b8,"exceeded max stack depth (%d) at index %lu",0x2a,&ppuStack_90,2);
      ppppuVar2 = (ulong ****)pppuStack_b8;
      if (-1 < (char)bStack_a1) {
        uStack_b0 = (ulong)bStack_a1;
        ppppuVar2 = &pppuStack_b8;
      }
      uStack_d0 = 0;
      uStack_c8 = 0;
      puStack_d8 = (ulong *)0x0;
      FUN_003b646c(apuStack_a0,2,ppppuVar2,uStack_b0,&uStack_b9,&puStack_d8);
      pppuVar5 = (ulong ***)(param_1 + 7);
      ppuVar10 = (ulong **)param_1[6];
      if (ppuVar10 < *pppuVar5) {
        *ppuVar10 = apuStack_a0[0];
        apuStack_a0[0] = (ulong *)0x36;
        param_1[6] = (ulong)(ppuVar10 + 1);
      }
      else {
        lVar15 = (long)((long)ppuVar10 - *puVar13) >> 3;
        uVar1 = lVar15 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(puVar13);
          goto LAB_003d22b4;
        }
        uVar9 = (long)*pppuVar5 - *puVar13;
        uVar11 = (long)uVar9 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        ppuStack_70 = (ulong **)pppuVar5;
        if (uVar11 == 0) {
          ppuStack_90 = (ulong **)0x0;
        }
        else {
          FUN_0035d534();
          ppuStack_90 = (ulong **)pppuVar5;
        }
        ppuStack_88 = ppuStack_90 + lVar15;
        ppuStack_78 = ppuStack_90 + uVar11;
        ppuStack_80 = ppuStack_88 + 1;
        *ppuStack_88 = apuStack_a0[0];
        apuStack_a0[0] = (ulong *)0x36;
        FUN_0035d4ac(puVar13,&ppuStack_90);
        puVar13 = (ulong *)param_1[6];
        FUN_0035d67c(&ppuStack_90);
        param_1[6] = (ulong)puVar13;
        if (((ulong)apuStack_a0[0] & 1) != 0) {
          FUN_0055293c();
        }
      }
      ppuStack_90 = &puStack_d8;
      FUN_0033d548(&ppuStack_90);
      if ((char)bStack_a1 < '\0') {
        __ZdlPv(pppuStack_b8);
      }
    }
LAB_003d2260:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return lVar17 != 0x7f8;
    }
    ___stack_chk_fail(lVar17 != 0x7f8);
  }
  else {
    puVar4 = param_1;
    FUN_003d241c();
    if (param_2 == 5) {
      ppuStack_88 = (ulong **)0x0;
      ppuStack_80 = (ulong **)0x0;
      *(undefined4 *)puVar4 = 5;
      ppuVar10 = (ulong **)(puVar4 + 5);
      ppuStack_90 = (ulong **)&ppuStack_88;
      func_0x003499b4(puVar4 + 4,*ppuVar10);
      puVar4[4] = (ulong)ppuStack_90;
      *ppuVar10 = (ulong *)ppuStack_88;
      puVar4[6] = (ulong)ppuStack_80;
      if ((ulong ***)ppuStack_80 == (ulong ***)0x0) {
        puVar4[4] = (ulong)ppuVar10;
      }
      else {
        ppuStack_88[2] = (ulong *)ppuVar10;
        ppuStack_88 = (ulong **)0x0;
        ppuStack_80 = (ulong **)0x0;
        ppuStack_90 = (ulong **)&ppuStack_88;
      }
      func_0x003499b4(&ppuStack_90,ppuStack_88);
    }
    else {
      *(undefined4 *)puVar4 = 6;
      FUN_00349c88(puVar4 + 7);
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      ppuStack_88 = (ulong **)0x0;
      ppuStack_80 = (ulong **)0x0;
      ppuStack_90 = (ulong **)0x0;
      pppuStack_b8 = &ppuStack_90;
      FUN_0034a050(&pppuStack_b8);
    }
    puVar6 = param_1 + 0x15;
    puVar14 = (undefined8 *)param_1[0x14];
    if (puVar14 < (undefined8 *)*puVar6) {
      puVar16 = puVar14 + 1;
      *puVar14 = puVar4;
LAB_003d21e8:
      param_1[0x14] = (ulong)puVar16;
      goto LAB_003d2260;
    }
    lVar15 = (long)((long)puVar14 - *puVar13) >> 3;
    uVar1 = lVar15 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar9 = (long)*puVar6 - *puVar13;
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        puVar6 = (ulong *)0x0;
      }
      else {
        FUN_003d2840();
      }
      puVar12 = puVar6 + lVar15;
      puVar16 = puVar12 + 1;
      *puVar12 = (ulong)puVar4;
      puVar4 = (ulong *)param_1[0x13];
      puVar7 = (ulong *)param_1[0x14];
      if (puVar7 != puVar4) {
        do {
          puVar7 = puVar7 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar7;
        } while (puVar7 != puVar4);
        puVar7 = (ulong *)*puVar13;
      }
      param_1[0x13] = (ulong)puVar12;
      param_1[0x14] = (ulong)puVar16;
      param_1[0x15] = (ulong)(puVar6 + uVar11);
      if (puVar7 != (ulong *)0x0) {
        __ZdlPv();
      }
      goto LAB_003d21e8;
    }
  }
  FUN_003d282c(puVar13);
LAB_003d22b4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x3d22b8);
  (*pcVar3)();
}



/* Entry: 003d1f40; end: 003d231b;  */

void FUN_003d1f40(ulong *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong ***pppuVar4;
  code *pcVar5;
  ulong **ppuVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_a9;
  ulong **ppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  ulong auStack_90 [2];
  ulong **ppuStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar13 = param_1 + 0x13;
  uVar2 = *puVar13;
  uVar3 = param_1[0x14];
  if (uVar3 - uVar2 == 0x7f8) {
    puVar13 = param_1 + 5;
    if (param_1[6] - *puVar13 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      puStack_70 = (ulong *)(~*param_1 + param_1[1]);
      ppuStack_80 = (ulong **)((long)&section_000000b8.reserved1 + 3);
      puStack_78 = (ulong *)0x5606ac;
      puStack_68 = (ulong *)0x560a20;
      FUN_0056189c(&ppuStack_a8,"exceeded max stack depth (%d) at index %lu",0x2a,&ppuStack_80,2);
      pppuVar4 = (ulong ***)ppuStack_a8;
      if (-1 < (char)bStack_91) {
        uStack_a0 = (ulong)bStack_91;
        pppuVar4 = &ppuStack_a8;
      }
      uStack_c0 = 0;
      uStack_b8 = 0;
      puStack_c8 = (ulong *)0x0;
      FUN_003b646c(auStack_90,2,pppuVar4,uStack_a0,&uStack_a9,&puStack_c8);
      ppuVar6 = (ulong **)(param_1 + 7);
      puVar10 = (ulong *)param_1[6];
      if (puVar10 < *ppuVar6) {
        *puVar10 = auStack_90[0];
        auStack_90[0] = 0x36;
        param_1[6] = (ulong)(puVar10 + 1);
      }
      else {
        lVar15 = (long)((long)puVar10 - *puVar13) >> 3;
        uVar1 = lVar15 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(puVar13);
          goto LAB_003d22b4;
        }
        uVar9 = (long)*ppuVar6 - *puVar13;
        uVar11 = (long)uVar9 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        puStack_60 = (ulong *)ppuVar6;
        if (uVar11 == 0) {
          ppuStack_80 = (ulong **)0x0;
        }
        else {
          FUN_0035d534();
          ppuStack_80 = ppuVar6;
        }
        puStack_78 = (ulong *)(ppuStack_80 + lVar15);
        puStack_68 = (ulong *)(ppuStack_80 + uVar11);
        puStack_70 = puStack_78 + 1;
        *puStack_78 = auStack_90[0];
        auStack_90[0] = 0x36;
        FUN_0035d4ac(puVar13,&ppuStack_80);
        puVar13 = (ulong *)param_1[6];
        FUN_0035d67c(&ppuStack_80);
        param_1[6] = (ulong)puVar13;
        if ((auStack_90[0] & 1) != 0) {
          FUN_0055293c();
        }
      }
      ppuStack_80 = &puStack_c8;
      FUN_0033d548(&ppuStack_80);
      if ((char)bStack_91 < '\0') {
        __ZdlPv(ppuStack_a8);
      }
    }
LAB_003d2260:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return;
    }
    ___stack_chk_fail(uVar3 - uVar2 != 0x7f8);
  }
  else {
    puVar10 = param_1;
    FUN_003d241c();
    if (param_2 == 5) {
      puStack_78 = (ulong *)0x0;
      puStack_70 = (ulong *)0x0;
      *(undefined4 *)puVar10 = 5;
      puVar7 = puVar10 + 5;
      ppuStack_80 = &puStack_78;
      func_0x003499b4(puVar10 + 4,*puVar7);
      puVar10[4] = (ulong)ppuStack_80;
      *puVar7 = (ulong)puStack_78;
      puVar10[6] = (ulong)puStack_70;
      if ((ulong **)puStack_70 == (ulong **)0x0) {
        puVar10[4] = (ulong)puVar7;
      }
      else {
        puStack_78[2] = (ulong)puVar7;
        puStack_78 = (ulong *)0x0;
        puStack_70 = (ulong *)0x0;
        ppuStack_80 = &puStack_78;
      }
      func_0x003499b4(&ppuStack_80,puStack_78);
    }
    else {
      *(undefined4 *)puVar10 = 6;
      FUN_00349c88(puVar10 + 7);
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puStack_78 = (ulong *)0x0;
      puStack_70 = (ulong *)0x0;
      ppuStack_80 = (ulong **)0x0;
      ppuStack_a8 = (ulong **)&ppuStack_80;
      FUN_0034a050(&ppuStack_a8);
    }
    puVar7 = param_1 + 0x15;
    puVar14 = (undefined8 *)param_1[0x14];
    if (puVar14 < (undefined8 *)*puVar7) {
      puVar16 = puVar14 + 1;
      *puVar14 = puVar10;
LAB_003d21e8:
      param_1[0x14] = (ulong)puVar16;
      goto LAB_003d2260;
    }
    lVar15 = (long)((long)puVar14 - *puVar13) >> 3;
    uVar1 = lVar15 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar9 = (long)*puVar7 - *puVar13;
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        puVar7 = (ulong *)0x0;
      }
      else {
        FUN_003d2840();
      }
      puVar12 = puVar7 + lVar15;
      puVar16 = puVar12 + 1;
      *puVar12 = (ulong)puVar10;
      puVar10 = (ulong *)param_1[0x13];
      puVar8 = (ulong *)param_1[0x14];
      if (puVar8 != puVar10) {
        do {
          puVar8 = puVar8 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
        } while (puVar8 != puVar10);
        puVar8 = (ulong *)*puVar13;
      }
      param_1[0x13] = (ulong)puVar12;
      param_1[0x14] = (ulong)puVar16;
      param_1[0x15] = (ulong)(puVar7 + uVar11);
      if (puVar8 != (ulong *)0x0) {
        __ZdlPv();
      }
      goto LAB_003d21e8;
    }
  }
  FUN_003d282c(puVar13);
LAB_003d22b4:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x3d22b8);
  (*pcVar5)();
}



/* Entry: 003d231c; end: 003d241b;  */

bool FUN_003d231c(ulong *param_1,uint param_2)

{
  ulong uVar1;
  ulong ******ppppppuVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *****pppppuVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong ****ppppuVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  ulong *****pppppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  ulong ***apppuStack_a0 [2];
  ulong ****ppppuStack_90;
  ulong ****ppppuStack_88;
  ulong ****ppppuStack_80;
  ulong ****ppppuStack_78;
  ulong ****ppppuStack_70;
  long lStack_68;
  
  if (0x7f < param_2) {
    if (param_2 < 0x800) {
      puVar13 = param_1;
      FUN_003d1eac(param_1,param_2 >> 6 | 0xc0);
      if ((int)puVar13 == 0) {
        return false;
      }
      param_2 = param_2 & 0x3f | 0x80;
    }
    else {
      if (param_2 >> 0x10 == 0) {
        puVar13 = param_1;
        FUN_003d1eac(param_1,param_2 >> 0xc | 0xe0);
        if (((int)puVar13 == 0) ||
           (puVar13 = param_1, FUN_003d1eac(param_1,param_2 >> 6 & 0x3f | 0x80),
           ((ulong)puVar13 & 1) == 0)) {
          return false;
        }
      }
      else {
        if (param_2 >> 0x15 != 0) {
          return false;
        }
        puVar13 = param_1;
        FUN_003d1eac(param_1,param_2 >> 0x12 | 0xf0);
        if ((int)puVar13 == 0) {
          return false;
        }
        puVar13 = param_1;
        FUN_003d1eac(param_1,param_2 >> 0xc & 0x3f | 0x80);
        if ((int)puVar13 == 0) {
          return false;
        }
        puVar13 = param_1;
        FUN_003d1eac(param_1,param_2 >> 6 & 0x3f | 0x80);
        if ((int)puVar13 == 0) {
          return false;
        }
      }
      param_2 = param_2 & 0x3f | 0x80;
    }
  }
  uVar8 = *(byte *)((long)param_1 + 0x41) - 1;
  if (uVar8 < 3) {
    if ((param_2 & 0xc0) != 0x80) {
      return false;
    }
LAB_003d1f20:
    *(char *)((long)param_1 + 0x41) = (char)uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_1 + 0x19,(int)(char)param_2);
    return true;
  }
  if (*(byte *)((long)param_1 + 0x41) == 0) {
    if ((param_2 >> 7 & 1) == 0) {
      uVar8 = 0;
    }
    else if ((param_2 & 0xe0) == 0xc0) {
      uVar8 = 1;
    }
    else if ((param_2 & 0xf0) == 0xe0) {
      uVar8 = 2;
    }
    else {
      if ((param_2 & 0xf8) != 0xf0) {
        return false;
      }
      uVar8 = 3;
    }
    goto LAB_003d1f20;
  }
  _abort();
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar13 = param_1 + 0x13;
  lVar17 = param_1[0x14] - *puVar13;
  if (lVar17 == 0x7f8) {
    puVar13 = param_1 + 5;
    if (param_1[6] - *puVar13 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      ppppuStack_80 = (ulong ****)(~*param_1 + param_1[1]);
      ppppuStack_90 = (ulong ****)((long)&section_000000b8.reserved1 + 3);
      ppppuStack_88 = (ulong ****)0x5606ac;
      ppppuStack_78 = (ulong ****)0x560a20;
      FUN_0056189c(&pppppuStack_b8,"exceeded max stack depth (%d) at index %lu",0x2a,&ppppuStack_90,
                   2);
      ppppppuVar2 = (ulong ******)pppppuStack_b8;
      if (-1 < (char)bStack_a1) {
        uStack_b0 = (ulong)bStack_a1;
        ppppppuVar2 = &pppppuStack_b8;
      }
      uStack_d0 = 0;
      uStack_c8 = 0;
      pppuStack_d8 = (ulong ***)0x0;
      FUN_003b646c(apppuStack_a0,2,ppppppuVar2,uStack_b0,&uStack_b9,&pppuStack_d8);
      pppppuVar5 = (ulong *****)(param_1 + 7);
      ppppuVar10 = (ulong ****)param_1[6];
      if (ppppuVar10 < *pppppuVar5) {
        *ppppuVar10 = apppuStack_a0[0];
        apppuStack_a0[0] = (ulong ***)0x36;
        param_1[6] = (ulong)(ppppuVar10 + 1);
      }
      else {
        lVar15 = (long)((long)ppppuVar10 - *puVar13) >> 3;
        uVar1 = lVar15 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_0035d520(puVar13);
          goto LAB_003d22b4;
        }
        uVar9 = (long)*pppppuVar5 - *puVar13;
        uVar11 = (long)uVar9 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        ppppuStack_70 = (ulong ****)pppppuVar5;
        if (uVar11 == 0) {
          ppppuStack_90 = (ulong ****)0x0;
        }
        else {
          FUN_0035d534();
          ppppuStack_90 = (ulong ****)pppppuVar5;
        }
        ppppuStack_88 = ppppuStack_90 + lVar15;
        ppppuStack_78 = ppppuStack_90 + uVar11;
        ppppuStack_80 = ppppuStack_88 + 1;
        *ppppuStack_88 = apppuStack_a0[0];
        apppuStack_a0[0] = (ulong ***)0x36;
        FUN_0035d4ac(puVar13,&ppppuStack_90);
        puVar13 = (ulong *)param_1[6];
        FUN_0035d67c(&ppppuStack_90);
        param_1[6] = (ulong)puVar13;
        if (((ulong)apppuStack_a0[0] & 1) != 0) {
          FUN_0055293c();
        }
      }
      ppppuStack_90 = &pppuStack_d8;
      FUN_0033d548(&ppppuStack_90);
      if ((char)bStack_a1 < '\0') {
        __ZdlPv(pppppuStack_b8);
      }
    }
LAB_003d2260:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return lVar17 != 0x7f8;
    }
    ___stack_chk_fail(lVar17 != 0x7f8);
  }
  else {
    puVar4 = param_1;
    FUN_003d241c();
    if (param_2 == 5) {
      ppppuStack_88 = (ulong ****)0x0;
      ppppuStack_80 = (ulong ****)0x0;
      *(undefined4 *)puVar4 = 5;
      ppppuVar10 = (ulong ****)(puVar4 + 5);
      ppppuStack_90 = (ulong ****)&ppppuStack_88;
      func_0x003499b4(puVar4 + 4,*ppppuVar10);
      puVar4[4] = (ulong)ppppuStack_90;
      *ppppuVar10 = (ulong ***)ppppuStack_88;
      puVar4[6] = (ulong)ppppuStack_80;
      if ((ulong *****)ppppuStack_80 == (ulong *****)0x0) {
        puVar4[4] = (ulong)ppppuVar10;
      }
      else {
        ppppuStack_88[2] = (ulong ***)ppppuVar10;
        ppppuStack_88 = (ulong ****)0x0;
        ppppuStack_80 = (ulong ****)0x0;
        ppppuStack_90 = (ulong ****)&ppppuStack_88;
      }
      func_0x003499b4(&ppppuStack_90,ppppuStack_88);
    }
    else {
      *(undefined4 *)puVar4 = 6;
      FUN_00349c88(puVar4 + 7);
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      ppppuStack_88 = (ulong ****)0x0;
      ppppuStack_80 = (ulong ****)0x0;
      ppppuStack_90 = (ulong ****)0x0;
      pppppuStack_b8 = &ppppuStack_90;
      FUN_0034a050(&pppppuStack_b8);
    }
    puVar6 = param_1 + 0x15;
    puVar14 = (undefined8 *)param_1[0x14];
    if (puVar14 < (undefined8 *)*puVar6) {
      puVar16 = puVar14 + 1;
      *puVar14 = puVar4;
LAB_003d21e8:
      param_1[0x14] = (ulong)puVar16;
      goto LAB_003d2260;
    }
    lVar15 = (long)((long)puVar14 - *puVar13) >> 3;
    uVar1 = lVar15 + 1;
    if (uVar1 >> 0x3d == 0) {
      uVar9 = (long)*puVar6 - *puVar13;
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar1) {
        uVar11 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        puVar6 = (ulong *)0x0;
      }
      else {
        FUN_003d2840();
      }
      puVar12 = puVar6 + lVar15;
      puVar16 = puVar12 + 1;
      *puVar12 = (ulong)puVar4;
      puVar4 = (ulong *)param_1[0x13];
      puVar7 = (ulong *)param_1[0x14];
      if (puVar7 != puVar4) {
        do {
          puVar7 = puVar7 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar7;
        } while (puVar7 != puVar4);
        puVar7 = (ulong *)*puVar13;
      }
      param_1[0x13] = (ulong)puVar12;
      param_1[0x14] = (ulong)puVar16;
      param_1[0x15] = (ulong)(puVar6 + uVar11);
      if (puVar7 != (ulong *)0x0) {
        __ZdlPv();
      }
      goto LAB_003d21e8;
    }
  }
  FUN_003d282c(puVar13);
LAB_003d22b4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x3d22b8);
  (*pcVar3)();
}



/* Entry: 003d241c; end: 003d26f3;  */

void FUN_003d241c(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *unaff_x22;
  long lVar10;
  ulong auStack_b8 [3];
  undefined1 uStack_99;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  ulong auStack_80 [2];
  ulong *puStack_70;
  code *pcStack_68;
  code *pcStack_60;
  ulong *puStack_58;
  ulong *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1[0x13] == param_1[0x14]) {
    param_1 = param_1 + 9;
LAB_003d2648:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return;
    }
    ___stack_chk_fail(param_1);
  }
  else {
    unaff_x22 = *(ulong **)(param_1[0x14] - 8);
    if ((int)*unaff_x22 != 5) {
      if ((int)*unaff_x22 != 6) {
        func_0x007747b8();
        goto LAB_003d268c;
      }
      FUN_003d26f4(unaff_x22 + 7);
      param_1 = (ulong *)(unaff_x22[8] - 0x50);
      goto LAB_003d2648;
    }
    puVar6 = unaff_x22 + 4;
    puVar1 = param_1 + 0x16;
    puVar5 = puVar6;
    FUN_0035d420(puVar6,puVar1);
    if (unaff_x22 + 5 == puVar5) {
LAB_003d2624:
      puStack_70 = puVar1;
      FUN_003583d4(puVar6,puVar1,&UNK_008000a0,&puStack_70,&pppuStack_98);
      param_1 = puVar6 + 7;
      goto LAB_003d2648;
    }
    unaff_x22 = param_1 + 5;
    if (param_1[6] - *unaff_x22 == 0x80) {
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_003d2624;
    }
    pcStack_60 = (code *)(~*param_1 + param_1[1]);
    pcStack_68 = FUN_00561110;
    puStack_58 = (ulong *)0x560a20;
    puStack_70 = puVar1;
    FUN_0056189c(&pppuStack_98,"duplicate key \"%s\" at index %lu",0x1f,&puStack_70,2);
    ppppuVar3 = (undefined8 ****)pppuStack_98;
    if (-1 < (char)bStack_81) {
      uStack_90 = (ulong)bStack_81;
      ppppuVar3 = &pppuStack_98;
    }
    auStack_b8[1] = 0;
    auStack_b8[2] = 0;
    auStack_b8[0] = 0;
    FUN_003b646c(auStack_80,2,ppppuVar3,uStack_90,&uStack_99,auStack_b8);
    puVar5 = param_1 + 7;
    puVar8 = (ulong *)param_1[6];
    if (puVar8 < (ulong *)*puVar5) {
      *puVar8 = auStack_80[0];
      auStack_80[0] = 0x36;
      param_1[6] = (ulong)(puVar8 + 1);
LAB_003d2604:
      puStack_70 = auStack_b8;
      FUN_0033d548(&puStack_70);
      if ((char)bStack_81 < '\0') {
        __ZdlPv(pppuStack_98);
      }
      goto LAB_003d2624;
    }
    lVar10 = (long)((long)puVar8 - *unaff_x22) >> 3;
    uVar2 = lVar10 + 1;
    if (uVar2 >> 0x3d == 0) {
      uVar7 = (long)*puVar5 - *unaff_x22;
      uVar9 = (long)uVar7 >> 2;
      if (uVar9 <= uVar2) {
        uVar9 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar9 = 0x1fffffffffffffff;
      }
      puStack_50 = puVar5;
      if (uVar9 == 0) {
        puStack_70 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_70 = puVar5;
      }
      pcStack_68 = (code *)(puStack_70 + lVar10);
      puStack_58 = puStack_70 + uVar9;
      pcStack_60 = pcStack_68 + 8;
      *(ulong *)pcStack_68 = auStack_80[0];
      auStack_80[0] = 0x36;
      FUN_0035d4ac(unaff_x22,&puStack_70);
      unaff_x22 = (ulong *)param_1[6];
      FUN_0035d67c(&puStack_70);
      param_1[6] = (ulong)unaff_x22;
      if ((auStack_80[0] & 1) != 0) {
        FUN_0055293c();
      }
      goto LAB_003d2604;
    }
  }
  FUN_0035d520(unaff_x22);
LAB_003d268c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3d2690);
  (*pcVar4)();
}



/* Entry: 003d26f4; end: 003d282b;  */

undefined1  [16] FUN_003d26f4(long *param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_e0;
  char *pcStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar6 = param_1 + 2;
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)*plVar6) {
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[4] = puVar13 + 5;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13 = puVar13 + 10;
    param_1[1] = (long)puVar13;
LAB_003d27f8:
    param_1[1] = (long)puVar13;
    auVar24._0_8_ = puVar13 + -10;
    auVar24._8_8_ = param_2;
    return auVar24;
  }
  lVar14 = (long)puVar13 - *param_1 >> 4;
  uVar1 = lVar14 * -0x3333333333333333 + 1;
  if (uVar1 < 0x333333333333334) {
    lVar16 = *plVar6 - *param_1 >> 4;
    uVar17 = lVar16 * -0x6666666666666666;
    if (uVar17 < uVar1 || uVar17 - uVar1 == 0) {
      uVar17 = uVar1;
    }
    if (0x199999999999998 < (ulong)(lVar16 * -0x3333333333333333)) {
      uVar17 = 0x333333333333333;
    }
    plStack_28 = plVar6;
    if (uVar17 == 0) {
      plStack_48 = (long *)0x0;
    }
    else {
      FUN_00349f28();
      plStack_48 = plVar6;
    }
    plStack_40 = plStack_48 + lVar14 * 2;
    plStack_30 = plStack_48 + uVar17 * 10;
    plStack_40[3] = 0;
    plStack_40[2] = 0;
    plStack_40[5] = 0;
    plStack_40[4] = 0;
    plStack_40[1] = 0;
    *plStack_40 = 0;
    plStack_40[6] = 0;
    plStack_40[7] = 0;
    plStack_40[4] = (long)(plStack_40 + 5);
    plStack_40[8] = 0;
    plStack_40[9] = 0;
    plStack_38 = plStack_40 + 10;
    param_2 = (char *)&plStack_48;
    FUN_003a8184(param_1,param_2);
    puVar13 = (undefined8 *)param_1[1];
    FUN_003a833c(&plStack_48);
    goto LAB_003d27f8;
  }
  FUN_00349f14();
  FUN_003a833c(&plStack_48);
  __Unwind_Resume(param_1);
  pcVar7 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar14 = (long)param_2 << 3;
    __Znwm(lVar14);
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = lVar14;
    return auVar25;
  }
  FUN_00349558();
  if (*(int *)pcVar7 == 4) {
    piVar9 = (int *)((long)pcVar7 + 8);
    piVar8 = *(int **)piVar9;
    uVar1 = *(ulong *)((long)pcVar7 + 0x10);
    if (-1 < (char)*(byte *)((long)pcVar7 + 0x1f)) {
      piVar8 = piVar9;
      uVar1 = (ulong)*(byte *)((long)pcVar7 + 0x1f);
    }
    if (*(char *)((long)piVar8 + (uVar1 - 1)) == 's') {
      uStack_e0 = 0x7fffffffffffffff;
      pcVar10 = param_2;
      FUN_003b8f0c(&pcStack_d8,&uStack_e0);
      bVar2 = *(byte *)((long)pcVar7 + 0x1f);
      uVar15 = (ulong)bVar2;
      uVar17 = *(ulong *)((long)pcVar7 + 0x10);
      if (-1 < (char)bVar2) {
        uVar17 = uVar15;
      }
      if (-1 < (char)bStack_c1) {
        uStack_d0 = (ulong)bStack_c1;
      }
      if (uVar17 == uStack_d0) {
        pcVar11 = pcStack_d8;
        if (-1 < (char)bStack_c1) {
          pcVar11 = (char *)&pcStack_d8;
        }
        if ((char)bVar2 < '\0') {
          iVar19 = (int)*(undefined8 *)piVar9;
          _memcmp();
          bVar5 = iVar19 == 0;
          pcVar10 = pcVar11;
        }
        else {
          piVar8 = piVar9;
          if (bVar2 == 0) {
            bVar5 = true;
            pcVar10 = pcVar11;
          }
          else {
            do {
              uVar15 = uVar15 - 1;
              pcVar10 = pcVar11 + 1;
              bVar5 = (char)*piVar8 == *pcVar11;
              if (!bVar5) break;
              pcVar11 = pcVar10;
              piVar8 = (int *)((long)piVar8 + 1);
            } while (uVar15 != 0);
          }
        }
      }
      else {
        bVar5 = false;
      }
      if ((char)bStack_c1 < '\0') {
        __ZdlPv(pcStack_d8);
      }
      if (bVar5) {
        param_2[0] = -1;
        param_2[1] = -1;
        param_2[2] = -1;
        param_2[3] = -1;
        param_2[4] = -1;
        param_2[5] = -1;
        param_2[6] = -1;
        param_2[7] = '\x7f';
        uVar18 = 1;
        param_2 = pcVar10;
        goto LAB_003d295c;
      }
      piVar8 = *(int **)((long)pcVar7 + 8);
      if (-1 < *(char *)((long)pcVar7 + 0x1f)) {
        piVar8 = piVar9;
      }
      FUN_00339490();
      *(char *)((long)piVar8 + (uVar1 - 1)) = '\0';
      pcVar7 = segment_command_00000020.segname + 6;
      piVar9 = piVar8;
      pcStack_d8 = (char *)piVar8;
      _strchr();
      if (piVar9 == (int *)0x0) {
        iVar19 = 0;
LAB_003d2aac:
        if (piVar9 == piVar8) {
          lVar14 = 0;
LAB_003d2ad4:
          *(long *)param_2 = lVar14 + iVar19 / 1000000;
          uVar18 = 1;
        }
        else {
          piVar9 = piVar8;
          FUN_003399d8();
          if ((int)piVar9 != -1) {
            lVar14 = (long)(int)piVar9 * 1000;
            goto LAB_003d2ad4;
          }
          uVar18 = 0;
        }
        param_2 = pcVar7;
        if (piVar8 == (int *)0x0) goto LAB_003d295c;
      }
      else {
        iVar20 = (int)piVar9 + 1;
        *(char *)piVar9 = '\0';
        iVar19 = iVar20;
        FUN_003399d8();
        if (iVar19 != -1) {
          _strlen();
          if (iVar20 < 10) {
            if (iVar20 != 9) {
              iVar20 = 9 - iVar20;
              if (iVar20 < 2) {
                iVar20 = 1;
              }
              uVar3 = iVar20 - 1;
              auVar23._8_4_ = 1;
              auVar23._0_8_ = 0x100000000;
              auVar23._12_4_ = 1;
              auVar22._4_12_ = auVar23._4_12_;
              auVar22._0_4_ = iVar19;
              uVar4 = 0;
              do {
                uVar12 = uVar4;
                auVar24 = auVar22;
                auVar22._0_4_ = auVar24._0_4_ * 10;
                auVar22._4_4_ = auVar24._4_4_ * 10;
                auVar22._8_4_ = auVar24._8_4_ * 10;
                auVar22._12_4_ = auVar24._12_4_ * 10;
                uVar4 = uVar12 + 4;
              } while ((iVar20 + 3U & 0xfffffffc) != uVar12 + 4);
              auVar21._0_4_ = -(uint)(uVar3 < uVar12);
              auVar21._4_4_ = -(uint)(uVar3 < (uVar12 | 1));
              auVar21._8_4_ = -(uint)(uVar3 < (uVar12 | 2));
              auVar21._12_4_ = -(uint)(uVar3 < (uVar12 | 3));
              auVar22 = auVar22 ^ (auVar22 ^ auVar24) & auVar21;
              auVar24 = NEON_ext(auVar22,auVar22,8,1);
              iVar19 = auVar22._0_4_ * auVar24._0_4_ * auVar22._4_4_ * auVar24._4_4_;
            }
            goto LAB_003d2aac;
          }
        }
        param_2 = pcVar7;
        uVar18 = 0;
      }
      pcStack_d8 = (char *)0x0;
      FUN_00338cb8(piVar8);
      goto LAB_003d295c;
    }
  }
  uVar18 = 0;
LAB_003d295c:
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = uVar18;
  return auVar26;
}



/* Entry: 003d282c; end: 003d283f;  */

undefined1  [16] FUN_003d282c(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  char *pcVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_90;
  char *pcStack_88;
  ulong uStack_80;
  byte bStack_71;
  
  pcVar7 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar8 = (long)param_2 << 3;
    __Znwm(lVar8);
    auVar21._8_8_ = param_2;
    auVar21._0_8_ = lVar8;
    return auVar21;
  }
  FUN_00349558();
  if (*(int *)pcVar7 == 4) {
    piVar10 = (int *)((long)pcVar7 + 8);
    piVar9 = *(int **)piVar10;
    uVar4 = *(ulong *)((long)pcVar7 + 0x10);
    if (-1 < (char)*(byte *)((long)pcVar7 + 0x1f)) {
      piVar9 = piVar10;
      uVar4 = (ulong)*(byte *)((long)pcVar7 + 0x1f);
    }
    if (*(char *)((long)piVar9 + (uVar4 - 1)) == 's') {
      uStack_90 = 0x7fffffffffffffff;
      pcVar11 = param_2;
      FUN_003b8f0c(&pcStack_88,&uStack_90);
      bVar2 = *(byte *)((long)pcVar7 + 0x1f);
      uVar14 = (ulong)bVar2;
      uVar1 = *(ulong *)((long)pcVar7 + 0x10);
      if (-1 < (char)bVar2) {
        uVar1 = uVar14;
      }
      if (-1 < (char)bStack_71) {
        uStack_80 = (ulong)bStack_71;
      }
      if (uVar1 == uStack_80) {
        pcVar12 = pcStack_88;
        if (-1 < (char)bStack_71) {
          pcVar12 = (char *)&pcStack_88;
        }
        if ((char)bVar2 < '\0') {
          iVar16 = (int)*(undefined8 *)piVar10;
          _memcmp();
          bVar6 = iVar16 == 0;
          pcVar11 = pcVar12;
        }
        else {
          piVar9 = piVar10;
          if (bVar2 == 0) {
            bVar6 = true;
            pcVar11 = pcVar12;
          }
          else {
            do {
              uVar14 = uVar14 - 1;
              pcVar11 = pcVar12 + 1;
              bVar6 = (char)*piVar9 == *pcVar12;
              if (!bVar6) break;
              pcVar12 = pcVar11;
              piVar9 = (int *)((long)piVar9 + 1);
            } while (uVar14 != 0);
          }
        }
      }
      else {
        bVar6 = false;
      }
      if ((char)bStack_71 < '\0') {
        __ZdlPv(pcStack_88);
      }
      if (bVar6) {
        param_2[0] = -1;
        param_2[1] = -1;
        param_2[2] = -1;
        param_2[3] = -1;
        param_2[4] = -1;
        param_2[5] = -1;
        param_2[6] = -1;
        param_2[7] = '\x7f';
        uVar15 = 1;
        param_2 = pcVar11;
        goto LAB_003d295c;
      }
      piVar9 = *(int **)((long)pcVar7 + 8);
      if (-1 < *(char *)((long)pcVar7 + 0x1f)) {
        piVar9 = piVar10;
      }
      FUN_00339490();
      *(char *)((long)piVar9 + (uVar4 - 1)) = '\0';
      pcVar7 = segment_command_00000020.segname + 6;
      piVar10 = piVar9;
      pcStack_88 = (char *)piVar9;
      _strchr();
      if (piVar10 == (int *)0x0) {
        iVar16 = 0;
LAB_003d2aac:
        if (piVar10 == piVar9) {
          lVar8 = 0;
LAB_003d2ad4:
          *(long *)param_2 = lVar8 + iVar16 / 1000000;
          uVar15 = 1;
        }
        else {
          piVar10 = piVar9;
          FUN_003399d8();
          if ((int)piVar10 != -1) {
            lVar8 = (long)(int)piVar10 * 1000;
            goto LAB_003d2ad4;
          }
          uVar15 = 0;
        }
        param_2 = pcVar7;
        if (piVar9 == (int *)0x0) goto LAB_003d295c;
      }
      else {
        iVar17 = (int)piVar10 + 1;
        *(char *)piVar10 = '\0';
        iVar16 = iVar17;
        FUN_003399d8();
        if (iVar16 != -1) {
          _strlen();
          if (iVar17 < 10) {
            if (iVar17 != 9) {
              iVar17 = 9 - iVar17;
              if (iVar17 < 2) {
                iVar17 = 1;
              }
              uVar3 = iVar17 - 1;
              auVar20._8_4_ = 1;
              auVar20._0_8_ = 0x100000000;
              auVar20._12_4_ = 1;
              auVar19._4_12_ = auVar20._4_12_;
              auVar19._0_4_ = iVar16;
              uVar5 = 0;
              do {
                uVar13 = uVar5;
                auVar21 = auVar19;
                auVar19._0_4_ = auVar21._0_4_ * 10;
                auVar19._4_4_ = auVar21._4_4_ * 10;
                auVar19._8_4_ = auVar21._8_4_ * 10;
                auVar19._12_4_ = auVar21._12_4_ * 10;
                uVar5 = uVar13 + 4;
              } while ((iVar17 + 3U & 0xfffffffc) != uVar13 + 4);
              auVar18._0_4_ = -(uint)(uVar3 < uVar13);
              auVar18._4_4_ = -(uint)(uVar3 < (uVar13 | 1));
              auVar18._8_4_ = -(uint)(uVar3 < (uVar13 | 2));
              auVar18._12_4_ = -(uint)(uVar3 < (uVar13 | 3));
              auVar19 = auVar19 ^ (auVar19 ^ auVar21) & auVar18;
              auVar21 = NEON_ext(auVar19,auVar19,8,1);
              iVar16 = auVar19._0_4_ * auVar21._0_4_ * auVar19._4_4_ * auVar21._4_4_;
            }
            goto LAB_003d2aac;
          }
        }
        param_2 = pcVar7;
        uVar15 = 0;
      }
      pcStack_88 = (char *)0x0;
      FUN_00338cb8(piVar9);
      goto LAB_003d295c;
    }
  }
  uVar15 = 0;
LAB_003d295c:
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = uVar15;
  return auVar22;
}



/* Entry: 003d2840; end: 003d2873;  */

undefined1  [16] FUN_003d2840(int *param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_80;
  char *pcStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar7 = (long)param_2 << 3;
    __Znwm(lVar7);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = lVar7;
    return auVar20;
  }
  FUN_00349558();
  if (*param_1 == 4) {
    piVar9 = param_1 + 2;
    piVar8 = *(int **)piVar9;
    uVar4 = *(ulong *)(param_1 + 4);
    if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
      piVar8 = piVar9;
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x1f);
    }
    if (*(char *)((long)piVar8 + (uVar4 - 1)) == 's') {
      uStack_80 = 0x7fffffffffffffff;
      pcVar10 = param_2;
      FUN_003b8f0c(&pcStack_78,&uStack_80);
      bVar2 = *(byte *)((long)param_1 + 0x1f);
      uVar13 = (ulong)bVar2;
      uVar1 = *(ulong *)(param_1 + 4);
      if (-1 < (char)bVar2) {
        uVar1 = uVar13;
      }
      if (-1 < (char)bStack_61) {
        uStack_70 = (ulong)bStack_61;
      }
      if (uVar1 == uStack_70) {
        pcVar11 = pcStack_78;
        if (-1 < (char)bStack_61) {
          pcVar11 = (char *)&pcStack_78;
        }
        if ((char)bVar2 < '\0') {
          iVar15 = (int)*(undefined8 *)piVar9;
          _memcmp();
          bVar6 = iVar15 == 0;
          pcVar10 = pcVar11;
        }
        else {
          piVar8 = piVar9;
          if (bVar2 == 0) {
            bVar6 = true;
            pcVar10 = pcVar11;
          }
          else {
            do {
              uVar13 = uVar13 - 1;
              pcVar10 = pcVar11 + 1;
              bVar6 = (char)*piVar8 == *pcVar11;
              if (!bVar6) break;
              pcVar11 = pcVar10;
              piVar8 = (int *)((long)piVar8 + 1);
            } while (uVar13 != 0);
          }
        }
      }
      else {
        bVar6 = false;
      }
      if ((char)bStack_61 < '\0') {
        __ZdlPv(pcStack_78);
      }
      if (bVar6) {
        param_2[0] = -1;
        param_2[1] = -1;
        param_2[2] = -1;
        param_2[3] = -1;
        param_2[4] = -1;
        param_2[5] = -1;
        param_2[6] = -1;
        param_2[7] = '\x7f';
        uVar14 = 1;
        param_2 = pcVar10;
        goto LAB_003d295c;
      }
      piVar8 = *(int **)(param_1 + 2);
      if (-1 < *(char *)((long)param_1 + 0x1f)) {
        piVar8 = piVar9;
      }
      FUN_00339490();
      *(undefined1 *)((long)piVar8 + (uVar4 - 1)) = 0;
      pcVar10 = segment_command_00000020.segname + 6;
      piVar9 = piVar8;
      pcStack_78 = (char *)piVar8;
      _strchr();
      if (piVar9 == (int *)0x0) {
        iVar15 = 0;
LAB_003d2aac:
        if (piVar9 == piVar8) {
          lVar7 = 0;
LAB_003d2ad4:
          *(long *)param_2 = lVar7 + iVar15 / 1000000;
          uVar14 = 1;
        }
        else {
          piVar9 = piVar8;
          FUN_003399d8();
          if ((int)piVar9 != -1) {
            lVar7 = (long)(int)piVar9 * 1000;
            goto LAB_003d2ad4;
          }
          uVar14 = 0;
        }
        param_2 = pcVar10;
        if (piVar8 == (int *)0x0) goto LAB_003d295c;
      }
      else {
        iVar16 = (int)piVar9 + 1;
        *(undefined1 *)piVar9 = 0;
        iVar15 = iVar16;
        FUN_003399d8();
        if (iVar15 != -1) {
          _strlen();
          if (iVar16 < 10) {
            if (iVar16 != 9) {
              iVar16 = 9 - iVar16;
              if (iVar16 < 2) {
                iVar16 = 1;
              }
              uVar3 = iVar16 - 1;
              auVar19._8_4_ = 1;
              auVar19._0_8_ = 0x100000000;
              auVar19._12_4_ = 1;
              auVar18._4_12_ = auVar19._4_12_;
              auVar18._0_4_ = iVar15;
              uVar5 = 0;
              do {
                uVar12 = uVar5;
                auVar20 = auVar18;
                auVar18._0_4_ = auVar20._0_4_ * 10;
                auVar18._4_4_ = auVar20._4_4_ * 10;
                auVar18._8_4_ = auVar20._8_4_ * 10;
                auVar18._12_4_ = auVar20._12_4_ * 10;
                uVar5 = uVar12 + 4;
              } while ((iVar16 + 3U & 0xfffffffc) != uVar12 + 4);
              auVar17._0_4_ = -(uint)(uVar3 < uVar12);
              auVar17._4_4_ = -(uint)(uVar3 < (uVar12 | 1));
              auVar17._8_4_ = -(uint)(uVar3 < (uVar12 | 2));
              auVar17._12_4_ = -(uint)(uVar3 < (uVar12 | 3));
              auVar18 = auVar18 ^ (auVar18 ^ auVar20) & auVar17;
              auVar20 = NEON_ext(auVar18,auVar18,8,1);
              iVar15 = auVar18._0_4_ * auVar20._0_4_ * auVar18._4_4_ * auVar20._4_4_;
            }
            goto LAB_003d2aac;
          }
        }
        param_2 = pcVar10;
        uVar14 = 0;
      }
      pcStack_78 = (char *)0x0;
      FUN_00338cb8(piVar8);
      goto LAB_003d295c;
    }
  }
  uVar14 = 0;
LAB_003d295c:
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = uVar14;
  return auVar21;
}



/* Entry: 003d2874; end: 003d2b33;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003d2874(int *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  int ******ppppppiVar7;
  int ******ppppppiVar8;
  int *******pppppppiVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_60;
  int *******pppppppiStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  if (*param_1 != 4) {
    return 0;
  }
  ppppppiVar8 = (int ******)(param_1 + 2);
  ppppppiVar7 = (int ******)*ppppppiVar8;
  uVar4 = *(ulong *)(param_1 + 4);
  if (-1 < (char)*(byte *)((long)param_1 + 0x1f)) {
    ppppppiVar7 = ppppppiVar8;
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x1f);
  }
  if (*(char *)((long)ppppppiVar7 + (uVar4 - 1)) != 's') {
    return 0;
  }
  uStack_60 = 0x7fffffffffffffff;
  FUN_003b8f0c(&pppppppiStack_58,&uStack_60);
  bVar2 = *(byte *)((long)param_1 + 0x1f);
  uVar11 = (ulong)bVar2;
  uVar1 = *(ulong *)(param_1 + 4);
  if (-1 < (char)bVar2) {
    uVar1 = uVar11;
  }
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
  }
  if (uVar1 == uStack_50) {
    pppppppiVar9 = pppppppiStack_58;
    if (-1 < (char)bStack_41) {
      pppppppiVar9 = (int *******)&pppppppiStack_58;
    }
    if ((char)bVar2 < '\0') {
      iVar15 = (int)*ppppppiVar8;
      _memcmp();
      bVar6 = iVar15 == 0;
    }
    else {
      ppppppiVar7 = ppppppiVar8;
      if (bVar2 == 0) {
        bVar6 = true;
      }
      else {
        do {
          uVar11 = uVar11 - 1;
          bVar6 = *(char *)ppppppiVar7 == *(char *)pppppppiVar9;
          if (!bVar6) break;
          pppppppiVar9 = (int *******)((long)pppppppiVar9 + 1);
          ppppppiVar7 = (int ******)((long)ppppppiVar7 + 1);
        } while (uVar11 != 0);
      }
    }
  }
  else {
    bVar6 = false;
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(pppppppiStack_58);
  }
  if (bVar6) {
    *param_2 = 0x7fffffffffffffff;
    return 1;
  }
  ppppppiVar7 = *(int *******)(param_1 + 2);
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    ppppppiVar7 = ppppppiVar8;
  }
  FUN_00339490();
  *(undefined1 *)((long)ppppppiVar7 + (uVar4 - 1)) = 0;
  ppppppiVar8 = ppppppiVar7;
  pppppppiStack_58 = (int *******)ppppppiVar7;
  _strchr();
  if (ppppppiVar8 != (int ******)0x0) {
    iVar15 = (int)ppppppiVar8 + 1;
    *(undefined1 *)ppppppiVar8 = 0;
    iVar14 = iVar15;
    FUN_003399d8();
    if (iVar14 != -1) {
      _strlen();
      if (iVar15 < 10) {
        if (iVar15 != 9) {
          iVar15 = 9 - iVar15;
          if (iVar15 < 2) {
            iVar15 = 1;
          }
          uVar3 = iVar15 - 1;
          auVar18._8_4_ = 1;
          auVar18._0_8_ = 0x100000000;
          auVar18._12_4_ = 1;
          auVar17._4_12_ = auVar18._4_12_;
          auVar17._0_4_ = iVar14;
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            auVar18 = auVar17;
            auVar17._0_4_ = auVar18._0_4_ * 10;
            auVar17._4_4_ = auVar18._4_4_ * 10;
            auVar17._8_4_ = auVar18._8_4_ * 10;
            auVar17._12_4_ = auVar18._12_4_ * 10;
            uVar5 = uVar10 + 4;
          } while ((iVar15 + 3U & 0xfffffffc) != uVar10 + 4);
          auVar16._0_4_ = -(uint)(uVar3 < uVar10);
          auVar16._4_4_ = -(uint)(uVar3 < (uVar10 | 1));
          auVar16._8_4_ = -(uint)(uVar3 < (uVar10 | 2));
          auVar16._12_4_ = -(uint)(uVar3 < (uVar10 | 3));
          auVar17 = auVar17 ^ (auVar17 ^ auVar18) & auVar16;
          auVar18 = NEON_ext(auVar17,auVar17,8,1);
          iVar14 = auVar17._0_4_ * auVar18._0_4_ * auVar17._4_4_ * auVar18._4_4_;
        }
        goto LAB_003d2aac;
      }
    }
    uVar13 = 0;
    goto LAB_003d2b08;
  }
  iVar14 = 0;
LAB_003d2aac:
  if (ppppppiVar8 == ppppppiVar7) {
    lVar12 = 0;
LAB_003d2ad4:
    *param_2 = lVar12 + iVar14 / 1000000;
    uVar13 = 1;
  }
  else {
    ppppppiVar8 = ppppppiVar7;
    FUN_003399d8();
    if ((int)ppppppiVar8 != -1) {
      lVar12 = (long)(int)ppppppiVar8 * 1000;
      goto LAB_003d2ad4;
    }
    uVar13 = 0;
  }
  if (ppppppiVar7 == (int ******)0x0) {
    return uVar13;
  }
LAB_003d2b08:
  pppppppiStack_58 = (int *******)0x0;
  FUN_00338cb8(ppppppiVar7);
  return uVar13;
}



/* Entry: 003d2b34; end: 003d2d73;  */

void FUN_003d2b34(int *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long *unaff_x19;
  long lVar9;
  ulong auStack_138 [3];
  undefined1 uStack_119;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char *pcStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar2 = *param_1;
  if (iVar2 == 6) {
    *param_4 = (long)(param_1 + 0xe);
    param_5 = unaff_x19;
  }
  else {
    *param_4 = 0;
    pcStack_68 = "field:";
    uStack_60 = 6;
    pcStack_c8 = " error:type should be ARRAY";
    uStack_c0 = 0x1b;
    uStack_98 = param_2;
    uStack_90 = param_3;
    FUN_00575ddc(&ppuStack_118,&pcStack_68,&uStack_98,&pcStack_c8);
    pppuVar3 = (undefined8 ***)ppuStack_118;
    if (-1 < (char)bStack_101) {
      uStack_110 = (ulong)bStack_101;
      pppuVar3 = &ppuStack_118;
    }
    auStack_138[1] = 0;
    auStack_138[2] = 0;
    auStack_138[0] = 0;
    FUN_003b646c(&uStack_100,2,pppuVar3,uStack_110,&uStack_119,auStack_138);
    puVar5 = (ulong *)(param_5 + 2);
    puVar7 = (ulong *)param_5[1];
    if (puVar7 < (ulong *)*puVar5) {
      *puVar7 = uStack_100;
      uStack_100 = 0x36;
      param_5[1] = (long)(puVar7 + 1);
    }
    else {
      lVar9 = (long)puVar7 - *param_5 >> 3;
      uVar1 = lVar9 + 1;
      if (uVar1 >> 0x3d != 0) goto LAB_003d2d04;
      uVar6 = (long)*puVar5 - *param_5;
      uVar8 = (long)uVar6 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar8 = 0x1fffffffffffffff;
      }
      puStack_d8 = puVar5;
      if (uVar8 == 0) {
        puStack_f8 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_f8 = puVar5;
      }
      puStack_f0 = puStack_f8 + lVar9;
      puStack_e0 = puStack_f8 + uVar8;
      puStack_e8 = puStack_f0 + 1;
      *puStack_f0 = uStack_100;
      uStack_100 = 0x36;
      FUN_0035d4ac(param_5,&puStack_f8);
      lVar9 = param_5[1];
      FUN_0035d67c(&puStack_f8);
      param_5[1] = lVar9;
      if ((uStack_100 & 1) != 0) {
        FUN_0055293c();
      }
    }
    puStack_f8 = auStack_138;
    FUN_0033d548(&puStack_f8);
    if ((char)bStack_101 < '\0') {
      __ZdlPv(ppuStack_118);
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return;
  }
  ___stack_chk_fail(iVar2 == 6);
LAB_003d2d04:
  FUN_0035d520(param_5);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x3d2d10);
  (*pcVar4)();
}



/* Entry: 003d2d74; end: 003d320f;  */

/* WARNING: Removing unreachable block (ram,0x003d2e3c) */

void FUN_003d2d74(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,long *param_5,
                 int param_6)

{
  undefined8 ******ppppppuVar1;
  code *pcVar2;
  char ******ppppppcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong auStack_180 [6];
  undefined1 uStack_149;
  undefined8 *****pppppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  char *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  char *****pppppcStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x0033b318(&pppppcStack_98);
    goto LAB_003d3164;
  }
  if (param_3 < 0x17) {
    uStack_88 = CONCAT17((char)param_3,(undefined7)uStack_88);
    ppppppcVar3 = &pppppcStack_98;
    if (param_3 != 0) goto LAB_003d2e10;
  }
  else {
    uVar4 = (param_3 & 0xfffffffffffffff8) + 8;
    if ((param_3 | 7) != 0x17) {
      uVar4 = param_3 | 7;
    }
    ppppppcVar3 = (char ******)(uVar4 + 1);
    __Znwm();
    uStack_88 = uVar4 + 1 | 0x8000000000000000;
    pppppcStack_98 = (char *****)ppppppcVar3;
    uStack_90 = param_3;
LAB_003d2e10:
    _memmove(ppppppcVar3,param_2,param_3);
  }
  *(undefined1 *)((long)ppppppcVar3 + param_3) = 0;
  lVar10 = param_1;
  FUN_0035d420(param_1,&pppppcStack_98);
  if (param_1 + 8 == lVar10) {
    if (param_6 != 0) {
      pppppcStack_98 = (char *****)0x8c358e;
      uStack_90 = 6;
      pcStack_f8 = " error:does not exist.";
      uStack_f0 = 0x16;
      uStack_c8 = param_2;
      uStack_c0 = param_3;
      FUN_00575ddc(&pppppuStack_148,&pppppcStack_98,&uStack_c8,&pcStack_f8);
      ppppppuVar1 = (undefined8 ******)pppppuStack_148;
      if (-1 < (char)bStack_131) {
        uStack_140 = (ulong)bStack_131;
        ppppppuVar1 = &pppppuStack_148;
      }
      auStack_180[4] = 0;
      auStack_180[5] = 0;
      auStack_180[3] = 0;
      FUN_003b646c(&uStack_130,2,ppppppuVar1,uStack_140,&uStack_149,auStack_180 + 3);
      puVar6 = (ulong *)(param_5 + 2);
      puVar8 = (ulong *)param_5[1];
      if (puVar8 < (ulong *)*puVar6) {
        *puVar8 = uStack_130;
        uStack_130 = 0x36;
        param_5[1] = (long)(puVar8 + 1);
      }
      else {
        lVar10 = (long)puVar8 - *param_5 >> 3;
        uVar4 = lVar10 + 1;
        if (uVar4 >> 0x3d != 0) {
          FUN_0035d520(param_5);
          goto LAB_003d3164;
        }
        uVar7 = (long)*puVar6 - *param_5;
        uVar9 = (long)uVar7 >> 2;
        if (uVar9 <= uVar4) {
          uVar9 = uVar4;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar9 = 0x1fffffffffffffff;
        }
        puStack_108 = puVar6;
        if (uVar9 == 0) {
          puStack_128 = (ulong *)0x0;
        }
        else {
          FUN_0035d534();
          puStack_128 = puVar6;
        }
        puStack_120 = puStack_128 + lVar10;
        puStack_110 = puStack_128 + uVar9;
        puStack_118 = puStack_120 + 1;
        *puStack_120 = uStack_130;
        uStack_130 = 0x36;
        FUN_0035d4ac(param_5,&puStack_128);
        lVar10 = param_5[1];
        FUN_0035d67c(&puStack_128);
        param_5[1] = lVar10;
        if ((uStack_130 & 1) != 0) {
          FUN_0055293c();
        }
      }
      puVar6 = auStack_180 + 3;
      goto LAB_003d30e8;
    }
LAB_003d3104:
    uVar5 = 0;
LAB_003d3108:
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
      return;
    }
    ___stack_chk_fail(uVar5);
  }
  else {
    uVar4 = lVar10 + 0x38;
    FUN_003d2874(uVar4,param_4);
    if ((uVar4 & 1) != 0) {
      uVar5 = 1;
      goto LAB_003d3108;
    }
    *param_4 = 0x8000000000000000;
    pppppcStack_98 = (char *****)0x8c358e;
    uStack_90 = 6;
    pcStack_f8 = " error:type should be STRING of the form given by google.proto.Duration.";
    uStack_f0 = 0x48;
    uStack_c8 = param_2;
    uStack_c0 = param_3;
    FUN_00575ddc(&pppppuStack_148,&pppppcStack_98,&uStack_c8,&pcStack_f8);
    ppppppuVar1 = (undefined8 ******)pppppuStack_148;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      ppppppuVar1 = &pppppuStack_148;
    }
    auStack_180[1] = 0;
    auStack_180[2] = 0;
    auStack_180[0] = 0;
    FUN_003b646c(&uStack_130,2,ppppppuVar1,uStack_140,&uStack_149,auStack_180);
    puVar6 = (ulong *)(param_5 + 2);
    puVar8 = (ulong *)param_5[1];
    if (puVar8 < (ulong *)*puVar6) {
      *puVar8 = uStack_130;
      uStack_130 = 0x36;
      param_5[1] = (long)(puVar8 + 1);
      puVar6 = auStack_180;
LAB_003d30e8:
      puStack_128 = puVar6;
      FUN_0033d548(&puStack_128);
      if ((char)bStack_131 < '\0') {
        __ZdlPv(pppppuStack_148);
      }
      goto LAB_003d3104;
    }
    lVar10 = (long)puVar8 - *param_5 >> 3;
    uVar4 = lVar10 + 1;
    if (uVar4 >> 0x3d == 0) {
      uVar7 = (long)*puVar6 - *param_5;
      uVar9 = (long)uVar7 >> 2;
      if (uVar9 <= uVar4) {
        uVar9 = uVar4;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar9 = 0x1fffffffffffffff;
      }
      puStack_108 = puVar6;
      if (uVar9 == 0) {
        puStack_128 = (ulong *)0x0;
      }
      else {
        FUN_0035d534();
        puStack_128 = puVar6;
      }
      puStack_120 = puStack_128 + lVar10;
      puStack_110 = puStack_128 + uVar9;
      puStack_118 = puStack_120 + 1;
      *puStack_120 = uStack_130;
      uStack_130 = 0x36;
      FUN_0035d4ac(param_5,&puStack_128);
      lVar10 = param_5[1];
      FUN_0035d67c(&puStack_128);
      param_5[1] = lVar10;
      puVar6 = auStack_180;
      if ((uStack_130 & 1) != 0) {
        FUN_0055293c();
        puVar6 = auStack_180;
      }
      goto LAB_003d30e8;
    }
  }
  FUN_0035d520(param_5);
LAB_003d3164:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3d3168);
  (*pcVar2)();
}



/* Entry: 003d3210; end: 003d328f;  */

dword * FUN_003d3210(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    pdVar4 = &segment_command_00000020.maxprot;
    __Znwm();
    *(undefined ***)pdVar4 = &PTR_FUN_009e05f8;
    *(undefined8 *)(pdVar4 + 2) = 2;
    FUN_00339d50(pdVar4 + 4);
    *(long *)(pdVar4 + 0x14) = param_1;
    *(dword **)(param_1 + 0x58) = pdVar4;
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pdVar4 = *(dword **)(param_1 + 0x58);
  }
  return pdVar4;
}



/* Entry: 003d3290; end: 003d331f;  */

void FUN_003d3290(long param_1)

{
  func_0x003d32b8(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 003d3320; end: 003d33c7;  */

void FUN_003d3320(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar7 = param_1 + 0x10;
  func_0x00339d8c(lVar7);
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_003d338c:
    func_0x00339da8(lVar7);
  }
  else {
    piVar1 = (int *)(*(long *)(param_1 + 0x50) + 0x50);
    iVar6 = *piVar1;
    do {
      while( true ) {
        if (iVar6 == 0) goto LAB_003d338c;
        iVar3 = *piVar1;
        if (iVar3 == iVar6) break;
        ClearExclusiveLocal();
        iVar6 = iVar3;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar6 = iVar3;
    } while (cVar4 != '\0');
    lVar8 = *(long *)(param_1 + 0x50);
    func_0x00339da8(lVar7);
    puVar9 = (undefined8 *)(lVar8 + 8);
    (**(code **)*puVar9)(puVar9);
  }
  plVar2 = (long *)(param_1 + 8);
  do {
    lVar7 = *plVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((param_1 != 0) && (lVar7 == 1)) {
    func_0x00339d70(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003d33c8; end: 003d33cb;  */

void FUN_003d33c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != 0) && (lVar4 == 1)) {
    func_0x00339d70(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003d33cc; end: 003d3423;  */

void FUN_003d33cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != 0) && (lVar4 == 1)) {
    func_0x00339d70(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  return;
}



/* Entry: 003d3424; end: 003d3443;  */

void FUN_003d3424(void)

{
  (*(code *)PTR___tlv_bootstrap_00b2c480)();
  return;
}



/* Entry: 003d3444; end: 003d3473;  */

undefined8 * FUN_003d3444(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_00339d50(param_1 + 3);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  return param_1;
}



/* Entry: 003d3474; end: 003d352b;  */

long * FUN_003d3474(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  undefined1 uStack_28;
  
  if (*param_1 != -0x8000000000000000) {
    plVar1 = param_1 + 3;
    uStack_28 = 0;
    plVar2 = plVar1;
    plStack_30 = plVar1;
    func_0x00339d8c();
    if ((int)param_1[0xb] == 1) {
      FUN_003b2134();
      (**(code **)(*plVar2 + 0x58))();
      if ((int)plVar2 != 0) {
        uStack_28 = 1;
        func_0x00339da8(plVar1);
        FUN_003d352c(param_1);
      }
    }
    FUN_003b3ad8(&plStack_30);
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  func_0x00339d70(param_1 + 3);
  return param_1;
}



/* Entry: 003d352c; end: 003d3597;  */

void FUN_003d352c(long param_1)

{
  undefined8 *puVar1;
  
  func_0x00339d8c(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x58) = 2;
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  func_0x00339da8(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d3580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1);
    return;
  }
  return;
}



/* Entry: 003d3598; end: 003d359b;  */

long * FUN_003d3598(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plStack_30;
  undefined1 uStack_28;
  
  if (*param_1 != -0x8000000000000000) {
    plVar1 = param_1 + 3;
    uStack_28 = 0;
    plVar2 = plVar1;
    plStack_30 = plVar1;
    func_0x00339d8c();
    if ((int)param_1[0xb] == 1) {
      FUN_003b2134();
      (**(code **)(*plVar2 + 0x58))();
      if ((int)plVar2 != 0) {
        uStack_28 = 1;
        func_0x00339da8(plVar1);
        FUN_003d352c(param_1);
      }
    }
    FUN_003b3ad8(&plStack_30);
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  func_0x00339d70(param_1 + 3);
  return param_1;
}



/* Entry: 003d359c; end: 003d37db;  */

void FUN_003d359c(undefined8 *param_1,ulong *param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined4 uVar9;
  long lVar10;
  undefined ***unaff_x23;
  ulong uVar11;
  long *plStack_70;
  undefined **ppuStack_68;
  ulong *puStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  pplVar6 = &plStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuVar1 = (undefined ***)(param_2 + 3);
  pppuVar2 = pppuVar1;
  func_0x00339d8c();
  if ((int)param_2[0xb] == 2) {
LAB_003d366c:
    *param_1 = 0;
    uVar9 = 1;
  }
  else {
    if ((int)param_2[0xb] == 0) {
      func_0x003c1f6c();
      ppuVar3 = *pppuVar2;
      FUN_003c1e28();
      if ((long)*param_2 <= (long)ppuVar3) goto LAB_003d366c;
      *(undefined4 *)(param_2 + 0xb) = 1;
      FUN_003b2134();
      uVar11 = *param_2;
      ppuVar4 = ppuVar3;
      func_0x003c1f6c();
      puVar5 = *ppuVar4;
      FUN_003c1e28();
      plStack_70 = (long *)0x7fffffffffffffff;
      if ((((uVar11 != 0x7fffffffffffffff) && (puVar5 != (undefined *)0x8000000000000001)) &&
          (plStack_70 = (long *)0x8000000000000000, uVar11 != 0x8000000000000000)) &&
         (puVar5 != (undefined *)0x8000000000000000)) {
        if ((long)uVar11 < 1) {
          if ((long)(-0x8000000000000000 - uVar11) <= -(long)puVar5) goto LAB_003d3684;
        }
        else if ((long)(uVar11 ^ 0x7fffffffffffffff) < -(long)puVar5) {
          plStack_70 = (long *)0x7fffffffffffffff;
        }
        else {
LAB_003d3684:
          plStack_70 = (long *)(uVar11 - (long)puVar5);
        }
      }
      FUN_003b8fa4();
      ppuStack_68 = &PTR_FUN_009e0630;
      unaff_x23 = &ppuStack_68;
      puStack_60 = param_2;
      pppuStack_50 = unaff_x23;
      (**(code **)(*ppuVar3 + 0x50))(ppuVar3,pplVar6,&ppuStack_68);
      param_2[1] = (ulong)ppuVar3;
      param_2[2] = (ulong)pplVar6;
      if (pppuStack_50 == unaff_x23) {
        lVar10 = 4;
        pppuVar2 = &ppuStack_68;
      }
      else {
        pppuVar2 = pppuStack_50;
        if (pppuStack_50 == (undefined ***)0x0) goto LAB_003d36f0;
        lVar10 = 5;
      }
      (*(code *)(*pppuVar2)[lVar10])();
    }
LAB_003d36f0:
    FUN_003d3424();
    (**(code **)(**pppuVar2 + 0x28))(&plStack_70);
    plVar7 = (long *)param_2[0xc];
    param_2[0xc] = (ulong)plStack_70;
    plStack_70 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    uVar9 = 0;
  }
  *(undefined4 *)(param_1 + 1) = uVar9;
  pppuVar2 = pppuVar1;
  func_0x00339da8(pppuVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == unaff_x23) {
    lVar10 = 4;
    pppuVar8 = &ppuStack_68;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_003d37b4;
    lVar10 = 5;
    pppuVar8 = pppuStack_50;
  }
  (*(code *)(*pppuVar8)[lVar10])();
LAB_003d37b4:
  func_0x00339da8(pppuVar1);
  __Unwind_Resume(pppuVar2);
  func_0x0040cf10(pppuVar2);
  return;
}



/* Entry: 003d37dc; end: 003d37e3;  */

void FUN_003d37dc(void)

{
  return;
}



/* Entry: 003d37e4; end: 003d3817;  */

void FUN_003d37e4(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009e0630;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003d3818; end: 003d3833;  */

void FUN_003d3818(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009e0630;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003d3834; end: 003d38af;  */

void FUN_003d3834(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_00341380(&uStack_38,0);
  FUN_003413d4(auStack_80);
  FUN_003d352c(uVar1);
  FUN_00341470(auStack_80);
  FUN_003414dc(&uStack_38);
  return;
}



/* Entry: 003d38b0; end: 003d38eb;  */

long FUN_003d38b0(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e0690);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003d38ec; end: 003d390b;  */

undefined ** FUN_003d38ec(void)

{
  return &PTR_DAT_009e0690;
}



/* Entry: 003d390c; end: 003d394f;  */

ulong * FUN_003d390c(ulong *param_1)

{
  ulong *puStack_28;
  
  FUN_003a2a64(param_1[9]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_003d3bc0(param_1 + 4);
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_0034a1ec(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003d3950; end: 003d3953;  */

ulong * FUN_003d3950(ulong *param_1)

{
  ulong *puStack_28;
  
  FUN_003a2a64(param_1[9]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  FUN_003d3bc0(param_1 + 4);
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    FUN_0034a1ec(&puStack_28);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 003d3954; end: 003d3a47;  */

long FUN_003d3954(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  lVar4 = param_1;
  FUN_0035b954();
  uVar6 = *(ulong *)(param_2 + 0x20);
  if (uVar6 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar5 = 0;
    if (*(long *)(param_2 + 0x28) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x28) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar5 = *(undefined8 *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  else {
    *(ulong *)(lVar4 + 0x20) = uVar6;
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
  }
  if (*(char *)(param_2 + 0x47) < '\0') {
    FUN_002971d4((undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30),
                 *(undefined8 *)(param_2 + 0x38));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  FUN_003a277c();
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  return param_1;
}



/* Entry: 003d3a48; end: 003d3adb;  */

long FUN_003d3a48(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  lVar4 = param_1;
  FUN_0035b954();
  uVar6 = *(ulong *)(param_2 + 0x20);
  if (uVar6 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar5 = 0;
    if (*(long *)(param_2 + 0x28) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0x28) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar5 = *(undefined8 *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  else {
    *(ulong *)(lVar4 + 0x20) = uVar6;
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
  }
  if (*(char *)(param_2 + 0x47) < '\0') {
    FUN_002971d4((undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30),
                 *(undefined8 *)(param_2 + 0x38));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  FUN_003a277c();
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  return param_1;
}



/* Entry: 003d3adc; end: 003d3b3b;  */

long FUN_003d3adc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != param_1) {
    FUN_0035bb88(param_1);
    FUN_003d3c28(param_1 + 0x20,param_2 + 0x20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x30,param_2 + 0x30);
    FUN_003a2a64(*(undefined8 *)(param_1 + 0x48));
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    FUN_003a277c();
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  return param_1;
}



/* Entry: 003d3b3c; end: 003d3bbf;  */

long FUN_003d3b3c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0034a2ec();
  FUN_003d3d60(param_1 + 0x20,param_2 + 0x20);
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 0x30) = 0;
  FUN_003a2a64(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  return param_1;
}



/* Entry: 003d3bc0; end: 003d3c27;  */

ulong * FUN_003d3bc0(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    plVar4 = (long *)param_1[1];
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



/* Entry: 003d3c28; end: 003d3c6f;  */

long * FUN_003d3c28(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_003d3c70(param_1,param_2 + 1);
    }
    else {
      FUN_00362ab4(param_1);
    }
  }
  return param_1;
}



/* Entry: 003d3c70; end: 003d3d5f;  */

void FUN_003d3c70(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    if (*param_2 == 0) {
      uVar4 = 0;
    }
    else {
      plVar5 = (long *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar4 = *param_2;
    }
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    param_1[1] = uVar4;
  }
  else {
    param_1[1] = 0;
    if (*param_2 != 0) {
      plVar5 = (long *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar4 = *param_1;
      param_1[1] = *param_2;
      if (uVar4 == 0) {
        return;
      }
    }
    *param_1 = 0;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c(uVar4);
    }
  }
  return;
}



/* Entry: 003d3d60; end: 003d3da7;  */

long * FUN_003d3d60(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_003d3da8(param_1,param_2 + 1);
    }
    else {
      FUN_003d3e58(param_1);
    }
  }
  return param_1;
}



/* Entry: 003d3da8; end: 003d3e57;  */

void FUN_003d3da8(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    uVar4 = *param_2;
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
    param_1[1] = uVar4;
    *param_2 = 0;
  }
  else {
    param_1[1] = 0;
    param_1[1] = *param_2;
    *param_2 = 0;
    *param_1 = 0;
    if ((uVar4 & 1) != 0) {
      FUN_0055293c(uVar4);
    }
  }
  return;
}



/* Entry: 003d3e58; end: 003d3f2b;  */

void FUN_003d3e58(ulong *param_1,ulong *param_2)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  int *piVar13;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulong *puStack_30;
  char *pcStack_28;
  
  if ((*param_1 == 0) && (plVar6 = (long *)param_1[1], plVar6 != (long *)0x0)) {
    plVar2 = plVar6 + 1;
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 == 0) {
      puStack_30 = param_2;
      (**(code **)(*plVar6 + 8))();
      param_2 = puStack_30;
    }
  }
  uVar7 = *param_2;
  *param_2 = 0x36;
  uVar9 = *param_1;
  if (uVar7 == uVar9) {
    if ((uVar7 & 1) != 0) {
      FUN_0055293c();
    }
LAB_003d3ed0:
    uVar7 = *param_1;
  }
  else {
    *param_1 = uVar7;
    pcStack_28 = "";
    if ((uVar9 & 1) != 0) {
      FUN_0055293c(uVar9);
      goto LAB_003d3ed0;
    }
  }
  if (uVar7 != 0) {
    return;
  }
  puStack_30 = (ulong *)0x8e44ab;
  pcStack_28 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_38 = 0x4a;
  uStack_34 = 2;
  FUN_0055159c(&PTR_FUN_00b1e660,&uStack_34,&puStack_30,&uStack_38,&pcStack_28);
  pcVar1 = pcStack_28;
  pcVar8 = pcStack_28;
  _strlen(pcStack_28);
  FUN_005529d0(&puStack_30,0xd,pcVar1,pcVar8);
  puVar10 = (ulong *)*param_1;
  puVar11 = puVar10;
  if (puStack_30 != puVar10) {
    *param_1 = (ulong)puStack_30;
    puStack_30 = (ulong *)0x36;
    if (((ulong)puVar10 & 1) == 0) {
      return;
    }
    piVar13 = (int *)((long)puVar10 - 1);
    if (*piVar13 != 1) {
      do {
        iVar3 = *piVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar5) {
          *piVar13 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar11 = puStack_30;
      if (iVar3 + -1 != 0) goto LAB_00551520;
    }
    plVar6 = *(long **)((long)puVar10 + 0x1f);
    pcVar1 = (char *)((long)puVar10 + 0x1f);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != 0) {
        FUN_00553a40(plVar6);
      }
      __ZdlPv(plVar6);
    }
    if (*(char *)((long)puVar10 + 0x1e) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar10 + 7));
    }
    __ZdlPv(piVar13);
    puVar11 = puStack_30;
  }
LAB_00551520:
  if (((ulong)puVar11 & 1) != 0) {
    piVar13 = (int *)((long)puVar11 - 1);
    if (*piVar13 != 1) {
      do {
        iVar3 = *piVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar5) {
          *piVar13 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 != 0) {
        return;
      }
    }
    plVar6 = *(long **)((long)puVar11 + 0x1f);
    pcVar1 = (char *)((long)puVar11 + 0x1f);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != 0) {
        FUN_00553a40(plVar6);
      }
      __ZdlPv(plVar6);
    }
    if (*(char *)((long)puVar11 + 0x1e) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar11 + 7));
    }
    __ZdlPv(piVar13);
  }
  return;
}



/* Entry: 003d3f2c; end: 003d3fa7;  */

undefined8 * FUN_003d3f2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *param_1 = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_003b1df4(param_1,0);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_1 + 3,"dns:///")
  ;
  return param_1;
}



/* Entry: 003d3fa8; end: 003d3fe3;  */

long FUN_003d3fa8(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_003b1df4(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 003d3fe4; end: 003d3fe7;  */

undefined8 * FUN_003d3fe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = 0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  *param_1 = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_003b1df4(param_1,0);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_1 + 3,"dns:///")
  ;
  return param_1;
}



/* Entry: 003d3fe8; end: 003d407b;  */

ulong FUN_003d3fe8(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plStack_30;
  undefined8 *puStack_28;
  
  uVar2 = 0;
  plVar1 = (long *)*param_2;
  puVar3 = param_2;
  (**(code **)(*plVar1 + 0x10))();
  plStack_30 = plVar1;
  puStack_28 = puVar3;
  FUN_003d4bfc(param_1,&plStack_30,&plStack_30,param_2);
  if ((uVar2 & 1) != 0) {
    return param_1;
  }
  FUN_00774838();
  uVar2 = param_1;
  FUN_003d4d84();
  return (ulong)(param_1 + 8 != uVar2);
}



/* Entry: 003d407c; end: 003d413b;  */

void FUN_003d407c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long alStack_38 [5];
  
  plVar2 = (long *)*param_2;
  plVar1 = param_2 + 1;
  alStack_38[0] = *plVar1;
  lVar3 = param_2[2];
  plStack_40 = alStack_38;
  if (lVar3 != 0) {
    *(long **)(alStack_38[0] + 0x10) = alStack_38;
    *param_2 = (long)plVar1;
    *plVar1 = 0;
    param_2[2] = 0;
    plStack_40 = plVar2;
  }
  lVar6 = param_2[4];
  lVar5 = param_2[3];
  lVar4 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *param_1 = (long)plStack_40;
  plVar1 = param_1 + 1;
  *plVar1 = alStack_38[0];
  param_1[2] = lVar3;
  if (lVar3 == 0) {
    *param_1 = (long)plVar1;
  }
  else {
    *(long **)(alStack_38[0] + 0x10) = plVar1;
    alStack_38[0] = 0;
    plStack_40 = alStack_38;
  }
  alStack_38[1] = 0;
  param_1[4] = lVar6;
  param_1[3] = lVar5;
  param_1[5] = lVar4;
  alStack_38[3] = 0;
  alStack_38[4] = 0;
  alStack_38[2] = 0;
  FUN_003b1df4(&plStack_40,alStack_38[0]);
  return;
}



/* Entry: 003d413c; end: 003d4253;  */

/* WARNING: Removing unreachable block (ram,0x003d4210) */
/* WARNING: Removing unreachable block (ram,0x003d41f0) */
/* WARNING: Removing unreachable block (ram,0x003d41e0) */
/* WARNING: Removing unreachable block (ram,0x003d4200) */

long * FUN_003d413c(long *param_1)

{
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  FUN_003d4254();
  if (param_1 == (long *)0x0) {
    param_1 = (long *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  if (lStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  puStack_38 = &uStack_80;
  FUN_0035af5c(&puStack_38);
  FUN_0035ad28(&puStack_98,uStack_90);
  return param_1;
}



/* Entry: 003d4254; end: 003d46c3;  */

/* WARNING: Removing unreachable block (ram,0x003d45f4) */

long FUN_003d4254(long param_1,undefined8 ****param_2,ulong param_3,long param_4,undefined8 *param_5
                 )

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 auStack_220 [2];
  char cStack_209;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined7 uStack_1e0;
  char cStack_1d9;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  undefined8 ***pppuStack_1c8;
  byte bStack_1b9;
  undefined8 ***pppuStack_140;
  ulong uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined8 *puStack_68;
  code *pcStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pppuStack_140 = param_2;
  uStack_138 = param_3;
  if (param_4 == 0) {
    func_0x00774870();
    goto LAB_003d4628;
  }
  FUN_004011d4(&lStack_1d8,param_2,param_3);
  if (lStack_1d8 == 0) {
    pppuStack_128 = pppuStack_1c8;
    pppuStack_130 = pppuStack_1d0;
    if (-1 < (char)bStack_1b9) {
      pppuStack_128 = (undefined8 ****)(ulong)bStack_1b9;
      pppuStack_130 = &pppuStack_1d0;
    }
    lVar5 = param_1;
    FUN_003d4d84(param_1,&pppuStack_130);
    if ((param_1 + 8 == lVar5) || (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0)) goto LAB_003d42b4;
    if (lStack_1d8 != 0) {
      FUN_0055169c(&lStack_1d8);
      goto LAB_003d4628;
    }
    FUN_0035abb4(param_4,&pppuStack_1d0);
LAB_003d4504:
    FUN_0035afe0(&lStack_1d8);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
      return lVar5;
    }
    ___stack_chk_fail();
  }
  else {
LAB_003d42b4:
    pppuStack_128 = *(undefined8 *****)(param_1 + 0x20);
    pppuStack_130 = *(undefined8 *****)(param_1 + 0x18);
    if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
      pppuStack_128 = (undefined8 ****)(ulong)*(byte *)(param_1 + 0x2f);
      pppuStack_130 = (undefined8 ****)(param_1 + 0x18);
    }
    pppuStack_98 = param_2;
    uStack_90 = param_3;
    FUN_00575d30(&uStack_1f0,&pppuStack_130,&pppuStack_98);
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      __ZdlPv(*param_5);
    }
    param_5[1] = uStack_1e8;
    *param_5 = uStack_1f0;
    param_5[2] = CONCAT17(cStack_1d9,uStack_1e0);
    if ((char)*(byte *)((long)param_5 + 0x17) < '\0') {
      puVar2 = (undefined8 *)*param_5;
      uVar4 = param_5[1];
    }
    else {
      uVar4 = (ulong)*(byte *)((long)param_5 + 0x17);
      puVar2 = param_5;
    }
    FUN_004011d4(&pppuStack_130,puVar2,uVar4);
    if ((undefined8 ****)pppuStack_130 == (undefined8 ****)0x0) {
      uStack_90 = uStack_120;
      pppuStack_98 = pppuStack_128;
      if (-1 < (char)bStack_111) {
        uStack_90 = (ulong)bStack_111;
        pppuStack_98 = &pppuStack_128;
      }
      lVar5 = param_1;
      FUN_003d4d84(param_1,&pppuStack_98);
      if ((param_1 + 8 == lVar5) || (lVar5 = *(long *)(lVar5 + 0x30), lVar5 == 0))
      goto LAB_003d4390;
      if ((undefined8 ****)pppuStack_130 != (undefined8 ****)0x0) {
        FUN_0055169c(&pppuStack_130);
        goto LAB_003d4628;
      }
      FUN_0035abb4(param_4,&pppuStack_128);
LAB_003d44fc:
      FUN_0035afe0(&pppuStack_130);
      goto LAB_003d4504;
    }
LAB_003d4390:
    if (lStack_1d8 != 0) {
      FUN_00552ec8(auStack_208,&lStack_1d8,1);
LAB_003d4420:
      if ((undefined8 ****)pppuStack_130 == (undefined8 ****)0x0) {
        FUN_00353254(auStack_220,"OK");
      }
      else {
        FUN_00552ec8(auStack_220,&pppuStack_130,1);
      }
      pppuStack_98 = &pppuStack_140;
      uStack_90 = 0x561238;
      uStack_88 = auStack_208;
      pcStack_80 = FUN_00561110;
      pcStack_70 = FUN_00561110;
      puStack_68 = auStack_220;
      pcStack_60 = FUN_00561110;
      puStack_78 = param_5;
      FUN_0056189c(&uStack_1f0,"Error parsing URI(s). \'%s\':%s; \'%s\':%s",0x26,&pppuStack_98,4);
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
                   ,0x89,2,"%s");
      if (cStack_1d9 < '\0') {
        __ZdlPv(uStack_1f0);
      }
      if (cStack_209 < '\0') {
        __ZdlPv(auStack_220[0]);
      }
      if (cStack_1f1 < '\0') {
        __ZdlPv(auStack_208[0]);
      }
LAB_003d44f8:
      lVar5 = 0;
      goto LAB_003d44fc;
    }
    if ((undefined8 ****)pppuStack_130 != (undefined8 ****)0x0) {
      FUN_00353254(auStack_208,"OK");
      goto LAB_003d4420;
    }
    if (param_3 < 0x7ffffffffffffff8) {
      if (param_3 < 0x17) {
        uStack_88 = (undefined8 *)CONCAT17((char)param_3,(undefined7)uStack_88);
        ppppuVar3 = &pppuStack_98;
        if (param_3 != 0) goto LAB_003d4598;
      }
      else {
        uVar4 = (param_3 & 0xfffffffffffffff8) + 8;
        if ((param_3 | 7) != 0x17) {
          uVar4 = param_3 | 7;
        }
        ppppuVar3 = (undefined8 ****)(uVar4 + 1);
        __Znwm();
        uStack_88 = (undefined8 *)(uVar4 + 1 | 0x8000000000000000);
        pppuStack_98 = ppppuVar3;
        uStack_90 = param_3;
LAB_003d4598:
        _memmove(ppppuVar3,param_2,param_3);
      }
      *(undefined1 *)((long)ppppuVar3 + param_3) = 0;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
                   ,0x90,2,"Don\'t know how to resolve \'%s\' or \'%s\'.");
      goto LAB_003d44f8;
    }
  }
  func_0x0033b318(&pppuStack_98);
LAB_003d4628:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3d462c);
  (*pcVar1)();
}



/* Entry: 003d46c4; end: 003d48cb;  */

/* WARNING: Removing unreachable block (ram,0x003d4870) */

void FUN_003d46c4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
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
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_80 = (long *)0x0;
  plStack_e8 = &lStack_e0;
  FUN_003d4254();
  if (param_2 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    uStack_a0 = param_5;
    uStack_98 = param_6;
    FUN_003d48cc(&uStack_90,param_7);
    plVar1 = (long *)*param_8;
    *param_8 = 0;
    if (plStack_80 != (long *)0x0) {
      lVar2 = *plStack_80;
      plStack_80 = plVar1;
      (**(code **)(lVar2 + 8))();
      plVar1 = plStack_80;
    }
    plStack_80 = plVar1;
    uStack_140 = plStack_80;
    uStack_1b0 = uStack_f0;
    uStack_1d8 = uStack_118;
    uStack_1e8 = uStack_128;
    uStack_1f0 = uStack_130;
    uStack_1e0 = uStack_120;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_1d0 = uStack_110;
    uStack_1c8 = uStack_108;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    plStack_1a8 = plStack_e8;
    lStack_1a0 = lStack_e0;
    lStack_198 = lStack_d8;
    plVar1 = &lStack_1a0;
    if (lStack_d8 != 0) {
      *(long **)(lStack_e0 + 0x10) = &lStack_1a0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      plVar1 = plStack_1a8;
      plStack_e8 = &lStack_e0;
    }
    plStack_1a8 = plVar1;
    uStack_180 = uStack_c0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_170 = uStack_b0;
    uStack_178 = uStack_b8;
    uStack_168 = uStack_a8;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a8 = 0;
    plStack_80 = (long *)0x0;
    (**(code **)(*param_2 + 0x20))(param_1,param_2,&uStack_1f0);
    FUN_00361fc0(&uStack_1f0);
  }
  FUN_00361fc0(&uStack_130);
  return;
}



/* Entry: 003d48cc; end: 003d492f;  */

undefined8 * FUN_003d48cc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 003d4930; end: 003d4a4b;  */

/* WARNING: Removing unreachable block (ram,0x003d4a10) */
/* WARNING: Removing unreachable block (ram,0x003d49f0) */
/* WARNING: Removing unreachable block (ram,0x003d49e0) */
/* WARNING: Removing unreachable block (ram,0x003d4a00) */

void FUN_003d4930(undefined8 param_1,long *param_2)

{
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  puStack_88 = &uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  FUN_003d4254();
  if (param_2 == (long *)0x0) {
    FUN_00353254(param_1,"");
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_1);
  }
  if (lStack_48 < 0) {
    __ZdlPv(uStack_58);
  }
  puStack_28 = &uStack_70;
  FUN_0035af5c(&puStack_28);
  FUN_0035ad28(&puStack_88,uStack_80);
  return;
}



/* Entry: 003d4a4c; end: 003d4bfb;  */

/* WARNING: Removing unreachable block (ram,0x003d4ac8) */
/* WARNING: Removing unreachable block (ram,0x003d4ad0) */
/* WARNING: Removing unreachable block (ram,0x003d4bac) */
/* WARNING: Removing unreachable block (ram,0x003d4b8c) */
/* WARNING: Removing unreachable block (ram,0x003d4b7c) */
/* WARNING: Removing unreachable block (ram,0x003d4b9c) */

void FUN_003d4a4c(ulong *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_a8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  FUN_003d4254();
  if (uStack_50._7_1_ != '\0') {
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[2] = uStack_50;
    goto LAB_003d4b44;
  }
  if (0x7ffffffffffffff7 < param_4) {
    func_0x0033b318(param_1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x3d4bd8);
    (*pcVar2)();
  }
  if (param_4 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_4;
    puVar3 = param_1;
    if (param_4 != 0) goto LAB_003d4b30;
  }
  else {
    uVar1 = (param_4 & 0xfffffffffffffff8) + 8;
    if ((param_4 | 7) != 0x17) {
      uVar1 = param_4 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    __Znwm();
    param_1[1] = param_4;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
LAB_003d4b30:
    _memmove(puVar3,param_3,param_4);
    param_1 = puVar3;
  }
  *(undefined1 *)((long)param_1 + param_4) = 0;
LAB_003d4b44:
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  puStack_48 = &uStack_90;
  FUN_0035af5c(&puStack_48);
  FUN_0035ad28(&puStack_a8,uStack_a0);
  return;
}



/* Entry: 003d4bfc; end: 003d4d2f;  */

undefined1  [16]
FUN_003d4bfc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x003d4c94(param_1,&uStack_48,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x38;
    __Znwm();
    uVar3 = *param_3;
    *(undefined8 *)(lVar4 + 0x28) = param_3[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    uVar3 = *param_4;
    *param_4 = 0;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    FUN_003d4d30(param_1,uStack_48,plVar2,lVar4);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar4;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 003d4d30; end: 003d4d83;  */

void FUN_003d4d30(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_00340874(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 003d4d84; end: 003d4e0f;  */

long * FUN_003d4d84(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar3 = plVar4;
    do {
      lVar2 = param_1;
      func_0x0034082c(param_1,plVar5 + 4,param_2);
      plVar1 = plVar5 + 1;
      if ((int)lVar2 == 0) {
        plVar3 = plVar5;
        plVar1 = plVar5;
      }
      plVar5 = (long *)*plVar1;
    } while (plVar5 != (long *)0x0);
    if ((plVar3 != plVar4) && (func_0x0034082c(param_1,param_2,plVar3 + 4), (int)param_1 == 0)) {
      return plVar3;
    }
  }
  return plVar4;
}



/* Entry: 003d4e10; end: 003d4e7f;  */

void FUN_003d4e10(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar9 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0x11] = param_3;
  param_1[0x12] = *param_4;
  plVar1 = param_4 + 1;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x13;
  *plVar2 = lVar3;
  lVar4 = param_4[2];
  param_1[0x14] = lVar4;
  if (lVar4 != 0) {
    *(long **)(lVar3 + 0x10) = plVar2;
    *param_4 = plVar1;
    *plVar1 = 0;
    param_4[2] = 0;
    return;
  }
  param_1[0x12] = plVar2;
  return;
}



/* Entry: 003d4e80; end: 003d4fff;  */

undefined8 * FUN_003d4e80(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar8 = param_2[3];
  uVar3 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar11 = param_2[6];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  param_1[3] = uVar8;
  param_1[2] = uVar3;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  uVar8 = param_2[0xb];
  uVar3 = param_2[10];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  uVar12 = param_2[0xf];
  uVar11 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  param_1[0xb] = uVar8;
  param_1[10] = uVar3;
  uVar3 = param_2[0x11];
  FUN_003a277c();
  param_1[0x13] = 0;
  puVar6 = param_1 + 0x12;
  *puVar6 = param_1 + 0x13;
  param_1[0x11] = uVar3;
  param_1[0x14] = 0;
  plVar7 = (long *)param_2[0x12];
  while (plVar7 != param_2 + 0x13) {
    (**(code **)(*(long *)plVar7[5] + 0x10))(&plStack_58);
    plStack_48 = plVar7 + 4;
    puVar4 = puVar6;
    FUN_003d5954(puVar6,plStack_48,&UNK_008000a0,&plStack_48,&uStack_49);
    plVar1 = plStack_58;
    plStack_58 = (long *)0x0;
    plVar5 = (long *)puVar4[5];
    puVar4[5] = plVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar1 = plStack_58;
      plStack_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    plVar1 = (long *)plVar7[1];
    plVar5 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar5[2];
        bVar2 = (long *)*plVar7 != plVar5;
        plVar5 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  return param_1;
}



/* Entry: 003d5000; end: 003d5003;  */

undefined8 * FUN_003d5000(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar8 = param_2[3];
  uVar3 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  uVar11 = param_2[6];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar11;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  param_1[3] = uVar8;
  param_1[2] = uVar3;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  uVar8 = param_2[0xb];
  uVar3 = param_2[10];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  uVar12 = param_2[0xf];
  uVar11 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar12;
  param_1[0xe] = uVar11;
  param_1[0xb] = uVar8;
  param_1[10] = uVar3;
  uVar3 = param_2[0x11];
  FUN_003a277c();
  param_1[0x13] = 0;
  puVar6 = param_1 + 0x12;
  *puVar6 = param_1 + 0x13;
  param_1[0x11] = uVar3;
  param_1[0x14] = 0;
  plVar7 = (long *)param_2[0x12];
  while (plVar7 != param_2 + 0x13) {
    (**(code **)(*(long *)plVar7[5] + 0x10))(&plStack_58);
    plStack_48 = plVar7 + 4;
    puVar4 = puVar6;
    FUN_003d5954(puVar6,plStack_48,&UNK_008000a0,&plStack_48,&uStack_49);
    plVar1 = plStack_58;
    plStack_58 = (long *)0x0;
    plVar5 = (long *)puVar4[5];
    puVar4[5] = plVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar1 = plStack_58;
      plStack_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    plVar1 = (long *)plVar7[1];
    plVar5 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar5[2];
        bVar2 = (long *)*plVar7 != plVar5;
        plVar5 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  return param_1;
}



/* Entry: 003d5004; end: 003d518b;  */

undefined8 * FUN_003d5004(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plStack_58;
  undefined1 uStack_49;
  long *plStack_48;
  
  if (param_2 != param_1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    uVar8 = param_2[3];
    uVar3 = param_2[2];
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar11 = param_2[6];
    uVar13 = param_2[9];
    uVar12 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar11;
    param_1[9] = uVar13;
    param_1[8] = uVar12;
    param_1[3] = uVar8;
    param_1[2] = uVar3;
    param_1[5] = uVar10;
    param_1[4] = uVar9;
    uVar8 = param_2[0xb];
    uVar3 = param_2[10];
    uVar10 = param_2[0xd];
    uVar9 = param_2[0xc];
    uVar12 = param_2[0xf];
    uVar11 = param_2[0xe];
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    param_1[0xd] = uVar10;
    param_1[0xc] = uVar9;
    param_1[0xf] = uVar12;
    param_1[0xe] = uVar11;
    param_1[0xb] = uVar8;
    param_1[10] = uVar3;
    FUN_003a2a64(param_1[0x11]);
    uVar3 = param_2[0x11];
    FUN_003a277c();
    param_1[0x11] = uVar3;
    puVar6 = param_1 + 0x12;
    FUN_0034a294(puVar6,param_1[0x13]);
    param_1[0x12] = param_1 + 0x13;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    plVar7 = (long *)param_2[0x12];
    while (plVar7 != param_2 + 0x13) {
      (**(code **)(*(long *)plVar7[5] + 0x10))(&plStack_58);
      puVar4 = puVar6;
      plStack_48 = plVar7 + 4;
      FUN_003d5954(puVar6,plVar7 + 4,&UNK_008000a0,&plStack_48,&uStack_49);
      plVar1 = plStack_58;
      plStack_58 = (long *)0x0;
      plVar5 = (long *)puVar4[5];
      puVar4[5] = plVar1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
        plVar1 = plStack_58;
        plStack_58 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      plVar1 = (long *)plVar7[1];
      plVar5 = plVar7;
      if ((long *)plVar7[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar5[2];
          bVar2 = (long *)*plVar7 != plVar5;
          plVar5 = plVar7;
        } while (bVar2);
      }
      else {
        do {
          plVar7 = plVar1;
          plVar1 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
  }
  return param_1;
}



/* Entry: 003d518c; end: 003d5203;  */

void FUN_003d518c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  uVar11 = param_2[9];
  uVar10 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  param_1[9] = uVar11;
  param_1[8] = uVar10;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar8 = param_2[0xd];
  uVar7 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar9 = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar1 = param_2 + 0x13;
  lVar3 = *plVar1;
  plVar2 = param_1 + 0x13;
  *plVar2 = lVar3;
  lVar4 = param_2[0x14];
  param_1[0x14] = lVar4;
  if (lVar4 == 0) {
    param_1[0x12] = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    param_2[0x12] = plVar1;
    *plVar1 = 0;
    param_2[0x14] = 0;
  }
  param_2[0x11] = 0;
  return;
}



/* Entry: 003d5204; end: 003d5953;  */

/* WARNING: Removing unreachable block (ram,0x003d52e8) */

void FUN_003d5204(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  dword *pdVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  dword *pdVar15;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  byte bStack_191;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  long alStack_148 [4];
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  dword *pdStack_a0;
  dword *pdStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_003a0930(alStack_148,param_2,0);
  if (alStack_148[0] == 0) {
    plVar13 = alStack_148;
    FUN_00375c3c();
    if (*(char *)((long)plVar13 + 0x17) < '\0') {
      FUN_002971d4(&pdStack_a0,*plVar13,plVar13[1]);
    }
    else {
      pdStack_98 = (dword *)plVar13[1];
      pdStack_a0 = (dword *)*plVar13;
      lStack_90 = plVar13[2];
    }
  }
  else {
    FUN_00552ec8(&pdStack_a0,alStack_148,1);
  }
  pppuStack_d0 = &ppuStack_160;
  ppuStack_160 = (undefined8 ***)0x0;
  pppuStack_158 = (undefined8 ***)0x0;
  pppuStack_150 = (undefined8 ***)0x0;
  pppuStack_c8 = (undefined8 ***)((ulong)pppuStack_c8 & 0xffffffffffffff00);
  pppuVar5 = (undefined8 ***)0x18;
  __Znwm();
  ppppuVar8 = &pppuStack_150;
  pppuStack_150 = pppuVar5 + 3;
  ppppuVar7 = ppppuVar8;
  ppuStack_160 = pppuVar5;
  pppuStack_158 = pppuVar5;
  FUN_003d5a10(ppppuVar8,&pdStack_a0,auStack_88,pppuVar5);
  pppuStack_158 = ppppuVar7;
  if (*(long *)(param_2 + 0x88) == 0) {
LAB_003d544c:
    if (*(long *)(param_2 + 0xa0) != 0) {
      pppuStack_178 = (undefined8 ****)0x0;
      pppuStack_170 = (undefined8 ****)0x0;
      pppuStack_168 = (undefined8 ****)0x0;
      plVar13 = *(long **)(param_2 + 0x90);
      if (plVar13 != (long *)(param_2 + 0x98)) {
        do {
          pdVar15 = (dword *)plVar13[4];
          if (pdVar15 == (dword *)0x0) {
            pdVar6 = (dword *)0x0;
          }
          else {
            pdVar6 = pdVar15;
            _strlen();
          }
          pppuStack_d0 = (undefined8 ***)0x8e52f8;
          pppuStack_c8 = (undefined8 ***)((long)&MACH_HEADER.magic + 1);
          pdStack_a0 = pdVar15;
          pdStack_98 = pdVar6;
          (**(code **)(*(long *)plVar13[5] + 0x20))(&pppuStack_1a8);
          pppuStack_f8 = pppuStack_1a0;
          pppuStack_100 = pppuStack_1a8;
          if (-1 < (char)bStack_191) {
            pppuStack_f8 = (undefined8 ****)(ulong)bStack_191;
            pppuStack_100 = &pppuStack_1a8;
          }
          FUN_00575ddc(&ppuStack_190,&pdStack_a0,&pppuStack_d0,&pppuStack_100);
          if (pppuStack_170 < pppuStack_168) {
            pppuStack_170[2] = ppuStack_180;
            pppuStack_170[1] = ppuStack_188;
            *pppuStack_170 = ppuStack_190;
            ppuStack_188 = (undefined8 ***)0x0;
            ppuStack_180 = (undefined8 ***)0x0;
            ppuStack_190 = (undefined8 ***)0x0;
            pppuStack_170 = pppuStack_170 + 3;
          }
          else {
            lVar9 = (long)pppuStack_170 - (long)pppuStack_178 >> 3;
            uVar1 = lVar9 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar1) {
              FUN_0037b568(&pppuStack_178);
              goto LAB_003d5840;
            }
            lVar11 = (long)pppuStack_168 - (long)pppuStack_178 >> 3;
            uVar12 = lVar11 * 0x5555555555555556;
            if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
              uVar12 = uVar1;
            }
            if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
              uVar12 = 0xaaaaaaaaaaaaaaa;
            }
            pppuStack_108 = &pppuStack_168;
            if (uVar12 == 0) {
              ppppuVar7 = (undefined8 ****)0x0;
            }
            else {
              ppppuVar7 = &pppuStack_168;
              FUN_0037b57c();
            }
            ppppuVar10 = ppppuVar7 + lVar9;
            pppuStack_110 = ppppuVar7 + uVar12 * 3;
            pppuStack_128 = ppppuVar7;
            pppuStack_120 = ppppuVar10;
            ppppuVar10[2] = (undefined8 ***)ppuStack_180;
            ppppuVar10[1] = (undefined8 ***)ppuStack_188;
            *ppppuVar10 = (undefined8 ***)ppuStack_190;
            ppuStack_188 = (undefined8 ***)0x0;
            ppuStack_180 = (undefined8 ***)0x0;
            ppuStack_190 = (undefined8 ***)0x0;
            pppuStack_118 = ppppuVar10 + 3;
            FUN_0045a5fc(&pppuStack_178,&pppuStack_128);
            pppuVar5 = pppuStack_170;
            func_0x00427834(&pppuStack_128);
            pppuStack_170 = pppuVar5;
            if ((long)ppuStack_180 < 0) {
              __ZdlPv(ppuStack_190);
            }
          }
          if ((char)bStack_191 < '\0') {
            __ZdlPv(pppuStack_1a8);
          }
          plVar2 = (long *)plVar13[1];
          plVar14 = plVar13;
          if ((long *)plVar13[1] == (long *)0x0) {
            do {
              plVar13 = (long *)plVar14[2];
              bVar4 = (long *)*plVar13 != plVar14;
              plVar14 = plVar13;
            } while (bVar4);
          }
          else {
            do {
              plVar13 = plVar2;
              plVar2 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
        } while (plVar13 != (long *)(param_2 + 0x98));
      }
      pdStack_a0 = (dword *)0x8ca90f;
      pdStack_98 = &MACH_HEADER.filetype;
      FUN_0037b5c0(&pppuStack_1a8,pppuStack_178,pppuStack_170,", ",2);
      pppuStack_c8 = pppuStack_1a0;
      pppuStack_d0 = pppuStack_1a8;
      if (-1 < (char)bStack_191) {
        pppuStack_c8 = (undefined8 ****)(ulong)bStack_191;
        pppuStack_d0 = &pppuStack_1a8;
      }
      pppuStack_100 = (undefined8 ***)0x8e50dc;
      pppuStack_f8 = (undefined8 ***)((long)&MACH_HEADER.magic + 1);
      FUN_00575ddc(&ppuStack_190,&pdStack_a0,&pppuStack_d0,&pppuStack_100);
      if (pppuStack_158 < pppuStack_150) {
        pppuStack_158[2] = ppuStack_180;
        pppuStack_158[1] = ppuStack_188;
        *pppuStack_158 = ppuStack_190;
        ppuStack_188 = (undefined8 ***)0x0;
        ppuStack_180 = (undefined8 ***)0x0;
        ppuStack_190 = (undefined8 ***)0x0;
        pppuStack_158 = pppuStack_158 + 3;
      }
      else {
        lVar9 = (long)pppuStack_158 - (long)ppuStack_160 >> 3;
        uVar1 = lVar9 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar1) {
          FUN_0037b568(&ppuStack_160);
          goto LAB_003d5840;
        }
        lVar11 = (long)pppuStack_150 - (long)ppuStack_160 >> 3;
        uVar12 = lVar11 * 0x5555555555555556;
        if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
          uVar12 = uVar1;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar12 = 0xaaaaaaaaaaaaaaa;
        }
        pppuStack_108 = ppppuVar8;
        if (uVar12 == 0) {
          pppuStack_128 = (undefined8 ****)0x0;
        }
        else {
          FUN_0037b57c();
          pppuStack_128 = ppppuVar8;
        }
        ppppuVar8 = (undefined8 ****)(pppuStack_128 + lVar9);
        pppuStack_110 = pppuStack_128 + uVar12 * 3;
        pppuStack_120 = ppppuVar8;
        ppppuVar8[2] = (undefined8 ***)ppuStack_180;
        ppppuVar8[1] = (undefined8 ***)ppuStack_188;
        *ppppuVar8 = (undefined8 ***)ppuStack_190;
        ppuStack_188 = (undefined8 ***)0x0;
        ppuStack_180 = (undefined8 ***)0x0;
        ppuStack_190 = (undefined8 ***)0x0;
        pppuStack_118 = ppppuVar8 + 3;
        FUN_0045a5fc(&ppuStack_160,&pppuStack_128);
        pppuVar5 = pppuStack_158;
        func_0x00427834(&pppuStack_128);
        pppuStack_158 = pppuVar5;
        if ((long)ppuStack_180 < 0) {
          __ZdlPv(ppuStack_190);
        }
      }
      if ((char)bStack_191 < '\0') {
        __ZdlPv(pppuStack_1a8);
      }
      pdStack_a0 = (dword *)&pppuStack_178;
      FUN_0037b728(&pdStack_a0);
    }
    FUN_0037b5c0(param_1,ppuStack_160,pppuStack_158," ",1);
    pdStack_a0 = (dword *)&ppuStack_160;
    FUN_0037b728(&pdStack_a0);
    FUN_0035d18c(alStack_148);
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pdStack_a0 = (dword *)0x8ca909;
    pdStack_98 = (dword *)((long)&MACH_HEADER.cputype + 1);
    FUN_003a2ef8(&pppuStack_178);
    pppuStack_c8 = pppuStack_170;
    pppuStack_d0 = pppuStack_178;
    if (-1 < (long)pppuStack_168) {
      pppuStack_c8 = (undefined8 ****)((ulong)pppuStack_168 >> 0x38);
      pppuStack_d0 = &pppuStack_178;
    }
    FUN_00575d30(&pppuStack_128,&pdStack_a0,&pppuStack_d0);
    if (pppuStack_158 < pppuStack_150) {
      pppuStack_158[2] = pppuStack_118;
      pppuStack_158[1] = pppuStack_120;
      *pppuStack_158 = pppuStack_128;
      pppuStack_120 = (undefined8 ****)0x0;
      pppuStack_118 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_158 = pppuStack_158 + 3;
LAB_003d543c:
      if ((long)pppuStack_168 < 0) {
        __ZdlPv(pppuStack_178);
      }
      goto LAB_003d544c;
    }
    lVar9 = (long)pppuStack_158 - (long)ppuStack_160 >> 3;
    uVar1 = lVar9 * -0x5555555555555555 + 1;
    if (uVar1 < 0xaaaaaaaaaaaaaab) {
      lVar11 = (long)pppuStack_150 - (long)ppuStack_160 >> 3;
      uVar12 = lVar11 * 0x5555555555555556;
      if (uVar12 < uVar1 || uVar12 - uVar1 == 0) {
        uVar12 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
        uVar12 = 0xaaaaaaaaaaaaaaa;
      }
      pppuStack_e0 = ppppuVar8;
      if (uVar12 == 0) {
        ppppuVar7 = (undefined8 ****)0x0;
      }
      else {
        ppppuVar7 = ppppuVar8;
        FUN_0037b57c();
      }
      ppppuVar10 = ppppuVar7 + lVar9;
      pppuStack_e8 = ppppuVar7 + uVar12 * 3;
      pppuStack_100 = ppppuVar7;
      pppuStack_f8 = ppppuVar10;
      ppppuVar10[2] = pppuStack_118;
      ppppuVar10[1] = pppuStack_120;
      *ppppuVar10 = pppuStack_128;
      pppuStack_120 = (undefined8 ****)0x0;
      pppuStack_118 = (undefined8 ****)0x0;
      pppuStack_128 = (undefined8 ****)0x0;
      pppuStack_f0 = ppppuVar10 + 3;
      FUN_0045a5fc(&ppuStack_160,&pppuStack_100);
      pppuVar5 = pppuStack_158;
      func_0x00427834(&pppuStack_100);
      pppuStack_158 = pppuVar5;
      if ((long)pppuStack_118 < 0) {
        __ZdlPv(pppuStack_128);
      }
      goto LAB_003d543c;
    }
  }
  FUN_0037b568(&ppuStack_160);
LAB_003d5840:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x3d5844);
  (*pcVar3)();
}



/* Entry: 003d5954; end: 003d5a0f;  */

undefined1  [16] FUN_003d5954(long param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  qword *pqVar1;
  undefined8 uVar2;
  qword *pqVar3;
  qword *pqVar4;
  undefined1 auVar5 [16];
  
  pqVar3 = (qword *)(param_1 + 8);
  pqVar4 = pqVar3;
  if ((qword *)*pqVar3 != (qword *)0x0) {
    pqVar1 = (qword *)*pqVar3;
    do {
      while (pqVar3 = pqVar1, pqVar3[4] <= *param_2) {
        if (*param_2 <= pqVar3[4]) {
          uVar2 = 0;
          goto LAB_003d59f8;
        }
        pqVar1 = (qword *)pqVar3[1];
        if ((qword *)pqVar3[1] == (qword *)0x0) {
          pqVar4 = pqVar3 + 1;
          goto LAB_003d59bc;
        }
      }
      pqVar1 = (qword *)*pqVar3;
      pqVar4 = pqVar3;
    } while ((qword *)*pqVar3 != (qword *)0x0);
  }
LAB_003d59bc:
  pqVar1 = (qword *)(segment_command_00000020.segname + 8);
  __Znwm();
  pqVar1[4] = *(qword *)*param_4;
  pqVar1[5] = 0;
  FUN_0035d1d4(param_1,pqVar3,pqVar4,pqVar1);
  uVar2 = 1;
  pqVar3 = pqVar1;
LAB_003d59f8:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = pqVar3;
  return auVar5;
}



/* Entry: 003d5a10; end: 003d5acb;  */

undefined8 *
FUN_003d5a10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_002971d4(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_003d5acc(&uStack_60);
  return param_4;
}



/* Entry: 003d5acc; end: 003d5aff;  */

long FUN_003d5acc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_003d5b00(param_1);
  }
  return param_1;
}



/* Entry: 003d5b00; end: 003d5b9f;  */

/* WARNING: Removing unreachable block (ram,0x003d5b28) */

void FUN_003d5b00(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x18
      ) {
  }
  return;
}



/* Entry: 003d5ba0; end: 003d5c57;  */

void FUN_003d5ba0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plStack_28;
  
  puVar4 = param_2;
  FUN_003a2164(param_2,"grpc.resource_quota",0x13);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_003d9234(&plStack_28);
    FUN_003d5d30(param_1,param_2,"grpc.resource_quota",0x13,&plStack_28);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  else {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



/* Entry: 003d5c58; end: 003d5d2f;  */

void FUN_003d5c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  long lStack_90;
  undefined **ppuStack_88;
  undefined4 uStack_78;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuStack_48 = &PTR_FUN_009e06f8;
  pcStack_40 = FUN_003d5ba0;
  pppuStack_30 = &ppuStack_48;
  FUN_003a5f30(param_1,&ppuStack_48);
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar4 = &ppuStack_48;
LAB_003d5cbc:
    (*(code *)(*pppuVar4)[lVar6])();
  }
  else {
    pppuVar4 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar6 = 5;
      goto LAB_003d5cbc;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar6 = 4;
    pppuVar5 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_003d5d28;
    lVar6 = 5;
    pppuVar5 = pppuStack_30;
  }
  (*(code *)(*pppuVar5)[lVar6])();
LAB_003d5d28:
  __Unwind_Resume(pppuVar4);
  lStack_90 = *param_4;
  plVar1 = (long *)(lStack_90 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_88 = &PTR_FUN_009e0798;
  uStack_78 = 2;
  FUN_003a1bc4();
  FUN_00382478(&lStack_90);
  return;
}



/* Entry: 003d5d30; end: 003d5d9f;  */

void FUN_003d5d30(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *in_x3;
  long lStack_40;
  undefined **ppuStack_38;
  undefined4 uStack_28;
  
  lStack_40 = *in_x3;
  plVar1 = (long *)(lStack_40 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_38 = &PTR_FUN_009e0798;
  uStack_28 = 2;
  FUN_003a1bc4();
  FUN_00382478(&lStack_40);
  return;
}



/* Entry: 003d5da0; end: 003d5da7;  */

void FUN_003d5da0(void)

{
  return;
}



/* Entry: 003d5da8; end: 003d5ddb;  */

void FUN_003d5da8(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009e06f8;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003d5ddc; end: 003d5dff;  */

void FUN_003d5ddc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009e06f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 003d5e00; end: 003d5e3b;  */

long FUN_003d5e00(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009e0778);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 003d5e3c; end: 003d5e47;  */

undefined ** FUN_003d5e3c(void)

{
  return &PTR_DAT_009e0778;
}



/* Entry: 003d5e48; end: 003d5ecf;  */

void FUN_003d5e48(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 003d5ed0; end: 003d5f27;  */

void FUN_003d5ed0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 003d5f28; end: 003d5f67;  */

long FUN_003d5f28(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    FUN_00338d34();
  }
  return param_1;
}



/* Entry: 003d5f68; end: 003d5fa7;  */

void FUN_003d5f68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(((ulong)((int)param_1 + 0xf) & 0xfffffff0) + 0x30);
  FUN_00338ce8(puVar1,0x40);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  return;
}



/* Entry: 003d5fa8; end: 003d5fff;  */

void FUN_003d5fa8(ulong param_1,int param_2,ulong param_3)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(((ulong)((int)param_1 + 0xf) & 0xfffffff0) + 0x30);
  FUN_00338ce8(puVar1,0x40);
  *puVar1 = (ulong)(param_2 + 0xf) & 0xfffffff0;
  puVar1[1] = 0;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = param_3;
  return;
}



/* Entry: 003d6000; end: 003d6113;  */

undefined8 FUN_003d6000(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],param_1[1]);
  FUN_003d5f28(param_1);
  FUN_00338d34();
  return uVar1;
}



/* Entry: 003d6114; end: 003d61b3;  */

long * FUN_003d6114(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar2 = param_1[2];
    plVar6 = (long *)param_1[3];
    param_1[3] = 0;
    if (*(long *)(lVar5 + 0x68) == lVar2) {
      plVar1 = (long *)(lVar5 + 0x68);
      do {
        if (*plVar1 != lVar2) {
          ClearExclusiveLocal();
          goto LAB_003d6174;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (plVar6 != (long *)0x0) {
        (**(code **)*plVar6)();
      }
    }
    else {
LAB_003d6174:
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



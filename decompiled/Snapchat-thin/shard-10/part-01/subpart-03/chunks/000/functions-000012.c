/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10789477c; end: 107894827;  */

undefined8 FUN_10789477c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010725afe8(param_1 + 0x68);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107894a54; end: 107894ae3;  */

void FUN_107894a54(long param_1)

{
  func_0x000107895ecc();
  if (param_1 != 0) {
    func_0x000107895ea4();
  }
  return;
}



/* Entry: 107894d0c; end: 107894d63;  */

void FUN_107894d0c(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 8) != -1) {
    return;
  }
  func_0x00010563ab98();
  uStack_18 = 0x107894d28;
  uVar1 = (ulong)*(uint *)(param_2 + 8);
  if (*(uint *)(param_2 + 8) == 0xffffffff) {
    uVar1 = 0xffffffffffffffff;
  }
  lStack_28 = param_1;
  puStack_20 = &stack0xfffffffffffffff0;
  (*(code *)(&PTR_DAT_1109e4cf8)[uVar1])(&lStack_28);
  return;
}



/* Entry: 107894ea8; end: 107895c2b;  */

long ** FUN_107894ea8(long param_1,long **param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long **pplVar14;
  long **extraout_x8;
  long **extraout_x8_00;
  long **extraout_x8_01;
  long **extraout_x9;
  long **extraout_x9_00;
  long **extraout_x9_01;
  int extraout_w10;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long **pplVar19;
  long **pplVar20;
  long lVar21;
  byte *pbVar22;
  long lVar23;
  uint uVar24;
  long **unaff_x26;
  ulong uVar25;
  undefined4 uVar26;
  long **pplStack_390;
  long **pplStack_388;
  long **pplStack_380;
  long **pplStack_378;
  long **pplStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  long lStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined4 auStack_318 [6];
  undefined4 uStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d0;
  undefined1 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *aplStack_2a8 [3];
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  long *plStack_188;
  undefined8 auStack_180 [32];
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(param_1 + 0x20);
  func_0x00010726fc00(&plStack_188,param_1 + 8);
  if (plStack_188 == (long *)0x0) {
LAB_107894f34:
    func_0x000107895e8c();
    plStack_350 = (long *)0x0;
    uStack_348 = 0;
    auStack_180[0] = 0;
    plStack_188 = (long *)0x0;
  }
  else {
    func_0x00010726fc3c();
    uStack_348 = auStack_180[0];
    plStack_350 = plStack_188;
    in_ZR = *plStack_188 == -1;
    if ((bool)in_ZR) {
      func_0x00010726fc88();
      goto LAB_107894f34;
    }
    auStack_180[0] = 0;
    plStack_188 = (long *)0x0;
    plStack_290 = (long *)0x0;
    uStack_288 = 0;
    func_0x0001072508cc(&plStack_290);
  }
  func_0x000107895e8c();
  func_0x000107895f30();
  if (plStack_188 == (long *)0x0) {
    func_0x000107895e8c();
    goto LAB_10789565c;
  }
  lVar18 = *plStack_188;
  func_0x000107895e8c();
  in_ZR = lVar18 == -1;
  if ((bool)in_ZR) goto LAB_10789565c;
  func_0x000107895f30();
  if ((plStack_188 == (long *)0x0) || (in_ZR = *plStack_188 == -1, (bool)in_ZR)) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(param_1 + 0x18);
  }
  func_0x000107895e8c();
  pplVar20 = *(long ***)(param_1 + 0x68);
  uStack_358 = *(undefined8 *)(param_1 + 0x78);
  uStack_360 = *(undefined8 *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x78) != 0) {
    do {
      func_0x000107895f7c();
    } while (extraout_w10 != 0);
  }
  param_2 = (long **)(ulong)*(uint *)(param_1 + 0x28);
  func_0x00010788dbb0(&lStack_340,pplVar20,param_2,&uStack_360);
  if (lStack_340 == 0) {
    pplVar19 = (long **)0x0;
  }
  else {
    func_0x00010788b430();
    func_0x000107895e04();
    uVar6 = (ulong)*(uint *)(param_1 + 0x28);
    func_0x0001073cafc0(uVar6);
    func_0x00010002b838(aplStack_2a8,uVar6);
    if (*(int *)(param_1 + 0x38) != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(aplStack_2a8,"_");
      __ZNSt3__19to_stringEj(&plStack_188,*(undefined4 *)(param_1 + 0x38));
      func_0x0001004c3ca0(aplStack_2a8,&plStack_188);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_188);
    }
    auStack_318[0] = 0xe4;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    ppuStack_2f8 = &PTR_DAT_110996720;
    uStack_2f0 = 0;
    uStack_2d8 = 0xe4;
    uStack_2d0 = 0;
    uStack_2cc = 1;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2c8 = 0;
    func_0x00010743cc34(&plStack_290,auStack_318,7);
    pplVar19 = &plStack_188;
    func_0x00010743d7bc(&plStack_188,&plStack_290);
    func_0x000107288cd8(&plStack_290);
    func_0x000107262330(auStack_318);
    func_0x000107895fa0();
    func_0x00010729d56c(auStack_180);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_318,aplStack_2a8);
    func_0x00010726e300(auStack_180,&UNK_10f43188c,auStack_318);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_318);
    lStack_320 = 0;
    lVar23 = param_1 + 0x28;
    func_0x000107896938(lVar23);
    lVar7 = param_1 + 0x28;
    func_0x000107896964(lVar7);
    unaff_x26 = (long **)(ulong)*(uint *)(param_1 + 0x28);
    func_0x0001073cafe4();
    pplStack_388 = unaff_x26;
    func_0x000107888014();
    func_0x000107895f74();
    func_0x000107895e04();
    func_0x000107895f54();
    func_0x000107895e04();
    if (*(char *)(param_1 + 0x40) == '\x01') {
      plStack_290 = (long *)CONCAT71(plStack_290._1_7_,1);
      pplVar10 = pplStack_388;
      func_0x00010788b128();
      func_0x000107895f64();
      func_0x000107895eac(pplVar19,pplVar10,&UNK_10f431893);
      pplVar10 = pplVar19;
      func_0x0001078896b0();
      func_0x000107895f3c(pplStack_388,pplVar10,&plStack_290);
    }
    pplVar8 = (long **)(ulong)*(uint *)(param_1 + 0x28);
    func_0x0001073d4bd4();
    uVar24 = 0;
    pplVar10 = pplVar8;
    while( true ) {
      uVar15 = (uint)pplVar8;
      cVar4 = SBORROW4(uVar15,uVar24);
      cVar5 = (int)(uVar15 - uVar24) < 0;
      in_ZR = uVar15 == uVar24;
      if ((bool)in_ZR) break;
      if ((*(uint *)(param_1 + 0x38) >> (ulong)(uVar24 & 0x1f) & 1) != 0) {
        plStack_290 = (long *)CONCAT71(plStack_290._1_7_,1);
        pplVar9 = (long **)(ulong)*(uint *)(param_1 + 0x28);
        func_0x0001073d4bf4(pplVar9,uVar24);
        pplVar19 = pplVar9;
        func_0x00010788b128();
        pplVar10 = pplVar19;
        func_0x00010788b510();
        func_0x000107895eac(pplVar19,pplVar10,pplVar9);
        pplVar9 = pplVar19;
        func_0x0001078896b0();
        pplVar10 = pplStack_388;
        func_0x000107895f3c(pplStack_388,pplVar9,&plStack_290);
      }
      uVar24 = uVar24 + 1;
    }
    func_0x00010788b128();
    func_0x000107895f64();
    func_0x000107895eac(pplVar19,pplVar10,lVar23);
    pplVar10 = pplVar19;
    func_0x000107888e00();
    pplStack_378 = pplVar20;
    _objc_msgSend(pplVar20,pplVar10,pplVar19,pplStack_388,&lStack_320);
    lVar23 = lStack_320;
    if (pplStack_378 == (long **)0x0) {
      pplVar19 = pplStack_378;
      func_0x00010788b354();
      pplVar10 = (long **)0x0;
      _objc_msgSend(0,pplVar19);
LAB_10789550c:
      func_0x00010788b278();
      func_0x000107895e04();
      func_0x000107895f5c();
      func_0x000107895e04();
      func_0x000107895e78();
      param_2 = extraout_x9;
      if (cVar5 == cVar4) {
        param_2 = extraout_x8;
      }
      func_0x000107895f1c();
      pplVar8 = (long **)0x0;
LAB_10789556c:
      pplVar19 = (long **)0x0;
    }
    else {
      pplVar10 = pplStack_378;
      if (lStack_320 != 0) goto LAB_10789550c;
      pplVar19 = pplStack_378;
      func_0x00010788b128();
      func_0x000107895f64();
      func_0x000107895eac(0,pplVar19,lVar7);
      lVar7 = lVar23;
      func_0x000107888e00();
      pplVar8 = pplVar20;
      _objc_msgSend(pplVar20,lVar7,lVar23,pplStack_388,&lStack_320);
      pplStack_380 = pplVar8;
      if (pplVar8 == (long **)0x0) {
        pplVar19 = pplVar8;
        func_0x00010788b354();
        pplVar10 = (long **)0x0;
        _objc_msgSend(0,pplVar19);
LAB_107895540:
        func_0x00010788b278();
        func_0x000107895e04();
        func_0x000107895f5c();
        func_0x000107895e04();
        func_0x000107895e78();
        param_2 = extraout_x9_00;
        if (cVar5 == cVar4) {
          param_2 = extraout_x8_00;
        }
        func_0x000107895f1c();
        goto LAB_10789556c;
      }
      pplVar10 = pplVar8;
      if (lStack_320 != 0) goto LAB_107895540;
      pplStack_370 = pplVar8;
      func_0x0001078882ac();
      func_0x000107895f74();
      func_0x000107895e04();
      func_0x000107895f54();
      func_0x000107895e04();
      plStack_338 = (long *)0x0;
      uStack_330 = 0;
      uStack_328 = 0;
      pplVar19 = pplStack_370;
      for (uVar6 = 0; pplVar10 = (long **)*unaff_x26,
          uVar6 < (ulong)((long)unaff_x26[1] - (long)pplVar10 >> 6); uVar6 = uVar6 + 1) {
        plVar11 = (long *)(ulong)*(uint *)(param_1 + 0x28);
        func_0x0001073d4d34();
        uVar24 = *(uint *)((long)pplVar10 + uVar6 * 0x40 + 0x3c);
        lVar23 = *plVar11 + (ulong)uVar24 * 0x38;
        if ((*(long *)(lVar23 + 8) == *(long *)(lVar23 + 0x10)) &&
           (*(long *)(lVar23 + 0x20) == *(long *)(lVar23 + 0x28))) {
LAB_1078953c0:
          uVar15 = (uint)((ulong)(*(long *)(lVar18 + 0x178) - *(long *)(lVar18 + 0x170)) >> 3);
          if (uVar15 < uVar24 + 1) {
            uVar15 = uVar24 + 1;
          }
          func_0x000107380640(lVar18 + 0x170,uVar15);
          func_0x000107380640(&plStack_338,uVar15);
          pplVar19 = (long **)plStack_338[*(uint *)((long)pplVar10 + uVar6 * 0x40 + 0x3c)];
          pplVar9 = pplVar10 + uVar6 * 8 + 7;
          func_0x0001073da180();
          if (*(byte *)(pplVar10 + uVar6 * 8 + 7) - 1 < 0x1b) {
            lVar23 = *(long *)(&UNK_10deb10f0 +
                              ((ulong)(*(byte *)(pplVar10 + uVar6 * 8 + 7) - 1) & 0xff) * 8);
          }
          else {
            lVar23 = 1;
          }
          uVar12 = (ulong)((int)(lVar23 * (long)pplVar9) + 3) & 0x7c;
          if (pplVar19 != (long **)0x0) {
            uVar12 = lVar23 * (long)pplVar9;
          }
          func_0x0001078883fc();
          pplVar14 = pplStack_370;
          _objc_msgSend(pplStack_370,pplVar9);
          func_0x000107895f6c();
          _objc_msgSend(pplVar19,pplVar14,uVar6);
          pplVar9 = pplVar19;
          func_0x00010788a1f0();
          pplVar14 = pplVar19;
          func_0x000107895e64(pplVar19,pplVar9);
          uVar25 = (ulong)*(byte *)(pplVar10 + uVar6 * 8 + 7);
          uVar3 = *(undefined1 *)((long)pplVar10 + uVar6 * 0x40 + 0x39);
          func_0x000107889b00();
          FUN_107893b94(uVar25,uVar3);
          pplVar9 = pplVar19;
          _objc_msgSend(pplVar19,pplVar14,uVar25);
          func_0x0001078894f0();
          func_0x000107895e64(pplVar19,pplVar9);
          uVar25 = (ulong)*(uint *)((long)pplVar10 + uVar6 * 0x40 + 0x3c);
          lVar23 = plStack_338[uVar25];
          plStack_338[uVar25] = lVar23 + uVar12;
          uVar16 = lVar23 + uVar12 + 3 & 0xfffffffffffffffc;
          uVar12 = *(ulong *)(*(long *)(lVar18 + 0x170) + uVar25 * 8);
          if (uVar12 <= uVar16) {
            uVar12 = uVar16;
          }
          *(ulong *)(*(long *)(lVar18 + 0x170) + uVar25 * 8) = uVar12;
        }
        else {
          pplVar9 = (long **)(ulong)*(uint *)(param_1 + 0x28);
          func_0x0001073d4bd4();
          uVar15 = 0;
          pplVar19 = pplVar9;
          for (uVar24 = 0; (uint)pplVar9 != uVar24; uVar24 = uVar24 + 1) {
            if ((*(uint *)(param_1 + 0x38) >> (ulong)(uVar24 & 0x1f) & 1) != 0) {
              uVar12 = (ulong)*(uint *)(param_1 + 0x28);
              func_0x0001073d4bf4(uVar12,uVar24);
              func_0x00010002b838(&plStack_290,uVar12);
              lVar7 = *(long *)(lVar23 + 0x20);
              func_0x0001073940f8(lVar7,*(undefined8 *)(lVar23 + 0x28),&plStack_290);
              lVar21 = *(long *)(lVar23 + 0x28);
              if (lVar21 == lVar7) {
                lVar13 = *(long *)(lVar23 + 8);
                func_0x0001073940f8(lVar13,*(undefined8 *)(lVar23 + 0x10),&plStack_290);
                if (*(long *)(lVar23 + 0x10) != lVar13) {
                  uVar15 = uVar15 + 1;
                }
              }
              pplVar19 = &plStack_290;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              if (lVar21 != lVar7) goto LAB_1078954f8;
            }
          }
          if ((*(long *)(lVar23 + 0x10) - *(long *)(lVar23 + 8)) / 0x38 == (ulong)uVar15) {
            uVar24 = *(uint *)((long)pplVar10 + uVar6 * 0x40 + 0x3c);
            goto LAB_1078953c0;
          }
        }
LAB_1078954f8:
      }
      uVar6 = 0;
      unaff_x26 = pplVar19;
      while( true ) {
        uVar12 = *(long *)(lVar18 + 0x178) - *(long *)(lVar18 + 0x170) >> 3;
        cVar4 = SBORROW8(uVar6,uVar12);
        cVar5 = (long)(uVar6 - uVar12) < 0;
        in_ZR = uVar6 == uVar12;
        if (uVar12 <= uVar6) break;
        func_0x000107888b68();
        pplVar19 = pplStack_370;
        _objc_msgSend(pplStack_370,unaff_x26);
        func_0x000107895f6c();
        _objc_msgSend(pplVar10,pplVar19,uVar6);
        pplVar9 = *(long ***)(*(long *)(lVar18 + 0x170) + uVar6 * 8);
        pplVar19 = pplVar10;
        func_0x00010788a8e0();
        func_0x000107895e64(pplVar10,pplVar19);
        FUN_10788a790();
        func_0x000107895f24();
        func_0x00010788a720();
        func_0x000107895f24();
        uVar6 = uVar6 + 1;
        unaff_x26 = pplVar10;
        pplVar10 = pplVar9;
      }
      func_0x0001078880f4();
      func_0x000107895f74();
      func_0x000107895e04();
      func_0x000107895f54();
      func_0x000107895e04();
      pplVar19 = unaff_x26;
      func_0x00010788accc();
      pplVar9 = unaff_x26;
      _objc_msgSend(unaff_x26,pplVar19,pplStack_378);
      func_0x000107889cc0();
      pplVar19 = unaff_x26;
      _objc_msgSend(unaff_x26,pplVar9,pplVar8);
      func_0x00010788ac5c();
      pplVar9 = unaff_x26;
      _objc_msgSend(unaff_x26,pplVar19,pplStack_370);
      FUN_1078884dc();
      pplVar19 = unaff_x26;
      _objc_msgSend(unaff_x26,pplVar9);
      func_0x000107895f6c();
      _objc_msgSend(pplVar10,pplVar19,0);
      pplVar9 = pplVar10;
      func_0x00010788a260();
      pplVar19 = pplVar10;
      func_0x000107895ed8(pplVar10,pplVar9);
      uVar6 = (ulong)*(byte *)(param_1 + 0x60);
      if (*(byte *)(param_1 + 0x60) != 0) {
        func_0x00010788a260();
        func_0x000107893d1c(uVar6);
        pplVar9 = pplVar10;
        _objc_msgSend(pplVar10,pplVar19,uVar6);
        uVar26 = *(undefined4 *)(param_1 + 0x5c);
        func_0x00010788ae1c();
        uVar6 = CONCAT26(-(ushort)((short)((ushort)(byte)((uint)uVar26 >> 0x18) << 0xf) < 0),
                         CONCAT24(-(ushort)((short)((ushort)(byte)((uint)uVar26 >> 0x10) << 0xf) < 0
                                           ),
                                  CONCAT22(-(ushort)((short)((ushort)(byte)((uint)uVar26 >> 8) <<
                                                            0xf) < 0),
                                           -(ushort)((short)((ushort)(byte)uVar26 << 0xf) < 0)))) &
                0x8000400020001;
        in_ZR = (((short)uVar6 + (short)(uVar6 >> 0x10) + (short)(uVar6 >> 0x20) +
                  (short)(uVar6 >> 0x30) ^ 0xffffU) & 0xf) == 0;
        cVar5 = '\0';
        cVar4 = '\0';
        uVar1 = 0xf;
        if (!(bool)in_ZR) {
          uVar1 = 0;
        }
        pplVar19 = pplVar10;
        _objc_msgSend(pplVar10,pplVar9,uVar1);
        func_0x00010785f1f4();
        func_0x00010724e330(pplVar19 + 0x82);
        plStack_290 = *(long **)(param_1 + 0x44);
        uStack_280 = *(undefined8 *)(param_1 + 0x54);
        uStack_288 = *(undefined8 *)(param_1 + 0x4c);
        uStack_278 = *(undefined4 *)(param_1 + 0x5c);
        pplVar19 = &plStack_290;
        func_0x000107893dd0();
        if (((ulong)pplVar19 & 1) != 0) {
          func_0x000107889480();
          _objc_msgSend(pplVar10,pplVar19,1);
          func_0x00010788a3ac();
          func_0x000107895df8();
          func_0x000107889334();
          func_0x000107895df8();
          func_0x00010788a4f8();
          func_0x000107895df8();
          func_0x00010788a488();
          func_0x000107895df8();
          func_0x000107889a90();
          func_0x000107895df8();
          func_0x000107889a20();
          func_0x000107895df8();
          pplVar19 = pplVar10;
        }
      }
      func_0x000107889790();
      pplVar10 = unaff_x26;
      func_0x000107895ed8(unaff_x26,pplVar19);
      func_0x00010788a568();
      pplVar19 = unaff_x26;
      func_0x000107895ed8(unaff_x26,pplVar10);
      pbVar22 = (byte *)(param_1 + 0x61);
      bVar2 = *pbVar22;
      pplVar10 = (long **)(ulong)bVar2;
      if (bVar2 != 0) {
        func_0x000107893d1c(pplVar10);
        if ((bVar2 < 0x2c) && ((0x7ffffff87ffU >> ((ulong)(bVar2 - 1) & 0x3f) & 1) != 0)) {
          pbVar22 = &UNK_10deb11c8 + (byte)(bVar2 - 1);
          pplVar19 = pplVar10;
        }
        else {
          func_0x000107889790();
          func_0x000107895ee0();
          pplVar19 = pplVar10;
        }
        bVar2 = *pbVar22;
        cVar4 = SBORROW4((uint)bVar2,0x2b);
        cVar5 = (int)(bVar2 - 0x2b) < 0;
        in_ZR = bVar2 == 0x2b;
        if (bVar2 < 0x2c) {
          in_ZR = (1L << ((ulong)bVar2 & 0x3f) & 0xfffffff3fffU) == 0;
          cVar5 = false;
          cVar4 = false;
          if (!(bool)in_ZR) goto LAB_107895938;
        }
        func_0x00010788a568();
        func_0x000107895ee0();
      }
LAB_107895938:
      func_0x00010788877c();
      pplVar10 = pplVar20;
      _objc_msgSend(pplVar20,pplVar19);
      param_2 = pplVar10;
      FUN_107888f48();
      _objc_msgSend(pplVar10,param_2,unaff_x26,&lStack_320);
      if ((pplVar10 == (long **)0x0) || (pplVar19 = pplVar10, lStack_320 != 0)) {
        func_0x00010788b278();
        func_0x000107895e04();
        func_0x000107895f5c();
        func_0x000107895e04();
        func_0x000107895e78();
        param_2 = extraout_x9_01;
        if (cVar5 == cVar4) {
          param_2 = extraout_x8_01;
        }
        func_0x000107895f1c();
        pplVar19 = (long **)0x0;
      }
      if (unaff_x26 != (long **)0x0) {
        func_0x00010788b354();
        _objc_msgSend(unaff_x26);
        param_2 = pplVar10;
      }
      pplVar9 = &plStack_338;
      func_0x0001057f951c();
      pplVar10 = pplVar9;
      if (pplStack_370 != (long **)0x0) {
        func_0x00010788b354();
        pplVar10 = pplStack_370;
        _objc_msgSend();
        param_2 = pplVar9;
      }
    }
    pplVar9 = pplVar10;
    if (pplStack_388 != (long **)0x0) {
      func_0x00010788b354();
      pplVar9 = pplStack_388;
      _objc_msgSend();
      param_2 = pplVar10;
    }
    pplVar10 = pplVar9;
    if (pplVar8 != (long **)0x0) {
      func_0x00010788b354();
      _objc_msgSend();
      pplVar10 = pplVar8;
      param_2 = pplVar9;
    }
    if (pplStack_378 != (long **)0x0) {
      func_0x00010788b354();
      _objc_msgSend(pplStack_378);
      param_2 = pplVar10;
    }
    func_0x00010743d7e4(&plStack_188);
    pplVar10 = aplStack_2a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    pplVar8 = pplVar10;
    if (pplVar20 != (long **)0x0) {
      func_0x00010788b354();
      pplVar8 = pplVar20;
      _objc_msgSend();
      param_2 = pplVar10;
    }
    lVar23 = lStack_340;
    pplStack_390 = pplVar20;
    if (lStack_340 != 0) {
      func_0x00010788b354();
      _objc_msgSend(lVar23);
      param_2 = pplVar8;
    }
  }
  func_0x00010725afe8(&uStack_360);
  plStack_188 = (long *)(lVar18 + 0x20);
  auStack_180[0] = CONCAT71(auStack_180[0]._1_7_,1);
  __ZNSt3__119__shared_mutex_base4lockEv();
  plStack_290 = (long *)(lVar18 + 200);
  uStack_288 = CONCAT71(uStack_288._1_7_,1);
  __ZNSt3__119__shared_mutex_base4lockEv();
  if (pplVar19 == (long **)0x0) {
    *(undefined4 *)(lVar17 + 0xc) = 3;
  }
  else {
    *(undefined4 *)(lVar17 + 0xc) = 2;
    func_0x000107894db8(lVar17 + 0x10);
    *(long ***)(lVar17 + 0x10) = pplVar19;
    *(undefined1 *)(lVar17 + 0x19) = 1;
  }
  func_0x000104c305a0(&plStack_290);
  func_0x000104c305a0(&plStack_188);
LAB_10789565c:
  pplVar20 = &plStack_350;
  func_0x000107270b00();
  func_0x000107895f8c(uStack_80);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (unaff_x26 != (long **)0x0) {
      param_2 = pplVar20;
      func_0x00010788b354();
      _objc_msgSend(unaff_x26);
    }
    pplVar19 = &plStack_338;
    func_0x0001057f951c();
    pplVar10 = pplVar19;
    if (pplStack_370 != (long **)0x0) {
      func_0x00010788b354();
      _objc_msgSend();
      pplVar10 = pplStack_370;
      param_2 = pplVar19;
    }
    pplVar19 = pplVar10;
    if (pplStack_388 != (long **)0x0) {
      func_0x00010788b354();
      _objc_msgSend();
      pplVar19 = pplStack_388;
      param_2 = pplVar10;
    }
    pplVar10 = pplVar19;
    if (pplStack_380 != (long **)0x0) {
      func_0x00010788b354();
      _objc_msgSend();
      pplVar10 = pplStack_380;
      param_2 = pplVar19;
    }
    if (pplStack_378 != (long **)0x0) {
      func_0x00010788b354();
      _objc_msgSend(pplStack_378);
      param_2 = pplVar10;
    }
    func_0x00010743d7e4(&plStack_188);
    pplVar19 = aplStack_2a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    pplVar10 = pplVar19;
    if (pplStack_390 != (long **)0x0) {
      func_0x00010788b354();
      _objc_msgSend();
      pplVar10 = pplStack_390;
      param_2 = pplVar19;
    }
    if (lStack_340 != 0) {
      func_0x00010788b354();
      _objc_msgSend(lStack_340);
      param_2 = pplVar10;
    }
    func_0x00010725afe8(&uStack_360);
    func_0x000107270b00(&plStack_350);
    __Unwind_Resume(pplVar20);
    func_0x000104bd46a0(pplVar20);
    func_0x0001004a5364(param_2,&PTR_DAT_1109e4d80);
    pplVar20 = pplVar20 + 1;
    if ((int)param_2 == 0) {
      pplVar20 = (long **)0x0;
    }
    return pplVar20;
  }
  return pplVar20;
}



/* Entry: 10789618c; end: 1078961f3;  */

void FUN_10789618c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
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
  func_0x0001078961f4(param_1,&uStack_30,param_2[2]);
  func_0x000107896424();
  return;
}



/* Entry: 107896454; end: 107896523;  */

undefined8 * FUN_107896454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 auStack_58 [3];
  undefined8 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e4e78;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  uVar2 = *(uint *)(param_1 + 0x70);
  if (*(char *)(param_1 + (ulong)uVar2 * 0x20 + 0x28) == '\x01') {
    uVar2 = (uVar2 + 1) % 3;
  }
  *(uint *)(param_1 + 0x70) = uVar2;
  puStack_40 = puVar1;
  func_0x00010789663c();
  puVar1 = auStack_58;
  func_0x000107896758();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x000107896758(auStack_58);
    __Unwind_Resume();
    lVar3 = 0;
    *puVar1 = &PTR_DAT_1109e4f08;
    do {
      if (*(char *)((long)puVar1 + lVar3 + 0x68) == '\x01') {
        func_0x000107896594((long)puVar1 + lVar3 + 0x50);
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x60);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 107896604; end: 10789663b;  */

void FUN_107896604(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e4e78;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107897e30; end: 107897e5f;  */

undefined8 FUN_107897e30(undefined8 param_1,undefined8 param_2)

{
  func_0x000107897e60(param_1,param_2);
  return param_1;
}



/* Entry: 10789803c; end: 107898053;  */

void FUN_10789803c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107898070(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107898448; end: 10789844b;  */

void FUN_107898448(void)

{
  long unaff_x19;
  
  func_0x0001078995a4();
  func_0x0001073af1cc(0);
  func_0x000107313fcc(unaff_x19 + 0xd0);
  func_0x000107899138(unaff_x19 + 200);
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x88);
  func_0x0001078987b8(unaff_x19 + 0x58);
  func_0x0001078987b8(unaff_x19 + 0x28);
  func_0x0001006393ec(unaff_x19 + 8);
  return;
}



/* Entry: 1078987fc; end: 1078988db;  */

void FUN_1078987fc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 8) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar5 + (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10;
  }
  func_0x000107899554();
  do {
    lVar6 = lVar4 + -0x1000;
    do {
      if (lVar4 == param_2) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        puVar1 = *(undefined8 **)(param_1 + 8);
        while (uVar3 = *(long *)(param_1 + 0x10) - (long)puVar1 >> 3, 2 < uVar3) {
          __ZdlPv(*puVar1);
          puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          *(undefined8 **)(param_1 + 8) = puVar1;
        }
        if (uVar3 == 1) {
          uVar2 = 0x80;
        }
        else {
          if (uVar3 != 2) {
            return;
          }
          uVar2 = 0x100;
        }
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        return;
      }
      func_0x000107898790(lVar4);
      lVar4 = lVar4 + 0x10;
      lVar6 = lVar6 + 0x10;
    } while (*plVar5 != lVar6);
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
  } while( true );
}



/* Entry: 107898bd0; end: 107898c53;  */

void FUN_107898bd0(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x000107899510();
  func_0x000107899544();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x000107899454();
      if (!bVar2) {
        func_0x0001078994e4();
      }
      func_0x000107899534();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0001078994a0();
      func_0x000107899420(param_1 + (uVar3 >> 2) * 8);
      func_0x0001078994f0();
      func_0x000107899408();
    }
  }
  func_0x000107899524();
  return;
}



/* Entry: 107898f2c; end: 107898f4f;  */

undefined8 FUN_107898f2c(undefined8 param_1)

{
  func_0x000107898f50(param_1,0);
  return param_1;
}



/* Entry: 107899070; end: 10789907b;  */

void FUN_107899070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107899584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107899190; end: 1078991db;  */

long FUN_107899190(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e5928;
  uVar2 = *param_2;
  puVar1[2] = param_2[1];
  puVar1[1] = uVar2;
  puVar1[3] = param_2[2];
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  return param_1;
}



/* Entry: 1078992f4; end: 10789930f;  */

void FUN_1078992f4(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107898014(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078993ec; end: 107899407;  */

void FUN_1078993ec(void)

{
  func_0x00010789948c();
  func_0x000107899590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 1078997bc; end: 1078997d7;  */

void FUN_1078997bc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078997d8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107899eb8; end: 107899ecb;  */

void FUN_107899eb8(void)

{
  func_0x000107899f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789a180; end: 10789a323;  */

undefined8 * FUN_10789a180(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar2 = param_1[1];
  *param_1 = &PTR_DAT_1109e5ac8;
  param_1[1] = 0;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x38) != 0) {
      FUN_10789a8ac(lVar2);
    }
    __ZNSt3__17promiseIvEC1Ev(auStack_78);
    func_0x00010789ad44(lVar2 + 0x30);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    func_0x000107898fb8(&puStack_70);
    *(undefined1 *)puStack_70 = 0;
    puVar1 = (undefined8 *)0x80;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_1109e5b48;
    puStack_60 = puStack_70;
    puStack_58 = (undefined8 *)lStack_68;
    if (lStack_68 != 0) {
      do {
        func_0x00010789b090();
      } while (extraout_w10 != 0);
    }
    puVar1[3] = &PTR_DAT_1109e5b98;
    __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
    puVar1[0xc] = puStack_70;
    puVar1[0xd] = lStack_68;
    puStack_60 = (undefined8 *)0x0;
    puStack_58 = (undefined8 *)0x0;
    puVar1[0xe] = auStack_78;
    func_0x00010789b0d0();
    puStack_60 = puVar1 + 3;
    puStack_58 = puVar1;
    func_0x00010789b0c0();
    func_0x00010789895c(uVar3,0,&puStack_60);
    func_0x00010789b0c8();
    __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,auStack_78);
    __ZNSt3__16futureIvE3getEv(&puStack_60);
    __ZNSt3__16futureIvED1Ev(&puStack_60);
    func_0x00010789846c(*(undefined8 *)(lVar2 + 0x48));
    __ZNSt3__16thread4joinEv(lVar2 + 0x28);
    __ZNSt3__17promiseIvED1Ev(auStack_78);
    func_0x00010787b3fc(lVar2 + 0x40);
    func_0x00010787b3fc((long *)(lVar2 + 0x38));
    __ZNSt3__16futureIvED1Ev(lVar2 + 0x30);
    __ZNSt3__16threadD1Ev(lVar2 + 0x28);
    func_0x00010724b54c(lVar2);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10789a8ac; end: 10789a8e3;  */

/* WARNING: Possible PIC construction at 0x00010789a8cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789a8d0) */

void FUN_10789a8ac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x40);
  __ZNSt3__17promiseIvE9set_valueEv(*plVar2);
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__17promiseIvED1Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789ad70; end: 10789ad83;  */

void FUN_10789ad70(void)

{
  func_0x00010789ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789aec0; end: 10789af17;  */

undefined8 * FUN_10789aec0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5be0;
  func_0x00010789aeec(param_1 + 4);
  return param_1;
}



/* Entry: 10789b048; end: 10789b127;  */

void FUN_10789b048(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e5c20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10789b5e0; end: 10789b7a7;  */

/* WARNING: Possible PIC construction at 0x00010789b830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010789b8b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789b834) */
/* WARNING: Removing unreachable block (ram,0x00010789b8bc) */

undefined8 * FUN_10789b5e0(long *param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  char *pcVar7;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  long alStack_7d0 [2];
  undefined1 auStack_7c0 [32];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 auStack_748 [3];
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 auStack_530 [128];
  undefined1 auStack_4b0 [32];
  undefined8 uStack_490;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_1d8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [136];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 *puStack_98;
  undefined1 auStack_90 [32];
  undefined4 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_180;
  plVar2 = param_1;
  func_0x00010789e4ec();
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar9 = param_3[1];
  uVar8 = *param_3;
  lStack_c0 = param_3[2];
  uStack_d0 = uVar8;
  uStack_c8 = uVar9;
  if (lStack_c0 != 0) {
    do {
      func_0x00010789e4dc();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[0x168] == '\x01';
  plStack_b8 = plVar2;
  if ((bool)uVar1) {
    auStack_160[0] = 0;
    uStack_d8 = 0;
    param_2 = auStack_160;
    func_0x00010789c9fc(&uStack_d0);
    func_0x000107318368(auStack_160);
  }
  else {
    func_0x00010789ce14(&uStack_180,&uStack_d0);
    puStack_98 = (undefined8 *)0x0;
    func_0x00010789e820();
    *puVar4 = &PTR_DAT_1109e5e18;
    puVar4[2] = uStack_178;
    puVar4[1] = uStack_180;
    puVar4[3] = lStack_170;
    uVar8 = uStack_180;
    uVar9 = uStack_178;
    if (lStack_170 != 0) {
      do {
        func_0x00010789e4dc();
      } while (extraout_w10_00 != 0);
    }
    puVar4[4] = uStack_168;
    param_1 = (long *)*param_1;
    puVar3 = auStack_90;
    puStack_98 = puVar4;
    func_0x0001073181d0(puVar3,auStack_b0);
    uStack_70 = 0;
    puStack_50 = (undefined1 *)0x0;
    func_0x00010789e6e4();
    func_0x00010789e744();
    func_0x0001073181d0();
    *(undefined4 *)(puVar3 + 0x28) = uStack_70;
    puStack_50 = puVar3;
    (**(code **)(*param_1 + 0xc0))(param_1,param_2,auStack_68);
    func_0x000107319d0c(auStack_68);
    func_0x000107319d0c(auStack_90);
    func_0x000107319d0c(auStack_b0);
    func_0x00010724ae28((ulong)&uStack_180 | 8);
  }
  puVar4 = (undefined8 *)((ulong)&uStack_d0 | 8);
  func_0x00010724ae28();
  func_0x00010789e4bc(uStack_48);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000107319d0c(auStack_68);
  func_0x000107319d0c(auStack_90);
  func_0x000107319d0c(auStack_b0);
  func_0x00010724ae28((ulong)&uStack_180 | 8);
  puVar5 = (undefined8 *)((ulong)&uStack_d0 | 8);
  func_0x00010724ae28();
  func_0x00010789e550();
  func_0x00010789e4ec();
  uStack_1d8 = extraout_x8_00;
  if ((param_2[0x168] & 1) == 0) {
    lVar6 = param_4;
    func_0x00010789e754();
    uStack_730 = 0;
    if (*(long *)(lVar6 + 0x18) != 0) {
      func_0x0001073af260();
      func_0x000105302f48(auStack_7c0,param_4);
      uStack_798 = puVar5[4];
      uStack_7a0 = puVar5[3];
      if (puVar5[4] != 0) {
        do {
          func_0x00010789e4dc();
        } while (extraout_w10_01 != 0);
      }
      uStack_790 = puVar5[5];
      lStack_7e8 = 0;
      uStack_7e0 = 0;
      uStack_728 = 0;
      uStack_720 = 0;
      puVar5 = &uStack_728;
      goto code_r0x00010725b1d4;
    }
    uStack_7f8 = 0;
    lStack_7f0 = 0;
    pcVar7 = (char *)puVar5[1];
    uVar1 = *pcVar7 == '\x01';
    if ((bool)uVar1) {
      if (*(long *)(pcVar7 + 8) != 0) {
        lStack_7e8 = *(long *)(pcVar7 + 8) + 0x10;
        func_0x00010789e5b0();
        uStack_7e0 = uVar8;
        uStack_7d8 = uVar9;
        if (extraout_x8_01 != 0) {
          do {
            func_0x00010789e4dc();
          } while (extraout_w10_02 != 0);
        }
        func_0x00010724bb70(alStack_7d0,&uStack_7e0);
        lVar6 = lStack_7e8;
        if (alStack_7d0[0] != 0) {
          func_0x0001072d488c(&uStack_728,param_1);
          func_0x0001075281c8(auStack_530,puVar4);
          func_0x000105302f48(auStack_4b0,auStack_748);
          uStack_490 = uStack_7f8;
          lStack_488 = lStack_7f0;
          if (lStack_7f0 != 0) {
            do {
              func_0x00010789e4dc();
            } while (extraout_w10_03 != 0);
          }
          puVar4 = (undefined8 *)0x2c8;
          __Znwm();
          func_0x00010789df50(&puStack_480,&uStack_728);
          *puVar4 = &PTR_DAT_1109e6088;
          puVar4[1] = lVar6;
          puVar4[2] = &UNK_10789bb14;
          puVar4[3] = 0;
          func_0x00010789df50(puVar4 + 4,&puStack_480);
          func_0x00010789e050(&puStack_480);
          puStack_480 = puVar4;
          func_0x00010789e050(&uStack_728);
          func_0x00010789e624();
          puVar4 = puStack_480;
          puStack_480 = (undefined8 *)0x0;
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010789e4d0();
          }
        }
        func_0x00010724bcd8(alStack_7d0);
        func_0x00010789e598();
      }
    }
    else if (*(long *)(pcVar7 + 0x10) != 0) {
      uStack_478 = 0;
      puStack_480 = (undefined8 *)0x0;
      func_0x00010789e828();
      func_0x00010789bb14();
      func_0x000107279270(&puStack_480);
    }
    func_0x000107279270(&uStack_7f8);
    puVar5 = auStack_748;
    func_0x0001006393ec();
  }
  func_0x00010789e4bc(uStack_1d8);
  if ((bool)uVar1) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar4 = puStack_480;
  puStack_480 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    func_0x00010789e4d0();
  }
  func_0x00010724bcd8(alStack_7d0);
  func_0x00010789e598();
  func_0x000107279270(&uStack_7f8);
  func_0x0001006393ec(auStack_748);
  func_0x00010789e550();
  func_0x00010789e808();
  puVar4 = puVar5;
code_r0x00010725b1d4:
  func_0x00010725c0a0();
  if (puVar5 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar4;
}



/* Entry: 10789bf00; end: 10789bf33;  */

void FUN_10789bf00(void)

{
  func_0x00010789e5bc();
  func_0x00010789e6fc();
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789c398; end: 10789c3c7;  */

void FUN_10789c398(undefined8 *param_1)

{
  undefined1 auStack_18 [8];
  
  (**(code **)(*(long *)*param_1 + 0x18))(auStack_18);
  func_0x00010789e584();
  return;
}



/* Entry: 10789c708; end: 10789c747;  */

void FUN_10789c708(undefined8 *param_1)

{
  undefined1 auStack_28 [8];
  
  (**(code **)(*(long *)*param_1 + 0x38))(auStack_28);
  func_0x00010789e544();
  func_0x00010789e584();
  return;
}



/* Entry: 10789cc18; end: 10789cc97;  */

void FUN_10789cc18(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = param_2;
  func_0x00010789e6e4();
  uVar1 = *param_2;
  func_0x00010002b838(&uStack_48,param_3);
  uVar2 = uStack_38;
  *puVar3 = uVar1;
  *(undefined8 *)(puVar3 + 0x10) = uStack_40;
  *(undefined8 *)(puVar3 + 8) = uStack_48;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *param_1 = puVar3;
  func_0x00010789e6ec();
  return;
}



/* Entry: 10789cdb4; end: 10789cdbf;  */

undefined ** FUN_10789cdb4(void)

{
  return &PTR_DAT_1109e5df8;
}



/* Entry: 10789cf14; end: 10789cf1f;  */

undefined ** FUN_10789cf14(void)

{
  return &PTR_DAT_1109e5e78;
}



/* Entry: 10789d10c; end: 10789d11f;  */

void FUN_10789d10c(void)

{
  func_0x00010789d200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789d280; end: 10789d29b;  */

void FUN_10789d280(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010789e860(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10789d3b8; end: 10789d3cf;  */

void FUN_10789d3b8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010789d3ec(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10789d5ec; end: 10789d637;  */

void FUN_10789d5ec(void)

{
  func_0x00010789e58c();
  func_0x00010789e834();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 10789dc70; end: 10789dc73;  */

undefined8 * FUN_10789dc70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e5fc8;
  func_0x00010789dd18(param_1 + 4);
  return param_1;
}



/* Entry: 10789deac; end: 10789ded7;  */

void FUN_10789deac(undefined8 param_1,undefined8 param_2)

{
  func_0x00010789e7d4(param_2,param_1,&PTR_DAT_1109e6068);
  func_0x00010789e734();
  return;
}



/* Entry: 10789e084; end: 10789e117;  */

/* WARNING: Possible PIC construction at 0x00010789e0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789e0c8) */
/* WARNING: Removing unreachable block (ram,0x00010789e114) */
/* WARNING: Removing unreachable block (ram,0x00010789e0fc) */

undefined1 * FUN_10789e084(void)

{
  undefined8 *in_x4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  func_0x00010789e724();
  func_0x00010789e4ec();
  __Znwm(0x58);
  uStack_78 = in_x4[1];
  uStack_80 = *in_x4;
  uStack_70 = in_x4[2];
  in_x4[1] = 0;
  in_x4[2] = 0;
  *in_x4 = 0;
  func_0x000105302f48(auStack_68,in_x4 + 3);
  return (undefined1 *)&uStack_80;
}



/* Entry: 10789e1f0; end: 10789e213;  */

void FUN_10789e1f0(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010789e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 10789e320; end: 10789e39f;  */

undefined8 * FUN_10789e320(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6188;
  func_0x00010789e34c(param_1 + 4);
  return param_1;
}



/* Entry: 10789e490; end: 10789e4bb;  */

undefined8 * FUN_10789e490(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6208;
  func_0x00010724bfc0(param_1 + 5);
  return param_1;
}



/* Entry: 10789e9bc; end: 10789e9c3;  */

void FUN_10789e9bc(void)

{
  return;
}



/* Entry: 10789eac4; end: 10789eafb;  */

void FUN_10789eac4(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010789ed10();
  func_0x00010789f294();
  *param_1 = param_2;
  return;
}



/* Entry: 10789ed98; end: 10789edf7;  */

undefined8 * FUN_10789ed98(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_DAT_1109e6410;
  func_0x0001072fb714();
  param_1[8] = 0;
  func_0x0001073af260();
  func_0x00010725b034(param_1 + 9);
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0xb] = puVar1;
  return param_1;
}



/* Entry: 10789f164; end: 10789f1e3;  */

void FUN_10789f164(long *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined1 *)0x30;
  __Znwm();
  func_0x00010002b838(&uStack_48,"");
  uVar1 = uStack_38;
  *puVar2 = param_2;
  *(undefined8 *)(puVar2 + 0x10) = uStack_40;
  *(undefined8 *)(puVar2 + 8) = uStack_48;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *param_1 = (long)puVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  return;
}



/* Entry: 10789f554; end: 10789f723;  */

/* WARNING: Possible PIC construction at 0x00010789f750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789f754) */
/* WARNING: Removing unreachable block (ram,0x00010789f798) */
/* WARNING: Removing unreachable block (ram,0x00010789f758) */
/* WARNING: Removing unreachable block (ram,0x00010789f850) */
/* WARNING: Removing unreachable block (ram,0x00010789f870) */
/* WARNING: Removing unreachable block (ram,0x00010789f8b8) */
/* WARNING: Removing unreachable block (ram,0x00010789f85c) */

long * FUN_10789f554(long *param_1,long param_2,undefined8 ****param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined1 **ppuStack_230;
  undefined *puStack_228;
  long **pplStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long alStack_108 [2];
  undefined1 auStack_f8 [80];
  undefined8 ***apppuStack_a8 [10];
  undefined8 uStack_58;
  
  ppppuVar5 = param_3;
  func_0x0001078a0154();
  uStack_58 = extraout_x8;
  func_0x0001072fc5ec(&lStack_110,param_4);
  ppuStack_128 = (undefined8 **)(*(long **)(param_2 + 8) + 2);
  puVar8 = (undefined8 *)**(long **)(param_2 + 8);
  uStack_118 = puVar8[1];
  uStack_120 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x0001078a0178();
    } while (extraout_w10 != 0);
  }
  lStack_140 = lStack_110;
  puVar8 = *(undefined8 **)(lStack_110 + 0x48);
  uStack_130 = puVar8[1];
  uStack_138 = *puVar8;
  if (puVar8[1] != 0) {
    do {
      func_0x0001078a0178();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010724bb70(alStack_108,&uStack_120);
  ppuVar1 = ppuStack_128;
  if (alStack_108[0] != 0) {
    func_0x00010789ae20(auStack_f8,param_3 + 1,&lStack_140);
    param_3 = (undefined8 ****)0x70;
    __Znwm();
    func_0x00010789ae50(apppuStack_a8,auStack_f8);
    *param_3 = (undefined8 ***)&PTR_DAT_1109e6588;
    param_3[1] = (undefined8 ***)ppuVar1;
    param_3[2] = (undefined8 ***)&UNK_10789f724;
    param_3[3] = (undefined8 ***)0x0;
    func_0x00010789ae50(param_3 + 4,apppuStack_a8);
    func_0x00010789aeec(apppuStack_a8);
    apppuStack_a8[0] = param_3;
    func_0x00010789aeec(auStack_f8);
    ppppuVar5 = apppuStack_a8;
    func_0x0001073ae140(alStack_108[0]);
    pppuVar3 = apppuStack_a8[0];
    apppuStack_a8[0] = (undefined8 ***)0x0;
    if ((undefined8 ****)pppuVar3 != (undefined8 ****)0x0) {
      func_0x0001078a01f0();
    }
  }
  func_0x00010724bcd8(alStack_108);
  func_0x00010724ae28(&uStack_138);
  func_0x00010724ae28(&uStack_120);
  lVar2 = lStack_110;
  lStack_110 = 0;
  *param_1 = lVar2;
  plVar4 = &lStack_110;
  func_0x0001072fbe0c();
  func_0x0001078a0140(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar3 = apppuStack_a8[0];
    apppuStack_a8[0] = (undefined8 ***)0x0;
    if (pppuVar3 != (undefined8 ***)0x0) {
      func_0x0001078a01f0();
    }
    func_0x00010724bcd8(alStack_108);
    func_0x00010724ae28(&uStack_138);
    func_0x00010724ae28(&uStack_120);
    func_0x0001072fbe0c(&lStack_110);
    func_0x0001078a0188();
    lStack_168 = alStack_108[0];
    puStack_148 = &UNK_10789f724;
    pplStack_170 = (long **)&ppuStack_128;
    pppuStack_160 = param_3;
    plStack_158 = plVar4;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x0001078a0154();
    ppppuVar7 = ppppuVar5;
    func_0x000107264c5c();
    ppppuVar6 = &pppuStack_240;
    puStack_228 = &UNK_10789f754;
    pppuStack_240 = ppppuVar5;
    pppuStack_238 = ppppuVar7;
    ppuStack_230 = &puStack_150;
    func_0x00010772cd00(&pppuStack_240,&DAT_10f3046e5,0);
    return (long *)(ulong)(ppppuVar6 == (undefined8 ****)0x0);
  }
  return plVar4;
}



/* Entry: 10789fd34; end: 10789fe5b;  */

/* WARNING: Possible PIC construction at 0x00010789fdf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010789fdf4) */
/* WARNING: Removing unreachable block (ram,0x00010789fe28) */
/* WARNING: Removing unreachable block (ram,0x00010789fe40) */
/* WARNING: Removing unreachable block (ram,0x00010789fe50) */
/* WARNING: Removing unreachable block (ram,0x00010789fe10) */

long ** FUN_10789fd34(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [240];
  
  func_0x0001078a0154();
  __ZNSt3__119__thread_local_dataEv();
  *param_1 = 0;
  func_0x000100491558();
  plVar5 = (long *)param_1[1];
  func_0x0001078bba88(param_1 + 2);
  if (param_1[10] != 0) {
    func_0x000104c003e8(param_1 + 7);
  }
  func_0x0001078980a4(auStack_120);
  plVar5[7] = (long)auStack_120;
  plStack_138 = plVar5 + 2;
  puVar4 = (undefined8 *)*plVar5;
  uStack_128 = puVar4[1];
  uStack_130 = *puVar4;
  if (puVar4[1] != 0) {
    plVar1 = (long *)(puVar4[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_140 = plVar5;
  func_0x00010724ae28(&uStack_130);
  func_0x0001073ada24(*plVar5,auStack_120);
  __ZNSt3__17promiseIvE9set_valueEv(param_1 + 6);
  _CFRunLoopRun();
  plVar5[7] = 0;
  func_0x0001073ada2c(*plStack_140);
  return &plStack_140;
}



/* Entry: 10789ff70; end: 10789ffbb;  */

void FUN_10789ff70(void)

{
  func_0x0001078a0164();
  func_0x0001078a0204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
  return;
}



/* Entry: 1078a005c; end: 1078a006f;  */

void FUN_1078a005c(void)

{
  func_0x0001078a0100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078a08fc; end: 1078a0b97;  */

long * FUN_1078a08fc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  undefined8 extraout_x8;
  long *plVar8;
  long *plVar9;
  int extraout_w10;
  int extraout_w10_00;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long *plStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long alStack_4d8 [2];
  long alStack_4c8 [4];
  long lStack_4a8;
  undefined1 auStack_4a0 [504];
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *apuStack_288 [3];
  long *plStack_270;
  undefined8 uStack_68;
  
  func_0x0001078a320c();
  lVar10 = *(long *)(param_2 + 8);
  uStack_68 = extraout_x8;
  func_0x0001072fbe64(alStack_4c8,param_4);
  plVar9 = alStack_4c8;
  func_0x0001072fc5ec(&lStack_4e0);
  lVar4 = lStack_4e0;
  puVar13 = *(undefined8 **)(lVar10 + 0x60);
  puVar5 = puVar13 + 2;
  plVar8 = (long *)*puVar13;
  lVar14 = *plVar8;
  lVar15 = plVar8[1];
  puStack_500 = puVar5;
  lStack_4f8 = lVar14;
  lStack_4f0 = lVar15;
  if (lVar15 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  lStack_4e8 = lVar4;
  func_0x0001078a34a8();
  *plVar9 = (long)&PTR_DAT_1109e66e0;
  plVar9[1] = (long)puVar5;
  plVar9[2] = lVar14;
  plVar9[3] = lVar15;
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  plVar9[4] = lVar4;
  ppuVar7 = apuStack_288;
  plStack_270 = plVar9;
  func_0x000100639330(lVar4 + 0x28,ppuVar7);
  func_0x0001006393ec(apuStack_288);
  func_0x00010724ae28(&lStack_4f8);
  plVar9 = *(long **)(lVar10 + 0x60);
  plStack_518 = plVar9 + 2;
  puVar13 = (undefined8 *)*plVar9;
  uStack_508 = puVar13[1];
  uStack_510 = *puVar13;
  if (puVar13[1] != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = lStack_4e0;
  lStack_530 = lStack_4e0;
  puVar13 = *(undefined8 **)(lStack_4e0 + 0x48);
  uStack_520 = puVar13[1];
  uStack_528 = *puVar13;
  if (puVar13[1] != 0) {
    plVar9 = (long *)(puVar13[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar13 = (undefined8 *)((ulong)&lStack_530 | 8);
  func_0x00010789ef18();
  func_0x00010724bb70(alStack_4d8,&uStack_510);
  plVar9 = plStack_518;
  if (alStack_4d8[0] != 0) {
    lStack_4a8 = lVar4;
    func_0x0001078a3390(auStack_4a0);
    uStack_2a0 = uStack_528;
    lStack_2a8 = lStack_530;
    uStack_298 = uStack_520;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar5 = (undefined8 *)0x240;
    __Znwm();
    FUN_1078a1784(apuStack_288,&lStack_4a8);
    *puVar5 = &PTR_DAT_1109e67a0;
    puVar5[1] = plVar9;
    puVar5[2] = &UNK_1078a0db4;
    puVar5[3] = 0;
    FUN_1078a1784(puVar5 + 4,apuStack_288);
    func_0x0001078a1848(apuStack_288);
    apuStack_288[0] = puVar5;
    func_0x0001078a1848(&lStack_4a8);
    ppuVar7 = apuStack_288;
    func_0x0001073ae140(alStack_4d8[0],ppuVar7);
    puVar5 = apuStack_288[0];
    apuStack_288[0] = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      func_0x0001078a3138();
    }
  }
  func_0x00010724bcd8(alStack_4d8);
  func_0x00010724ae28(puVar13);
  func_0x00010724ae28(&uStack_510);
  lVar4 = lStack_4e0;
  lStack_4e0 = 0;
  *param_1 = lVar4;
  func_0x0001072fbe0c(&lStack_4e0);
  plVar9 = alStack_4c8;
  func_0x0001072ad0c8();
  func_0x0001078a3168(uStack_68);
  if ((bool)in_ZR) {
    return plVar9;
  }
  ___stack_chk_fail();
  puVar5 = apuStack_288[0];
  apuStack_288[0] = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    func_0x0001078a3138();
  }
  func_0x00010724bcd8(alStack_4d8);
  func_0x00010724ae28(puVar13);
  func_0x00010724ae28(&uStack_510);
  func_0x0001072fbe0c(&lStack_4e0);
  plVar9 = alStack_4c8;
  func_0x0001072ad0c8();
  func_0x0001078a323c();
  puVar11 = (ulong *)plVar9[1];
  puVar1 = (ulong *)puVar11[9];
  for (puVar12 = (ulong *)puVar11[8]; puVar12 != puVar1; puVar12 = puVar12 + 2) {
    uVar6 = *puVar12;
    if ((uVar6 != 0) && (func_0x0001078a31bc(), (uVar6 & 1) != 0)) goto code_r0x0001078a0c04;
  }
  uVar6 = *puVar11;
  if ((((uVar6 == 0) || (func_0x0001078a31bc(), (uVar6 & 1) == 0)) &&
      ((uVar6 = puVar11[4], uVar6 == 0 || (func_0x0001078a31bc(), (uVar6 & 1) == 0)))) &&
     ((uVar6 = puVar11[2], uVar6 == 0 || (func_0x0001078a31bc(), (uVar6 & 1) == 0)))) {
    plVar8 = (long *)puVar11[6];
    plVar9 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001078a0c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x28))(plVar8,ppuVar7);
      return plVar8;
    }
  }
  else {
code_r0x0001078a0c04:
    plVar9 = (long *)0x1;
  }
  return plVar9;
}



/* Entry: 1078a1558; end: 1078a157b;  */

void FUN_1078a1558(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e66e0;
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  lVar2 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001078a31ac();
    } while (extraout_w10 != 0);
  }
  param_2[4] = puVar1[3];
  return;
}



/* Entry: 1078a1784; end: 1078a17d3;  */

undefined8 * FUN_1078a1784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  func_0x0001072d62a0(param_1 + 1,param_2 + 1);
  uVar1 = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = uVar1;
  param_1[0x42] = param_2[0x42];
  param_2[0x42] = 0;
  param_2[0x41] = 0;
  param_1[0x43] = param_2[0x43];
  return param_1;
}



/* Entry: 1078a1de0; end: 1078a1e13;  */

void FUN_1078a1de0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001078a345c();
  func_0x0001078a3438();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x20 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar1;
  return;
}



/* Entry: 1078a1f10; end: 1078a1f43;  */

void FUN_1078a1f10(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001078a345c();
  func_0x0001078a3438();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x19 + 0x218) = *(undefined8 *)(unaff_x20 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar1;
  return;
}



/* Entry: 1078a2204; end: 1078a2243;  */

void FUN_1078a2204(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  func_0x0001078a3154();
  func_0x0001078a317c(param_1,param_2,*unaff_x19);
  func_0x0001078a34bc();
  func_0x000107499658();
  func_0x0001078a32dc();
  func_0x0001078a31f0();
  return;
}



/* Entry: 1078a23a4; end: 1078a2533;  */

void FUN_1078a23a4(long param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long lVar2;
  long lVar3;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 auStack_230 [3];
  undefined1 uStack_22d;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [168];
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x0001078a320c();
  lVar3 = *(long *)(lVar3 + 0x420);
  uStack_38 = extraout_x8;
  func_0x0001072d488c(auStack_230,param_1 + 8);
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    lVar2 = param_2;
    func_0x00010789cbc4();
    if ((int)lVar2 == 0) {
      func_0x0001072631dc(auStack_e0,param_2 + 0x20);
    }
    else {
      func_0x0001078a1938(param_1 + 0x200,param_2);
      uStack_22d = 1;
    }
    uStack_120 = *(undefined8 *)(param_2 + 0x30);
    uStack_118 = *(undefined1 *)(param_2 + 0x38);
    uStack_110 = *(undefined8 *)(param_2 + 0x40);
    uStack_108 = *(undefined1 *)(param_2 + 0x48);
    func_0x0001002a969c(auStack_100,param_2 + 0x50);
  }
  uStack_248 = *(undefined8 *)(param_1 + 0x428);
  plVar1 = (long *)(lVar3 + 0x68);
  func_0x0001078a1874(plVar1,&uStack_248);
  lStack_240 = *plVar1;
  *plVar1 = 0;
  func_0x0001078a1bf4(&lStack_238,param_1 + 0x430,auStack_230,&lStack_240);
  uStack_250 = *(undefined8 *)(param_1 + 0x428);
  plVar1 = (long *)(lVar3 + 0x68);
  func_0x0001078a1874(plVar1,&uStack_250);
  lVar3 = lStack_238;
  lStack_238 = 0;
  lVar2 = *plVar1;
  *plVar1 = lVar3;
  if (lVar2 != 0) {
    func_0x0001078a3144();
  }
  lVar3 = lStack_238;
  lStack_238 = 0;
  if (lVar3 != 0) {
    func_0x0001078a3138();
  }
  if (lStack_240 != 0) {
    func_0x0001078a3138();
  }
  func_0x00010724b374();
  func_0x0001078a3168(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = lStack_238;
  lStack_238 = 0;
  if (lVar3 != 0) {
    func_0x0001078a3138();
  }
  if (lStack_240 != 0) {
    func_0x0001078a3138();
  }
  func_0x00010724b374(auStack_230);
  func_0x0001078a323c();
  func_0x0001078a3400();
  func_0x0001078a3348();
  func_0x0001078a32fc();
  return;
}



/* Entry: 1078a2650; end: 1078a265f;  */

void FUN_1078a2650(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001078a322c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1078a2730; end: 1078a27c7;  */

void FUN_1078a2730(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x0001078a320c();
  uStack_28 = extraout_x8;
  if (((*(byte *)(*(long *)(lVar1 + 0x18) + 0x60) & 1) == 0) &&
     (plVar2 = *(long **)(*(long *)(lVar1 + 0x18) + 0x10), plVar2 != (long *)0x0)) {
    uStack_30 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1 + 0x20,param_2,auStack_48);
    func_0x0001006393ec(auStack_48);
  }
  func_0x0001078a1938(param_1 + 0x218,param_2);
  func_0x0001078a3168(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_48);
  func_0x0001078a323c();
  func_0x0001078a3400();
  func_0x0001078a3348();
  func_0x0001078a32fc();
  return;
}



/* Entry: 1078a292c; end: 1078a2937;  */

void FUN_1078a292c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078a34a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078a2cc4; end: 1078a2d23;  */

long * FUN_1078a2cc4(long *param_1)

{
  long lVar1;
  
  func_0x0001073ada2c(*(undefined8 *)*param_1);
  lVar1 = *param_1;
  func_0x0001078a2c64(lVar1 + 0x78);
  func_0x0001072aeba4(lVar1 + 0x50);
  func_0x00010724bd50(lVar1 + 0x40);
  func_0x00010724bd50(lVar1 + 0x30);
  func_0x00010724bd50(lVar1 + 0x20);
  func_0x00010724bd50(lVar1 + 0x10);
  return param_1;
}



/* Entry: 1078a3064; end: 1078a3067;  */

void FUN_1078a3064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6a88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a35b0; end: 1078a3657;  */

void FUN_1078a35b0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  int iStack_38;
  
  plVar1 = &lStack_40;
  plVar2 = &lStack_40;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    (**(code **)(*param_2 + 0xd0))(&lStack_40);
    if (iStack_38 == 0) {
      func_0x0001078a3c78(&lStack_40);
      __ZNSt13exception_ptrC1ERKS_(param_1,plVar2);
    }
    else {
      func_0x0001078a3c90();
      lVar3 = *plVar1;
      if ((*(byte *)(param_2 + 2) & 1) == 0) {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      param_2[1] = lVar3;
    }
    func_0x0001078a3cac(&lStack_40);
    if (iStack_38 == 0) {
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1078a3d00; end: 1078a3da7;  */

void FUN_1078a3d00(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptrD1Ev_110346198)(param_2);
  return;
}



/* Entry: 1078a4198; end: 1078a419b;  */

undefined8 * FUN_1078a4198(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_1109e6b88;
  param_1[1] = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0xf8);
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x100) != 0) {
        FUN_1078a63a0(lVar3);
      }
      __ZNSt3__17promiseIvEC1Ev(auStack_78);
      func_0x00010789ad44(lVar3 + 0xf8);
      uVar4 = *(undefined8 *)(lVar3 + 0x110);
      func_0x000107898fb8(&puStack_70);
      *(undefined1 *)puStack_70 = 0;
      puVar1 = (undefined8 *)0x80;
      __Znwm();
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_DAT_1109e71e0;
      puStack_60 = puStack_70;
      puStack_58 = (undefined8 *)lStack_68;
      if (lStack_68 != 0) {
        do {
          func_0x0001078a72dc();
        } while (extraout_w10 != 0);
      }
      puVar1[3] = &PTR_DAT_1109e7230;
      __ZNSt3__115recursive_mutexC1Ev(puVar1 + 4);
      puVar1[0xc] = puStack_70;
      puVar1[0xd] = lStack_68;
      puStack_60 = (undefined8 *)0x0;
      puStack_58 = (undefined8 *)0x0;
      puVar1[0xe] = auStack_78;
      func_0x0001078a73e0();
      puStack_60 = puVar1 + 3;
      puStack_58 = puVar1;
      func_0x0001078a73d0();
      func_0x00010789895c(uVar4,0,&puStack_60);
      func_0x0001078a73d8();
      __ZNSt3__17promiseIvE10get_futureEv(&puStack_60,auStack_78);
      __ZNSt3__16futureIvE3getEv(&puStack_60);
      __ZNSt3__16futureIvED1Ev(&puStack_60);
      func_0x00010789846c(*(undefined8 *)(lVar3 + 0x110));
      __ZNSt3__16thread4joinEv(lVar3 + 0xf0);
      __ZNSt3__17promiseIvED1Ev(auStack_78);
      func_0x00010787b3fc(lVar3 + 0x108);
      func_0x00010787b3fc(lVar3 + 0x100);
      __ZNSt3__16futureIvED1Ev(lVar3 + 0xf8);
      __ZNSt3__16threadD1Ev(lVar3 + 0xf0);
      func_0x00010724b54c(lVar3);
      __ZdlPv();
    }
    __ZNSt3__15mutexD1Ev(lVar2 + 0xb0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + 0x98);
    __ZNSt3__15mutexD1Ev(lVar2 + 0x58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + 0x40);
    __ZNSt3__15mutexD1Ev(lVar2);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078a4860; end: 1078a4baf;  */

void FUN_1078a4860(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar4;
  long alStack_78 [3];
  long alStack_60 [3];
  undefined8 *puStack_48;
  
  puVar3 = param_1;
  func_0x0001078a73f8(param_1,&UNK_10f4060d6);
  if ((int)puVar3 == 0) {
    func_0x0001078a73f8();
    if ((int)puVar3 == 0) {
      func_0x0001078a73f8();
      if ((int)puVar3 == 0) {
        func_0x0001078a73f8();
        if ((int)puVar3 == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (alStack_60,&UNK_10f4328eb,param_2);
          func_0x0001078a7384();
          return;
        }
        if (*param_3 != 6) {
          return;
        }
        alStack_60[0] = *(long *)(param_1[1] + 0xf8) + 0x10;
        iVar1 = param_3[2];
        func_0x0001078a7330();
        if (extraout_x8_02 != 0) {
          do {
            func_0x0001078a72dc();
          } while (extraout_w10_02 != 0);
        }
        func_0x0001078a7420();
        lVar4 = alStack_60[0];
        if (alStack_78[0] != 0) {
          func_0x0001078a7328();
          *puVar3 = &PTR_DAT_1109e7030;
          puVar3[1] = lVar4;
          puVar3[2] = &UNK_1078a65c0;
          puVar3[3] = 0;
          *(char *)(puVar3 + 4) = (char)iVar1;
          puStack_48 = puVar3;
          func_0x0001078a7354();
          puVar3 = puStack_48;
          puStack_48 = (undefined8 *)0x0;
          if (puVar3 != (undefined8 *)0x0) {
            func_0x0001078a729c();
          }
        }
        func_0x0001078a737c();
        func_0x0001078a7418();
        return;
      }
      if (*param_3 != 5) {
        return;
      }
      lVar4 = param_1[1];
      alStack_60[0] = *(long *)(lVar4 + 0xf8) + 0x10;
      iVar1 = param_3[2];
      func_0x0001078a7330();
      if (extraout_x8_01 != 0) {
        do {
          func_0x0001078a72dc();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001078a7420();
      lVar2 = alStack_60[0];
      if (alStack_78[0] != 0) {
        func_0x0001078a7328();
        *puVar3 = &PTR_DAT_1109e6ff0;
        puVar3[1] = lVar2;
        puVar3[2] = &UNK_1078a658c;
        puVar3[3] = 0;
        *(int *)(puVar3 + 4) = iVar1;
        puStack_48 = puVar3;
        func_0x0001078a7354();
        puVar3 = puStack_48;
        puStack_48 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          func_0x0001078a729c();
        }
      }
      func_0x0001078a737c();
      func_0x0001078a7418();
      func_0x0001072ab574(lVar4 + 0xb0);
      *(int *)(lVar4 + 0xf0) = iVar1;
      lVar4 = lVar4 + 0xb0;
    }
    else {
      lVar4 = param_1[1];
      func_0x000107874d9c();
      if (param_3 == (int *)0x0) {
        return;
      }
      alStack_60[0] = *(long *)(lVar4 + 0xf8) + 0x10;
      func_0x0001078a7330();
      if (extraout_x8_00 != 0) {
        do {
          func_0x0001078a72dc();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010724ef84(alStack_78,param_3);
      func_0x0001078a73e8();
      func_0x0001078a73a0();
      func_0x0001078a7418();
      func_0x0001072ab574(lVar4 + 0x58);
      func_0x00010724ef84(alStack_60,param_3);
      func_0x000100066230(lVar4 + 0x98,alStack_60);
      func_0x0001078a7384();
      lVar4 = lVar4 + 0x58;
    }
  }
  else {
    lVar4 = param_1[1];
    func_0x000107874d9c();
    if (param_3 == (int *)0x0) {
      return;
    }
    alStack_60[0] = *(long *)(lVar4 + 0xf8) + 0x10;
    func_0x0001078a7330();
    if (extraout_x8 != 0) {
      do {
        func_0x0001078a72dc();
      } while (extraout_w10 != 0);
    }
    func_0x00010724ef84(alStack_78,param_3);
    func_0x0001078a73e8();
    func_0x0001078a73a0();
    func_0x0001078a742c();
    func_0x0001072ab574(lVar4);
    func_0x00010724ef84(alStack_60,param_3);
    func_0x000100066230(lVar4 + 0x40,alStack_60);
    func_0x0001078a7384();
  }
  __ZNSt3__15mutex6unlockEv(lVar4);
  return;
}



/* Entry: 1078a4f7c; end: 1078a4f7f;  */

void FUN_1078a4f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6c08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078a517c; end: 1078a5187;  */

undefined ** FUN_1078a517c(void)

{
  return &PTR_DAT_1109e6cf8;
}



/* Entry: 1078a572c; end: 1078a572f;  */

undefined8 * FUN_1078a572c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e6d18;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 1078a5890; end: 1078a58cf;  */

void FUN_1078a5890(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1109e6d18;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  lVar1 = param_2[2];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001078a72dc();
    } while (extraout_w10 != 0);
  }
  param_1[4] = param_2[3];
  return;
}



/* Entry: 1078a5f50; end: 1078a5f87;  */

void FUN_1078a5f50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_1109e6dc8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078a60a4; end: 1078a6143;  */

undefined8 * FUN_1078a60a4(long param_1)

{
  long *plVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 auStack_240 [63];
  undefined8 uStack_48;
  
  puVar3 = auStack_240;
  puVar4 = auStack_240;
  lVar2 = param_1;
  func_0x0001078a72c0();
  pcVar6 = *(code **)(lVar2 + 0x10);
  plVar1 = (long *)(*(long *)(lVar2 + 8) + ((long)*(ulong *)(lVar2 + 0x18) >> 1));
  if ((*(ulong *)(lVar2 + 0x18) & 1) != 0) {
    pcVar6 = *(code **)(*plVar1 + ((ulong)pcVar6 & 0xffffffff));
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = extraout_x8;
  func_0x0001072d62a0(auStack_240,param_1 + 0x28);
  (*pcVar6)(plVar1,uVar5,auStack_240,param_1 + 0x220);
  func_0x00010724b374();
  func_0x0001078a7288(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010724b374();
  func_0x0001078a7304();
  *puVar4 = &PTR_DAT_1109e6e58;
  func_0x0001078a6170(puVar4 + 4);
  return puVar4;
}



/* Entry: 1078a6244; end: 1078a629b;  */

undefined8 * FUN_1078a6244(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e6e98;
  func_0x00010724ae28(param_1 + 2);
  return param_1;
}



/* Entry: 1078a63a0; end: 1078a63d7;  */

/* WARNING: Possible PIC construction at 0x0001078a63c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a63c4) */

void FUN_1078a63a0(long param_1)

{
  long lVar1;
  
  __ZNSt3__17promiseIvE9set_valueEv(*(undefined8 *)(param_1 + 0x108));
  lVar1 = *(long *)(param_1 + 0x108);
  *(long *)(param_1 + 0x108) = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__17promiseIvED1Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078a6678; end: 1078a6707;  */

void FUN_1078a6678(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1078a66b8;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1078a66b8:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 1078a6858; end: 1078a68ef;  */

/* WARNING: Possible PIC construction at 0x0001078a5c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078a5c40) */

void FUN_1078a6858(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar11;
  long unaff_x19;
  long lVar12;
  long lVar13;
  long unaff_x20;
  long *plVar14;
  undefined1 auStack_288 [8];
  long lStack_280;
  undefined1 *puStack_278;
  char cStack_26f;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  byte bStack_250;
  undefined1 *puStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 auStack_238 [24];
  char cStack_220;
  undefined1 auStack_208 [128];
  undefined1 auStack_188 [32];
  undefined8 uStack_168;
  undefined8 uStack_118;
  long alStack_110 [2];
  undefined7 uStack_100;
  undefined4 uStack_f9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  plVar14 = *(long **)(param_1 + 8);
  lVar12 = *plVar14;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar14[0x50] = param_1;
  if ((ulong)*(uint *)(lVar12 + 0x7c) <= *(ulong *)(lVar12 + 0x70)) {
    lVar6 = lVar12 + 0x40;
    lVar13 = *(long *)(lVar12 + 0x58);
    if ((*(byte *)((long)plVar14 + 0xb) & 1) == 0) {
      func_0x0001078a6924(lVar6,lVar13,plVar14);
      *(long *)(lVar12 + 0x58) = lVar6;
      lVar10 = *(long *)(lVar6 + 8);
    }
    else {
      lVar10 = lVar6;
      func_0x0001078a6924(lVar6,lVar6,plVar14);
      if (lVar13 != lVar6) {
        return;
      }
    }
    *(long *)(lVar12 + 0x58) = lVar10;
    return;
  }
  func_0x0001078a7400(lVar12,plVar14);
  func_0x0001078a72c0();
  uStack_38 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_90 = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x60);
  lStack_88 = unaff_x20;
  lStack_80 = unaff_x19;
  lStack_78 = lVar12;
  func_0x0001078a4df0(puVar5,unaff_x19);
  uVar3 = *(char *)(unaff_x20 + 0x78) == '\x01';
  if ((bool)uVar3) {
    func_0x0001078a7328();
    *puVar5 = &PTR_DAT_1109e6dc8;
    puVar5[2] = lStack_88;
    puVar5[1] = CONCAT44(uStack_8c,uStack_90);
    puVar5[4] = lStack_78;
    puVar5[3] = lStack_80;
    plVar14 = (long *)(unaff_x19 + 8);
    puStack_40 = puVar5;
    func_0x0001078b70bc(alStack_110,unaff_x20 + 0x80,plVar14,auStack_58);
    lVar12 = alStack_110[0];
    alStack_110[0] = 0;
    lVar6 = *(long *)(unaff_x19 + 0x200);
    *(long *)(unaff_x19 + 0x200) = lVar12;
    if (lVar6 != 0) {
      func_0x0001078a729c();
      lVar12 = alStack_110[0];
      alStack_110[0] = 0;
      if (lVar12 != 0) {
        func_0x0001078a729c();
      }
    }
    func_0x0001072ad0c8();
    func_0x0001078a7288(uStack_38);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    plVar8 = alStack_110;
    func_0x00010724b340();
    func_0x0001078a734c();
  }
  else {
    alStack_110[0] = CONCAT71(alStack_110[0]._1_7_,1);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_100 = 0;
    uStack_f9 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puVar7 = (undefined1 *)0x30;
    __Znwm();
    func_0x00010002b838(&uStack_70,&UNK_10f432a3e);
    uVar11 = uStack_60;
    *puVar7 = 4;
    *(undefined8 *)(puVar7 + 0x10) = uStack_68;
    *(undefined8 *)(puVar7 + 8) = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x18) = uVar11;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uStack_118 = 0;
    func_0x00010724b300(&uStack_100,puVar7);
    func_0x0001072d6f8c(&uStack_118);
    plVar8 = (long *)&uStack_90;
    plVar14 = alStack_110;
  }
  plVar9 = plVar8;
  func_0x0001078a72c0();
  lVar12 = plVar9[1];
  uStack_168 = extraout_x8_00;
  func_0x0001078a5a84(lVar12 + 0x60,plVar9[2]);
  lVar13 = plVar8[2];
  lVar6 = *(long *)(lVar13 + 0x200);
  *(undefined8 *)(lVar13 + 0x200) = 0;
  if (lVar6 != 0) {
    func_0x0001078a729c();
    lVar13 = plVar8[2];
  }
  puVar7 = auStack_288;
  func_0x0001075281c8(puVar7,plVar14);
  lVar6 = plVar8[3];
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_280 = ((long)puVar7 - lVar6) / 1000;
  if ((bStack_250 & 1) == 0) {
    uStack_258 = *(undefined8 *)(lVar13 + 0x118);
    bStack_250 = *(byte *)(lVar13 + 0x120);
  }
  else {
    *(undefined8 *)(lVar13 + 0x118) = uStack_258;
    *(byte *)(lVar13 + 0x120) = bStack_250;
  }
  if ((cStack_26f == '\x01') && (*(long *)(lVar13 + 0x158) != 0)) {
    puVar7 = auStack_268;
    func_0x000104c2f98c(puVar7,lVar13 + 0x158);
    cStack_26f = '\0';
  }
  if (bStack_240 == 1) {
    puVar1 = *(undefined1 **)(lVar13 + 0x128);
    uVar2 = *(ulong *)(lVar13 + 0x130);
    *(undefined1 **)(lVar13 + 0x128) = puStack_248;
    *(undefined1 *)(lVar13 + 0x130) = 1;
    func_0x00010789a00c();
    if ((long)puVar7 < (long)puStack_248) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (((uVar2 & 1) != 0) &&
         (lVar6 = (long)puStack_248 - (long)puVar1, (long)puVar1 <= (long)puStack_248)) {
        if (lVar6 < 0x1f) {
          lVar6 = 0x1e;
        }
        bVar4 = puStack_248 == puVar1;
        puStack_248 = puVar1;
        if (!bVar4) {
          puStack_248 = puVar7 + lVar6;
        }
      }
    }
    if ((bStack_240 & 1) == 0) {
      bStack_240 = 1;
    }
    if (bVar4) {
      *(int *)(lVar13 + 0x260) = *(int *)(lVar13 + 0x260) + 1;
      goto code_r0x0001078a5df8;
    }
  }
  *(undefined4 *)(lVar13 + 0x260) = 0;
code_r0x0001078a5df8:
  uVar3 = cStack_220 == '\0';
  puVar7 = auStack_238;
  puVar1 = (undefined1 *)(lVar13 + 0x138);
  if ((bool)uVar3) {
    puVar7 = (undefined1 *)(lVar13 + 0x138);
    puVar1 = auStack_238;
  }
  func_0x0001002a969c(puVar1,puVar7);
  if (puStack_278 == (undefined1 *)0x0) {
    *(undefined4 *)(lVar13 + 0x264) = 0;
    *(undefined1 *)(lVar13 + 0x268) = 1;
  }
  else {
    *(int *)(lVar13 + 0x264) = *(int *)(lVar13 + 0x264) + 1;
    *(undefined1 *)(lVar13 + 0x268) = *puStack_278;
    uVar11 = *(undefined8 *)(puStack_278 + 0x20);
    *(undefined1 *)(lVar13 + 0x278) = puStack_278[0x28];
    *(undefined8 *)(lVar13 + 0x270) = uVar11;
  }
  lVar6 = lVar13;
  func_0x0001078a3dec(lVar13,puStack_248,CONCAT71(uStack_23f,bStack_240));
  func_0x0001078a3e48(lVar13,lVar6);
  func_0x0001072fb714(auStack_188,lVar13 + 0x210);
  func_0x0001075281c8(auStack_208,auStack_288);
  func_0x0001072fb768(auStack_188,auStack_208);
  func_0x00010724b340(auStack_208);
  func_0x0001072ad0c8(auStack_188);
  func_0x00010724b340(auStack_288);
  func_0x0001078a5a20(lVar12);
  func_0x0001078a7288(uStack_168);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b340(auStack_208);
  func_0x0001072ad0c8(auStack_188);
  func_0x00010724b340(auStack_288);
  func_0x0001078a7304();
  return;
}



/* Entry: 1078a6f40; end: 1078a6f8b;  */

void FUN_1078a6f40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e7130;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078a71d0; end: 1078a71db;  */

void FUN_1078a71d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078a7458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078a76f4; end: 1078a77b7;  */

void FUN_1078a76f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x0001078a75f8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001078a77b8(param_1,param_3[2]);
  puVar2 = (undefined8 *)*param_3;
  uVar1 = 0;
  while (puVar2 != param_3 + 1) {
    uVar3 = puVar2[4];
    func_0x0001078a7840(auStack_58,param_2,uVar1,uVar3);
    func_0x0001078a8318(param_1,auStack_58);
    func_0x00010089ccb4(auStack_58);
    func_0x00010002c7d4();
    uVar1 = uVar3;
  }
  return;
}



/* Entry: 1078a8188; end: 1078a820b;  */

void FUN_1078a8188(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1078a847c; end: 1078a851f;  */

long FUN_1078a847c(long *param_1,undefined1 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  func_0x0001001e7ae4(param_1,(param_1[1] - *param_1) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x00010002b988();
  }
  puStack_50 = (undefined1 *)((long)plStack_58 + (lVar1 - lVar3));
  lStack_40 = (long)plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  func_0x0001001e7b2c(param_1,&plStack_58);
  lVar3 = param_1[1];
  func_0x0001078a8a0c();
  return lVar3;
}



/* Entry: 1078a882c; end: 1078a8843;  */

void FUN_1078a882c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078a8860(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078a8fc4; end: 1078a910b;  */

void FUN_1078a8fc4(void)

{
  return;
}



/* Entry: 1078a95a8; end: 1078a95c7;  */

void FUN_1078a95a8(long *param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  undefined8 extraout_x8;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lStack_48;
  
  lVar3 = *param_1;
  _pthread_setspecific();
  if ((int)lVar3 == 0) {
    return;
  }
  _abort();
  param_2 = lVar3 + param_2;
  func_0x0001078a9b2c();
  func_0x0001078a96a0(extraout_x8,param_2 - lVar3);
  do {
    while( true ) {
      if (unaff_x22 == unaff_x21) {
        return;
      }
      uVar2 = (uint)&lStack_48;
      func_0x0001078a976c();
      if (0xfffffffd < uVar2) break;
      func_0x0001078a98ac();
      unaff_x22 = lStack_48;
    }
    unaff_x22 = lStack_48;
  } while (unaff_w20 != 1);
  ___cxa_allocate_exception(0x10);
  func_0x0001078a9908();
  func_0x0001078a9b0c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a9650);
  (*pcVar1)();
}



/* Entry: 1078a9944; end: 1078a99e7;  */

void FUN_1078a9944(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lStack_38;
  
  func_0x0001078a9b2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm();
  do {
    while( true ) {
      if (unaff_x22 == unaff_x21) {
        return;
      }
      uVar2 = (uint)&lStack_38;
      func_0x0001078a99e8();
      if (0xfffffffd < uVar2) break;
      func_0x0001078a9a60();
      unaff_x22 = lStack_38;
    }
    unaff_x22 = lStack_38;
  } while (unaff_w20 != 1);
  ___cxa_allocate_exception(0x10);
  func_0x0001078a9908();
  func_0x0001078a9b0c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078a99c4);
  (*pcVar1)();
}



/* Entry: 1078a9c08; end: 1078a9c63;  */

void FUN_1078a9c08(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078a9c88();
  func_0x0001078b1940();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1078aabc4; end: 1078aac5b;  */

void FUN_1078aabc4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  func_0x0001078af124(0xe1,param_1,param_2,param_1);
  func_0x0001078af3c0();
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_44 = 1;
  func_0x0001078af230();
  func_0x0001072bbe40(auStack_90);
  auStack_a0[0] = 1;
  uStack_98 = 0;
  uStack_b0 = *param_3;
  uStack_a8 = 3;
  func_0x00010743fa9c(param_3,auStack_90,auStack_a0,&uStack_b0,7);
  func_0x0001078af1e4();
  return;
}



/* Entry: 1078ab5ac; end: 1078ab5ff;  */

void FUN_1078ab5ac(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 uStack_24;
  
  func_0x0001078af318();
  uStack_24 = 0;
  _glGenFramebuffers(1,&uStack_24);
  piVar1 = (int *)(unaff_x20 + 0x74);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *unaff_x19 = uStack_24;
  *(long *)(unaff_x19 + 2) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 4) = 1;
  return;
}



/* Entry: 1078abe2c; end: 1078abe6b;  */

int * FUN_1078abe2c(int *param_1,int param_2)

{
  if (((*(byte *)(param_1 + 1) & 1) != 0) || (*param_1 != param_2)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = param_2;
    func_0x0001078b6564(param_1);
  }
  return param_1;
}



/* Entry: 1078ac784; end: 1078ac83b;  */

void FUN_1078ac784(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 500) = 1;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  *(undefined1 *)(param_1 + 0x201) = 1;
  *(undefined1 *)(param_1 + 0x206) = 1;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined1 *)(param_1 + 0x215) = 1;
  *(undefined1 *)(param_1 + 0x218) = 1;
  *(undefined1 *)(param_1 + 0x21b) = 1;
  *(undefined1 *)(param_1 + 0x21e) = 1;
  *(undefined1 *)(param_1 + 0x221) = 1;
  *(undefined1 *)(param_1 + 0x225) = 1;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined1 *)(param_1 + 0x240) = 1;
  *(undefined1 *)(param_1 + 0x248) = 1;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined1 *)(param_1 + 0x264) = 1;
  *(undefined1 *)(param_1 + 0x279) = 1;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  *(undefined1 *)(param_1 + 0x27f) = 1;
  *(undefined1 *)(param_1 + 0x178) = 1;
  *(undefined1 *)(param_1 + 0x26c) = 1;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  for (lVar2 = 0; lVar2 != 0x60; lVar2 = lVar2 + 0xc) {
    *(undefined1 *)(param_1 + 0x11c + lVar2) = 1;
  }
  *(undefined1 *)(param_1 + 0x180) = 1;
  *(undefined1 *)(param_1 + 0x194) = 1;
  *(undefined1 *)(param_1 + 0x1bc) = 1;
  lVar1 = *(long *)(param_1 + 0x1c8);
  for (lVar2 = *(long *)(param_1 + 0x1c0); lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    *(undefined1 *)(lVar2 + 8) = 1;
  }
  return;
}



/* Entry: 1078ad66c; end: 1078ad69b;  */

void FUN_1078ad66c(void)

{
  undefined1 in_ZR;
  uint extraout_w9;
  
  func_0x0001078af15c();
  if (((extraout_w9 & 1) != 0) || (func_0x0001078af2d0(), !(bool)in_ZR)) {
    func_0x0001078af14c();
    FUN_1078aedb8();
  }
  return;
}



/* Entry: 1078adf24; end: 1078adf3f;  */

void FUN_1078adf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _glClearStencil(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glClear_11034b3e8)(0x400);
  return;
}



/* Entry: 1078ae2a8; end: 1078ae3c3;  */

void FUN_1078ae2a8(void)

{
  func_0x0001078af134();
  return;
}



/* Entry: 1078ae5e4; end: 1078ae60f;  */

void FUN_1078ae5e4(undefined4 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x0001078aff18(param_1 + 2,*param_1);
  }
  return;
}



/* Entry: 1078ae700; end: 1078ae727;  */

void FUN_1078ae700(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0001078ae728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078ae90c; end: 1078ae937;  */

long * FUN_1078ae90c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078ae9e4; end: 1078aea0b;  */

bool FUN_1078ae9e4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  _strstr(lVar1,*param_2);
  return lVar1 != 0;
}



/* Entry: 1078aeb70; end: 1078aeb93;  */

void FUN_1078aeb70(void)

{
  undefined1 in_ZR;
  
  func_0x0001078af35c();
  if ((bool)in_ZR) {
    func_0x0001078af350();
    func_0x0001078afed0();
  }
  return;
}



/* Entry: 1078aedb8; end: 1078aedc3;  */

void FUN_1078aedb8(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)PTR__glBindVertexArray_113230870;
  if ((*(char *)(*(long *)(param_1 + 2) + 0x3e9) != '\x01') &&
     ((plVar1 = *(long **)(*(long *)(param_1 + 2) + 0xc0), plVar1 == (long *)0x0 ||
      (UNRECOVERED_JUMPTABLE = (code *)*plVar1, UNRECOVERED_JUMPTABLE == (code *)0x0)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001078b661c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}



/* Entry: 1078af7e4; end: 1078af91f;  */

undefined4 FUN_1078af7e4(int param_1)

{
  if (param_1 - 1U < 5) {
    return *(undefined4 *)(&UNK_10deb4534 + ((ulong)(param_1 - 1U) & 0xff) * 4);
  }
  return 0x2600;
}



/* Entry: 1078afe80; end: 1078afe83;  */

undefined8 * FUN_1078afe80(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1109e7760;
  lVar4 = param_1[4];
  plVar1 = (long *)(param_1[2] + 0x88);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae59c(param_1 + 1);
  return param_1;
}



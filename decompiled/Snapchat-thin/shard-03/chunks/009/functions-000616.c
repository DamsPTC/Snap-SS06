/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102eefae8; end: 102eefc67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eefae8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar5 = *(long *)(param_3 + _DAT_112f27f10);
    func_0x000107c61174();
    func_0x000107c61170(param_3);
    lVar3 = *(long *)(lVar5 + _DAT_112ff2c78);
    func_0x000107c61174();
    func_0x000107c61170(lVar5);
    lVar5 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      func_0x000107c61428(param_6 + 0x10,auStack_80,0,0);
      uVar6 = *(undefined8 *)(param_6 + 0x10);
      uVar4 = uVar6;
      func_0x000107c61434(uVar6);
      puVar2 = PTR___sSSSHsWP_11034da90;
      puVar1 = PTR___sSSN_11034da80;
      func_0x000107c5f9dc();
      func_0x000107c6142c(uVar6);
      uVar6 = 0;
      FUN_102f09540(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c5f9dc(param_7,puVar1,uVar6,puVar2);
      func_0x000107c49758(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(param_7);
    }
  }
  return;
}



/* Entry: 102eefc68; end: 102ef02bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eefc68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_90 [32];
  
  lVar5 = 0;
  pcStack_150 = param_6;
  uStack_148 = param_7;
  func_0x000107c5eea4();
  lStack_120 = *(long *)(lVar5 + -8);
  lStack_118 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_120 + 0x40));
  lVar16 = (long)&lStack_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5f7fc();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5f824();
  lVar20 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lStack_158 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lStack_110 = param_3;
  if (param_3 != 0) {
    if (param_1 != 0) {
      lStack_180 = lVar20;
      lStack_178 = lVar6;
      lStack_170 = lVar18;
      lStack_168 = lVar17;
      lStack_160 = lVar5;
      func_0x000107c61174();
      lStack_138 = param_1;
      func_0x000107c5fadc();
      uVar7 = param_4;
      func_0x000108ea5f00();
      func_0x000107c61180();
      func_0x000107c61170(param_4);
      uVar8 = uVar7;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x000107c60f34();
      lVar5 = 0x112d38280;
      uStack_128 = uVar7;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      *(undefined8 *)(lVar5 + 0x28) = param_5;
      func_0x000107c5fb24();
      *(undefined8 *)(lVar5 + 0x30) = uVar8;
      *(undefined8 *)(lVar5 + 0x38) = param_5;
      lVar6 = lVar5;
      func_0x000100403a6c();
      func_0x000107c61588(lVar5);
      func_0x000107c61408((undefined8 *)(lVar5 + 0x20),2,PTR___sSSN_11034da80);
      lVar5 = 0;
      uVar15 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
      uVar19 = 0xffffffffffffffff;
      if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
        uVar19 = ~(-1L << (uVar15 & 0x3f));
      }
      uVar19 = uVar19 & *(ulong *)(lVar6 + 0x38);
      lStack_130 = lVar6;
      lStack_140 = _DAT_112f27f18;
      puVar9 = PTR_PTR_1126c3398;
      uVar7 = uStack_128;
      while( true ) {
        for (; PTR_PTR_1126c3398 = puVar9, uStack_128 = uVar7, uVar19 != 0;
            uVar19 = uVar19 - 1 & uVar19) {
          uVar2 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          puVar1 = (undefined8 *)
                   (*(long *)(lStack_130 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                   lVar5 * 0x400);
          uVar8 = *puVar1;
          uVar13 = puVar1[1];
          func_0x000107c610f8(puVar9);
          func_0x000107c61434(uVar13);
          func_0x000107c5fadc(uVar8,uVar13);
          func_0x000107c6142c(uVar13);
          func_0x000107c45b3c(puVar9);
          func_0x000107c61170(uVar8);
          func_0x000107c60f38(uVar7);
          lVar17 = *(long *)(lStack_110 + lStack_140);
          func_0x000107c5bf98();
          func_0x000107c61180();
          if (lVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef02c0);
            (*pcVar3)();
          }
          lVar18 = lVar17;
          func_0x000107c5ee80(lVar16,0x40f5180000000000);
          func_0x000107c5ee70();
          (**(code **)(lStack_120 + 8))(lVar16,lStack_118);
          puVar10 = &UNK_1105e69a0;
          func_0x000107c613fc(&UNK_1105e69a0,0x18,7);
          *(undefined8 *)(puVar10 + 0x10) = uVar7;
          pcStack_e0 = FUN_102f07fc8;
          puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f8 = 0x42000000;
          puStack_f0 = &UNK_1000b0c7c;
          puStack_e8 = &UNK_1105e69b8;
          ppuVar11 = &puStack_100;
          puStack_d8 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          puVar10 = puStack_d8;
          func_0x000107c61174(uVar7);
          func_0x000107c61574(puVar10);
          func_0x000107c3d8d0(lVar17);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c61170(puVar9);
          func_0x000107c615e8(lVar17);
          func_0x000107c61170(lVar18);
          puVar9 = PTR_PTR_1126c3398;
          uVar7 = uStack_128;
        }
        bVar4 = SCARRY8(lVar5,1);
        lVar5 = lVar5 + 1;
        if (bVar4) break;
        if ((long)(uVar15 + 0x3f >> 6) <= lVar5) {
          func_0x000107c61574(lStack_130);
          uVar12 = 0;
          FUN_102f09540(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar9 = &UNK_1105e6950;
          func_0x000107c613fc(&UNK_1105e6950,0x20,7);
          uVar8 = uStack_148;
          *(code **)(puVar9 + 0x10) = pcStack_150;
          *(undefined8 *)(puVar9 + 0x18) = uStack_148;
          pcStack_e0 = (code *)0x102f07f64;
          puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_f8 = 0x42000000;
          puStack_f0 = &UNK_1000f6b44;
          puStack_e8 = &UNK_1105e6968;
          ppuVar11 = &puStack_100;
          puStack_d8 = puVar9;
          func_0x000107c60bc4(ppuVar11);
          func_0x000107c6157c(uVar8);
          lVar16 = lStack_158;
          func_0x000107c5f808(lStack_158);
          puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uVar8 = 0x112d4af88;
          FUN_102f07fd0(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
          uVar13 = 0x112d4af90;
          func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
          uVar14 = 0x112d4af98;
          func_0x000102f07f84(0x112d4af98,0x112d4af90,&UNK_10d914100,PTR___sSayxGSTsMc_11034dd08);
          lVar6 = lStack_160;
          lVar5 = lStack_170;
          func_0x000107c60264(lStack_170,&puStack_108,uVar13,uVar14,lStack_160,uVar8);
          func_0x000107c5ffb8(lVar16,lVar5,uVar12,ppuVar11);
          func_0x000107c61170(lStack_138);
          func_0x000107c60bd0(ppuVar11);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(lStack_110);
          func_0x000107c61170(uVar12);
          (**(code **)(lStack_168 + 8))(lVar5,lVar6);
          (**(code **)(lStack_180 + 8))(lVar16,lStack_178);
          func_0x000107c61574(puStack_d8);
          return;
        }
        uVar19 = ((ulong *)(lVar6 + 0x38))[lVar5];
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef02bc);
      (*pcVar3)();
    }
    func_0x000107c61170(param_3);
  }
  (*pcStack_150)();
  return;
}



/* Entry: 102ef02c0; end: 102ef05f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef02c0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *param_1;
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  func_0x000107c4008c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(param_2 + 0x40) != 0) {
    puVar6 = *(undefined **)(*(long *)(param_2 + 0x40) + _DAT_11307fc78);
    func_0x000107c61434(puVar6);
  }
  puVar5 = puVar6;
  func_0x000107c5fc48(puVar6,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar6);
  func_0x000107c53988(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar5);
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  func_0x000107c4008c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar5 = *(undefined **)(param_2 + 0x48);
  puVar6 = puVar4;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
  }
  uVar1 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  func_0x000107c61434(puVar5);
  puVar5 = puVar6;
  func_0x000107c5fc48(puVar6,uVar1);
  func_0x000107c6142c(puVar6);
  func_0x000107c598f8(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar5);
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  func_0x000107c4008c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar6 = *(undefined **)(param_2 + 0x38);
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c615f0(puVar6);
    puVar5 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    puVar3 = puVar6;
    func_0x000107c6148c(puVar6,puVar5);
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c615e8(puVar6);
    }
    else {
      func_0x000107c4e6d0();
      func_0x000107c61180();
      func_0x000107c615e8(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x000107c5fc54(puVar3,PTR___sSSN_11034da80);
        func_0x000107c61170(puVar3);
      }
    }
  }
  puVar6 = puVar4;
  func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar4);
  func_0x000107c57368(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar6);
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  func_0x000107c4008c(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar6 = *(undefined **)(param_2 + 0x38);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c615f0(puVar6);
    puVar4 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    puVar5 = puVar6;
    func_0x000107c6148c(puVar6,puVar4);
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(puVar6);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c4c558();
      func_0x000107c61180();
      func_0x000107c615e8(puVar6);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x000107c5fc54(puVar5,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(puVar5);
        puVar5 = puVar6;
        func_0x000101158fcc();
        func_0x000107c6142c(puVar6);
        if (puVar5 != (undefined *)0x0) {
          puVar4 = puVar5;
        }
      }
    }
  }
  puVar6 = puVar4;
  func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
  func_0x000107c6142c(puVar4);
  func_0x000107c56314(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 102ef05f8; end: 102ef0c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef05f8(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long unaff_x20;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined *apuStack_b0 [9];
  undefined *puStack_68;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f27e78);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar17 = *(ulong *)(param_2 + 8);
  if (uVar17 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar17 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar17) {
      uVar16 = uVar17;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    apuStack_b0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef0af4);
      (*pcVar4)();
    }
    if ((uVar17 & 0xc000000000000001) == 0) {
      plVar13 = (long *)(uVar17 + 0x20);
      puVar14 = apuStack_b0[0];
      do {
        uVar11 = *(undefined8 *)(*plVar13 + 0x18);
        uVar2 = *(undefined8 *)(*plVar13 + 0x20);
        uVar17 = *(ulong *)(puVar14 + 0x10);
        uVar19 = *(ulong *)(puVar14 + 0x18);
        apuStack_b0[0] = puVar14;
        func_0x000107c61434(uVar2);
        if (uVar19 >> 1 <= uVar17) {
          func_0x000100403514(1 < uVar19,uVar17 + 1,1);
          puVar14 = apuStack_b0[0];
        }
        *(ulong *)(puVar14 + 0x10) = uVar17 + 1;
        *(undefined8 *)(puVar14 + uVar17 * 0x10 + 0x20) = uVar11;
        *(undefined8 *)(puVar14 + uVar17 * 0x10 + 0x28) = uVar2;
        uVar16 = uVar16 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar16 != 0);
    }
    else {
      uVar19 = 0;
      do {
        puVar14 = apuStack_b0[0];
        uVar6 = uVar19;
        FUN_102f02a90(uVar19,uVar17);
        uVar11 = *(undefined8 *)(uVar6 + 0x18);
        uVar2 = *(undefined8 *)(uVar6 + 0x20);
        func_0x000107c61434(uVar2);
        func_0x000107c615e8(uVar6);
        uVar6 = *(ulong *)(puVar14 + 0x10);
        apuStack_b0[0] = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar6) {
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar6 + 1,1);
        }
        uVar19 = uVar19 + 1;
        *(ulong *)(apuStack_b0[0] + 0x10) = uVar6 + 1;
        *(undefined8 *)(apuStack_b0[0] + uVar6 * 0x10 + 0x20) = uVar11;
        *(undefined8 *)(apuStack_b0[0] + uVar6 * 0x10 + 0x28) = uVar2;
        puVar14 = apuStack_b0[0];
      } while (uVar16 != uVar19);
    }
  }
  puVar7 = puVar14;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar14);
  uVar17 = *(ulong *)(param_1 + 8);
  if (uVar17 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar17 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar17) {
      uVar16 = uVar17;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    apuStack_b0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef0af8);
      (*pcVar4)();
    }
    if ((uVar17 & 0xc000000000000001) == 0) {
      plVar13 = (long *)(uVar17 + 0x20);
      puVar14 = apuStack_b0[0];
      do {
        uVar11 = *(undefined8 *)(*plVar13 + 0x18);
        uVar2 = *(undefined8 *)(*plVar13 + 0x20);
        uVar17 = *(ulong *)(puVar14 + 0x10);
        uVar19 = *(ulong *)(puVar14 + 0x18);
        apuStack_b0[0] = puVar14;
        func_0x000107c61434(uVar2);
        if (uVar19 >> 1 <= uVar17) {
          func_0x000100403514(1 < uVar19,uVar17 + 1,1);
          puVar14 = apuStack_b0[0];
        }
        *(ulong *)(puVar14 + 0x10) = uVar17 + 1;
        *(undefined8 *)(puVar14 + uVar17 * 0x10 + 0x20) = uVar11;
        *(undefined8 *)(puVar14 + uVar17 * 0x10 + 0x28) = uVar2;
        uVar16 = uVar16 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar16 != 0);
    }
    else {
      uVar19 = 0;
      do {
        puVar14 = apuStack_b0[0];
        uVar6 = uVar19;
        FUN_102f02a90(uVar19,uVar17);
        uVar11 = *(undefined8 *)(uVar6 + 0x18);
        uVar2 = *(undefined8 *)(uVar6 + 0x20);
        func_0x000107c61434(uVar2);
        func_0x000107c615e8(uVar6);
        uVar6 = *(ulong *)(puVar14 + 0x10);
        apuStack_b0[0] = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar6) {
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar6 + 1,1);
        }
        uVar19 = uVar19 + 1;
        *(ulong *)(apuStack_b0[0] + 0x10) = uVar6 + 1;
        *(undefined8 *)(apuStack_b0[0] + uVar6 * 0x10 + 0x20) = uVar11;
        *(undefined8 *)(apuStack_b0[0] + uVar6 * 0x10 + 0x28) = uVar2;
        puVar14 = apuStack_b0[0];
      } while (uVar16 != uVar19);
    }
  }
  uVar17 = *(ulong *)(puVar14 + 0x10);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    uVar16 = 0;
    do {
      if (*(ulong *)(puVar14 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef0abc);
        (*pcVar4)();
      }
      uVar19 = *(ulong *)(puVar14 + uVar16 * 0x10 + 0x20);
      uVar6 = *(ulong *)((long)(puVar14 + uVar16 * 0x10 + 0x20) + 8);
      uVar16 = uVar16 + 1;
      if (*(long *)(puVar7 + 0x10) == 0) {
        func_0x000107c61434(uVar6);
      }
      else {
        func_0x000107c6068c(apuStack_b0,*(undefined8 *)(puVar7 + 0x28));
        func_0x000107c61434(uVar6);
        ppuVar8 = apuStack_b0;
        func_0x000107c5fb58(ppuVar8,uVar19,uVar6);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar15 = (ulong)ppuVar8 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar7 + (uVar15 >> 6) * 8 + 0x38) >> (uVar15 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar15 * 0x10);
            uVar9 = *puVar1;
            uVar3 = puVar1[1];
            if ((uVar9 == uVar19 && uVar3 == uVar6) ||
               (func_0x000107c605b8(uVar9,uVar3,uVar19,uVar6,0), (uVar9 & 1) != 0)) {
              func_0x000107c6142c(uVar6);
              goto LAB_102ef08c4;
            }
            uVar15 = uVar15 + 1 & ~uVar12;
          } while ((*(ulong *)(puVar7 + (uVar15 >> 6) * 8 + 0x38) >> (uVar15 & 0x3f) & 1) != 0);
        }
      }
      puVar10 = puVar18;
      func_0x000107c61558();
      puStack_68 = puVar18;
      if (((ulong)puVar10 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar18 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puStack_68 + 0x10);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar12) {
        func_0x000100403514(1 < *(ulong *)(puStack_68 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar12 + 1;
      *(ulong *)(puStack_68 + uVar12 * 0x10 + 0x20) = uVar19;
      *(ulong *)(puStack_68 + uVar12 * 0x10 + 0x28) = uVar6;
      puVar18 = puStack_68;
LAB_102ef08c4:
    } while (uVar16 != uVar17);
  }
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(puVar14);
  uVar17 = *(ulong *)(puVar18 + 0x10);
  if (uVar17 != 0) {
    uVar16 = 0;
    puVar20 = (undefined8 *)(puVar18 + 0x28);
    do {
      if (*(ulong *)(puVar18 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef0ac0);
        (*pcVar4)();
      }
      if (lVar5 != 0) {
        uVar11 = puVar20[-1];
        uVar2 = *puVar20;
        func_0x000107c61434(uVar2);
        func_0x000107c5fadc(uVar11,uVar2);
        func_0x000107c4ff04(lVar5);
        func_0x000107c61170(uVar11);
        func_0x000107c6142c(uVar2);
      }
      uVar16 = uVar16 + 1;
      puVar20 = puVar20 + 2;
    } while (uVar17 != uVar16);
  }
  func_0x000107c615e8(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar18);
  return;
}



/* Entry: 102ef0c48; end: 102ef0e53;  */

/* WARNING: Possible PIC construction at 0x000102ef0ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef0dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef0e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ef0dc4) */
/* WARNING: Removing unreachable block (ram,0x000102ef0ce8) */
/* WARNING: Removing unreachable block (ram,0x000102ef0e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef0c48(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(param_2 + _DAT_112f27f28) + _DAT_11307fc48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0xd00000000000004e;
    func_0x000107c5fadc(0xd00000000000004e,0x800000010f114280);
    func_0x000107c466bc(puVar3);
  }
  else {
    FUN_102f132c8(param_1);
    uVar2 = 0;
    func_0x000104522c9c(0);
    uVar4 = param_1;
    func_0x000107c5fc48(param_1,uVar2);
    func_0x000107c6142c(param_1);
    func_0x000107c5b59c(lVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 102ef0e54; end: 102ef0ed7;  */

void FUN_102ef0e54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102ee540c(param_4,PTR___swiftEmptyArrayStorage_11034f1c8,0,param_1,0,0);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102ef0ed8; end: 102ef132b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef0ed8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_428 [152];
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c61428(param_1 + 0x10,auStack_118,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puStack_148 = (undefined8 *)param_2[0xd];
    uStack_150 = param_2[0xc];
    uStack_138 = param_2[0xf];
    puStack_140 = (undefined8 *)param_2[0xe];
    uStack_128 = param_2[0x11];
    uStack_130 = param_2[0x10];
    uStack_120 = param_2[0x12];
    uStack_188 = param_2[5];
    uStack_190 = param_2[4];
    uStack_178 = param_2[7];
    uStack_180 = param_2[6];
    uStack_168 = param_2[9];
    uStack_170 = param_2[8];
    uStack_158 = param_2[0xb];
    uStack_160 = param_2[10];
    uStack_1a8 = param_2[1];
    uStack_1b0 = *param_2;
    puStack_198 = (undefined8 *)param_2[3];
    uStack_1a0 = param_2[2];
    puVar8 = &uStack_f0;
    FUN_102f04d58(param_2);
    puVar5 = param_2;
    FUN_102ef132c();
    if (puVar5 == (undefined8 *)0x0) {
      uStack_f8 = param_2[0xe];
      uStack_100 = param_2[0xd];
      func_0x00010011df08();
      func_0x000107c61180();
      puVar2 = puVar5;
      func_0x000107c5faec();
      func_0x000107c61170(puVar5);
      puStack_148 = puVar2;
      puStack_140 = puVar8;
      func_0x000107c61434(puVar8);
      FUN_102f080f0(&uStack_100,0x112d35ff8,&UNK_10d900cd0);
      lVar4 = param_1 + _DAT_112f27e80;
      func_0x000107c61428(lVar4,&uStack_f0,0x21,0);
      lVar3 = lVar4;
      func_0x000102f05844();
      puVar5 = puVar8;
      if ((int)lVar3 != 1) {
        puVar5 = *(undefined8 **)(lVar4 + 0x70);
        *(undefined8 **)(lVar4 + 0x68) = puVar2;
        *(undefined8 **)(lVar4 + 0x70) = puVar8;
      }
      func_0x000107c6142c(puVar5);
      func_0x000107c614a8(&uStack_f0);
      puStack_88 = puStack_148;
      uStack_90 = uStack_150;
      uStack_78 = uStack_138;
      puStack_80 = puStack_140;
      uStack_68 = uStack_128;
      uStack_70 = uStack_130;
      uStack_60 = uStack_120;
      uStack_c8 = uStack_188;
      uStack_d0 = uStack_190;
      uStack_b8 = uStack_178;
      uStack_c0 = uStack_180;
      uStack_a8 = uStack_168;
      uStack_b0 = uStack_170;
      uStack_98 = uStack_158;
      uStack_a0 = uStack_160;
      uStack_e8 = uStack_1a8;
      uStack_f0 = uStack_1b0;
      puStack_d8 = puStack_198;
      uStack_e0 = uStack_1a0;
      FUN_102edf578(&uStack_f0);
      puVar5 = puStack_198;
      puStack_328 = puStack_148;
      uStack_330 = uStack_150;
      uStack_318 = uStack_138;
      puStack_320 = puStack_140;
      uStack_308 = uStack_128;
      uStack_310 = uStack_130;
      uStack_368 = uStack_188;
      uStack_370 = uStack_190;
      uStack_358 = uStack_178;
      uStack_360 = uStack_180;
      uStack_348 = uStack_168;
      uStack_350 = uStack_170;
      uStack_338 = uStack_158;
      uStack_340 = uStack_160;
      uStack_388 = uStack_1a8;
      uStack_390 = uStack_1b0;
      puStack_378 = puStack_198;
      uStack_380 = uStack_1a0;
      puStack_288 = puStack_148;
      uStack_290 = uStack_150;
      uStack_278 = uStack_138;
      puStack_280 = puStack_140;
      uStack_268 = uStack_128;
      uStack_270 = uStack_130;
      uStack_2c8 = uStack_188;
      uStack_2d0 = uStack_190;
      uStack_2b8 = uStack_178;
      uStack_2c0 = uStack_180;
      uStack_2a8 = uStack_168;
      uStack_2b0 = uStack_170;
      uStack_298 = uStack_158;
      uStack_2a0 = uStack_160;
      uStack_300 = uStack_120;
      uStack_260 = uStack_120;
      uStack_2e8 = uStack_1a8;
      uStack_2f0 = uStack_1b0;
      puStack_2d8 = puStack_198;
      uStack_2e0 = uStack_1a0;
      FUN_102f04dc8(&uStack_2f0);
      puVar8 = (undefined8 *)(param_1 + _DAT_112f27fc8);
      uStack_248 = puVar8[1];
      uStack_250 = *puVar8;
      uStack_238 = puVar8[3];
      uStack_240 = puVar8[2];
      uStack_208 = puVar8[9];
      uStack_210 = puVar8[8];
      uStack_1f8 = puVar8[0xb];
      uStack_200 = puVar8[10];
      uStack_228 = puVar8[5];
      uStack_230 = puVar8[4];
      uStack_218 = puVar8[7];
      uStack_220 = puVar8[6];
      uStack_1d8 = puVar8[0xf];
      uStack_1e0 = puVar8[0xe];
      uStack_1c8 = puVar8[0x11];
      uStack_1d0 = puVar8[0x10];
      uStack_1c0 = puVar8[0x12];
      uStack_1e8 = puVar8[0xd];
      uStack_1f0 = puVar8[0xc];
      puVar8[1] = uStack_2e8;
      *puVar8 = uStack_2f0;
      puVar8[3] = puStack_2d8;
      puVar8[2] = uStack_2e0;
      puVar8[9] = uStack_2a8;
      puVar8[8] = uStack_2b0;
      puVar8[0xb] = uStack_298;
      puVar8[10] = uStack_2a0;
      puVar8[5] = uStack_2c8;
      puVar8[4] = uStack_2d0;
      puVar8[7] = uStack_2b8;
      puVar8[6] = uStack_2c0;
      puVar8[0x12] = uStack_260;
      puVar8[0xf] = uStack_278;
      puVar8[0xe] = puStack_280;
      puVar8[0x11] = uStack_268;
      puVar8[0x10] = uStack_270;
      puVar8[0xd] = puStack_288;
      puVar8[0xc] = uStack_290;
      FUN_102f04d58(&uStack_390,auStack_428);
      FUN_102f080f0(&uStack_250,0x112f27e88,&UNK_10db63a18);
    }
    else {
      uStack_250 = param_2[3];
      puVar8 = puVar5;
      puStack_198 = puVar5;
      func_0x000107c61174();
      FUN_102f080f0(&uStack_250,0x112f28020,&UNK_10db63a60);
      lVar4 = param_1 + _DAT_112f27e80;
      func_0x000107c61428(lVar4,&uStack_f0,0x21,0);
      lVar3 = lVar4;
      func_0x000102f05844();
      if ((int)lVar3 != 1) {
        puVar8 = *(undefined8 **)(lVar4 + 0x18);
        *(undefined8 **)(lVar4 + 0x18) = puVar5;
      }
      func_0x000107c61170(puVar8);
      lVar3 = lVar4;
      func_0x000102f05844();
      if ((int)lVar3 != 1) {
        lVar3 = param_1 + _DAT_112f27fc8;
        lVar7 = lVar3;
        func_0x000102f05844();
        if ((int)lVar7 == 1) {
          uVar9 = 0;
          uVar1 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar3 + 0x68);
          uVar1 = *(undefined8 *)(lVar3 + 0x70);
          func_0x000107c61434();
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x70);
        *(undefined8 *)(lVar4 + 0x68) = uVar9;
        *(undefined8 *)(lVar4 + 0x70) = uVar1;
        func_0x000107c6142c(uVar6);
      }
      func_0x000107c614a8(&uStack_f0);
      FUN_102ef25d8(param_2);
    }
    uVar9 = *(undefined8 *)(param_1 + _DAT_112f27fc0);
    func_0x000107c61174(uVar9);
    puVar8 = param_2;
    func_0x000102f12b1c(param_2);
    puVar2 = puVar8;
    func_0x000107c5fc48();
    func_0x000107c6142c(puVar8);
    func_0x000107c4d664(uVar9);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar2);
    lVar4 = *(long *)(param_1 + _DAT_112f27ee8);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar4 + _DAT_113034900);
      lVar3 = lVar7;
      func_0x000107c61174();
      func_0x000107c61170(lVar4);
      if (lVar7 != 0) {
        lVar4 = *(long *)(lVar3 + _DAT_113034aa8);
        func_0x000107c615f0(lVar4);
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          FUN_102f0fd5c(lVar4,param_2);
          func_0x000107c615e8(lVar4);
        }
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      func_0x000107c5770c(puVar5);
      func_0x000107c4f00c(puVar5);
    }
    func_0x000107c61170(param_1);
    func_0x000102f04d94(&uStack_1b0);
  }
  return;
}



/* Entry: 102ef132c; end: 102ef25d7;  */

/* WARNING: Removing unreachable block (ram,0x000102ef25c8) */
/* WARNING: Removing unreachable block (ram,0x000102ef25cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102ef132c(ulong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined8 uVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  ulong uVar31;
  undefined *puVar32;
  undefined *puVar33;
  ulong uVar34;
  long unaff_x20;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined **ppuVar39;
  undefined **ppuVar40;
  uint uVar41;
  ulong uVar42;
  undefined **ppuVar43;
  uint uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_250;
  undefined auStack_248 [152];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
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
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f27fc8);
  uStack_a8 = puVar1[0xd];
  uStack_b0 = puVar1[0xc];
  uStack_98 = puVar1[0xf];
  uStack_a0 = puVar1[0xe];
  uStack_88 = puVar1[0x11];
  uStack_90 = puVar1[0x10];
  uStack_80 = puVar1[0x12];
  uStack_e8 = puVar1[5];
  uStack_f0 = puVar1[4];
  uStack_d8 = puVar1[7];
  uStack_e0 = puVar1[6];
  uStack_c8 = puVar1[9];
  uStack_d0 = puVar1[8];
  uStack_b8 = puVar1[0xb];
  uStack_c0 = puVar1[10];
  uStack_108 = puVar1[1];
  puVar32 = (undefined *)*puVar1;
  lVar10 = puVar1[3];
  ppuVar35 = (undefined **)puVar1[2];
  iVar5 = (int)&puStack_110;
  puStack_110 = puVar32;
  ppuStack_100 = ppuVar35;
  lStack_f8 = lVar10;
  func_0x000102f05844();
  if (iVar5 == 1) {
    return 0;
  }
  ppuVar40 = (undefined **)param_1[2];
  ppuVar36 = ppuVar40;
  func_0x000107c61150(ppuVar40,PTR_s_respondsToSelector__11262c7e0,PTR_s_sendSessionId_112634c60);
  if (((ulong)ppuVar36 & 1) == 0) {
    return 0;
  }
  uStack_148 = uStack_a8;
  uStack_150 = uStack_b0;
  uStack_138 = uStack_98;
  uStack_140 = uStack_a0;
  uStack_128 = uStack_88;
  uStack_130 = uStack_90;
  uStack_120 = uStack_80;
  uStack_188 = uStack_e8;
  uStack_190 = uStack_f0;
  uStack_178 = uStack_d8;
  uStack_180 = uStack_e0;
  uStack_168 = uStack_c8;
  uStack_170 = uStack_d0;
  uStack_158 = uStack_b8;
  uStack_160 = uStack_c0;
  uStack_1a8 = uStack_108;
  puStack_1b0 = puStack_110;
  lStack_198 = lStack_f8;
  ppuStack_1a0 = ppuStack_100;
  puVar37 = auStack_248;
  FUN_102f04d58(&puStack_1b0);
  ppuVar36 = ppuVar40;
  func_0x000107c51e48();
  func_0x000107c61180();
  if (ppuVar36 == (undefined **)0x0) goto LAB_102ef14dc;
  ppuVar7 = ppuVar36;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar36);
  ppuVar36 = ppuVar35;
  puVar12 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(ppuVar35,PTR_s_respondsToSelector__11262c7e0,PTR_s_sendSessionId_112634c60);
  if (((ulong)ppuVar36 & 1) != 0) {
    func_0x000107c51e48();
    func_0x000107c61180();
    if (ppuVar35 != (undefined **)0x0) {
      ppuVar36 = ppuVar35;
      func_0x000107c5faec();
      func_0x000107c61170(ppuVar35);
      uVar9 = (ulong)ppuVar7 & 0xffffffffffff;
      if (((ulong)puVar37 & 0x2000000000000000) != 0) {
        uVar9 = (ulong)puVar37 >> 0x38 & 0xf;
      }
      if (uVar9 != 0) {
        uVar9 = (ulong)ppuVar36 & 0xffffffffffff;
        if (((ulong)puVar12 & 0x2000000000000000) != 0) {
          uVar9 = (ulong)puVar12 >> 0x38 & 0xf;
        }
        if (uVar9 != 0) {
          if ((ppuVar7 == ppuVar36) && (puVar37 == puVar12)) {
            func_0x000107c6142c(puVar37);
            func_0x000107c6142c(puVar12);
          }
          else {
            func_0x000107c605b8(ppuVar7,puVar37,ppuVar36,puVar12,0);
            func_0x000107c6142c(puVar37);
            func_0x000107c6142c(puVar12);
            if (((ulong)ppuVar7 & 1) == 0) goto LAB_102ef14dc;
          }
          lVar8 = *(long *)(unaff_x20 + _DAT_112f27ee8);
          func_0x000107c5194c();
          func_0x000107c61180();
          if (lVar8 == 0) goto LAB_102ef14dc;
          uVar42 = *(ulong *)(lVar8 + _DAT_1130348d8);
          puVar37 = PTR_PTR_1126c4f00;
          func_0x000107c61168(PTR_PTR_1126c4f00);
          uVar9 = uVar42;
          func_0x000107c6148c(uVar42,puVar37);
          if (uVar9 == 0) {
            func_0x000107c61170(lVar8);
            goto LAB_102ef14dc;
          }
          if (lVar10 == 0) {
            func_0x000107c615f4(uVar42,2);
            func_0x000107c61170(lVar8);
            FUN_102f080f0(&puStack_110,0x112f27e88,&UNK_10db63a18);
            func_0x000107c615ec(uVar42,2);
            return 0;
          }
          FUN_102f09540(0,0x112f280b8,&PTR_PTR_1126c4f00);
          func_0x000107c615f4(uVar42,3);
          func_0x000107c61174(lVar10);
          uVar31 = uVar9;
          func_0x000107c60118(uVar9,lVar10);
          func_0x000107c615e8(uVar42);
          func_0x000107c61170(lVar10);
          if ((uVar31 & 1) == 0) {
            func_0x000107c61170(lVar8);
            func_0x000107c615e8(uVar42);
            FUN_102f080f0(&puStack_110,0x112f27e88,&UNK_10db63a18);
            func_0x000107c615e8(uVar42);
            return 0;
          }
          lVar10 = *(long *)(lVar8 + _DAT_113034900);
          if (lVar10 == 0) {
            func_0x000107c61170(lVar8);
            func_0x000107c615ec(uVar42,2);
            goto LAB_102ef14dc;
          }
          func_0x000107c61174();
          puVar11 = param_1;
          func_0x000102f0fe50();
          if (puVar11 != (ulong *)0x0) {
            func_0x000107c61170(puVar11);
          }
          ppuVar35 = (undefined **)param_1[1];
          if ((ulong)ppuVar35 >> 0x3e == 0) {
            ppuStack_260 = *(undefined ***)(((ulong)ppuVar35 & 0xffffffffffffff8) + 0x10);
          }
          else {
            ppuStack_260 = (undefined **)((ulong)ppuVar35 & 0xffffffffffffff8);
            if ((undefined **)0x7fffffffffffffff < ppuVar35) {
              ppuStack_260 = ppuVar35;
            }
            func_0x000107c60480();
          }
          uStack_278 = (ulong)ppuVar35 & 0xffffffffffffff8;
          uVar31 = (ulong)ppuVar35 & 0xc000000000000001;
          ppuVar36 = (undefined **)0x0;
          do {
            ppuVar7 = ppuVar36;
            if (ppuStack_260 == ppuVar7) break;
            if (uVar31 == 0) {
              if (*(undefined ***)(uStack_278 + 0x10) <= ppuVar7) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef250c);
                (*pcVar3)();
              }
              ppuVar36 = (undefined **)ppuVar35[(long)((long)ppuVar7 + 4)];
              func_0x000107c6157c(ppuVar36);
            }
            else {
              ppuVar36 = ppuVar7;
              FUN_102f02a90(ppuVar7,ppuVar35);
            }
            if (SCARRY8((long)ppuVar7,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef1700);
              (*pcVar3)();
            }
            puVar12 = ppuVar36[5];
            func_0x000107c61174();
            puVar37 = puVar12;
            FUN_102f110e0();
            func_0x000107c61170(puVar12);
            func_0x000107c61574(ppuVar36);
            ppuVar36 = (undefined **)((long)ppuVar7 + 1);
          } while (((ulong)puVar37 & 1) != 0);
          puVar13 = param_1;
          FUN_102f131a4();
          if (ppuStack_260 == (undefined **)0x0) {
LAB_102ef181c:
            lVar14 = 0;
          }
          else {
            if (uVar31 == 0) {
              if (*(long *)(uStack_278 + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef2590);
                (*pcVar3)();
              }
              puVar37 = ppuVar35[4];
              func_0x000107c6157c(puVar37);
            }
            else {
              puVar37 = (undefined *)0x0;
              FUN_102f02a90(0,ppuVar35);
            }
            lVar14 = *(long *)(puVar37 + 0x38);
            func_0x000107c61174();
            func_0x000107c61574(puVar37);
            lVar27 = lVar14;
            func_0x000107c5c6a8();
            func_0x000107c61180();
            func_0x000107c61170(lVar14);
            if (lVar27 == 0) goto LAB_102ef181c;
            lVar14 = lVar27;
            func_0x000107c5d388(lVar27);
            func_0x000107c61170(lVar27);
          }
          puVar15 = param_1;
          FUN_102eef508(param_1,lVar14);
          uVar28 = *(undefined8 *)(unaff_x20 + _DAT_112f27e98);
          puVar16 = param_1;
          func_0x000102f12e8c();
          ppuVar36 = ppuVar40;
          func_0x000107c49fcc();
          if ((int)ppuVar36 == 0) {
            uVar41 = 0;
          }
          else {
            ppuVar36 = ppuVar40;
            func_0x000107c516a0();
            func_0x000107c61180();
            ppuVar29 = ppuVar36;
            func_0x000107c5fc54();
            func_0x000107c61170(ppuVar36);
            puVar37 = ppuVar29[2];
            func_0x000107c6142c(ppuVar29);
            uVar41 = (uint)(puVar37 != (undefined *)0x0);
          }
          lVar27 = _DAT_112f27e48;
          func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_248,0,0);
          ppuVar36 = (undefined **)(unaff_x20 + lVar27);
          func_0x000107c61618();
          if (ppuVar36 == (undefined **)0x0) {
            ppuVar29 = (undefined **)0xffffffffffffffff;
          }
          else {
            ppuVar29 = ppuVar36;
            func_0x000107c61150();
            if (((ulong)ppuVar29 & 1) == 0) {
              ppuVar29 = (undefined **)0xffffffffffffffff;
            }
            else {
              ppuVar29 = ppuVar36;
              func_0x000107c5b3f0();
            }
            func_0x000107c615e8(ppuVar36);
          }
          puVar17 = param_1;
          func_0x000102f10934(param_1,ppuVar29,uVar28);
          lVar14 = *(long *)(lVar8 + _DAT_113034908);
          if ((((uVar41 | (uint)puVar17) ^ (uint)(lVar14 != 0)) & 1) == 0) {
            ppuVar36 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if ((lVar14 != 0) &&
               (ppuVar29 = *(undefined ***)(lVar14 + _DAT_113034af8), ppuVar29 != (undefined **)0x0)
               ) {
              func_0x000107c4c948();
              func_0x000107c61180();
              ppuVar36 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
              if (ppuVar29 != (undefined **)0x0) {
                ppuVar39 = ppuVar29;
                func_0x000107c5b2d8();
                func_0x000107c61180();
                func_0x000107c61170(ppuVar29);
                ppuVar36 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
                if (ppuVar39 != (undefined **)0x0) {
                  ppuVar36 = ppuVar39;
                  func_0x000107c5fc54(ppuVar39,PTR___sSSN_11034da80);
                  func_0x000107c61170(ppuVar39);
                  ppuStack_250 = ppuVar36;
                  func_0x000107c61434(ppuVar36);
                  func_0x0001016f8a58(&ppuStack_250);
                  func_0x000107c6142c(ppuVar36);
                  ppuVar36 = ppuStack_250;
                }
              }
            }
            ppuVar39 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if (uVar41 != 0) {
              ppuVar29 = ppuVar40;
              func_0x000107c516a0();
              func_0x000107c61180();
              ppuVar39 = ppuVar29;
              func_0x000107c5fc54();
              func_0x000107c61170(ppuVar29);
              ppuStack_250 = ppuVar39;
              func_0x000107c61434(ppuVar39);
              func_0x0001016f8a58(&ppuStack_250);
              func_0x000107c6142c(ppuVar39);
              ppuVar39 = ppuStack_250;
            }
            ppuVar43 = ppuVar36;
            ppuVar29 = ppuVar39;
            func_0x00010142cfc4();
            func_0x000107c6142c(ppuVar36);
            func_0x000107c6142c(ppuVar39);
            if (((uint)ppuVar43 & (uint)puVar17 & 1) == 0) {
              uVar41 = (uint)ppuVar43 ^ 1;
            }
            else {
              if ((ulong)puVar32 >> 0x3e == 0) {
                puVar37 = *(undefined **)(((ulong)puVar32 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar37 = (undefined *)((ulong)puVar32 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar32) {
                  puVar37 = puVar32;
                }
                func_0x000107c60480();
              }
              ppuVar36 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
              if (puVar37 != (undefined *)0x0) {
                ppuStack_250 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
                puVar12 = (undefined *)
                          ((ulong)puVar37 & ((long)puVar37 >> 0x3f ^ 0xffffffffffffffffU));
                func_0x0001018740f8(0,puVar12,0);
                if ((long)puVar37 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef25c4);
                  (*pcVar3)();
                }
                puVar38 = (undefined *)0x0;
                do {
                  ppuVar36 = ppuStack_250;
                  if (((ulong)puVar32 & 0xc000000000000001) == 0) {
                    puVar33 = *(undefined **)(puVar32 + (long)puVar38 * 8 + 0x20);
                    func_0x000107c615f0(puVar33);
                    puVar21 = puVar12;
                  }
                  else {
                    puVar33 = puVar38;
                    puVar21 = puVar32;
                    FUN_10274d138();
                  }
                  puVar18 = puVar33;
                  func_0x000107c615f0();
                  func_0x000107c4e090();
                  func_0x000107c61180();
                  puVar19 = puVar18;
                  func_0x000107c3eea8();
                  func_0x000107c61180();
                  puVar20 = puVar19;
                  func_0x000107c5ee30();
                  puVar12 = (undefined *)0x2;
                  func_0x000107c615ec(puVar33);
                  func_0x000107c61170(puVar18);
                  func_0x000107c61170(puVar19);
                  puVar18 = ppuVar36[2];
                  puVar33 = puVar18 + 1;
                  ppuStack_250 = ppuVar36;
                  if ((undefined *)((ulong)ppuVar36[3] >> 1) <= puVar18) {
                    puVar12 = puVar33;
                    func_0x0001018740f8((undefined *)0x1 < ppuVar36[3],puVar33,1);
                  }
                  puVar38 = puVar38 + 1;
                  ppuStack_250[2] = puVar33;
                  ppuStack_250[(long)puVar18 * 2 + 4] = puVar20;
                  ppuStack_250[(long)puVar18 * 2 + 5] = puVar21;
                  ppuVar36 = ppuStack_250;
                } while (puVar37 != puVar38);
              }
              puVar32 = (undefined *)*param_1;
              if ((ulong)puVar32 >> 0x3e == 0) {
                puVar37 = *(undefined **)(((ulong)puVar32 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar37 = (undefined *)((ulong)puVar32 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar32) {
                  puVar37 = puVar32;
                }
                func_0x000107c60480();
              }
              ppuVar39 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
              if (puVar37 != (undefined *)0x0) {
                ppuStack_250 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x0001018740f8(0,(ulong)puVar37 & ((long)puVar37 >> 0x3f ^ 0xffffffffffffffffU)
                                    ,0);
                if ((long)puVar37 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef25c8);
                  (*pcVar3)();
                }
                puVar12 = (undefined *)0x0;
                do {
                  ppuVar29 = ppuStack_250;
                  puVar38 = puVar32;
                  if (((ulong)puVar32 & 0xc000000000000001) == 0) {
                    puVar33 = *(undefined **)(puVar32 + (long)puVar12 * 8 + 0x20);
                    func_0x000107c615f0(puVar33);
                  }
                  else {
                    puVar33 = puVar12;
                    FUN_10274d138();
                  }
                  puVar21 = puVar33;
                  func_0x000107c615f0();
                  func_0x000107c4e090();
                  func_0x000107c61180();
                  puVar18 = puVar21;
                  func_0x000107c3eea8();
                  func_0x000107c61180();
                  puVar19 = puVar18;
                  func_0x000107c5ee30();
                  func_0x000107c615ec(puVar33,2);
                  func_0x000107c61170(puVar21);
                  func_0x000107c61170(puVar18);
                  puVar33 = ppuVar29[2];
                  ppuStack_250 = ppuVar29;
                  if ((undefined *)((ulong)ppuVar29[3] >> 1) <= puVar33) {
                    func_0x0001018740f8((undefined *)0x1 < ppuVar29[3],puVar33 + 1,1);
                  }
                  puVar12 = puVar12 + 1;
                  ppuStack_250[2] = puVar33 + 1;
                  ppuStack_250[(long)puVar33 * 2 + 4] = puVar19;
                  ppuStack_250[(long)puVar33 * 2 + 5] = puVar38;
                  ppuVar39 = ppuStack_250;
                } while (puVar37 != puVar12);
              }
              ppuVar43 = ppuVar36;
              ppuVar29 = ppuVar39;
              FUN_102f1bc24();
              func_0x000107c6142c(ppuVar36);
              func_0x000107c6142c(ppuVar39);
              uVar41 = (uint)ppuVar43 ^ 1;
            }
          }
          else {
            uVar41 = 1;
          }
          uVar22 = unaff_x20 + lVar27;
          func_0x000107c61618();
          if (uVar22 == 0) {
            uVar34 = 0xffffffffffffffff;
          }
          else {
            uVar34 = uVar22;
            ppuVar29 = (undefined **)PTR_s_respondsToSelector__11262c7e0;
            func_0x000107c61150();
            if ((uVar34 & 1) == 0) {
              uVar34 = 0xffffffffffffffff;
            }
            else {
              uVar34 = uVar22;
              func_0x000107c5b3f0();
            }
            func_0x000107c615e8(uVar22);
          }
          lVar27 = unaff_x20 + lVar27;
          func_0x000107c61618();
          if (lVar27 == 0) {
            bVar4 = false;
          }
          else {
            lVar14 = lVar27;
            func_0x000107c3fe68();
            func_0x000107c61180();
            func_0x000107c615e8(lVar27);
            if (lVar14 == 0) {
              bVar4 = false;
            }
            else {
              lVar27 = lVar14;
              func_0x000107c4d288();
              func_0x000107c61170(lVar14);
              bVar4 = lVar27 == 0xcb;
            }
          }
          if (((uVar34 - 0x36 < 0x37) && ((1L << (uVar34 - 0x36 & 0x3f) & 0x40000000000041U) != 0))
             || (bVar4)) {
            ppuVar36 = (undefined **)0x0;
            do {
              if (ppuStack_260 == ppuVar36) goto LAB_102ef1f0c;
              if (uVar31 == 0) {
                if (*(undefined ***)(uStack_278 + 0x10) <= ppuVar36) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef2510);
                  (*pcVar3)();
                }
                ppuVar39 = (undefined **)ppuVar35[(long)((long)ppuVar36 + 4)];
                func_0x000107c6157c(ppuVar39);
              }
              else {
                ppuVar39 = ppuVar36;
                ppuVar29 = ppuVar35;
                FUN_102f02a90();
              }
              if (SCARRY8((long)ppuVar36,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef1e80);
                (*pcVar3)();
              }
              func_0x000103be8288(0);
              puVar37 = ppuVar39[5];
              puVar32 = puVar37;
              func_0x000107c61174(puVar37);
              func_0x000103be58d0();
              func_0x000107c61170(puVar32);
              func_0x000107c61574(ppuVar39);
              ppuVar36 = (undefined **)((long)ppuVar36 + 1);
            } while (((ulong)puVar37 & 1) == 0);
            uVar23 = 0xd000000000000036;
            ppuVar29 = (undefined **)0x800000010f114030;
            func_0x000107c5fadc(0xd000000000000036);
            uVar24 = uVar28;
            func_0x000107c3ebd4();
            func_0x000107c61170(uVar23);
            if ((int)uVar24 == 0) {
LAB_102ef1f0c:
              uStack_280 = 0;
            }
            else {
              uVar24 = 0xd000000000000042;
              ppuVar29 = (undefined **)0x800000010f1140b0;
              func_0x000107c5fadc(0xd000000000000042);
              uVar23 = uVar28;
              func_0x000107c3ebd4();
              uStack_280 = (uint)uVar23;
              func_0x000107c61170(uVar24);
            }
            ppuVar36 = (undefined **)0x0;
            do {
              if (ppuStack_260 == ppuVar36) goto LAB_102ef2050;
              if (uVar31 == 0) {
                if (*(undefined ***)(uStack_278 + 0x10) <= ppuVar36) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef2514);
                  (*pcVar3)();
                }
                ppuVar39 = (undefined **)ppuVar35[(long)((long)ppuVar36 + 4)];
                func_0x000107c6157c(ppuVar39);
              }
              else {
                ppuVar39 = ppuVar36;
                ppuVar29 = ppuVar35;
                FUN_102f02a90();
              }
              if (SCARRY8((long)ppuVar36,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef1fac);
                (*pcVar3)();
              }
              func_0x000103be8288(0);
              puVar37 = ppuVar39[5];
              puVar32 = puVar37;
              func_0x000107c61174(puVar37);
              func_0x000103be5790();
              func_0x000107c61170(puVar32);
              func_0x000107c61574(ppuVar39);
              ppuVar36 = (undefined **)((long)ppuVar36 + 1);
            } while (((ulong)puVar37 & 1) == 0);
            ppuVar29 = (undefined **)0x800000010ef36a20;
            uVar23 = 0xd000000000000032;
            func_0x000107c5fadc(0xd000000000000032);
            uVar24 = uVar28;
            func_0x000107c3ebd4();
            func_0x000107c61170(uVar23);
            if ((int)uVar24 != 0) {
              uVar24 = 0xd00000000000003e;
              ppuVar29 = (undefined **)0x800000010f114070;
              func_0x000107c5fadc(0xd00000000000003e);
              func_0x000107c3ebd4();
              func_0x000107c61170(uVar24);
              uStack_280 = uStack_280 | (uint)uVar28;
            }
          }
          else {
            uStack_280 = 0;
          }
LAB_102ef2050:
          ppuVar39 = &PTR____CFConstantStringClassReference_110f52df8;
          ppuVar35 = ppuVar39;
          func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52df8);
          func_0x000107c5faec();
          ppuVar36 = ppuVar29;
          func_0x000107c61170(ppuVar35);
          ppuVar35 = *(undefined ***)(lVar8 + _DAT_1130348e0);
          if ((ulong)ppuVar35 >> 0x3e == 0) {
            ppuStack_268 = *(undefined ***)(((ulong)ppuVar35 & 0xffffffffffffff8) + 0x10);
          }
          else {
            ppuStack_268 = (undefined **)((ulong)ppuVar35 & 0xffffffffffffff8);
            if ((undefined **)0x7fffffffffffffff < ppuVar35) {
              ppuStack_268 = ppuVar35;
            }
            func_0x000107c60480();
          }
          uStack_270 = (ulong)ppuVar35 & 0xffffffffffffff8;
          ppuVar43 = (undefined **)0x0;
          do {
            uStack_278._0_4_ = (uint)(ppuStack_268 != ppuVar43);
            if (ppuStack_268 == ppuVar43) break;
            if (((ulong)ppuVar35 & 0xc000000000000001) == 0) {
              if (*(undefined ***)(uStack_270 + 0x10) <= ppuVar43) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef251c);
                (*pcVar3)();
              }
              ppuVar25 = (undefined **)ppuVar35[(long)((long)ppuVar43 + 4)];
              func_0x000107c61174();
              ppuVar30 = ppuVar36;
            }
            else {
              ppuVar25 = ppuVar43;
              ppuVar30 = ppuVar35;
              func_0x000102f02874(ppuVar43,ppuVar35,&PTR_PTR_1126b3568,0x112d60fb0);
            }
            if (SCARRY8((long)ppuVar43,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef2518);
              (*pcVar3)();
            }
            ppuVar36 = ppuVar25;
            func_0x000107c4fa44();
            func_0x000107c61180();
            ppuVar26 = ppuVar36;
            func_0x000107c44fdc();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar36);
            ppuVar36 = ppuVar26;
            func_0x000107c51cec();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar26);
            ppuVar26 = ppuVar36;
            func_0x000107c5faec();
            func_0x000107c61170(ppuVar36);
            if (ppuVar26 == ppuVar39 && ppuVar30 == ppuVar29) {
              func_0x000107c61170(ppuVar25);
              func_0x000107c6142c(ppuVar30);
              uStack_278._0_4_ = 1;
              break;
            }
            ppuVar36 = ppuVar30;
            func_0x000107c605b8(ppuVar26,ppuVar30,ppuVar39,ppuVar29,0);
            func_0x000107c61170(ppuVar25);
            func_0x000107c6142c(ppuVar30);
            ppuVar43 = (undefined **)((long)ppuVar43 + 1);
          } while (((ulong)ppuVar26 & 1) == 0);
          ppuVar36 = (undefined **)0x0;
          ppuVar35 = ppuVar40;
          func_0x000102f119c4(ppuVar40,0,uStack_280 & 1);
          if ((ulong)ppuVar35 >> 0x3e == 0) {
            ppuStack_268 = *(undefined ***)(((ulong)ppuVar35 & 0xffffffffffffff8) + 0x10);
          }
          else {
            ppuStack_268 = (undefined **)((ulong)ppuVar35 & 0xffffffffffffff8);
            if ((undefined **)0x7fffffffffffffff < ppuVar35) {
              ppuStack_268 = ppuVar35;
            }
            func_0x000107c60480();
          }
          uStack_270 = (ulong)ppuVar35 & 0xffffffffffffff8;
          ppuVar43 = (undefined **)0x0;
          do {
            ppuVar25 = ppuVar43;
            if (ppuStack_268 == ppuVar25) break;
            if (((ulong)ppuVar35 & 0xc000000000000001) == 0) {
              if (*(undefined ***)(uStack_270 + 0x10) <= ppuVar25) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef2524);
                (*pcVar3)();
              }
              ppuVar43 = (undefined **)ppuVar35[(long)((long)ppuVar25 + 4)];
              func_0x000107c61174();
              ppuVar30 = ppuVar36;
            }
            else {
              ppuVar43 = ppuVar25;
              ppuVar30 = ppuVar35;
              func_0x000102f02874(ppuVar25,ppuVar35,&PTR_PTR_1126b3568,0x112d60fb0);
            }
            if (SCARRY8((long)ppuVar25,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102ef2520);
              (*pcVar3)();
            }
            ppuVar36 = ppuVar43;
            func_0x000107c4fa44();
            func_0x000107c61180();
            ppuVar26 = ppuVar36;
            func_0x000107c44fdc();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar36);
            ppuVar36 = ppuVar26;
            func_0x000107c51cec();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar26);
            ppuVar26 = ppuVar36;
            func_0x000107c5faec();
            func_0x000107c61170(ppuVar36);
            if (ppuVar26 == ppuVar39 && ppuVar30 == ppuVar29) {
              func_0x000107c6142c(ppuVar29);
              func_0x000107c6142c(ppuVar35);
              func_0x000107c61170(ppuVar43);
              goto LAB_102ef2330;
            }
            ppuVar36 = ppuVar30;
            func_0x000107c605b8(ppuVar26,ppuVar30,ppuVar39,ppuVar29,0);
            func_0x000107c61170(ppuVar43);
            func_0x000107c6142c(ppuVar30);
            ppuVar43 = (undefined **)((long)ppuVar25 + 1);
          } while (((ulong)ppuVar26 & 1) == 0);
          func_0x000107c6142c(ppuVar29);
          ppuVar30 = ppuVar35;
LAB_102ef2330:
          func_0x000107c6142c(ppuVar30);
          ppuVar35 = ppuVar40;
          func_0x000107c61150(ppuVar40,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_isPlanStickerWithRestrictedDesti_1125fc2a0);
          if (((ulong)ppuVar35 & 1) == 0) {
LAB_102ef23ac:
            func_0x000107c615e8(uVar42);
            FUN_102f080f0(&puStack_110,0x112f27e88,&UNK_10db63a18);
            uVar6 = 0;
          }
          else {
            func_0x000107c4a1cc();
            func_0x000107c61180();
            if (ppuVar40 == (undefined **)0x0) goto LAB_102ef23ac;
            ppuVar35 = ppuVar40;
            func_0x000107c3ebcc();
            uVar6 = (uint)ppuVar35;
            func_0x000107c615e8(uVar42);
            FUN_102f080f0(&puStack_110,0x112f27e88,&UNK_10db63a18);
            func_0x000107c61170(ppuVar40);
          }
          if ((((puVar11 != (ulong *)0x0 ^ *(byte *)(lVar10 + _DAT_113034a48)) & 1) == 0) &&
             (((ppuStack_260 != ppuVar7 ^ *(byte *)(lVar10 + _DAT_113034a50)) & 1) == 0)) {
            lVar27 = *(long *)(lVar8 + _DAT_113034910);
            func_0x000107c61174();
            func_0x000107c61170(lVar8);
            bVar2 = *(byte *)(lVar27 + _DAT_113034d00);
            func_0x000107c61170(lVar27);
            if (((((uint)puVar13 & 1) == (uint)bVar2) &&
                (((uint)puVar15 & 1) == (uint)*(byte *)(lVar10 + _DAT_113034a38))) &&
               (((uint)puVar16 & 1) == (uint)*(byte *)(lVar10 + _DAT_113034a70))) {
              bVar2 = *(byte *)(lVar10 + _DAT_113034aa0);
              func_0x000107c61170(lVar10);
              if (((uVar6 ^ bVar2 | (uint)uStack_278 ^ ppuStack_268 != ppuVar25 | uVar41) & 1) == 0)
              {
                return uVar9;
              }
              goto LAB_102ef242c;
            }
          }
          else {
            func_0x000107c61170(lVar8);
          }
          func_0x000107c61170(lVar10);
LAB_102ef242c:
          func_0x000107c615e8(uVar42);
          return 0;
        }
      }
      func_0x000107c6142c(puVar37);
      puVar37 = puVar12;
    }
  }
  func_0x000107c6142c(puVar37);
LAB_102ef14dc:
  FUN_102f080f0(&puStack_110,0x112f27e88,&UNK_10db63a18);
  return 0;
}



/* Entry: 102ef25d8; end: 102ef28a3;  */

/* WARNING: Possible PIC construction at 0x000102ef263c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef2684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef26ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef27b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef27c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ef26b0) */
/* WARNING: Removing unreachable block (ram,0x000102ef26b4) */
/* WARNING: Removing unreachable block (ram,0x000102ef27e0) */
/* WARNING: Removing unreachable block (ram,0x000102ef27e8) */
/* WARNING: Removing unreachable block (ram,0x000102ef26c0) */
/* WARNING: Removing unreachable block (ram,0x000102ef27f4) */
/* WARNING: Removing unreachable block (ram,0x000102ef26cc) */
/* WARNING: Removing unreachable block (ram,0x000102ef2810) */
/* WARNING: Removing unreachable block (ram,0x000102ef26d4) */
/* WARNING: Removing unreachable block (ram,0x000102ef2824) */
/* WARNING: Removing unreachable block (ram,0x000102ef26e0) */
/* WARNING: Removing unreachable block (ram,0x000102ef26ec) */
/* WARNING: Removing unreachable block (ram,0x000102ef2688) */
/* WARNING: Removing unreachable block (ram,0x000102ef268c) */
/* WARNING: Removing unreachable block (ram,0x000102ef2640) */
/* WARNING: Removing unreachable block (ram,0x000102ef2644) */
/* WARNING: Removing unreachable block (ram,0x000102ef27c8) */
/* WARNING: Removing unreachable block (ram,0x000102ef2660) */
/* WARNING: Removing unreachable block (ram,0x000102ef27b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef25d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f27e98);
  uVar1 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f1142f0);
  func_0x000107c3ebd4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102ef28a4; end: 102ef293b;  */

void FUN_102ef28a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_w3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  *(undefined4 *)(unaff_x22 + 0xe8) = in_w3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f07fd0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ef293c,uVar2,uVar3);
  return;
}



/* Entry: 102ef293c; end: 102ef340b;  */

void FUN_102ef293c(void)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x22;
  long lVar22;
  undefined *puVar23;
  ulong uStack_b0;
  ulong uStack_a8;
  
  iVar3 = *(int *)(unaff_x22 + 0xe8);
  if (iVar3 - 1U < 2) {
LAB_102ef2980:
    lVar17 = *(long *)(unaff_x22 + 0x50);
    lVar5 = *(long *)(lVar17 + 0x18);
    *(long *)(unaff_x22 + 0x80) = lVar5;
    if (lVar5 != 0) {
      puVar15 = *(undefined **)(unaff_x22 + 0x58);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c5770c();
      lVar22 = lVar17;
      FUN_102ef40e4();
      lVar21 = lVar17;
      puVar13 = puVar15;
      FUN_102f130bc();
      uVar18 = *(ulong *)(lVar17 + 8);
      *(ulong *)(unaff_x22 + 0x88) = uVar18;
      if (uVar18 >> 0x3e == 0) {
        lVar17 = *(long *)((uVar18 & 0xffffffffffffff8) + 0x10);
        *(long *)(unaff_x22 + 0x90) = lVar17;
        if (lVar17 == 0) goto LAB_102ef2c54;
LAB_102ef29ec:
        if ((uVar18 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef3328);
            (*pcVar4)();
          }
          uVar20 = *(undefined8 *)(*(long *)(uVar18 + 0x20) + 0x18);
          lVar17 = *(long *)(*(long *)(uVar18 + 0x20) + 0x20);
          func_0x000107c61434(lVar17);
        }
        else {
          lVar12 = 0;
          FUN_102f02a90(0,uVar18);
          uVar20 = *(undefined8 *)(lVar12 + 0x18);
          lVar17 = *(long *)(lVar12 + 0x20);
          func_0x000107c61434(lVar17);
          func_0x000107c615e8(lVar12);
        }
      }
      else {
        uVar16 = uVar18 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar18) {
          uVar16 = uVar18;
        }
        func_0x000107c60480();
        *(ulong *)(unaff_x22 + 0x90) = uVar16;
        if (uVar16 != 0) goto LAB_102ef29ec;
LAB_102ef2c54:
        uVar20 = 0;
        lVar17 = 0;
      }
      if (*(int *)(unaff_x22 + 0xe8) == 4) {
        if (puVar13 == (undefined *)0x0) {
          lVar21 = 0;
          if (puVar15 != (undefined *)0x0) goto LAB_102ef2c88;
LAB_102ef2e2c:
          lVar22 = 0;
          if (lVar17 != 0) goto LAB_102ef2ca4;
LAB_102ef2e34:
          uVar20 = 0;
          lVar12 = lVar21;
        }
        else {
          func_0x000107c5fadc(lVar21,puVar13);
          func_0x000107c6142c(puVar13);
          if (puVar15 == (undefined *)0x0) goto LAB_102ef2e2c;
LAB_102ef2c88:
          func_0x000107c5fadc(lVar22,puVar15);
          func_0x000107c6142c(puVar15);
          if (lVar17 == 0) goto LAB_102ef2e34;
LAB_102ef2ca4:
          func_0x000107c5fadc(uVar20,lVar17);
          func_0x000107c6142c(lVar17);
          lVar12 = lVar21;
        }
        uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
        func_0x000107c44290();
        func_0x000107c61180();
      }
      else {
        puVar23 = *(undefined **)(*(long *)(unaff_x22 + 0x50) + 0x10);
        puVar7 = puVar23;
        puVar19 = PTR_s_respondsToSelector__11262c7e0;
        func_0x000107c61150(puVar23,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_preselectedDestinations_112620488);
        if (((ulong)puVar7 & 1) == 0) {
LAB_102ef2de4:
          func_0x000107c437f4();
          uVar18 = 0;
          uStack_a8 = 0;
LAB_102ef2df8:
          uStack_b0 = 0;
          if (puVar13 != (undefined *)0x0) goto LAB_102ef2e04;
LAB_102ef3150:
          func_0x000107c61174(lVar5);
          lVar21 = 0;
        }
        else {
          func_0x000107c4ee5c();
          func_0x000107c61180();
          if (puVar23 == (undefined *)0x0) goto LAB_102ef2de4;
          puVar8 = (undefined *)0x0;
          FUN_102f09540(0,0x112d55bf0,&PTR_PTR_1126a6218);
          puVar7 = puVar23;
          func_0x000107c5fc54();
          func_0x000107c61170(puVar23);
          uVar18 = (ulong)puVar7 >> 0x3e;
          if (uVar18 == 0) {
            puVar19 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar19 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if (((ulong)puVar7 & 0x8000000000000000) != 0) {
              puVar19 = puVar7;
            }
            func_0x000107c60480();
          }
          func_0x000107c61434(puVar7);
          if (puVar19 != (undefined *)0x0) {
            uVar16 = 0;
            do {
              if (((ulong)puVar7 & 0xc000000000000001) == 0) {
                if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef32ec);
                  (*pcVar4)();
                }
                uVar9 = *(ulong *)(puVar7 + uVar16 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar9 = uVar16;
                puVar8 = puVar7;
                func_0x000102f02874(uVar16,puVar7,&PTR_PTR_1126a6218,0x112d55bf0);
              }
              puVar23 = (undefined *)(uVar16 + 1);
              if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef32e8);
                (*pcVar4)();
              }
              uVar10 = uVar9;
              func_0x000107c4a91c();
              if ((int)uVar10 == 3) {
                func_0x000107c6142c(puVar7);
                uVar16 = uVar9;
                func_0x000107c41830();
                func_0x000107c61180();
                func_0x000107c61170(uVar9);
                uStack_a8 = uVar16;
                func_0x000107c5faec();
                puVar23 = puVar8;
                func_0x000107c61170(uVar16);
                goto LAB_102ef2eb0;
              }
              func_0x000107c61170(uVar9);
              uVar16 = uVar16 + 1;
            } while (puVar23 != puVar19);
          }
          func_0x000107c6142c(puVar7);
          uStack_a8 = 0;
          puVar23 = puVar8;
          puVar8 = (undefined *)0x0;
LAB_102ef2eb0:
          if (uVar18 == 0) {
            puVar19 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar19 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if (((ulong)puVar7 & 0x8000000000000000) != 0) {
              puVar19 = puVar7;
            }
            func_0x000107c60480();
          }
          func_0x000107c61434(puVar7);
          if (puVar19 != (undefined *)0x0) {
            uVar16 = 0;
            do {
              if (((ulong)puVar7 & 0xc000000000000001) == 0) {
                if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef32f4);
                  (*pcVar4)();
                }
                uVar9 = *(ulong *)(puVar7 + uVar16 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar9 = uVar16;
                puVar23 = puVar7;
                func_0x000102f02874(uVar16,puVar7,&PTR_PTR_1126a6218,0x112d55bf0);
              }
              puVar14 = (undefined *)(uVar16 + 1);
              if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef32f0);
                (*pcVar4)();
              }
              uVar10 = uVar9;
              func_0x000107c4a91c();
              if ((int)uVar10 == 4) {
                func_0x000107c6142c(puVar7);
                uVar16 = uVar9;
                func_0x000107c41830();
                func_0x000107c61180();
                func_0x000107c61170(uVar9);
                uStack_b0 = uVar16;
                func_0x000107c5faec();
                puVar14 = puVar23;
                func_0x000107c61170(uVar16);
                goto LAB_102ef2fbc;
              }
              func_0x000107c61170(uVar9);
              uVar16 = uVar16 + 1;
            } while (puVar14 != puVar19);
          }
          func_0x000107c6142c(puVar7);
          uStack_b0 = 0;
          puVar14 = puVar23;
          puVar23 = (undefined *)0x0;
LAB_102ef2fbc:
          if (uVar18 == 0) {
            puVar19 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar19 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if (((ulong)puVar7 & 0x8000000000000000) != 0) {
              puVar19 = puVar7;
            }
            func_0x000107c60480();
          }
          if (puVar19 != (undefined *)0x0) {
            uVar18 = 0;
            do {
              if (((ulong)puVar7 & 0xc000000000000001) == 0) {
                if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef32fc);
                  (*pcVar4)();
                }
                uVar16 = *(ulong *)(puVar7 + uVar18 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar16 = uVar18;
                puVar14 = puVar7;
                func_0x000102f02874(uVar18,puVar7,&PTR_PTR_1126a6218,0x112d55bf0);
              }
              puVar2 = (undefined *)(uVar18 + 1);
              if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef32f8);
                (*pcVar4)();
              }
              uVar9 = uVar16;
              func_0x000107c4a91c();
              if ((int)uVar9 == 5) {
                func_0x000107c6142c(puVar7);
                uVar9 = uVar16;
                func_0x000107c41830(uVar16);
                func_0x000107c61180();
                func_0x000107c61170(uVar16);
                uVar18 = uVar9;
                func_0x000107c5faec(uVar9);
                puVar19 = puVar14;
                func_0x000107c61170(uVar9);
                goto LAB_102ef30c4;
              }
              func_0x000107c61170(uVar16);
              uVar18 = uVar18 + 1;
            } while (puVar2 != puVar19);
          }
          func_0x000107c6142c(puVar7);
          uVar18 = 0;
          puVar19 = puVar14;
          puVar14 = (undefined *)0x0;
LAB_102ef30c4:
          func_0x000107c437f4();
          if (puVar8 != (undefined *)0x0) {
            puVar19 = puVar8;
            func_0x000107c5fadc(uStack_a8);
            func_0x000107c6142c(puVar8);
            if (puVar14 == (undefined *)0x0) goto LAB_102ef3124;
LAB_102ef30f8:
            puVar19 = puVar14;
            func_0x000107c5fadc(uVar18);
            func_0x000107c6142c(puVar14);
            if (puVar23 != (undefined *)0x0) goto LAB_102ef3130;
            goto LAB_102ef2df8;
          }
          uStack_a8 = 0;
          if (puVar14 != (undefined *)0x0) goto LAB_102ef30f8;
LAB_102ef3124:
          uVar18 = 0;
          if (puVar23 == (undefined *)0x0) goto LAB_102ef2df8;
LAB_102ef3130:
          puVar19 = puVar23;
          func_0x000107c5fadc(uStack_b0);
          func_0x000107c6142c(puVar23);
          if (puVar13 == (undefined *)0x0) goto LAB_102ef3150;
LAB_102ef2e04:
          func_0x000107c61174(lVar5);
          puVar19 = puVar13;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar13);
        }
        lVar12 = *(long *)(unaff_x22 + 0x50);
        FUN_102f1c0b0();
        if (puVar19 == (undefined *)0x0) {
          lVar12 = 0;
          if (puVar15 != (undefined *)0x0) goto LAB_102ef3184;
LAB_102ef31c8:
          lVar22 = 0;
          if (lVar17 != 0) goto LAB_102ef31a0;
LAB_102ef31d0:
          uVar20 = 0;
        }
        else {
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar19);
          if (puVar15 == (undefined *)0x0) goto LAB_102ef31c8;
LAB_102ef3184:
          func_0x000107c5fadc(lVar22,puVar15);
          func_0x000107c6142c(puVar15);
          if (lVar17 == 0) goto LAB_102ef31d0;
LAB_102ef31a0:
          func_0x000107c5fadc(uVar20,lVar17);
          func_0x000107c6142c(lVar17);
        }
        uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
        func_0x000107c44294();
        func_0x000107c61180();
        func_0x000107c61170(lVar21);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uStack_b0);
        func_0x000107c61170(uVar18);
        func_0x000107c61170(uStack_a8);
      }
      *(undefined8 *)(unaff_x22 + 0x98) = uVar11;
      func_0x000107c61170(uVar20);
      func_0x000107c61170(lVar22);
      func_0x000107c61170(lVar12);
      func_0x0001000285a8(0x112f280c0,&UNK_10db63b28);
      func_0x000107c61174();
      uVar20 = uVar11;
      func_0x000100759c94();
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar20;
      func_0x000107c61170(uVar11);
      plVar6 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa8) = plVar6;
      pcVar4 = FUN_102ef340c;
LAB_102ef32b8:
      *plVar6 = unaff_x22;
      plVar6[1] = (long)pcVar4;
                    /* WARNING: Could not recover jumptable at 0x000102ef32e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_102f03e18();
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    pcVar1 = "missing metadata for quick story posting";
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar20 = 0xd000000000000028;
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 != 4) {
        func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
        goto LAB_102ef33b0;
      }
      goto LAB_102ef2980;
    }
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0x20);
    *(long *)(unaff_x22 + 0xb8) = lVar5;
    if (lVar5 != 0) {
      uVar18 = *(ulong *)(*(long *)(unaff_x22 + 0x50) + 8);
      if (uVar18 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar16 = uVar18 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar18) {
          uVar16 = uVar18;
        }
        func_0x000107c60480();
      }
      if (uVar16 != 0) {
        if ((uVar18 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ef33f4);
            (*pcVar4)();
          }
          lVar17 = *(long *)(uVar18 + 0x20);
          func_0x000107c61174(lVar5);
          func_0x000107c6157c(lVar17);
        }
        else {
          func_0x000107c61174(lVar5);
          lVar17 = 0;
          FUN_102f02a90(0,uVar18);
        }
        lVar5 = *(long *)(unaff_x22 + 0x50);
        *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(lVar17 + 0x28);
        func_0x000107c61174();
        func_0x000107c61574(lVar17);
        uVar16 = *(ulong *)(lVar5 + 0x10);
        uVar18 = uVar16;
        func_0x000107c61150(uVar16,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_createPostABConfig_1125b38b0);
        if ((uVar18 & 1) == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = uVar16;
          func_0x000107c40adc();
          func_0x000107c61180();
        }
        *(ulong *)(unaff_x22 + 200) = uVar18;
        uVar18 = uVar16;
        func_0x000107c61150(uVar16,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_preSelectedMemberProfile_11261f210);
        if ((uVar18 & 1) == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = uVar16;
          func_0x000107c4ec3c(uVar16);
          func_0x000107c61180();
        }
        uVar9 = uVar16;
        puVar13 = PTR_s_respondsToSelector__11262c7e0;
        func_0x000107c61150(uVar16,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_originalPostCompositeStoryId_112618ff0);
        if ((uVar9 & 1) == 0) {
LAB_102ef2b98:
          uVar9 = 0;
        }
        else {
          func_0x000107c4e0b0();
          func_0x000107c61180();
          if (uVar16 == 0) goto LAB_102ef2b98;
          uVar9 = uVar16;
          func_0x000107c5faec();
          func_0x000107c61170(uVar16);
          func_0x000107c5fadc(uVar9,puVar13);
          func_0x000107c6142c(puVar13);
        }
        uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
        func_0x0001000285a8(0x112f280c0,&UNK_10db63b28);
        func_0x000107c44304();
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar18);
        uVar20 = uVar11;
        func_0x000100759c94(uVar11,0);
        *(undefined8 *)(unaff_x22 + 0xd0) = uVar20;
        func_0x000107c61170(uVar11);
        plVar6 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xd8) = plVar6;
        pcVar4 = FUN_102ef3bf0;
        goto LAB_102ef32b8;
      }
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    pcVar1 = "missing metadata for quick spotlight posting";
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar20 = 0xd00000000000002c;
  }
  func_0x000107c5fadc(uVar20,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c466bc(puVar13);
  func_0x000107c61170(uVar20);
  func_0x00010488ade0(puVar13);
  func_0x000107c61170(puVar13);
LAB_102ef33b0:
                    /* WARNING: Could not recover jumptable at 0x000102ef33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ef340c; end: 102ef350f;  */

void FUN_102ef340c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  *(undefined1 *)(lVar1 + 0xec) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ef3460,0,0);
  return;
}



/* Entry: 102ef3510; end: 102ef3b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef3510(void)

{
  undefined1 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  ulong uVar21;
  
  lVar10 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  lVar6 = _DAT_112f86e78;
  if (lVar10 == 0) {
LAB_102ef39b0:
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0xb0);
    uVar9 = *(ulong *)(lVar10 + _DAT_112f86e78);
    if (uVar9 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar3 = uVar9;
      }
      func_0x000107c60480();
    }
    if ((long)uVar3 < 1) goto LAB_102ef39b0;
    lVar18 = *(long *)(lVar10 + _DAT_112f86e98);
    func_0x000100d2b830(*(undefined8 *)(unaff_x22 + 0xb0),*(undefined1 *)(unaff_x22 + 0xec));
    func_0x000107c615f0(lVar18);
    puVar4 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    lVar5 = lVar18;
    func_0x000107c6148c(lVar18,puVar4);
    uVar1 = *(undefined1 *)(unaff_x22 + 0xec);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    if (lVar5 != 0) {
      lVar15 = *(long *)(unaff_x22 + 0x90);
      lVar19 = *(long *)(unaff_x22 + 0x58);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x000100d2b81c(uVar12,uVar1);
      lVar13 = *(long *)(lVar19 + _DAT_112f27f80);
      uVar12 = *(undefined8 *)(lVar19 + _DAT_112f27f88);
      puVar4 = &UNK_1105e82f0;
      func_0x000107c613fc(&UNK_1105e82f0,0x30,7);
      *(long *)(puVar4 + 0x10) = lVar19;
      *(long *)(puVar4 + 0x18) = lVar5;
      *(long *)(puVar4 + 0x20) = lVar10;
      *(undefined8 *)(puVar4 + 0x28) = uVar17;
      uVar1 = *(undefined1 *)(unaff_x22 + 0xec);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
      if (lVar15 == 0) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
        func_0x000100d2b830(uVar17,uVar1);
        func_0x000107c615f0(lVar18);
        func_0x000107c61174(uVar12);
        func_0x000107c615f0(uVar11);
        func_0x000100d2b830(uVar17,uVar1);
        func_0x000107c615f0(lVar18);
        func_0x000107c61174(uVar12);
        func_0x000107c615f0(uVar11);
      }
      else {
        uVar3 = *(ulong *)(unaff_x22 + 0x88);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x60);
        func_0x000100d2b830(uVar17,uVar1);
        func_0x000107c615f0(lVar18);
        func_0x000107c61174(uVar11);
        func_0x000107c615f0(uVar16);
        func_0x000100d2b830(uVar17,uVar1);
        func_0x000107c615f0(lVar18);
        func_0x000107c61174(uVar11);
        func_0x000107c615f0(uVar16);
        uVar9 = 0;
        do {
          if ((uVar3 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102ef3998);
              (*pcVar2)();
            }
            uVar14 = *(ulong *)(uVar3 + 0x20 + uVar9 * 8);
            func_0x000107c6157c(uVar14);
          }
          else {
            uVar14 = uVar9;
            FUN_102f02a90(uVar9,*(undefined8 *)(unaff_x22 + 0x88));
          }
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102ef3994);
            (*pcVar2)();
          }
          lVar19 = uVar9 + 1;
          uVar21 = uVar14;
          func_0x000102f125a0();
          if ((uVar21 != 0) &&
             (uVar21 = *(ulong *)(uVar21 + 0x10), func_0x000107c6142c(), 1 < uVar21)) {
            uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
            uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
            uVar1 = *(undefined1 *)(unaff_x22 + 0xec);
            func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
            func_0x000107c615e8(lVar18);
            func_0x000100d2b81c(uVar11,uVar1);
            func_0x000107c615e8(uVar17);
            func_0x000107c42eac();
            func_0x000107c61180();
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102ef3b88);
              (*pcVar2)();
            }
            uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
            uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
            puVar20 = *(undefined **)(unaff_x22 + 0x80);
            uVar1 = *(undefined1 *)(unaff_x22 + 0xec);
            func_0x000107c42294(uVar12);
            func_0x000107c61180();
            puVar7 = PTR_PTR_1126c5078;
            func_0x000107c610f8(PTR_PTR_1126c5078);
            func_0x000107c61174(puVar20);
            func_0x000107c48f38(puVar7);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(lVar13);
            func_0x000107c61170(puVar20);
            puVar8 = &UNK_1105e8318;
            func_0x000107c613fc(&UNK_1105e8318,0x20,7);
            *(code **)(puVar8 + 0x10) = FUN_102f0949c;
            *(undefined **)(puVar8 + 0x18) = puVar4;
            *(code **)(unaff_x22 + 0x30) = FUN_102f094dc;
            *(undefined **)(unaff_x22 + 0x38) = puVar8;
            *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
            *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
            *(undefined8 *)(unaff_x22 + 0x20) = 0x102f099e8;
            *(undefined **)(unaff_x22 + 0x28) = &UNK_1105e8330;
            lVar6 = unaff_x22 + 0x10;
            func_0x000107c60bc4(lVar6);
            uVar12 = *(undefined8 *)(unaff_x22 + 0x38);
            func_0x000107c6157c(puVar4);
            func_0x000107c61574(uVar12);
            func_0x000107c4eee4(puVar7);
            func_0x000107c61170(uVar11);
            func_0x000107c61574(puVar4);
            func_0x000100d2b81c(uVar17,uVar1);
            func_0x000107c615e8(lVar18);
            func_0x000107c61170(puVar20);
            func_0x000107c61574(uVar14);
            func_0x000107c61170(puVar7);
            func_0x000107c60bd0(lVar6);
            goto LAB_102ef3b58;
          }
          lVar15 = *(long *)(unaff_x22 + 0x90);
          func_0x000107c61574(uVar14);
          uVar9 = uVar9 + 1;
        } while (lVar19 != lVar15);
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
      puVar20 = *(undefined **)(unaff_x22 + 0x80);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar1 = *(undefined1 *)(unaff_x22 + 0xec);
      FUN_102ee540c(lVar5,*(undefined8 *)(lVar10 + lVar6),0,0,uVar11,uVar17);
      func_0x000107c61170(uVar16);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(lVar18);
      func_0x000100d2b81c(uVar11,uVar1);
      func_0x000107c615e8(uVar17);
      func_0x000100d2b81c(uVar11,uVar1);
      func_0x000107c615e8(lVar18);
      func_0x000107c61170(puVar20);
      goto LAB_102ef3b58;
    }
    uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c615e8(lVar18);
    func_0x000107c61170(uVar17);
    func_0x000100d2b81c(uVar12,uVar1);
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xec);
  puVar20 = PTR_PTR_1126d4cd0;
  func_0x000107c610f8(PTR_PTR_1126d4cd0);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55570(puVar20);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55718(puVar20);
  func_0x000107c61170(puVar4);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___sSSN_11034da80;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c57654(puVar20);
  func_0x000107c61170(puVar7);
  puVar7 = puVar8;
  func_0x000107c5fc48(puVar8,puVar4);
  func_0x000107c57624(puVar20);
  func_0x000107c61170(puVar7);
  uVar12 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  puVar4 = puVar8;
  func_0x000107c5fc48(puVar8,uVar12);
  func_0x000107c57628(puVar20);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c555e8(puVar20);
  func_0x000107c61170(puVar4);
  func_0x000107c5fc48(puVar8,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c58df8(puVar20);
  func_0x000107c61170(puVar8);
  func_0x000107c560f8(puVar20);
  func_0x000102ee70b8(0,puVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000100d2b81c(uVar17,uVar1);
LAB_102ef3b58:
  func_0x000107c61170(puVar20);
                    /* WARNING: Could not recover jumptable at 0x000102ef3b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ef3b88; end: 102ef3bef;  */

void FUN_102ef3b88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61170(uVar2);
  func_0x00010488ade0(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ef3bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ef3bf0; end: 102ef3ceb;  */

void FUN_102ef3bf0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xe0) = param_1;
  *(undefined1 *)(lVar1 + 0xed) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ef3c44,0,0);
  return;
}



/* Entry: 102ef3cec; end: 102ef406f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef3cec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_60;
  
  lVar10 = *(long *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  lVar14 = _DAT_112f86e78;
  lVar9 = *(long *)(unaff_x22 + 0xe0);
  lVar15 = lVar9;
  if (lVar10 != 0) {
    uVar7 = *(ulong *)(lVar9 + _DAT_112f86e78);
    if (uVar7 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar8 = uVar7;
      }
      func_0x000107c60480();
      lVar15 = *(long *)(unaff_x22 + 0xe0);
    }
    if (0 < (long)uVar8) {
      lVar13 = *(long *)(lVar9 + _DAT_112f86e98);
      func_0x000100d2b830(lVar15,*(undefined1 *)(unaff_x22 + 0xed));
      func_0x000107c615f0(lVar13);
      puVar1 = PTR_PTR_1126c33d0;
      func_0x000107c61168(PTR_PTR_1126c33d0);
      lVar10 = lVar13;
      func_0x000107c6148c(lVar13,puVar1);
      if (lVar10 != 0) {
        if (*(char *)(lVar9 + _DAT_112f86ea8) == '\x01') {
          lVar14 = lVar10;
          func_0x000102f13800(lVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0x58) + _DAT_112f27ea8),
                              *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + _DAT_112f27f30));
        }
        else {
          lVar14 = *(long *)(lVar9 + lVar14);
          func_0x000107c61434(lVar14);
        }
        lVar15 = *(long *)(unaff_x22 + 0xe0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar12 = *(undefined8 *)(unaff_x22 + 200);
        uStack_60 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar6 = *(undefined1 *)(unaff_x22 + 0xed);
        func_0x000107c61174(lVar9);
        FUN_102ee540c(lVar10,lVar14,0,0,lVar15,0);
        func_0x000100d2b81c(lVar15,uVar6);
        func_0x000107c6142c(lVar14);
        func_0x000107c615e8(lVar13);
        func_0x000100d2b81c(lVar15,uVar6);
        goto LAB_102ef4030;
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar6 = *(undefined1 *)(unaff_x22 + 0xed);
      func_0x000107c615e8(lVar13);
      func_0x000100d2b81c(uVar11,uVar6);
      lVar15 = *(long *)(unaff_x22 + 0xe0);
    }
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uStack_60 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined1 *)(unaff_x22 + 0xed);
  puVar2 = PTR_PTR_1126d4cd0;
  func_0x000107c610f8(PTR_PTR_1126d4cd0);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55570(puVar2);
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55718(puVar2);
  func_0x000107c61170(puVar1);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___sSSN_11034da80;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c57654(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = puVar5;
  func_0x000107c5fc48(puVar5,puVar1);
  func_0x000107c57624(puVar2);
  func_0x000107c61170(puVar3);
  uVar4 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  puVar1 = puVar5;
  func_0x000107c5fc48(puVar5,uVar4);
  func_0x000107c57628(puVar2);
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c555e8(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c5fc48(puVar5,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c58df8(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c560f8(puVar2);
  func_0x000102ee70b8(0,puVar2);
  func_0x000107c61170(puVar2);
LAB_102ef4030:
  func_0x000100d2b81c(lVar15,uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x000102ef406c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ef4070; end: 102ef40e3;  */

void FUN_102ef4070(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar2);
  func_0x00010488ade0(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ef40e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ef40e4; end: 102ef41bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102ef40e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 == 0) {
    lVar2 = param_2;
    func_0x00010011df08();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x68);
    lVar2 = lVar4;
  }
  param_2 = param_2 + _DAT_112f27e80;
  func_0x000107c61428(param_2,auStack_58,0x21,0);
  lVar1 = param_2;
  func_0x000102f05844();
  if ((int)lVar1 == 1) {
    func_0x000107c61434(lVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    *(long *)(param_2 + 0x68) = lVar3;
    *(long *)(param_2 + 0x70) = lVar2;
    func_0x000107c61434(lVar4);
    func_0x000107c61434(lVar2);
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c614a8(auStack_58);
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = lVar3;
  return auVar6;
}



/* Entry: 102ef41bc; end: 102ef426b;  */

undefined1  [16] FUN_102ef41bc(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  func_0x000107c516a0();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  uVar5 = uVar3;
  if (param_2 < *(long *)(uVar3 + 0x10)) {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ef426c);
      (*pcVar2)();
    }
    lVar1 = uVar3 + param_2 * 0x10;
    uVar4 = *(ulong *)(lVar1 + 0x20);
    uVar5 = *(ulong *)(lVar1 + 0x28);
    func_0x000107c61434(uVar5);
    func_0x000107c6142c(uVar3);
    uVar3 = uVar4 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar3 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) goto LAB_102ef4258;
  }
  func_0x000107c6142c(uVar5);
  uVar4 = 0;
  uVar5 = 0;
LAB_102ef4258:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 102ef426c; end: 102ef4417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef426c(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  uVar5 = *(ulong *)(unaff_x20 + _DAT_112f27e98);
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f114370);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if (((uVar5 & 1) == 0) &&
     (func_0x000107c51edc(), iRam0000000112f280a0 != param_2 && iRam0000000112f280a4 != param_2)) {
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    FUN_102f09bac(param_1);
    uVar2 = 0;
    func_0x000102ed4660(0);
    FUN_102ed5a18(param_1,uVar2,&PTR_DAT_1105e5c80);
    func_0x000107c6142c(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f27eb0);
    lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f27eb0))[1];
    func_0x000107c614f0(uVar2);
    func_0x0001000d224c(auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    FUN_102f09bac(param_1);
    uVar3 = 0;
    func_0x000102ed4660(0);
    uVar4 = param_1;
    (*(code *)(undefined *)0x102ed5abc)(param_1,uVar3,&PTR_DAT_1105e5c80);
    func_0x000107c6142c(param_1);
    (**(code **)(lVar1 + 0x10))(uVar4,uVar2,lVar1);
  }
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 102ef4418; end: 102ef4d67;  */

void FUN_102ef4418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  pcVar1 = "presentExternalShareSheet(with:sendParameters:onComplete:onError:)";
  func_0x0001000c10c0("presentExternalShareSheet(with:sendParameters:onComplete:onError:)");
  func_0x000107c61180();
  puVar2 = &UNK_1105e5fa0;
  func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105e6428;
  func_0x000107c613fc(&UNK_1105e6428,0x48,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  pcStack_70 = FUN_102f057cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105e6440;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_6);
  func_0x000107c61434(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102ef4d68; end: 102ef4e07;  */

undefined8 FUN_102ef4d68(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef4e08);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(*(long *)(uVar4 + 0x20) + 0x28);
    func_0x000107c61174(uVar5);
  }
  else {
    lVar3 = 0;
    FUN_102f02a90(0,uVar4);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c61174(uVar5);
    func_0x000107c615e8(lVar3);
  }
  return uVar5;
}



/* Entry: 102ef4e08; end: 102ef4f0f; -[_TtC24SCSnapDocSendServiceImpl22SnapDocSendServiceImpl presentExternalShareSheetWithSnapDocBundles:sendParameters:onComplete:onError:] */

/* WARNING: Possible PIC construction at 0x000102ef4ef4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ef4ef8) */

void FUN_102ef4e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar1 = 0x112ebb4f0;
  func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_1105e6478;
  func_0x000107c613fc(&UNK_1105e6478,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1105e64a0;
  func_0x000107c613fc(&UNK_1105e64a0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102ef4418(param_3,param_4,FUN_102f057f8,puVar2,FUN_102f05804,puVar3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102ef4f10; end: 102ef51ef;  */

void FUN_102ef4f10(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  long lStack_78;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    uVar10 = uVar9;
    func_0x000107c60480();
    if ((long)uVar10 < 1) goto LAB_102ef5174;
    func_0x000107c60480();
  }
  if (uVar9 != 0) {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef51f0);
        (*pcVar1)();
      }
      lStack_78 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      func_0x000107c61174();
    }
    else {
      lVar7 = 0;
      FUN_102f02a90(0,param_1);
      lStack_78 = *(long *)(lVar7 + 0x28);
      func_0x000107c61174();
      func_0x000107c615e8(lVar7);
    }
    uVar10 = 0;
    dVar12 = 0.0;
    while( true ) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef5140);
          (*pcVar1)();
        }
        uVar11 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        uVar2 = uVar11;
        func_0x000107c6157c(uVar11);
      }
      else {
        uVar11 = uVar10;
        FUN_102f02a90(uVar10,param_1);
        uVar2 = uVar11;
      }
      if (SCARRY8(uVar10,1)) break;
      uVar8 = uVar10 + 1;
      func_0x000103be2924();
      func_0x000107c61574(uVar11);
      dVar12 = dVar12 + (double)uVar2 / 1000.0;
      uVar10 = uVar10 + 1;
      if (uVar8 == uVar9) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (param_2 == 0) {
          FUN_102f09540();
          func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
        }
        else {
          lVar3 = param_2;
          func_0x000107c5c92c(0x405e000000000000);
          func_0x000107c61180();
          func_0x000107c615e8(param_2);
          lVar7 = 0x112d38dc0;
          func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x18) = 2;
          *(undefined8 *)(lVar7 + 0x10) = 1;
          uVar4 = 0;
          func_0x000103f5fab8();
          func_0x000107c610f8();
          func_0x000107c61174();
          lVar5 = lVar3;
          func_0x000103f5f888(dVar12);
          *(undefined8 *)(lVar7 + 0x38) = uVar4;
          *(long *)(lVar7 + 0x20) = lVar5;
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
          lVar5 = lVar7;
          func_0x000107c5fc48(lVar7,PTR___sypN_11034f1a8 + 8);
          func_0x000107c61574(lVar7);
          func_0x000107c45788(puVar6);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lStack_78);
          lStack_78 = lVar5;
        }
        func_0x000107c61170(lStack_78);
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef513c);
    (*pcVar1)();
  }
LAB_102ef5174:
  FUN_102f09540(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102ef51f0; end: 102ef524b;  */

void FUN_102ef51f0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102ef524c(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102ef524c; end: 102ef5633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef524c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  code *pcVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  ulong *puVar28;
  uint uVar29;
  long unaff_x20;
  undefined8 uVar30;
  ulong uVar31;
  undefined1 auStack_368 [152];
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 auStack_238 [24];
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  iVar23 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f27e98);
  func_0x000108f48664();
  if (iVar23 == 0) {
    return;
  }
  puVar28 = (ulong *)(unaff_x20 + _DAT_112f27e80);
  func_0x000107c61428(puVar28,auStack_238,0,0);
  uStack_1b8 = puVar28[0xd];
  uStack_1c0 = puVar28[0xc];
  uStack_1a8 = puVar28[0xf];
  uStack_1b0 = puVar28[0xe];
  uStack_198 = puVar28[0x11];
  uStack_1a0 = puVar28[0x10];
  uStack_190 = puVar28[0x12];
  uStack_1f8 = puVar28[5];
  uStack_200 = puVar28[4];
  uStack_1e8 = puVar28[7];
  uStack_1f0 = puVar28[6];
  uStack_1d8 = puVar28[9];
  uStack_1e0 = puVar28[8];
  uStack_1c8 = puVar28[0xb];
  uStack_1d0 = puVar28[10];
  uStack_218 = puVar28[1];
  uVar31 = *puVar28;
  uStack_208 = puVar28[3];
  uStack_210 = puVar28[2];
  uStack_128 = puVar28[0xc];
  uStack_130 = puVar28[0xb];
  uStack_118 = puVar28[0xe];
  uStack_120 = puVar28[0xd];
  uStack_108 = puVar28[0x10];
  uStack_110 = puVar28[0xf];
  uStack_f8 = puVar28[0x12];
  uStack_100 = puVar28[0x11];
  uStack_168 = puVar28[4];
  uStack_170 = puVar28[3];
  uStack_158 = puVar28[6];
  uStack_160 = puVar28[5];
  uStack_148 = puVar28[8];
  uStack_150 = puVar28[7];
  uStack_138 = puVar28[10];
  uStack_140 = puVar28[9];
  uStack_178 = puVar28[2];
  uStack_180 = puVar28[1];
  iVar23 = (int)&uStack_220;
  uStack_220 = uVar31;
  func_0x000102f05844();
  if (iVar23 == 1) {
    return;
  }
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_e8 = uVar31;
  if (uVar31 >> 0x3e == 0) {
    uVar24 = *(ulong *)((uVar31 & 0xffffffffffffff8) + 0x10);
    uVar31 = uStack_2d0;
    uVar4 = uStack_2c8;
    uVar5 = uStack_2c0;
    uVar6 = uStack_2b8;
    uVar7 = uStack_2b0;
    uVar8 = uStack_2a8;
    uVar9 = uStack_2a0;
    uVar10 = uStack_298;
    uVar11 = uStack_290;
    uVar12 = uStack_288;
    uVar13 = uStack_280;
    uVar14 = uStack_278;
    uVar15 = uStack_270;
    uVar16 = uStack_268;
    uVar17 = uStack_260;
    uVar18 = uStack_258;
    uVar19 = uStack_250;
    uVar20 = uStack_248;
    uVar21 = uStack_240;
    uStack_2d0 = uStack_220;
    uStack_2c8 = uStack_218;
    uStack_2c0 = uStack_210;
    uStack_2b8 = uStack_208;
    uStack_2b0 = uStack_200;
    uStack_2a8 = uStack_1f8;
    uStack_2a0 = uStack_1f0;
    uStack_298 = uStack_1e8;
    uStack_290 = uStack_1e0;
    uStack_288 = uStack_1d8;
    uStack_280 = uStack_1d0;
    uStack_278 = uStack_1c8;
    uStack_270 = uStack_1c0;
    uStack_268 = uStack_1b8;
    uStack_260 = uStack_1b0;
    uStack_258 = uStack_1a8;
    uStack_250 = uStack_1a0;
    uStack_248 = uStack_198;
    uStack_240 = uStack_190;
  }
  else {
    uVar24 = uVar31 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar31) {
      uVar24 = uVar31;
    }
    func_0x000107c60480();
    uVar31 = uStack_2d0;
    uVar4 = uStack_2c8;
    uVar5 = uStack_2c0;
    uVar6 = uStack_2b8;
    uVar7 = uStack_2b0;
    uVar8 = uStack_2a8;
    uVar9 = uStack_2a0;
    uVar10 = uStack_298;
    uVar11 = uStack_290;
    uVar12 = uStack_288;
    uVar13 = uStack_280;
    uVar14 = uStack_278;
    uVar15 = uStack_270;
    uVar16 = uStack_268;
    uVar17 = uStack_260;
    uVar18 = uStack_258;
    uVar19 = uStack_250;
    uVar20 = uStack_248;
    uVar21 = uStack_240;
    uStack_2d0 = uStack_220;
    uStack_2c8 = uStack_218;
    uStack_2c0 = uStack_210;
    uStack_2b8 = uStack_208;
    uStack_2b0 = uStack_200;
    uStack_2a8 = uStack_1f8;
    uStack_2a0 = uStack_1f0;
    uStack_298 = uStack_1e8;
    uStack_290 = uStack_1e0;
    uStack_288 = uStack_1d8;
    uStack_280 = uStack_1d0;
    uStack_278 = uStack_1c8;
    uStack_270 = uStack_1c0;
    uStack_268 = uStack_1b8;
    uStack_260 = uStack_1b0;
    uStack_258 = uStack_1a8;
    uStack_250 = uStack_1a0;
    uStack_248 = uStack_198;
    uStack_240 = uStack_190;
  }
  if (uVar24 == 0) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112f27fd8) + 1;
  uStack_220 = uStack_2d0;
  uStack_218 = uStack_2c8;
  uStack_210 = uStack_2c0;
  uStack_208 = uStack_2b8;
  uStack_200 = uStack_2b0;
  uStack_1f8 = uStack_2a8;
  uStack_1f0 = uStack_2a0;
  uStack_1e8 = uStack_298;
  uStack_1e0 = uStack_290;
  uStack_1d8 = uStack_288;
  uStack_1d0 = uStack_280;
  uStack_1c8 = uStack_278;
  uStack_1c0 = uStack_270;
  uStack_1b8 = uStack_268;
  uStack_1b0 = uStack_260;
  uStack_1a8 = uStack_258;
  uStack_1a0 = uStack_250;
  uStack_198 = uStack_248;
  uStack_190 = uStack_240;
  if (SCARRY8(*(long *)(unaff_x20 + _DAT_112f27fd8),1)) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x102ef5634);
    (*pcVar22)();
  }
  *(long *)(unaff_x20 + _DAT_112f27fd8) = lVar1;
  if (param_1 == 0) {
    FUN_102f04d58(&uStack_2d0,auStack_368);
  }
  else {
    puVar28 = &uStack_2d0;
    FUN_102f059cc(&uStack_220,puVar28,0x112f27e88,&UNK_10db63a18);
    uStack_240 = uVar21;
    uStack_248 = uVar20;
    uStack_250 = uVar19;
    uStack_258 = uVar18;
    uStack_260 = uVar17;
    uStack_268 = uVar16;
    uStack_270 = uVar15;
    uStack_278 = uVar14;
    uStack_280 = uVar13;
    uStack_288 = uVar12;
    uStack_290 = uVar11;
    uStack_298 = uVar10;
    uStack_2a0 = uVar9;
    uStack_2a8 = uVar8;
    uStack_2b0 = uVar7;
    uStack_2b8 = uVar6;
    uStack_2c0 = uVar5;
    uStack_2c8 = uVar4;
    uStack_2d0 = uVar31;
    func_0x000107c61174();
    lVar25 = param_1;
    func_0x000107c51cc8();
    func_0x000107c61180();
    lVar26 = lVar25;
    func_0x000107c3e3b4();
    func_0x000107c61180();
    func_0x000107c61170(lVar25);
    lVar25 = lVar26;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar26);
    uVar3 = (uint)((ulong)puVar28 >> 0x20);
    uVar29 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar29 == 0) {
        func_0x00010006c090(lVar25);
        if (((ulong)puVar28 & 0xff000000000000) == 0) goto LAB_102ef5588;
      }
      else {
        func_0x00010006c090(lVar25);
        if ((long)(int)lVar25 == lVar25 >> 0x20) goto LAB_102ef5588;
      }
LAB_102ef5498:
      lVar25 = _DAT_112f27e50;
      func_0x000107c61428(unaff_x20 + _DAT_112f27e50,&uStack_2d0,0,0);
      lVar25 = unaff_x20 + lVar25;
      func_0x000107c61618();
      if (lVar25 == 0) {
        func_0x000107c61170(param_1);
      }
      else {
        uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112f27fd0);
        puVar27 = PTR_PTR_1126ae750;
        func_0x000107c61168(PTR_PTR_1126ae750);
        func_0x000107c4e01c();
        func_0x000107c61180();
        func_0x000107c4d664(uVar30);
        func_0x000107c61170(puVar27);
        puVar27 = &UNK_1105e5fa0;
        func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
        func_0x000107c61614(puVar27 + 0x10);
        func_0x000107c61174(param_1);
        func_0x000107c615f0(lVar25);
        func_0x000102f08938(&uStack_e8,lVar1);
        func_0x000107c61574(puVar27);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_1);
        func_0x000107c615ec(lVar25,2);
      }
      goto LAB_102ef55dc;
    }
    if (uVar29 == 2) {
      lVar26 = *(long *)(lVar25 + 0x10);
      lVar2 = *(long *)(lVar25 + 0x18);
      func_0x00010006c090(lVar25);
      if (lVar26 != lVar2) goto LAB_102ef5498;
    }
    else {
      func_0x00010006c090(lVar25);
    }
LAB_102ef5588:
    func_0x000107c61170(param_1);
  }
  uVar30 = *(undefined8 *)(unaff_x20 + _DAT_112f27fd0);
  puVar27 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c4d664(uVar30);
  func_0x000107c61170(puVar27);
  FUN_102ef56f0(&uStack_e8,lVar1);
LAB_102ef55dc:
  FUN_102f080f0(&uStack_220,0x112f27e88,&UNK_10db63a18);
  return;
}



/* Entry: 102ef5634; end: 102ef56ef;  */

/* WARNING: Removing unreachable block (ram,0x000102ef5698) */

void FUN_102ef5634(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = param_2;
  FUN_102ed8938();
  uVar2 = 0;
  if ((ulong)pcVar1 >> 0x3c < 0xf) {
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    uVar2 = param_1;
    func_0x0001010282b0(param_1,pcVar1);
    func_0x0001000b44c0(param_1,pcVar1);
  }
  (*param_2)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102ef56f0; end: 102efaa77;  */

/* WARNING: Possible PIC construction at 0x000102ef58cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef60a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef60e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef60f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef752c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef760c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef81b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef81ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef81fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef84b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef84c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef84ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef85e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef85f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efaa48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efaa58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef93f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa8e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa2e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102efa2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef968c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef96a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef96c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef9534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef954c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef880c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef86cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef803c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef8070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef7890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef78a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef78c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef75c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef70d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef70e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef710c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef68f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef692c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef6790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef65e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef5c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ef627c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ef5c84) */
/* WARNING: Removing unreachable block (ram,0x000102ef5dfc) */
/* WARNING: Removing unreachable block (ram,0x000102ef5dd0) */
/* WARNING: Removing unreachable block (ram,0x000102ef5f74) */
/* WARNING: Removing unreachable block (ram,0x000102ef5f44) */
/* WARNING: Removing unreachable block (ram,0x000102ef5f30) */
/* WARNING: Removing unreachable block (ram,0x000102ef65ec) */
/* WARNING: Removing unreachable block (ram,0x000102ef6794) */
/* WARNING: Removing unreachable block (ram,0x000102ef6778) */
/* WARNING: Removing unreachable block (ram,0x000102ef6930) */
/* WARNING: Removing unreachable block (ram,0x000102ef690c) */
/* WARNING: Removing unreachable block (ram,0x000102ef68f8) */
/* WARNING: Removing unreachable block (ram,0x000102ef6df4) */
/* WARNING: Removing unreachable block (ram,0x000102ef6f94) */
/* WARNING: Removing unreachable block (ram,0x000102ef7110) */
/* WARNING: Removing unreachable block (ram,0x000102ef70ec) */
/* WARNING: Removing unreachable block (ram,0x000102ef70d8) */
/* WARNING: Removing unreachable block (ram,0x000102ef75c4) */
/* WARNING: Removing unreachable block (ram,0x000102ef7750) */
/* WARNING: Removing unreachable block (ram,0x000102ef78cc) */
/* WARNING: Removing unreachable block (ram,0x000102ef78a8) */
/* WARNING: Removing unreachable block (ram,0x000102ef7894) */
/* WARNING: Removing unreachable block (ram,0x000102ef7d74) */
/* WARNING: Removing unreachable block (ram,0x000102ef7f00) */
/* WARNING: Removing unreachable block (ram,0x000102ef8074) */
/* WARNING: Removing unreachable block (ram,0x000102ef8054) */
/* WARNING: Removing unreachable block (ram,0x000102ef8040) */
/* WARNING: Removing unreachable block (ram,0x000102ef854c) */
/* WARNING: Removing unreachable block (ram,0x000102ef86d0) */
/* WARNING: Removing unreachable block (ram,0x000102ef8844) */
/* WARNING: Removing unreachable block (ram,0x000102ef8824) */
/* WARNING: Removing unreachable block (ram,0x000102ef8810) */
/* WARNING: Removing unreachable block (ram,0x000102ef8ce0) */
/* WARNING: Removing unreachable block (ram,0x000102ef8e68) */
/* WARNING: Removing unreachable block (ram,0x000102ef8fdc) */
/* WARNING: Removing unreachable block (ram,0x000102ef8fbc) */
/* WARNING: Removing unreachable block (ram,0x000102ef8fa8) */
/* WARNING: Removing unreachable block (ram,0x000102ef9550) */
/* WARNING: Removing unreachable block (ram,0x000102ef9538) */
/* WARNING: Removing unreachable block (ram,0x000102ef96c4) */
/* WARNING: Removing unreachable block (ram,0x000102ef96a4) */
/* WARNING: Removing unreachable block (ram,0x000102ef9690) */
/* WARNING: Removing unreachable block (ram,0x000102ef9c28) */
/* WARNING: Removing unreachable block (ram,0x000102ef9c10) */
/* WARNING: Removing unreachable block (ram,0x000102ef9d9c) */
/* WARNING: Removing unreachable block (ram,0x000102ef9d7c) */
/* WARNING: Removing unreachable block (ram,0x000102ef9d68) */
/* WARNING: Removing unreachable block (ram,0x000102efa300) */
/* WARNING: Removing unreachable block (ram,0x000102efa2e8) */
/* WARNING: Removing unreachable block (ram,0x000102efa474) */
/* WARNING: Removing unreachable block (ram,0x000102efa454) */
/* WARNING: Removing unreachable block (ram,0x000102efa440) */
/* WARNING: Removing unreachable block (ram,0x000102efa82c) */
/* WARNING: Removing unreachable block (ram,0x000102efa804) */
/* WARNING: Removing unreachable block (ram,0x000102efa7e4) */
/* WARNING: Removing unreachable block (ram,0x000102efa7ac) */
/* WARNING: Removing unreachable block (ram,0x000102efa728) */
/* WARNING: Removing unreachable block (ram,0x000102efa840) */
/* WARNING: Removing unreachable block (ram,0x000102efa704) */
/* WARNING: Removing unreachable block (ram,0x000102efa884) */
/* WARNING: Removing unreachable block (ram,0x000102efa1dc) */
/* WARNING: Removing unreachable block (ram,0x000102efa488) */
/* WARNING: Removing unreachable block (ram,0x000102efa84c) */
/* WARNING: Removing unreachable block (ram,0x000102efa1b8) */
/* WARNING: Removing unreachable block (ram,0x000102efa1a4) */
/* WARNING: Removing unreachable block (ram,0x000102efa8ec) */
/* WARNING: Removing unreachable block (ram,0x000102efa8dc) */
/* WARNING: Removing unreachable block (ram,0x000102ef9f4c) */
/* WARNING: Removing unreachable block (ram,0x000102efa8ac) */
/* WARNING: Removing unreachable block (ram,0x000102efa93c) */
/* WARNING: Removing unreachable block (ram,0x000102ef9b04) */
/* WARNING: Removing unreachable block (ram,0x000102efa900) */
/* WARNING: Removing unreachable block (ram,0x000102efa904) */
/* WARNING: Removing unreachable block (ram,0x000102ef9ae0) */
/* WARNING: Removing unreachable block (ram,0x000102ef9acc) */
/* WARNING: Removing unreachable block (ram,0x000102efa9a4) */
/* WARNING: Removing unreachable block (ram,0x000102efa994) */
/* WARNING: Removing unreachable block (ram,0x000102ef9874) */
/* WARNING: Removing unreachable block (ram,0x000102efa964) */
/* WARNING: Removing unreachable block (ram,0x000102efa9f4) */
/* WARNING: Removing unreachable block (ram,0x000102ef942c) */
/* WARNING: Removing unreachable block (ram,0x000102efa9b8) */
/* WARNING: Removing unreachable block (ram,0x000102efa9bc) */
/* WARNING: Removing unreachable block (ram,0x000102ef9408) */
/* WARNING: Removing unreachable block (ram,0x000102ef93f4) */
/* WARNING: Removing unreachable block (ram,0x000102efaa5c) */
/* WARNING: Removing unreachable block (ram,0x000102efaa4c) */
/* WARNING: Removing unreachable block (ram,0x000102ef9188) */
/* WARNING: Removing unreachable block (ram,0x000102efaa38) */
/* WARNING: Removing unreachable block (ram,0x000102ef8d28) */
/* WARNING: Removing unreachable block (ram,0x000102ef8c88) */
/* WARNING: Removing unreachable block (ram,0x000102efaa70) */
/* WARNING: Removing unreachable block (ram,0x000102ef8cf0) */
/* WARNING: Removing unreachable block (ram,0x000102ef8c64) */
/* WARNING: Removing unreachable block (ram,0x000102ef8c50) */
/* WARNING: Removing unreachable block (ram,0x000102ef8d90) */
/* WARNING: Removing unreachable block (ram,0x000102ef8d80) */
/* WARNING: Removing unreachable block (ram,0x000102ef8984) */
/* WARNING: Removing unreachable block (ram,0x000102ef8d6c) */
/* WARNING: Removing unreachable block (ram,0x000102ef85fc) */
/* WARNING: Removing unreachable block (ram,0x000102ef85ec) */
/* WARNING: Removing unreachable block (ram,0x000102ef8594) */
/* WARNING: Removing unreachable block (ram,0x000102ef84f0) */
/* WARNING: Removing unreachable block (ram,0x000102ef8504) */
/* WARNING: Removing unreachable block (ram,0x000102ef855c) */
/* WARNING: Removing unreachable block (ram,0x000102ef84cc) */
/* WARNING: Removing unreachable block (ram,0x000102ef84b8) */
/* WARNING: Removing unreachable block (ram,0x000102ef8200) */
/* WARNING: Removing unreachable block (ram,0x000102ef81f0) */
/* WARNING: Removing unreachable block (ram,0x000102ef81b4) */
/* WARNING: Removing unreachable block (ram,0x000102ef7dc0) */
/* WARNING: Removing unreachable block (ram,0x000102ef7d18) */
/* WARNING: Removing unreachable block (ram,0x000102ef7d2c) */
/* WARNING: Removing unreachable block (ram,0x000102ef7d84) */
/* WARNING: Removing unreachable block (ram,0x000102ef7cf4) */
/* WARNING: Removing unreachable block (ram,0x000102ef7ce0) */
/* WARNING: Removing unreachable block (ram,0x000102ef7e2c) */
/* WARNING: Removing unreachable block (ram,0x000102ef7e1c) */
/* WARNING: Removing unreachable block (ram,0x000102ef7a14) */
/* WARNING: Removing unreachable block (ram,0x000102ef7e08) */
/* WARNING: Removing unreachable block (ram,0x000102ef7610) */
/* WARNING: Removing unreachable block (ram,0x000102ef7568) */
/* WARNING: Removing unreachable block (ram,0x000102ef757c) */
/* WARNING: Removing unreachable block (ram,0x000102ef75d4) */
/* WARNING: Removing unreachable block (ram,0x000102ef7544) */
/* WARNING: Removing unreachable block (ram,0x000102ef7530) */
/* WARNING: Removing unreachable block (ram,0x000102ef767c) */
/* WARNING: Removing unreachable block (ram,0x000102ef766c) */
/* WARNING: Removing unreachable block (ram,0x000102ef7258) */
/* WARNING: Removing unreachable block (ram,0x000102ef7658) */
/* WARNING: Removing unreachable block (ram,0x000102ef6e3c) */
/* WARNING: Removing unreachable block (ram,0x000102ef6d98) */
/* WARNING: Removing unreachable block (ram,0x000102ef6dac) */
/* WARNING: Removing unreachable block (ram,0x000102ef6e04) */
/* WARNING: Removing unreachable block (ram,0x000102ef6d74) */
/* WARNING: Removing unreachable block (ram,0x000102ef6d60) */
/* WARNING: Removing unreachable block (ram,0x000102ef6ea4) */
/* WARNING: Removing unreachable block (ram,0x000102ef6ebc) */
/* WARNING: Removing unreachable block (ram,0x000102ef6e94) */
/* WARNING: Removing unreachable block (ram,0x000102ef6a74) */
/* WARNING: Removing unreachable block (ram,0x000102ef6e80) */
/* WARNING: Removing unreachable block (ram,0x000102ef6694) */
/* WARNING: Removing unreachable block (ram,0x000102ef667c) */
/* WARNING: Removing unreachable block (ram,0x000102ef6628) */
/* WARNING: Removing unreachable block (ram,0x000102ef6564) */
/* WARNING: Removing unreachable block (ram,0x000102ef65fc) */
/* WARNING: Removing unreachable block (ram,0x000102ef6540) */
/* WARNING: Removing unreachable block (ram,0x000102ef652c) */
/* WARNING: Removing unreachable block (ram,0x000102ef60fc) */
/* WARNING: Removing unreachable block (ram,0x000102ef6100) */
/* WARNING: Removing unreachable block (ram,0x000102ef610c) */
/* WARNING: Removing unreachable block (ram,0x000102ef60e4) */
/* WARNING: Removing unreachable block (ram,0x000102ef60a4) */
/* WARNING: Removing unreachable block (ram,0x000102ef5d04) */
/* WARNING: Removing unreachable block (ram,0x000102ef5cf4) */
/* WARNING: Removing unreachable block (ram,0x000102ef5c08) */
/* WARNING: Removing unreachable block (ram,0x000102ef5c94) */
/* WARNING: Removing unreachable block (ram,0x000102ef5bd4) */
/* WARNING: Removing unreachable block (ram,0x000102ef5bc0) */
/* WARNING: Removing unreachable block (ram,0x000102ef629c) */
/* WARNING: Removing unreachable block (ram,0x000102ef62a0) */
/* WARNING: Removing unreachable block (ram,0x000102ef58d0) */
/* WARNING: Removing unreachable block (ram,0x000102ef6280) */
/* WARNING: Removing unreachable block (ram,0x000102ef6294) */
/* WARNING: Removing unreachable block (ram,0x000102ef6040) */
/* WARNING: Removing unreachable block (ram,0x000102ef6a18) */
/* WARNING: Removing unreachable block (ram,0x000102ef71f4) */
/* WARNING: Removing unreachable block (ram,0x000102ef79b0) */
/* WARNING: Removing unreachable block (ram,0x000102ef8154) */
/* WARNING: Removing unreachable block (ram,0x000102ef8924) */
/* WARNING: Removing unreachable block (ram,0x000102ef90c0) */
/* WARNING: Removing unreachable block (ram,0x000102ef5994) */
/* WARNING: Removing unreachable block (ram,0x000102ef62ec) */
/* WARNING: Removing unreachable block (ram,0x000102ef6b48) */
/* WARNING: Removing unreachable block (ram,0x000102ef7314) */
/* WARNING: Removing unreachable block (ram,0x000102ef7ad0) */
/* WARNING: Removing unreachable block (ram,0x000102ef82a4) */
/* WARNING: Removing unreachable block (ram,0x000102ef8a3c) */
/* WARNING: Removing unreachable block (ram,0x000102ef585c) */
/* WARNING: Removing unreachable block (ram,0x000102efa698) */
/* WARNING: Removing unreachable block (ram,0x000102ef9f90) */
/* WARNING: Removing unreachable block (ram,0x000102ef98b8) */
/* WARNING: Removing unreachable block (ram,0x000102ef91e4) */
/* WARNING: Removing unreachable block (ram,0x000102efa5e8) */
/* WARNING: Removing unreachable block (ram,0x000102ef9e84) */
/* WARNING: Removing unreachable block (ram,0x000102ef97ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ef56f0(ulong *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_510;
  long lStack_500;
  long lStack_4c0;
  long lStack_4a0;
  long lStack_470;
  long lStack_450;
  long lStack_420;
  long lStack_400;
  long lStack_3d0;
  long lStack_3b0;
  long lStack_380;
  long lStack_2a8;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [16];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  uVar19 = *param_1;
  puVar2 = &UNK_1105e6d60;
  func_0x000107c613fc(&UNK_1105e6d60,0x18,7);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar14 = (undefined8 *)(puVar2 + 0x10);
  *puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = _DAT_112f27fd8;
  if (param_2 != *(long *)(param_3 + _DAT_112f27fd8)) goto code_r0x000107c61574;
  uVar20 = uVar19 >> 0x3e;
  if (uVar20 == 0) {
    uVar3 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar19 & 0xffffffffffffff8;
    if ((uVar19 & 0x8000000000000000) != 0) {
      uVar3 = uVar19;
    }
    func_0x000107c60480();
  }
  if ((long)uVar3 < 1) {
    func_0x0001000c10c0("processBundle(at:)");
    func_0x000107c61180();
    puVar9 = &UNK_1105e5fa0;
    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,param_3);
    puVar17 = &UNK_1105e71e8;
    func_0x000107c613fc(&UNK_1105e71e8,0xc0,7);
    *(undefined **)(puVar17 + 0x10) = puVar9;
    *(long *)(puVar17 + 0x18) = param_2;
    uVar19 = param_1[0xc];
    uVar3 = param_1[0xf];
    uVar20 = param_1[0xe];
    *(ulong *)(puVar17 + 0x88) = param_1[0xd];
    *(ulong *)(puVar17 + 0x80) = uVar19;
    *(ulong *)(puVar17 + 0x98) = uVar3;
    *(ulong *)(puVar17 + 0x90) = uVar20;
    uVar19 = param_1[0x10];
    *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
    *(ulong *)(puVar17 + 0xa0) = uVar19;
    uVar19 = param_1[0x12];
    uVar20 = param_1[4];
    uVar13 = param_1[7];
    uVar3 = param_1[6];
    *(ulong *)(puVar17 + 0x48) = param_1[5];
    *(ulong *)(puVar17 + 0x40) = uVar20;
    *(ulong *)(puVar17 + 0x58) = uVar13;
    *(ulong *)(puVar17 + 0x50) = uVar3;
    uVar20 = param_1[8];
    uVar13 = param_1[0xb];
    uVar3 = param_1[10];
    *(ulong *)(puVar17 + 0x68) = param_1[9];
    *(ulong *)(puVar17 + 0x60) = uVar20;
    *(ulong *)(puVar17 + 0x78) = uVar13;
    *(ulong *)(puVar17 + 0x70) = uVar3;
    uVar20 = *param_1;
    uVar13 = param_1[3];
    uVar3 = param_1[2];
    *(ulong *)(puVar17 + 0x28) = param_1[1];
    *(ulong *)(puVar17 + 0x20) = uVar20;
    *(ulong *)(puVar17 + 0x38) = uVar13;
    *(ulong *)(puVar17 + 0x30) = uVar3;
    *(ulong *)(puVar17 + 0xb0) = uVar19;
    *(undefined **)(puVar17 + 0xb8) = puVar2;
    uStack_78 = 0x102f09b4c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105e7200;
    puStack_70 = puVar17;
    func_0x000107c60bc4(&puStack_98);
    FUN_102f04d58(param_1,&puStack_130);
    func_0x000107c6157c(puVar2);
    goto code_r0x000107c61574;
  }
  uVar3 = uVar19 & 0xc000000000000001;
  if (uVar3 == 0) {
    if (*(long *)((uVar19 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef6324);
      (*pcVar1)();
    }
    lVar15 = *(long *)(uVar19 + 0x20);
    func_0x000107c615f0(lVar15);
  }
  else {
    lVar15 = 0;
    FUN_10274d138(0,uVar19);
  }
  ppuVar11 = &puStack_130;
  FUN_102f04d58(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c615f0(lVar15);
  func_0x000107c61434(uVar19);
  lVar4 = param_3;
  func_0x000107c61174();
  lVar21 = lVar15;
  func_0x000107c4e090();
  func_0x000107c61180();
  lVar5 = lVar21;
  func_0x000107c3eea8();
  func_0x000107c61180();
  func_0x000107c61170(lVar21);
  lVar21 = lVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar5);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(lVar21,ppuVar11);
  lVar5 = lVar21;
  func_0x0001010282b0(lVar21,ppuVar11);
  if (lVar5 == 0) {
    func_0x00010006c090(lVar21,ppuVar11);
    func_0x000102efbac0(puVar2,lVar15,param_2,lVar4,uVar19,param_1,0);
    func_0x00010006c090(lVar21,ppuVar11);
    func_0x000107c6142c(uVar19);
    func_0x000107c61170(lVar4);
    func_0x000107c615e8(lVar15);
    goto code_r0x000107c61574;
  }
  func_0x000107c61614(auStack_140,lVar4);
  ppuVar11 = &puStack_130;
  FUN_102f04d58(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c615f0(lVar15);
  func_0x000107c61434(uVar19);
  func_0x000107c61174();
  FUN_102ed8938();
  if ((ulong)ppuVar11 >> 0x3c < 0xf) {
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar21 = lVar5;
    func_0x0001010282b0(lVar5,ppuVar11);
    func_0x0001000b44c0(lVar5,ppuVar11);
  }
  else {
    lVar21 = 0;
  }
  puVar12 = auStack_158;
  func_0x000107c61428(auStack_140,puVar12,0,0);
  puVar6 = auStack_140;
  func_0x000107c61618();
  if (puVar6 != (undefined1 *)0x0) {
    if (lVar21 != 0) {
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar21 != 0) {
        lVar5 = lVar21;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar21);
        puVar17 = &UNK_1105e7238;
        func_0x000107c613fc(&UNK_1105e7238,0xe8,7);
        uVar13 = param_1[0xc];
        uVar22 = param_1[0xf];
        uVar8 = param_1[0xe];
        *(ulong *)(puVar17 + 0xa0) = param_1[0xd];
        *(ulong *)(puVar17 + 0x98) = uVar13;
        *(ulong *)(puVar17 + 0xb0) = uVar22;
        *(ulong *)(puVar17 + 0xa8) = uVar8;
        uVar13 = param_1[0x10];
        *(ulong *)(puVar17 + 0xc0) = param_1[0x11];
        *(ulong *)(puVar17 + 0xb8) = uVar13;
        uVar13 = param_1[4];
        uVar22 = param_1[7];
        uVar8 = param_1[6];
        *(ulong *)(puVar17 + 0x60) = param_1[5];
        *(ulong *)(puVar17 + 0x58) = uVar13;
        *(ulong *)(puVar17 + 0x70) = uVar22;
        *(ulong *)(puVar17 + 0x68) = uVar8;
        uVar13 = param_1[8];
        uVar22 = param_1[0xb];
        uVar8 = param_1[10];
        *(ulong *)(puVar17 + 0x80) = param_1[9];
        *(ulong *)(puVar17 + 0x78) = uVar13;
        *(ulong *)(puVar17 + 0x90) = uVar22;
        *(ulong *)(puVar17 + 0x88) = uVar8;
        uVar13 = *param_1;
        uVar22 = param_1[3];
        uVar8 = param_1[2];
        *(ulong *)(puVar17 + 0x40) = param_1[1];
        *(ulong *)(puVar17 + 0x38) = uVar13;
        *(undefined **)(puVar17 + 0x10) = puVar2;
        *(long *)(puVar17 + 0x18) = lVar15;
        *(long *)(puVar17 + 0x20) = param_2;
        *(long *)(puVar17 + 0x28) = lVar4;
        *(ulong *)(puVar17 + 0x30) = uVar19;
        uVar13 = param_1[0x12];
        *(ulong *)(puVar17 + 0x50) = uVar22;
        *(ulong *)(puVar17 + 0x48) = uVar8;
        *(ulong *)(puVar17 + 200) = uVar13;
        *(code **)(puVar17 + 0xd0) = FUN_102ef5634;
        *(undefined8 *)(puVar17 + 0xd8) = 0;
        *(undefined8 *)(puVar17 + 0xe0) = 0;
        puVar16 = *(undefined **)(puVar6 + _DAT_112f27e60);
        FUN_102f04d58(param_1,&puStack_130);
        func_0x000107c6157c(puVar2);
        func_0x000107c615f0(lVar15);
        func_0x000107c61434(uVar19);
        func_0x000107c61174();
        func_0x000107c5dbd4();
        func_0x000107c61180();
        puVar7 = puVar16;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar7 != (undefined *)0x0) {
          puVar2 = &UNK_1105e79e0;
          func_0x000107c613fc(&UNK_1105e79e0,0x30,7);
          *(undefined8 *)(puVar2 + 0x10) = 0x102f09a04;
          *(undefined **)(puVar2 + 0x18) = puVar17;
          *(long *)(puVar2 + 0x20) = lVar5;
          *(undefined1 **)(puVar2 + 0x28) = puVar12;
          uStack_110 = 0x102f099b4;
          puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_128 = 0x42000000;
          puStack_120 = &UNK_100f1c768;
          puStack_118 = &UNK_1105e79f8;
          puStack_108 = puVar2;
          func_0x000107c60bc4(&puStack_130);
          func_0x000107c6157c(puVar17);
          func_0x00010006c00c(lVar5,puVar12);
          goto code_r0x000107c61574;
        }
        uVar13 = (ulong)puVar9 >> 0x3e;
        if (uVar13 == 0) {
LAB_102ef5d1c:
          func_0x00010273ca1c();
          func_0x000107c613fc();
          *(undefined8 *)(puVar16 + 0x18) = 3;
          *(undefined8 *)(puVar16 + 0x10) = 1;
          *(long *)(puVar16 + 0x20) = lVar15;
          func_0x000107c615f0();
          puVar10 = puVar16;
        }
        else {
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c60480();
          if (puVar9 == (undefined *)0x0) {
            puVar16 = (undefined *)0x0;
            goto LAB_102ef5d1c;
          }
        }
        func_0x000107c61428(puVar14,&puStack_130,0x21,0);
        FUN_102f0240c(puVar10);
        func_0x000107c614a8(&puStack_130);
        if (param_2 != *(long *)(param_3 + lVar18)) goto code_r0x000107c61574;
        if (uVar20 == 0) {
          uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar8 = uVar19 & 0xffffffffffffff8;
          if ((uVar19 & 0x8000000000000000) != 0) {
            uVar8 = uVar19;
          }
          func_0x000107c60480();
        }
        if ((long)uVar8 < 2) {
          func_0x0001000c10c0("processBundle(at:)");
          func_0x000107c61180();
          puVar9 = &UNK_1105e5fa0;
          func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
          func_0x000107c61614(puVar9 + 0x10,lVar4);
          puVar17 = &UNK_1105e7260;
          func_0x000107c613fc(&UNK_1105e7260,0xc0,7);
          *(undefined **)(puVar17 + 0x10) = puVar9;
          *(long *)(puVar17 + 0x18) = param_2;
          uVar19 = param_1[0xc];
          uVar3 = param_1[0xf];
          uVar20 = param_1[0xe];
          *(ulong *)(puVar17 + 0x88) = param_1[0xd];
          *(ulong *)(puVar17 + 0x80) = uVar19;
          *(ulong *)(puVar17 + 0x98) = uVar3;
          *(ulong *)(puVar17 + 0x90) = uVar20;
          uVar19 = param_1[0x10];
          *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
          *(ulong *)(puVar17 + 0xa0) = uVar19;
          uVar19 = param_1[0x12];
          uVar20 = param_1[4];
          uVar13 = param_1[7];
          uVar3 = param_1[6];
          *(ulong *)(puVar17 + 0x48) = param_1[5];
          *(ulong *)(puVar17 + 0x40) = uVar20;
          *(ulong *)(puVar17 + 0x58) = uVar13;
          *(ulong *)(puVar17 + 0x50) = uVar3;
          uVar20 = param_1[8];
          uVar13 = param_1[0xb];
          uVar3 = param_1[10];
          *(ulong *)(puVar17 + 0x68) = param_1[9];
          *(ulong *)(puVar17 + 0x60) = uVar20;
          *(ulong *)(puVar17 + 0x78) = uVar13;
          *(ulong *)(puVar17 + 0x70) = uVar3;
          uVar20 = *param_1;
          uVar13 = param_1[3];
          uVar3 = param_1[2];
          *(ulong *)(puVar17 + 0x28) = param_1[1];
          *(ulong *)(puVar17 + 0x20) = uVar20;
          *(ulong *)(puVar17 + 0x38) = uVar13;
          *(ulong *)(puVar17 + 0x30) = uVar3;
          *(ulong *)(puVar17 + 0xb0) = uVar19;
          *(undefined **)(puVar17 + 0xb8) = puVar2;
          uStack_78 = 0x102f09b50;
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0x42000000;
          puStack_88 = &UNK_1000f6b44;
          puStack_80 = &UNK_1105e7278;
          puStack_70 = puVar17;
          func_0x000107c60bc4(&puStack_98);
          FUN_102f04d58(param_1,&puStack_130);
          func_0x000107c6157c(puVar2);
          goto code_r0x000107c61574;
        }
        if (uVar3 == 0) {
          if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef6edc);
            (*pcVar1)();
          }
          lVar15 = *(long *)(uVar19 + 0x28);
          func_0x000107c615f0(lVar15);
        }
        else {
          lVar15 = 1;
          FUN_10274d138(1,uVar19);
        }
        ppuVar11 = &puStack_130;
        FUN_102f04d58(param_1);
        func_0x000107c6157c(puVar2);
        func_0x000107c61434(uVar19);
        func_0x000107c61174();
        lVar21 = lVar15;
        func_0x000107c615f0();
        func_0x000107c4e090();
        func_0x000107c61180();
        lVar5 = lVar21;
        func_0x000107c3eea8();
        func_0x000107c61180();
        func_0x000107c61170(lVar21);
        lVar21 = lVar5;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar5);
        func_0x000107c610f8(PTR_PTR_1126b25c0);
        func_0x00010006c00c(lVar21,ppuVar11);
        lVar5 = lVar21;
        func_0x0001010282b0(lVar21,ppuVar11);
        if (lVar5 == 0) {
          func_0x00010006c090(lVar21,ppuVar11);
          func_0x000102f00d0c(puVar2,lVar15,param_2,lVar4,uVar19,param_1,FUN_102ef5634,0);
          goto code_r0x000107c61574;
        }
        func_0x000107c61614(auStack_160,lVar4);
        ppuVar11 = &puStack_130;
        FUN_102f04d58(param_1);
        func_0x000107c6157c(puVar2);
        func_0x000107c61434(uVar19);
        func_0x000107c61174();
        func_0x000107c615f0(lVar15);
        FUN_102ed8938();
        if ((ulong)ppuVar11 >> 0x3c < 0xf) {
          func_0x000107c610f8(PTR_PTR_1126b25c0);
          lVar21 = lVar5;
          func_0x0001010282b0(lVar5,ppuVar11);
          func_0x0001000b44c0(lVar5,ppuVar11);
        }
        else {
          lVar21 = 0;
        }
        puVar12 = auStack_178;
        func_0x000107c61428(auStack_160,puVar12,0,0);
        puVar6 = auStack_160;
        func_0x000107c61618();
        if (puVar6 != (undefined1 *)0x0) {
          if (lVar21 != 0) {
            func_0x000107c41214();
            func_0x000107c61180();
            if (lVar21 != 0) {
              lVar5 = lVar21;
              func_0x000107c5ee30();
              func_0x000107c61170(lVar21);
              puVar9 = &UNK_1105e72b0;
              func_0x000107c613fc(&UNK_1105e72b0,0xe8,7);
              uVar8 = param_1[0xc];
              uVar23 = param_1[0xf];
              uVar22 = param_1[0xe];
              *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
              *(ulong *)(puVar9 + 0x98) = uVar8;
              *(ulong *)(puVar9 + 0xb0) = uVar23;
              *(ulong *)(puVar9 + 0xa8) = uVar22;
              uVar8 = param_1[0x10];
              *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
              *(ulong *)(puVar9 + 0xb8) = uVar8;
              uVar8 = param_1[4];
              uVar23 = param_1[7];
              uVar22 = param_1[6];
              *(ulong *)(puVar9 + 0x60) = param_1[5];
              *(ulong *)(puVar9 + 0x58) = uVar8;
              *(ulong *)(puVar9 + 0x70) = uVar23;
              *(ulong *)(puVar9 + 0x68) = uVar22;
              uVar8 = param_1[8];
              uVar23 = param_1[0xb];
              uVar22 = param_1[10];
              *(ulong *)(puVar9 + 0x80) = param_1[9];
              *(ulong *)(puVar9 + 0x78) = uVar8;
              *(ulong *)(puVar9 + 0x90) = uVar23;
              *(ulong *)(puVar9 + 0x88) = uVar22;
              uVar8 = *param_1;
              uVar23 = param_1[3];
              uVar22 = param_1[2];
              *(ulong *)(puVar9 + 0x40) = param_1[1];
              *(ulong *)(puVar9 + 0x38) = uVar8;
              *(undefined **)(puVar9 + 0x10) = puVar2;
              *(long *)(puVar9 + 0x18) = lVar15;
              *(long *)(puVar9 + 0x20) = param_2;
              *(long *)(puVar9 + 0x28) = lVar4;
              *(ulong *)(puVar9 + 0x30) = uVar19;
              uVar8 = param_1[0x12];
              *(ulong *)(puVar9 + 0x50) = uVar23;
              *(ulong *)(puVar9 + 0x48) = uVar22;
              *(ulong *)(puVar9 + 200) = uVar8;
              *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
              *(undefined8 *)(puVar9 + 0xd8) = 0;
              *(undefined8 *)(puVar9 + 0xe0) = 1;
              puVar17 = *(undefined **)(puVar6 + _DAT_112f27e60);
              FUN_102f04d58(param_1,&puStack_130);
              func_0x000107c6157c(puVar2);
              func_0x000107c61434(uVar19);
              func_0x000107c61174();
              func_0x000107c615f0(lVar15);
              func_0x000107c5dbd4();
              func_0x000107c61180();
              puVar10 = puVar17;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170();
              puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (puVar10 != (undefined *)0x0) {
                puVar2 = &UNK_1105e7990;
                func_0x000107c613fc(&UNK_1105e7990,0x30,7);
                *(undefined8 *)(puVar2 + 0x10) = 0x102f09a08;
                *(undefined **)(puVar2 + 0x18) = puVar9;
                *(long *)(puVar2 + 0x20) = lVar5;
                *(undefined1 **)(puVar2 + 0x28) = puVar12;
                uStack_110 = 0x102f099b0;
                puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_128 = 0x42000000;
                puStack_120 = &UNK_100f1c768;
                puStack_118 = &UNK_1105e79a8;
                puStack_108 = puVar2;
                func_0x000107c60bc4(&puStack_130);
                func_0x000107c6157c(puVar9);
                func_0x00010006c00c(lVar5,puVar12);
                goto code_r0x000107c61574;
              }
              if (uVar13 == 0) {
LAB_102ef66d8:
                func_0x00010273ca1c();
                func_0x000107c613fc();
                *(undefined8 *)(puVar17 + 0x18) = 3;
                *(undefined8 *)(puVar17 + 0x10) = 1;
                *(long *)(puVar17 + 0x20) = lVar15;
                func_0x000107c615f0();
                puVar16 = puVar17;
              }
              else {
                puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x000107c60480();
                puVar17 = (undefined *)0x0;
                if (puVar9 == (undefined *)0x0) goto LAB_102ef66d8;
              }
              func_0x000107c61428(puVar14,&puStack_130,0x21,0);
              FUN_102f0240c(puVar16);
              func_0x000107c614a8(&puStack_130);
              if (param_2 != *(long *)(param_3 + lVar18)) goto code_r0x000107c61574;
              if (uVar20 == 0) {
                uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
              }
              else {
                uVar8 = uVar19 & 0xffffffffffffff8;
                if ((uVar19 & 0x8000000000000000) != 0) {
                  uVar8 = uVar19;
                }
                func_0x000107c60480();
              }
              if ((long)uVar8 < 3) {
                func_0x0001000c10c0("processBundle(at:)");
                func_0x000107c61180();
                puVar9 = &UNK_1105e5fa0;
                func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                func_0x000107c61614(puVar9 + 0x10,lVar4);
                puVar17 = &UNK_1105e72d8;
                func_0x000107c613fc(&UNK_1105e72d8,0xc0,7);
                *(undefined **)(puVar17 + 0x10) = puVar9;
                *(long *)(puVar17 + 0x18) = param_2;
                uVar19 = param_1[0xc];
                uVar3 = param_1[0xf];
                uVar20 = param_1[0xe];
                *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                *(ulong *)(puVar17 + 0x80) = uVar19;
                *(ulong *)(puVar17 + 0x98) = uVar3;
                *(ulong *)(puVar17 + 0x90) = uVar20;
                uVar19 = param_1[0x10];
                *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                *(ulong *)(puVar17 + 0xa0) = uVar19;
                uVar19 = param_1[0x12];
                uVar20 = param_1[4];
                uVar13 = param_1[7];
                uVar3 = param_1[6];
                *(ulong *)(puVar17 + 0x48) = param_1[5];
                *(ulong *)(puVar17 + 0x40) = uVar20;
                *(ulong *)(puVar17 + 0x58) = uVar13;
                *(ulong *)(puVar17 + 0x50) = uVar3;
                uVar20 = param_1[8];
                uVar13 = param_1[0xb];
                uVar3 = param_1[10];
                *(ulong *)(puVar17 + 0x68) = param_1[9];
                *(ulong *)(puVar17 + 0x60) = uVar20;
                *(ulong *)(puVar17 + 0x78) = uVar13;
                *(ulong *)(puVar17 + 0x70) = uVar3;
                uVar20 = *param_1;
                uVar13 = param_1[3];
                uVar3 = param_1[2];
                *(ulong *)(puVar17 + 0x28) = param_1[1];
                *(ulong *)(puVar17 + 0x20) = uVar20;
                *(ulong *)(puVar17 + 0x38) = uVar13;
                *(ulong *)(puVar17 + 0x30) = uVar3;
                *(ulong *)(puVar17 + 0xb0) = uVar19;
                *(undefined **)(puVar17 + 0xb8) = puVar2;
                uStack_78 = 0x102f09b54;
                puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_90 = 0x42000000;
                puStack_88 = &UNK_1000f6b44;
                puStack_80 = &UNK_1105e72f0;
                puStack_70 = puVar17;
                func_0x000107c60bc4(&puStack_98);
                FUN_102f04d58(param_1,&puStack_130);
                func_0x000107c6157c(puVar2);
                goto code_r0x000107c61574;
              }
              if (uVar3 == 0) {
                if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) < 3) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef7698);
                  (*pcVar1)();
                }
                lVar15 = *(long *)(uVar19 + 0x30);
                func_0x000107c615f0(lVar15);
              }
              else {
                lVar15 = 2;
                FUN_10274d138(2,uVar19);
              }
              ppuVar11 = &puStack_130;
              FUN_102f04d58(param_1,ppuVar11);
              func_0x000107c6157c(puVar2);
              func_0x000107c61434(uVar19);
              func_0x000107c61174();
              lVar21 = lVar15;
              func_0x000107c615f0();
              func_0x000107c4e090();
              func_0x000107c61180();
              lVar5 = lVar21;
              func_0x000107c3eea8();
              func_0x000107c61180();
              func_0x000107c61170(lVar21);
              lVar21 = lVar5;
              func_0x000107c5ee30();
              func_0x000107c61170(lVar5);
              func_0x000107c610f8(PTR_PTR_1126b25c0);
              func_0x00010006c00c(lVar21,ppuVar11);
              lVar5 = lVar21;
              func_0x0001010282b0(lVar21,ppuVar11);
              if (lVar5 == 0) {
                func_0x00010006c090(lVar21,ppuVar11);
                func_0x000102f00d0c(puVar2,lVar15,param_2,lVar4,uVar19,param_1,FUN_102ef5634,0);
                goto code_r0x000107c61574;
              }
              func_0x000107c61614(auStack_180,lVar4);
              ppuVar11 = &puStack_130;
              FUN_102f04d58(param_1);
              func_0x000107c6157c(puVar2);
              func_0x000107c61434(uVar19);
              func_0x000107c61174();
              func_0x000107c615f0(lVar15);
              FUN_102ed8938();
              if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                func_0x000107c610f8(PTR_PTR_1126b25c0);
                lStack_380 = lVar5;
                func_0x0001010282b0(lVar5,ppuVar11);
                func_0x0001000b44c0(lVar5,ppuVar11);
              }
              else {
                lStack_380 = 0;
              }
              puVar12 = auStack_198;
              func_0x000107c61428(auStack_180,puVar12,0,0);
              puVar6 = auStack_180;
              func_0x000107c61618();
              if (puVar6 != (undefined1 *)0x0) {
                if (lStack_380 != 0) {
                  func_0x000107c41214();
                  func_0x000107c61180();
                  if (lStack_380 != 0) {
                    lVar21 = lStack_380;
                    func_0x000107c5ee30();
                    func_0x000107c61170(lStack_380);
                    puVar9 = &UNK_1105e7328;
                    func_0x000107c613fc(&UNK_1105e7328,0xe8,7);
                    uVar8 = param_1[0xc];
                    uVar23 = param_1[0xf];
                    uVar22 = param_1[0xe];
                    *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                    *(ulong *)(puVar9 + 0x98) = uVar8;
                    *(ulong *)(puVar9 + 0xb0) = uVar23;
                    *(ulong *)(puVar9 + 0xa8) = uVar22;
                    uVar8 = param_1[0x10];
                    *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                    *(ulong *)(puVar9 + 0xb8) = uVar8;
                    uVar8 = param_1[4];
                    uVar23 = param_1[7];
                    uVar22 = param_1[6];
                    *(ulong *)(puVar9 + 0x60) = param_1[5];
                    *(ulong *)(puVar9 + 0x58) = uVar8;
                    *(ulong *)(puVar9 + 0x70) = uVar23;
                    *(ulong *)(puVar9 + 0x68) = uVar22;
                    uVar8 = param_1[8];
                    uVar23 = param_1[0xb];
                    uVar22 = param_1[10];
                    *(ulong *)(puVar9 + 0x80) = param_1[9];
                    *(ulong *)(puVar9 + 0x78) = uVar8;
                    *(ulong *)(puVar9 + 0x90) = uVar23;
                    *(ulong *)(puVar9 + 0x88) = uVar22;
                    uVar8 = *param_1;
                    uVar23 = param_1[3];
                    uVar22 = param_1[2];
                    *(ulong *)(puVar9 + 0x40) = param_1[1];
                    *(ulong *)(puVar9 + 0x38) = uVar8;
                    *(undefined **)(puVar9 + 0x10) = puVar2;
                    *(long *)(puVar9 + 0x18) = lVar15;
                    *(long *)(puVar9 + 0x20) = param_2;
                    *(long *)(puVar9 + 0x28) = lVar4;
                    *(ulong *)(puVar9 + 0x30) = uVar19;
                    uVar8 = param_1[0x12];
                    *(ulong *)(puVar9 + 0x50) = uVar23;
                    *(ulong *)(puVar9 + 0x48) = uVar22;
                    *(ulong *)(puVar9 + 200) = uVar8;
                    *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                    *(undefined8 *)(puVar9 + 0xd8) = 0;
                    *(undefined8 *)(puVar9 + 0xe0) = 2;
                    puVar17 = *(undefined **)(puVar6 + _DAT_112f27e60);
                    FUN_102f04d58(param_1,&puStack_130);
                    func_0x000107c6157c(puVar2);
                    func_0x000107c61434(uVar19);
                    func_0x000107c61174();
                    func_0x000107c615f0(lVar15);
                    func_0x000107c5dbd4();
                    func_0x000107c61180();
                    puVar10 = puVar17;
                    func_0x000107c5c734();
                    func_0x000107c61180();
                    func_0x000107c61170();
                    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    if (puVar10 != (undefined *)0x0) {
                      puVar2 = &UNK_1105e7940;
                      func_0x000107c613fc(&UNK_1105e7940,0x30,7);
                      *(undefined8 *)(puVar2 + 0x10) = 0x102f09a0c;
                      *(undefined **)(puVar2 + 0x18) = puVar9;
                      *(long *)(puVar2 + 0x20) = lVar21;
                      *(undefined1 **)(puVar2 + 0x28) = puVar12;
                      uStack_110 = 0x102f099ac;
                      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_128 = 0x42000000;
                      puStack_120 = &UNK_100f1c768;
                      puStack_118 = &UNK_1105e7958;
                      puStack_108 = puVar2;
                      func_0x000107c60bc4(&puStack_130);
                      func_0x000107c6157c(puVar9);
                      func_0x00010006c00c(lVar21,puVar12);
                      goto code_r0x000107c61574;
                    }
                    if (uVar13 == 0) {
LAB_102ef6ef4:
                      func_0x00010273ca1c();
                      func_0x000107c613fc();
                      *(undefined8 *)(puVar17 + 0x18) = 3;
                      *(undefined8 *)(puVar17 + 0x10) = 1;
                      *(long *)(puVar17 + 0x20) = lVar15;
                      func_0x000107c615f0(lVar15);
                      puVar16 = puVar17;
                    }
                    else {
                      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                      func_0x000107c60480();
                      puVar17 = (undefined *)0x0;
                      if (puVar9 == (undefined *)0x0) goto LAB_102ef6ef4;
                    }
                    func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                    FUN_102f0240c(puVar16);
                    func_0x000107c614a8(&puStack_130);
                    if (param_2 != *(long *)(param_3 + lVar18)) goto code_r0x000107c61574;
                    if (uVar20 == 0) {
                      uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      uVar8 = uVar19 & 0xffffffffffffff8;
                      if ((uVar19 & 0x8000000000000000) != 0) {
                        uVar8 = uVar19;
                      }
                      func_0x000107c60480();
                    }
                    if ((long)uVar8 < 4) {
                      func_0x0001000c10c0("processBundle(at:)");
                      func_0x000107c61180();
                      puVar9 = &UNK_1105e5fa0;
                      func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                      func_0x000107c61614(puVar9 + 0x10,lVar4);
                      puVar17 = &UNK_1105e7350;
                      func_0x000107c613fc(&UNK_1105e7350,0xc0,7);
                      *(undefined **)(puVar17 + 0x10) = puVar9;
                      *(long *)(puVar17 + 0x18) = param_2;
                      uVar19 = param_1[0xc];
                      uVar3 = param_1[0xf];
                      uVar20 = param_1[0xe];
                      *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                      *(ulong *)(puVar17 + 0x80) = uVar19;
                      *(ulong *)(puVar17 + 0x98) = uVar3;
                      *(ulong *)(puVar17 + 0x90) = uVar20;
                      uVar19 = param_1[0x10];
                      *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                      *(ulong *)(puVar17 + 0xa0) = uVar19;
                      uVar19 = param_1[0x12];
                      uVar20 = param_1[4];
                      uVar13 = param_1[7];
                      uVar3 = param_1[6];
                      *(ulong *)(puVar17 + 0x48) = param_1[5];
                      *(ulong *)(puVar17 + 0x40) = uVar20;
                      *(ulong *)(puVar17 + 0x58) = uVar13;
                      *(ulong *)(puVar17 + 0x50) = uVar3;
                      uVar20 = param_1[8];
                      uVar13 = param_1[0xb];
                      uVar3 = param_1[10];
                      *(ulong *)(puVar17 + 0x68) = param_1[9];
                      *(ulong *)(puVar17 + 0x60) = uVar20;
                      *(ulong *)(puVar17 + 0x78) = uVar13;
                      *(ulong *)(puVar17 + 0x70) = uVar3;
                      uVar20 = *param_1;
                      uVar13 = param_1[3];
                      uVar3 = param_1[2];
                      *(ulong *)(puVar17 + 0x28) = param_1[1];
                      *(ulong *)(puVar17 + 0x20) = uVar20;
                      *(ulong *)(puVar17 + 0x38) = uVar13;
                      *(ulong *)(puVar17 + 0x30) = uVar3;
                      *(ulong *)(puVar17 + 0xb0) = uVar19;
                      *(undefined **)(puVar17 + 0xb8) = puVar2;
                      uStack_78 = 0x102f09b58;
                      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                      uStack_90 = 0x42000000;
                      puStack_88 = &UNK_1000f6b44;
                      puStack_80 = &UNK_1105e7368;
                      puStack_70 = puVar17;
                      func_0x000107c60bc4(&puStack_98);
                      FUN_102f04d58(param_1,&puStack_130);
                      func_0x000107c6157c(puVar2);
                      goto code_r0x000107c61574;
                    }
                    if (uVar3 == 0) {
                      if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) < 4) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef7e48);
                        (*pcVar1)();
                      }
                      lStack_3b0 = *(long *)(uVar19 + 0x38);
                      func_0x000107c615f0();
                    }
                    else {
                      lStack_3b0 = 3;
                      FUN_10274d138(3,uVar19);
                    }
                    ppuVar11 = &puStack_130;
                    FUN_102f04d58(param_1);
                    func_0x000107c6157c(puVar2);
                    func_0x000107c61434(uVar19);
                    func_0x000107c61174();
                    lVar15 = lStack_3b0;
                    func_0x000107c615f0();
                    func_0x000107c4e090();
                    func_0x000107c61180();
                    lVar21 = lVar15;
                    func_0x000107c3eea8();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar15);
                    lVar15 = lVar21;
                    func_0x000107c5ee30();
                    func_0x000107c61170(lVar21);
                    func_0x000107c610f8(PTR_PTR_1126b25c0);
                    func_0x00010006c00c(lVar15,ppuVar11);
                    lVar21 = lVar15;
                    func_0x0001010282b0(lVar15,ppuVar11);
                    if (lVar21 == 0) {
                      func_0x00010006c090(lVar15,ppuVar11);
                      func_0x000102f00d0c(puVar2,lStack_3b0,param_2,lVar4,uVar19,param_1,
                                          FUN_102ef5634,0);
                      goto code_r0x000107c61574;
                    }
                    func_0x000107c61614(auStack_1a0,lVar4);
                    ppuVar11 = &puStack_130;
                    FUN_102f04d58(param_1);
                    func_0x000107c6157c(puVar2);
                    func_0x000107c61434(uVar19);
                    func_0x000107c61174();
                    func_0x000107c615f0(lStack_3b0);
                    FUN_102ed8938();
                    if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                      func_0x000107c610f8(PTR_PTR_1126b25c0);
                      lStack_3d0 = lVar21;
                      func_0x0001010282b0(lVar21,ppuVar11);
                      func_0x0001000b44c0(lVar21,ppuVar11);
                    }
                    else {
                      lStack_3d0 = 0;
                    }
                    puVar12 = auStack_1b8;
                    func_0x000107c61428(auStack_1a0,puVar12,0,0);
                    puVar6 = auStack_1a0;
                    func_0x000107c61618();
                    if (puVar6 != (undefined1 *)0x0) {
                      if (lStack_3d0 != 0) {
                        func_0x000107c41214();
                        func_0x000107c61180();
                        if (lStack_3d0 != 0) {
                          lVar15 = lStack_3d0;
                          func_0x000107c5ee30();
                          func_0x000107c61170(lStack_3d0);
                          puVar9 = &UNK_1105e73a0;
                          func_0x000107c613fc(&UNK_1105e73a0,0xe8,7);
                          uVar8 = param_1[0xc];
                          uVar23 = param_1[0xf];
                          uVar22 = param_1[0xe];
                          *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                          *(ulong *)(puVar9 + 0x98) = uVar8;
                          *(ulong *)(puVar9 + 0xb0) = uVar23;
                          *(ulong *)(puVar9 + 0xa8) = uVar22;
                          uVar8 = param_1[0x10];
                          *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                          *(ulong *)(puVar9 + 0xb8) = uVar8;
                          uVar8 = param_1[4];
                          uVar23 = param_1[7];
                          uVar22 = param_1[6];
                          *(ulong *)(puVar9 + 0x60) = param_1[5];
                          *(ulong *)(puVar9 + 0x58) = uVar8;
                          *(ulong *)(puVar9 + 0x70) = uVar23;
                          *(ulong *)(puVar9 + 0x68) = uVar22;
                          uVar8 = param_1[8];
                          uVar23 = param_1[0xb];
                          uVar22 = param_1[10];
                          *(ulong *)(puVar9 + 0x80) = param_1[9];
                          *(ulong *)(puVar9 + 0x78) = uVar8;
                          *(ulong *)(puVar9 + 0x90) = uVar23;
                          *(ulong *)(puVar9 + 0x88) = uVar22;
                          uVar8 = *param_1;
                          uVar23 = param_1[3];
                          uVar22 = param_1[2];
                          *(ulong *)(puVar9 + 0x40) = param_1[1];
                          *(ulong *)(puVar9 + 0x38) = uVar8;
                          *(undefined **)(puVar9 + 0x10) = puVar2;
                          *(long *)(puVar9 + 0x18) = lStack_3b0;
                          *(long *)(puVar9 + 0x20) = param_2;
                          *(long *)(puVar9 + 0x28) = lVar4;
                          *(ulong *)(puVar9 + 0x30) = uVar19;
                          uVar8 = param_1[0x12];
                          *(ulong *)(puVar9 + 0x50) = uVar23;
                          *(ulong *)(puVar9 + 0x48) = uVar22;
                          *(ulong *)(puVar9 + 200) = uVar8;
                          *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                          *(undefined8 *)(puVar9 + 0xd8) = 0;
                          *(undefined8 *)(puVar9 + 0xe0) = 3;
                          puVar17 = *(undefined **)(puVar6 + _DAT_112f27e60);
                          FUN_102f04d58(param_1,&puStack_130);
                          func_0x000107c6157c(puVar2);
                          func_0x000107c61434(uVar19);
                          func_0x000107c61174();
                          func_0x000107c615f0(lStack_3b0);
                          func_0x000107c5dbd4();
                          func_0x000107c61180();
                          puVar10 = puVar17;
                          func_0x000107c5c734();
                          func_0x000107c61180();
                          func_0x000107c61170();
                          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
                          if (puVar10 != (undefined *)0x0) {
                            puVar2 = &UNK_1105e78f0;
                            func_0x000107c613fc(&UNK_1105e78f0,0x30,7);
                            *(undefined8 *)(puVar2 + 0x10) = 0x102f09a10;
                            *(undefined **)(puVar2 + 0x18) = puVar9;
                            *(long *)(puVar2 + 0x20) = lVar15;
                            *(undefined1 **)(puVar2 + 0x28) = puVar12;
                            uStack_110 = 0x102f099a8;
                            puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
                            uStack_128 = 0x42000000;
                            puStack_120 = &UNK_100f1c768;
                            puStack_118 = &UNK_1105e7908;
                            puStack_108 = puVar2;
                            func_0x000107c60bc4(&puStack_130);
                            func_0x000107c6157c(puVar9);
                            func_0x00010006c00c(lVar15,puVar12);
                            goto code_r0x000107c61574;
                          }
                          if (uVar13 == 0) {
LAB_102ef76b0:
                            func_0x00010273ca1c();
                            func_0x000107c613fc();
                            *(undefined8 *)(puVar17 + 0x18) = 3;
                            *(undefined8 *)(puVar17 + 0x10) = 1;
                            *(long *)(puVar17 + 0x20) = lStack_3b0;
                            func_0x000107c615f0();
                            puVar16 = puVar17;
                          }
                          else {
                            puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                            func_0x000107c60480();
                            puVar17 = (undefined *)0x0;
                            if (puVar9 == (undefined *)0x0) goto LAB_102ef76b0;
                          }
                          func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                          FUN_102f0240c(puVar16);
                          func_0x000107c614a8(&puStack_130);
                          if (param_2 != *(long *)(param_3 + lVar18)) goto code_r0x000107c61574;
                          if (uVar20 == 0) {
                            uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
                          }
                          else {
                            uVar8 = uVar19 & 0xffffffffffffff8;
                            if ((uVar19 & 0x8000000000000000) != 0) {
                              uVar8 = uVar19;
                            }
                            func_0x000107c60480();
                          }
                          if ((long)uVar8 < 5) {
                            func_0x0001000c10c0("processBundle(at:)");
                            func_0x000107c61180();
                            puVar9 = &UNK_1105e5fa0;
                            func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                            func_0x000107c61614(puVar9 + 0x10,lVar4);
                            puVar17 = &UNK_1105e73c8;
                            func_0x000107c613fc(&UNK_1105e73c8,0xc0,7);
                            *(undefined **)(puVar17 + 0x10) = puVar9;
                            *(long *)(puVar17 + 0x18) = param_2;
                            uVar19 = param_1[0xc];
                            uVar3 = param_1[0xf];
                            uVar20 = param_1[0xe];
                            *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                            *(ulong *)(puVar17 + 0x80) = uVar19;
                            *(ulong *)(puVar17 + 0x98) = uVar3;
                            *(ulong *)(puVar17 + 0x90) = uVar20;
                            uVar19 = param_1[0x10];
                            *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                            *(ulong *)(puVar17 + 0xa0) = uVar19;
                            uVar19 = param_1[0x12];
                            uVar20 = param_1[4];
                            uVar13 = param_1[7];
                            uVar3 = param_1[6];
                            *(ulong *)(puVar17 + 0x48) = param_1[5];
                            *(ulong *)(puVar17 + 0x40) = uVar20;
                            *(ulong *)(puVar17 + 0x58) = uVar13;
                            *(ulong *)(puVar17 + 0x50) = uVar3;
                            uVar20 = param_1[8];
                            uVar13 = param_1[0xb];
                            uVar3 = param_1[10];
                            *(ulong *)(puVar17 + 0x68) = param_1[9];
                            *(ulong *)(puVar17 + 0x60) = uVar20;
                            *(ulong *)(puVar17 + 0x78) = uVar13;
                            *(ulong *)(puVar17 + 0x70) = uVar3;
                            uVar20 = *param_1;
                            uVar13 = param_1[3];
                            uVar3 = param_1[2];
                            *(ulong *)(puVar17 + 0x28) = param_1[1];
                            *(ulong *)(puVar17 + 0x20) = uVar20;
                            *(ulong *)(puVar17 + 0x38) = uVar13;
                            *(ulong *)(puVar17 + 0x30) = uVar3;
                            *(ulong *)(puVar17 + 0xb0) = uVar19;
                            *(undefined **)(puVar17 + 0xb8) = puVar2;
                            uStack_78 = 0x102f09b5c;
                            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                            uStack_90 = 0x42000000;
                            puStack_88 = &UNK_1000f6b44;
                            puStack_80 = &UNK_1105e73e0;
                            puStack_70 = puVar17;
                            func_0x000107c60bc4(&puStack_98);
                            FUN_102f04d58(param_1,&puStack_130);
                            func_0x000107c6157c(puVar2);
                            goto code_r0x000107c61574;
                          }
                          if (uVar3 == 0) {
                            if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) < 5) {
                    /* WARNING: Does not return */
                              pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef8618);
                              (*pcVar1)();
                            }
                            lStack_400 = *(long *)(uVar19 + 0x40);
                            func_0x000107c615f0();
                          }
                          else {
                            lStack_400 = 4;
                            FUN_10274d138(4,uVar19);
                          }
                          ppuVar11 = &puStack_130;
                          FUN_102f04d58(param_1);
                          func_0x000107c6157c(puVar2);
                          func_0x000107c61434(uVar19);
                          func_0x000107c61174();
                          lVar15 = lStack_400;
                          func_0x000107c615f0();
                          func_0x000107c4e090();
                          func_0x000107c61180();
                          lVar21 = lVar15;
                          func_0x000107c3eea8();
                          func_0x000107c61180();
                          func_0x000107c61170(lVar15);
                          lVar15 = lVar21;
                          func_0x000107c5ee30();
                          func_0x000107c61170(lVar21);
                          func_0x000107c610f8(PTR_PTR_1126b25c0);
                          func_0x00010006c00c(lVar15,ppuVar11);
                          lVar21 = lVar15;
                          func_0x0001010282b0(lVar15,ppuVar11);
                          if (lVar21 == 0) {
                            func_0x00010006c090(lVar15,ppuVar11);
                            func_0x000102f00d0c(puVar2,lStack_400,param_2,lVar4,uVar19,param_1,
                                                FUN_102ef5634,0);
                            goto code_r0x000107c61574;
                          }
                          func_0x000107c61614(auStack_1c0,lVar4);
                          ppuVar11 = &puStack_130;
                          FUN_102f04d58(param_1);
                          func_0x000107c6157c(puVar2);
                          func_0x000107c61434(uVar19);
                          func_0x000107c61174();
                          func_0x000107c615f0(lStack_400);
                          FUN_102ed8938();
                          if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                            func_0x000107c610f8(PTR_PTR_1126b25c0);
                            lStack_420 = lVar21;
                            func_0x0001010282b0(lVar21,ppuVar11);
                            func_0x0001000b44c0(lVar21,ppuVar11);
                          }
                          else {
                            lStack_420 = 0;
                          }
                          puVar12 = auStack_1d8;
                          func_0x000107c61428(auStack_1c0,puVar12,0,0);
                          puVar6 = auStack_1c0;
                          func_0x000107c61618();
                          if (puVar6 != (undefined1 *)0x0) {
                            if (lStack_420 != 0) {
                              func_0x000107c41214();
                              func_0x000107c61180();
                              if (lStack_420 != 0) {
                                lVar15 = lStack_420;
                                func_0x000107c5ee30();
                                func_0x000107c61170(lStack_420);
                                puVar9 = &UNK_1105e7418;
                                func_0x000107c613fc(&UNK_1105e7418,0xe8,7);
                                uVar8 = param_1[0xc];
                                uVar23 = param_1[0xf];
                                uVar22 = param_1[0xe];
                                *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                                *(ulong *)(puVar9 + 0x98) = uVar8;
                                *(ulong *)(puVar9 + 0xb0) = uVar23;
                                *(ulong *)(puVar9 + 0xa8) = uVar22;
                                uVar8 = param_1[0x10];
                                *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                                *(ulong *)(puVar9 + 0xb8) = uVar8;
                                uVar8 = param_1[4];
                                uVar23 = param_1[7];
                                uVar22 = param_1[6];
                                *(ulong *)(puVar9 + 0x60) = param_1[5];
                                *(ulong *)(puVar9 + 0x58) = uVar8;
                                *(ulong *)(puVar9 + 0x70) = uVar23;
                                *(ulong *)(puVar9 + 0x68) = uVar22;
                                uVar8 = param_1[8];
                                uVar23 = param_1[0xb];
                                uVar22 = param_1[10];
                                *(ulong *)(puVar9 + 0x80) = param_1[9];
                                *(ulong *)(puVar9 + 0x78) = uVar8;
                                *(ulong *)(puVar9 + 0x90) = uVar23;
                                *(ulong *)(puVar9 + 0x88) = uVar22;
                                uVar8 = *param_1;
                                uVar23 = param_1[3];
                                uVar22 = param_1[2];
                                *(ulong *)(puVar9 + 0x40) = param_1[1];
                                *(ulong *)(puVar9 + 0x38) = uVar8;
                                *(undefined **)(puVar9 + 0x10) = puVar2;
                                *(long *)(puVar9 + 0x18) = lStack_400;
                                *(long *)(puVar9 + 0x20) = param_2;
                                *(long *)(puVar9 + 0x28) = lVar4;
                                *(ulong *)(puVar9 + 0x30) = uVar19;
                                uVar8 = param_1[0x12];
                                *(ulong *)(puVar9 + 0x50) = uVar23;
                                *(ulong *)(puVar9 + 0x48) = uVar22;
                                *(ulong *)(puVar9 + 200) = uVar8;
                                *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                                *(undefined8 *)(puVar9 + 0xd8) = 0;
                                *(undefined8 *)(puVar9 + 0xe0) = 4;
                                puVar17 = *(undefined **)(puVar6 + _DAT_112f27e60);
                                FUN_102f04d58(param_1,&puStack_130);
                                func_0x000107c6157c(puVar2);
                                func_0x000107c61434(uVar19);
                                func_0x000107c61174();
                                func_0x000107c615f0(lStack_400);
                                func_0x000107c5dbd4();
                                func_0x000107c61180();
                                puVar10 = puVar17;
                                func_0x000107c5c734();
                                func_0x000107c61180();
                                func_0x000107c61170();
                                puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                if (puVar10 != (undefined *)0x0) {
                                  puVar2 = &UNK_1105e78a0;
                                  func_0x000107c613fc(&UNK_1105e78a0,0x30,7);
                                  *(undefined8 *)(puVar2 + 0x10) = 0x102f09a14;
                                  *(undefined **)(puVar2 + 0x18) = puVar9;
                                  *(long *)(puVar2 + 0x20) = lVar15;
                                  *(undefined1 **)(puVar2 + 0x28) = puVar12;
                                  uStack_110 = 0x102f099a4;
                                  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
                                  uStack_128 = 0x42000000;
                                  puStack_120 = &UNK_100f1c768;
                                  puStack_118 = &UNK_1105e78b8;
                                  puStack_108 = puVar2;
                                  func_0x000107c60bc4(&puStack_130);
                                  func_0x000107c6157c(puVar9);
                                  func_0x00010006c00c(lVar15,puVar12);
                                  goto code_r0x000107c61574;
                                }
                                if (uVar13 == 0) {
LAB_102ef7e60:
                                  func_0x00010273ca1c();
                                  func_0x000107c613fc();
                                  *(undefined8 *)(puVar17 + 0x18) = 3;
                                  *(undefined8 *)(puVar17 + 0x10) = 1;
                                  *(long *)(puVar17 + 0x20) = lStack_400;
                                  func_0x000107c615f0();
                                  puVar16 = puVar17;
                                }
                                else {
                                  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                  func_0x000107c60480();
                                  puVar17 = (undefined *)0x0;
                                  if (puVar9 == (undefined *)0x0) goto LAB_102ef7e60;
                                }
                                func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                                FUN_102f0240c(puVar16);
                                func_0x000107c614a8(&puStack_130);
                                if (param_2 != *(long *)(param_3 + lVar18))
                                goto code_r0x000107c61574;
                                if (uVar20 == 0) {
                                  uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
                                }
                                else {
                                  uVar8 = uVar19 & 0xffffffffffffff8;
                                  if ((uVar19 & 0x8000000000000000) != 0) {
                                    uVar8 = uVar19;
                                  }
                                  func_0x000107c60480();
                                }
                                if ((long)uVar8 < 6) {
                                  func_0x0001000c10c0("processBundle(at:)");
                                  func_0x000107c61180();
                                  puVar9 = &UNK_1105e5fa0;
                                  func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                                  func_0x000107c61614(puVar9 + 0x10,lVar4);
                                  puVar17 = &UNK_1105e7440;
                                  func_0x000107c613fc(&UNK_1105e7440,0xc0,7);
                                  *(undefined **)(puVar17 + 0x10) = puVar9;
                                  *(long *)(puVar17 + 0x18) = param_2;
                                  uVar19 = param_1[0xc];
                                  uVar3 = param_1[0xf];
                                  uVar20 = param_1[0xe];
                                  *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                                  *(ulong *)(puVar17 + 0x80) = uVar19;
                                  *(ulong *)(puVar17 + 0x98) = uVar3;
                                  *(ulong *)(puVar17 + 0x90) = uVar20;
                                  uVar19 = param_1[0x10];
                                  *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                                  *(ulong *)(puVar17 + 0xa0) = uVar19;
                                  uVar19 = param_1[0x12];
                                  uVar20 = param_1[4];
                                  uVar13 = param_1[7];
                                  uVar3 = param_1[6];
                                  *(ulong *)(puVar17 + 0x48) = param_1[5];
                                  *(ulong *)(puVar17 + 0x40) = uVar20;
                                  *(ulong *)(puVar17 + 0x58) = uVar13;
                                  *(ulong *)(puVar17 + 0x50) = uVar3;
                                  uVar20 = param_1[8];
                                  uVar13 = param_1[0xb];
                                  uVar3 = param_1[10];
                                  *(ulong *)(puVar17 + 0x68) = param_1[9];
                                  *(ulong *)(puVar17 + 0x60) = uVar20;
                                  *(ulong *)(puVar17 + 0x78) = uVar13;
                                  *(ulong *)(puVar17 + 0x70) = uVar3;
                                  uVar20 = *param_1;
                                  uVar13 = param_1[3];
                                  uVar3 = param_1[2];
                                  *(ulong *)(puVar17 + 0x28) = param_1[1];
                                  *(ulong *)(puVar17 + 0x20) = uVar20;
                                  *(ulong *)(puVar17 + 0x38) = uVar13;
                                  *(ulong *)(puVar17 + 0x30) = uVar3;
                                  *(ulong *)(puVar17 + 0xb0) = uVar19;
                                  *(undefined **)(puVar17 + 0xb8) = puVar2;
                                  uStack_78 = 0x102f09b60;
                                  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                                  uStack_90 = 0x42000000;
                                  puStack_88 = &UNK_1000f6b44;
                                  puStack_80 = &UNK_1105e7458;
                                  puStack_70 = puVar17;
                                  func_0x000107c60bc4(&puStack_98);
                                  FUN_102f04d58(param_1,&puStack_130);
                                  func_0x000107c6157c(puVar2);
                                  goto code_r0x000107c61574;
                                }
                                if (uVar3 == 0) {
                                  if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) < 6) {
                    /* WARNING: Does not return */
                                    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef8dac);
                                    (*pcVar1)();
                                  }
                                  lStack_450 = *(long *)(uVar19 + 0x48);
                                  func_0x000107c615f0();
                                }
                                else {
                                  lStack_450 = 5;
                                  FUN_10274d138(5,uVar19);
                                }
                                ppuVar11 = &puStack_130;
                                FUN_102f04d58(param_1);
                                func_0x000107c6157c(puVar2);
                                func_0x000107c61434(uVar19);
                                func_0x000107c61174();
                                lVar15 = lStack_450;
                                func_0x000107c615f0();
                                func_0x000107c4e090();
                                func_0x000107c61180();
                                lVar21 = lVar15;
                                func_0x000107c3eea8();
                                func_0x000107c61180();
                                func_0x000107c61170(lVar15);
                                lVar15 = lVar21;
                                func_0x000107c5ee30();
                                func_0x000107c61170(lVar21);
                                func_0x000107c610f8(PTR_PTR_1126b25c0);
                                func_0x00010006c00c(lVar15,ppuVar11);
                                lVar21 = lVar15;
                                func_0x0001010282b0(lVar15,ppuVar11);
                                if (lVar21 == 0) {
                                  func_0x00010006c090(lVar15,ppuVar11);
                                  func_0x000102f00d0c(puVar2,lStack_450,param_2,lVar4,uVar19,param_1
                                                      ,FUN_102ef5634,0);
                                  goto code_r0x000107c61574;
                                }
                                func_0x000107c61614(auStack_1e0,lVar4);
                                ppuVar11 = &puStack_130;
                                FUN_102f04d58(param_1);
                                func_0x000107c6157c(puVar2);
                                func_0x000107c61434(uVar19);
                                func_0x000107c61174();
                                func_0x000107c615f0(lStack_450);
                                FUN_102ed8938();
                                if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                                  func_0x000107c610f8(PTR_PTR_1126b25c0);
                                  lStack_470 = lVar21;
                                  func_0x0001010282b0(lVar21,ppuVar11);
                                  func_0x0001000b44c0(lVar21,ppuVar11);
                                }
                                else {
                                  lStack_470 = 0;
                                }
                                puVar12 = auStack_1f8;
                                func_0x000107c61428(auStack_1e0,puVar12,0,0);
                                puVar6 = auStack_1e0;
                                func_0x000107c61618();
                                if (puVar6 != (undefined1 *)0x0) {
                                  if (lStack_470 != 0) {
                                    func_0x000107c41214();
                                    func_0x000107c61180();
                                    if (lStack_470 != 0) {
                                      lVar15 = lStack_470;
                                      func_0x000107c5ee30();
                                      func_0x000107c61170(lStack_470);
                                      puVar9 = &UNK_1105e7490;
                                      func_0x000107c613fc(&UNK_1105e7490,0xe8,7);
                                      uVar8 = param_1[0xc];
                                      uVar23 = param_1[0xf];
                                      uVar22 = param_1[0xe];
                                      *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                                      *(ulong *)(puVar9 + 0x98) = uVar8;
                                      *(ulong *)(puVar9 + 0xb0) = uVar23;
                                      *(ulong *)(puVar9 + 0xa8) = uVar22;
                                      uVar8 = param_1[0x10];
                                      *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                                      *(ulong *)(puVar9 + 0xb8) = uVar8;
                                      uVar8 = param_1[4];
                                      uVar23 = param_1[7];
                                      uVar22 = param_1[6];
                                      *(ulong *)(puVar9 + 0x60) = param_1[5];
                                      *(ulong *)(puVar9 + 0x58) = uVar8;
                                      *(ulong *)(puVar9 + 0x70) = uVar23;
                                      *(ulong *)(puVar9 + 0x68) = uVar22;
                                      uVar8 = param_1[8];
                                      uVar23 = param_1[0xb];
                                      uVar22 = param_1[10];
                                      *(ulong *)(puVar9 + 0x80) = param_1[9];
                                      *(ulong *)(puVar9 + 0x78) = uVar8;
                                      *(ulong *)(puVar9 + 0x90) = uVar23;
                                      *(ulong *)(puVar9 + 0x88) = uVar22;
                                      uVar8 = *param_1;
                                      uVar23 = param_1[3];
                                      uVar22 = param_1[2];
                                      *(ulong *)(puVar9 + 0x40) = param_1[1];
                                      *(ulong *)(puVar9 + 0x38) = uVar8;
                                      *(undefined **)(puVar9 + 0x10) = puVar2;
                                      *(long *)(puVar9 + 0x18) = lStack_450;
                                      *(long *)(puVar9 + 0x20) = param_2;
                                      *(long *)(puVar9 + 0x28) = lVar4;
                                      *(ulong *)(puVar9 + 0x30) = uVar19;
                                      uVar8 = param_1[0x12];
                                      *(ulong *)(puVar9 + 0x50) = uVar23;
                                      *(ulong *)(puVar9 + 0x48) = uVar22;
                                      *(ulong *)(puVar9 + 200) = uVar8;
                                      *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                                      *(undefined8 *)(puVar9 + 0xd8) = 0;
                                      *(undefined8 *)(puVar9 + 0xe0) = 5;
                                      puVar17 = *(undefined **)(puVar6 + _DAT_112f27e60);
                                      FUN_102f04d58(param_1,&puStack_130);
                                      func_0x000107c6157c(puVar2);
                                      func_0x000107c61434(uVar19);
                                      func_0x000107c61174();
                                      func_0x000107c615f0(lStack_450);
                                      func_0x000107c5dbd4();
                                      func_0x000107c61180();
                                      puVar10 = puVar17;
                                      func_0x000107c5c734();
                                      func_0x000107c61180();
                                      func_0x000107c61170();
                                      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                      if (puVar10 != (undefined *)0x0) {
                                        puVar2 = &UNK_1105e7850;
                                        func_0x000107c613fc(&UNK_1105e7850,0x30,7);
                                        *(undefined8 *)(puVar2 + 0x10) = 0x102f09a18;
                                        *(undefined **)(puVar2 + 0x18) = puVar9;
                                        *(long *)(puVar2 + 0x20) = lVar15;
                                        *(undefined1 **)(puVar2 + 0x28) = puVar12;
                                        uStack_110 = 0x102f099a0;
                                        puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
                                        uStack_128 = 0x42000000;
                                        puStack_120 = &UNK_100f1c768;
                                        puStack_118 = &UNK_1105e7868;
                                        puStack_108 = puVar2;
                                        func_0x000107c60bc4(&puStack_130);
                                        func_0x000107c6157c(puVar9);
                                        func_0x00010006c00c(lVar15,puVar12);
                                        goto code_r0x000107c61574;
                                      }
                                      if (uVar13 == 0) {
LAB_102ef8630:
                                        func_0x00010273ca1c();
                                        func_0x000107c613fc();
                                        *(undefined8 *)(puVar17 + 0x18) = 3;
                                        *(undefined8 *)(puVar17 + 0x10) = 1;
                                        *(long *)(puVar17 + 0x20) = lStack_450;
                                        func_0x000107c615f0();
                                        puVar16 = puVar17;
                                      }
                                      else {
                                        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                        func_0x000107c60480();
                                        puVar17 = (undefined *)0x0;
                                        if (puVar9 == (undefined *)0x0) goto LAB_102ef8630;
                                      }
                                      func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                                      FUN_102f0240c(puVar16);
                                      func_0x000107c614a8(&puStack_130);
                                      if (param_2 != *(long *)(param_3 + lVar18))
                                      goto code_r0x000107c61574;
                                      if (uVar20 == 0) {
                                        uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
                                      }
                                      else {
                                        uVar8 = uVar19 & 0xffffffffffffff8;
                                        if ((uVar19 & 0x8000000000000000) != 0) {
                                          uVar8 = uVar19;
                                        }
                                        func_0x000107c60480();
                                      }
                                      if ((long)uVar8 < 7) {
                                        func_0x0001000c10c0("processBundle(at:)");
                                        func_0x000107c61180();
                                        puVar9 = &UNK_1105e5fa0;
                                        func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                                        func_0x000107c61614(puVar9 + 0x10,lVar4);
                                        puVar17 = &UNK_1105e74b8;
                                        func_0x000107c613fc(&UNK_1105e74b8,0xc0,7);
                                        *(undefined **)(puVar17 + 0x10) = puVar9;
                                        *(long *)(puVar17 + 0x18) = param_2;
                                        uVar19 = param_1[0xc];
                                        uVar3 = param_1[0xf];
                                        uVar20 = param_1[0xe];
                                        *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                                        *(ulong *)(puVar17 + 0x80) = uVar19;
                                        *(ulong *)(puVar17 + 0x98) = uVar3;
                                        *(ulong *)(puVar17 + 0x90) = uVar20;
                                        uVar19 = param_1[0x10];
                                        *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                                        *(ulong *)(puVar17 + 0xa0) = uVar19;
                                        uVar19 = param_1[0x12];
                                        uVar20 = param_1[4];
                                        uVar13 = param_1[7];
                                        uVar3 = param_1[6];
                                        *(ulong *)(puVar17 + 0x48) = param_1[5];
                                        *(ulong *)(puVar17 + 0x40) = uVar20;
                                        *(ulong *)(puVar17 + 0x58) = uVar13;
                                        *(ulong *)(puVar17 + 0x50) = uVar3;
                                        uVar20 = param_1[8];
                                        uVar13 = param_1[0xb];
                                        uVar3 = param_1[10];
                                        *(ulong *)(puVar17 + 0x68) = param_1[9];
                                        *(ulong *)(puVar17 + 0x60) = uVar20;
                                        *(ulong *)(puVar17 + 0x78) = uVar13;
                                        *(ulong *)(puVar17 + 0x70) = uVar3;
                                        uVar20 = *param_1;
                                        uVar13 = param_1[3];
                                        uVar3 = param_1[2];
                                        *(ulong *)(puVar17 + 0x28) = param_1[1];
                                        *(ulong *)(puVar17 + 0x20) = uVar20;
                                        *(ulong *)(puVar17 + 0x38) = uVar13;
                                        *(ulong *)(puVar17 + 0x30) = uVar3;
                                        *(ulong *)(puVar17 + 0xb0) = uVar19;
                                        *(undefined **)(puVar17 + 0xb8) = puVar2;
                                        uStack_78 = 0x102f09b64;
                                        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                                        uStack_90 = 0x42000000;
                                        puStack_88 = &UNK_1000f6b44;
                                        puStack_80 = &UNK_1105e74d0;
                                        puStack_70 = puVar17;
                                        func_0x000107c60bc4(&puStack_98);
                                        FUN_102f04d58(param_1,&puStack_130);
                                        func_0x000107c6157c(puVar2);
                                        goto code_r0x000107c61574;
                                      }
                                      if (uVar3 == 0) {
                                        if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) < 7) {
                    /* WARNING: Does not return */
                                          pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef8e60);
                                          (*pcVar1)();
                                        }
                                        lStack_4a0 = *(long *)(uVar19 + 0x50);
                                        func_0x000107c615f0();
                                      }
                                      else {
                                        lStack_4a0 = 6;
                                        FUN_10274d138(6,uVar19);
                                      }
                                      ppuVar11 = &puStack_130;
                                      FUN_102f04d58(param_1);
                                      func_0x000107c6157c(puVar2);
                                      func_0x000107c61434(uVar19);
                                      func_0x000107c61174();
                                      lVar15 = lStack_4a0;
                                      func_0x000107c615f0();
                                      func_0x000107c4e090();
                                      func_0x000107c61180();
                                      lVar21 = lVar15;
                                      func_0x000107c3eea8();
                                      func_0x000107c61180();
                                      func_0x000107c61170(lVar15);
                                      lVar15 = lVar21;
                                      func_0x000107c5ee30();
                                      func_0x000107c61170(lVar21);
                                      func_0x000107c610f8(PTR_PTR_1126b25c0);
                                      func_0x00010006c00c(lVar15,ppuVar11);
                                      lVar21 = lVar15;
                                      func_0x0001010282b0(lVar15,ppuVar11);
                                      if (lVar21 == 0) {
                                        func_0x00010006c090(lVar15,ppuVar11);
                                        func_0x000102f00d0c(puVar2,lStack_4a0,param_2,lVar4,uVar19,
                                                            param_1,FUN_102ef5634,0);
                                        goto code_r0x000107c61574;
                                      }
                                      func_0x000107c61614(auStack_200,lVar4);
                                      ppuVar11 = &puStack_130;
                                      FUN_102f04d58(param_1);
                                      func_0x000107c6157c(puVar2);
                                      func_0x000107c61434(uVar19);
                                      func_0x000107c61174();
                                      func_0x000107c615f0(lStack_4a0);
                                      FUN_102ed8938();
                                      if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                                        func_0x000107c610f8(PTR_PTR_1126b25c0);
                                        lStack_4c0 = lVar21;
                                        func_0x0001010282b0(lVar21,ppuVar11);
                                        func_0x0001000b44c0(lVar21,ppuVar11);
                                      }
                                      else {
                                        lStack_4c0 = 0;
                                      }
                                      puVar12 = auStack_218;
                                      func_0x000107c61428(auStack_200,puVar12,0,0);
                                      puVar6 = auStack_200;
                                      func_0x000107c61618();
                                      if (puVar6 != (undefined1 *)0x0) {
                                        if (lStack_4c0 != 0) {
                                          func_0x000107c41214();
                                          func_0x000107c61180();
                                          if (lStack_4c0 != 0) {
                                            lVar15 = lStack_4c0;
                                            func_0x000107c5ee30();
                                            func_0x000107c61170(lStack_4c0);
                                            puVar9 = &UNK_1105e7508;
                                            func_0x000107c613fc(&UNK_1105e7508,0xe8,7);
                                            uVar8 = param_1[0xc];
                                            uVar23 = param_1[0xf];
                                            uVar22 = param_1[0xe];
                                            *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                                            *(ulong *)(puVar9 + 0x98) = uVar8;
                                            *(ulong *)(puVar9 + 0xb0) = uVar23;
                                            *(ulong *)(puVar9 + 0xa8) = uVar22;
                                            uVar8 = param_1[0x10];
                                            *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                                            *(ulong *)(puVar9 + 0xb8) = uVar8;
                                            uVar8 = param_1[4];
                                            uVar23 = param_1[7];
                                            uVar22 = param_1[6];
                                            *(ulong *)(puVar9 + 0x60) = param_1[5];
                                            *(ulong *)(puVar9 + 0x58) = uVar8;
                                            *(ulong *)(puVar9 + 0x70) = uVar23;
                                            *(ulong *)(puVar9 + 0x68) = uVar22;
                                            uVar8 = param_1[8];
                                            uVar23 = param_1[0xb];
                                            uVar22 = param_1[10];
                                            *(ulong *)(puVar9 + 0x80) = param_1[9];
                                            *(ulong *)(puVar9 + 0x78) = uVar8;
                                            *(ulong *)(puVar9 + 0x90) = uVar23;
                                            *(ulong *)(puVar9 + 0x88) = uVar22;
                                            uVar8 = *param_1;
                                            uVar23 = param_1[3];
                                            uVar22 = param_1[2];
                                            *(ulong *)(puVar9 + 0x40) = param_1[1];
                                            *(ulong *)(puVar9 + 0x38) = uVar8;
                                            *(undefined **)(puVar9 + 0x10) = puVar2;
                                            *(long *)(puVar9 + 0x18) = lStack_4a0;
                                            *(long *)(puVar9 + 0x20) = param_2;
                                            *(long *)(puVar9 + 0x28) = lVar4;
                                            *(ulong *)(puVar9 + 0x30) = uVar19;
                                            uVar8 = param_1[0x12];
                                            *(ulong *)(puVar9 + 0x50) = uVar23;
                                            *(ulong *)(puVar9 + 0x48) = uVar22;
                                            *(ulong *)(puVar9 + 200) = uVar8;
                                            *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                                            *(undefined8 *)(puVar9 + 0xd8) = 0;
                                            *(undefined8 *)(puVar9 + 0xe0) = 6;
                                            puVar17 = *(undefined **)(puVar6 + _DAT_112f27e60);
                                            FUN_102f04d58(param_1,&puStack_130);
                                            func_0x000107c6157c(puVar2);
                                            func_0x000107c61434(uVar19);
                                            func_0x000107c61174();
                                            func_0x000107c615f0(lStack_4a0);
                                            func_0x000107c5dbd4();
                                            func_0x000107c61180();
                                            puVar10 = puVar17;
                                            func_0x000107c5c734();
                                            func_0x000107c61180();
                                            func_0x000107c61170();
                                            puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                            if (puVar10 != (undefined *)0x0) {
                                              puVar2 = &UNK_1105e7800;
                                              func_0x000107c613fc(&UNK_1105e7800,0x30,7);
                                              *(undefined8 *)(puVar2 + 0x10) = 0x102f09a1c;
                                              *(undefined **)(puVar2 + 0x18) = puVar9;
                                              *(long *)(puVar2 + 0x20) = lVar15;
                                              *(undefined1 **)(puVar2 + 0x28) = puVar12;
                                              uStack_110 = 0x102f0999c;
                                              puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
                                              uStack_128 = 0x42000000;
                                              puStack_120 = &UNK_100f1c768;
                                              puStack_118 = &UNK_1105e7818;
                                              puStack_108 = puVar2;
                                              func_0x000107c60bc4(&puStack_130);
                                              func_0x000107c6157c(puVar9);
                                              func_0x00010006c00c(lVar15,puVar12);
                                              goto code_r0x000107c61574;
                                            }
                                            if (uVar13 == 0) {
LAB_102ef8dc4:
                                              func_0x00010273ca1c();
                                              func_0x000107c613fc();
                                              *(undefined8 *)(puVar17 + 0x18) = 3;
                                              *(undefined8 *)(puVar17 + 0x10) = 1;
                                              *(long *)(puVar17 + 0x20) = lStack_4a0;
                                              func_0x000107c615f0();
                                              puVar16 = puVar17;
                                            }
                                            else {
                                              puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                              func_0x000107c60480();
                                              puVar17 = (undefined *)0x0;
                                              if (puVar9 == (undefined *)0x0) goto LAB_102ef8dc4;
                                            }
                                            func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                                            FUN_102f0240c(puVar16);
                                            func_0x000107c614a8(&puStack_130);
                                            if (param_2 != *(long *)(param_3 + lVar18))
                                            goto code_r0x000107c61574;
                                            if (uVar20 == 0) {
                                              uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10
                                                                );
                                            }
                                            else {
                                              uVar8 = uVar19 & 0xffffffffffffff8;
                                              if ((uVar19 & 0x8000000000000000) != 0) {
                                                uVar8 = uVar19;
                                              }
                                              func_0x000107c60480();
                                            }
                                            if ((long)uVar8 < 8) {
                                              func_0x0001000c10c0("processBundle(at:)");
                                              func_0x000107c61180();
                                              puVar9 = &UNK_1105e5fa0;
                                              func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                                              func_0x000107c61614(puVar9 + 0x10,lVar4);
                                              puVar17 = &UNK_1105e7530;
                                              func_0x000107c613fc(&UNK_1105e7530,0xc0,7);
                                              *(undefined **)(puVar17 + 0x10) = puVar9;
                                              *(long *)(puVar17 + 0x18) = param_2;
                                              uVar19 = param_1[0xc];
                                              uVar3 = param_1[0xf];
                                              uVar20 = param_1[0xe];
                                              *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                                              *(ulong *)(puVar17 + 0x80) = uVar19;
                                              *(ulong *)(puVar17 + 0x98) = uVar3;
                                              *(ulong *)(puVar17 + 0x90) = uVar20;
                                              uVar19 = param_1[0x10];
                                              *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                                              *(ulong *)(puVar17 + 0xa0) = uVar19;
                                              uVar19 = param_1[0x12];
                                              uVar20 = param_1[4];
                                              uVar13 = param_1[7];
                                              uVar3 = param_1[6];
                                              *(ulong *)(puVar17 + 0x48) = param_1[5];
                                              *(ulong *)(puVar17 + 0x40) = uVar20;
                                              *(ulong *)(puVar17 + 0x58) = uVar13;
                                              *(ulong *)(puVar17 + 0x50) = uVar3;
                                              uVar20 = param_1[8];
                                              uVar13 = param_1[0xb];
                                              uVar3 = param_1[10];
                                              *(ulong *)(puVar17 + 0x68) = param_1[9];
                                              *(ulong *)(puVar17 + 0x60) = uVar20;
                                              *(ulong *)(puVar17 + 0x78) = uVar13;
                                              *(ulong *)(puVar17 + 0x70) = uVar3;
                                              uVar20 = *param_1;
                                              uVar13 = param_1[3];
                                              uVar3 = param_1[2];
                                              *(ulong *)(puVar17 + 0x28) = param_1[1];
                                              *(ulong *)(puVar17 + 0x20) = uVar20;
                                              *(ulong *)(puVar17 + 0x38) = uVar13;
                                              *(ulong *)(puVar17 + 0x30) = uVar3;
                                              *(ulong *)(puVar17 + 0xb0) = uVar19;
                                              *(undefined **)(puVar17 + 0xb8) = puVar2;
                                              uStack_78 = 0x102f09b68;
                                              puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                                              uStack_90 = 0x42000000;
                                              puStack_88 = &UNK_1000f6b44;
                                              puStack_80 = &UNK_1105e7548;
                                              puStack_70 = puVar17;
                                              func_0x000107c60bc4(&puStack_98);
                                              FUN_102f04d58(param_1,&puStack_130);
                                              func_0x000107c6157c(puVar2);
                                              goto code_r0x000107c61574;
                                            }
                                            if (uVar3 == 0) {
                                              if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) <
                                                  8) {
                    /* WARNING: Does not return */
                                                pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef90d0);
                                                (*pcVar1)();
                                              }
                                              lStack_528 = *(long *)(uVar19 + 0x58);
                                              func_0x000107c615f0();
                                            }
                                            else {
                                              lStack_528 = 7;
                                              FUN_10274d138(7,uVar19);
                                            }
                                            ppuVar11 = &puStack_130;
                                            FUN_102f04d58(param_1);
                                            func_0x000107c6157c(puVar2);
                                            func_0x000107c61434(uVar19);
                                            func_0x000107c61174();
                                            lVar15 = lStack_528;
                                            func_0x000107c615f0();
                                            func_0x000107c4e090();
                                            func_0x000107c61180();
                                            lVar21 = lVar15;
                                            func_0x000107c3eea8();
                                            func_0x000107c61180();
                                            func_0x000107c61170(lVar15);
                                            lVar15 = lVar21;
                                            func_0x000107c5ee30();
                                            func_0x000107c61170(lVar21);
                                            func_0x000107c610f8(PTR_PTR_1126b25c0);
                                            func_0x00010006c00c(lVar15,ppuVar11);
                                            lVar21 = lVar15;
                                            func_0x0001010282b0(lVar15,ppuVar11);
                                            if (lVar21 == 0) {
                                              func_0x00010006c090(lVar15,ppuVar11);
                                              func_0x000102f00d0c(puVar2,lStack_528,param_2,lVar4,
                                                                  uVar19,param_1,FUN_102ef5634,0);
                                              goto code_r0x000107c61574;
                                            }
                                            func_0x000107c61614(auStack_220,lVar4);
                                            ppuVar11 = &puStack_130;
                                            FUN_102f04d58(param_1);
                                            func_0x000107c6157c(puVar2);
                                            func_0x000107c61434(uVar19);
                                            func_0x000107c61174();
                                            func_0x000107c615f0(lStack_528);
                                            FUN_102ed8938();
                                            if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                                              func_0x000107c610f8(PTR_PTR_1126b25c0);
                                              lStack_500 = lVar21;
                                              func_0x0001010282b0(lVar21,ppuVar11);
                                              func_0x0001000b44c0(lVar21,ppuVar11);
                                            }
                                            else {
                                              lStack_500 = 0;
                                            }
                                            puVar12 = auStack_238;
                                            func_0x000107c61428(auStack_220,puVar12,0,0);
                                            puVar6 = auStack_220;
                                            func_0x000107c61618();
                                            if (puVar6 != (undefined1 *)0x0) {
                                              if (lStack_500 != 0) {
                                                func_0x000107c41214();
                                                func_0x000107c61180();
                                                if (lStack_500 != 0) {
                                                  lVar15 = lStack_500;
                                                  func_0x000107c5ee30();
                                                  func_0x000107c61170(lStack_500);
                                                  puVar9 = &UNK_1105e7580;
                                                  func_0x000107c613fc(&UNK_1105e7580,0xe8,7);
                                                  uVar8 = param_1[0xc];
                                                  uVar23 = param_1[0xf];
                                                  uVar22 = param_1[0xe];
                                                  *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                                                  *(ulong *)(puVar9 + 0x98) = uVar8;
                                                  *(ulong *)(puVar9 + 0xb0) = uVar23;
                                                  *(ulong *)(puVar9 + 0xa8) = uVar22;
                                                  uVar8 = param_1[0x10];
                                                  *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                                                  *(ulong *)(puVar9 + 0xb8) = uVar8;
                                                  uVar8 = param_1[4];
                                                  uVar23 = param_1[7];
                                                  uVar22 = param_1[6];
                                                  *(ulong *)(puVar9 + 0x60) = param_1[5];
                                                  *(ulong *)(puVar9 + 0x58) = uVar8;
                                                  *(ulong *)(puVar9 + 0x70) = uVar23;
                                                  *(ulong *)(puVar9 + 0x68) = uVar22;
                                                  uVar8 = param_1[8];
                                                  uVar23 = param_1[0xb];
                                                  uVar22 = param_1[10];
                                                  *(ulong *)(puVar9 + 0x80) = param_1[9];
                                                  *(ulong *)(puVar9 + 0x78) = uVar8;
                                                  *(ulong *)(puVar9 + 0x90) = uVar23;
                                                  *(ulong *)(puVar9 + 0x88) = uVar22;
                                                  uVar8 = *param_1;
                                                  uVar23 = param_1[3];
                                                  uVar22 = param_1[2];
                                                  *(ulong *)(puVar9 + 0x40) = param_1[1];
                                                  *(ulong *)(puVar9 + 0x38) = uVar8;
                                                  *(undefined **)(puVar9 + 0x10) = puVar2;
                                                  *(long *)(puVar9 + 0x18) = lStack_528;
                                                  *(long *)(puVar9 + 0x20) = param_2;
                                                  *(long *)(puVar9 + 0x28) = lVar4;
                                                  *(ulong *)(puVar9 + 0x30) = uVar19;
                                                  uVar8 = param_1[0x12];
                                                  *(ulong *)(puVar9 + 0x50) = uVar23;
                                                  *(ulong *)(puVar9 + 0x48) = uVar22;
                                                  *(ulong *)(puVar9 + 200) = uVar8;
                                                  *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                                                  *(undefined8 *)(puVar9 + 0xd8) = 0;
                                                  *(undefined8 *)(puVar9 + 0xe0) = 7;
                                                  puVar17 = *(undefined **)(puVar6 + _DAT_112f27e60)
                                                  ;
                                                  FUN_102f04d58(param_1,&puStack_130);
                                                  func_0x000107c6157c(puVar2);
                                                  func_0x000107c61434(uVar19);
                                                  func_0x000107c61174();
                                                  func_0x000107c615f0(lStack_528);
                                                  func_0x000107c5dbd4();
                                                  func_0x000107c61180();
                                                  puVar10 = puVar17;
                                                  func_0x000107c5c734();
                                                  func_0x000107c61180();
                                                  func_0x000107c61170();
                                                  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                                  if (puVar10 != (undefined *)0x0) {
                                                    puVar2 = &UNK_1105e77b0;
                                                    func_0x000107c613fc(&UNK_1105e77b0,0x30,7);
                                                    *(undefined8 *)(puVar2 + 0x10) = 0x102f09a20;
                                                    *(undefined **)(puVar2 + 0x18) = puVar9;
                                                    *(long *)(puVar2 + 0x20) = lVar15;
                                                    *(undefined1 **)(puVar2 + 0x28) = puVar12;
                                                    uStack_110 = 0x102f09998;
                                                    puStack_130 = 
                                                  PTR___NSConcreteStackBlock_11034bd00;
                                                  uStack_128 = 0x42000000;
                                                  puStack_120 = &UNK_100f1c768;
                                                  puStack_118 = &UNK_1105e77c8;
                                                  puStack_108 = puVar2;
                                                  func_0x000107c60bc4(&puStack_130);
                                                  func_0x000107c6157c(puVar9);
                                                  func_0x00010006c00c(lVar15,puVar12);
                                                  goto code_r0x000107c61574;
                                                  }
                                                  if (uVar13 == 0) {
LAB_102ef9498:
                                                    func_0x00010273ca1c();
                                                    func_0x000107c613fc();
                                                    *(undefined8 *)(puVar17 + 0x18) = 3;
                                                    *(undefined8 *)(puVar17 + 0x10) = 1;
                                                    *(long *)(puVar17 + 0x20) = lStack_528;
                                                    func_0x000107c615f0();
                                                    puVar16 = puVar17;
                                                  }
                                                  else {
                                                    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                                    func_0x000107c60480();
                                                    puVar17 = (undefined *)0x0;
                                                    if (puVar9 == (undefined *)0x0)
                                                    goto LAB_102ef9498;
                                                  }
                                                  func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                                                  FUN_102f0240c(puVar16);
                                                  func_0x000107c614a8(&puStack_130);
                                                  if (param_2 != *(long *)(param_3 + lVar18))
                                                  goto code_r0x000107c61574;
                                                  if (uVar20 == 0) {
                                                    uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8)
                                                                      + 0x10);
                                                  }
                                                  else {
                                                    uVar8 = uVar19 & 0xffffffffffffff8;
                                                    if ((uVar19 & 0x8000000000000000) != 0) {
                                                      uVar8 = uVar19;
                                                    }
                                                    func_0x000107c60480();
                                                  }
                                                  if ((long)uVar8 < 9) {
                                                    func_0x0001000c10c0("processBundle(at:)");
                                                    func_0x000107c61180();
                                                    puVar9 = &UNK_1105e5fa0;
                                                    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                                                    func_0x000107c61614(puVar9 + 0x10,lVar4);
                                                    puVar17 = &UNK_1105e75a8;
                                                    func_0x000107c613fc(&UNK_1105e75a8,0xc0,7);
                                                    *(undefined **)(puVar17 + 0x10) = puVar9;
                                                    *(long *)(puVar17 + 0x18) = param_2;
                                                    uVar19 = param_1[0xc];
                                                    uVar3 = param_1[0xf];
                                                    uVar20 = param_1[0xe];
                                                    *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                                                    *(ulong *)(puVar17 + 0x80) = uVar19;
                                                    *(ulong *)(puVar17 + 0x98) = uVar3;
                                                    *(ulong *)(puVar17 + 0x90) = uVar20;
                                                    uVar19 = param_1[0x10];
                                                    *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                                                    *(ulong *)(puVar17 + 0xa0) = uVar19;
                                                    uVar19 = param_1[0x12];
                                                    uVar20 = param_1[4];
                                                    uVar13 = param_1[7];
                                                    uVar3 = param_1[6];
                                                    *(ulong *)(puVar17 + 0x48) = param_1[5];
                                                    *(ulong *)(puVar17 + 0x40) = uVar20;
                                                    *(ulong *)(puVar17 + 0x58) = uVar13;
                                                    *(ulong *)(puVar17 + 0x50) = uVar3;
                                                    uVar20 = param_1[8];
                                                    uVar13 = param_1[0xb];
                                                    uVar3 = param_1[10];
                                                    *(ulong *)(puVar17 + 0x68) = param_1[9];
                                                    *(ulong *)(puVar17 + 0x60) = uVar20;
                                                    *(ulong *)(puVar17 + 0x78) = uVar13;
                                                    *(ulong *)(puVar17 + 0x70) = uVar3;
                                                    uVar20 = *param_1;
                                                    uVar13 = param_1[3];
                                                    uVar3 = param_1[2];
                                                    *(ulong *)(puVar17 + 0x28) = param_1[1];
                                                    *(ulong *)(puVar17 + 0x20) = uVar20;
                                                    *(ulong *)(puVar17 + 0x38) = uVar13;
                                                    *(ulong *)(puVar17 + 0x30) = uVar3;
                                                    *(ulong *)(puVar17 + 0xb0) = uVar19;
                                                    *(undefined **)(puVar17 + 0xb8) = puVar2;
                                                    uStack_78 = 0x102f09b6c;
                                                    puStack_98 = 
                                                  PTR___NSConcreteStackBlock_11034bd00;
                                                  uStack_90 = 0x42000000;
                                                  puStack_88 = &UNK_1000f6b44;
                                                  puStack_80 = &UNK_1105e75c0;
                                                  puStack_70 = puVar17;
                                                  func_0x000107c60bc4(&puStack_98);
                                                  FUN_102f04d58(param_1,&puStack_130);
                                                  func_0x000107c6157c(puVar2);
                                                  goto code_r0x000107c61574;
                                                  }
                                                  if (uVar3 == 0) {
                                                    if (*(ulong *)((uVar19 & 0xffffffffffffff8) +
                                                                  0x10) < 9) {
                    /* WARNING: Does not return */
                                                      pcVar1 = (code *)SoftwareBreakpoint(1,
                                                  0x102ef97bc);
                                                  (*pcVar1)();
                                                  }
                                                  lStack_530 = *(long *)(uVar19 + 0x60);
                                                  func_0x000107c615f0();
                                                  }
                                                  else {
                                                    lStack_530 = 8;
                                                    FUN_10274d138(8,uVar19);
                                                  }
                                                  ppuVar11 = &puStack_130;
                                                  FUN_102f04d58(param_1);
                                                  func_0x000107c6157c(puVar2);
                                                  func_0x000107c61434(uVar19);
                                                  func_0x000107c61174();
                                                  lVar15 = lStack_530;
                                                  func_0x000107c615f0();
                                                  func_0x000107c4e090();
                                                  func_0x000107c61180();
                                                  lVar21 = lVar15;
                                                  func_0x000107c3eea8();
                                                  func_0x000107c61180();
                                                  func_0x000107c61170(lVar15);
                                                  lVar15 = lVar21;
                                                  func_0x000107c5ee30();
                                                  func_0x000107c61170(lVar21);
                                                  func_0x000107c610f8(PTR_PTR_1126b25c0);
                                                  func_0x00010006c00c(lVar15,ppuVar11);
                                                  lVar21 = lVar15;
                                                  func_0x0001010282b0(lVar15,ppuVar11);
                                                  if (lVar21 == 0) {
                                                    func_0x00010006c090(lVar15,ppuVar11);
                                                    func_0x000102f00d0c(puVar2,lStack_530,param_2,
                                                                        lVar4,uVar19,param_1,
                                                                        FUN_102ef5634,0);
                                                    goto code_r0x000107c61574;
                                                  }
                                                  func_0x000107c61614(auStack_240,lVar4);
                                                  ppuVar11 = &puStack_130;
                                                  FUN_102f04d58(param_1);
                                                  func_0x000107c6157c(puVar2);
                                                  func_0x000107c61434(uVar19);
                                                  func_0x000107c61174();
                                                  func_0x000107c615f0(lStack_530);
                                                  FUN_102ed8938();
                                                  if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                                                    func_0x000107c610f8(PTR_PTR_1126b25c0);
                                                    lStack_510 = lVar21;
                                                    func_0x0001010282b0(lVar21,ppuVar11);
                                                    func_0x0001000b44c0(lVar21,ppuVar11);
                                                  }
                                                  else {
                                                    lStack_510 = 0;
                                                  }
                                                  puVar12 = auStack_258;
                                                  func_0x000107c61428(auStack_240,puVar12,0,0);
                                                  puVar6 = auStack_240;
                                                  func_0x000107c61618();
                                                  if (puVar6 != (undefined1 *)0x0) {
                                                    if (lStack_510 != 0) {
                                                      func_0x000107c41214();
                                                      func_0x000107c61180();
                                                      if (lStack_510 != 0) {
                                                        lVar15 = lStack_510;
                                                        func_0x000107c5ee30();
                                                        func_0x000107c61170(lStack_510);
                                                        puVar9 = &UNK_1105e75f8;
                                                        func_0x000107c613fc(&UNK_1105e75f8,0xe8,7);
                                                        uVar8 = param_1[0xc];
                                                        uVar23 = param_1[0xf];
                                                        uVar22 = param_1[0xe];
                                                        *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                                                        *(ulong *)(puVar9 + 0x98) = uVar8;
                                                        *(ulong *)(puVar9 + 0xb0) = uVar23;
                                                        *(ulong *)(puVar9 + 0xa8) = uVar22;
                                                        uVar8 = param_1[0x10];
                                                        *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                                                        *(ulong *)(puVar9 + 0xb8) = uVar8;
                                                        uVar8 = param_1[4];
                                                        uVar23 = param_1[7];
                                                        uVar22 = param_1[6];
                                                        *(ulong *)(puVar9 + 0x60) = param_1[5];
                                                        *(ulong *)(puVar9 + 0x58) = uVar8;
                                                        *(ulong *)(puVar9 + 0x70) = uVar23;
                                                        *(ulong *)(puVar9 + 0x68) = uVar22;
                                                        uVar8 = param_1[8];
                                                        uVar23 = param_1[0xb];
                                                        uVar22 = param_1[10];
                                                        *(ulong *)(puVar9 + 0x80) = param_1[9];
                                                        *(ulong *)(puVar9 + 0x78) = uVar8;
                                                        *(ulong *)(puVar9 + 0x90) = uVar23;
                                                        *(ulong *)(puVar9 + 0x88) = uVar22;
                                                        uVar8 = *param_1;
                                                        uVar23 = param_1[3];
                                                        uVar22 = param_1[2];
                                                        *(ulong *)(puVar9 + 0x40) = param_1[1];
                                                        *(ulong *)(puVar9 + 0x38) = uVar8;
                                                        *(undefined **)(puVar9 + 0x10) = puVar2;
                                                        *(long *)(puVar9 + 0x18) = lStack_530;
                                                        *(long *)(puVar9 + 0x20) = param_2;
                                                        *(long *)(puVar9 + 0x28) = lVar4;
                                                        *(ulong *)(puVar9 + 0x30) = uVar19;
                                                        uVar8 = param_1[0x12];
                                                        *(ulong *)(puVar9 + 0x50) = uVar23;
                                                        *(ulong *)(puVar9 + 0x48) = uVar22;
                                                        *(ulong *)(puVar9 + 200) = uVar8;
                                                        *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                                                        *(undefined8 *)(puVar9 + 0xd8) = 0;
                                                        *(undefined8 *)(puVar9 + 0xe0) = 8;
                                                        puVar17 = *(undefined **)
                                                                   (puVar6 + _DAT_112f27e60);
                                                        FUN_102f04d58(param_1,&puStack_130);
                                                        func_0x000107c6157c(puVar2);
                                                        func_0x000107c61434(uVar19);
                                                        func_0x000107c61174();
                                                        func_0x000107c615f0(lStack_530);
                                                        func_0x000107c5dbd4();
                                                        func_0x000107c61180();
                                                        puVar10 = puVar17;
                                                        func_0x000107c5c734();
                                                        func_0x000107c61180();
                                                        func_0x000107c61170();
                                                        puVar16 = 
                                                  PTR___swiftEmptyArrayStorage_11034f1c8;
                                                  if (puVar10 != (undefined *)0x0) {
                                                    puVar2 = &UNK_1105e7760;
                                                    func_0x000107c613fc(&UNK_1105e7760,0x30,7);
                                                    *(undefined8 *)(puVar2 + 0x10) = 0x102f09a24;
                                                    *(undefined **)(puVar2 + 0x18) = puVar9;
                                                    *(long *)(puVar2 + 0x20) = lVar15;
                                                    *(undefined1 **)(puVar2 + 0x28) = puVar12;
                                                    uStack_110 = 0x102f09994;
                                                    puStack_130 = 
                                                  PTR___NSConcreteStackBlock_11034bd00;
                                                  uStack_128 = 0x42000000;
                                                  puStack_120 = &UNK_100f1c768;
                                                  puStack_118 = &UNK_1105e7778;
                                                  puStack_108 = puVar2;
                                                  func_0x000107c60bc4(&puStack_130);
                                                  func_0x000107c6157c(puVar9);
                                                  func_0x00010006c00c(lVar15,puVar12);
                                                  goto code_r0x000107c61574;
                                                  }
                                                  if (uVar13 == 0) {
LAB_102ef9b70:
                                                    func_0x00010273ca1c();
                                                    func_0x000107c613fc();
                                                    *(undefined8 *)(puVar17 + 0x18) = 3;
                                                    *(undefined8 *)(puVar17 + 0x10) = 1;
                                                    *(long *)(puVar17 + 0x20) = lStack_530;
                                                    func_0x000107c615f0();
                                                    puVar16 = puVar17;
                                                  }
                                                  else {
                                                    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                                    func_0x000107c60480();
                                                    puVar17 = (undefined *)0x0;
                                                    if (puVar9 == (undefined *)0x0)
                                                    goto LAB_102ef9b70;
                                                  }
                                                  func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                                                  FUN_102f0240c(puVar16);
                                                  func_0x000107c614a8(&puStack_130);
                                                  if (param_2 != *(long *)(param_3 + lVar18))
                                                  goto code_r0x000107c61574;
                                                  if (uVar20 == 0) {
                                                    uVar8 = *(ulong *)((uVar19 & 0xffffffffffffff8)
                                                                      + 0x10);
                                                  }
                                                  else {
                                                    uVar8 = uVar19 & 0xffffffffffffff8;
                                                    if ((uVar19 & 0x8000000000000000) != 0) {
                                                      uVar8 = uVar19;
                                                    }
                                                    func_0x000107c60480();
                                                  }
                                                  if ((long)uVar8 < 10) {
                                                    func_0x0001000c10c0("processBundle(at:)");
                                                    func_0x000107c61180();
                                                    puVar9 = &UNK_1105e5fa0;
                                                    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                                                    func_0x000107c61614(puVar9 + 0x10,lVar4);
                                                    puVar17 = &UNK_1105e7620;
                                                    func_0x000107c613fc(&UNK_1105e7620,0xc0,7);
                                                    *(undefined **)(puVar17 + 0x10) = puVar9;
                                                    *(long *)(puVar17 + 0x18) = param_2;
                                                    uVar19 = param_1[0xc];
                                                    uVar3 = param_1[0xf];
                                                    uVar20 = param_1[0xe];
                                                    *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                                                    *(ulong *)(puVar17 + 0x80) = uVar19;
                                                    *(ulong *)(puVar17 + 0x98) = uVar3;
                                                    *(ulong *)(puVar17 + 0x90) = uVar20;
                                                    uVar19 = param_1[0x10];
                                                    *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                                                    *(ulong *)(puVar17 + 0xa0) = uVar19;
                                                    uVar19 = param_1[0x12];
                                                    uVar20 = param_1[4];
                                                    uVar13 = param_1[7];
                                                    uVar3 = param_1[6];
                                                    *(ulong *)(puVar17 + 0x48) = param_1[5];
                                                    *(ulong *)(puVar17 + 0x40) = uVar20;
                                                    *(ulong *)(puVar17 + 0x58) = uVar13;
                                                    *(ulong *)(puVar17 + 0x50) = uVar3;
                                                    uVar20 = param_1[8];
                                                    uVar13 = param_1[0xb];
                                                    uVar3 = param_1[10];
                                                    *(ulong *)(puVar17 + 0x68) = param_1[9];
                                                    *(ulong *)(puVar17 + 0x60) = uVar20;
                                                    *(ulong *)(puVar17 + 0x78) = uVar13;
                                                    *(ulong *)(puVar17 + 0x70) = uVar3;
                                                    uVar20 = *param_1;
                                                    uVar13 = param_1[3];
                                                    uVar3 = param_1[2];
                                                    *(ulong *)(puVar17 + 0x28) = param_1[1];
                                                    *(ulong *)(puVar17 + 0x20) = uVar20;
                                                    *(ulong *)(puVar17 + 0x38) = uVar13;
                                                    *(ulong *)(puVar17 + 0x30) = uVar3;
                                                    *(ulong *)(puVar17 + 0xb0) = uVar19;
                                                    *(undefined **)(puVar17 + 0xb8) = puVar2;
                                                    uStack_78 = 0x102f09b70;
                                                    puStack_98 = 
                                                  PTR___NSConcreteStackBlock_11034bd00;
                                                  uStack_90 = 0x42000000;
                                                  puStack_88 = &UNK_1000f6b44;
                                                  puStack_80 = &UNK_1105e7638;
                                                  puStack_70 = puVar17;
                                                  func_0x000107c60bc4(&puStack_98);
                                                  FUN_102f04d58(param_1,&puStack_130);
                                                  func_0x000107c6157c(puVar2);
                                                  goto code_r0x000107c61574;
                                                  }
                                                  if (uVar3 == 0) {
                                                    if (*(ulong *)((uVar19 & 0xffffffffffffff8) +
                                                                  0x10) < 10) {
                    /* WARNING: Does not return */
                                                      pcVar1 = (code *)SoftwareBreakpoint(1,
                                                  0x102ef9e94);
                                                  (*pcVar1)();
                                                  }
                                                  lStack_538 = *(long *)(uVar19 + 0x68);
                                                  func_0x000107c615f0();
                                                  }
                                                  else {
                                                    lStack_538 = 9;
                                                    FUN_10274d138(9,uVar19);
                                                  }
                                                  ppuVar11 = &puStack_130;
                                                  FUN_102f04d58(param_1);
                                                  func_0x000107c6157c(puVar2);
                                                  func_0x000107c61434(uVar19);
                                                  func_0x000107c61174();
                                                  lVar15 = lStack_538;
                                                  func_0x000107c615f0();
                                                  func_0x000107c4e090();
                                                  func_0x000107c61180();
                                                  lVar21 = lVar15;
                                                  func_0x000107c3eea8();
                                                  func_0x000107c61180();
                                                  func_0x000107c61170(lVar15);
                                                  lVar15 = lVar21;
                                                  func_0x000107c5ee30();
                                                  func_0x000107c61170(lVar21);
                                                  func_0x000107c610f8(PTR_PTR_1126b25c0);
                                                  func_0x00010006c00c(lVar15,ppuVar11);
                                                  lVar21 = lVar15;
                                                  func_0x0001010282b0(lVar15,ppuVar11);
                                                  if (lVar21 == 0) {
                                                    func_0x00010006c090(lVar15,ppuVar11);
                                                    func_0x000102f00d0c(puVar2,lStack_538,param_2,
                                                                        lVar4,uVar19,param_1,
                                                                        FUN_102ef5634,0);
                                                    goto code_r0x000107c61574;
                                                  }
                                                  func_0x000107c61614(auStack_260,lVar4);
                                                  ppuVar11 = &puStack_130;
                                                  FUN_102f04d58(param_1);
                                                  func_0x000107c6157c(puVar2);
                                                  func_0x000107c61434(uVar19);
                                                  func_0x000107c61174();
                                                  func_0x000107c615f0(lStack_538);
                                                  FUN_102ed8938();
                                                  if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                                                    func_0x000107c610f8(PTR_PTR_1126b25c0);
                                                    lStack_520 = lVar21;
                                                    func_0x0001010282b0(lVar21,ppuVar11);
                                                    func_0x0001000b44c0(lVar21,ppuVar11);
                                                  }
                                                  else {
                                                    lStack_520 = 0;
                                                  }
                                                  puVar12 = auStack_278;
                                                  func_0x000107c61428(auStack_260,puVar12,0,0);
                                                  puVar6 = auStack_260;
                                                  func_0x000107c61618();
                                                  if (puVar6 != (undefined1 *)0x0) {
                                                    if (lStack_520 != 0) {
                                                      func_0x000107c41214();
                                                      func_0x000107c61180();
                                                      if (lStack_520 != 0) {
                                                        lVar15 = lStack_520;
                                                        func_0x000107c5ee30();
                                                        func_0x000107c61170(lStack_520);
                                                        puVar9 = &UNK_1105e7670;
                                                        func_0x000107c613fc(&UNK_1105e7670,0xe8,7);
                                                        uVar8 = param_1[0xc];
                                                        uVar23 = param_1[0xf];
                                                        uVar22 = param_1[0xe];
                                                        *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                                                        *(ulong *)(puVar9 + 0x98) = uVar8;
                                                        *(ulong *)(puVar9 + 0xb0) = uVar23;
                                                        *(ulong *)(puVar9 + 0xa8) = uVar22;
                                                        uVar8 = param_1[0x10];
                                                        *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                                                        *(ulong *)(puVar9 + 0xb8) = uVar8;
                                                        uVar8 = param_1[4];
                                                        uVar23 = param_1[7];
                                                        uVar22 = param_1[6];
                                                        *(ulong *)(puVar9 + 0x60) = param_1[5];
                                                        *(ulong *)(puVar9 + 0x58) = uVar8;
                                                        *(ulong *)(puVar9 + 0x70) = uVar23;
                                                        *(ulong *)(puVar9 + 0x68) = uVar22;
                                                        uVar8 = param_1[8];
                                                        uVar23 = param_1[0xb];
                                                        uVar22 = param_1[10];
                                                        *(ulong *)(puVar9 + 0x80) = param_1[9];
                                                        *(ulong *)(puVar9 + 0x78) = uVar8;
                                                        *(ulong *)(puVar9 + 0x90) = uVar23;
                                                        *(ulong *)(puVar9 + 0x88) = uVar22;
                                                        uVar8 = *param_1;
                                                        uVar23 = param_1[3];
                                                        uVar22 = param_1[2];
                                                        *(ulong *)(puVar9 + 0x40) = param_1[1];
                                                        *(ulong *)(puVar9 + 0x38) = uVar8;
                                                        *(undefined **)(puVar9 + 0x10) = puVar2;
                                                        *(long *)(puVar9 + 0x18) = lStack_538;
                                                        *(long *)(puVar9 + 0x20) = param_2;
                                                        *(long *)(puVar9 + 0x28) = lVar4;
                                                        *(ulong *)(puVar9 + 0x30) = uVar19;
                                                        uVar8 = param_1[0x12];
                                                        *(ulong *)(puVar9 + 0x50) = uVar23;
                                                        *(ulong *)(puVar9 + 0x48) = uVar22;
                                                        *(ulong *)(puVar9 + 200) = uVar8;
                                                        *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                                                        *(undefined8 *)(puVar9 + 0xd8) = 0;
                                                        *(undefined8 *)(puVar9 + 0xe0) = 9;
                                                        puVar17 = *(undefined **)
                                                                   (puVar6 + _DAT_112f27e60);
                                                        FUN_102f04d58(param_1,&puStack_130);
                                                        func_0x000107c6157c(puVar2);
                                                        func_0x000107c61434(uVar19);
                                                        func_0x000107c61174();
                                                        func_0x000107c615f0(lStack_538);
                                                        func_0x000107c5dbd4();
                                                        func_0x000107c61180();
                                                        puVar10 = puVar17;
                                                        func_0x000107c5c734();
                                                        func_0x000107c61180();
                                                        func_0x000107c61170();
                                                        puVar16 = 
                                                  PTR___swiftEmptyArrayStorage_11034f1c8;
                                                  if (puVar10 != (undefined *)0x0) {
                                                    puVar2 = &UNK_1105e7710;
                                                    func_0x000107c613fc(&UNK_1105e7710,0x30,7);
                                                    *(undefined8 *)(puVar2 + 0x10) = 0x102f09a28;
                                                    *(undefined **)(puVar2 + 0x18) = puVar9;
                                                    *(long *)(puVar2 + 0x20) = lVar15;
                                                    *(undefined1 **)(puVar2 + 0x28) = puVar12;
                                                    uStack_110 = 0x102f09990;
                                                    puStack_130 = 
                                                  PTR___NSConcreteStackBlock_11034bd00;
                                                  uStack_128 = 0x42000000;
                                                  puStack_120 = &UNK_100f1c768;
                                                  puStack_118 = &UNK_1105e7728;
                                                  puStack_108 = puVar2;
                                                  func_0x000107c60bc4(&puStack_130);
                                                  func_0x000107c6157c(puVar9);
                                                  func_0x00010006c00c(lVar15,puVar12);
                                                  goto code_r0x000107c61574;
                                                  }
                                                  if (uVar13 == 0) {
LAB_102efa248:
                                                    func_0x00010273ca1c();
                                                    func_0x000107c613fc();
                                                    *(undefined8 *)(puVar17 + 0x18) = 3;
                                                    *(undefined8 *)(puVar17 + 0x10) = 1;
                                                    *(long *)(puVar17 + 0x20) = lStack_538;
                                                    func_0x000107c615f0();
                                                    puVar16 = puVar17;
                                                  }
                                                  else {
                                                    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                                    func_0x000107c60480();
                                                    puVar17 = (undefined *)0x0;
                                                    if (puVar9 == (undefined *)0x0)
                                                    goto LAB_102efa248;
                                                  }
                                                  func_0x000107c61428(puVar14,&puStack_130,0x21,0);
                                                  FUN_102f0240c(puVar16);
                                                  func_0x000107c614a8(&puStack_130);
                                                  if (param_2 == *(long *)(param_3 + lVar18)) {
                                                    if (uVar20 == 0) {
                                                      uVar20 = *(ulong *)((uVar19 & 
                                                  0xffffffffffffff8) + 0x10);
                                                  }
                                                  else {
                                                    uVar20 = uVar19 & 0xffffffffffffff8;
                                                    if ((uVar19 & 0x8000000000000000) != 0) {
                                                      uVar20 = uVar19;
                                                    }
                                                    func_0x000107c60480();
                                                  }
                                                  if ((long)uVar20 < 0xb) {
                                                    func_0x0001000c10c0("processBundle(at:)");
                                                    func_0x000107c61180();
                                                    puVar9 = &UNK_1105e5fa0;
                                                    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                                                    func_0x000107c61614(puVar9 + 0x10,lVar4);
                                                    puVar17 = &UNK_1105e7698;
                                                    func_0x000107c613fc(&UNK_1105e7698,0xc0,7);
                                                    *(undefined **)(puVar17 + 0x10) = puVar9;
                                                    *(long *)(puVar17 + 0x18) = param_2;
                                                    uVar19 = param_1[0xc];
                                                    uVar3 = param_1[0xf];
                                                    uVar20 = param_1[0xe];
                                                    *(ulong *)(puVar17 + 0x88) = param_1[0xd];
                                                    *(ulong *)(puVar17 + 0x80) = uVar19;
                                                    *(ulong *)(puVar17 + 0x98) = uVar3;
                                                    *(ulong *)(puVar17 + 0x90) = uVar20;
                                                    uVar19 = param_1[0x10];
                                                    *(ulong *)(puVar17 + 0xa8) = param_1[0x11];
                                                    *(ulong *)(puVar17 + 0xa0) = uVar19;
                                                    uVar19 = param_1[0x12];
                                                    uVar20 = param_1[4];
                                                    uVar13 = param_1[7];
                                                    uVar3 = param_1[6];
                                                    *(ulong *)(puVar17 + 0x48) = param_1[5];
                                                    *(ulong *)(puVar17 + 0x40) = uVar20;
                                                    *(ulong *)(puVar17 + 0x58) = uVar13;
                                                    *(ulong *)(puVar17 + 0x50) = uVar3;
                                                    uVar20 = param_1[8];
                                                    uVar13 = param_1[0xb];
                                                    uVar3 = param_1[10];
                                                    *(ulong *)(puVar17 + 0x68) = param_1[9];
                                                    *(ulong *)(puVar17 + 0x60) = uVar20;
                                                    *(ulong *)(puVar17 + 0x78) = uVar13;
                                                    *(ulong *)(puVar17 + 0x70) = uVar3;
                                                    uVar20 = *param_1;
                                                    uVar13 = param_1[3];
                                                    uVar3 = param_1[2];
                                                    *(ulong *)(puVar17 + 0x28) = param_1[1];
                                                    *(ulong *)(puVar17 + 0x20) = uVar20;
                                                    *(ulong *)(puVar17 + 0x38) = uVar13;
                                                    *(ulong *)(puVar17 + 0x30) = uVar3;
                                                    *(ulong *)(puVar17 + 0xb0) = uVar19;
                                                    *(undefined **)(puVar17 + 0xb8) = puVar2;
                                                    uStack_78 = 0x102f09b74;
                                                    puStack_98 = 
                                                  PTR___NSConcreteStackBlock_11034bd00;
                                                  uStack_90 = 0x42000000;
                                                  puStack_88 = &UNK_1000f6b44;
                                                  puStack_80 = &UNK_1105e76b0;
                                                  puStack_70 = puVar17;
                                                  func_0x000107c60bc4(&puStack_98);
                                                  FUN_102f04d58(param_1,&puStack_130);
                                                  func_0x000107c6157c(puVar2);
                                                  }
                                                  else {
                                                    if (uVar3 == 0) {
                                                      if (*(ulong *)((uVar19 & 0xffffffffffffff8) +
                                                                    0x10) < 0xb) {
                    /* WARNING: Does not return */
                                                        pcVar1 = (code *)SoftwareBreakpoint(1,
                                                  0x102efa5f8);
                                                  (*pcVar1)();
                                                  }
                                                  lStack_2a8 = *(long *)(uVar19 + 0x70);
                                                  func_0x000107c615f0();
                                                  }
                                                  else {
                                                    lStack_2a8 = 10;
                                                    FUN_10274d138(10,uVar19);
                                                  }
                                                  puVar9 = &UNK_1105e76e8;
                                                  func_0x000107c613fc(&UNK_1105e76e8,0xe8,7);
                                                  uVar20 = param_1[0xc];
                                                  uVar13 = param_1[0xf];
                                                  uVar3 = param_1[0xe];
                                                  *(ulong *)(puVar9 + 0xa0) = param_1[0xd];
                                                  *(ulong *)(puVar9 + 0x98) = uVar20;
                                                  *(ulong *)(puVar9 + 0xb0) = uVar13;
                                                  *(ulong *)(puVar9 + 0xa8) = uVar3;
                                                  uVar20 = param_1[0x10];
                                                  *(ulong *)(puVar9 + 0xc0) = param_1[0x11];
                                                  *(ulong *)(puVar9 + 0xb8) = uVar20;
                                                  uVar20 = param_1[4];
                                                  uVar13 = param_1[7];
                                                  uVar3 = param_1[6];
                                                  *(ulong *)(puVar9 + 0x60) = param_1[5];
                                                  *(ulong *)(puVar9 + 0x58) = uVar20;
                                                  *(ulong *)(puVar9 + 0x70) = uVar13;
                                                  *(ulong *)(puVar9 + 0x68) = uVar3;
                                                  uVar20 = param_1[8];
                                                  uVar13 = param_1[0xb];
                                                  uVar3 = param_1[10];
                                                  *(ulong *)(puVar9 + 0x80) = param_1[9];
                                                  *(ulong *)(puVar9 + 0x78) = uVar20;
                                                  *(ulong *)(puVar9 + 0x90) = uVar13;
                                                  *(ulong *)(puVar9 + 0x88) = uVar3;
                                                  uVar20 = *param_1;
                                                  uVar13 = param_1[3];
                                                  uVar3 = param_1[2];
                                                  *(ulong *)(puVar9 + 0x40) = param_1[1];
                                                  *(ulong *)(puVar9 + 0x38) = uVar20;
                                                  *(undefined **)(puVar9 + 0x10) = puVar2;
                                                  *(long *)(puVar9 + 0x18) = lStack_2a8;
                                                  *(long *)(puVar9 + 0x20) = param_2;
                                                  *(long *)(puVar9 + 0x28) = lVar4;
                                                  *(ulong *)(puVar9 + 0x30) = uVar19;
                                                  uVar20 = param_1[0x12];
                                                  *(ulong *)(puVar9 + 0x50) = uVar13;
                                                  *(ulong *)(puVar9 + 0x48) = uVar3;
                                                  *(ulong *)(puVar9 + 200) = uVar20;
                                                  *(code **)(puVar9 + 0xd0) = FUN_102ef5634;
                                                  *(undefined8 *)(puVar9 + 0xd8) = 0;
                                                  *(undefined8 *)(puVar9 + 0xe0) = 10;
                                                  ppuVar11 = &puStack_130;
                                                  FUN_102f04d58();
                                                  func_0x000107c6157c(puVar2);
                                                  func_0x000107c61434(uVar19);
                                                  func_0x000107c61174(lVar4);
                                                  lVar18 = lStack_2a8;
                                                  func_0x000107c615f0();
                                                  func_0x000107c4e090();
                                                  func_0x000107c61180();
                                                  lVar15 = lVar18;
                                                  func_0x000107c3eea8();
                                                  func_0x000107c61180();
                                                  func_0x000107c61170(lVar18);
                                                  lVar18 = lVar15;
                                                  func_0x000107c5ee30();
                                                  func_0x000107c61170(lVar15);
                                                  func_0x000107c610f8(PTR_PTR_1126b25c0);
                                                  func_0x00010006c00c(lVar18,ppuVar11);
                                                  lVar15 = lVar18;
                                                  func_0x0001010282b0(lVar18,ppuVar11);
                                                  if (lVar15 == 0) {
                                                    func_0x00010006c090(lVar18,ppuVar11);
                                                    func_0x000102f00d0c(puVar2,lStack_2a8,param_2,
                                                                        lVar4,uVar19,param_1,
                                                                        FUN_102ef5634,0);
                                                  }
                                                  else {
                                                    puVar17 = &UNK_1105e5fa0;
                                                    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
                                                    func_0x000107c61614(puVar17 + 0x10,lVar4);
                                                    ppuVar11 = &puStack_130;
                                                    FUN_102f04d58(param_1);
                                                    func_0x000107c6157c(puVar2);
                                                    func_0x000107c61434(uVar19);
                                                    func_0x000107c61174(lVar4);
                                                    func_0x000107c615f0(lStack_2a8);
                                                    func_0x000107c6157c(puVar9);
                                                    FUN_102ed8938(lVar15);
                                                    if ((ulong)ppuVar11 >> 0x3c < 0xf) {
                                                      func_0x000107c610f8(PTR_PTR_1126b25c0);
                                                      lVar18 = lVar15;
                                                      func_0x0001010282b0(lVar15,ppuVar11);
                                                      func_0x0001000b44c0(lVar15,ppuVar11);
                                                    }
                                                    else {
                                                      lVar18 = 0;
                                                    }
                                                    func_0x000102f0125c(lVar18,puVar17,0x102f09b34,
                                                                        puVar9,puVar2,lStack_2a8,
                                                                        param_2,lVar4);
                                                  }
                                                  }
                                                  }
                                                  goto code_r0x000107c61574;
                                                  }
                                                  }
                                                  func_0x000107c61170(puVar6);
                                                  }
                                                  func_0x000102f00d0c(puVar2,lStack_538,param_2,
                                                                      lVar4,uVar19,param_1,
                                                                      FUN_102ef5634,0);
                                                  goto code_r0x000107c61574;
                                                  }
                                                  }
                                                  func_0x000107c61170(puVar6);
                                                  }
                                                  func_0x000102f00d0c(puVar2,lStack_530,param_2,
                                                                      lVar4,uVar19,param_1,
                                                                      FUN_102ef5634,0);
                                                  goto code_r0x000107c61574;
                                                }
                                              }
                                              func_0x000107c61170(puVar6);
                                            }
                                            func_0x000102f00d0c(puVar2,lStack_528,param_2,lVar4,
                                                                uVar19,param_1,FUN_102ef5634,0);
                                            goto code_r0x000107c61574;
                                          }
                                        }
                                        func_0x000107c61170(puVar6);
                                      }
                                      func_0x000102f00d0c(puVar2,lStack_4a0,param_2,lVar4,uVar19,
                                                          param_1,FUN_102ef5634,0);
                                      goto code_r0x000107c61574;
                                    }
                                  }
                                  func_0x000107c61170(puVar6);
                                }
                                func_0x000102f00d0c(puVar2,lStack_450,param_2,lVar4,uVar19,param_1,
                                                    FUN_102ef5634,0);
                                goto code_r0x000107c61574;
                              }
                            }
                            func_0x000107c61170(puVar6);
                          }
                          func_0x000102f00d0c(puVar2,lStack_400,param_2,lVar4,uVar19,param_1,
                                              FUN_102ef5634,0);
                          goto code_r0x000107c61574;
                        }
                      }
                      func_0x000107c61170(puVar6);
                    }
                    func_0x000102f00d0c(puVar2,lStack_3b0,param_2,lVar4,uVar19,param_1,FUN_102ef5634
                                        ,0);
                    goto code_r0x000107c61574;
                  }
                }
                func_0x000107c61170(puVar6);
              }
              func_0x000102f00d0c(puVar2,lVar15,param_2,lVar4,uVar19,param_1,FUN_102ef5634,0);
              goto code_r0x000107c61574;
            }
          }
          func_0x000107c61170(puVar6);
        }
        func_0x000102f00d0c(puVar2,lVar15,param_2,lVar4,uVar19,param_1,FUN_102ef5634,0);
        goto code_r0x000107c61574;
      }
    }
    func_0x000107c61170(puVar6);
  }
  func_0x000102f00d0c(puVar2,lVar15,param_2,lVar4,uVar19,param_1,FUN_102ef5634,0);
  func_0x000107c615e8(lVar15);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 102efaa78; end: 102efaf5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102efaa78(double param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  double dVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  puVar12 = auStack_88;
  func_0x000107c61428(param_5 + 0x10,puVar12,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 == 0) {
    (*param_3)();
  }
  else {
    puVar3 = param_6;
    func_0x000107c51cc8();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3e3b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar5 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    lVar6 = param_5 + _DAT_112f27fb0;
    uVar1 = *(undefined8 *)(lVar6 + 0x18);
    lVar15 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,uVar1);
    (**(code **)(lVar15 + 8))(param_7,uVar1,lVar15);
    lVar15 = *(long *)(param_5 + _DAT_112f27e60);
    puVar3 = &UNK_1105e7170;
    uVar13 = 0x20;
    func_0x000107c613fc(&UNK_1105e7170,0x20,7);
    *(code **)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    func_0x000107c6157c(param_4);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar6 = lVar15;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    if (lVar6 == 0) {
      func_0x000107c615e8(param_7);
      func_0x000107c61574(puVar3);
      func_0x00010006c090(puVar5,puVar12);
    }
    else {
      FUN_102ed8938();
      if (uVar13 >> 0x3c < 0xf) {
        puVar4 = param_6;
        func_0x000107c51cc8(param_6);
        func_0x000107c61180();
        func_0x000107c3e400(&puStack_b8);
        func_0x000107c61170(puVar4);
        func_0x000107c60a3c(&puStack_b8);
        dVar16 = 0.0;
        if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
          param_1 = param_1 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf54);
            (*pcVar2)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf58);
            (*pcVar2)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102efaf5c);
            (*pcVar2)();
          }
          dVar16 = (double)((long)param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU));
        }
        puVar4 = param_6;
        func_0x000107c51cc8();
        func_0x000107c61180();
        puVar7 = puVar4;
        func_0x000107c5cda4();
        func_0x000107c61170(puVar4);
        puVar4 = PTR___ss6UInt64VN_11034f048;
        puVar14 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        puStack_b8 = puVar7;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        puVar7 = param_6;
        puVar9 = puVar14;
        func_0x000107c5cdb0();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c5ce2c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        puVar7 = puVar9;
        if (puVar8 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
          func_0x000107c5faec(0);
          puVar7 = puVar9;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar9);
        }
        func_0x000107c5cdb0();
        func_0x000107c61180();
        puVar9 = param_6;
        func_0x000107c3e1a4();
        func_0x000107c61180();
        func_0x000107c61170(param_6);
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          func_0x000107c5faec(0);
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar7);
        }
        puVar7 = PTR_PTR_1126ac798;
        func_0x000107c610f8();
        puVar10 = puVar5;
        func_0x000107c5ee20(puVar5,puVar12);
        func_0x000107c5fadc(puVar4,puVar14);
        func_0x000107c6142c(puVar14);
        func_0x000107c45830(0,dVar16);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        puVar4 = &UNK_1105e7198;
        func_0x000107c613fc(&UNK_1105e7198,0x40,7);
        *(undefined8 *)(puVar4 + 0x10) = param_2;
        *(ulong *)(puVar4 + 0x18) = uVar13;
        *(undefined8 *)(puVar4 + 0x20) = param_7;
        *(undefined **)(puVar4 + 0x28) = puVar7;
        *(code **)(puVar4 + 0x30) = FUN_102f091a0;
        *(undefined **)(puVar4 + 0x38) = puVar3;
        pcStack_98 = FUN_102f091c0;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100f1c768;
        puStack_a0 = &UNK_1105e71b0;
        ppuVar11 = &puStack_b8;
        puStack_90 = puVar4;
        func_0x000107c60bc4(ppuVar11);
        puVar4 = puStack_90;
        func_0x000100de78a0(param_2,uVar13);
        func_0x000107c615f0(param_7);
        func_0x000107c61174(puVar7);
        func_0x000107c6157c(puVar3);
        func_0x000107c61574(puVar4);
        func_0x000107c440d8(lVar6);
        func_0x000107c615e8(param_7);
        func_0x000107c61574(puVar3);
        func_0x00010006c090(puVar5,puVar12);
        func_0x000107c61170(param_5);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(puVar7);
        func_0x0001000b44c0(param_2,uVar13);
        func_0x000107c615e8(lVar6);
        return;
      }
      func_0x000107c615e8(param_7);
      func_0x000107c61574(puVar3);
      func_0x00010006c090(puVar5,puVar12);
      func_0x000107c615e8(lVar6);
    }
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 102efaf5c; end: 102efb013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102efaf5c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (param_2 == *(long *)(param_1 + _DAT_112f27fd8)) {
      func_0x000107c61428(param_4 + 0x10,auStack_60,0,0);
      uVar1 = *(undefined8 *)(param_4 + 0x10);
      func_0x000107c61434(uVar1);
      FUN_102efb014(param_3,uVar1);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 102efb014; end: 102f01fe7;  */

/* WARNING: Removing unreachable block (ram,0x000102efb0e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102efb014(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lStack_808;
  undefined1 auStack_7f8 [152];
  undefined *puStack_760;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  ulong uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined3 uStack_498;
  undefined5 uStack_495;
  undefined3 uStack_490;
  undefined5 uStack_48d;
  undefined3 uStack_488;
  undefined5 uStack_485;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 uStack_470;
  undefined7 uStack_46f;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined3 uStack_400;
  undefined5 uStack_3fd;
  undefined3 uStack_3f8;
  undefined8 uStack_3f5;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [32];
  undefined1 auStack_398 [24];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_80;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f27e80);
  func_0x000107c61428(puVar1,auStack_398,1,0);
  uStack_a8 = puVar1[0xd];
  uStack_b0 = puVar1[0xc];
  uStack_98 = puVar1[0xf];
  uStack_a0 = puVar1[0xe];
  uStack_88 = puVar1[0x11];
  uStack_90 = puVar1[0x10];
  uStack_80 = puVar1[0x12];
  uStack_e8 = puVar1[5];
  uStack_f0 = puVar1[4];
  lVar21 = puVar1[7];
  uStack_e0 = puVar1[6];
  uStack_c8 = puVar1[9];
  uStack_d0 = puVar1[8];
  uStack_b8 = puVar1[0xb];
  uStack_c0 = puVar1[10];
  uStack_108 = puVar1[1];
  uStack_110 = *puVar1;
  uStack_f8 = puVar1[3];
  uStack_100 = puVar1[2];
  iVar4 = (int)&uStack_110;
  lStack_d8 = lVar21;
  func_0x000102f05844();
  if ((iVar4 != 1) && (lVar21 == 0)) {
    uVar17 = *(undefined8 *)(param_1 + 0x10);
    FUN_102f059cc(&uStack_110,&puStack_1f0,0x112f27e88,&UNK_10db63a18);
    func_0x000107c615f0(uVar17);
    puVar5 = param_2;
    FUN_102f04958(param_2,uVar17);
    lVar21 = _DAT_112f27e48;
    uVar13 = *(ulong *)(param_1 + 8);
    func_0x000107c61428(unaff_x20 + _DAT_112f27e48,auStack_3b8,0,0);
    lVar21 = unaff_x20 + lVar21;
    func_0x000107c61618();
    if (lVar21 == 0) {
      lStack_808 = 0;
    }
    else {
      lStack_808 = lVar21;
      func_0x000107c4adfc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar21);
    }
    puStack_290 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(puVar5);
    func_0x000102f031f8(0,0,0);
    lVar21 = _DAT_112f27e78;
    uVar14 = *(ulong *)(puVar5 + 0x10);
    if (uVar14 != 0) {
      uVar19 = 0;
      puVar11 = (undefined8 *)(puVar5 + 0x20);
      uVar20 = uVar13 & 0xffffffffffffff8;
      uVar18 = uVar20;
      if (0x7fffffffffffffff < uVar13) {
        uVar18 = uVar13;
      }
      do {
        puVar12 = puStack_290;
        if (*(ulong *)(puVar5 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102efba34);
          (*pcVar3)();
        }
        uStack_148 = puVar11[1];
        uStack_150 = *puVar11;
        uStack_138 = puVar11[3];
        uStack_140 = puVar11[2];
        uStack_130 = puVar11[4];
        uStack_11f = *(undefined8 *)((long)puVar11 + 0x31);
        uStack_120 = (undefined1)((ulong)*(undefined8 *)((long)puVar11 + 0x29) >> 0x38);
        uStack_128 = (undefined1)puVar11[5];
        uStack_127 = (undefined7)((ulong)puVar11[5] >> 8);
        if (uVar13 >> 0x3e == 0) {
          uVar6 = *(ulong *)(uVar20 + 0x10);
          if (uVar6 <= uVar19) goto LAB_102efb254;
LAB_102efb21c:
          if ((uVar13 & 0xc000000000000001) != 0) {
            FUN_102edda34(&uStack_150,&puStack_1f0);
            uVar6 = uVar19;
            goto LAB_102efb3e0;
          }
          if (*(ulong *)(uVar20 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102efba38);
            (*pcVar3)();
          }
          uVar6 = uVar13 + uVar19 * 8;
LAB_102efb26c:
          uVar6 = *(ulong *)(uVar6 + 0x20);
          FUN_102edda34(&uStack_150,&puStack_1f0);
          func_0x000107c6157c(uVar6);
LAB_102efb284:
          uVar16 = *(undefined1 *)(uVar6 + 0x61);
        }
        else {
          uVar6 = uVar18;
          func_0x000107c60480();
          if ((long)uVar19 < (long)uVar6) goto LAB_102efb21c;
          uVar6 = uVar18;
          func_0x000107c60480();
LAB_102efb254:
          if (uVar6 != 0) {
            if ((uVar13 & 0xc000000000000001) == 0) {
              uVar6 = uVar13;
              if (*(long *)(uVar20 + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102efba3c);
                (*pcVar3)();
              }
              goto LAB_102efb26c;
            }
            FUN_102edda34(&uStack_150,&puStack_1f0);
            uVar6 = 0;
LAB_102efb3e0:
            FUN_102f02a90(uVar6,uVar13);
            goto LAB_102efb284;
          }
          FUN_102edda34(&uStack_150,&puStack_1f0);
          uVar16 = 0;
          uVar6 = 0;
        }
        uVar7 = *(undefined8 *)(unaff_x20 + lVar21);
        func_0x000107c5c734(uVar7);
        func_0x000107c61180();
        puVar8 = &uStack_150;
        func_0x000102f0dd84(puVar8,uVar7,lStack_808,uVar16);
        func_0x000107c615e8(uVar7);
        if (uVar6 != 0) {
          uVar7 = puVar8[0xd];
          puVar8[0xd] = *(undefined8 *)(uVar6 + 0x68);
          func_0x000107c61174();
          func_0x000107c61170(uVar7);
          uVar9 = puVar8[2];
          func_0x000107c4008c(uVar9);
          func_0x000107c61180();
          uVar10 = *(undefined8 *)(uVar6 + 0x10);
          func_0x000107c4008c(uVar10);
          func_0x000107c61180();
          uVar7 = uVar10;
          func_0x000107c41844();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          func_0x000107c54044(uVar9);
          func_0x000107c61574(uVar6);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar7);
        }
        FUN_102edd9d4(&uStack_150);
        uVar6 = *(ulong *)(puVar12 + 0x10);
        puStack_290 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar6) {
          func_0x000102f031f8(1 < *(ulong *)(puVar12 + 0x18),uVar6 + 1,1);
        }
        uVar19 = uVar19 + 1;
        *(ulong *)(puStack_290 + 0x10) = uVar6 + 1;
        *(undefined8 **)(puStack_290 + uVar6 * 8 + 0x20) = puVar8;
        puVar11 = puVar11 + 8;
      } while (uVar14 != uVar19);
    }
    puVar12 = puStack_290;
    func_0x000107c6142c(puVar5);
    if (((long)puVar12 < 0) || (((ulong)puVar12 >> 0x3e & 1) != 0)) {
      puVar15 = puVar12;
      func_0x000107c60480();
    }
    else {
      puVar15 = *(undefined **)(puVar12 + 0x10);
    }
    if (puVar15 == (undefined *)0x0) {
      func_0x000107c6142c(puVar5);
      func_0x000107c61574(puVar12);
      func_0x000107c615e8(uVar17);
      func_0x000107c615e8(lStack_808);
      FUN_102f080f0(&uStack_110,0x112f27e88,&UNK_10db63a18);
    }
    else {
      uStack_4d0 = *(undefined8 *)(param_1 + 0x18);
      uStack_4c8 = *(undefined8 *)(param_1 + 0x20);
      uStack_4c0 = *(undefined8 *)(param_1 + 0x28);
      uStack_4b8 = *(undefined8 *)(param_1 + 0x30);
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_48d = 0;
      uStack_488 = 0;
      uStack_495 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_470 = 0;
      uStack_460 = 0;
      uStack_468 = 0;
      uStack_458 = 0;
      uStack_3f5 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3fd = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_418 = 0;
      uStack_3d8 = 0;
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3c0 = 0;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      puStack_4e8 = param_2;
      puStack_4e0 = puVar12;
      uStack_4d8 = uVar17;
      puStack_450 = param_2;
      puStack_448 = puVar12;
      uStack_440 = uVar17;
      uStack_438 = uStack_4d0;
      uStack_430 = uStack_4c8;
      uStack_428 = uStack_4c0;
      uStack_420 = uStack_4b8;
      uStack_348 = uStack_4c0;
      uStack_340 = uStack_4c8;
      uStack_338 = uStack_4d0;
      func_0x000107c6157c();
      func_0x000107c61434(param_2);
      FUN_102f04d58(&puStack_4e8,&puStack_1f0);
      FUN_102f059cc(&uStack_338,&puStack_1f0,0x112f28020,&UNK_10db63a60);
      FUN_102f059cc(&uStack_340,&puStack_1f0,0x112f28028,&UNK_10db63a68);
      FUN_102f059cc(&uStack_348,&puStack_1f0,0x112f28030,&UNK_10db63a70);
      func_0x000102f04d94(&puStack_450);
      uVar2 = uStack_478;
      uVar10 = uStack_4a0;
      uVar9 = uStack_4a8;
      uVar7 = uStack_4b0;
      uVar17 = CONCAT53(uStack_48d,uStack_490);
      uStack_520._0_3_ = uStack_488;
      uStack_520._3_5_ = uStack_485;
      uStack_508._0_1_ = uStack_470;
      uStack_508._1_7_ = uStack_46f;
      uStack_518 = uStack_480;
      uStack_510 = uStack_478;
      uStack_4f8 = uStack_460;
      uStack_500 = uStack_468;
      uStack_558 = uStack_4c0;
      uStack_560 = uStack_4c8;
      uStack_550 = uStack_4b8;
      uStack_528 = CONCAT53(uStack_48d,uStack_490);
      uStack_530 = CONCAT53(uStack_495,uStack_498);
      uStack_538 = uStack_4a0;
      uStack_540 = uStack_4a8;
      puStack_578 = puStack_4e0;
      puStack_580 = puStack_4e8;
      uStack_568 = uStack_4d0;
      uStack_570 = uStack_4d8;
      uStack_548 = *(undefined8 *)(param_1 + 0x38);
      uStack_4f0 = uStack_458;
      uStack_350 = uStack_548;
      FUN_102f059cc(&uStack_350,&puStack_1f0,0x112dc3ff0,&UNK_10d981690);
      func_0x000107c615e8(uVar7);
      uStack_540 = *(undefined8 *)(param_1 + 0x40);
      uStack_358 = uStack_540;
      FUN_102f059cc(&uStack_358,&puStack_1f0,0x112f28038,&UNK_10db63a80);
      func_0x000107c61170(uVar9);
      uStack_538 = *(undefined8 *)(param_1 + 0x48);
      uStack_360 = uStack_538;
      FUN_102f059cc(&uStack_360,&puStack_1f0,0x112f28040,&UNK_10db63a88);
      func_0x000107c6142c(uVar10);
      uStack_528 = *(undefined8 *)(param_1 + 0x58);
      uStack_530 = *(undefined8 *)(param_1 + 0x50);
      uStack_370 = uStack_530;
      uStack_368 = uStack_528;
      FUN_102f059cc(&uStack_370,&puStack_1f0,0x112f28048,&UNK_10db63a90);
      func_0x000107c6142c(uVar17);
      uStack_520 = CONCAT53(uStack_520._3_5_,*(undefined3 *)(param_1 + 0x60));
      uStack_510 = *(undefined8 *)(param_1 + 0x70);
      uStack_518 = *(undefined8 *)(param_1 + 0x68);
      uStack_380 = uStack_518;
      uStack_378 = uStack_510;
      FUN_102f059cc(&uStack_380,&puStack_1f0,0x112d35ff8,&UNK_10d900cd0);
      func_0x000107c6142c(uVar2);
      uStack_508 = CONCAT71(uStack_508._1_7_,*(undefined1 *)(param_1 + 0x78));
      uStack_160 = uStack_4f0;
      uStack_1c8 = uStack_558;
      uStack_1d0 = uStack_560;
      uStack_1b8 = uStack_548;
      uStack_1c0 = uStack_550;
      uStack_1a8 = uStack_538;
      uStack_1b0 = uStack_540;
      uStack_198 = uStack_528;
      uStack_1a0 = uStack_530;
      puStack_1e8 = puStack_578;
      puStack_1f0 = puStack_580;
      uStack_1d8 = uStack_568;
      uStack_1e0 = uStack_570;
      uStack_188 = uStack_518;
      uStack_190 = uStack_520;
      uStack_178 = uStack_508;
      uStack_180 = uStack_510;
      uStack_168 = uStack_4f8;
      uStack_170 = uStack_500;
      FUN_102ef05f8(param_1,&puStack_1f0);
      puVar11 = puVar1;
      func_0x000102f05844();
      if ((int)puVar11 != 1) {
        uVar13 = puVar1[1];
        if (uVar13 >> 0x3e == 0) {
          uVar14 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar13 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uVar14 = uVar13;
          }
          func_0x000107c60480();
        }
        func_0x000107c61434(uVar13);
        if (uVar14 != 0) {
          uVar19 = 0;
          do {
            if ((uVar13 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102efba40);
                (*pcVar3)();
              }
              uVar18 = *(ulong *)(uVar13 + uVar19 * 8 + 0x20);
              func_0x000107c6157c(uVar18);
            }
            else {
              uVar18 = uVar19;
              FUN_102f02a90(uVar19,uVar13);
            }
            if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102efb7d4);
              (*pcVar3)();
            }
            uVar20 = uVar19 + 1;
            uVar17 = 0x112f27e30;
            func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
            func_0x000100087bd4(&puStack_290,0x102f09af4,uVar18,uVar17);
            puVar12 = puStack_290;
            func_0x000107c3f474(puStack_290);
            func_0x000107c61574(uVar18);
            func_0x000107c61170(puVar12);
            uVar19 = uVar19 + 1;
          } while (uVar20 != uVar14);
        }
        func_0x000107c6142c(uVar13);
      }
      uVar17 = uStack_570;
      uStack_6f8 = uStack_518;
      uStack_700 = uStack_520;
      uStack_6e8 = uStack_508;
      uStack_6f0 = uStack_510;
      uStack_6d8 = uStack_4f8;
      uStack_6e0 = uStack_500;
      uStack_738 = uStack_558;
      uStack_740 = uStack_560;
      uStack_728 = uStack_548;
      uStack_730 = uStack_550;
      uStack_718 = uStack_538;
      uStack_720 = uStack_540;
      uStack_708 = uStack_528;
      uStack_710 = uStack_530;
      puStack_758 = puStack_578;
      puStack_760 = puStack_580;
      uStack_748 = uStack_568;
      uStack_750 = uStack_570;
      uStack_658 = uStack_518;
      uStack_660 = uStack_520;
      uStack_648 = uStack_508;
      uStack_650 = uStack_510;
      uStack_638 = uStack_4f8;
      uStack_640 = uStack_500;
      uStack_698 = uStack_558;
      uStack_6a0 = uStack_560;
      uStack_688 = uStack_548;
      uStack_690 = uStack_550;
      uStack_678 = uStack_538;
      uStack_680 = uStack_540;
      uStack_668 = uStack_528;
      uStack_670 = uStack_530;
      uStack_6d0 = uStack_4f0;
      uStack_630 = uStack_4f0;
      puStack_6b8 = puStack_578;
      puStack_6c0 = puStack_580;
      uStack_6a8 = uStack_568;
      uStack_6b0 = uStack_570;
      FUN_102f04dc8(&puStack_6c0);
      uStack_5b8 = puVar1[0xd];
      uStack_5c0 = puVar1[0xc];
      uStack_5a8 = puVar1[0xf];
      uStack_5b0 = puVar1[0xe];
      uStack_598 = puVar1[0x11];
      uStack_5a0 = puVar1[0x10];
      uStack_590 = puVar1[0x12];
      uStack_5f8 = puVar1[5];
      uStack_600 = puVar1[4];
      uStack_5e8 = puVar1[7];
      uStack_5f0 = puVar1[6];
      uStack_5d8 = puVar1[9];
      uStack_5e0 = puVar1[8];
      uStack_5c8 = puVar1[0xb];
      uStack_5d0 = puVar1[10];
      uStack_618 = puVar1[1];
      uStack_620 = *puVar1;
      uStack_608 = puVar1[3];
      uStack_610 = puVar1[2];
      puVar1[0xd] = uStack_658;
      puVar1[0xc] = uStack_660;
      puVar1[0xf] = uStack_648;
      puVar1[0xe] = uStack_650;
      puVar1[0x11] = uStack_638;
      puVar1[0x10] = uStack_640;
      puVar1[0x12] = uStack_630;
      puVar1[5] = uStack_698;
      puVar1[4] = uStack_6a0;
      puVar1[7] = uStack_688;
      puVar1[6] = uStack_690;
      puVar1[9] = uStack_678;
      puVar1[8] = uStack_680;
      puVar1[0xb] = uStack_668;
      puVar1[10] = uStack_670;
      puVar1[1] = puStack_6b8;
      *puVar1 = puStack_6c0;
      puVar1[3] = uStack_6a8;
      puVar1[2] = uStack_6b0;
      FUN_102f04d58(&puStack_760,&puStack_290);
      FUN_102f080f0(&uStack_620,0x112f27e88,&UNK_10db63a18);
      iVar4 = (int)*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f27e90) + _DAT_113077160);
      func_0x000107c51e2c();
      uVar7 = uStack_570;
      if ((iVar4 != 0) && ((uStack_6e8 & 1) == 0)) {
        uStack_2c8 = uStack_518;
        uStack_2d0 = uStack_520;
        uStack_2b8 = uStack_508;
        uStack_2c0 = uStack_510;
        uStack_2a8 = uStack_4f8;
        uStack_2b0 = uStack_500;
        uStack_308 = uStack_558;
        uStack_310 = uStack_560;
        uStack_2f8 = uStack_548;
        uStack_300 = uStack_550;
        uStack_2e8 = uStack_538;
        uStack_2f0 = uStack_540;
        uStack_2d8 = uStack_528;
        uStack_2e0 = uStack_530;
        puStack_328 = puStack_578;
        puStack_330 = puStack_580;
        uStack_318 = uStack_568;
        uStack_320 = uStack_570;
        uStack_228 = uStack_518;
        uStack_230 = uStack_520;
        uStack_218 = uStack_508;
        uStack_220 = uStack_510;
        uStack_208 = uStack_4f8;
        uStack_210 = uStack_500;
        uStack_268 = uStack_558;
        uStack_270 = uStack_560;
        uStack_258 = uStack_548;
        uStack_260 = uStack_550;
        uStack_248 = uStack_538;
        uStack_250 = uStack_540;
        uStack_238 = uStack_528;
        uStack_240 = uStack_530;
        uStack_2a0 = uStack_4f0;
        uStack_200 = uStack_4f0;
        puStack_288 = puStack_578;
        puStack_290 = puStack_580;
        uStack_278 = uStack_568;
        uStack_280 = uStack_570;
        puVar12 = &UNK_1105e7148;
        func_0x000107c613fc(&UNK_1105e7148,0xa8,7);
        *(undefined8 *)(puVar12 + 0x78) = uStack_518;
        *(undefined8 *)(puVar12 + 0x70) = uStack_520;
        *(ulong *)(puVar12 + 0x88) = uStack_508;
        *(undefined8 *)(puVar12 + 0x80) = uStack_510;
        *(undefined8 *)(puVar12 + 0x98) = uStack_4f8;
        *(undefined8 *)(puVar12 + 0x90) = uStack_500;
        *(undefined8 *)(puVar12 + 0xa0) = uStack_4f0;
        *(undefined8 *)(puVar12 + 0x38) = uStack_558;
        *(undefined8 *)(puVar12 + 0x30) = uStack_560;
        *(undefined8 *)(puVar12 + 0x48) = uStack_548;
        *(undefined8 *)(puVar12 + 0x40) = uStack_550;
        *(undefined8 *)(puVar12 + 0x58) = uStack_538;
        *(undefined8 *)(puVar12 + 0x50) = uStack_540;
        *(undefined8 *)(puVar12 + 0x68) = uStack_528;
        *(undefined8 *)(puVar12 + 0x60) = uStack_530;
        *(undefined **)(puVar12 + 0x18) = puStack_578;
        *(undefined **)(puVar12 + 0x10) = puStack_580;
        *(undefined8 *)(puVar12 + 0x28) = uStack_568;
        *(undefined8 *)(puVar12 + 0x20) = uStack_570;
        FUN_102f04d58(&puStack_290,auStack_7f8);
        FUN_102ee3a7c(&puStack_330,0,FUN_102f09198,puVar12);
        func_0x000107c61574(puVar12);
        uVar17 = uVar7;
      }
      FUN_102ef426c(puVar5,uVar17);
      func_0x000107c615e8(lStack_808);
      FUN_102f080f0(&uStack_110,0x112f27e88,&UNK_10db63a18);
      func_0x000107c6142c(puVar5);
      func_0x000102f04d94(&puStack_580);
    }
  }
  return;
}



/* Entry: 102f01fe8; end: 102f020df;  */

void FUN_102f01fe8(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102f020d4);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_102ed5e58();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f020d8);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f020dc);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_1105e5b40);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f020e0);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102f020e0; end: 102f0210f;  */

void FUN_102f020e0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102f03090(uVar2 + uVar4,1,FUN_102ed6068);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102f04218(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,0x112d715d8,
                  &PTR_PTR_1126b3560);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02408);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0240c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02404);
  (*pcVar1)();
}



/* Entry: 102f02110; end: 102f022ff;  */

void FUN_102f02110(ulong param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102f03090(uVar2 + uVar4,1,param_2);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    (*param_3)(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
               (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02204);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02208);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02200);
  (*pcVar1)();
}



/* Entry: 102f02300; end: 102f0240b;  */

void FUN_102f02300(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102f03090(uVar2 + uVar4,1,param_2);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102f04218(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,param_3,param_4)
    ;
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02408);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0240c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02404);
  (*pcVar1)();
}



/* Entry: 102f0240c; end: 102f024ff;  */

void FUN_102f0240c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102f03090(uVar2 + uVar4,1,FUN_102738e9c);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    func_0x000102f040a0(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                        (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f024fc);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02500);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f024f8);
  (*pcVar1)();
}



/* Entry: 102f02500; end: 102f0251b;  */

void FUN_102f02500(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102f03090(uVar2 + uVar4,1,FUN_102ed65b8);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102f04218(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,0x112f27bc8,
                  &PTR_PTR_1126b37e0);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02408);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0240c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02404);
  (*pcVar1)();
}



/* Entry: 102f0251c; end: 102f02643;  */

void FUN_102f0251c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_68;
  
  uVar3 = *(ulong *)(param_2 + 8);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0260c);
          (*pcVar1)();
        }
        uVar7 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c6157c(uVar7);
      }
      else {
        uVar7 = uVar5;
        FUN_102f02a90(uVar5,uVar3);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f02608);
        (*pcVar1)();
      }
      uVar6 = uVar5 + 1;
      uVar2 = 0x112f27e30;
      func_0x0001000285a8(0x112f27e30,&UNK_10db63930);
      func_0x000100087bd4(&uStack_68,0x102f09b08,uVar7,uVar2);
      uVar2 = uStack_68;
      func_0x000107c3f474(uStack_68);
      func_0x000107c61574(uVar7);
      func_0x000107c61170(uVar2);
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar4);
  }
  return;
}



/* Entry: 102f02644; end: 102f02837;  */

/* WARNING: Possible PIC construction at 0x000102f026d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f026f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f027a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f027e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f02800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f027ec) */
/* WARNING: Removing unreachable block (ram,0x000102f027a8) */
/* WARNING: Removing unreachable block (ram,0x000102f02820) */
/* WARNING: Removing unreachable block (ram,0x000102f02828) */
/* WARNING: Removing unreachable block (ram,0x000102f027b0) */
/* WARNING: Removing unreachable block (ram,0x000102f027b8) */
/* WARNING: Removing unreachable block (ram,0x000102f027c4) */
/* WARNING: Removing unreachable block (ram,0x000102f026fc) */
/* WARNING: Removing unreachable block (ram,0x000102f02764) */
/* WARNING: Removing unreachable block (ram,0x000102f02710) */
/* WARNING: Removing unreachable block (ram,0x000102f026dc) */
/* WARNING: Removing unreachable block (ram,0x000102f02804) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102f02644(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126d4cc0;
    func_0x000107c61168(PTR_PTR_1126d4cc0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1);
    func_0x000107c61180();
    puVar1 = PTR_PTR_1126bcf68;
    func_0x000107c610f8(PTR_PTR_1126bcf68);
    func_0x000107c5ee20(param_4,param_5);
    func_0x000107c45ae0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  (*param_2)(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102f02838; end: 102f02a2f;  */

void FUN_102f02838(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102f02a30; end: 102f02a47;  */

void FUN_102f02a30(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    uVar3 = param_1;
  }
  (*pcVar1)(uVar3);
  return;
}



/* Entry: 102f02a48; end: 102f02a83;  */

void FUN_102f02a48(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000102ee2dcc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined1 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102f02a84; end: 102f02a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f02a84(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar3 = &puStack_70;
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f27e70);
  if (lVar5 == 0) {
    (*pcVar1)();
  }
  else {
    puVar2 = &UNK_1105e8408;
    func_0x000107c613fc(&UNK_1105e8408,0x28,7);
    *(code **)(puVar2 + 0x10) = pcVar1;
    *(undefined8 *)(puVar2 + 0x18) = uVar4;
    *(undefined8 *)(puVar2 + 0x20) = param_1;
    uStack_50 = 0x102f09ba8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105e8420;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c615f0(lVar5);
    func_0x000107c6157c(uVar4);
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(lVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 102f02a90; end: 102f02dd3;  */

ulong FUN_102f02a90(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02b64);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02b68);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000102f1c3f0(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0;
    func_0x000102f1c3f0(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x73736553646e6553,0xef6b7361546e6f69);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02c38);
  (*pcVar2)();
}



/* Entry: 102f02dd4; end: 102f02de7;  */

ulong FUN_102f02dd4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02958);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f0295c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a6218;
    func_0x000107c61168(PTR_PTR_1126a6218);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a6218;
    func_0x000107c61168(PTR_PTR_1126a6218);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102f09540(0,0x112d55bf0,&PTR_PTR_1126a6218);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02a30);
  (*pcVar2)();
}



/* Entry: 102f02de8; end: 102f02f97;  */

ulong FUN_102f02de8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02ec4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02ec8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x4664656d614e4353,0xed0000646e656972);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02f98);
  (*pcVar2)();
}



/* Entry: 102f02f98; end: 102f02fd3;  */

ulong FUN_102f02f98(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02958);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f0295c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d95f0;
    func_0x000107c61168(PTR_PTR_1126d95f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d95f0;
    func_0x000107c61168(PTR_PTR_1126d95f0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102f09540(0,0x112d70b48,&PTR_PTR_1126d95f0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f02a30);
  (*pcVar2)();
}



/* Entry: 102f02fd4; end: 102f03013;  */

void FUN_102f02fd4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102f03010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102f03014; end: 102f03083;  */

void FUN_102f03014(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_102738e9c(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102f03084; end: 102f0308f;  */

void FUN_102f03084(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_102ed65b8();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102f03090; end: 102f03143;  */

void FUN_102f03090(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  (*param_3)();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102f03144; end: 102f032c7;  */

void FUN_102f03144(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102f032c8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102f032c8; end: 102f035df;  */

undefined * FUN_102f032c8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f033d0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f27b98;
    func_0x0001000285a8(0x112f27b98,&UNK_10db636f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1106ae698);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102f035e0; end: 102f0384b;  */

undefined *
FUN_102f035e0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f0371c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102f09540(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102f0384c; end: 102f0398f;  */

undefined * FUN_102f0384c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f03990);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f280a8;
    func_0x0001000285a8(0x112f280a8,&UNK_10db63b00);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f280b0;
    func_0x0001000285a8(0x112f280b0,&UNK_10db63b08);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102f03990; end: 102f03a97;  */

undefined * FUN_102f03990(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f03a98);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f27bd0;
    func_0x0001000285a8(0x112f27bd0,&UNK_10db63720);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_1105e88a8);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x40 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102f03a98; end: 102f03cf7;  */

undefined * FUN_102f03a98(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f03bc8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f28068;
    func_0x0001000285a8(0x112f28068,&UNK_10db63ae0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f28070;
    func_0x0001000285a8(0x112f28070,&UNK_10db63ae8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102f03cf8; end: 102f03d0f;  */

void FUN_102f03cf8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f03d10,0,0);
  return;
}



/* Entry: 102f03d10; end: 102f03dd7;  */

void FUN_102f03d10(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000102f03d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102f03dd8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1105e6720;
  func_0x000107c613fc(&UNK_1105e6720,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x102f07ee4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102f03dd8; end: 102f03e17;  */

void FUN_102f03dd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102f09984,0,0);
  return;
}



/* Entry: 102f03e18; end: 102f03e2f;  */

void FUN_102f03e18(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f03e30,0,0);
  return;
}



/* Entry: 102f03e30; end: 102f03ef7;  */

void FUN_102f03e30(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000102f03e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102f03ef8;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1105e8368;
  func_0x000107c613fc(&UNK_1105e8368,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x102f094e4,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102f03ef8; end: 102f03f37;  */

void FUN_102f03ef8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f03f38,0,0);
  return;
}



/* Entry: 102f03f38; end: 102f03f47;  */

void FUN_102f03f38(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102f03f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102f03f48; end: 102f04203;  */

ulong FUN_102f03f48(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f040a0);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04094);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000102f1c3f0(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04098);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0409c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c6157c(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c6157c(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102f02a90(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102f04204; end: 102f04217;  */

ulong FUN_102f04204(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04388);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0437c);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102f09540(0,0x112f27bc8,&PTR_PTR_1126b37e0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar8 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar8 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04380);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04384);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar7 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar7;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar7 = puVar7 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          func_0x000102f02874(uVar8,param_3,&PTR_PTR_1126b37e0,0x112f27bc8);
          param_1[uVar8] = uVar3;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
  }
  return param_3;
}



/* Entry: 102f04218; end: 102f04387;  */

ulong FUN_102f04218(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04388);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f0437c);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_102f09540(0,param_4,param_5);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar8 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar8 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04380);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04384);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar7 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar7;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar7 = puVar7 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          func_0x000102f02874(uVar8,param_3,param_5,param_4);
          param_1[uVar8] = uVar3;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
  }
  return param_3;
}



/* Entry: 102f04388; end: 102f04473;  */

undefined * FUN_102f04388(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102f04474);
    (*pcVar2)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      FUN_10274d2dc();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar5 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar5 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar5 >> 3) << 1 | 1;
      puVar5 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f04470);
      (*pcVar2)();
    }
    uVar4 = 0;
    FUN_102f09540(0,0x112d54e00,&PTR_PTR_1126bcf68);
    func_0x000107c6140c(puVar5 + 0x20,param_2 + param_3 * 8,lVar1,uVar4);
  }
  return puVar5;
}



/* Entry: 102f04474; end: 102f04957;  */

undefined8 *******
FUN_102f04474(undefined8 ******param_1,undefined8 *******param_2,undefined8 ******param_3)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  long extraout_x8;
  undefined8 ******ppppppuVar13;
  ulong uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  long lVar18;
  undefined8 *******unaff_x21;
  undefined8 *******unaff_x23;
  undefined8 *******pppppppuVar19;
  undefined1 *unaff_x26;
  undefined8 ******unaff_x27;
  undefined8 ******unaff_x28;
  undefined8 *****pppppuVar20;
  ulong auStack_198 [15];
  undefined8 *****pppppuStack_118;
  undefined8 *****pppppuStack_e0;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined1 uStack_b2;
  undefined8 ******ppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c614f0();
  pppppuStack_e0 = param_1;
  FUN_102f0a84c();
  if ((undefined8 ******)pppppuStack_e0 == (undefined8 ******)0x0) {
    pppppuStack_e0 = (undefined8 *****)PTR_PTR_1126c4258;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  FUN_102f0e91c();
  pppppppuVar15 = (undefined8 *******)param_2[2];
  if (pppppppuVar15 == (undefined8 *******)0x0) {
    func_0x000107c61170(pppppuStack_e0);
    pppppppuVar11 = param_2;
    func_0x000107c6142c();
    ppppppuVar16 = (undefined8 ******)0x0;
    pppppppuVar6 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppppppuStack_a0 = (undefined8 ******)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102f03240(0,pppppppuVar15,0);
    unaff_x23 = (undefined8 *******)0x0;
    unaff_x26 = (undefined1 *)((long)param_2 + 0x39);
    do {
      pppppppuVar11 = (undefined8 *******)ppppppuStack_a0;
      if (param_2[2] <= unaff_x23) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f04954);
        (*pcVar4)();
      }
      ppppppuVar16 = *(undefined8 *******)(unaff_x26 + -0x19);
      param_1 = *(undefined8 *******)(unaff_x26 + -0x11);
      ppppppuVar13 = *(undefined8 *******)(unaff_x26 + -9);
      bVar2 = unaff_x26[-1];
      unaff_x27 = (undefined8 ******)(ulong)bVar2;
      uVar1 = *unaff_x26;
      unaff_x28 = (undefined8 ******)PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      func_0x00010006c00c(ppppppuVar16,param_1);
      ppppppuVar17 = ppppppuVar16;
      ppppppuVar8 = param_1;
      func_0x000107c5ee20(ppppppuVar16);
      ppppppuStack_98 = (undefined8 *******)0x0;
      func_0x000107c4636c();
      func_0x000107c61170(ppppppuVar17);
      pppppppuVar6 = (undefined8 *******)ppppppuStack_98;
      if (unaff_x28 == (undefined8 ******)0x0) {
        unaff_x23 = (undefined8 *******)ppppppuStack_98;
        func_0x000107c61174();
        unaff_x21 = pppppppuVar6;
        func_0x000107c5ed30();
        func_0x000107c61170(unaff_x23);
        func_0x000107c61654();
        func_0x000107c61170(pppppuStack_e0);
        func_0x000107c6142c(param_2);
        param_3 = param_1;
        func_0x00010006c090(ppppppuVar16);
        func_0x000107c61574();
        goto LAB_102f04910;
      }
      func_0x000107c61174();
      func_0x000107c5eec4(&stack0xfffffffffffffee0 + lVar3);
      func_0x000107c5eec0();
      (**(code **)(lVar12 + 8))(&stack0xfffffffffffffee0 + lVar3,lVar5);
      puStack_80 = PTR___sSWN_11034dbc0;
      puStack_78 = PTR___sSW10Foundation15ContiguousBytesAAWP_110351010;
      ppppppuStack_98 = &ppppppuStack_b0;
      pppppppuVar19 = &ppppppuStack_98;
      ppppppuStack_b0 = pppppppuVar6;
      pppppuStack_a8 = ppppppuVar8;
      ppppppuStack_90 = &ppppppuStack_a0;
      func_0x0001000a8868();
      ppppppuVar17 = *pppppppuVar19;
      if ((ppppppuVar17 == (undefined8 ******)0x0) ||
         (uVar14 = (long)pppppppuVar19[1] - (long)ppppppuVar17, uVar14 == 0)) {
        lVar18 = 0;
        ppppppuVar17 = (undefined8 ******)0xc000000000000000;
      }
      else if (uVar14 < 0xf) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_ba = 0;
        uStack_b2 = (undefined1)uVar14;
        func_0x000107c610b4(&uStack_c0,ppppppuVar17,uVar14);
        lVar18 = CONCAT26(uStack_ba,uStack_c0);
        ppppppuVar17 = (undefined8 ******)
                       ((ulong)pppppuStack_118 & 0xf00000000000000 |
                       (ulong)CONCAT16(uStack_b2,uStack_b8));
        pppppuStack_118 = ppppppuVar17;
      }
      else {
        uVar10 = 0;
        func_0x000107c5ec40();
        func_0x000107c613fc();
        func_0x000107c5ec2c(ppppppuVar17,uVar14,uVar10);
        if (uVar14 < 0x7fffffff) {
          lVar18 = uVar14 << 0x20;
          ppppppuVar17 = (undefined8 ******)((ulong)ppppppuVar17 | 0x4000000000000000);
        }
        else {
          lVar18 = 0;
          func_0x000107c5ee0c();
          func_0x000107c613fc();
          *(undefined8 *)(lVar18 + 0x10) = 0;
          *(ulong *)(lVar18 + 0x18) = uVar14;
          ppppppuVar17 = (undefined8 ******)((ulong)ppppppuVar17 | 0x8000000000000000);
        }
      }
      func_0x0001000834e4(&ppppppuStack_98);
      lVar7 = lVar18;
      func_0x000107c5ee20(lVar18,ppppppuVar17);
      func_0x00010006c090(lVar18,ppppppuVar17);
      func_0x000107c5389c(unaff_x28);
      func_0x000107c61170(lVar7);
      ppppppuVar8 = unaff_x28;
      func_0x000107c41214();
      func_0x000107c61180();
      if (ppppppuVar8 == (undefined8 ******)0x0) {
        func_0x00010006c00c(ppppppuVar16,param_1);
        ppppppuVar9 = ppppppuVar16;
        ppppppuVar17 = param_1;
      }
      else {
        ppppppuVar9 = ppppppuVar8;
        func_0x000107c5ee30();
        func_0x000107c61170(ppppppuVar8);
      }
      unaff_x27 = (undefined8 ******)PTR_PTR_1126bcf68;
      func_0x000107c610f8();
      ppppppuVar8 = ppppppuVar9;
      func_0x000107c5ee20(ppppppuVar9,ppppppuVar17);
      func_0x000107c45ae0();
      func_0x000107c61170(ppppppuVar8);
      func_0x00010006c090(ppppppuVar9,ppppppuVar17);
      ppppppuVar8 = (undefined8 ******)pppppuStack_e0;
      func_0x000107c61174();
      func_0x00010006c090(ppppppuVar16);
      ppppppuVar17 = pppppppuVar11[2];
      ppppppuVar16 = (undefined8 ******)((long)ppppppuVar17 + 1);
      param_3 = param_1;
      ppppppuStack_a0 = pppppppuVar11;
      if ((undefined8 ******)((ulong)pppppppuVar11[3] >> 1) <= ppppppuVar17) {
        param_3 = ppppppuVar16;
        func_0x000102f03240((undefined8 ******)0x1 < pppppppuVar11[3],ppppppuVar16,1);
      }
      pppppppuVar6 = (undefined8 *******)ppppppuStack_a0;
      unaff_x23 = (undefined8 *******)((long)unaff_x23 + 1);
      ppppppuStack_a0[2] = ppppppuVar16;
      ppppppuStack_a0[(long)ppppppuVar17 * 8 + 4] = unaff_x28;
      ppppppuStack_a0[(long)ppppppuVar17 * 8 + 5] = unaff_x27;
      ppppppuStack_a0[(long)ppppppuVar17 * 8 + 7] = (undefined8 ******)0x0;
      ppppppuStack_a0[(long)ppppppuVar17 * 8 + 8] = (undefined8 ******)0x0;
      ppppppuStack_a0[(long)ppppppuVar17 * 8 + 6] = ppppppuVar8;
      *(undefined1 *)(ppppppuStack_a0 + (long)ppppppuVar17 * 8 + 9) = uVar1;
      ppppppuStack_a0[(long)ppppppuVar17 * 8 + 10] = ppppppuVar13;
      unaff_x26 = unaff_x26 + 0x20;
      *(byte *)(ppppppuStack_a0 + (long)ppppppuVar17 * 8 + 0xb) = bVar2;
    } while (pppppppuVar15 != unaff_x23);
    func_0x000107c61170(ppppppuVar8);
    pppppppuVar11 = param_2;
    func_0x000107c6142c();
    param_1 = ppppppuVar17;
  }
LAB_102f04910:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppuVar6;
  }
  func_0x000107c60e78();
  *(undefined8 *******)((long)auStack_198 + lVar3 + 0x10) = param_3;
  *(undefined8 *******)((long)auStack_198 + lVar3 + 0x18) = unaff_x28;
  *(undefined8 *******)((long)auStack_198 + lVar3 + 0x28) = unaff_x27;
  *(undefined1 **)((long)auStack_198 + lVar3 + 0x30) = unaff_x26;
  *(undefined8 ********)((long)auStack_198 + lVar3 + 0x38) = param_2;
  *(undefined8 ********)((long)auStack_198 + lVar3 + 0x40) = unaff_x21;
  *(undefined8 ********)((long)auStack_198 + lVar3 + 0x48) = unaff_x23;
  *(undefined8 *******)((long)auStack_198 + lVar3 + 0x50) = param_1;
  *(undefined8 ********)((long)auStack_198 + lVar3 + 0x58) = pppppppuVar6;
  *(undefined8 *******)((long)auStack_198 + lVar3 + 0x60) = ppppppuVar16;
  *(undefined1 **)((long)auStack_198 + lVar3 + 0x68) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_198 + lVar3 + 0x70) = FUN_102f04958;
  if ((ulong)pppppppuVar11 >> 0x3e == 0) {
    pppppppuVar15 = *(undefined8 ********)(((ulong)pppppppuVar11 & 0xffffffffffffff8) + 0x10);
    pppppppuVar6 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pppppppuVar15 = (undefined8 *******)((ulong)pppppppuVar11 & 0xffffffffffffff8);
    if ((undefined8 *******)0x7fffffffffffffff < pppppppuVar11) {
      pppppppuVar15 = pppppppuVar11;
    }
    func_0x000107c60480();
    pppppppuVar6 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)pppppppuVar6;
  if (pppppppuVar15 != (undefined8 *******)0x0) {
    ppppppuVar16 = (undefined8 ******)0x0;
    *(ulong *)((long)auStack_198 + lVar3) = (ulong)pppppppuVar11 & 0xffffffffffffff8;
    *(ulong *)((long)auStack_198 + lVar3 + 8) = (ulong)pppppppuVar11 & 0xc000000000000001;
    do {
      if (*(long *)((long)auStack_198 + lVar3 + 8) == 0) {
        if (*(undefined8 *******)(*(long *)((long)auStack_198 + lVar3) + 0x10) <= ppppppuVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f04b20);
          (*pcVar4)();
        }
        ppppppuVar17 = pppppppuVar11[(long)ppppppuVar16 + 4];
        func_0x000107c615f0(ppppppuVar17);
      }
      else {
        ppppppuVar17 = ppppppuVar16;
        FUN_10274d138(ppppppuVar16,pppppppuVar11);
      }
      if (SCARRY8((long)ppppppuVar16,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f04b00);
        (*pcVar4)();
      }
      ppppppuVar8 = ppppppuVar16;
      FUN_102f04474(ppppppuVar16,ppppppuVar17,*(undefined8 *)((long)auStack_198 + lVar3 + 0x10));
      if (unaff_x21 != (undefined8 *******)0x0) {
        func_0x000107c6142c(pppppppuVar6);
        func_0x000107c615e8(ppppppuVar17);
        return pppppppuVar6;
      }
      *(long *)((long)auStack_198 + lVar3 + 0x20) = (long)ppppppuVar16 + 1;
      func_0x000107c615e8(ppppppuVar17);
      pppppuVar20 = ppppppuVar8[2];
      ppppppuVar17 = pppppppuVar6[2];
      if (SCARRY8((long)ppppppuVar17,(long)pppppuVar20)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102f04b24);
        (*pcVar4)();
      }
      pppppppuVar19 = pppppppuVar6;
      func_0x000107c61558();
      if ((((ulong)pppppppuVar19 & 1) == 0) ||
         (uVar14 = (ulong)pppppppuVar6[3] >> 1,
         (long)uVar14 < (long)ppppppuVar17 + (long)pppppuVar20)) {
        FUN_102ed6098();
        uVar14 = (ulong)pppppppuVar19[3] >> 1;
        pppppppuVar6 = pppppppuVar19;
      }
      if (ppppppuVar8[2] == (undefined8 *****)0x0) {
        func_0x000107c6142c(ppppppuVar8);
        pppppppuVar19 = *(undefined8 ********)((long)auStack_198 + lVar3 + 0x20);
        if (pppppuVar20 != (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f04b28);
          (*pcVar4)();
        }
      }
      else {
        if ((undefined8 *****)(uVar14 - (long)pppppppuVar6[2]) < pppppuVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f04b2c);
          (*pcVar4)();
        }
        func_0x000107c6140c(pppppppuVar6 + (long)pppppppuVar6[2] * 8 + 4,ppppppuVar8 + 4,pppppuVar20
                            ,&UNK_1105e88a8);
        func_0x000107c6142c(ppppppuVar8);
        pppppppuVar19 = *(undefined8 ********)((long)auStack_198 + lVar3 + 0x20);
        if (pppppuVar20 != (undefined8 *****)0x0) {
          if (SCARRY8((long)pppppppuVar6[2],(long)pppppuVar20)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102f04b30);
            (*pcVar4)();
          }
          pppppppuVar6[2] = (undefined8 ******)((long)pppppppuVar6[2] + (long)pppppuVar20);
        }
      }
      ppppppuVar16 = (undefined8 ******)((long)ppppppuVar16 + 1);
    } while (pppppppuVar19 != pppppppuVar15);
  }
  return pppppppuVar6;
}



/* Entry: 102f04958; end: 102f04b7b;  */

undefined * FUN_102f04958(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04b20);
          (*pcVar1)();
        }
        uVar10 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c615f0(uVar10);
      }
      else {
        uVar10 = uVar9;
        FUN_10274d138(uVar9,param_1);
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04b00);
        (*pcVar1)();
      }
      uVar7 = uVar9 + 1;
      uVar2 = uVar9;
      FUN_102f04474(uVar9,uVar10,param_2);
      if (unaff_x21 != 0) {
        func_0x000107c6142c(puVar8);
        func_0x000107c615e8(uVar10);
        return puVar8;
      }
      func_0x000107c615e8(uVar10);
      uVar10 = *(ulong *)(uVar2 + 0x10);
      lVar6 = *(long *)(puVar8 + 0x10);
      if (SCARRY8(lVar6,uVar10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04b24);
        (*pcVar1)();
      }
      puVar3 = puVar8;
      func_0x000107c61558();
      if ((((ulong)puVar3 & 1) == 0) ||
         (uVar4 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar4 < (long)(lVar6 + uVar10))) {
        FUN_102ed6098();
        uVar4 = *(ulong *)(puVar3 + 0x18) >> 1;
        puVar8 = puVar3;
      }
      if (*(long *)(uVar2 + 0x10) == 0) {
        func_0x000107c6142c(uVar2);
        if (uVar10 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04b28);
          (*pcVar1)();
        }
      }
      else {
        if (uVar4 - *(long *)(puVar8 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04b2c);
          (*pcVar1)();
        }
        func_0x000107c6140c(puVar8 + *(long *)(puVar8 + 0x10) * 0x40 + 0x20,uVar2 + 0x20,uVar10,
                            &UNK_1105e88a8);
        func_0x000107c6142c(uVar2);
        if (uVar10 != 0) {
          if (SCARRY8(*(long *)(puVar8 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102f04b30);
            (*pcVar1)();
          }
          *(ulong *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + uVar10;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar5);
  }
  return puVar8;
}



/* Entry: 102f04b7c; end: 102f04d57;  */

void FUN_102f04b7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126d4cd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55570(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55718(puVar1);
  func_0x000107c61170(puVar2);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___sSSN_11034da80;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c57654(puVar1);
  func_0x000107c61170(puVar3);
  puVar3 = puVar5;
  func_0x000107c5fc48(puVar5,puVar2);
  func_0x000107c57624(puVar1);
  func_0x000107c61170(puVar3);
  uVar4 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  puVar2 = puVar5;
  func_0x000107c5fc48(puVar5,uVar4);
  func_0x000107c57628(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c555e8(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5fc48(puVar5,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c58df8(puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c560f8(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c54654(puVar1);
  func_0x000107c61170(puVar2);
  puStack_58 = puVar1;
  func_0x000100b60084(&puStack_58);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 102f04d58; end: 102f04dc7;  */

undefined8 FUN_102f04d58(undefined8 param_1,undefined8 param_2)

{
  FUN_102f1c79c(param_2,param_1);
  return param_2;
}



/* Entry: 102f04dc8; end: 102f04ddb;  */

void FUN_102f04dc8(void)

{
  return;
}



/* Entry: 102f04ddc; end: 102f04e03;  */

void FUN_102f04ddc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102f04e04; end: 102f04e6f;  */

void FUN_102f04e04(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    uVar3 = param_1;
  }
  (*pcVar1)(uVar3);
  return;
}



/* Entry: 102f04e70; end: 102f04e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f04e70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  char *pcVar11;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar10 = &puStack_70;
  lVar3 = *(long *)(*(long *)(lVar1 + _DAT_112f27f28) + _DAT_11307fc48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = param_1;
    FUN_102f132c8(param_1);
    uVar5 = 0;
    func_0x000104522c9c(0);
    uVar6 = uVar4;
    func_0x000107c5fc48(uVar4,uVar5);
    func_0x000107c6142c(uVar4);
    lVar7 = lVar3;
    func_0x000107c5b59c(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar6);
    puVar8 = &UNK_1105e5fa0;
    func_0x000107c613fc(&UNK_1105e5fa0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,lVar1);
    puVar9 = &UNK_1105e64f0;
    func_0x000107c613fc(&UNK_1105e64f0,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *)(puVar9 + 0x18) = param_1;
    *(undefined8 *)(puVar9 + 0x20) = uVar2;
    pcStack_50 = FUN_102f05874;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1011f2f24;
    puStack_58 = &UNK_1105e6508;
    puStack_48 = puVar9;
    func_0x000107c60bc4(&puStack_70);
    puVar8 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(puVar8);
    pcVar11 = "didSend(with:)";
    func_0x0001000c10c0("didSend(with:)");
    func_0x000107c61180();
    func_0x000107c5dc64(lVar7);
    func_0x000107c615e8(pcVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 102f04e78; end: 102f0518f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f04e78(long *param_1,undefined ****param_2,undefined ****param_3,long param_4)

{
  undefined ***pppuVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined ****ppppuVar5;
  undefined ****ppppuVar6;
  undefined ****ppppuVar7;
  undefined *****pppppuVar8;
  undefined ****ppppuVar9;
  undefined **ppuVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ****ppppuVar13;
  undefined ****ppppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long extraout_x8;
  long lVar22;
  undefined **ppuVar23;
  undefined ****ppppuVar24;
  undefined ****unaff_x21;
  undefined ****ppppuVar25;
  undefined *puVar26;
  long alStack_168 [5];
  long alStack_140 [16];
  undefined ****ppppuStack_a0;
  undefined ****ppppuStack_98;
  undefined *****pppppuStack_90;
  undefined *****pppppuStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  func_0x000107c5eec8();
  puVar26 = *(undefined **)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar26 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  ppppuVar25 = (undefined ****)(&stack0xffffffffffffff40 + lVar2);
  lVar22 = param_4;
  func_0x000107c614f0(param_4);
  ppppuVar24 = param_2;
  FUN_102f0a84c(param_2,lVar22);
  if (ppppuVar24 == (undefined ****)0x0) {
    ppppuVar24 = (undefined ****)PTR_PTR_1126c4258;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  FUN_102ef41bc();
  ppppuVar13 = param_2;
  func_0x000107c4e090();
  func_0x000107c61180();
  ppppuVar5 = param_3;
  func_0x000107c3eea8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  ppppuVar11 = ppppuVar5;
  func_0x000107c5ee30();
  func_0x000107c61170(ppppuVar5);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x00010006c00c(ppppuVar11,ppppuVar13);
  ppppuVar6 = ppppuVar11;
  func_0x0001010282b0(ppppuVar11,ppppuVar13);
  ppppuVar7 = ppppuVar11;
  ppppuVar9 = ppppuVar13;
  func_0x00010006c090();
  ppppuVar12 = ppppuVar13;
  if (unaff_x21 == (undefined ****)0x0) {
    func_0x000107c5eec4(ppppuVar25);
    func_0x000107c5eec0();
    (**(code **)(puVar26 + 8))(ppppuVar25,lVar4);
    pppppuStack_90 = &ppppuStack_a0;
    pppppuStack_88 = (undefined *****)&pppppuStack_90;
    puStack_78 = PTR___sSWN_11034dbc0;
    puStack_70 = PTR___sSW10Foundation15ContiguousBytesAAWP_110351010;
    pppppuVar8 = (undefined *****)&pppppuStack_90;
    ppppuStack_a0 = ppppuVar7;
    ppppuStack_98 = ppppuVar9;
    func_0x0001000a8868();
    ppppuVar5 = *pppppuVar8;
    ppppuVar25 = pppppuVar8[1];
    func_0x000100e37074(ppppuVar5);
    func_0x0001000834e4(&pppppuStack_90);
    ppppuVar7 = ppppuVar5;
    func_0x000107c5ee20(ppppuVar5,ppppuVar25);
    func_0x00010006c090(ppppuVar5);
    func_0x000107c5389c(ppppuVar6);
    func_0x000107c61170(ppppuVar7);
    ppppuVar5 = ppppuVar6;
    func_0x000107c41214();
    func_0x000107c61180();
    if (ppppuVar5 == (undefined ****)0x0) {
      func_0x00010006c00c(ppppuVar11,ppppuVar13);
      ppppuVar7 = ppppuVar11;
      ppppuVar25 = ppppuVar13;
    }
    else {
      ppppuVar7 = ppppuVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(ppppuVar5);
    }
    puVar26 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    ppppuVar5 = ppppuVar7;
    func_0x000107c5ee20(ppppuVar7,ppppuVar25);
    func_0x000107c45ae0();
    func_0x000107c61170(ppppuVar5);
    func_0x00010006c090(ppppuVar7,ppppuVar25);
    ppppuVar9 = ppppuVar11;
    func_0x00010006c090();
    *param_1 = (long)ppppuVar6;
    param_1[1] = (long)puVar26;
    param_1[2] = (long)ppppuVar24;
    param_1[3] = param_4;
    param_1[4] = (long)param_2;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
    func_0x00010006c090(ppppuVar11);
    func_0x000107c61170(ppppuVar24);
    ppppuVar9 = param_2;
    func_0x000107c6142c();
    ppppuVar7 = unaff_x21;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  func_0x000107c60e78();
  *(undefined *****)((long)alStack_140 + lVar2 + 0x20) = ppppuVar5;
  *(undefined *****)((long)alStack_140 + lVar2 + 0x28) = ppppuVar11;
  *(undefined *****)((long)alStack_140 + lVar2 + 0x30) = ppppuVar13;
  *(long *)((long)alStack_140 + lVar2 + 0x38) = param_4;
  *(undefined **)((long)alStack_140 + lVar2 + 0x40) = puVar26;
  *(undefined *****)((long)alStack_140 + lVar2 + 0x48) = ppppuVar25;
  *(undefined *****)((long)alStack_140 + lVar2 + 0x50) = ppppuVar6;
  *(undefined *****)((long)alStack_140 + lVar2 + 0x58) = unaff_x21;
  *(undefined *****)((long)alStack_140 + lVar2 + 0x60) = ppppuVar7;
  *(undefined *****)((long)alStack_140 + lVar2 + 0x68) = param_2;
  *(undefined1 **)((long)alStack_140 + lVar2 + 0x70) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_140 + lVar2 + 0x78) = FUN_102f05190;
  *(undefined8 *)((long)alStack_140 + lVar2 + 0x18) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(undefined *****)((long)alStack_168 + lVar2) = ppppuVar7;
  FUN_102ee6b9c();
  if (((ulong)ppppuVar7 & 1) == 0) {
    func_0x000107c61434(ppppuVar9);
  }
  else {
    ppuVar23 = &PTR____CFConstantStringClassReference_110f52df8;
    ppuVar10 = ppuVar23;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52df8);
    func_0x000107c5faec();
    *(undefined *****)((long)alStack_168 + lVar2 + 0x18) = ppppuVar12;
    func_0x000107c61170(ppuVar10);
    if ((ulong)ppppuVar9 >> 0x3e == 0) {
      *(ulong *)((long)alStack_168 + lVar2 + 0x10) = (ulong)ppppuVar9 & 0xffffffffffffff8;
      ppppuVar25 = *(undefined *****)(((ulong)ppppuVar9 & 0xffffffffffffff8) + 0x10);
      ppppuVar24 = (undefined ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      *(undefined *****)((long)alStack_168 + lVar2 + 0x10) =
           (undefined ****)((ulong)ppppuVar9 & 0xffffffffffffff8);
      ppppuVar25 = (undefined ****)((ulong)ppppuVar9 & 0xffffffffffffff8);
      if ((undefined ****)0x7fffffffffffffff < ppppuVar9) {
        ppppuVar25 = ppppuVar9;
      }
      func_0x000107c60480();
      ppppuVar24 = (undefined ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)ppppuVar24;
    if (ppppuVar25 != (undefined ****)0x0) {
      *(ulong *)((long)alStack_168 + lVar2 + 8) = (ulong)ppppuVar9 & 0xc000000000000001;
      ppppuVar5 = (undefined ****)0x0;
      do {
        while( true ) {
          if (*(long *)((long)alStack_168 + lVar2 + 8) == 0) {
            if (*(undefined *****)(*(long *)((long)alStack_168 + lVar2 + 0x10) + 0x10) <= ppppuVar5)
            {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f053d4);
              (*pcVar3)();
            }
            ppppuVar11 = (undefined ****)ppppuVar9[(long)((long)ppppuVar5 + 4)];
            func_0x000107c61174();
            ppppuVar6 = ppppuVar12;
          }
          else {
            ppppuVar11 = ppppuVar5;
            ppppuVar6 = ppppuVar9;
            func_0x000102f02874(ppppuVar5,ppppuVar9,&PTR_PTR_1126b3568,0x112d60fb0);
          }
          ppppuVar7 = (undefined ****)((long)ppppuVar5 + 1);
          if (SCARRY8((long)ppppuVar5,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f053d0);
            (*pcVar3)();
          }
          ppppuVar12 = ppppuVar11;
          func_0x000107c4fa44();
          func_0x000107c61180();
          ppppuVar13 = ppppuVar12;
          func_0x000107c44fdc();
          func_0x000107c61180();
          func_0x000107c61170(ppppuVar12);
          ppppuVar14 = ppppuVar13;
          func_0x000107c51cec();
          func_0x000107c61180();
          func_0x000107c61170(ppppuVar13);
          ppppuVar13 = ppppuVar14;
          func_0x000107c5faec();
          ppppuVar12 = ppppuVar6;
          func_0x000107c61170(ppppuVar14);
          if (ppppuVar13 != (undefined ****)ppuVar23 ||
              ppppuVar6 != *(undefined *****)((long)alStack_168 + lVar2 + 0x18)) break;
          func_0x000107c61170(ppppuVar11);
          func_0x000107c6142c(ppppuVar6);
LAB_102f0524c:
          ppppuVar5 = (undefined ****)((long)ppppuVar5 + 1);
          if (ppppuVar7 == ppppuVar25) goto LAB_102f053f8;
        }
        ppppuVar12 = ppppuVar6;
        func_0x000107c605b8(ppppuVar13,ppppuVar6,ppuVar23,
                            *(undefined8 *)((long)alStack_168 + lVar2 + 0x18),0);
        func_0x000107c6142c(ppppuVar6);
        if (((ulong)ppppuVar13 & 1) != 0) {
          func_0x000107c61170(ppppuVar11);
          goto LAB_102f0524c;
        }
        ppppuVar5 = ppppuVar24;
        func_0x000107c61558();
        *(undefined *****)((long)alStack_140 + lVar2) = ppppuVar24;
        if (((ulong)ppppuVar5 & 1) == 0) {
          ppppuVar12 = (undefined ****)((long)ppppuVar24[2] + 1);
          func_0x000102f03278(0,ppppuVar12,1);
          ppppuVar24 = *(undefined *****)((long)alStack_140 + lVar2);
        }
        pppuVar1 = ppppuVar24[2];
        ppppuVar5 = (undefined ****)((long)pppuVar1 + 1);
        if ((undefined ***)((ulong)ppppuVar24[3] >> 1) <= pppuVar1) {
          ppppuVar12 = ppppuVar5;
          func_0x000102f03278((undefined ***)0x1 < ppppuVar24[3],ppppuVar5,1);
          ppppuVar24 = *(undefined *****)((long)alStack_140 + lVar2);
        }
        ppppuVar24[2] = (undefined ***)ppppuVar5;
        ppppuVar24[(long)pppuVar1 + 4] = (undefined ***)ppppuVar11;
        ppppuVar5 = ppppuVar7;
      } while (ppppuVar7 != ppppuVar25);
    }
LAB_102f053f8:
    func_0x000107c6142c(*(undefined8 *)((long)alStack_168 + lVar2 + 0x18));
    ppppuVar9 = ppppuVar24;
  }
  ppppuVar25 = (undefined ****)((ulong)ppppuVar9 & 0xffffffffffffff8);
  if ((ulong)ppppuVar9 >> 0x3e == 0) {
    ppppuVar24 = (undefined ****)ppppuVar25[2];
  }
  else {
    ppppuVar24 = ppppuVar25;
    if ((undefined ****)0x7fffffffffffffff < ppppuVar9) {
      ppppuVar24 = ppppuVar9;
    }
    func_0x000107c60480();
  }
  if (ppppuVar24 == (undefined ****)0x0) {
    *(undefined **)((long)alStack_168 + lVar2 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    *(undefined **)((long)alStack_168 + lVar2 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppppuVar5 = (undefined ****)0x0;
    do {
      while( true ) {
        if (((ulong)ppppuVar9 & 0xc000000000000001) == 0) {
          if (ppppuVar25[2] <= ppppuVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f055b8);
            (*pcVar3)();
          }
          ppppuVar11 = (undefined ****)ppppuVar9[(long)((long)ppppuVar5 + 4)];
          func_0x000107c61174(ppppuVar11);
        }
        else {
          ppppuVar11 = ppppuVar5;
          ppppuVar12 = ppppuVar9;
          func_0x000102f02874(ppppuVar5,ppppuVar9,&PTR_PTR_1126b3568,0x112d60fb0);
        }
        ppppuVar6 = (undefined ****)((long)ppppuVar5 + 1);
        if (SCARRY8((long)ppppuVar5,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f055b4);
          (*pcVar3)();
        }
        puVar26 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x000107c61168();
        *(undefined8 *)((long)alStack_140 + lVar2) = 0;
        func_0x000107c3e100();
        func_0x000107c61180();
        uVar15 = *(undefined8 *)((long)alStack_140 + lVar2);
        func_0x000107c61174(uVar15);
        if (puVar26 != (undefined *)0x0) break;
        uVar16 = uVar15;
        func_0x000107c5ed30();
        func_0x000107c61170(uVar15);
        func_0x000107c61654();
        func_0x000107c61170(ppppuVar11);
        func_0x000107c614ac(uVar16);
        ppppuVar5 = (undefined ****)((long)ppppuVar5 + 1);
        if (ppppuVar6 == ppppuVar24) goto LAB_102f055d8;
      }
      puVar17 = puVar26;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar26);
      func_0x00010006c00c(puVar17,ppppuVar12);
      uVar18 = *(ulong *)((long)alStack_168 + lVar2 + 0x18);
      func_0x000107c61558();
      if ((uVar18 & 1) == 0) {
        uVar15 = 0;
        func_0x000100f23260(0,*(long *)(*(long *)((long)alStack_168 + lVar2 + 0x18) + 0x10) + 1,1);
        *(undefined8 *)((long)alStack_168 + lVar2 + 0x18) = uVar15;
      }
      lVar22 = *(long *)((long)alStack_168 + lVar2 + 0x18);
      uVar18 = *(ulong *)(lVar22 + 0x10);
      uVar19 = *(ulong *)(lVar22 + 0x18);
      lVar22 = uVar18 + 1;
      if (uVar19 >> 1 <= uVar18) {
        uVar19 = (ulong)(1 < uVar19);
        *(long *)((long)alStack_168 + lVar2 + 0x10) = lVar22;
        func_0x000100f23260(uVar19,lVar22,1,*(undefined8 *)((long)alStack_168 + lVar2 + 0x18));
        lVar22 = *(long *)((long)alStack_168 + lVar2 + 0x10);
        *(ulong *)((long)alStack_168 + lVar2 + 0x18) = uVar19;
      }
      lVar4 = *(long *)((long)alStack_168 + lVar2 + 0x18);
      *(long *)(lVar4 + 0x10) = lVar22;
      lVar4 = lVar4 + uVar18 * 0x10;
      *(undefined **)(lVar4 + 0x20) = puVar17;
      *(undefined *****)(lVar4 + 0x28) = ppppuVar12;
      func_0x000107c61170(ppppuVar11);
      func_0x00010006c090(puVar17);
      ppppuVar5 = ppppuVar6;
    } while (ppppuVar6 != ppppuVar24);
  }
LAB_102f055d8:
  func_0x000107c6142c(ppppuVar9);
  puVar20 = PTR_PTR_1126d4cd0;
  func_0x000107c610f8(PTR_PTR_1126d4cd0);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55570(puVar20);
  func_0x000107c61170(puVar26);
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55718(puVar20);
  func_0x000107c61170(puVar26);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar26 = PTR___sSSN_11034da80;
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c57654(puVar20);
  func_0x000107c61170(puVar21);
  puVar21 = puVar17;
  func_0x000107c5fc48(puVar17,puVar26);
  func_0x000107c57624(puVar20);
  func_0x000107c61170(puVar21);
  uVar15 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  func_0x000107c5fc48(puVar17,uVar15);
  func_0x000107c57628(puVar20);
  func_0x000107c61170(puVar17);
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c555e8(puVar20);
  func_0x000107c61170(puVar26);
  uVar15 = *(undefined8 *)((long)alStack_168 + lVar2 + 0x18);
  func_0x000107c5fc48(uVar15,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c58df8(puVar20);
  func_0x000107c61170(uVar15);
  func_0x000107c560f8(puVar20);
  lVar4 = *(long *)((long)alStack_168 + lVar2);
  func_0x000102ee70b8(0,puVar20);
  lVar22 = _DAT_112f27e58;
  func_0x000107c61428(lVar4 + _DAT_112f27e58,(long)alStack_140 + lVar2,0,0);
  if ((*(byte *)(lVar4 + lVar22) & 1) == 0) {
    func_0x000102ede748(1);
  }
  func_0x000107c6142c(*(undefined8 *)((long)alStack_168 + lVar2 + 0x18));
  func_0x000107c61170(puVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)alStack_140 + lVar2 + 0x18)) {
    func_0x000107c60e78();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102f057cc);
    (*pcVar3)();
  }
  return;
}



/* Entry: 102f05190; end: 102f057cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f05190(undefined **param_1,undefined **param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong unaff_x20;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  ulong uStack_98;
  undefined *puStack_90;
  undefined **appuStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = unaff_x20;
  FUN_102ee6b9c();
  if ((uVar5 & 1) == 0) {
    func_0x000107c61434(param_1);
  }
  else {
    ppuVar17 = &PTR____CFConstantStringClassReference_110f52df8;
    ppuVar18 = ppuVar17;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52df8);
    func_0x000107c5faec();
    ppuVar19 = param_2;
    func_0x000107c61170(ppuVar18);
    if ((ulong)param_1 >> 0x3e == 0) {
      ppuVar18 = *(undefined ***)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      ppuVar10 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppuVar18 = (undefined **)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < param_1) {
        ppuVar18 = param_1;
      }
      func_0x000107c60480();
      ppuVar10 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)ppuVar10;
    if (ppuVar18 != (undefined **)0x0) {
      uStack_98 = (ulong)param_1 & 0xffffffffffffff8;
      ppuVar9 = (undefined **)0x0;
      do {
        while( true ) {
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(undefined ***)(uStack_98 + 0x10) <= ppuVar9) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102f053d4);
              (*pcVar4)();
            }
            ppuVar6 = (undefined **)param_1[(long)((long)ppuVar9 + 4)];
            func_0x000107c61174();
            ppuVar11 = ppuVar19;
          }
          else {
            ppuVar6 = ppuVar9;
            ppuVar11 = param_1;
            func_0x000102f02874(ppuVar9,param_1,&PTR_PTR_1126b3568,0x112d60fb0);
          }
          ppuVar2 = (undefined **)((long)ppuVar9 + 1);
          if (SCARRY8((long)ppuVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102f053d0);
            (*pcVar4)();
          }
          ppuVar19 = ppuVar6;
          func_0x000107c4fa44();
          func_0x000107c61180();
          ppuVar7 = ppuVar19;
          func_0x000107c44fdc();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar19);
          ppuVar8 = ppuVar7;
          func_0x000107c51cec();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar7);
          ppuVar7 = ppuVar8;
          func_0x000107c5faec();
          ppuVar19 = ppuVar11;
          func_0x000107c61170(ppuVar8);
          if (ppuVar7 != ppuVar17 || ppuVar11 != param_2) break;
          func_0x000107c61170(ppuVar6);
          func_0x000107c6142c(ppuVar11);
LAB_102f0524c:
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          if (ppuVar2 == ppuVar18) goto LAB_102f053f8;
        }
        ppuVar19 = ppuVar11;
        func_0x000107c605b8(ppuVar7,ppuVar11,ppuVar17,param_2,0);
        func_0x000107c6142c(ppuVar11);
        if (((ulong)ppuVar7 & 1) != 0) {
          func_0x000107c61170(ppuVar6);
          goto LAB_102f0524c;
        }
        ppuVar9 = ppuVar10;
        func_0x000107c61558();
        appuStack_80[0] = ppuVar10;
        if (((ulong)ppuVar9 & 1) == 0) {
          ppuVar19 = (undefined **)(ppuVar10[2] + 1);
          func_0x000102f03278(0,ppuVar19,1);
        }
        puVar13 = appuStack_80[0][2];
        ppuVar10 = (undefined **)(puVar13 + 1);
        if ((undefined *)((ulong)appuStack_80[0][3] >> 1) <= puVar13) {
          ppuVar19 = ppuVar10;
          func_0x000102f03278((undefined *)0x1 < appuStack_80[0][3],ppuVar10,1);
        }
        appuStack_80[0][2] = (undefined *)ppuVar10;
        appuStack_80[0][(long)(puVar13 + 4)] = (undefined *)ppuVar6;
        ppuVar10 = appuStack_80[0];
        ppuVar9 = ppuVar2;
      } while (ppuVar2 != ppuVar18);
    }
LAB_102f053f8:
    func_0x000107c6142c(param_2);
    param_2 = ppuVar19;
    param_1 = ppuVar10;
  }
  ppuVar19 = (undefined **)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    ppuVar18 = (undefined **)ppuVar19[2];
  }
  else {
    ppuVar18 = ppuVar19;
    if ((undefined **)0x7fffffffffffffff < param_1) {
      ppuVar18 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar18 != (undefined **)0x0) {
    ppuVar17 = (undefined **)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (ppuVar19[2] <= ppuVar17) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102f055b8);
            (*pcVar4)();
          }
          ppuVar10 = (undefined **)param_1[(long)((long)ppuVar17 + 4)];
          func_0x000107c61174(ppuVar10);
        }
        else {
          ppuVar10 = ppuVar17;
          param_2 = param_1;
          func_0x000102f02874(ppuVar17,param_1,&PTR_PTR_1126b3568,0x112d60fb0);
        }
        ppuVar9 = (undefined **)((long)ppuVar17 + 1);
        if (SCARRY8((long)ppuVar17,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102f055b4);
          (*pcVar4)();
        }
        puVar13 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
        func_0x000107c61168();
        appuStack_80[0] = (undefined **)0x0;
        func_0x000107c3e100();
        func_0x000107c61180();
        ppuVar6 = appuStack_80[0];
        func_0x000107c61174(appuStack_80[0]);
        if (puVar13 != (undefined *)0x0) break;
        ppuVar11 = ppuVar6;
        func_0x000107c5ed30();
        func_0x000107c61170(ppuVar6);
        func_0x000107c61654();
        func_0x000107c61170(ppuVar10);
        func_0x000107c614ac(ppuVar11);
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
        if (ppuVar9 == ppuVar18) goto LAB_102f055d8;
      }
      puVar12 = puVar13;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar13);
      func_0x00010006c00c(puVar12,param_2);
      puVar13 = puStack_90;
      func_0x000107c61558();
      if (((ulong)puVar13 & 1) == 0) {
        plVar1 = (long *)(puStack_90 + 0x10);
        puStack_90 = (undefined *)0x0;
        func_0x000100f23260(0,*plVar1 + 1,1);
      }
      uVar5 = *(ulong *)(puStack_90 + 0x10);
      if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar5) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puStack_90 + 0x18));
        func_0x000100f23260(puVar13,uVar5 + 1,1,puStack_90);
        puStack_90 = puVar13;
      }
      *(ulong *)(puStack_90 + 0x10) = uVar5 + 1;
      *(undefined **)(puStack_90 + uVar5 * 0x10 + 0x20) = puVar12;
      *(undefined ***)(puStack_90 + uVar5 * 0x10 + 0x28) = param_2;
      func_0x000107c61170(ppuVar10);
      func_0x00010006c090(puVar12);
      ppuVar17 = ppuVar9;
    } while (ppuVar9 != ppuVar18);
  }
LAB_102f055d8:
  func_0x000107c6142c(param_1);
  puVar14 = PTR_PTR_1126d4cd0;
  func_0x000107c610f8(PTR_PTR_1126d4cd0);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55570(puVar14);
  func_0x000107c61170(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55718(puVar14);
  func_0x000107c61170(puVar13);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = PTR___sSSN_11034da80;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c57654(puVar14);
  func_0x000107c61170(puVar15);
  puVar15 = puVar12;
  func_0x000107c5fc48(puVar12,puVar13);
  func_0x000107c57624(puVar14);
  func_0x000107c61170(puVar15);
  uVar16 = 0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  func_0x000107c5fc48(puVar12,uVar16);
  func_0x000107c57628(puVar14);
  func_0x000107c61170(puVar12);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c555e8(puVar14);
  func_0x000107c61170(puVar13);
  puVar13 = puStack_90;
  func_0x000107c5fc48(puStack_90,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c58df8(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c560f8(puVar14);
  func_0x000102ee70b8(0,puVar14);
  lVar3 = _DAT_112f27e58;
  func_0x000107c61428(unaff_x20 + _DAT_112f27e58,appuStack_80,0,0);
  if ((*(byte *)(unaff_x20 + lVar3) & 1) == 0) {
    func_0x000102ede748(1);
  }
  func_0x000107c6142c(puStack_90);
  func_0x000107c61170(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102f057cc);
  (*pcVar4)();
}



/* Entry: 102f057cc; end: 102f057d7;  */

void FUN_102f057cc(void)

{
  long unaff_x20;
  
  (*(code *)0x102ef4560)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102f057d8; end: 102f057f7;  */

void FUN_102f057d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ab820);
  return;
}



/* Entry: 102f057f8; end: 102f05803;  */

void FUN_102f057f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102f05800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102f05804; end: 102f0583b;  */

void FUN_102f05804(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f0583c; end: 102f0585b;  */

undefined8 FUN_102f0583c(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else if ((uVar4 & 0xc000000000000001) == 0) {
    if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ef4e08);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(*(long *)(uVar4 + 0x20) + 0x28);
    func_0x000107c61174(uVar5);
  }
  else {
    lVar3 = 0;
    FUN_102f02a90(0,uVar4);
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    func_0x000107c61174(uVar5);
    func_0x000107c615e8(lVar3);
  }
  return uVar5;
}



/* Entry: 102f0585c; end: 102f05873;  */

void FUN_102f0585c(void)

{
  FUN_102f1c340();
  return;
}



/* Entry: 102f05874; end: 102f05897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f05874(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + _DAT_112f27ea8);
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112f27f30);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar6);
    uVar3 = uVar1;
    func_0x000102f13800(uVar1,uVar5,uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    FUN_102ee540c(uVar1,uVar3,uVar4,param_1,0,0);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102f05898; end: 102f0590f;  */

undefined8 FUN_102f05898(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1043f0ac4)(param_2,param_1);
  return param_2;
}



/* Entry: 102f05910; end: 102f05923;  */

void FUN_102f05910(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102f05924; end: 102f059b7;  */

void FUN_102f05924(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x410;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102f09b20;
  plVar4[0x67] = unaff_x20 + 0x38;
  *(undefined1 *)((long)plVar4 + 0x179) = uVar3;
  plVar4[0x66] = lVar2;
  plVar4[0x65] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ee80a4,0,0);
  return;
}



/* Entry: 102f059b8; end: 102f059cb;  */

void FUN_102f059b8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 102f059cc; end: 102f05a13;  */

undefined8 FUN_102f059cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102f05a14; end: 102f07e43;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_102f05a14(undefined *param_1,long param_2,ulong *param_3,uint param_4,undefined8 param_5,
             undefined **param_6)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong *puVar14;
  long extraout_x8;
  undefined *puVar15;
  long extraout_x8_00;
  long extraout_x12;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  uint uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  ulong auStack_1e0 [2];
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  uint uStack_1bc;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  code *pcStack_1a0;
  ulong uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  uint uStack_174;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  uint uStack_14c;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  uint uStack_114;
  ulong *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 uStack_e9;
  undefined *apuStack_e0 [4];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0x112d373d8;
  ppuStack_1b0 = param_6;
  uStack_174 = param_4;
  lStack_108 = param_2;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = (long)&puStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1a8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar15 = (undefined *)(lVar6 - extraout_x12);
  lVar6 = 0;
  puStack_148 = puVar15;
  func_0x000107c5eec8();
  lVar25 = *(long *)(lVar6 + -8);
  puStack_100 = (undefined *)lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar6 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar28 = *(undefined8 *)(param_1 + 0x38);
  puVar15 = *(undefined **)(param_1 + 0x88);
  uVar26 = (uint)(byte)param_1[0x90];
  puVar16 = (undefined *)param_3[7];
  uStack_114 = (uint)(byte)param_1[0x90];
  puStack_180 = (undefined *)param_5;
  puStack_120 = puVar15;
  puStack_110 = param_3;
  puStack_f8 = param_1;
  puStack_78 = puVar16;
  if (puVar16 == (undefined *)0x0) {
    FUN_102edda70(puVar15,uVar26);
  }
  else {
    FUN_102f059cc(&puStack_78,&puStack_a0,0x112dc3ff0,&UNK_10d981690);
    FUN_102f059cc(&puStack_78,&puStack_a0,0x112dc3ff0,&UNK_10d981690);
    FUN_102f059cc(&puStack_78,&puStack_a0,0x112dc3ff0,&UNK_10d981690);
    FUN_102edda70(puVar15,uVar26);
    FUN_102f059cc(&puStack_78,&puStack_a0,0x112dc3ff0,&UNK_10d981690);
    puVar15 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    func_0x000107c6148c(puVar16,puVar15);
    puVar15 = puStack_120;
    uVar26 = uStack_114;
    if (puVar16 == (undefined *)0x0) {
      FUN_102f080f0(&puStack_78,0x112dc3ff0,&UNK_10d981690);
      puVar15 = puStack_120;
      uVar26 = uStack_114;
    }
  }
  puVar17 = puVar16;
  func_0x000102f183a8(puVar16,puVar15,uVar26);
  func_0x000107c61170(puVar16);
  lVar2 = lStack_108;
  lVar7 = _DAT_112f27e48;
  cVar1 = puStack_f8[0x60];
  uStack_14c = (uint)(byte)puStack_f8[0x61];
  func_0x000107c61428(lStack_108 + _DAT_112f27e48,auStack_b8,0,0);
  puVar16 = (undefined *)(lVar2 + lVar7);
  func_0x000107c61618();
  if (puVar16 == (undefined *)0x0) {
    puVar16 = PTR_PTR_1126c4588;
    func_0x000107c61168();
LAB_102f05cc0:
    puStack_158 = puVar16;
    func_0x0001008e4748();
    func_0x000107c61180();
    puVar24 = puVar16;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar24 = puVar16;
    func_0x000107c3fe68();
    func_0x000107c61180();
    func_0x000107c615e8(puVar16);
    puVar16 = PTR_PTR_1126c4588;
    func_0x000107c61168();
    if (puVar24 == (undefined *)0x0) goto LAB_102f05cc0;
    puStack_158 = puVar16;
    func_0x000107c61174(puVar24);
    puVar16 = puVar24;
  }
  puVar23 = puStack_158;
  func_0x000107c5b178();
  func_0x000107c61180();
  func_0x000107c61170(puVar24);
  puVar24 = puVar23;
  func_0x000107176780(uVar28,puVar23);
  uVar20 = (ulong)puVar17 & 0xffffffffffff;
  if (((ulong)puVar15 & 0x2000000000000000) != 0) {
    uVar20 = (ulong)puVar15 >> 0x38 & 0xf;
  }
  if ((uVar20 != 0) && (puVar23 != (undefined *)0x0)) {
    puVar9 = puVar23;
    func_0x000107c61174(puVar23);
    puVar24 = puVar15;
    func_0x000107c5fadc(puVar17,puVar15);
    func_0x000107c5e504(puVar9);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar17);
  }
  if (cVar1 != '\x01') {
    func_0x000107c5e6e8(puVar23);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  if ((uStack_14c != 0) && (puVar23 != (undefined *)0x0)) {
    puVar17 = puVar23;
    func_0x000107c61174(puVar23);
    puVar9 = puVar17;
    func_0x000107c5eec4(lVar6);
    func_0x000107c5eeac();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar24);
    (**(code **)(lVar25 + 8))(lVar6,puStack_100);
    func_0x000107c5e4ec(puVar17);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar9);
  }
  uVar20 = puStack_110[0xe];
  puVar14 = puStack_110;
  if ((uVar20 != 0) && (puVar23 != (undefined *)0x0)) {
    uVar22 = puStack_110[0xd];
    puVar17 = puVar23;
    func_0x000107c61174(puVar23);
    puVar14 = puStack_110;
    func_0x000107c5fadc(uVar22,uVar20);
    func_0x000107c5e790(puVar17);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar17);
    func_0x000107c61170(uVar22);
  }
  if (((*(byte *)((long)puVar14 + 0x61) & 1) != 0) && (puVar23 != (undefined *)0x0)) {
    func_0x000107c5e73c(puVar23);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  func_0x000107c61174();
  puVar17 = puVar23;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  puStack_128 = puVar17;
  func_0x000107c6142c(puVar15);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar16);
  uVar22 = puVar14[2];
  uVar20 = uVar22;
  func_0x000107c51edc();
  if ((int)uVar20 == 5) {
    lVar7 = *(long *)(puStack_f8 + 0x10);
    func_0x000107c4008c();
    func_0x000107c61180();
    lVar25 = lVar7;
    func_0x000107c51dac();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    puVar15 = puStack_180;
    if (lVar25 == 0) {
      uVar5 = 0;
    }
    else {
      lVar7 = lVar25;
      func_0x000107c3ebcc();
      uVar5 = (undefined4)lVar7;
      func_0x000107c61170(lVar25);
    }
  }
  else {
    uVar5 = 0;
    puVar15 = puStack_180;
  }
  puStack_140 = (undefined *)CONCAT44(puStack_140._4_4_,uVar5);
  puVar24 = *(undefined **)(puStack_f8 + 0x10);
  puVar16 = puVar24;
  func_0x000107c4008c(puVar24);
  func_0x000107c61180();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c53380(puVar16);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar17);
  puStack_100 = puVar24;
  func_0x000107c4008c(puVar24);
  func_0x000107c61180();
  if (((int)puStack_140 == 0) ||
     (uVar20 = uVar22, puVar16 = PTR_s_respondsToSelector__11262c7e0,
     func_0x000107c61150(uVar22,PTR_s_respondsToSelector__11262c7e0,PTR_s_additionalText_11259ceb8),
     (uVar20 & 1) == 0)) {
LAB_102f06038:
    uVar21 = 0;
  }
  else {
    uVar20 = uVar22;
    func_0x000107c3d99c();
    func_0x000107c61180();
    if (uVar20 == 0) goto LAB_102f06038;
    uVar21 = uVar20;
    func_0x000107c5faec();
    func_0x000107c61170(uVar20);
    puVar14 = puStack_110;
    func_0x000107c5fadc(uVar21,puVar16);
    func_0x000107c6142c(puVar16);
  }
  func_0x000107c524f0(puVar24);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(uVar21);
  puVar16 = puStack_100;
  func_0x000107c4008c();
  func_0x000107c61180();
  puStack_138 = puStack_78;
  uStack_160 = *(undefined8 *)(puStack_f8 + 0x18);
  uStack_168 = *(undefined8 *)(puStack_f8 + 0x20);
  puStack_188 = puVar16;
  if (puStack_78 == (undefined *)0x0) {
    puStack_138 = (undefined *)0x0;
    lVar25 = lStack_108;
  }
  else {
    puVar16 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    func_0x000107c6148c(puStack_138,puVar16);
    lVar25 = lStack_108;
    if (puStack_138 == (undefined *)0x0) {
      FUN_102f080f0(&puStack_78,0x112dc3ff0,&UNK_10d981690);
      puStack_138 = (undefined *)0x0;
    }
  }
  lVar25 = *(long *)(lVar25 + _DAT_112f27f00);
  uVar20 = uVar22;
  puVar16 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(uVar22,PTR_s_respondsToSelector__11262c7e0,PTR_s_sendSessionId_112634c60);
  if ((uVar20 & 1) == 0) {
LAB_102f06148:
    uStack_170 = 0;
    puStack_130 = (undefined *)0x0;
  }
  else {
    func_0x000107c51e48();
    func_0x000107c61180();
    if (uVar22 == 0) goto LAB_102f06148;
    uVar20 = uVar22;
    func_0x000107c5faec();
    uStack_170 = uVar20;
    puStack_130 = puVar16;
    func_0x000107c61170(uVar22);
  }
  pcStack_1a0 = (code *)puVar14[8];
  uStack_e9 = (undefined1)puVar14[0xc];
  uStack_198 = puVar14[0x10];
  puStack_190 = (undefined *)puVar14[0x11];
  puVar17 = puStack_f8;
  func_0x000102f18b64(puStack_f8,puVar15,puVar14[0x12]);
  puVar16 = puStack_128;
  puVar15 = puStack_138;
  puStack_180 = puVar17;
  if (puStack_128 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
LAB_102f062e4:
    if ((puStack_120 == (undefined *)0x1) || ((uStack_114 & 1) != 0)) {
      uStack_1bc = (uint)(puStack_120 == (undefined *)0x1);
      if (puStack_138 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        bVar4 = true;
      }
      else {
        puVar15 = puStack_138;
        func_0x000107c4fa70();
        func_0x000107c61180();
        if (puVar15 == (undefined *)0x0) {
          bVar4 = false;
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar15;
          func_0x000107c5fc54();
          func_0x000107c61170(puVar15);
          puVar15 = *(undefined **)(puVar17 + 0x10);
          func_0x000107c6142c(puVar17);
          bVar4 = false;
        }
      }
LAB_102f06398:
      func_0x000107c5b4dc();
      func_0x000107c61180();
      if (lVar25 == 0) goto LAB_102f07e30;
      lVar7 = lVar25;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar25);
      lStack_1b8 = lVar7;
      if (lVar7 == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puStack_1c8 = puVar15;
        puStack_158 = puVar16;
        if (!bVar4) {
          puVar17 = puStack_138;
          func_0x000107c4455c();
          func_0x000107c61180();
          puVar23 = PTR___sypN_11034f1a8;
          puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar17 != (undefined *)0x0) {
            puVar15 = puVar17;
            func_0x000107c5fc54();
            func_0x000107c61170(puVar17);
            lVar25 = *(long *)(puVar15 + 0x10);
            puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar25 != 0) {
              puVar17 = puVar15;
              do {
                puVar17 = puVar17 + 0x20;
                func_0x0001000bb420(puVar17,&puStack_a0);
                func_0x000100102924(&puStack_a0,apuStack_e0);
                uVar28 = 0x112d6dfd0;
                func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
                puVar8 = &uStack_c0;
                func_0x000107c6147c(puVar8,apuStack_e0,puVar23 + 8,uVar28,6);
                if ((((ulong)puVar8 & 1) != 0) &&
                   (lVar7 = CONCAT44(uStack_bc,uStack_c0), lVar7 != 0)) {
                  puVar16 = puVar24;
                  func_0x000107c61550();
                  if (((int)puVar16 == 0) ||
                     (((long)puVar24 < 0 || (puVar16 = puVar24, ((ulong)puVar24 >> 0x3e & 1) != 0)))
                     ) {
                    if ((ulong)puVar24 >> 0x3e == 0) {
                      puVar9 = *(undefined **)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar9 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar24) {
                        puVar9 = puVar24;
                      }
                      func_0x000107c60480(puVar9);
                    }
                    puVar16 = (undefined *)0x0;
                    func_0x000101bcad64(0,puVar9 + 1,1,puVar24);
                  }
                  uVar22 = (ulong)puVar16 & 0xffffffffffffff8;
                  uVar20 = *(ulong *)(uVar22 + 0x10);
                  puVar24 = puVar16;
                  if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar20) {
                    puVar24 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
                    func_0x000101bcad64(puVar24,uVar20 + 1,1,puVar16);
                    uVar22 = (ulong)puVar24 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar22 + 0x10) = uVar20 + 1;
                  *(long *)(uVar22 + uVar20 * 8 + 0x20) = lVar7;
                  puVar16 = puStack_158;
                }
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
            func_0x000107c6142c(puVar15);
            puVar15 = puStack_1c8;
          }
          puVar9 = puStack_138;
          func_0x000107c4fa70();
          func_0x000107c61180();
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar9 != (undefined *)0x0) {
            puVar15 = puVar9;
            func_0x000107c5fc54();
            func_0x000107c61170(puVar9);
            lVar25 = *(long *)(puVar15 + 0x10);
            puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puStack_1d0 = puVar15;
            if (lVar25 != 0) {
              do {
                puVar15 = puVar15 + 0x20;
                func_0x0001000bb420(puVar15,&puStack_a0);
                func_0x000100102924(&puStack_a0,apuStack_e0);
                uVar28 = 0x112d6dfc8;
                func_0x0001000285a8(0x112d6dfc8,&UNK_10d9301c0);
                puVar8 = &uStack_c0;
                func_0x000107c6147c(puVar8,apuStack_e0,puVar23 + 8,uVar28,6);
                if ((((ulong)puVar8 & 1) != 0) &&
                   (lVar7 = CONCAT44(uStack_bc,uStack_c0), lVar7 != 0)) {
                  puVar16 = puVar17;
                  func_0x000107c61550();
                  if (((int)puVar16 == 0) ||
                     (((long)puVar17 < 0 || (puVar16 = puVar17, ((ulong)puVar17 >> 0x3e & 1) != 0)))
                     ) {
                    if ((ulong)puVar17 >> 0x3e == 0) {
                      puVar9 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      puVar9 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
                      if ((undefined *)0x7fffffffffffffff < puVar17) {
                        puVar9 = puVar17;
                      }
                      func_0x000107c60480(puVar9);
                    }
                    puVar16 = (undefined *)0x0;
                    FUN_102ed62e0(0,puVar9 + 1,1,puVar17);
                  }
                  uVar22 = (ulong)puVar16 & 0xffffffffffffff8;
                  uVar20 = *(ulong *)(uVar22 + 0x10);
                  puVar17 = puVar16;
                  if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar20) {
                    puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
                    FUN_102ed62e0(puVar17,uVar20 + 1,1,puVar16);
                    uVar22 = (ulong)puVar17 & 0xffffffffffffff8;
                  }
                  *(ulong *)(uVar22 + 0x10) = uVar20 + 1;
                  *(long *)(uVar22 + uVar20 * 8 + 0x20) = lVar7;
                  puVar16 = puStack_158;
                }
                lVar25 = lVar25 + -1;
              } while (lVar25 != 0);
            }
            func_0x000107c6142c(puStack_1d0);
            puVar15 = puStack_1c8;
          }
        }
        puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar28 = 0x112d6dfd0;
        func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
        puVar9 = puVar24;
        func_0x000107c5fc48(puVar24,uVar28);
        puStack_1d0 = puVar9;
        func_0x000107c6142c(puVar24);
        if ((ulong)puVar17 >> 0x3e == 0) {
          puVar24 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
          if (puVar24 != (undefined *)0x0) goto LAB_102f06740;
LAB_102f0685c:
          func_0x000107c6142c(puVar17);
          puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar24 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar17) {
            puVar24 = puVar17;
          }
          func_0x000107c60480();
          if (puVar24 == (undefined *)0x0) goto LAB_102f0685c;
LAB_102f06740:
          puStack_a0 = puVar23;
          puVar15 = (undefined *)((ulong)puVar24 & ((long)puVar24 >> 0x3f ^ 0xffffffffffffffffU));
          func_0x000100403514(0,puVar15,0);
          if ((long)puVar24 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07db4);
            (*pcVar3)();
          }
          puVar16 = (undefined *)0x0;
          do {
            puVar23 = puStack_a0;
            if (((ulong)puVar17 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10) <= (long)puVar16) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x102f06844);
                (*pcVar3)();
              }
              puVar9 = *(undefined **)(puVar17 + (long)puVar16 * 8 + 0x20);
              func_0x000107c615f0(puVar9);
              puVar27 = puVar15;
            }
            else {
              puVar9 = puVar16;
              puVar27 = puVar17;
              FUN_102f02de8();
            }
            puVar19 = puVar9;
            func_0x000107c4d3e4();
            func_0x000107c61180();
            if (puVar19 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07e2c);
              (*pcVar3)();
            }
            puVar13 = puVar19;
            func_0x000107c5faec();
            puVar15 = puVar27;
            func_0x000107c615e8(puVar9);
            func_0x000107c61170(puVar19);
            uVar20 = *(ulong *)(puVar23 + 0x10);
            puVar9 = (undefined *)(uVar20 + 1);
            puStack_a0 = puVar23;
            if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar20) {
              puVar15 = puVar9;
              func_0x000100403514(1 < *(ulong *)(puVar23 + 0x18),puVar9,1);
            }
            puVar23 = puStack_a0;
            puVar16 = puVar16 + 1;
            *(undefined **)(puStack_a0 + 0x10) = puVar9;
            *(undefined **)(puStack_a0 + uVar20 * 0x10 + 0x20) = puVar13;
            *(undefined **)(puStack_a0 + uVar20 * 0x10 + 0x28) = puVar27;
          } while (puVar24 != puVar16);
          func_0x000107c6142c(puVar17);
          puVar15 = puStack_1c8;
          puVar16 = puStack_158;
        }
        puVar9 = puVar23;
        func_0x000107c5fc48(puVar23,PTR___sSSN_11034da80);
        func_0x000107c6142c(puVar23);
        puVar24 = puStack_1d0;
        puVar17 = puStack_1d0;
        func_0x000108605670(puStack_1d0,puVar9,lStack_1b8);
        func_0x000107c61180();
        func_0x000107c61170(puVar24);
        func_0x000107c61170(puVar9);
        if (puVar17 == (undefined *)0x0) {
          puVar24 = (undefined *)0x0;
        }
        else {
          puVar24 = puVar17;
          func_0x000107c4d8d0();
        }
        func_0x000107c615e8(lStack_1b8);
        bVar4 = SCARRY8((long)puVar15,(long)puVar24);
        puVar15 = puVar15 + (long)puVar24;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07d9c);
          (*pcVar3)();
        }
      }
      puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((((uStack_1bc | uStack_114) & 1) != 0) && (pcStack_1a0 != (code *)0x0)) {
        puVar24 = *(undefined **)(pcStack_1a0 + _DAT_11307fc80);
        func_0x000107c61434(puVar24);
      }
    }
    else {
      puVar15 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
  }
  else {
    if (puStack_138 != (undefined *)0x0) {
      puVar17 = puStack_128;
      func_0x000107c61174();
      func_0x000107c61174(puVar15);
      puVar24 = puVar15;
      func_0x000102f18da0();
      puVar23 = puStack_158;
      func_0x000107c5b178();
      func_0x000107c61180();
      if (puVar23 == (undefined *)0x0) {
        func_0x000107c61170(puVar24);
        func_0x000107c61170(puVar15);
      }
      else {
        func_0x000107176780(puVar24,puVar23);
        func_0x000107c5e488(puVar23);
        func_0x000107c61180();
        func_0x000107c61170();
        puVar16 = puVar23;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07e38);
          (*pcVar3)();
        }
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar23);
        func_0x000107c61170(puVar24);
        func_0x000107c61170(puVar15);
      }
      goto LAB_102f062e4;
    }
    func_0x000107c61174();
    puVar15 = (undefined *)0x0;
    bVar4 = true;
    puVar16 = puStack_128;
    if ((puStack_120 == (undefined *)0x1) || ((uStack_114 & 1) != 0)) {
      uStack_1bc = (uint)(puStack_120 == (undefined *)0x1);
      goto LAB_102f06398;
    }
    puVar17 = (undefined *)0x0;
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar28 = 0;
  func_0x0001044c309c(0);
  puVar23 = puVar24;
  func_0x000107c5fc48(puVar24,uVar28);
  func_0x000107c6142c(puVar24);
  puVar24 = puVar23;
  func_0x0001086063e8(puVar23,puVar15,puVar17);
  func_0x000107c61180();
  func_0x000107c61170(puVar23);
  if (puVar16 == (undefined *)0x0) {
    puVar15 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar15 = puVar16;
    func_0x000107c5b634();
  }
  puVar23 = puStack_148;
  func_0x000107c5eea0(puStack_148);
  puVar9 = (undefined *)0x0;
  func_0x000107c5eea4();
  lVar25 = *(long *)(puVar9 + -8);
  pcStack_1a0 = *(code **)(lVar25 + 0x38);
  (*pcStack_1a0)(puVar23,0,1,puVar9);
  if (puVar16 != (undefined *)0x0) {
    func_0x000107c4b414();
  }
  puVar23 = (undefined *)0x0;
  if ((puVar15 < (undefined *)0x1b) && ((1L << ((ulong)puVar15 & 0x3f) & 0x4013800U) != 0)) {
    if (puStack_130 == (undefined *)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = uStack_170;
      func_0x000107c5fadc(uStack_170);
    }
    puVar23 = PTR_PTR_1126cdbf8;
    func_0x000107c610f8();
    func_0x000107c485b4();
    func_0x000107c61170(uVar20);
  }
  uVar28 = uStack_160;
  func_0x000107c5fadc(uStack_160,uStack_168);
  puVar15 = puStack_148;
  puVar27 = puStack_148;
  (**(code **)(lVar25 + 0x30))(puStack_148,1,puVar9);
  if ((int)puVar27 == 1) {
    puVar27 = (undefined *)0x0;
  }
  else {
    func_0x000107c5ee70();
    (**(code **)(lVar25 + 8))(puVar15,puVar9);
  }
  puVar15 = puStack_190;
  if (puStack_190 == (undefined *)0x0) {
    uVar20 = 0;
  }
  else {
    uVar20 = uStack_198;
    func_0x000107c5fadc();
  }
  puVar19 = PTR_PTR_1126c3300;
  func_0x000107c610f8(PTR_PTR_1126c3300);
  *(undefined **)(lVar6 + -0x10) = puVar23;
  *(ulong *)(lVar6 + -8) = uVar20;
  func_0x000107c4651c();
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(puVar17);
  puVar16 = puStack_180;
  puVar17 = puVar19;
  puStack_158 = puVar9;
  if ((int)puStack_140 == 0) {
    func_0x000107c61174(puVar19);
    puVar16 = puStack_180;
  }
  else {
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puStack_180 != (undefined *)0x0) {
      puVar24 = puStack_180;
    }
    func_0x000107c61434(puStack_180);
    puVar15 = puVar24;
    func_0x000102f1a3e0(puVar19,puVar24,uStack_170,puStack_130);
    func_0x000107c6142c(puVar24);
  }
  puVar24 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x000107c61168();
  puStack_a0 = (undefined *)0x0;
  func_0x000107c3e100();
  func_0x000107c61180();
  puVar23 = puStack_a0;
  func_0x000107c61174(puStack_a0);
  if (puVar24 == (undefined *)0x0) {
    puVar15 = puVar23;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar23);
    func_0x000107c61654();
    func_0x000107c61170(puVar19);
    func_0x000107c6142c(puStack_130);
    func_0x000107c61170(puStack_138);
    func_0x000107c6142c(puVar16);
    func_0x000107c614ac(puVar15);
    func_0x000107c61170(puVar17);
    puVar23 = (undefined *)0x0;
    puVar15 = (undefined *)0xc000000000000000;
  }
  else {
    puVar23 = puVar24;
    func_0x000107c5ee30(puVar24);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(puVar19);
    func_0x000107c6142c(puStack_130);
    func_0x000107c61170(puStack_138);
    func_0x000107c6142c(puVar16);
  }
  puVar17 = (undefined *)0x0;
  puVar16 = puVar23;
  func_0x000107c5ee20(puVar23,puVar15);
  func_0x00010006c090(puVar23,puVar15);
  puVar15 = puStack_188;
  func_0x000107c526e8(puStack_188);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar16);
  puVar15 = puStack_100;
  func_0x000107c4008c();
  func_0x000107c61180();
  puVar16 = puVar15;
  func_0x000107c41844();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  puVar15 = puVar16;
  func_0x000107c5bf1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  puVar24 = (undefined *)0x0;
  FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
  puVar16 = puVar15;
  puStack_130 = puVar24;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar15);
  if ((ulong)puVar16 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
    if (puVar15 != (undefined *)0x0) goto LAB_102f06db0;
LAB_102f06f18:
    func_0x000107c6142c(puVar16);
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar15 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar16) {
      puVar15 = puVar16;
    }
    func_0x000107c60480();
    if (puVar15 == (undefined *)0x0) goto LAB_102f06f18;
LAB_102f06db0:
    apuStack_e0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,(ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07d70);
      (*pcVar3)();
    }
    puStack_138 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    do {
      puVar24 = apuStack_e0[0];
      if (((ulong)puVar16 & 0xc000000000000001) == 0) {
        puVar23 = *(undefined **)(puVar16 + (long)puVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar23 = puVar17;
        func_0x000102f02874(puVar17,puVar16,&PTR_PTR_1126becd8,0x112d51360);
      }
      puVar9 = puVar23;
      func_0x000107c5d0f0();
      uStack_c0 = SUB84(puVar9,0);
      puVar9 = PTR___ss5Int32VN_11034ee20;
      puVar27 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c();
      uVar28 = 0xe100000000000000;
      puStack_a0 = puVar9;
      puStack_98 = puVar27;
      func_0x000107c5fb78(0x3a,0xe100000000000000);
      puVar9 = puVar23;
      func_0x000107c5bfec(puVar23);
      func_0x000107c61180();
      puVar27 = puVar9;
      func_0x000107c5faec();
      func_0x000107c61170(puVar9);
      func_0x000107c5fb78(puVar27,uVar28);
      func_0x000107c61170(puVar23);
      func_0x000107c6142c(uVar28);
      puVar9 = puStack_98;
      puVar23 = puStack_a0;
      uVar20 = *(ulong *)(puVar24 + 0x10);
      apuStack_e0[0] = puVar24;
      if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar20) {
        func_0x000100403514(1 < *(ulong *)(puVar24 + 0x18),uVar20 + 1,1);
      }
      puVar24 = apuStack_e0[0];
      puVar17 = puVar17 + 1;
      *(ulong *)(apuStack_e0[0] + 0x10) = uVar20 + 1;
      *(undefined **)(apuStack_e0[0] + uVar20 * 0x10 + 0x20) = puVar23;
      *(undefined **)(apuStack_e0[0] + uVar20 * 0x10 + 0x28) = puVar9;
    } while (puVar15 != puVar17);
    func_0x000107c6142c(puVar16);
    puVar17 = puStack_138;
  }
  uVar28 = 0x112d38270;
  puStack_a0 = puVar24;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar18 = 0x112d38278;
  func_0x000102f07f84(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
  puVar16 = (undefined *)0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar28,uVar18);
  func_0x000107c6142c(puVar24);
  func_0x000107c6142c();
  FUN_10274d2dc();
  func_0x000107c613fc();
  puVar15 = puStack_78;
  *(undefined8 *)(puVar16 + 0x18) = 3;
  *(undefined8 *)(puVar16 + 0x10) = 1;
  if (puStack_78 != (undefined *)0x0) {
    puVar24 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    func_0x000107c6148c(puVar15,puVar24);
    if (puVar15 == (undefined *)0x0) {
      FUN_102f080f0(&puStack_78,0x112dc3ff0,&UNK_10d981690);
    }
  }
  puVar24 = puVar15;
  func_0x000107c5bf40(puVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  uVar18 = *(undefined8 *)(lStack_108 + _DAT_112f27e98);
  uVar28 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f114130);
  func_0x000107c3ebd4(uVar18);
  func_0x000107c61170(uVar28);
  uVar20 = (ulong)(byte)puStack_f8[0x50];
  puVar15 = puStack_f8;
  func_0x000102f16820(puStack_f8,puVar24,uVar18);
  func_0x000107c61170(puVar24);
  *(undefined **)(puVar16 + 0x20) = puVar15;
  puVar15 = puStack_100;
  func_0x000107c5b1f8();
  func_0x000107c61180();
  puVar23 = (undefined *)0x0;
  FUN_102f09540(0,0x112d54e00,&PTR_PTR_1126bcf68);
  puVar24 = puVar15;
  func_0x000107c5fc54(puVar15,puVar23);
  func_0x000107c61170(puVar15);
  if ((ulong)puVar24 >> 0x3e == 0) {
    puVar9 = *(undefined **)((undefined *)((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
    puVar19 = (undefined *)(ulong)(puVar9 != (undefined *)0x0);
    if (puVar9 < puVar19) {
LAB_102f07d2c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07d30);
      (*pcVar3)();
    }
  }
  else {
    puVar15 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
    if (((ulong)puVar24 & 0x8000000000000000) != 0) {
      puVar15 = puVar24;
    }
    puVar9 = puVar15;
    func_0x000107c60480();
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07e44);
      (*pcVar3)();
    }
    puVar19 = (undefined *)(ulong)(puVar9 != (undefined *)0x0);
    puVar27 = puVar15;
    func_0x000107c60480();
    if ((long)puVar27 < (long)puVar19) goto LAB_102f07d2c;
    func_0x000107c60480();
    if ((long)puVar15 < (long)puVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07d2c);
      (*pcVar3)();
    }
  }
  if (((ulong)puVar24 & 0xc000000000000001) == 0) {
    func_0x000107c61434(puVar24);
  }
  else {
    func_0x000107c61434(puVar24);
    puVar15 = puVar19;
    if ((undefined *)0x1 < puVar9) {
      do {
        puVar27 = puVar15 + 1;
        func_0x000107c60318(puVar15,puVar24,puVar23);
        puVar15 = puVar27;
      } while (puVar9 != puVar27);
    }
  }
  func_0x000107c6142c(puVar24);
  if ((ulong)puVar24 >> 0x3e == 0) {
    uVar20 = (long)puVar9 << 1 | 1;
    puVar15 = puVar19;
    puVar19 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
    puVar9 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8) + 0x20;
LAB_102f071b0:
    uVar28 = 0;
    func_0x000107c605fc(0);
    puVar24 = puVar19;
    func_0x000107c615f4(puVar19,3);
    func_0x000107c61480();
    if (puVar24 == (undefined *)0x0) {
      func_0x000107c615e8(puVar19);
      puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar6 = *(long *)(puVar24 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(uVar20 >> 1,(long)puVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07d8c);
      (*pcVar3)();
    }
    if (lVar6 != (uVar20 >> 1) - (long)puVar15) {
      func_0x000107c615ec(puVar19,2);
      goto LAB_102f07194;
    }
    puVar15 = puVar19;
    func_0x000107c61480(puVar19,uVar28);
    func_0x000107c615ec(puVar19,2);
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar15 == (undefined *)0x0) goto LAB_102f07228;
  }
  else {
    puVar15 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
    if (((ulong)puVar24 & 0x8000000000000000) != 0) {
      puVar15 = puVar24;
    }
    func_0x000107c60484(puVar19,puVar9);
    func_0x000107c6142c(puVar24);
    if ((uVar20 & 1) != 0) goto LAB_102f071b0;
LAB_102f07194:
    puVar24 = puVar19;
    FUN_102f04388(puVar19,puVar9,puVar15,uVar20);
LAB_102f07228:
    func_0x000107c615e8(puVar19);
    puVar15 = puVar24;
  }
  puStack_a0 = puVar16;
  FUN_102f02300(puVar15,FUN_10274d4c8,0x112d54e00,&PTR_PTR_1126bcf68);
  puVar15 = puStack_a0;
  puVar16 = puStack_a0;
  func_0x000107c5fc48(puStack_a0,puVar23);
  func_0x000107c6142c(puVar15);
  puVar15 = puStack_100;
  func_0x000107c59394(puStack_100);
  func_0x000107c61170(puVar16);
  func_0x000107c5b1f8();
  func_0x000107c61180();
  puVar16 = puVar15;
  puVar24 = puVar23;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar15);
  if (((ulong)puVar16 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07d54);
      (*pcVar3)();
    }
    puVar15 = *(undefined **)(puVar16 + 0x20);
    func_0x000107c61174();
  }
  else {
    puVar15 = (undefined *)0x0;
    puVar24 = puVar16;
    func_0x000102f02874(0,puVar16,&PTR_PTR_1126bcf68,0x112d54e00);
  }
  func_0x000107c6142c(puVar16);
  puVar16 = puVar15;
  func_0x000107c3eea8();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  puVar15 = puVar16;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar16);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  puVar16 = puVar15;
  func_0x0001010282b0(puVar15,puVar24);
  func_0x00010006c090(puVar15,puVar24);
  if (puVar17 == (undefined *)0x0) {
    if (puVar16 == (undefined *)0x0) {
      FUN_102f080f0(&puStack_78,0x112dc3ff0,&UNK_10d981690);
      puVar14 = puStack_110;
    }
    else {
      puVar17 = puVar16;
      func_0x000107c61174();
      puVar15 = puStack_100;
      puVar24 = puStack_100;
      func_0x000107c4008c();
      func_0x000107c61180();
      puVar9 = puVar24;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(puVar24);
      puVar24 = puVar9;
      func_0x000107c5bf1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      puVar9 = puVar24;
      puVar27 = puStack_130;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar24);
      func_0x000107c4008c();
      func_0x000107c61180();
      lVar6 = lStack_108;
      puVar24 = *(undefined **)(*(long *)(lStack_108 + _DAT_112f27ea8) + _DAT_113083f78);
      puStack_140 = puVar15;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar15 = puVar24;
      func_0x000107c5faec();
      func_0x000107c61170(puVar24);
      puVar24 = puVar27;
      func_0x000107c5fb24();
      func_0x000107c6142c(puVar27);
      puStack_a0 = puVar15;
      puStack_98 = puVar24;
      func_0x000107c5fb78(0x7e,0xe100000000000000);
      func_0x000107c5fb78(uStack_160,uStack_168);
      puVar15 = puStack_a0;
      puStack_138 = puStack_98;
      uVar20 = *(ulong *)(lVar6 + _DAT_112f27f48);
      func_0x000107c3f400();
      if ((uVar20 & 1) == 0) {
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar24 = puVar16;
        FUN_102eef968();
        lVar6 = lStack_108;
      }
      lVar6 = *(long *)(lVar6 + _DAT_112f27ed0);
      func_0x000107c5c734();
      func_0x000107c61180();
      puVar14 = puStack_110;
      if (lVar6 == 0) {
LAB_102f07530:
        uVar5 = 0;
      }
      else {
        lVar25 = lVar6;
        func_0x000107c40244();
        func_0x000107c615e8(lVar6);
        if (3 < lVar25 - 1U) goto LAB_102f07530;
        uVar5 = *(undefined4 *)(&UNK_10ddc9180 + (lVar25 - 1U) * 4);
      }
      puVar27 = puStack_78;
      if (puStack_78 == (undefined *)0x0) {
LAB_102f075d8:
        lVar6 = lStack_1a8;
        (*pcStack_1a0)(lStack_1a8,1,1,puStack_158);
      }
      else {
        puVar19 = PTR_PTR_1126c33d0;
        func_0x000107c61168(PTR_PTR_1126c33d0);
        func_0x000107c6148c(puVar27,puVar19);
        if (puVar27 == (undefined *)0x0) {
          FUN_102f080f0(&puStack_78,0x112dc3ff0,&UNK_10d981690);
          goto LAB_102f075d8;
        }
        func_0x000107c5bf40();
        func_0x000107c61180();
        FUN_102f080f0(&puStack_78,0x112dc3ff0,&UNK_10d981690);
        lVar6 = lStack_1a8;
        if (puVar27 == (undefined *)0x0) goto LAB_102f075d8;
        FUN_102f059cc(puVar27 + _DAT_1138135b8,lStack_1a8,0x112d373d8,&UNK_10d9014c0);
        func_0x000107c61170(puVar27);
      }
      if (puStack_128 == (undefined *)0x0) {
        puVar27 = (undefined *)0x0;
      }
      else {
        puVar27 = puStack_128;
        func_0x000107c4a5e0();
      }
      FUN_102f146a0(&puStack_a0,puVar9);
      puVar19 = puVar9;
      func_0x000102f1a7bc(puVar9,puVar15,puStack_138,puVar24,uVar5,lVar6,puVar27,&puStack_a0);
      puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar19 != (undefined *)0x0) {
        puVar13 = PTR_PTR_1126be758;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar27 = PTR_PTR_1126cf378;
        func_0x000107c610f8(PTR_PTR_1126cf378);
        func_0x000107c453e4();
        func_0x000107c59984(puVar13);
        func_0x000107c61170(puVar27);
        puVar27 = puVar13;
        func_0x000107c5c020();
        func_0x000107c61180();
        if (puVar27 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07e40);
          (*pcVar3)();
        }
        func_0x000107c59968();
        func_0x000107c61170(puVar27);
        puVar27 = puVar13;
        func_0x000107c41214();
        func_0x000107c61180();
        if (puVar27 == (undefined *)0x0) {
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar19);
          puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar10 = puVar27;
          puStack_158 = puVar24;
          puStack_148 = puVar9;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar27);
          func_0x00010006c00c(puVar10,puVar15);
          puVar24 = (undefined *)0x0;
          func_0x000100f23260(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
          uVar20 = *(ulong *)(puVar24 + 0x10);
          puVar27 = puVar24;
          if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar20) {
            puVar27 = (undefined *)(ulong)(1 < *(ulong *)(puVar24 + 0x18));
            func_0x000100f23260(puVar27,uVar20 + 1,1,puVar24);
          }
          *(ulong *)(puVar27 + 0x10) = uVar20 + 1;
          *(undefined **)(puVar27 + uVar20 * 0x10 + 0x20) = puVar10;
          *(undefined **)(puVar27 + uVar20 * 0x10 + 0x28) = puVar15;
          func_0x000107c61170(puVar19);
          func_0x000107c61170(puVar13);
          func_0x00010006c090(puVar10);
          puVar14 = puStack_110;
          puVar9 = puStack_148;
          puVar24 = puStack_158;
        }
      }
      puVar19 = PTR_PTR_1126be758;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar13 = PTR_PTR_1126be778;
      func_0x000107c610f8(PTR_PTR_1126be778);
      func_0x000107c453e4();
      func_0x000107c594a4(puVar19);
      func_0x000107c61170(puVar13);
      puVar13 = puVar19;
      func_0x000107c5b438();
      func_0x000107c61180();
      if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07e3c);
        (*pcVar3)();
      }
      FUN_102f1ae8c(puVar17);
      func_0x000107c59430(puVar13);
      func_0x000107c61170(puVar13);
      puVar13 = puVar19;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar13 == (undefined *)0x0) {
        func_0x000107c61170(puVar19);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(puStack_138);
        FUN_102f080f0(&puStack_a0,0x112f28010,&UNK_10db63be0);
        func_0x000107c61170(puVar24);
      }
      else {
        puVar10 = puVar13;
        puStack_148 = puVar17;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar13);
        func_0x00010006c00c(puVar10,puVar15);
        puVar17 = puVar27;
        func_0x000107c61558();
        puVar13 = puVar27;
        if (((ulong)puVar17 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          func_0x000100f23260(0,*(long *)(puVar27 + 0x10) + 1,1,puVar27);
        }
        uVar20 = *(ulong *)(puVar13 + 0x10);
        puVar27 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar20) {
          puVar27 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          func_0x000100f23260(puVar27,uVar20 + 1,1,puVar13);
        }
        *(ulong *)(puVar27 + 0x10) = uVar20 + 1;
        *(undefined **)(puVar27 + uVar20 * 0x10 + 0x20) = puVar10;
        *(undefined **)(puVar27 + uVar20 * 0x10 + 0x28) = puVar15;
        func_0x000107c61170(puVar19);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(puStack_138);
        FUN_102f080f0(&puStack_a0,0x112f28010,&UNK_10db63be0);
        func_0x000107c61170(puVar24);
        func_0x00010006c090(puVar10,puVar15);
        puVar14 = puStack_110;
        puVar17 = puStack_148;
      }
      FUN_102f080f0(lStack_1a8,0x112d373d8,&UNK_10d9014c0);
      puVar24 = puVar27;
      func_0x000107c5fc48(puVar27,PTR___s10Foundation4DataVN_110350ae0);
      func_0x000107c6142c(puVar27);
      puVar15 = puStack_140;
      func_0x000107c55354(puStack_140);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar24);
    }
  }
  else {
    func_0x000107c614ac(puVar17);
    FUN_102f080f0(&puStack_78,0x112dc3ff0,&UNK_10d981690);
    puVar16 = (undefined *)0x0;
    puVar14 = puStack_110;
  }
  uVar20 = *puVar14;
  if (uVar20 >> 0x3e == 0) {
    uVar22 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar22 = uVar20 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar20) {
      uVar22 = uVar20;
    }
    func_0x000107c60480();
  }
  if (uVar22 != 0) {
    if ((uVar20 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar20 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07d88);
        (*pcVar3)();
      }
      uVar22 = *(ulong *)(uVar20 + 0x20);
      func_0x000107c615f0(uVar22);
    }
    else {
      uVar22 = 0;
      FUN_10274d138(0,uVar20);
    }
    uVar20 = uVar22;
    func_0x000107c61150(uVar22,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
    if ((uVar20 & 1) == 0) {
      func_0x000107c615e8(uVar22);
    }
    else {
      uVar20 = uVar22;
      func_0x000107c4d1e0();
      func_0x000107c61180();
      func_0x000107c615e8(uVar22);
      if (uVar20 != 0) {
        uVar22 = uVar20;
        func_0x000107c5fc54(uVar20,puVar23);
        func_0x000107c61170(uVar20);
        if (uVar22 >> 0x3e != 0) {
          uVar20 = uVar22 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar22) {
            uVar20 = uVar22;
          }
          func_0x000107c60480(uVar20);
        }
        func_0x000107c6142c(uVar22);
      }
    }
  }
  if (uStack_14c == 0) {
    if ((*(byte *)((long)puVar14 + 0x62) & 1) != 0) {
      puVar15 = puStack_100;
      func_0x000107c4008c();
      func_0x000107c61180();
      puVar17 = puVar15;
      func_0x000107c41844();
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      puVar15 = puVar17;
      func_0x000107c5bf1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      puVar17 = puVar15;
      func_0x000107c5fc54(puVar15,puStack_130);
      func_0x000107c61170(puVar15);
      puVar15 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
      if ((ulong)puVar17 >> 0x3e == 0) {
        puVar24 = *(undefined **)(puVar15 + 0x10);
      }
      else {
        puVar24 = puVar15;
        if ((undefined *)0x7fffffffffffffff < puVar17) {
          puVar24 = puVar17;
        }
        func_0x000107c60480();
      }
      puVar23 = (undefined *)0x0;
      do {
        if (puVar24 == puVar23) {
          func_0x000107c6142c(puVar17);
          puVar14 = puStack_110;
          goto LAB_102f07bbc;
        }
        if (((ulong)puVar17 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07ce8);
            (*pcVar3)();
          }
          puVar9 = *(undefined **)(puVar17 + (long)puVar23 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar9 = puVar23;
          func_0x000102f02874(puVar23,puVar17,&PTR_PTR_1126becd8,0x112d51360);
        }
        if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07bb0);
          (*pcVar3)();
        }
        puVar27 = puVar9;
        func_0x000107c5d0f0();
        func_0x000107c61170(puVar9);
        puVar23 = puVar23 + 1;
      } while ((int)puVar27 == 2);
      func_0x000107c6142c(puVar17);
      puVar14 = puStack_110;
      goto LAB_102f07a2c;
    }
LAB_102f07bbc:
    if (puVar16 != (undefined *)0x0) {
      puVar15 = puVar16;
      func_0x000107c61174(puVar16);
      if (puStack_128 == (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = puStack_128;
        func_0x000107c4a5e0();
      }
      FUN_102eed220(puStack_f8,puVar15,puVar14,puVar17);
      func_0x000107c61170(puVar15);
    }
    puVar15 = puStack_100;
    func_0x000102f0e1c0(puStack_100,0);
    func_0x0001000285a8(0x112f27ba8,&UNK_10db63700);
    ppuVar11 = ppuStack_1b0;
    func_0x000107c51ef0(ppuStack_1b0);
    func_0x000107c61180();
    ppuVar12 = ppuVar11;
    func_0x000103edf20c();
    func_0x000107c61170(puStack_128);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(ppuVar11);
    func_0x000102edda80(puStack_120,uStack_114);
  }
  else {
LAB_102f07a2c:
    puVar15 = puStack_128;
    FUN_102eeb610(puStack_f8,puVar14,puStack_128,uStack_174 & 1);
    func_0x0001000285a8(0x112f27ba8,&UNK_10db63700);
    puVar17 = PTR_PTR_1126ac790;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar12 = apuStack_e0;
    apuStack_e0[0] = puVar17;
    func_0x000104888f7c(ppuVar12);
    func_0x000102edda80(puStack_120,uStack_114);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar16);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar12;
  }
  func_0x000107c60e78();
LAB_102f07e30:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102f07e34);
  (*pcVar3)();
}



/* Entry: 102f07e44; end: 102f07e4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f07e44(undefined8 *param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  long unaff_x20;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar3 = *(long *)(unaff_x20 + 0xa8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xb0);
  puVar10 = (ulong *)(unaff_x20 + 0x10);
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c614cc(*param_1,auStack_68,auStack_80);
    func_0x000102f09f7c(puVar10,uStack_78,uStack_70);
    func_0x00010488ade0();
    puVar9 = puVar10;
    goto LAB_102eee88c;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar23 = *(long *)(unaff_x20 + 0x68);
  if (lVar23 != 0) {
    func_0x0001000d224c(apuStack_b0);
    func_0x0001000a8868(apuStack_b0,uStack_98);
    uVar7 = 0;
    func_0x000102ed4660(0);
    FUN_102ed5b88((uint)uVar2 & 0x101,lVar23,uVar7,&PTR_DAT_1105e5c80);
    func_0x0001000834e4(apuStack_b0);
  }
  func_0x0001000d224c(apuStack_b0);
  puVar8 = apuStack_b0[0];
  func_0x000107c43c88(apuStack_b0[0]);
  func_0x000107c615e8(puVar8);
  puVar22 = *(ulong **)(unaff_x20 + 0x48);
  if (puVar22 == (ulong *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102eeea74);
    (*pcVar5)();
  }
  func_0x000107c615f4(puVar22,2);
  puVar8 = PTR_PTR_1126c33d0;
  func_0x000107c61168(PTR_PTR_1126c33d0);
  puVar9 = puVar22;
  func_0x000107c61490(puVar22,puVar8,0,0,0);
  func_0x000102f18da0();
  if (*puVar10 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_102f1ba04();
  puVar1 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (ulong *)0x0) {
    puVar1 = puVar10;
  }
  puVar18 = *(undefined **)(unaff_x20 + 0x58);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar18 != (undefined *)0x0) {
    puVar8 = puVar18;
  }
  puVar10 = puVar22;
  if (*(long *)(unaff_x20 + 0x50) == 0) {
    func_0x000107c61438(puVar18,2);
    puVar18 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    func_0x000107c6148c(puVar22,puVar18);
    if (puVar10 != (ulong *)0x0) {
      lVar23 = 0;
      goto LAB_102eee2ac;
    }
    func_0x000107c615e8(puVar22);
    lVar23 = 0;
    puVar10 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar23 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_11307fc78) + 0x10);
    func_0x000107c61438(puVar18,2);
    puVar18 = PTR_PTR_1126c33d0;
    func_0x000107c61168(PTR_PTR_1126c33d0);
    func_0x000107c6148c(puVar22,puVar18);
    if (puVar10 == (ulong *)0x0) {
      func_0x000107c615e8(puVar22);
      puVar10 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
LAB_102eee2ac:
      puVar11 = puVar10;
      func_0x000107c4c558();
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = (ulong *)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar11 != (ulong *)0x0) {
        puVar12 = puVar11;
        func_0x000107c5fc54(puVar11,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61170(puVar11);
        puVar11 = puVar12;
        func_0x000101158fcc();
        func_0x000107c6142c(puVar12);
        if (puVar11 != (ulong *)0x0) {
          puVar10 = puVar11;
        }
      }
    }
  }
  uVar20 = puVar10[2];
  func_0x000107c6142c(puVar10);
  if (SCARRY8(lVar23,uVar20)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102eee63c);
    (*pcVar5)();
  }
  puVar18 = PTR_PTR_1126c33d0;
  func_0x000107c61168(PTR_PTR_1126c33d0);
  puVar10 = puVar22;
  func_0x000107c6148c(puVar22,puVar18);
  if (puVar10 == (ulong *)0x0) {
    func_0x000107c615e8(puVar22);
LAB_102eee3b8:
    if (lVar23 == 0) goto LAB_102eee3a4;
LAB_102eee3c0:
    bVar6 = true;
  }
  else {
    func_0x000107c4455c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar22);
    if (puVar10 == (ulong *)0x0) goto LAB_102eee3b8;
    puVar22 = puVar10;
    func_0x000107c5fc54(puVar10,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61170(puVar10);
    func_0x000107c6142c(puVar22);
    if (lVar23 != 0) goto LAB_102eee3c0;
LAB_102eee3a4:
    bVar6 = uVar20 != 0;
  }
  if ((ulong)puVar8 >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar18 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      puVar18 = puVar8;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(puVar8);
  uVar20 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar20 >> 0x3e == 0) {
    uVar19 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = uVar20 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar20) {
      uVar19 = uVar20;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR_PTR_1126d4cd0;
  lVar23 = _DAT_112f27e48;
  if (uVar19 != 0) {
    uVar21 = 0;
    do {
      if ((uVar20 & 0xc000000000000001) == 0) {
        if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102eee61c);
          (*pcVar5)();
        }
        if (*(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102eee620);
          (*pcVar5)();
        }
        bVar4 = *(byte *)(*(long *)(uVar20 + 0x20 + uVar21 * 8) + 0x61);
      }
      else {
        uVar13 = uVar21;
        FUN_102f02a90(uVar21,uVar20);
        if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102eeea70);
          (*pcVar5)();
        }
        bVar4 = *(byte *)(uVar13 + 0x61);
        func_0x000107c615e8();
      }
      puVar14 = PTR_PTR_1126d4cd0;
      lVar23 = _DAT_112f27e48;
    } while (((bVar4 & 1) == 0) && (uVar21 = uVar21 + 1, uVar21 != uVar19));
  }
  PTR_PTR_1126d4cd0 = puVar14;
  _DAT_112f27e48 = lVar23;
  if (bVar6) {
    func_0x000107c61428(lVar3 + lVar23,apuStack_b0,0,0);
    uVar20 = lVar3 + lVar23;
    func_0x000107c61618();
    if (uVar20 != 0) {
      uVar19 = uVar20;
      func_0x000107c61150();
      if ((uVar19 & 1) != 0) {
        func_0x000107c41aec(uVar20);
      }
      func_0x000107c615e8(uVar20);
    }
    if ((long)puVar18 < 1) {
      func_0x000107c6142c(puVar8);
      puVar14 = PTR_PTR_1126d4cd0;
      func_0x000107c610f8();
      func_0x000107c61174(puVar9);
      func_0x000107c453e4();
      func_0x000107c5a0f8();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c55570(puVar14);
      func_0x000107c61170(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c55718(puVar14);
      func_0x000107c61170(puVar8);
      puVar8 = PTR___sSSN_11034da80;
      puVar10 = puVar1;
      func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
      func_0x000107c57654(puVar14);
      func_0x000107c61170(puVar10);
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,puVar8);
      func_0x000107c57624(puVar14);
      func_0x000107c61170(puVar17);
      uVar15 = 0;
      FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
      puVar8 = puVar18;
      func_0x000107c5fc48(puVar18,uVar15);
      func_0x000107c57628(puVar14);
      func_0x000107c61170(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c555e8(puVar14);
      func_0x000107c61170(puVar8);
      func_0x000107c5fc48(puVar18,PTR___s10Foundation4DataVN_110350ae0);
      func_0x000107c58df8(puVar14);
      func_0x000107c61170(puVar18);
      func_0x000107c560f8(puVar14);
      func_0x000107c6142c(puVar1);
      func_0x000107c61170(puVar9);
      puStack_88 = puVar14;
      func_0x000100b60084(&puStack_88);
      func_0x000107c61170(puVar14);
      goto LAB_102eee88c;
    }
    puVar14 = PTR_PTR_1126d4cd0;
    func_0x000107c610f8();
    func_0x000107c61174(puVar9);
    func_0x000107c453e4();
    func_0x000107c5a0f8();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c55570(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c55718(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR___sSSN_11034da80;
    puVar10 = puVar1;
    func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
    func_0x000107c57654(puVar14);
    func_0x000107c61170(puVar10);
    func_0x000107c5fc48(uVar15,puVar18);
    func_0x000107c57624(puVar14);
    func_0x000107c61170(uVar15);
    uVar15 = 0;
    FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
    puVar18 = puVar8;
    func_0x000107c5fc48(puVar8,uVar15);
    func_0x000107c57628(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c555e8(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___s10Foundation4DataVN_110350ae0)
    ;
    func_0x000107c58df8(puVar14);
    func_0x000107c61170(puVar18);
    func_0x000107c560f8(puVar14);
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(puVar9);
    ppuVar16 = &puStack_88;
    puStack_88 = puVar14;
  }
  else {
    func_0x000107c610f8();
    func_0x000107c61174(puVar9);
    func_0x000107c453e4();
    func_0x000107c5a0f8();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c55570(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c55718(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR___sSSN_11034da80;
    puVar10 = puVar1;
    func_0x000107c5fc48(puVar1,PTR___sSSN_11034da80);
    func_0x000107c57654(puVar14);
    func_0x000107c61170(puVar10);
    func_0x000107c5fc48(uVar15,puVar18);
    func_0x000107c57624(puVar14);
    func_0x000107c61170(uVar15);
    uVar15 = 0;
    FUN_102f09540(0,0x112d51360,&PTR_PTR_1126becd8);
    puVar18 = puVar8;
    func_0x000107c5fc48(puVar8,uVar15);
    func_0x000107c57628(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c555e8(puVar14);
    func_0x000107c61170(puVar18);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___s10Foundation4DataVN_110350ae0)
    ;
    func_0x000107c58df8(puVar14);
    func_0x000107c61170(puVar18);
    func_0x000107c560f8(puVar14);
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar8);
    func_0x000107c61170(puVar9);
    ppuVar16 = apuStack_b0;
    apuStack_b0[0] = puVar14;
  }
  func_0x000100b60084(ppuVar16);
  func_0x000107c61170(puVar14);
LAB_102eee88c:
  func_0x000107c61170(puVar9);
  return;
}



/* Entry: 102f07e50; end: 102f07e67;  */

void FUN_102f07e50(void)

{
  FUN_102f1c314();
  return;
}



/* Entry: 102f07e68; end: 102f07e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f07e68(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0,uVar1,lVar5,unaff_x20 + 0x30);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      lVar8 = *(long *)(*(long *)(lVar3 + _DAT_112f27f10) + _DAT_112ff2c78);
      func_0x000107c61174(param_1);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        uVar4 = uVar7;
        func_0x000107c5fadc(uVar7,uVar1);
        func_0x000107c49c14(param_1);
        func_0x000107c5d628(lVar8);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61428(lVar5 + 0x10,auStack_80,0,0);
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar5 = lVar8;
      func_0x000107c6157c();
      FUN_102f1b6e8();
      func_0x000107c61574(lVar8);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar3 + _DAT_112f27f18);
        func_0x000107c5bf64();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102eeb598);
          (*pcVar2)();
        }
        lVar8 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar8 != 0) {
          lVar5 = param_1;
          func_0x000107c412d0(param_1);
          func_0x000107c61180();
          lVar6 = lVar5;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar5);
          lVar5 = lVar6;
          func_0x000107c5ee20(lVar6,uVar7);
          func_0x00010006c090(lVar6,uVar7);
          func_0x000107c516bc(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(lVar5);
        }
        func_0x000107c61170(lVar3);
        lVar3 = param_1;
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102f07e84; end: 102f07ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f07e84(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar6 = 0;
  func_0x000107c5eea4();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar7 = auStack_68;
  func_0x000107c61428(lVar6 + 0x10,puVar7,0,0,
                      unaff_x20 + (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff)));
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174();
      func_0x000107c60bb4(0x3fe999999999999a);
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c5ee30();
        func_0x000107c61170(param_1);
        lVar3 = *(long *)(lVar6 + _DAT_112f27f18);
        func_0x000107c5bf98();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102eeb144);
          (*pcVar1)();
        }
        lVar4 = lVar2;
        func_0x000107c5ee20(lVar2,puVar7);
        lVar5 = lVar4;
        func_0x000107c5ee70();
        func_0x000107c3d8c8(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x00010006c090(lVar2,puVar7);
      }
      func_0x000107c61170(lVar6);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102f07ed4; end: 102f07f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f07ed4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + _DAT_112f27f10);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar2 = *(long *)(lVar5 + _DAT_112ff2c78);
    func_0x000107c61174();
    func_0x000107c61170(lVar5);
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c5d5b0(uVar6,lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 102f07f04; end: 102f07f27;  */

void FUN_102f07f04(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102f07f28; end: 102f07f63;  */

/* WARNING: Possible PIC construction at 0x000102eef944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eef948) */

void FUN_102f07f28(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,long param_5)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  if (param_4 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_3,param_4);
  }
  else {
    param_3 = 0;
  }
  if (param_5 != 0) {
    func_0x000107c5ed2c(param_5);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f07f64; end: 102f07fc7;  */

void FUN_102f07f64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102f07fc8; end: 102f07fcf;  */

void FUN_102f07fc8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



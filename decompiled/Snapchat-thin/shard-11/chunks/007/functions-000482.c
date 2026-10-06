/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10888c1cc; end: 10888c1f3;  */

void FUN_10888c1cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1088912dc(param_1,param_2);
  return;
}



/* Entry: 10888c1f4; end: 10888c2ff;  */

long FUN_10888c1f4(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    FUN_10889e5a0(param_1,param_2);
    lVar1 = param_2;
    FUN_10889e380();
    func_0x00010889e3ac();
    func_0x00010889e5cc(param_1,lVar1,param_2);
  }
  return param_1;
}



/* Entry: 10888c300; end: 10888c3b7;  */

undefined8 FUN_10888c300(undefined8 param_1)

{
  FUN_10889eaec();
  return param_1;
}



/* Entry: 10888c3b8; end: 10888c473;  */

void FUN_10888c3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = param_3;
  uStack_58 = param_2;
  uStack_50 = param_1;
  FUN_10889eb50(param_1,param_2,param_2,param_3);
  uStack_30._0_1_ = (undefined1)param_2;
  uStack_68 = (undefined1)uStack_30;
  uStack_70 = param_1;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_10889c554(&uStack_48,&uStack_70);
  uVar1 = uStack_60;
  if ((bStack_40 & 1) == 0) {
    puVar2 = &uStack_48;
    FUN_10888c594(puVar2);
    FUN_10889eeb8(puVar2 + 4,uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28,uStack_48,
                      CONCAT71(uStack_3f,bStack_40));
  }
  return;
}



/* Entry: 10888c474; end: 10888c4bb;  */

void FUN_10888c474(undefined8 param_1)

{
  func_0x000108891474(param_1);
  return;
}



/* Entry: 10888c4bc; end: 10888c593;  */

void FUN_10888c4bc(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  
  func_0x00010888bad0(param_2,param_3);
  if (param_2 != 0) {
    plVar1 = (long *)(param_1 + 0x1a0);
    FUN_108885c24();
    (**(code **)(*plVar1 + 0x48))();
  }
  return;
}



/* Entry: 10888c594; end: 10888c5bb;  */

void FUN_10888c594(undefined8 param_1)

{
  FUN_10889f5d0(param_1);
  FUN_10889dee0();
  return;
}



/* Entry: 10888c5bc; end: 10888c5f3;  */

void FUN_10888c5bc(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return;
}



/* Entry: 10888c5f4; end: 10888c7d7;  */

undefined8 FUN_10888c5f4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c2884c(param_1,param_2);
  return param_1;
}



/* Entry: 10888c7d8; end: 10888c7ef;  */

undefined8 FUN_10888c7d8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888c7f0; end: 10888c853;  */

void FUN_10888c7f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1088a095c(param_1,param_2);
  FUN_1088a0a3c();
  FUN_1088a0a60(param_1,lVar1,lVar1);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return;
}



/* Entry: 10888c854; end: 10888c873;  */

void FUN_10888c854(long *param_1)

{
  *param_1 = *param_1 + 0x20;
  return;
}



/* Entry: 10888c874; end: 10888c8a7;  */

undefined8 FUN_10888c874(undefined8 param_1)

{
  func_0x0001088a0cfc(param_1);
  return param_1;
}



/* Entry: 10888c8a8; end: 10888c8c3;  */

byte FUN_10888c8a8(long param_1)

{
  return *(byte *)(param_1 + 0x18) & 1;
}



/* Entry: 10888c8c4; end: 10888c913;  */

void FUN_10888c8c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a1070(param_1,param_2);
  return;
}



/* Entry: 10888c914; end: 10888c93b;  */

long FUN_10888c914(long *param_1)

{
  return (param_1[1] - *param_1) / 0x38;
}



/* Entry: 10888c93c; end: 10888c95f;  */

void FUN_10888c93c(undefined8 param_1)

{
  func_0x0001088916c0(param_1);
  return;
}



/* Entry: 10888c960; end: 10888ca2f;  */

undefined8 * FUN_10888c960(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_108891704(uVar1);
  FUN_1088916d4(param_1,uVar1);
  return param_1;
}



/* Entry: 10888ca30; end: 10888ca47;  */

undefined8 FUN_10888ca30(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888ca48; end: 10888ca6f;  */

uint FUN_10888ca48(undefined8 param_1)

{
  FUN_10888b1ac(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 10888ca70; end: 10888caa3;  */

undefined8 FUN_10888ca70(undefined8 param_1)

{
  func_0x000107c27914(param_1);
  return param_1;
}



/* Entry: 10888caa4; end: 10888cb77;  */

void FUN_10888caa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_2;
  uStack_40 = param_1;
  func_0x0001088a1520();
  uStack_20._0_1_ = (undefined1)param_2;
  uStack_50 = (undefined1)uStack_20;
  uStack_58 = param_1;
  uStack_28 = param_1;
  uStack_20 = param_2;
  FUN_1088a159c(&uStack_38,&uStack_58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_18 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_18,uStack_38,uStack_30);
  }
  return;
}



/* Entry: 10888cb78; end: 10888cc33;  */

undefined8 FUN_10888cb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1088917a0(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 10888cc34; end: 10888cc53;  */

void FUN_10888cc34(long *param_1)

{
  *param_1 = *param_1 + 0x38;
  return;
}



/* Entry: 10888cc54; end: 10888cd2f;  */

void FUN_10888cc54(undefined8 param_1)

{
  func_0x0001088a2264(param_1);
  return;
}



/* Entry: 10888cd30; end: 10888cd63;  */

undefined8 FUN_10888cd30(undefined8 param_1)

{
  FUN_1088a227c(param_1);
  return param_1;
}



/* Entry: 10888cd64; end: 10888cdb7;  */

void FUN_10888cd64(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c2a1dc(auStack_38,param_2);
  FUN_1088a27b8(param_1,auStack_38);
  func_0x000107c27f9c(auStack_38);
  return;
}



/* Entry: 10888cdb8; end: 10888ce17;  */

undefined8 FUN_10888cdb8(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_108891e98(auStack_18);
  return param_1;
}



/* Entry: 10888ce18; end: 10888ce87;  */

undefined8 FUN_10888ce18(undefined8 param_1,undefined4 param_2)

{
  FUN_10869429c(param_1,param_2);
  return param_1;
}



/* Entry: 10888ce88; end: 10888ceaf;  */

void FUN_10888ce88(undefined8 param_1,undefined8 param_2)

{
  FUN_1088920c8(param_1,param_2);
  return;
}



/* Entry: 10888ceb0; end: 10888cf2f;  */

void FUN_10888ceb0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_30 [8];
  ulong uStack_28;
  
  uVar2 = param_1;
  uStack_28 = param_1;
  func_0x000107c2a1f0();
  FUN_10888e2bc();
  if ((uVar2 & 1) == 0) {
    func_0x000107c2a1f0(param_1);
    FUN_108892140();
    return;
  }
  func_0x000107c2a1f0(param_1);
  __ZNSt13exception_ptrC1ERKS_(auStack_30,param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10888cf18);
  (*pcVar1)();
}



/* Entry: 10888cf30; end: 10888d027;  */

undefined8 FUN_10888cf30(undefined8 param_1,undefined8 param_2)

{
  FUN_1088921a8(param_1,param_2);
  return param_1;
}



/* Entry: 10888d028; end: 10888d043;  */

byte FUN_10888d028(long param_1)

{
  return *(byte *)(param_1 + 4) & 1;
}



/* Entry: 10888d044; end: 10888d557;  */

void FUN_10888d044(double param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  byte param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  ulong **ppuVar11;
  ulong ***pppuVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [24];
  undefined8 ***pppuStack_1e0;
  ulong **ppuStack_1d8;
  ulong **ppuStack_1d0;
  ulong **ppuStack_1c8;
  ulong **ppuStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [40];
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [32];
  ulong *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  byte bStack_a1;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 auStack_80 [2];
  
  bStack_a1 = param_6 & 1;
  uStack_b8 = param_8;
  puStack_b0 = param_7;
  uStack_a0 = param_5;
  uStack_98 = param_4;
  uStack_90 = param_3;
  lStack_88 = param_2;
  auStack_80[0] = param_9;
  FUN_108848684(auStack_e8);
  func_0x000107c29e04(auStack_d0,auStack_e8);
  func_0x000108888464(auStack_e8);
  FUN_10888d5d8(auStack_80);
  uVar4 = uStack_90;
  FUN_1088882e0();
  lStack_100 = (long)(param_1 / (double)uVar4);
  uStack_108 = uStack_90;
  uVar4 = uStack_90;
  FUN_108889688();
  uVar5 = uStack_108;
  uStack_110 = uVar4;
  func_0x0001088896cc();
  uStack_118 = uVar5;
  while( true ) {
    puVar6 = &uStack_110;
    func_0x000108889710(puVar6,&uStack_118);
    if ((((uint)puVar6 ^ 1) & 1) == 0) break;
    puVar6 = &uStack_110;
    FUN_108889758();
    puStack_120 = puVar6;
    func_0x00010884431c(auStack_140,puVar6);
    uVar4 = 0;
    func_0x00010888d5fc();
    if ((uVar4 & 1) != 0) {
      FUN_10888d624(auStack_158);
      uVar16 = uStack_b8;
      FUN_10888d658(uStack_b8,puStack_120 + 3);
      uVar7 = uStack_b8;
      uStack_160 = uVar16;
      func_0x00010888d6c8();
      puVar8 = &uStack_160;
      uStack_170 = uVar7;
      func_0x00010888d698(puVar8,&uStack_170);
      puVar15 = puStack_b0;
      if ((((uint)puVar8 ^ 1) & 1) != 0) {
        puVar8 = &uStack_160;
        func_0x00010888d700();
        puVar15 = puVar8 + 6;
      }
      uStack_168 = *(undefined4 *)puVar15;
      uStack_164 = *(undefined4 *)((long)puVar15 + 4);
      uVar16 = uStack_b8;
      func_0x00010888d6c8();
      puVar8 = &uStack_160;
      uStack_1a0 = uVar16;
      func_0x00010888d698(puVar8,&uStack_1a0);
      if ((((uint)puVar8 ^ 1) & 1) == 0) {
        FUN_1088898c0(auStack_198);
      }
      else {
        puVar8 = &uStack_160;
        func_0x00010888d700(puVar8);
        FUN_10888d728(auStack_198,puVar8 + 1);
      }
      puVar8 = puStack_b0;
      FUN_10888d028();
      if (((ulong)puVar8 & 1) == 0) {
        puVar6 = puStack_120 + 10;
        FUN_108886b3c();
        func_0x000108886b60();
        puStack_1a8 = puVar6;
        func_0x000108886b84();
        puVar9 = puStack_1a8;
        puStack_1b0 = puVar6;
        FUN_108886bc4();
        puStack_1b8 = puVar9;
        while( true ) {
          ppuVar10 = &puStack_1b0;
          FUN_108886c24(ppuVar10,&puStack_1b8);
          if (((ulong)ppuVar10 & 1) == 0) break;
          ppuVar10 = &puStack_1b0;
          func_0x000108886c54();
          ppuStack_1c0 = ppuVar10;
          FUN_108886c70();
          ppuStack_1c8 = ppuVar10;
          func_0x000108886d60();
          ppuVar11 = ppuStack_1c8;
          ppuStack_1d0 = ppuVar10;
          FUN_108886da0();
          ppuStack_1d8 = ppuVar11;
          while( true ) {
            pppuVar12 = &ppuStack_1d0;
            func_0x000107c2a1c4(pppuVar12,&ppuStack_1d8);
            if (((ulong)pppuVar12 & 1) == 0) break;
            pppuVar12 = &ppuStack_1d0;
            func_0x000107c2a1c8();
            puVar14 = auStack_198;
            pppuStack_1e0 = pppuVar12;
            FUN_10888d764(puVar14,pppuVar12);
            if (puVar14 == (undefined1 *)0x0) {
              uVar4 = 0;
              func_0x000108889800();
              if ((uVar4 & 1) == 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                          (auStack_158,&DAT_10f68e8ee);
              }
              func_0x00010888ab30(auStack_208,pppuStack_1e0);
              FUN_108668260(auStack_208);
              __ZNSt3__19to_stringEx(auStack_1f8);
              func_0x000107c27fc4(auStack_158,auStack_1f8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_1f8);
            }
            func_0x000107c2a1cc(&ppuStack_1d0);
          }
          FUN_108886e00(&puStack_1b0);
        }
      }
      puVar6 = puStack_120 + 4;
      func_0x00010888d790();
      if ((((ulong)puVar6 & 1) != 0) && (uVar4 = uStack_a0, FUN_1088894bc(), (uVar4 & 1) != 0)) {
        uVar4 = uStack_a0;
        func_0x00010888d7b8();
        puVar6 = puStack_120 + 4;
        func_0x00010888996c();
        FUN_10883fbf0(uVar4,param_2 + 0x10,*puVar6);
      }
      plVar13 = (long *)(param_2 + 0x1d0);
      FUN_10888d7dc();
      puVar14 = auStack_140;
      FUN_10888d7f4(puVar14);
      bVar2 = bStack_a1;
      lVar1 = lStack_100;
      uVar16 = *(undefined8 *)(param_2 + 0x80);
      puVar6 = puStack_120 + 10;
      FUN_108886b3c(puVar6);
      func_0x00010888d818();
      puVar9 = puStack_120 + 10;
      FUN_10888a9ec();
      iVar3 = (int)puStack_120 + 0x50;
      func_0x000108889770();
      func_0x00010888d83c();
      FUN_108886b3c();
      func_0x00010888d860();
      (**(code **)(*plVar13 + 0x10))
                (plVar13,puVar14,auStack_d0,uVar16,bVar2 & 1,&uStack_168,lVar1,puVar6,auStack_158,
                 puVar9,iVar3);
      func_0x000107f4cdbc(auStack_198);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_158);
    }
    FUN_10888d884(auStack_140);
    FUN_10888a290(&uStack_110);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_d0);
  return;
}



/* Entry: 10888d558; end: 10888d5d7;  */

void FUN_10888d558(long param_1)

{
  FUN_10888e360(param_1 + 8);
  FUN_1088a2608();
  func_0x000107c27fa0(param_1 + 8,0);
  return;
}



/* Entry: 10888d5d8; end: 10888d623;  */

void FUN_10888d5d8(undefined8 param_1)

{
  FUN_1088a2830(param_1);
  return;
}



/* Entry: 10888d624; end: 10888d657;  */

undefined8 FUN_10888d624(undefined8 param_1)

{
  FUN_1088940e4(param_1);
  return param_1;
}



/* Entry: 10888d658; end: 10888d727;  */

undefined8 FUN_10888d658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_1088a2958(param_1,param_2);
  FUN_10889a898(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10888d728; end: 10888d763;  */

undefined8 FUN_10888d728(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c283d0(param_1,param_2);
  return param_1;
}



/* Entry: 10888d764; end: 10888d7db;  */

void FUN_10888d764(undefined8 param_1,undefined8 param_2)

{
  func_0x0001067e0440(param_1,param_2);
  return;
}



/* Entry: 10888d7dc; end: 10888d7f3;  */

undefined8 FUN_10888d7dc(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888d7f4; end: 10888d883;  */

void FUN_10888d7f4(undefined8 param_1)

{
  func_0x000108894164(param_1);
  return;
}



/* Entry: 10888d884; end: 10888d923;  */

undefined8 FUN_10888d884(undefined8 param_1)

{
  FUN_1088941d8(param_1);
  return param_1;
}



/* Entry: 10888d924; end: 10888d977;  */

long FUN_10888d924(long param_1)

{
  func_0x000108894310(param_1 + -8);
  return param_1 + -8;
}



/* Entry: 10888d978; end: 10888d9df;  */

undefined8 FUN_10888d978(undefined8 param_1)

{
  func_0x00010888d9ac(param_1);
  return param_1;
}



/* Entry: 10888d9e0; end: 10888d9f3;  */

undefined8 FUN_10888d9e0(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888d9f4; end: 10888dad3;  */

undefined8 FUN_10888d9f4(undefined8 param_1,undefined4 param_2)

{
  func_0x00010888da30(param_1,param_2);
  return param_1;
}



/* Entry: 10888dad4; end: 10888dafb;  */

void FUN_10888dad4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a80240;
  return;
}



/* Entry: 10888dafc; end: 10888db2f;  */

undefined8 FUN_10888dafc(undefined8 param_1)

{
  FUN_10888db50(param_1);
  return param_1;
}



/* Entry: 10888db30; end: 10888db4f;  */

void FUN_10888db30(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10888db44);
  (*pcVar1)();
}



/* Entry: 10888db50; end: 10888dbf7;  */

undefined8 * FUN_10888db50(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010888db90(param_1 + 2);
  return param_1;
}



/* Entry: 10888dbf8; end: 10888dc0b;  */

undefined8 FUN_10888dbf8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888dc0c; end: 10888dde7;  */

long FUN_10888dc0c(long param_1)

{
  func_0x00010888dc48(param_1 + 8);
  func_0x00010888dc7c(param_1);
  return param_1;
}



/* Entry: 10888dde8; end: 10888ddfb;  */

undefined8 FUN_10888dde8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888ddfc; end: 10888df47;  */

long FUN_10888ddfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10888e1a4(param_2);
  func_0x00010888e0d4(param_1,uVar1);
  func_0x00010888e1c8(param_2);
  FUN_10888e13c(param_1 + 8,param_2);
  return param_1;
}



/* Entry: 10888df48; end: 10888df87;  */

void FUN_10888df48(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10888df88; end: 10888e10f;  */

undefined8 FUN_10888df88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010888dfcc(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 10888e110; end: 10888e13b;  */

void FUN_10888e110(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



/* Entry: 10888e13c; end: 10888e177;  */

undefined8 FUN_10888e13c(undefined8 param_1,undefined8 param_2)

{
  FUN_10888e178(param_1,param_2);
  return param_1;
}



/* Entry: 10888e178; end: 10888e1a3;  */

void FUN_10888e178(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



/* Entry: 10888e1a4; end: 10888e1ef;  */

void FUN_10888e1a4(undefined8 param_1)

{
  FUN_10888e1f0(param_1);
  return;
}



/* Entry: 10888e1f0; end: 10888e217;  */

undefined8 FUN_10888e1f0(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888e218; end: 10888e2bb;  */

undefined8 FUN_10888e218(undefined8 param_1)

{
  func_0x00010888e24c(param_1);
  return param_1;
}



/* Entry: 10888e2bc; end: 10888e2f7;  */

bool FUN_10888e2bc(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x10;
  func_0x000107c2a1f4(uVar1,5);
  return (uVar1 & 0x20) != 0;
}



/* Entry: 10888e2f8; end: 10888e35f;  */

undefined8 FUN_10888e2f8(undefined8 param_1)

{
  func_0x00010888e32c(param_1);
  return param_1;
}



/* Entry: 10888e360; end: 10888e377;  */

undefined8 FUN_10888e360(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888e378; end: 10888e3b3;  */

long FUN_10888e378(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  func_0x000107c2a1e4(param_2,0x200000000,5);
  return param_2;
}



/* Entry: 10888e3b4; end: 10888e45f;  */

undefined8 FUN_10888e3b4(undefined8 param_1)

{
  func_0x000107c27fb8(param_1);
  return param_1;
}



/* Entry: 10888e460; end: 10888e4ef;  */

void FUN_10888e460(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 10888e4f0; end: 10888e51f;  */

undefined8 FUN_10888e4f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_10888e534(&uStack_18,param_2);
  return uStack_18;
}



/* Entry: 10888e520; end: 10888e533;  */

undefined8 FUN_10888e520(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888e534; end: 10888e56f;  */

undefined8 FUN_10888e534(undefined8 param_1,undefined8 param_2)

{
  FUN_10888e570(param_1,param_2);
  return param_1;
}



/* Entry: 10888e570; end: 10888e5a7;  */

void FUN_10888e570(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10888e5a8; end: 10888e5e7;  */

undefined ** FUN_10888e5a8(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x30);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR_PTR_113286e08;
  }
  return ppuVar1;
}



/* Entry: 10888e5e8; end: 10888e62f;  */

long FUN_10888e5e8(long param_1)

{
  return param_1 + 0xd8;
}



/* Entry: 10888e630; end: 10888e66f;  */

undefined ** FUN_10888e630(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x30);
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR_PTR_11326cb58;
  }
  return ppuVar1;
}



/* Entry: 10888e670; end: 10888e6e7;  */

undefined8 FUN_10888e670(undefined8 param_1,undefined8 param_2)

{
  func_0x00010888e6ac(param_1,param_2);
  return param_1;
}



/* Entry: 10888e6e8; end: 10888e73b;  */

void FUN_10888e6e8(long param_1)

{
  func_0x00010888e718(param_1 + 0x98);
  return;
}



/* Entry: 10888e73c; end: 10888e74f;  */

undefined8 FUN_10888e73c(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888e750; end: 10888e7b7;  */

undefined8 FUN_10888e750(undefined8 param_1)

{
  func_0x00010888e32c(param_1);
  return param_1;
}



/* Entry: 10888e7b8; end: 10888e7db;  */

void FUN_10888e7b8(undefined8 param_1)

{
  FUN_10888e7dc(param_1);
  return;
}



/* Entry: 10888e7dc; end: 10888e7ef;  */

undefined8 FUN_10888e7dc(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888e7f0; end: 10888ea63;  */

undefined8 FUN_10888e7f0(undefined8 param_1)

{
  func_0x00010888e824(param_1);
  return param_1;
}



/* Entry: 10888ea64; end: 10888ea77;  */

undefined8 FUN_10888ea64(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888ea78; end: 10888ead7;  */

void FUN_10888ea78(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010888eab0();
  (*(code *)*puVar1)(param_1);
  return;
}



/* Entry: 10888ead8; end: 10888eaeb;  */

undefined8 FUN_10888ead8(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10888eaec; end: 10888eb53;  */

undefined8 FUN_10888eaec(undefined8 param_1)

{
  FUN_10888ca70(param_1);
  return param_1;
}



/* Entry: 10888eb54; end: 10888eb9f;  */

void FUN_10888eb54(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10888eba0; end: 10888ec17;  */

undefined8 FUN_10888eba0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c27b9c(param_1,param_2);
  return param_1;
}



/* Entry: 10888ec18; end: 10888ec4b;  */

long FUN_10888ec18(long *param_1)

{
  return param_1[1] - *param_1;
}



/* Entry: 10888ec4c; end: 10888ecd3;  */

void FUN_10888ec4c(undefined8 *param_1)

{
  func_0x00010888ec38(*param_1);
  return;
}



/* Entry: 10888ecd4; end: 10888ed0b;  */

ulong FUN_10888ecd4(ulong *param_1)

{
  return *param_1 & 0xfffffffffffffffe;
}



/* Entry: 10888ed0c; end: 10888ed7f;  */

void FUN_10888ed0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  FUN_10888eeb0(param_1);
  lVar2 = param_1;
  FUN_10888edc8(param_1);
  lVar3 = param_1;
  FUN_10888eeb0(param_1);
  lVar4 = param_1;
  FUN_10888eed8(param_1);
  FUN_10888ee98(param_1,lVar1 + lVar2 + 1,lVar3 + lVar4 + 1);
  return;
}



/* Entry: 10888ed80; end: 10888edc7;  */

bool FUN_10888ed80(long param_1)

{
  return *(char *)(param_1 + 0x17) < '\0';
}



/* Entry: 10888edc8; end: 10888ee77;  */

void FUN_10888edc8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10888ed80();
  if ((uVar1 & 1) == 0) {
    FUN_10888ee78(param_1);
  }
  else {
    func_0x00010888efd0(param_1);
  }
  return;
}



/* Entry: 10888ee78; end: 10888ee97;  */

byte FUN_10888ee78(long param_1)

{
  return *(byte *)(param_1 + 0x17) & 0x7f;
}



/* Entry: 10888ee98; end: 10888eeaf;  */

void FUN_10888ee98(void)

{
  return;
}



/* Entry: 10888eeb0; end: 10888eed7;  */

void FUN_10888eeb0(undefined8 param_1)

{
  FUN_10888ef38(param_1);
  FUN_10888ef24();
  return;
}



/* Entry: 10888eed8; end: 10888ef23;  */

long FUN_10888eed8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10888ed80();
  if ((uVar1 & 1) == 0) {
    param_1 = 0x17;
  }
  else {
    func_0x00010888edac(param_1);
  }
  return param_1 - 1;
}



/* Entry: 10888ef24; end: 10888ef37;  */

undefined8 FUN_10888ef24(undefined8 param_1)

{
  return param_1;
}



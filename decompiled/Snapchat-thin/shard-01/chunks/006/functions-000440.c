/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101320500; end: 101320717;  */

undefined * FUN_101320500(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar2 != 0) {
    uVar12 = uVar2;
    func_0x000107c4f378();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    uVar2 = 0x112d4bd28;
    func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
    uVar3 = uVar12;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar12);
    uVar12 = uVar3 & 0xffffffffffffff8;
    if (uVar3 >> 0x3e == 0) {
      uVar10 = *(ulong *)(uVar12 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar10 = uVar12;
      if (0x7fffffffffffffff < uVar3) {
        uVar10 = uVar3;
      }
      func_0x000107c60480();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
    if (uVar10 != 0) {
      uVar5 = 0;
      do {
        while( true ) {
          if ((uVar3 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar12 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1013206d4);
              (*pcVar1)();
            }
            uVar11 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
            func_0x000107c615f0(uVar11);
            uVar9 = uVar2;
          }
          else {
            uVar11 = uVar5;
            uVar9 = uVar3;
            FUN_100f1cdf4();
          }
          if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1013206d0);
            (*pcVar1)();
          }
          uVar13 = uVar5 + 1;
          uVar2 = uVar11;
          func_0x000107c3ee50();
          func_0x000107c61180();
          uVar4 = uVar2;
          func_0x000107c41214();
          func_0x000107c61180();
          func_0x000107c61170(uVar2);
          if (uVar4 == 0) break;
          uVar5 = uVar4;
          func_0x000107c5ee30();
          uVar2 = uVar9;
          func_0x000107c61170(uVar4);
          func_0x000107c615e8(uVar11);
          puVar6 = puVar8;
          func_0x000107c61558();
          puVar7 = puVar8;
          if (((ulong)puVar6 & 1) == 0) {
            uVar2 = *(long *)(puVar8 + 0x10) + 1;
            puVar7 = (undefined *)0x0;
            FUN_100f23260(0,uVar2,1,puVar8);
          }
          uVar4 = *(ulong *)(puVar7 + 0x10);
          uVar11 = uVar4 + 1;
          puVar8 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            uVar2 = uVar11;
            FUN_100f23260(puVar8,uVar11,1,puVar7);
          }
          *(ulong *)(puVar8 + 0x10) = uVar11;
          *(ulong *)(puVar8 + uVar4 * 0x10 + 0x20) = uVar5;
          *(ulong *)(puVar8 + uVar4 * 0x10 + 0x28) = uVar9;
          uVar5 = uVar13;
          if (uVar13 == uVar10) goto LAB_1013206f0;
        }
        func_0x000107c615e8(uVar11);
        uVar2 = uVar9;
        uVar5 = uVar5 + 1;
      } while (uVar13 != uVar10);
    }
LAB_1013206f0:
    func_0x000107c6142c(uVar3);
  }
  return puVar8;
}



/* Entry: 101320718; end: 101320857;  */

void FUN_101320718(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar4 = *param_2;
  puVar1 = &UNK_1103a2b58;
  func_0x000107c613fc(&UNK_1103a2b58,0x20,7);
  puVar5 = (undefined8 *)(puVar1 + 0x10);
  *puVar5 = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0xe000000000000000;
  uStack_50 = 0x101322e30;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1013208d8;
  puStack_58 = &UNK_1103a2b70;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c4c6bc(uVar4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61428(puVar5,&puStack_70,0,0);
  uVar4 = *puVar5;
  uVar6 = *(undefined8 *)(puVar1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8();
  func_0x000107c61434(uVar6);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c48af4();
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar4);
  *param_1 = puVar3;
  return;
}



/* Entry: 101320858; end: 101320923;  */

void FUN_101320858(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = param_2;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    lVar3 = -0x2000000000000000;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(long *)(param_2 + 0x10) = lVar2;
  *(long *)(param_2 + 0x18) = lVar3;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101320924; end: 101320987;  */

void FUN_101320924(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar1;
  func_0x000107c5faec();
  func_0x000107c6142c(param_3);
  uVar3 = uVar3 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar3 = param_3 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    uVar2 = uVar1;
  }
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101320988; end: 1013209a3;  */

void FUN_101320988(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000107c49cec(*param_1,param_2,*param_2);
  return;
}



/* Entry: 1013209a4; end: 101320d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013209a4(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined *apuStack_90 [3];
  long lStack_78;
  
  lVar4 = 0;
  puStack_e0 = param_1;
  func_0x000107c5ed50();
  lVar15 = *(long *)(lVar4 + -8);
  lVar14 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  func_0x000107c600f4(auStack_d8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  FUN_100e15a08();
  func_0x000107c601c0(apuStack_90,lVar4,lVar14);
  puVar13 = PTR___sypN_11034f1a8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (lStack_78 != 0) {
    func_0x000100102924(apuStack_90,auStack_b0);
    func_0x000100102924(auStack_b0,auStack_d8);
    uVar7 = 0;
    func_0x000104409d84(0);
    plVar8 = &lStack_b8;
    func_0x000107c6147c(plVar8,auStack_d8,puVar13 + 8,uVar7,6);
    lVar2 = lStack_b8;
    if ((((ulong)plVar8 & 1) != 0) && (lStack_b8 != 0)) {
      puVar6 = puVar9;
      func_0x000107c61550();
      if (((int)puVar6 == 0) ||
         (((long)puVar9 < 0 || (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            puVar5 = puVar9;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_1013216b8(0,puVar5 + 1,1,puVar9,FUN_1013217f0,FUN_101321910);
      }
      uVar12 = (ulong)puVar6 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar12 + 0x10);
      puVar9 = puVar6;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_1013216b8(puVar9,uVar1 + 1,1,puVar6,FUN_1013217f0,FUN_101321910);
        uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
      *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar2;
    }
    func_0x000107c601c0(apuStack_90,lVar4,lVar14);
  }
  (**(code **)(lVar15 + 8))(auStack_d8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),lVar4);
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar13 = puVar9;
    }
    func_0x000107c60480();
  }
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c6142c(puVar9);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_90[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101321b3c(0,(ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101320d58);
      (*pcVar3)();
    }
    puVar5 = (undefined *)0x0;
    do {
      puVar6 = apuStack_90[0];
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        puVar10 = *(undefined **)(puVar9 + (long)puVar5 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar10 = puVar5;
        FUN_101321510(puVar5,puVar9);
      }
      lVar14 = *(long *)((long)(puVar10 + _DAT_1130775b8) + 8);
      if (lVar14 == 0) {
        uVar7 = 0;
        lVar4 = -0x2000000000000000;
      }
      else {
        uVar7 = *(undefined8 *)(puVar10 + _DAT_1130775b8);
        lVar4 = lVar14;
      }
      lVar15 = *(long *)(puVar10 + _DAT_1130775c8);
      puVar11 = PTR_PTR_1126a6a88;
      func_0x000107c610f8();
      func_0x000107c61434(lVar14);
      func_0x000107c5fadc(uVar7,lVar4);
      func_0x000107c6142c(lVar4);
      func_0x000107c46c98((double)lVar15);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(uVar7);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      apuStack_90[0] = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        func_0x000101321b3c(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = apuStack_90[0];
      puVar5 = puVar5 + 1;
      *(ulong *)(apuStack_90[0] + 0x10) = uVar1 + 1;
      *(undefined **)(apuStack_90[0] + uVar1 * 8 + 0x20) = puVar11;
    } while (puVar13 != puVar5);
    func_0x000107c6142c(puVar9);
  }
  uVar7 = 0;
  FUN_101322e84(0,0x112d72a20,&PTR_PTR_1126a6a88);
  puVar9 = puVar6;
  func_0x000107c5fc48(puVar6,uVar7);
  func_0x000107c6142c(puVar6);
  *puStack_e0 = puVar9;
  return;
}



/* Entry: 101320d58; end: 101320dcf;  */

void FUN_101320d58(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5cdb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  lVar1 = lVar2;
  FUN_10131e8c4();
  func_0x000107c61170(lVar2);
  *param_1 = lVar1;
  return;
}



/* Entry: 101320dd0; end: 101320e6b; -[_TtC26SendToSpotlightEligibility37SendToSpotlightEligibilityServiceImpl spotlightSectionConfigurationWithContentConfiguration:storyConfiguration:attribution:isSpotlightPreselected:] */

void FUN_101320dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1013223fc(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101320e6c; end: 101321327;  */

/* WARNING: Possible PIC construction at 0x000101320ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101321164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101321190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013211a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013211b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101321014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013211b4) */
/* WARNING: Removing unreachable block (ram,0x0001013211c0) */
/* WARNING: Removing unreachable block (ram,0x0001013211c4) */
/* WARNING: Removing unreachable block (ram,0x0001013211c8) */
/* WARNING: Removing unreachable block (ram,0x000101321274) */
/* WARNING: Removing unreachable block (ram,0x00010132127c) */
/* WARNING: Removing unreachable block (ram,0x0001013211d0) */
/* WARNING: Removing unreachable block (ram,0x0001013211d8) */
/* WARNING: Removing unreachable block (ram,0x000101321200) */
/* WARNING: Removing unreachable block (ram,0x000101321240) */
/* WARNING: Removing unreachable block (ram,0x000101321214) */
/* WARNING: Removing unreachable block (ram,0x000101321238) */
/* WARNING: Removing unreachable block (ram,0x0001013211a4) */
/* WARNING: Removing unreachable block (ram,0x000101321194) */
/* WARNING: Removing unreachable block (ram,0x000101321168) */
/* WARNING: Removing unreachable block (ram,0x000101320f94) */
/* WARNING: Removing unreachable block (ram,0x000101320f80) */
/* WARNING: Removing unreachable block (ram,0x000101320f64) */
/* WARNING: Removing unreachable block (ram,0x000101320ee8) */
/* WARNING: Removing unreachable block (ram,0x000101321018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101320e6c(double param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  long alStack_80 [2];
  
  lVar5 = *param_3;
  lVar6 = param_3[1];
  dVar8 = param_1;
  func_0x000107c6071c();
  dVar8 = dVar8 - param_1;
  if ((char)lVar6 == '\x01') {
    func_0x000107c5ed2c(lVar5);
    func_0x000107c42210();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    func_0x00010515f814(dVar8,param_4,0);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(ulong *)(lVar5 + 0x10) != 0) {
      uVar7 = 0;
      do {
        if (*(ulong *)(lVar5 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101321300);
          (*pcVar1)();
        }
        lVar6 = *(long *)(lVar5 + 0x20 + uVar7 * 8);
        if (lVar6 != 0) {
          puVar2 = PTR_PTR_1126b27a8;
          func_0x000107c61168();
          func_0x000107c61174(lVar6);
          func_0x000107c61174();
          func_0x000107c45160();
          func_0x000107c61180();
          if (puVar2 != (undefined *)0x0) {
            func_0x000107c30e3c();
            func_0x000107c61180();
            if ((param_6 & 0xc000000000000001) == 0) {
              if (*(ulong *)((param_6 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101321304);
                (*pcVar1)();
              }
              alStack_80[0] = *(long *)(*(long *)(param_6 + 0x20 + uVar7 * 8) + _DAT_113034ef0);
            }
            else {
              uVar3 = uVar7;
              FUN_101310b74(uVar7,param_6);
              lVar5 = *(long *)(uVar3 + _DAT_113034ef0);
              func_0x000107c615e8();
              alStack_80[0] = lVar5;
            }
            if ((alStack_80[0] != 0) && (alStack_80[0] != 1)) {
              func_0x000107c60614(&UNK_110724d68,alStack_80,&UNK_110724d68,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101321328);
              (*pcVar1)();
            }
            func_0x000107c5b078(lVar6);
            func_0x000107c5b078(lVar6);
            func_0x000107c610f8(PTR_PTR_1126c5018);
            func_0x000107c457b0(dVar8,param_2);
            if ((param_6 & 0xc000000000000001) == 0) {
              func_0x000107c61174();
            }
            else {
              FUN_101310b74(uVar7,param_6);
            }
          }
          goto code_r0x000107c61170;
        }
        uVar7 = uVar7 + 1;
      } while (*(ulong *)(lVar5 + 0x10) != uVar7);
    }
    uVar4 = 0;
    FUN_101322e84(0,0x112d70b20,&PTR_PTR_1126c5018);
    func_0x000107c5fc48(puVar2,uVar4);
    func_0x000107c6142c(puVar2);
    func_0x000107c43b74(param_5);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101321328; end: 101321497;  */

void FUN_101321328(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101321498; end: 10132150f;  */

void FUN_101321498(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101322e84(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101321510; end: 1013216b7;  */

ulong FUN_101321510(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013215e4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013215e8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104409d84(0);
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
    func_0x000104409d84(0);
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
  func_0x000107c5fb78(0x646f4d6369706f54,0xee00636a624f6c65);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013216b8);
  (*pcVar2)();
}



/* Entry: 1013216b8; end: 1013217ef;  */

ulong FUN_1013216b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013217f0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013217ec);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1013217f0; end: 10132190f;  */

undefined * FUN_1013217f0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010132143c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101321910; end: 101321b1f;  */

long FUN_101321910(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101321a04);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101321a08);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000104409d84(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000104409d84(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101321a00);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101321b20; end: 101321b57;  */

void FUN_101321b20(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101321b58();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101321b58; end: 101321ddb;  */

undefined * FUN_101321b58(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101321c88);
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
    func_0x0001013213d4();
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
    uVar5 = 0x112d4f918;
    func_0x0001000285a8(0x112d4f918,&UNK_10d933050);
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



/* Entry: 101321ddc; end: 1013223fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101321ddc(double param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x30);
  lVar11 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c4a67c();
    if (((int)uVar2 == 0) || (uVar2 = uVar1, func_0x000107c44a70(), (uVar2 & 1) == 0)) {
      func_0x000107c5aed8(uVar1);
    }
    func_0x000107c615e8(uVar1);
  }
  lVar10 = *(long *)(param_3 + _DAT_113034aa8);
  if (lVar10 == 0) {
LAB_101321e9c:
    lVar12 = 0;
    lVar11 = -0x2000000000000000;
  }
  else {
    lVar3 = lVar10;
    func_0x000107c5b8c4();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_101321e9c;
    lVar12 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
  }
  puVar4 = PTR_PTR_1126a69a8;
  func_0x000107c610f8(PTR_PTR_1126a69a8);
  func_0x000107c5fadc(lVar12,lVar11);
  func_0x000107c6142c(lVar11);
  uVar5 = 0;
  FUN_101322e84(0,0x112d70b40,&PTR_PTR_1126a69b0);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
  func_0x000107c46510(puVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126c5050;
  func_0x000107c610f8(PTR_PTR_1126c5050);
  func_0x000107c453e4();
  func_0x000107c556b4();
  func_0x000107c529fc(puVar6);
  func_0x000107c529f4(puVar6);
  func_0x000107c55744(puVar6);
  lVar11 = *(long *)(param_4 + _DAT_113034b50);
  if (lVar11 != 0) {
    puVar7 = PTR_PTR_1126c5058;
    func_0x000107c610f8(PTR_PTR_1126c5058);
    func_0x000107c61174();
    func_0x000107c453e4(puVar7);
    lVar3 = lVar11;
    func_0x000107c5ce2c();
    func_0x000107c61180();
    uVar9 = uVar5;
    if (lVar3 == 0) {
      func_0x000107c5faec();
      uVar9 = uVar5;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c59ffc(puVar7);
    func_0x000107c61170(lVar3);
    lVar3 = lVar11;
    func_0x000107c3e1a4();
    func_0x000107c61180();
    uVar5 = uVar9;
    if (lVar3 == 0) {
      func_0x000107c5faec();
      uVar5 = uVar9;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar9);
    }
    func_0x000107c52900(puVar7);
    func_0x000107c61170(lVar3);
    lVar3 = lVar11;
    func_0x000107c5ce30(lVar11);
    param_1 = (double)(int)lVar3;
    func_0x000107c5a000(param_1,puVar7);
    func_0x000107c5ce30(lVar11);
    func_0x000107c55774(puVar7);
    func_0x000107c4a624(lVar11);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c55898(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c56840(puVar6);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c59538(puVar4);
  if (lVar10 == 0) {
LAB_101322104:
    lVar11 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) goto LAB_1013223cc;
    lVar3 = lVar11;
    func_0x000107c4168c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar3 == 0) goto LAB_1013223cc;
    lVar10 = lVar3;
    func_0x000107c5c6b0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar10 == 0) goto LAB_1013223cc;
  }
  else {
    func_0x000107c5c6b0();
    func_0x000107c61180();
    if (lVar10 == 0) goto LAB_101322104;
  }
  lVar11 = lVar10;
  func_0x000107c4e800();
  func_0x000107c61180();
  func_0x000107c61174();
  lVar3 = lVar11;
  func_0x000107c3f97c();
  func_0x000107c61180();
  lVar12 = lVar3;
  func_0x000107c3f628();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  dVar14 = param_1;
  dVar15 = 0.0;
  if (lVar11 != 0) {
    lVar3 = lVar11;
    func_0x000107c4e7c4();
    func_0x000107c61180();
    dVar14 = param_1;
    if (lVar3 != 0) {
      func_0x000107c4223c();
      dVar14 = param_1;
      func_0x000107c61170(lVar3);
      dVar15 = param_1;
    }
  }
  uVar9 = 0;
  dVar16 = 0.0;
  if (lVar12 != 0) {
    func_0x000107c4077c(lVar12);
    uVar9 = param_2;
    dVar16 = dVar14;
  }
  if (lVar11 != 0) {
    func_0x000107c5b680();
  }
  func_0x000107c5d0f0();
  puVar7 = PTR_PTR_1126c5038;
  func_0x000107c610f8(PTR_PTR_1126c5038);
  func_0x000107c470fc(dVar16,uVar9);
  lVar3 = lVar10;
  func_0x000107c4e7c0();
  func_0x000107c61180();
  uVar9 = uVar5;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    uVar9 = uVar5;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  lVar13 = lVar10;
  func_0x000107c4e7d0();
  func_0x000107c61180();
  if (lVar13 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  puVar8 = PTR_PTR_1126c5040;
  func_0x000107c610f8(PTR_PTR_1126c5040);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c494a4(dVar15,puVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c573fc(puVar7);
  func_0x000107c61170(puVar8);
  if (lVar11 == 0) {
LAB_101322358:
    lVar13 = 0;
  }
  else {
    lVar3 = lVar11;
    func_0x000107c3f97c();
    func_0x000107c61180();
    if (lVar3 == 0) goto LAB_101322358;
    lVar13 = lVar3;
    func_0x000107c4e834();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar13 == 0) goto LAB_101322358;
  }
  func_0x000107c59ab8(puVar7);
  func_0x000107c61170(lVar13);
  lVar3 = lVar11;
  func_0x000107c4e7c4(lVar11);
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x000107c573f8(puVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c5741c(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar12);
  puVar6 = puVar7;
LAB_1013223cc:
  func_0x000107c61170(puVar6);
  return puVar4;
}



/* Entry: 1013223fc; end: 101322e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013223fc(long param_1,long param_2,long param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_112efa770);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5b940();
    func_0x000107c615e8(lVar3);
  }
  lVar3 = *(long *)(param_1 + _DAT_113034b48);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar3 != 0) {
    puStack_a0 = (undefined *)0x0;
    uVar4 = 0;
    func_0x000103f5fab8(0);
    func_0x000107c5fc50(lVar3,&puStack_a0,uVar4);
    func_0x000107c61170(lVar3);
    if (puStack_a0 != (undefined *)0x0) {
      puVar7 = puStack_a0;
    }
  }
  puVar15 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar16 = *(undefined **)(puVar15 + 0x10);
    puVar6 = puVar16;
    if (puVar16 != (undefined *)0x0) {
LAB_1013224f8:
      puVar17 = (undefined *)0x0;
      do {
        if (puVar6 == puVar17) break;
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar15 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101322600);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puVar7 + (long)puVar17 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar5 = puVar17;
          FUN_101310b74(puVar17,puVar7);
        }
        if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101322570);
          (*pcVar2)();
        }
        iVar1 = *(int *)(puVar5 + _DAT_113034ef0);
        func_0x000107c61170();
        puVar17 = puVar17 + 1;
      } while (iVar1 == 1);
      puVar15 = (undefined *)0x0;
      do {
        if (((ulong)puVar7 & 0xc000000000000001) == 0) {
          if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013225f8);
            (*pcVar2)();
          }
          if (*(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1013225fc);
            (*pcVar2)();
          }
        }
        else {
          FUN_101310b74(puVar15,puVar7);
          if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101322e04);
            (*pcVar2)();
          }
          func_0x000107c615e8();
        }
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar16);
    }
  }
  else {
    puVar6 = puVar15;
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar6 = puVar7;
    }
    puVar16 = puVar6;
    func_0x000107c60480();
    if (puVar16 != (undefined *)0x0) {
      func_0x000107c60480();
      goto LAB_1013224f8;
    }
  }
  func_0x000107c6142c(puVar7);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000108f48840();
  puVar7 = &UNK_1103a2ab8;
  func_0x000107c613fc(&UNK_1103a2ab8,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,unaff_x20);
  puVar15 = &UNK_1103a2ae0;
  func_0x000107c613fc(&UNK_1103a2ae0,0x20,7);
  *(undefined **)(puVar15 + 0x10) = puVar7;
  *(long *)(puVar15 + 0x18) = param_1;
  puVar6 = PTR_PTR_1126a6a78;
  func_0x000107c610f8(PTR_PTR_1126a6a78);
  pcStack_80 = FUN_101322e04;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10103b950;
  puStack_88 = &UNK_1103a2af8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar15;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(puVar7);
  func_0x000107c61174();
  func_0x000107c486c0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  puVar15 = puStack_78;
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar15);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55838(puVar6);
  func_0x000107c61170(puVar7);
  dVar18 = (double)(long)((double)lVar3 / 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101322df8);
    (*pcVar2)();
  }
  if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101322dfc);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101322e00);
    (*pcVar2)();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c596e4(puVar6);
  func_0x000107c61170(puVar7);
  FUN_101320500();
  puVar15 = puVar7;
  func_0x000107c5fc48();
  func_0x000107c6142c(puVar7);
  func_0x000107c54530(puVar6);
  func_0x000107c61170(puVar15);
  lVar3 = param_2;
  lVar14 = param_1;
  FUN_101321ddc(param_2,param_1);
  func_0x000107c575f8(puVar6);
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar9 = lVar3;
    func_0x000107c4536c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar9 != 0) {
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar3 = lVar9;
      func_0x0001000b637c(lVar9);
      uVar4 = 0;
      FUN_101322e84(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      pcVar2 = FUN_101320718;
      lVar14 = 0;
      func_0x0001000bfde0(FUN_101320718,0,uVar4);
      func_0x000107c61574(lVar3);
      func_0x0001004575f0();
      func_0x000107c61574(pcVar2);
      lVar10 = lVar3;
      func_0x000107c5cb24(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c55384(puVar6);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
    }
  }
  FUN_10131ea90();
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (lVar3 == 0) {
    if (param_3 == 0) goto LAB_101322a88;
    lVar9 = param_3;
    func_0x000107c61174(param_3);
    lVar3 = lVar9;
    func_0x000107c5cb24();
    func_0x000107c61180();
LAB_101322a74:
    func_0x000107c55de4(puVar6);
  }
  else {
    if (param_3 == 0) {
      func_0x000107c61174(lVar3);
      lVar9 = lVar3;
      func_0x000107c5cb24();
      func_0x000107c61180();
      goto LAB_101322a74;
    }
    func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
    func_0x000107c61174(lVar3);
    lVar10 = param_3;
    func_0x000107c61174(param_3);
    lVar14 = lVar10;
    func_0x0001000b637c();
    lVar9 = lVar3;
    func_0x0001000b637c(lVar3);
    lVar11 = lVar9;
    func_0x0001006c733c();
    func_0x000107c61574(lVar14);
    func_0x000107c61574(lVar9);
    uVar4 = 0;
    FUN_101322e84(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    pcVar2 = FUN_101320924;
    lVar14 = 0;
    func_0x0001000bfde0(FUN_101320924,0,uVar4);
    func_0x000107c61574(lVar11);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar2);
    lVar9 = lVar11;
    func_0x000107c5cb24(lVar11);
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c55de4(puVar6);
    func_0x000107c61170(lVar10);
  }
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
LAB_101322a88:
  lVar3 = *(long *)(param_2 + _DAT_113034aa8);
  if (lVar3 != 0) {
    func_0x000107c51cb4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
      lVar14 = lVar3;
      func_0x0001000b637c(lVar3);
      pcVar2 = FUN_101320988;
      func_0x00010487de38(FUN_101320988,0);
      func_0x000107c61574(lVar14);
      uVar4 = 0;
      FUN_101322e84(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      pcVar12 = FUN_1013209a4;
      lVar14 = 0;
      func_0x0001000bfde0(FUN_1013209a4,0,uVar4);
      func_0x000107c61574(pcVar2);
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      func_0x000107c453e4();
      ppuVar8 = &puStack_a0;
      puStack_a0 = puVar7;
      func_0x0001006c71a4(ppuVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61574(pcVar12);
      func_0x0001004575f0();
      func_0x000107c61574(ppuVar8);
      pcVar2 = pcVar12;
      func_0x000107c5cb24(pcVar12);
      func_0x000107c61180();
      func_0x000107c61170(pcVar12);
      func_0x000107c58e1c(puVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(pcVar2);
    }
  }
  lVar3 = *(long *)(param_1 + _DAT_113034b50);
  if (lVar3 != 0) {
    puVar7 = PTR_PTR_1126a6a80;
    func_0x000107c610f8(PTR_PTR_1126a6a80);
    func_0x000107c61174();
    func_0x000107c453e4(puVar7);
    lVar9 = lVar3;
    func_0x000107c5ce2c();
    func_0x000107c61180();
    lVar10 = lVar14;
    if (lVar9 == 0) {
      func_0x000107c5faec();
      lVar10 = lVar14;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar14);
    }
    func_0x000107c59ffc(puVar7);
    func_0x000107c61170(lVar9);
    lVar14 = lVar3;
    func_0x000107c3e1a4();
    func_0x000107c61180();
    if (lVar14 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar10);
    }
    func_0x000107c52900(puVar7);
    func_0x000107c61170(lVar14);
    lVar14 = lVar3;
    func_0x000107c5ce30(lVar3);
    func_0x000107c5a000((double)(int)lVar14,puVar7);
    func_0x000107c5ce30(lVar3);
    func_0x000107c55774(puVar7);
    func_0x000107c56898(puVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar7);
  }
  lVar3 = _DAT_113034b60;
  func_0x000107c61428(param_1 + _DAT_113034b60,&puStack_a0,0,0);
  lVar3 = *(long *)(param_1 + lVar3);
  if (lVar3 != 0) {
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    func_0x000107c61174(lVar3);
    lVar14 = lVar3;
    func_0x0001000b637c();
    puVar7 = &UNK_1103a2b30;
    func_0x000107c613fc(&UNK_1103a2b30,0x18,7);
    *(long *)(puVar7 + 0x10) = param_2;
    uVar13 = 0;
    FUN_101322e84(0,0x112d72a18,&PTR_PTR_1126c5050);
    func_0x000107c61174(param_2);
    uVar4 = 0x101322e28;
    func_0x0001000bfde0(0x101322e28,puVar7,uVar13);
    func_0x000107c61574(lVar14);
    func_0x000107c61574(puVar7);
    func_0x0001004575f0();
    func_0x000107c61574(uVar4);
    puVar15 = puVar7;
    func_0x000107c5cb24(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c5953c(puVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar15);
  }
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 101322e04; end: 101322e37;  */

undefined * FUN_101322e04(void)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    uVar5 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010d932fe0);
    uVar6 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef36a90);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    puVar8 = puVar7;
    func_0x000107c5ed2c(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c43b70(puVar1);
    func_0x000107c61170(puVar8);
  }
  else {
    pcVar3 = 
    "spotlightSectionConfiguration(contentConfiguration:storyConfiguration:attribution:isSpotlightPreselected:)"
    ;
    func_0x0001000c10c0(
                       "spotlightSectionConfiguration(contentConfiguration:storyConfiguration:attribution:isSpotlightPreselected:)"
                       );
    func_0x000107c61180();
    puVar7 = &UNK_1103a2ba8;
    func_0x000107c613fc(&UNK_1103a2ba8,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar2;
    *(undefined8 *)(puVar7 + 0x18) = uVar5;
    *(undefined **)(puVar7 + 0x20) = puVar1;
    pcStack_68 = FUN_101322e38;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1103a2bc0;
    ppuVar4 = &puStack_88;
    puStack_60 = puVar7;
    func_0x000107c60bc4(ppuVar4);
    puVar7 = puStack_60;
    func_0x000107c6157c(lVar2);
    func_0x000107c61174(uVar5);
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(pcVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar3);
  }
  return puVar1;
}



/* Entry: 101322e38; end: 101322e5f;  */

void FUN_101322e38(void)

{
  long unaff_x20;
  
  FUN_1013201e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101322e60; end: 101322e83;  */

/* WARNING: Possible PIC construction at 0x000101320ee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101320f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101321164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101321190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013211a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013211b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101321014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013211b4) */
/* WARNING: Removing unreachable block (ram,0x0001013211c0) */
/* WARNING: Removing unreachable block (ram,0x0001013211c4) */
/* WARNING: Removing unreachable block (ram,0x0001013211c8) */
/* WARNING: Removing unreachable block (ram,0x000101321274) */
/* WARNING: Removing unreachable block (ram,0x00010132127c) */
/* WARNING: Removing unreachable block (ram,0x0001013211d0) */
/* WARNING: Removing unreachable block (ram,0x0001013211d8) */
/* WARNING: Removing unreachable block (ram,0x000101321200) */
/* WARNING: Removing unreachable block (ram,0x000101321240) */
/* WARNING: Removing unreachable block (ram,0x000101321214) */
/* WARNING: Removing unreachable block (ram,0x000101321238) */
/* WARNING: Removing unreachable block (ram,0x0001013211a4) */
/* WARNING: Removing unreachable block (ram,0x000101321194) */
/* WARNING: Removing unreachable block (ram,0x000101321168) */
/* WARNING: Removing unreachable block (ram,0x000101320f94) */
/* WARNING: Removing unreachable block (ram,0x000101320f80) */
/* WARNING: Removing unreachable block (ram,0x000101320f64) */
/* WARNING: Removing unreachable block (ram,0x000101320ee8) */
/* WARNING: Removing unreachable block (ram,0x000101321018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101322e60(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  long alStack_80 [2];
  
  dVar10 = *(double *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(ulong *)(unaff_x20 + 0x28);
  lVar7 = *param_3;
  lVar8 = param_3[1];
  dVar11 = dVar10;
  func_0x000107c6071c();
  dVar11 = dVar11 - dVar10;
  if ((char)lVar8 == '\x01') {
    func_0x000107c5ed2c(lVar7);
    func_0x000107c42210();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    func_0x00010515f814(dVar11,uVar5,0);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*(ulong *)(lVar7 + 0x10) != 0) {
      uVar9 = 0;
      do {
        if (*(ulong *)(lVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101321300);
          (*pcVar2)();
        }
        lVar8 = *(long *)(lVar7 + 0x20 + uVar9 * 8);
        if (lVar8 != 0) {
          puVar3 = PTR_PTR_1126b27a8;
          func_0x000107c61168();
          func_0x000107c61174(lVar8);
          func_0x000107c61174();
          func_0x000107c45160();
          func_0x000107c61180();
          if (puVar3 != (undefined *)0x0) {
            func_0x000107c30e3c();
            func_0x000107c61180();
            if ((uVar6 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101321304);
                (*pcVar2)();
              }
              alStack_80[0] = *(long *)(*(long *)(uVar6 + 0x20 + uVar9 * 8) + _DAT_113034ef0);
            }
            else {
              uVar4 = uVar9;
              FUN_101310b74(uVar9,uVar6);
              lVar7 = *(long *)(uVar4 + _DAT_113034ef0);
              func_0x000107c615e8();
              alStack_80[0] = lVar7;
            }
            if ((alStack_80[0] != 0) && (alStack_80[0] != 1)) {
              func_0x000107c60614(&UNK_110724d68,alStack_80,&UNK_110724d68,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101321328);
              (*pcVar2)();
            }
            func_0x000107c5b078(lVar8);
            func_0x000107c5b078(lVar8);
            func_0x000107c610f8(PTR_PTR_1126c5018);
            func_0x000107c457b0(dVar11,param_2);
            if ((uVar6 & 0xc000000000000001) == 0) {
              func_0x000107c61174();
            }
            else {
              FUN_101310b74(uVar9,uVar6);
            }
          }
          goto code_r0x000107c61170;
        }
        uVar9 = uVar9 + 1;
      } while (*(ulong *)(lVar7 + 0x10) != uVar9);
    }
    uVar5 = 0;
    FUN_101322e84(0,0x112d70b20,&PTR_PTR_1126c5018);
    func_0x000107c5fc48(puVar3,uVar5);
    func_0x000107c6142c(puVar3);
    func_0x000107c43b74(uVar1);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101322e84; end: 101322ec3;  */

void FUN_101322e84(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101322ec4; end: 101322ed3;  */

void FUN_101322ec4(long param_1,long param_2)

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



/* Entry: 101322ed4; end: 1013230d3;  */

long FUN_101322ed4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x18) = param_3;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
    *(undefined8 *)(unaff_x20 + 0x28) = param_5;
    *(undefined8 *)(unaff_x20 + 0x30) = param_6;
    *(undefined8 *)(unaff_x20 + 0x38) = param_7;
    *(undefined8 *)(unaff_x20 + 0x40) = param_8;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101322f84);
  (*pcVar1)();
}



/* Entry: 1013230d4; end: 101323183;  */

/* WARNING: Possible PIC construction at 0x0001013230e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013230f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101323108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013230fc) */
/* WARNING: Removing unreachable block (ram,0x0001013230ec) */
/* WARNING: Removing unreachable block (ram,0x00010132310c) */

void FUN_1013230d4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101323184; end: 1013231a7;  */

void FUN_101323184(undefined8 *param_1,undefined8 param_2)

{
  func_0x000101322f84();
  *param_1 = param_2;
  return;
}



/* Entry: 1013231a8; end: 1013232a7;  */

undefined * FUN_1013231a8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d72920,&UNK_10daa3030);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1013232a4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1013232a8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1013232a8; end: 101323337;  */

void FUN_1013232a8(undefined8 param_1)

{
  if (lRam0000000112d72a78 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62e148);
  return;
}



/* Entry: 101323338; end: 101323343; -[SCSendToSpotlightEligibilityServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323338(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b50;
  func_0x000107c61428(param_1 + _DAT_112d72b50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101323344; end: 10132334f; -[SCSendToSpotlightEligibilityServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323344(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b50;
  func_0x000107c61428(param_1 + _DAT_112d72b50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101323350; end: 10132335b; -[SCSendToSpotlightEligibilityServiceProvider circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323350(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b58;
  func_0x000107c61428(param_1 + _DAT_112d72b58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132335c; end: 101323367; -[SCSendToSpotlightEligibilityServiceProvider setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132335c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b58;
  func_0x000107c61428(param_1 + _DAT_112d72b58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101323368; end: 101323373; -[SCSendToSpotlightEligibilityServiceProvider complianceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323368(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b60;
  func_0x000107c61428(param_1 + _DAT_112d72b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101323374; end: 10132337f; -[SCSendToSpotlightEligibilityServiceProvider setComplianceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323374(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b60;
  func_0x000107c61428(param_1 + _DAT_112d72b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101323380; end: 10132338b; -[SCSendToSpotlightEligibilityServiceProvider spotlightRepliesFeatureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b68;
  func_0x000107c61428(param_1 + _DAT_112d72b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132338c; end: 101323397; -[SCSendToSpotlightEligibilityServiceProvider setSpotlightRepliesFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132338c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b68;
  func_0x000107c61428(param_1 + _DAT_112d72b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101323398; end: 1013233a3; -[SCSendToSpotlightEligibilityServiceProvider snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323398(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b70;
  func_0x000107c61428(param_1 + _DAT_112d72b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013233a4; end: 1013233af; -[SCSendToSpotlightEligibilityServiceProvider setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013233a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b70;
  func_0x000107c61428(param_1 + _DAT_112d72b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013233b0; end: 1013233bb; -[SCSendToSpotlightEligibilityServiceProvider placeTaggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013233b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b78;
  func_0x000107c61428(param_1 + _DAT_112d72b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013233bc; end: 1013233c7; -[SCSendToSpotlightEligibilityServiceProvider setPlaceTaggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013233bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b78;
  func_0x000107c61428(param_1 + _DAT_112d72b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013233c8; end: 1013233d3; -[SCSendToSpotlightEligibilityServiceProvider snapEditorAppliedLensServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013233c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b80;
  func_0x000107c61428(param_1 + _DAT_112d72b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013233d4; end: 1013233df; -[SCSendToSpotlightEligibilityServiceProvider setSnapEditorAppliedLensServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013233d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b80;
  func_0x000107c61428(param_1 + _DAT_112d72b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013233e0; end: 1013233eb; -[SCSendToSpotlightEligibilityServiceProvider lensMetadataRetrievingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013233e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72b88;
  func_0x000107c61428(param_1 + _DAT_112d72b88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013233ec; end: 10132342f;  */

void FUN_1013233ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101323430; end: 10132343b; -[SCSendToSpotlightEligibilityServiceProvider setLensMetadataRetrievingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323430(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72b88;
  func_0x000107c61428(param_1 + _DAT_112d72b88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132343c; end: 10132348f;  */

void FUN_10132343c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101323490; end: 1013237ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323490(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3fa0c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3ff24();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c5b944();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar2 = lVar4;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c5b398();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            lVar2 = lVar5;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c4e7f8();
            func_0x000107c61180();
            if (lVar7 == 0) {
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              lVar2 = lVar6;
            }
            else {
              lVar8 = unaff_x20;
              func_0x000107c5b204();
              func_0x000107c61180();
              if (lVar8 == 0) {
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                lVar2 = lVar7;
              }
              else {
                lVar9 = unaff_x20;
                func_0x000107c4b280();
                func_0x000107c61180();
                if (lVar9 != 0) {
                  lVar10 = 0;
                  FUN_1013232a8();
                  func_0x000107c613fc();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174(lVar2);
                  lVar11 = lVar3;
                  func_0x000107c3fa04();
                  func_0x000107c61180();
                  if (lVar11 != 0) {
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    *(long *)(lVar10 + 0x10) = lVar11;
                    *(long *)(lVar10 + 0x18) = lVar4;
                    *(long *)(lVar10 + 0x20) = lVar5;
                    *(long *)(lVar10 + 0x28) = lVar6;
                    *(long *)(lVar10 + 0x30) = lVar7;
                    *(long *)(lVar10 + 0x38) = lVar8;
                    *(long *)(lVar10 + 0x40) = lVar9;
                    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d72b90);
                    *(long *)(unaff_x20 + _DAT_112d72b90) = lVar10;
                    func_0x000107c6157c(lVar10);
                    func_0x000107c61574(uVar12);
                    func_0x000101322f84();
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar5);
                    func_0x000107c61170(lVar6);
                    func_0x000107c61170(lVar7);
                    func_0x000107c61170(lVar8);
                    func_0x000107c61170(lVar9);
                    func_0x000107c61574(lVar10);
                    return;
                  }
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013237ac);
                  (*pcVar1)();
                }
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                func_0x000107c61170(lVar6);
                func_0x000107c61170(lVar7);
                lVar2 = lVar8;
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1013237ac; end: 101323837; -[SCSendToSpotlightEligibilityServiceProvider provide] */

void FUN_1013237ac(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_101323490();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SendToSpotlightEligibility/SCSendToSpotlightEligibilityServiceProvider.swift"
                      ,0x4c,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101323838);
  (*pcVar1)();
}



/* Entry: 101323838; end: 10132386b; -[SCSendToSpotlightEligibilityServiceProvider __safeProvide] */

void FUN_101323838(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101323490();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10132386c; end: 1013238af; -[SCSendToSpotlightEligibilityServiceProvider end] */

void FUN_10132386c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013238b0; end: 101323cd7;  */

void FUN_1013238b0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10eeec0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef11140,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000027;
            if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef10cb2c0)) ||
               (func_0x000107c605b8(0xd000000000000027,0x800000010ef34d40,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5970c();
            }
            else {
              uVar2 = 0x536f725070616e73;
              if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
                 (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5943c();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ca790)) ||
                   (func_0x000107c605b8(0xd000000000000014,0x800000010ef35870,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c57418();
                }
                else {
                  uVar2 = 0xd00000000000001d;
                  if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10c9410)) ||
                     (func_0x000107c605b8(0xd00000000000001d,0x800000010ef36bf0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5939c();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10e09d0)) &&
                       (func_0x000107c605b8(0xd00000000000001e,0x800000010ef1f630,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "SendToSpotlightEligibility/SCSendToSpotlightEligibilityServiceProvider.swift"
                                          ,0x4c,2,0x4b,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101323cd8);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55dc0();
                  }
                }
              }
            }
            goto LAB_10132393c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53640();
        goto LAB_10132393c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53414();
  }
LAB_10132393c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101323cd8; end: 101323d83; -[SCSendToSpotlightEligibilityServiceProvider setValue:forIvarName:] */

void FUN_101323cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1013238b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101323d84; end: 101323e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323d84(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d72b50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72b58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72b60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72b68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72b70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72b78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72b80,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d72b88,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d72b90) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101323e70; end: 101323e8f; -[SCSendToSpotlightEligibilityServiceProvider init] */

void FUN_101323e70(void)

{
  FUN_101323d84();
  return;
}



/* Entry: 101323e90; end: 101323ec3;  */

void FUN_101323e90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101323ec4; end: 101323f6b; -[SCSendToSpotlightEligibilityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323ec4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d72b50);
  func_0x000107c61610(param_1 + _DAT_112d72b58);
  func_0x000107c61610(param_1 + _DAT_112d72b60);
  func_0x000107c61610(param_1 + _DAT_112d72b68);
  func_0x000107c61610(param_1 + _DAT_112d72b70);
  func_0x000107c61610(param_1 + _DAT_112d72b78);
  func_0x000107c61610(param_1 + _DAT_112d72b80);
  func_0x000107c61610(param_1 + _DAT_112d72b88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72b90));
  return;
}



/* Entry: 101323f6c; end: 101323f8b;  */

void FUN_101323f6c(void)

{
  func_0x000107c61168(&PTR_PTR_112d72bd8);
  return;
}



/* Entry: 101323f8c; end: 101323fab; -[_TtC19StreakSettingsScope19StreakSettingsScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323f8c(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d72c70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101323fac; end: 101323ff3; -[_TtC19StreakSettingsScope19StreakSettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323fac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72c78;
  func_0x000107c61428(param_1 + _DAT_112d72c78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101323ff4; end: 10132404b; -[_TtC19StreakSettingsScope19StreakSettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101323ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72c78;
  func_0x000107c61428(param_1 + _DAT_112d72c78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132404c; end: 101324107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10132404c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d72c78;
  func_0x000107c61614(unaff_x20 + _DAT_112d72c78,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d72c70) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 101324108; end: 1013241ab; -[_TtC19StreakSettingsScope19StreakSettingsScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101324108(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112d72c78;
  func_0x000107c61614(param_1 + _DAT_112d72c78,0);
  *(undefined8 *)(param_1 + _DAT_112d72c70) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1013241ac; end: 10132420b; -[_TtC19StreakSettingsScope19StreakSettingsScope init] */

void FUN_1013241ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StreakSettingsScope.StreakSettingsScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013241d8);
  (*pcVar1)();
}



/* Entry: 10132420c; end: 101324243; -[_TtC19StreakSettingsScope19StreakSettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10132420c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d72c70));
  param_1 = param_1 + _DAT_112d72c78;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101324244; end: 101324263;  */

void FUN_101324244(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8070);
  return;
}



/* Entry: 101324264; end: 101324287;  */

undefined8 FUN_101324264(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101324288; end: 10132428f; -[_TtC19NewFriendFriendmoji28NewFriendFriendmojiDecorator friendmojiPosition] */

undefined8 FUN_101324288(void)

{
  return 2;
}



/* Entry: 101324290; end: 101324373;  */

void FUN_101324290(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if ((7 < param_3) || ((0xd3U >> (ulong)((uint)param_3 & 0x1f) & 1) == 0)) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      lVar2 = lVar1;
      func_0x000107c4d314();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x00010901e254(lVar2,3);
        if ((int)lVar1 == 0) {
          func_0x000107c61170(lVar2);
        }
        else {
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f15d18);
          func_0x000107c61170(lVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 101324374; end: 101324407; -[_TtC19NewFriendFriendmoji28NewFriendFriendmojiDecorator friendmojiCategoryNameForIdentifier:friendmojiFilterType:] */

void FUN_101324374(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  lVar1 = param_2;
  FUN_101324290(param_3,param_2,param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101324408; end: 1013245af;  */

code * FUN_101324408(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_48;
  
  if ((7 < param_3) || ((1L << (param_3 & 0x3f) & 0xd3U) == 0)) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      lVar1 = lVar6;
      func_0x000107c5b47c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(param_1);
      if (lVar1 != 0) {
        lVar6 = lVar1;
        func_0x000107c3feb4(lVar1);
        func_0x000107c61180();
        func_0x0001000285a8(0x112d72d78,&UNK_10d9f6200);
        lVar2 = lVar6;
        func_0x0001000b637c(lVar6);
        uVar3 = 0x112d72d80;
        func_0x0001000285a8(0x112d72d80,&UNK_10d9331d0);
        pcVar4 = FUN_1013245b0;
        func_0x0001000bfde0(FUN_1013245b0,0,uVar3);
        func_0x000107c61574(lVar2);
        uStack_48 = 0;
        pcVar5 = (code *)&uStack_48;
        func_0x0001006c71a4(pcVar5);
        func_0x000107c61574(pcVar4);
        FUN_1013246b0();
        func_0x0001000c2068();
        func_0x000107c61574(pcVar5);
        func_0x000104877210();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar6);
        goto LAB_10132446c;
      }
    }
  }
  func_0x0001000285a8(0x112d72d70,&UNK_10d9331c0);
  uStack_48 = 0;
  pcVar4 = (code *)&uStack_48;
  func_0x000100854cb0(pcVar4);
  pcVar5 = pcVar4;
  func_0x000104877210();
LAB_10132446c:
  func_0x000107c61574(pcVar4);
  return pcVar5;
}



/* Entry: 1013245b0; end: 1013245fb;  */

void FUN_1013245b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  uVar1 = *param_2;
  func_0x00010901e254(uVar1,3);
  if ((int)uVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f15d18;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f15d18);
  }
  *param_1 = ppuVar2;
  return;
}



/* Entry: 1013245fc; end: 101324663; -[_TtC19NewFriendFriendmoji28NewFriendFriendmojiDecorator observeFriendmojiCategoryNameForIdentifier:friendmojiFilterType:] */

void FUN_1013245fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_101324408(param_3,param_2,param_4);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101324664; end: 1013246af;  */

void FUN_101324664(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013246b0; end: 10132471f;  */

void FUN_1013246b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d72d88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d72d80;
  func_0x00010002969c(0x112d72d80,&UNK_10d9331d0);
  uVar2 = uVar1;
  FUN_101324720();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112d72d88 = puVar3;
  return;
}



/* Entry: 101324720; end: 101324763;  */

void FUN_101324720(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d72d90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001000e2834(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112d72d90 = puVar2;
  return;
}



/* Entry: 101324764; end: 101324877;  */

long FUN_101324764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar1 = &UNK_1103a2d68;
  func_0x000107c613fc(&UNK_1103a2d68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uVar2 = 0x112d72d98;
  func_0x0001000285a8(0x112d72d98,&UNK_10d9331e0);
  func_0x000107c613fc();
  pcVar3 = FUN_101324878;
  func_0x0001000bdd8c(FUN_101324878,puVar1,uVar2);
  *(code **)(unaff_x20 + 0x18) = pcVar3;
  return unaff_x20;
}



/* Entry: 101324878; end: 10132487f;  */

void FUN_101324878(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  func_0x000107c5b4dc();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101324874);
    (*pcVar1)();
  }
  func_0x000107c5b478();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar3 = 0;
    func_0x000101324690();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x10) = lVar2;
    *(long *)(lVar3 + 0x18) = lVar4;
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101324878);
  (*pcVar1)();
}



/* Entry: 101324880; end: 1013248ab;  */

void FUN_101324880(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013248ac; end: 1013248ff;  */

/* WARNING: Possible PIC construction at 0x0001013248ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013248f0) */

void FUN_1013248ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001003a5b88();
  func_0x000107c4fba8(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101324900; end: 10132490f;  */

undefined8 FUN_101324900(void)

{
  return 0;
}



/* Entry: 101324910; end: 101324953; -[SCNewFriendFriendmojiEntryPoint end] */

void FUN_101324910(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101324954; end: 101324987;  */

void FUN_101324954(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101324988; end: 1013249cf; -[SCNewFriendFriendmojiEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101324988(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d72e48);
  func_0x000107c61610(param_1 + _DAT_112d72e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d72e58));
  return;
}



/* Entry: 1013249d0; end: 1013249ef;  */

void FUN_1013249d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8138);
  return;
}



/* Entry: 1013249f0; end: 101324a47;  */

void FUN_1013249f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 101324a48; end: 101324bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101324a48(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c615f0(lVar4);
    func_0x000107c4dad8();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar6 = 0;
    FUN_101325b7c();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar3 = lVar7 + _DAT_112d72f68;
    *(undefined8 *)(lVar3 + 8) = 0;
    func_0x000107c61614(lVar3,0);
    *(long *)(lVar7 + _DAT_112d72f48) = lVar4;
    *(undefined8 *)(lVar7 + _DAT_112d72f50) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_112d72f58) = uVar5;
    *(undefined8 *)(lVar7 + _DAT_112d72f60) = uVar9;
    puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_60 = lVar7;
    lStack_58 = lVar6;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar9);
    plVar8 = &lStack_60;
    func_0x000107c61154(plVar8,puVar2,0,0);
    lVar6 = *(long *)(unaff_x20 + 0x10);
    lVar3 = lVar6 + _DAT_112d73598;
    func_0x000107c61428(lVar3,auStack_78,0,0);
    lVar7 = lVar3;
    func_0x000107c61618(lVar3);
    *(undefined8 *)((long)plVar8 + _DAT_112d72f68 + 8) = *(undefined8 *)(lVar3 + 8);
    func_0x000107c61604((long)plVar8 + _DAT_112d72f68,lVar7);
    func_0x000107c615e8(lVar7);
    func_0x000107c5677c(plVar8);
    func_0x000107c3e2c0(*(undefined8 *)(lVar6 + _DAT_112d73590));
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(plVar8);
  }
  return;
}



/* Entry: 101324bf0; end: 101324c33;  */

void FUN_101324bf0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101324c34; end: 101324c53;  */

void FUN_101324c34(void)

{
  FUN_101324a48();
  return;
}



/* Entry: 101324c54; end: 101324c5b;  */

undefined8 FUN_101324c54(void)

{
  return 0;
}



/* Entry: 101324c5c; end: 101324c7b;  */

void FUN_101324c5c(void)

{
  func_0x000107c61168(&PTR_PTR_112d72ec8);
  return;
}



/* Entry: 101324c7c; end: 101324ceb; -[_TtC28IncentiveCampaignDetailsFlow38IncentiveCampaignDetailsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101324c7c(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112d72f68;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "IncentiveCampaignDetailsFlow/IncentiveCampaignDetailsViewController.swift",
                      0x49,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101324cec);
  (*pcVar1)();
}



/* Entry: 101324cec; end: 101324d7f; -[_TtC28IncentiveCampaignDetailsFlow38IncentiveCampaignDetailsViewController viewWillAppear:] */

void FUN_101324cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  FUN_101325b7c();
  puVar2 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2,param_3);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c517ec();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101324d80; end: 101325193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101324d80(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  FUN_101325b7c();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_loadView_112604be0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d72f48);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126a6a98;
    func_0x000107c610f8(PTR_PTR_1126a6a98);
    func_0x000107c453e4();
    puVar6 = &UNK_1103a2ea0;
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_1103a2ea0,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = puVar6;
    func_0x000107c613fc(&UNK_1103a2ea0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    func_0x000107c613fc(&UNK_1103a2ea0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = PTR_PTR_1126a6aa0;
    func_0x000107c610f8(PTR_PTR_1126a6aa0);
    pcVar1 = FUN_1013261bc;
    FUN_101325c30(FUN_1013261bc,puVar4,0x1013261e4,puVar5,FUN_10132620c,puVar6,puVar7);
    puVar6 = PTR_PTR_1126a6aa8;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar8 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101325184);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 9;
    *(undefined8 *)(lVar8 + 0x10) = 4;
    puVar4 = puVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101325188);
      (*pcVar1)();
    }
    lVar10 = lVar9;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar10);
    *(undefined **)(lVar8 + 0x20) = puVar5;
    puVar4 = puVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10132518c);
      (*pcVar1)();
    }
    lVar10 = lVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar10);
    *(undefined **)(lVar8 + 0x28) = puVar5;
    puVar4 = puVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101325190);
      (*pcVar1)();
    }
    lVar10 = lVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar5 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar10);
    *(undefined **)(lVar8 + 0x30) = puVar5;
    puVar4 = puVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101325194);
      (*pcVar1)();
    }
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar9 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar9);
    *(undefined **)(lVar8 + 0x38) = puVar7;
    uVar11 = 0;
    FUN_101326214(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar9 = lVar8;
    func_0x000107c5fc48(lVar8,uVar11);
    func_0x000107c61574(lVar8);
    func_0x000107c3d048(puVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(pcVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar9);
  }
  return;
}



/* Entry: 101325194; end: 1013251e7;  */

void FUN_101325194(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101325500();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013251e8; end: 10132537b;  */

void FUN_1013251e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "loadView()";
  func_0x0001000c10c0("loadView()");
  func_0x000107c61180();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_3;
  uStack_40 = param_2;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10132537c; end: 101325467;  */

void FUN_10132537c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "loadView()";
  func_0x0001000c10c0("loadView()");
  func_0x000107c61180();
  puVar2 = &UNK_1103a2fb8;
  func_0x000107c613fc(&UNK_1103a2fb8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_101326254;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103a2fd0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101325468; end: 1013254d7;  */

void FUN_101325468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1013257d0(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013254d8; end: 1013254ff; -[_TtC28IncentiveCampaignDetailsFlow38IncentiveCampaignDetailsViewController loadView] */

void FUN_1013254d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101324d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101325500; end: 1013256cf;  */

/* WARNING: Possible PIC construction at 0x0001013255c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013255dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132561c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132568c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132569c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101325690) */
/* WARNING: Removing unreachable block (ram,0x000101325620) */
/* WARNING: Removing unreachable block (ram,0x0001013255e0) */
/* WARNING: Removing unreachable block (ram,0x0001013255c4) */
/* WARNING: Removing unreachable block (ram,0x0001013256a0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101325500(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d72f58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(unaff_x20 + _DAT_112d72f60);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
    func_0x000107c43dc4(lVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



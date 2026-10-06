/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cd0004; end: 101cd001b;  */

undefined8 FUN_101cd0004(void)

{
  FUN_101ccf720();
  return 0;
}



/* Entry: 101cd001c; end: 101cd0023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd001c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + _DAT_112e18070);
    if ((lVar4 != 0) && (*(long *)(param_1 + _DAT_112e18078) == 2)) {
      puVar2 = &UNK_11046b3f0;
      func_0x000107c613fc(&UNK_11046b3f0,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,lVar1);
      puVar3 = &UNK_11046b458;
      func_0x000107c613fc(&UNK_11046b458,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = lVar4;
      func_0x000107c615f4(lVar4,2);
      func_0x0001001ca524(0x11,0,0x28,1,0,0,&UNK_10d9f6288,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(lVar4);
      func_0x000107c61574(puVar3);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101cd0024; end: 101cd0087;  */

void FUN_101cd0024(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101cd0088;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ccff44,0,0);
  return;
}



/* Entry: 101cd0088; end: 101cd00c3;  */

void FUN_101cd0088(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101cd00c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101cd00c4; end: 101cd0753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101cd00c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  code *pcVar8;
  code *pcVar9;
  
  lVar2 = _DAT_112e17e50;
  puVar4 = &stack0xffffffffffffff90;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e17e40);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e17e48) = param_3;
  FUN_101cd07fc();
  puVar6 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar6);
  plVar5 = *(long **)(param_4 + 0x18);
  lVar2 = *(long *)(param_4 + 0x20);
  func_0x0001000a8868(param_4,plVar5);
  pcVar8 = *(code **)(lVar2 + 8);
  func_0x000107c61174();
  (*pcVar8)(plVar5,lVar2);
  puVar6 = &UNK_11046b528;
  func_0x000107c613fc(&UNK_11046b528,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,puVar4);
  pcVar8 = FUN_101cd081c;
  puVar7 = puVar6;
  (**(code **)(*plVar5 + 0x60))(FUN_101cd081c);
  func_0x000107c61574(plVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c614f0(pcVar8);
  uVar3 = *(undefined8 *)(puVar4 + _DAT_112e17e50);
  pcVar9 = *(code **)(puVar7 + 0x10);
  func_0x000107c6157c(uVar3);
  (*pcVar9)();
  func_0x000107c615e8(pcVar8);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(param_3);
  func_0x000107c61170(puVar4);
  func_0x0001000834e4(param_4);
  return puVar4;
}



/* Entry: 101cd0754; end: 101cd07af; -[_TtC29WatchApplicationMetricsLogger29WatchApplicationMetricsLogger init] */

void FUN_101cd0754(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WatchApplicationMetricsLogger.WatchApplicationMetricsLogger",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cd0780);
  (*pcVar1)();
}



/* Entry: 101cd07b0; end: 101cd07fb; -[_TtC29WatchApplicationMetricsLogger29WatchApplicationMetricsLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101cd07e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cd07e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd07b0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e17e40 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e17e48));
  return;
}



/* Entry: 101cd07fc; end: 101cd081b;  */

void FUN_101cd07fc(void)

{
  func_0x000107c61168(&PTR_PTR_112800fb8);
  return;
}



/* Entry: 101cd081c; end: 101cd0823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd081c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  ulong auStack_e8 [3];
  undefined1 *puStack_d0;
  long alStack_c8 [3];
  long lStack_b0;
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  auStack_e8[1] = *(long *)(lVar2 + -8);
  auStack_e8[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(auStack_e8[1] + 0x40));
  lVar2 = 0;
  FUN_101cd4ef4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = (long)(&stack0xffffffffffffff10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112e17e80;
  func_0x0001000285a8(0x112e17e80,&UNK_10d9f62b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar10 - extraout_x8_01;
  lVar2 = 0;
  FUN_101cd54fc();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *param_1;
  if ((lVar8 != 0) && (lVar9 = *(long *)(lVar8 + 0x10), lVar9 != 0)) {
    puVar14 = (ulong *)(lVar8 + 0x20);
    auStack_e8[0] = lVar10;
    puStack_d0 = &stack0xffffffffffffff10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
    do {
      puVar3 = puVar14;
      func_0x0001014b0a90(puVar14,&uStack_90);
      uVar5 = uStack_88;
      uVar4 = uStack_90;
      func_0x000101cd1b88();
      if ((uVar4 == *puVar3 && uVar5 == puVar3[1]) ||
         (func_0x000107c605b8(uVar4,uVar5,*puVar3,puVar3[1],0), (uVar4 & 1) != 0)) {
        lVar8 = unaff_x20 + 0x10;
        func_0x000107c61618();
        if (lVar8 != 0) {
          func_0x000100672b50(auStack_80,alStack_c8);
          if (lStack_b0 == 0) {
            func_0x000101cd0824(alStack_c8,0x112d387f8,&UNK_10d902650);
            (**(code **)(lVar11 + 0x38))(lVar12,1,1,lVar2);
LAB_101cd03dc:
            func_0x000101cd0824(lVar12,0x112e17e80,&UNK_10d9f62b0);
          }
          else {
            lVar10 = lVar12;
            func_0x000107c6147c(lVar12,alStack_c8,PTR___sypN_11034f1a8 + 8,lVar2,6);
            (**(code **)(lVar11 + 0x38))(lVar12,(uint)lVar10 ^ 1,1,lVar2);
            lVar10 = lVar12;
            (**(code **)(lVar11 + 0x30))(lVar12,1,lVar2);
            if ((int)lVar10 == 1) goto LAB_101cd03dc;
            func_0x000101cd0864(lVar12,lVar13);
            puVar3 = (ulong *)(lVar13 + *(int *)(lVar2 + 0x14));
            uVar4 = *puVar3;
            if ((uVar4 == *(ulong *)(lVar8 + _DAT_112e17e40) &&
                 puVar3[1] == ((ulong *)(lVar8 + _DAT_112e17e40))[1]) ||
               (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
              uVar4 = auStack_e8[0];
              func_0x000101cd08e4(lVar13,auStack_e8[0]);
              lVar10 = 0x112e17e88;
              func_0x0001000285a8(0x112e17e88,&UNK_10d9f62c0);
              uVar5 = uVar4;
              (**(code **)(*(long *)(lVar10 + -8) + 0x30))(uVar4,1,lVar10);
              if ((int)uVar5 == 1) {
                func_0x0001000d224c(alStack_c8);
                lVar10 = alStack_c8[0];
                if (alStack_c8[0] != 0) {
                  puVar6 = PTR_PTR_1126a9010;
                  func_0x000107c610f8(PTR_PTR_1126a9010);
                  func_0x000107c453e4();
                  func_0x000107c527f0();
                  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar2 + 0x1c));
                  uVar7 = *puVar1;
                  func_0x000107c5fadc(uVar7,puVar1[1]);
                  func_0x000107c54098(puVar6);
                  func_0x000107c61170(uVar7);
                  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar2 + 0x18));
                  uVar7 = *puVar1;
                  func_0x000107c5fadc(uVar7,puVar1[1]);
                  func_0x000107c58fc0(puVar6);
                  func_0x000107c61170(uVar7);
                  func_0x000107c5ee70((long)*(int *)(lVar2 + 0x20));
                  func_0x000107c53494(puVar6);
                  func_0x000107c61170(uVar7);
                  func_0x000107c4bfb0(lVar10);
                  func_0x000107c615e8(lVar10);
                  func_0x000107c61170(puVar6);
                }
              }
              else {
                (**(code **)(auStack_e8[1] + 0x20))(puStack_d0,uVar4,auStack_e8[2]);
                func_0x0001000d224c(alStack_c8);
                lVar10 = alStack_c8[0];
                if (alStack_c8[0] != 0) {
                  puVar6 = PTR_PTR_1126a9008;
                  func_0x000107c610f8(PTR_PTR_1126a9008);
                  func_0x000107c453e4();
                  func_0x000107c527f0();
                  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar2 + 0x1c));
                  uVar7 = *puVar1;
                  func_0x000107c5fadc(uVar7,puVar1[1]);
                  func_0x000107c54098(puVar6);
                  func_0x000107c61170(uVar7);
                  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar2 + 0x18));
                  uVar7 = *puVar1;
                  func_0x000107c5fadc(uVar7,puVar1[1]);
                  func_0x000107c58fc0(puVar6);
                  func_0x000107c61170(uVar7);
                  func_0x000107c5ee70((long)*(int *)(lVar2 + 0x20));
                  func_0x000107c53494(puVar6);
                  func_0x000107c61170(uVar7);
                  func_0x000107c5ee70();
                  func_0x000107c5a650(puVar6);
                  func_0x000107c61170(uVar7);
                  func_0x000107c4bfb0(lVar10);
                  func_0x000107c615e8(lVar10);
                  func_0x000107c61170(puVar6);
                }
                (**(code **)(auStack_e8[1] + 8))(puStack_d0,auStack_e8[2]);
              }
            }
            func_0x000101cd08a8(lVar13);
          }
          func_0x000107c61170(lVar8);
        }
      }
      func_0x0001014b0a5c(&uStack_90);
      puVar14 = puVar14 + 6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 101cd0824; end: 101cd0927;  */

undefined8 FUN_101cd0824(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101cd0928; end: 101cd0adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101cd0928(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar6 = 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = param_4;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c5e128();
    func_0x000107c615e8(uVar2);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_113083f78);
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x0001000285a8(0x112d39420,&UNK_10d979900);
      uVar5 = *(undefined8 *)(param_2 + _DAT_113083868);
      func_0x000107c61174(uVar5);
      uVar3 = uVar5;
      func_0x0001000bda74();
      func_0x000107c61170(uVar5);
      FUN_101cd0adc(param_3 + _DAT_112e18040,auStack_88);
      uVar5 = 0;
      FUN_101cd07fc(0);
      func_0x000107c610f8();
      FUN_101cd00c4(uVar4,uVar6,uVar3,auStack_88,uVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
      return unaff_x20;
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 101cd0adc; end: 101cd0b1f;  */

long FUN_101cd0adc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101cd0b20; end: 101cd0b43;  */

void FUN_101cd0b20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cd0b44; end: 101cd0b4f;  */

void FUN_101cd0b44(void)

{
  return;
}



/* Entry: 101cd0b50; end: 101cd0ccf;  */

void FUN_101cd0b50(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_11046b668;
    func_0x000107c613fc(&UNK_11046b668,0x38,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    *(undefined8 *)(puVar1 + 0x20) = param_4;
    *(undefined8 *)(puVar1 + 0x28) = param_5;
    *(undefined8 *)(puVar1 + 0x30) = param_6;
    uStack_68 = 0x101cd124c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_10083fefc;
    puStack_70 = &UNK_11046b680;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_60;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61574(puVar1);
    func_0x000107c4c6bc(uVar3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101cd0cd0; end: 101cd0ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd0cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  func_0x0001057e6af0(*(undefined8 *)(unaff_x20 + _DAT_112e17f48),1);
  lVar1 = *(long *)(unaff_x20 + _DAT_112e17f30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c48af4(puVar2);
    func_0x000107c61170(param_1);
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = param_5;
    *(undefined8 *)(lVar3 + 0x28) = param_6;
    func_0x000107c61434(param_6);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar3);
    FUN_101cd0ff4(param_5,param_6,param_3,param_4);
    puVar5 = &UNK_11046b5f0;
    func_0x000107c613fc(&UNK_11046b5f0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_70 = FUN_101cd1218;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100f5c588;
    puStack_78 = &UNK_11046b608;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c51db4(lVar1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 101cd0ebc; end: 101cd0f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd0ebc(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001057e6b68(*(undefined8 *)(param_2 + _DAT_112e17f48),param_1 == 0,1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101cd0f30; end: 101cd0f8b; -[_TtC32WatchMessageSenderImplementation18WatchMessageSender init] */

void FUN_101cd0f30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WatchMessageSenderImplementation.WatchMessageSender",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cd0f5c);
  (*pcVar1)();
}



/* Entry: 101cd0f8c; end: 101cd0ff3; -[_TtC32WatchMessageSenderImplementation18WatchMessageSender .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101cd0fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cd0fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd0f8c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e17f30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e17f38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e17f40));
  return;
}



/* Entry: 101cd0ff4; end: 101cd1217;  */

undefined *
FUN_101cd0ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  func_0x000107c613fc(lVar1,0x30,7);
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  puVar3 = PTR_PTR_1126b5be8;
  func_0x000107c610f8(PTR_PTR_1126b5be8);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  puVar7 = PTR___sSSN_11034da80;
  lVar4 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar2);
  lVar2 = lVar1;
  func_0x000107c5fc48(lVar1,puVar7);
  func_0x000107c61574(lVar1);
  func_0x000107c45794(puVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  puVar5 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61174(puVar3);
  puVar6 = puVar5;
  func_0x000107c5e500();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  puVar7 = puVar5;
  func_0x000107c5e870(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c5e5d4(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e7ec(puVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar7 = puVar5;
  func_0x000107c3ecc8(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return puVar7;
}



/* Entry: 101cd1218; end: 101cd1263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd1218(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001057e6b68(*(undefined8 *)(lVar1 + _DAT_112e17f48),param_1 == 0,1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101cd1264; end: 101cd1357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101cd1264(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  uVar2 = param_2;
  func_0x000107c5c894();
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_4 + _DAT_112e18030);
    func_0x00010099840c(0);
    func_0x000107c610f8();
    func_0x000107c6157c(uVar4);
    func_0x00010099842c(uVar2,lVar3,uVar4);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cd1358);
  (*pcVar1)();
}



/* Entry: 101cd1358; end: 101cd137b;  */

void FUN_101cd1358(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cd137c; end: 101cd1387;  */

void FUN_101cd137c(void)

{
  return;
}



/* Entry: 101cd1388; end: 101cd172b;  */

void FUN_101cd1388(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e18020 != 0) {
    return;
  }
  puVar1 = &UNK_11046b758;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e18020 = param_1;
  return;
}



/* Entry: 101cd172c; end: 101cd173b; -[_TtC21SnapchatWatchServices21SnapchatWatchServices sessionDidActivate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd172c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e18028));
  return;
}



/* Entry: 101cd173c; end: 101cd17f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101cd173c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e18028) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e18030) = param_2;
  func_0x000100457bf8(param_3,unaff_x20 + _DAT_112e18038);
  func_0x000100457bf8(param_4,unaff_x20 + _DAT_112e18040);
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_4);
  func_0x0001000834e4(param_3);
  return puVar1;
}



/* Entry: 101cd17f4; end: 101cd184f; -[_TtC21SnapchatWatchServices21SnapchatWatchServices init] */

void FUN_101cd17f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapchatWatchServices.SnapchatWatchServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cd1820);
  (*pcVar1)();
}



/* Entry: 101cd1850; end: 101cd18a7; -[_TtC21SnapchatWatchServices21SnapchatWatchServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101cd187c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cd1880) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd1850(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e18028));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e18030));
  return;
}



/* Entry: 101cd18a8; end: 101cd18c7; -[SCWatchSessionActivationEvent session] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd18a8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112e18070));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101cd18c8; end: 101cd18df; -[SCWatchSessionActivationEvent activationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101cd18c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e18078);
}



/* Entry: 101cd18e0; end: 101cd1a17; -[SCWatchSessionActivationEvent initWithSession:activationState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd18e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112e18070) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e18078) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 101cd1a18; end: 101cd1a1b; -[SCWatchSessionActivationEvent copyWithZone:] */

void FUN_101cd1a18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101cd1a1c; end: 101cd1a37; -[SCWatchSessionActivationEvent description] */

void FUN_101cd1a1c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101cd1a38; end: 101cd1ab3; -[SCWatchSessionActivationEvent init] */

void FUN_101cd1a38(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SnapchatWatchServices/WatchSessionActivationEventWrapper.swift",0x3e,2,0x2a,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cd1a80);
  (*pcVar1)();
}



/* Entry: 101cd1ab4; end: 101cd1ac3; -[SCWatchSessionActivationEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd1ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e18070));
  return;
}



/* Entry: 101cd1ac4; end: 101cd1ae3;  */

void FUN_101cd1ac4(void)

{
  func_0x000107c61168(&PTR_PTR_112801268);
  return;
}



/* Entry: 101cd1ae4; end: 101cd1ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cd1ae4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e18070) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e18078) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101cd1ae8; end: 101cd1ba3;  */

undefined * FUN_101cd1ae8(void)

{
  return &UNK_10d9f6490;
}



/* Entry: 101cd1ba4; end: 101cd1bdb;  */

void FUN_101cd1ba4(undefined8 param_1)

{
  if (lRam0000000112e18118 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6842d0);
  return;
}



/* Entry: 101cd1bdc; end: 101cd1bef;  */

bool FUN_101cd1bdc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101cd1bf0; end: 101cd1c9b;  */

void FUN_101cd1bf0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cd1c9c; end: 101cd1d47;  */

undefined1  [16] FUN_101cd1c9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar2 = 0x800000010f00ab70;
  uVar4 = 0xd000000000000010;
  if (bVar5 != 3) {
    uVar2 = 0xeb00000000746e75;
    uVar4 = 0x6f436b6165727473;
  }
  uVar1 = 0x656d616e72657375;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x644972657375;
  if (bVar5 != 0) {
    uVar2 = 0x4e79616c70736964;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xeb00000000656d61;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 101cd1d48; end: 101cd1d6b;  */

void FUN_101cd1d48(undefined1 *param_1,undefined1 param_2)

{
  FUN_101cd2378();
  *param_1 = param_2;
  return;
}



/* Entry: 101cd1d6c; end: 101cd1d83;  */

undefined1  [16] FUN_101cd1d6c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cd1d84; end: 101cd1dd3;  */

void FUN_101cd1d84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cd2820();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd1dd4; end: 101cd1dd7;  */

undefined8 FUN_101cd1dd4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = (long)puVar11 - extraout_x8_00;
  lVar13 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar12 - extraout_x8_01;
  uVar6 = *param_1;
  if (((uVar6 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar6 & 1) == 0)) {
    return 0;
  }
  uVar6 = param_1[2];
  if (((uVar6 != param_2[2]) || (param_1[3] != param_2[3])) &&
     (func_0x000107c605b8(), (uVar6 & 1) == 0)) {
    return 0;
  }
  uVar6 = param_1[4];
  if (((uVar6 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (func_0x000107c605b8(), (uVar6 & 1) == 0)) {
    return 0;
  }
  lVar7 = 0;
  FUN_101cd1ba4();
  iVar4 = *(int *)(lVar7 + 0x1c);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar4,lVar10);
  func_0x000100029394((long)param_2 + (long)iVar4,lVar10 + lVar13);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar8 = lVar10;
  (*pcVar15)(lVar10,1,lVar5);
  if ((int)lVar8 == 1) {
    lVar13 = lVar10 + lVar13;
    (*pcVar15)(lVar13,1,lVar5);
    if ((int)lVar13 == 1) {
      FUN_101cd3258(lVar10,0x112d36580,&UNK_10d9016d0);
LAB_101cd27d8:
      plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
      plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
      cVar3 = (char)plVar2[1];
      if ((char)plVar1[1] == '\x01') {
        if (cVar3 != '\x01') {
          return 0;
        }
        return 1;
      }
      if (cVar3 == '\x01') {
        return 0;
      }
      if (*plVar1 != *plVar2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar10,uVar12);
    lVar8 = lVar10 + lVar13;
    (*pcVar15)(lVar8,1,lVar5);
    if ((int)lVar8 != 1) {
      (**(code **)(lVar14 + 0x20))(puVar11,lVar10 + lVar13,lVar5);
      uVar9 = 0x112d7e688;
      func_0x000101cd3298(0x112d7e688,PTR___s10Foundation3URLVSQAAMc_1103509a8);
      uVar6 = uVar12;
      func_0x000107c5fab8(uVar12,puVar11,lVar5,uVar9);
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(puVar11,lVar5);
      (*pcVar15)(uVar12,lVar5);
      FUN_101cd3258(lVar10,0x112d36580,&UNK_10d9016d0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      goto LAB_101cd27d8;
    }
    (**(code **)(lVar14 + 8))(uVar12,lVar5);
  }
  FUN_101cd3258(lVar10,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 101cd1dd8; end: 101cd1fc7;  */

/* WARNING: Removing unreachable block (ram,0x000101cd1f10) */

void FUN_101cd1dd8(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112e180a8;
  func_0x0001000285a8(0x112e180a8,&UNK_10d9f65b8);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_60 + -extraout_x8;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar6);
  FUN_101cd2820();
  func_0x000107c606ec(puVar7,&UNK_11046b9f0,&UNK_11046b9f0,param_1,uVar6,uVar5);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c6053c(unaff_x20[4],unaff_x20[5],&uStack_53,lVar3);
    lVar4 = 0;
    FUN_101cd1ba4();
    iVar2 = *(int *)(lVar4 + 0x1c);
    uStack_54 = 3;
    uVar5 = 0;
    func_0x000107c5ede0(0);
    uVar6 = 0x112da1dc0;
    func_0x000101cd3298(0x112da1dc0,PTR___s10Foundation3URLVSEAAMc_110350998);
    func_0x000107c60530((long)unaff_x20 + (long)iVar2,&uStack_54,lVar3,uVar5,uVar6);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20));
    uStack_55 = 4;
    func_0x000107c6052c(*puVar1,*(undefined1 *)(puVar1 + 1),&uStack_55,lVar3);
    (**(code **)(lVar8 + 8))(puVar7,lVar3);
  }
  else {
    (**(code **)(lVar8 + 8))(puVar7,lVar3);
  }
  return;
}



/* Entry: 101cd1fc8; end: 101cd233f;  */

/* WARNING: Removing unreachable block (ram,0x000101cd2238) */
/* WARNING: Removing unreachable block (ram,0x000101cd2180) */
/* WARNING: Removing unreachable block (ram,0x000101cd21c4) */
/* WARNING: Removing unreachable block (ram,0x000101cd2284) */
/* WARNING: Removing unreachable block (ram,0x000101cd229c) */
/* WARNING: Removing unreachable block (ram,0x000101cd22a0) */
/* WARNING: Removing unreachable block (ram,0x000101cd22c8) */
/* WARNING: Removing unreachable block (ram,0x000101cd22b4) */
/* WARNING: Removing unreachable block (ram,0x000101cd22b8) */
/* WARNING: Removing unreachable block (ram,0x000101cd22c4) */
/* WARNING: Removing unreachable block (ram,0x000101cd22d4) */
/* WARNING: Removing unreachable block (ram,0x000101cd22d8) */
/* WARNING: Removing unreachable block (ram,0x000101cd211c) */

void FUN_101cd1fc8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long unaff_x21;
  long lVar10;
  undefined8 *puVar11;
  long alStack_90 [5];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112d36580;
  alStack_90[2] = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e180b8;
  alStack_90[3] = (long)alStack_90 - extraout_x8;
  func_0x0001000285a8(0x112e180b8,&UNK_10d9f65c0);
  lVar9 = *(long *)(lVar3 + -8);
  alStack_90[4] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)alStack_90 - extraout_x8) - extraout_x8_00;
  lVar4 = 0;
  FUN_101cd1ba4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  func_0x0001000a8868(param_2,uVar7);
  FUN_101cd2820();
  func_0x000107c606e0(lVar10,&UNK_11046b9f0,&UNK_11046b9f0,lVar3,uVar7,uVar6);
  lVar2 = alStack_90[4];
  lVar3 = alStack_90[3];
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar8 = alStack_90[4];
    func_0x000107c604f4();
    *puVar11 = puVar5;
    puVar11[1] = lVar8;
    uStack_52 = 1;
    puVar5 = &uStack_52;
    lVar8 = lVar2;
    func_0x000107c604f4();
    puVar11[2] = puVar5;
    puVar11[3] = lVar8;
    uStack_53 = 2;
    puVar5 = &uStack_53;
    lVar8 = lVar2;
    func_0x000107c604f4();
    puVar11[4] = puVar5;
    puVar11[5] = lVar8;
    uVar6 = 0;
    func_0x000107c5ede0(0);
    uStack_54 = 3;
    uVar7 = 0x112da1d98;
    func_0x000101cd3298(0x112da1d98,PTR___s10Foundation3URLVSeAAMc_1103509b0);
    func_0x000107c604e8(lVar3,uVar6,&uStack_54,lVar2,uVar6,uVar7);
    func_0x0001001021cc(lVar3,(long)puVar11 + (long)*(int *)(lVar4 + 0x1c));
    uStack_55 = 4;
    puVar5 = &uStack_55;
    lVar3 = lVar2;
    func_0x000107c604e4();
    (**(code **)(lVar9 + 8))(lVar10,lVar2);
    puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar4 + 0x20));
    *puVar1 = puVar5;
    *(char *)(puVar1 + 1) = (char)lVar3;
    FUN_101cd2860(puVar11,alStack_90[2]);
    func_0x0001000834e4(param_2);
    func_0x000101cd28a4(puVar11);
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 101cd2340; end: 101cd2367;  */

void FUN_101cd2340(void)

{
  FUN_101cd1fc8();
  return;
}



/* Entry: 101cd2368; end: 101cd2377;  */

void FUN_101cd2368(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 101cd2378; end: 101cd252f;  */

undefined4 FUN_101cd2378(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0x644972657375;
  if ((param_1 == 0x644972657375 && param_2 == -0x1a00000000000000) ||
     (func_0x000107c605b8(0x644972657375,0xe600000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x4e79616c70736964) && (param_2 == -0x14ffffffff9a929f)) ||
       (func_0x000107c605b8(0x4e79616c70736964,0xeb00000000656d61,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0x656d616e72657375;
      if (((param_1 == 0x656d616e72657375) && (param_2 == -0x1800000000000000)) ||
         (func_0x000107c605b8(0x656d616e72657375,0xe800000000000000,param_1,param_2,0),
         (uVar2 & 1) != 0)) {
        func_0x000107c6142c(param_2);
        uVar1 = 2;
      }
      else {
        if ((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef0ff5490)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010f00ab70,param_1,param_2,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0x6f436b6165727473;
            if ((param_1 == 0x6f436b6165727473) && (param_2 == -0x14ffffffff8b918b)) {
              func_0x000107c6142c(0xeb00000000746e75);
              return 4;
            }
            func_0x000107c605b8(0x6f436b6165727473,0xeb00000000746e75,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar2 & 1) != 0) {
              return 4;
            }
            return 5;
          }
        }
        func_0x000107c6142c(param_2);
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}



/* Entry: 101cd2530; end: 101cd281f;  */

undefined8 FUN_101cd2530(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = (long)puVar11 - extraout_x8_00;
  lVar13 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = uVar12 - extraout_x8_01;
  uVar6 = *param_1;
  if (((uVar6 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(), (uVar6 & 1) == 0)) {
    return 0;
  }
  uVar6 = param_1[2];
  if (((uVar6 != param_2[2]) || (param_1[3] != param_2[3])) &&
     (func_0x000107c605b8(), (uVar6 & 1) == 0)) {
    return 0;
  }
  uVar6 = param_1[4];
  if (((uVar6 != param_2[4]) || (param_1[5] != param_2[5])) &&
     (func_0x000107c605b8(), (uVar6 & 1) == 0)) {
    return 0;
  }
  lVar7 = 0;
  FUN_101cd1ba4();
  iVar4 = *(int *)(lVar7 + 0x1c);
  lVar13 = (long)*(int *)(lVar13 + 0x30);
  func_0x000100029394((long)param_1 + (long)iVar4,lVar10);
  func_0x000100029394((long)param_2 + (long)iVar4,lVar10 + lVar13);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar8 = lVar10;
  (*pcVar15)(lVar10,1,lVar5);
  if ((int)lVar8 == 1) {
    lVar13 = lVar10 + lVar13;
    (*pcVar15)(lVar13,1,lVar5);
    if ((int)lVar13 == 1) {
      FUN_101cd3258(lVar10,0x112d36580,&UNK_10d9016d0);
LAB_101cd27d8:
      plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
      plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
      cVar3 = (char)plVar2[1];
      if ((char)plVar1[1] == '\x01') {
        if (cVar3 != '\x01') {
          return 0;
        }
        return 1;
      }
      if (cVar3 == '\x01') {
        return 0;
      }
      if (*plVar1 != *plVar2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    func_0x000100029394(lVar10,uVar12);
    lVar8 = lVar10 + lVar13;
    (*pcVar15)(lVar8,1,lVar5);
    if ((int)lVar8 != 1) {
      (**(code **)(lVar14 + 0x20))(puVar11,lVar10 + lVar13,lVar5);
      uVar9 = 0x112d7e688;
      func_0x000101cd3298(0x112d7e688,PTR___s10Foundation3URLVSQAAMc_1103509a8);
      uVar6 = uVar12;
      func_0x000107c5fab8(uVar12,puVar11,lVar5,uVar9);
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(puVar11,lVar5);
      (*pcVar15)(uVar12,lVar5);
      FUN_101cd3258(lVar10,0x112d36580,&UNK_10d9016d0);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      goto LAB_101cd27d8;
    }
    (**(code **)(lVar14 + 8))(uVar12,lVar5);
  }
  FUN_101cd3258(lVar10,0x112d7e680,&UNK_10d95e350);
  return 0;
}



/* Entry: 101cd2820; end: 101cd285f;  */

void FUN_101cd2820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e180b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f678c;
  func_0x000107c61520(&UNK_10d9f678c,&UNK_11046b9f0);
  puRam0000000112e180b0 = puVar1;
  return;
}



/* Entry: 101cd2860; end: 101cd28df;  */

undefined8 FUN_101cd2860(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101cd1ba4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101cd28e0; end: 101cd28eb;  */

undefined * FUN_101cd28e0(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 101cd28ec; end: 101cd2a2f;  */

long * FUN_101cd28ec(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    lVar9 = (long)*(int *)(param_3 + 0x1c);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar10 + 0x30);
    func_0x000107c61434(lVar7);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar4);
    lVar7 = (long)param_2 + lVar9;
    (*pcVar11)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar9,(long)param_2 + lVar9,
                          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101cd2a30; end: 101cd2ab7;  */

void FUN_101cd2a30(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101cd2ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 101cd2ab8; end: 101cd2bcf;  */

undefined8 * FUN_101cd2ab8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  lVar6 = (long)param_2 + lVar7;
  (*pcVar9)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar5);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                        *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101cd2bd0; end: 101cd2d53;  */

undefined8 * FUN_101cd2bd0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[2] = param_2[2];
  uVar5 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[4] = param_2[4];
  uVar5 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  lVar6 = (long)*(int *)(param_3 + 0x1c);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = (long)param_1 + lVar6;
  (*pcVar8)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar6;
  (*pcVar8)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      goto LAB_101cd2d04;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    goto LAB_101cd2d04;
  }
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                      *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
LAB_101cd2d04:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = uVar5;
  return param_1;
}



/* Entry: 101cd2d54; end: 101cd2e3b;  */

undefined8 * FUN_101cd2d54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101cd2e3c; end: 101cd2f8f;  */

undefined8 * FUN_101cd2e3c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar2 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar3);
  uVar2 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar3);
  uVar2 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar3);
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar7;
  (*pcVar9)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
      goto LAB_101cd2f40;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
    goto LAB_101cd2f40;
  }
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
LAB_101cd2f40:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101cd2f90; end: 101cd2fa7;  */

void FUN_101cd2f90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101cd2fa8; end: 101cd3027;  */

void FUN_101cd2fa8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_48 = &UNK_10d9f6698;
  puStack_40 = &UNK_10d9f6698;
  puStack_38 = &UNK_10d9f6698;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9f66b0;
    func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 101cd3028; end: 101cd318f;  */

int FUN_101cd3028(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101cd30a4;
        goto LAB_101cd3088;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101cd3088:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_101cd30a4:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101cd3190; end: 101cd31cf;  */

void FUN_101cd3190(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6764;
  func_0x000107c61520(&UNK_10d9f6764,&UNK_11046b9f0);
  puRam0000000112e18160 = puVar1;
  return;
}



/* Entry: 101cd31d0; end: 101cd31d3;  */

void FUN_101cd31d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f66fc;
  func_0x000107c61520(&UNK_10d9f66fc,&UNK_11046b9f0);
  puRam0000000112e18168 = puVar1;
  return;
}



/* Entry: 101cd31d4; end: 101cd3213;  */

void FUN_101cd31d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f66fc;
  func_0x000107c61520(&UNK_10d9f66fc,&UNK_11046b9f0);
  puRam0000000112e18168 = puVar1;
  return;
}



/* Entry: 101cd3214; end: 101cd3217;  */

void FUN_101cd3214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f66d4;
  func_0x000107c61520(&UNK_10d9f66d4,&UNK_11046b9f0);
  puRam0000000112e18170 = puVar1;
  return;
}



/* Entry: 101cd3218; end: 101cd3257;  */

void FUN_101cd3218(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f66d4;
  func_0x000107c61520(&UNK_10d9f66d4,&UNK_11046b9f0);
  puRam0000000112e18170 = puVar1;
  return;
}



/* Entry: 101cd3258; end: 101cd32d7;  */

undefined8 FUN_101cd3258(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101cd32d8; end: 101cd32fb;  */

undefined8 FUN_101cd32d8(void)

{
  return 1;
}



/* Entry: 101cd32fc; end: 101cd334b;  */

void FUN_101cd32fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cd3624();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd334c; end: 101cd3353;  */

undefined8 FUN_101cd334c(void)

{
  return 1;
}



/* Entry: 101cd3354; end: 101cd33cf;  */

void FUN_101cd3354(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cd33d0; end: 101cd33df;  */

undefined1  [16] FUN_101cd33d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe400000000000000;
  auVar1._0_8_ = 0x74786574;
  return auVar1;
}



/* Entry: 101cd33e0; end: 101cd3463;  */

void FUN_101cd33e0(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if (param_2 == 0x74786574 && param_3 == -0x1c00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    bVar1 = 0;
    func_0x000107c605b8(0x74786574,0xe400000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101cd3464; end: 101cd346f;  */

undefined1  [16] FUN_101cd3464(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cd3470; end: 101cd34bf;  */

void FUN_101cd3470(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101cd3664();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd34c0; end: 101cd3623;  */

void FUN_101cd34c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112e18178;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x0001000285a8(0x112e18178,&UNK_10d9f67e0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&uStack_70 - extraout_x8;
  lVar4 = 0x112e18180;
  func_0x0001000285a8(0x112e18180,&UNK_10d9f67e8);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_101cd3624();
  func_0x000107c606ec(lVar7 - extraout_x8_00,&UNK_11046bcf0,&UNK_11046bcf0,param_1,uVar1,uVar2);
  func_0x000101cd3664();
  func_0x000107c6051c(lVar7);
  func_0x000107c6053c(uStack_70,uStack_68);
  (**(code **)(lVar5 + 8))(lVar7,lVar3);
  (**(code **)(lVar6 + 8))(lVar7 - extraout_x8_00,lVar4);
  return;
}



/* Entry: 101cd3624; end: 101cd36a3;  */

void FUN_101cd3624(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e18188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6bbc;
  func_0x000107c61520(&UNK_10d9f6bbc,&UNK_11046bcf0);
  puRam0000000112e18188 = puVar1;
  return;
}



/* Entry: 101cd36a4; end: 101cd36cb;  */

void FUN_101cd36a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_101cd3ab0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 101cd36cc; end: 101cd36e3;  */

void FUN_101cd36cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101cd34c0(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 101cd36e4; end: 101cd36f7;  */

bool FUN_101cd36e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101cd36f8; end: 101cd37a3;  */

void FUN_101cd36f8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101cd37a4; end: 101cd37db;  */

undefined1  [16] FUN_101cd37a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x644972657375;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x746e65746e6f63;
  }
  uVar2 = 0xe600000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101cd37dc; end: 101cd38af;  */

void FUN_101cd37dc(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x746e65746e6f63;
  if ((param_2 == 0x746e65746e6f63 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x746e65746e6f63,0xe700000000000000,param_2,param_3,0), (uVar1 & 1) != 0))
  {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x644972657375;
    if ((param_2 == 0x644972657375) && (param_3 == -0x1a00000000000000)) {
      func_0x000107c6142c(0xe600000000000000);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x644972657375,0xe600000000000000,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101cd38b0; end: 101cd38c7;  */

undefined1  [16] FUN_101cd38b0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 101cd38c8; end: 101cd3917;  */

void FUN_101cd38c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_101cd3d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 101cd3918; end: 101cd3a67;  */

void FUN_101cd3918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar3 = 0x112e18198;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x0001000285a8(0x112e18198,&UNK_10d9f67f0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_80 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_101cd3d70();
  puVar4 = &UNK_11046bc60;
  func_0x000107c606ec(lVar6,&UNK_11046bc60,&UNK_11046bc60,param_1,uVar1,uVar2);
  uStack_51 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000101cd3db0();
  func_0x000107c60554(&uStack_70,&uStack_51,lVar3,&UNK_11046bb50,puVar4);
  if (unaff_x21 == 0) {
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    func_0x000107c6053c(uStack_80,uStack_78,&uStack_70,lVar3);
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  return;
}



/* Entry: 101cd3a68; end: 101cd3a93;  */

void FUN_101cd3a68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_101cd3df0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 101cd3a94; end: 101cd3aaf;  */

void FUN_101cd3a94(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101cd3918(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 101cd3ab0; end: 101cd3d6f;  */

undefined1  [16] FUN_101cd3ab0(undefined *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long lVar10;
  long unaff_x21;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_90 [8];
  
  puVar3 = (undefined *)0x112e18208;
  func_0x0001000285a8(0x112e18208,&UNK_10d9f6c18);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_90 + -extraout_x8;
  lVar4 = 0x112e18210;
  func_0x0001000285a8(0x112e18210,&UNK_10d9f6c20);
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar13 + -extraout_x8_00;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  puVar12 = puVar5;
  FUN_101cd3624();
  func_0x000107c606e0(puVar11,&UNK_11046bcf0,&UNK_11046bcf0,puVar12,uVar1,uVar2);
  puVar12 = puVar11;
  if (unaff_x21 == 0) {
    lVar6 = lVar4;
    func_0x000107c60514();
    uVar9 = *(ulong *)(lVar6 + 0x10);
    lVar7 = lVar6;
    func_0x000101cd47d8();
    if ((((uint)lVar7 & 0xff) != 1) && ((uVar9 & 0x7fffffffffffffff) == 0)) {
      func_0x000101cd3664();
      puVar5 = &UNK_11046bd80;
      func_0x000107c604cc(puVar13);
      puVar12 = puVar3;
      func_0x000107c604f4();
      (**(code **)(lVar10 + 8))(puVar13,puVar3);
      (**(code **)(lVar14 + 8))(puVar11,lVar4);
      func_0x000107c615e8(lVar6);
      func_0x0001000834e4(param_1);
      goto LAB_101cd3d44;
    }
    lVar7 = 0;
    func_0x000107c60344();
    puVar8 = (undefined8 *)PTR___ss13DecodingErrorOs0B0sWP_11034e5b0;
    func_0x000107c613f8();
    lVar10 = 0x112da1fc8;
    func_0x0001000285a8(0x112da1fc8,&UNK_10dae6550);
    puVar12 = (undefined *)(long)*(int *)(lVar10 + 0x30);
    *puVar8 = &UNK_11046bb50;
    func_0x000107c604d0(lVar4);
    func_0x000107c6033c((undefined *)((long)puVar8 + (long)puVar12));
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (puVar8,*(undefined4 *)
                       PTR___ss13DecodingErrorO12typeMismatchyABypXp_AB7ContextVtcABmFWC_11034e580,
               lVar7);
    func_0x000107c61654();
    (**(code **)(lVar14 + 8))(puVar11,lVar4);
    func_0x000107c615e8(lVar6);
    puVar5 = puVar11;
  }
  func_0x0001000834e4(param_1);
LAB_101cd3d44:
  auVar15._8_8_ = puVar12;
  auVar15._0_8_ = puVar5;
  return auVar15;
}



/* Entry: 101cd3d70; end: 101cd3def;  */

void FUN_101cd3d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e181a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9f6b1c;
  func_0x000107c61520(&UNK_10d9f6b1c,&UNK_11046bc60);
  puRam0000000112e181a0 = puVar1;
  return;
}



/* Entry: 101cd3df0; end: 101cd3f8f;  */

/* WARNING: Removing unreachable block (ram,0x000101cd3f48) */
/* WARNING: Removing unreachable block (ram,0x000101cd3ed4) */

undefined8 FUN_101cd3df0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_51;
  
  lVar2 = 0x112e181f8;
  func_0x0001000285a8(0x112e181f8,&UNK_10d9f6c10);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_101cd3d70();
  puVar4 = &UNK_11046bc60;
  func_0x000107c606e0(&uStack_70 + -extraout_x8,&UNK_11046bc60,&UNK_11046bc60,lVar3,uVar1,uVar5);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x000101cd4758();
    func_0x000107c60508(&uStack_70,&UNK_11046bb50,&uStack_51,lVar2,&UNK_11046bb50,puVar4);
    uVar5 = CONCAT71(uStack_6f,uStack_70);
    uStack_70 = 1;
    func_0x000107c604f4(&uStack_70,lVar2);
    (**(code **)(lVar6 + 8))(&uStack_70 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return uVar5;
}



/* Entry: 101cd3f90; end: 101cd3f97;  */

void FUN_101cd3f90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101cd3f98; end: 101cd4007;  */

undefined8 * FUN_101cd3f98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101cd4008; end: 101cd40ab;  */

int FUN_101cd4008(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101cd40ac; end: 101cd413b;  */

long FUN_101cd40ac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101cd413c; end: 101cd41a7;  */

undefined8 * FUN_101cd413c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



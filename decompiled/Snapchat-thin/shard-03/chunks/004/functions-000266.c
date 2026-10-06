/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028189e8; end: 102818a2f;  */

undefined8 FUN_1028189e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102818a30; end: 102818a8f;  */

void FUN_102818a30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *param_2;
  func_0x000107c453dc(uVar1);
  func_0x000107c61180();
  func_0x0001070b31f8();
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar2;
  return;
}



/* Entry: 102818a90; end: 10281901f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102818a90(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,undefined *param_4,
                  uint param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined1 *puStack_b8;
  long lStack_b0;
  uint uStack_a4;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar1 = 0;
  lStack_a0 = param_6;
  puStack_98 = param_1;
  func_0x000100b91d00();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar11 = 0x112dbe418;
  puVar2 = &UNK_10d990420;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar12 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12_00;
  puVar4 = (undefined1 *)*param_2;
  puVar6 = puVar4;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (puVar6 == (undefined1 *)0x0) {
LAB_102818d54:
    puVar10 = (undefined1 *)0x0;
    puVar8 = (undefined *)0x0;
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar10 = puVar6;
    puStack_b8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_b0 = lVar5;
    uStack_a4 = param_5;
    func_0x000107c40674();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = puVar10;
    func_0x000107c5faec();
    puVar8 = puVar2;
    func_0x000107c61170(puVar10);
    if (param_3 == puVar6 && param_4 == puVar2) {
      func_0x000107c6142c(puVar2);
    }
    else {
      func_0x000107c605b8(param_3,param_4,puVar6,puVar2,0);
      func_0x000107c6142c(puVar2);
      puVar8 = param_4;
      if (((ulong)param_3 & 1) == 0) goto LAB_102818d54;
    }
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (puVar4 == (undefined1 *)0x0) goto LAB_102818d54;
    puVar6 = puVar4;
    func_0x000107c406e0();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar6 == (undefined1 *)0x0) goto LAB_102818d54;
    puVar4 = puVar6;
    func_0x000107c3f334();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar4 == (undefined1 *)0x0) goto LAB_102818d54;
    puVar6 = puVar4;
    func_0x000107c51f70();
    func_0x000107c61180();
    if (puVar6 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
      puVar8 = (undefined *)0x0;
      if ((uStack_a4 & 1) == 0) goto LAB_102818fa4;
LAB_102818c90:
      lVar5 = lStack_a0;
      func_0x000107c61428(lStack_a0 + 0x10,auStack_90,0,0);
      lVar5 = lVar5 + 0x10;
      func_0x000107c61618();
      if (lVar5 != 0) {
        uVar7 = *(undefined8 *)(lVar5 + _DAT_112ec3368);
        func_0x000107c6157c(uVar7);
        func_0x000107c61170(lVar5);
        func_0x0001000d224c(&uStack_78);
        func_0x000107c61574(uVar7);
        uVar7 = uStack_78;
        func_0x000107c614f0(uStack_78);
        (**(code **)(lStack_70 + 0x28))(lVar11,puVar10,puVar8,uVar7,lStack_70);
        func_0x000107c615e8(uStack_78);
        func_0x000101685588(lVar11,lVar12);
        lVar5 = lVar12;
        (**(code **)(lVar9 + 0x30))(lVar12,1,lVar1);
        lVar1 = lStack_b0;
        if ((int)lVar5 != 1) {
          func_0x0001016855d8(lVar12,lStack_b0);
          puVar6 = puStack_b8;
          func_0x000101681be8(lVar1,puStack_b8);
          func_0x0001047c0984(0);
          func_0x000107c610f8();
          func_0x0001047b952c();
          func_0x000107c61170(puVar4);
          func_0x00010168561c(lVar1);
          func_0x000101681b5c(lVar11);
          goto LAB_102818d60;
        }
        func_0x000101681b5c(lVar11);
      }
      func_0x000107c61170(puVar4);
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar10 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170(puVar6);
      if ((uStack_a4 & 1) != 0) goto LAB_102818c90;
LAB_102818fa4:
      puVar6 = puVar4;
      func_0x000107c3d458();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
    }
  }
LAB_102818d60:
  puVar2 = PTR_PTR_1126ab110;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (puVar6 != (undefined1 *)0x0) {
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c61170(puVar6);
      goto LAB_102818f6c;
    }
    lVar11 = *(long *)((long)(puVar6 + _DAT_11308f138) + 8);
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(puVar6 + _DAT_11308f138);
      func_0x000107c61434(lVar11);
      func_0x000107c5fadc(uVar7,lVar11);
      func_0x000107c6142c(lVar11);
    }
    func_0x000107c522e4(puVar2);
    func_0x000107c61170(uVar7);
    lVar11 = *(long *)((long)(puVar6 + _DAT_11308f148) + 8);
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(puVar6 + _DAT_11308f148);
      func_0x000107c61434(lVar11);
      func_0x000107c5fadc(uVar7,lVar11);
      func_0x000107c6142c(lVar11);
    }
    func_0x000107c52320(puVar2);
    func_0x000107c61170(uVar7);
    lVar11 = *(long *)((long)(puVar6 + _DAT_11308f140) + 8);
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(puVar6 + _DAT_11308f140);
      func_0x000107c61434(lVar11);
      func_0x000107c5fadc(uVar7,lVar11);
      func_0x000107c6142c(lVar11);
    }
    func_0x000107c523d4(puVar2);
    func_0x000107c61170(uVar7);
    lVar11 = lStack_a0;
    func_0x000107c61428(lStack_a0 + 0x10,&uStack_78,0,0);
    lVar11 = lVar11 + 0x10;
    func_0x000107c61618();
    if (lVar11 != 0) {
      lVar1 = *(long *)(lVar11 + _DAT_112ec3370);
      func_0x000107c61174();
      func_0x000107c61170(lVar11);
      lVar11 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar11 != 0) {
        func_0x000107c5fadc(puVar10,puVar8);
        func_0x000107c40700(lVar11);
        func_0x000107c615e8(lVar11);
        func_0x000107c61170(puVar10);
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c490d4();
    func_0x000107c53358(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c6142c(puVar8);
LAB_102818f6c:
  *puStack_98 = puVar2;
  return;
}



/* Entry: 102819020; end: 102819043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102819020(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + _DAT_112ec33a0;
    func_0x000107c61618(lVar2);
    func_0x000107c61170(lVar1);
  }
  return lVar2;
}



/* Entry: 102819044; end: 102819163;  */

undefined1  [16] FUN_102819044(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar3 = param_1;
  func_0x000107c5bd28();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10281915c);
    (*pcVar2)();
  }
  lVar5 = lVar3;
  func_0x000107c5bd30();
  func_0x000107c61170(lVar3);
  if ((int)lVar5 == 0x1f) {
    func_0x000107c5bd28();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102819160);
      (*pcVar2)();
    }
    lVar3 = param_1;
    func_0x000107c5b880();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102819164);
      (*pcVar2)();
    }
    lVar5 = lVar3;
    func_0x000107c4051c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      uVar1 = (uint)(param_2 >> 0x20);
      uVar4 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar4 == 0) {
          if ((param_2 & 0xff000000000000) != 0) goto LAB_102819148;
        }
        else {
          lVar5 = (long)(int)lVar3;
          lVar6 = lVar3 >> 0x20;
LAB_102819134:
          if (lVar5 != lVar6) goto LAB_102819148;
        }
      }
      else if (uVar4 == 2) {
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)(lVar3 + 0x18);
        goto LAB_102819134;
      }
      func_0x00010006c090(lVar3);
    }
  }
  lVar3 = 0;
  param_2 = 0xf000000000000000;
LAB_102819148:
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = lVar3;
  return auVar7;
}



/* Entry: 102819164; end: 10281917b;  */

undefined8 FUN_102819164(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001070b30c4(uVar2,uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10281917c; end: 1028191bb;  */

void FUN_10281917c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028191bc; end: 10281964f;  */

void FUN_1028191bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105532a0;
  func_0x000107c613fc(&UNK_1105532a0,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(FUN_102819650,puVar1);
  return;
}



/* Entry: 102819650; end: 10281968b;  */

void FUN_102819650(void)

{
  long unaff_x20;
  
  func_0x0001028192dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10281968c; end: 10281969b;  */

undefined1  [16] FUN_10281968c(void)

{
  return ZEXT816(0x1105532c8);
}



/* Entry: 10281969c; end: 10281987b;  */

void FUN_10281969c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_70 = param_1;
  func_0x000107c5ffd8();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_78 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000295c4();
  uStack_88 = uVar4;
  func_0x000107c5f808(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_102819fac(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x000102819fec(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lStack_80 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_78);
  uVar4 = 0xd00000000000002d;
  func_0x000107c5ffec(0xd00000000000002d,0x800000010f0c2470,lVar3,lVar8,puVar7,0);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  return;
}



/* Entry: 10281987c; end: 1028198df;  */

undefined1 FUN_10281987c(void)

{
  undefined1 auStack_80 [16];
  undefined1 uStack_31;
  
  func_0x000107c5ffe4(&uStack_31,0x102819f68,auStack_80,PTR___sSbN_11034dd40);
  return uStack_31;
}



/* Entry: 1028198e0; end: 102819b0b;  */

void FUN_1028198e0(undefined1 *param_1,double param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = *(long *)(param_3 + 0x28);
  if (((lVar4 == 0) ||
      (((uVar2 = *(ulong *)(param_3 + 0x20), uVar2 != param_4 || lVar4 != param_5 &&
        (func_0x000107c605b8(uVar2,lVar4,param_4,param_5,0), (uVar2 & 1) == 0)) ||
       (lVar4 = *(long *)(param_3 + 0x38), lVar4 == 0)))) ||
     (((uVar2 = *(ulong *)(param_3 + 0x30), uVar2 != param_6 || (lVar4 != param_7)) &&
      (func_0x000107c605b8(uVar2,lVar4,param_6,param_7,0), (uVar2 & 1) == 0)))) {
    if (*(long *)(param_3 + 0x38) == 0) {
      lVar4 = *(long *)(param_3 + 0x10);
      uVar3 = 0xd00000000000002f;
      lStack_88 = param_7;
      func_0x000107c5fadc(0xd00000000000002f,0x800000010f0c24a0);
      lStack_80 = lVar4;
      func_0x000107c4981c();
      func_0x000107c61170(uVar3);
      func_0x000107c5eea0(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
      if (604800.0 <= param_2 - (double)lVar4) {
        uVar3 = 0xd00000000000002b;
        func_0x000107c5fadc(0xd00000000000002b,0x800000010f0c24d0);
        lVar1 = lStack_80;
        func_0x000107c4981c();
        func_0x000107c61170(uVar3);
        if (lVar1 < 3) {
          uVar3 = *(undefined8 *)(param_3 + 0x28);
          *(ulong *)(param_3 + 0x20) = param_4;
          *(long *)(param_3 + 0x28) = param_5;
          func_0x000107c6142c(uVar3);
          lVar1 = lStack_88;
          uVar3 = *(undefined8 *)(param_3 + 0x38);
          *(ulong *)(param_3 + 0x30) = param_6;
          *(long *)(param_3 + 0x38) = lStack_88;
          func_0x000107c61434(param_5);
          func_0x000107c6142c(uVar3);
          *param_1 = 1;
          func_0x000107c61434(lVar1);
          return;
        }
      }
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    *param_1 = 1;
  }
  return;
}



/* Entry: 102819b0c; end: 102819d1f;  */

void FUN_102819b0c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &UNK_110553390;
  func_0x000107c613fc(&UNK_110553390,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_70 = FUN_102819f88;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1105533a8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_102819fac(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x000102819fec(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar3,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar2);
  (**(code **)(lVar10 + 8))(lVar3,lStack_a8);
  puVar1 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102819d20; end: 102819f0b;  */

void FUN_102819d20(double param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    func_0x000107c61174();
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f0c24d0);
    lVar5 = lVar3;
    func_0x000107c4981c();
    func_0x000107c61170(uVar4);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f00);
      (*pcVar1)();
    }
    uVar4 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f0c24d0);
    func_0x000107c55450(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c61174(uVar4);
    func_0x000107c5eea0(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar7 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f04);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f08);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f0c);
      (*pcVar1)();
    }
    uVar6 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f0c24a0);
    func_0x000107c55450(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 102819f0c; end: 102819f87;  */

void FUN_102819f0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102819f88; end: 102819fab;  */

void FUN_102819f88(double param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    func_0x000107c61174();
    uVar5 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f0c24d0);
    lVar6 = lVar4;
    func_0x000107c4981c();
    func_0x000107c61170(uVar5);
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f00);
      (*pcVar1)();
    }
    uVar5 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f0c24d0);
    func_0x000107c55450(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000107c61174(uVar5);
    func_0x000107c5eea0(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f04);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f08);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102819f0c);
      (*pcVar1)();
    }
    uVar7 = 0xd00000000000002f;
    func_0x000107c5fadc(0xd00000000000002f,0x800000010f0c24a0);
    func_0x000107c55450(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 102819fac; end: 10281a02f;  */

void FUN_102819fac(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10281a030; end: 10281a077; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281a030(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec34a8;
  func_0x000107c61428(param_1 + _DAT_112ec34a8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10281a078; end: 10281a0db; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281a078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec34a8;
  func_0x000107c61428(param_1 + _DAT_112ec34a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10281a0dc; end: 10281a347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10281a0dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined1 uStack_52;
  undefined uStack_51;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec34b0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_51 = 0;
    puVar7 = &uStack_51;
    func_0x000100854cb0(puVar7);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c40ee4();
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar3 = lVar1;
    func_0x000107c4da34(lVar1);
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x0001000b637c();
    func_0x000107c61170(lVar3);
    pcVar5 = FUN_10281a348;
    func_0x0001000bfde0(FUN_10281a348,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar4);
    puVar6 = &uStack_52;
    uStack_52 = lVar2 == 3;
    func_0x0001006c71a4(puVar6);
    func_0x000107c61574(pcVar5);
    puVar7 = PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c61574(puVar6);
    func_0x000107c615e8(lVar1);
  }
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c6157c(puVar7);
  uVar8 = param_1;
  func_0x0001000b637c(param_1);
  uVar9 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar8);
  puVar10 = puVar7;
  func_0x0001006c733c(puVar7);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar9);
  puVar11 = &UNK_1105533e0;
  func_0x000107c613fc(&UNK_1105533e0,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar12 = &UNK_110553408;
  func_0x000107c613fc(&UNK_110553408,0x28,7);
  *(undefined **)(puVar12 + 0x10) = puVar11;
  *(undefined8 *)(puVar12 + 0x18) = param_1;
  *(undefined8 *)(puVar12 + 0x20) = param_2;
  puVar11 = &UNK_110553430;
  func_0x000107c613fc(&UNK_110553430,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10281a944;
  *(undefined **)(puVar11 + 0x18) = puVar12;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar8 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar5 = FUN_10281b078;
  func_0x0001000bfde0(FUN_10281b078,puVar11,uVar8);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar7);
  return puVar11;
}



/* Entry: 10281a348; end: 10281a377;  */

void FUN_10281a348(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  func_0x000107c49820();
  *(bool *)param_1 = lVar1 == 3;
  return;
}



/* Entry: 10281a378; end: 10281a943;  */

/* WARNING: Possible PIC construction at 0x00010281a90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281a80c) */
/* WARNING: Removing unreachable block (ram,0x00010281a6bc) */
/* WARNING: Removing unreachable block (ram,0x00010281a670) */
/* WARNING: Removing unreachable block (ram,0x00010281a5e0) */
/* WARNING: Removing unreachable block (ram,0x00010281a54c) */
/* WARNING: Removing unreachable block (ram,0x00010281a460) */
/* WARNING: Removing unreachable block (ram,0x00010281a470) */
/* WARNING: Removing unreachable block (ram,0x00010281a8e8) */
/* WARNING: Removing unreachable block (ram,0x00010281a480) */
/* WARNING: Removing unreachable block (ram,0x00010281a44c) */
/* WARNING: Removing unreachable block (ram,0x00010281a8e0) */
/* WARNING: Removing unreachable block (ram,0x00010281a8f0) */
/* WARNING: Removing unreachable block (ram,0x00010281a450) */
/* WARNING: Removing unreachable block (ram,0x00010281a438) */
/* WARNING: Removing unreachable block (ram,0x00010281a8f8) */
/* WARNING: Removing unreachable block (ram,0x00010281a43c) */
/* WARNING: Removing unreachable block (ram,0x00010281a910) */
/* WARNING: Removing unreachable block (ram,0x00010281a89c) */
/* WARNING: Removing unreachable block (ram,0x00010281a920) */

void FUN_10281a378(undefined8 param_1,ulong param_2,long param_3)

{
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
  }
  else if ((param_2 & 1) == 0) {
    func_0x000107c40e28(param_1);
  }
  else {
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10281a944; end: 10281a94f;  */

/* WARNING: Possible PIC construction at 0x00010281a90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a66c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281a898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281a80c) */
/* WARNING: Removing unreachable block (ram,0x00010281a6bc) */
/* WARNING: Removing unreachable block (ram,0x00010281a670) */
/* WARNING: Removing unreachable block (ram,0x00010281a5e0) */
/* WARNING: Removing unreachable block (ram,0x00010281a54c) */
/* WARNING: Removing unreachable block (ram,0x00010281a460) */
/* WARNING: Removing unreachable block (ram,0x00010281a470) */
/* WARNING: Removing unreachable block (ram,0x00010281a8e8) */
/* WARNING: Removing unreachable block (ram,0x00010281a480) */
/* WARNING: Removing unreachable block (ram,0x00010281a44c) */
/* WARNING: Removing unreachable block (ram,0x00010281a8e0) */
/* WARNING: Removing unreachable block (ram,0x00010281a8f0) */
/* WARNING: Removing unreachable block (ram,0x00010281a450) */
/* WARNING: Removing unreachable block (ram,0x00010281a438) */
/* WARNING: Removing unreachable block (ram,0x00010281a8f8) */
/* WARNING: Removing unreachable block (ram,0x00010281a43c) */
/* WARNING: Removing unreachable block (ram,0x00010281a910) */
/* WARNING: Removing unreachable block (ram,0x00010281a89c) */
/* WARNING: Removing unreachable block (ram,0x00010281a920) */

void FUN_10281a944(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_88,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
  }
  else if ((param_2 & 1) == 0) {
    func_0x000107c40e28(param_1);
  }
  else {
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10281a950; end: 10281a9cf;  */

void FUN_10281a950(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  func_0x000107c4a384(*param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 10281a9d0; end: 10281acef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char ** FUN_10281a9d0(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char **ppcVar5;
  long unaff_x20;
  undefined *puVar6;
  char *pcVar7;
  char *pcStack_48;
  
  pcVar1 = *(char **)(unaff_x20 + _DAT_112ec34f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar6 = &UNK_10d923090;
  func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
  if (pcVar1 == (char *)0x0) {
    func_0x00010281b6d8(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    pcVar1 = "";
    func_0x000107c60124("",0,2);
    ppcVar4 = &pcStack_48;
    pcStack_48 = pcVar1;
    func_0x000100854cb0(ppcVar4);
    func_0x000107c61170(pcVar1);
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c3e548(pcVar1);
    func_0x000107c61180();
    pcVar3 = pcVar2;
    func_0x0001000b637c();
    func_0x000107c61170(pcVar2);
    pcVar2 = pcVar1;
    func_0x000107c3e544();
    func_0x000107c61180();
    if (pcVar2 == (char *)0x0) {
      pcVar7 = (char *)0x0;
      puVar6 = (undefined *)0xe000000000000000;
    }
    else {
      pcVar7 = pcVar2;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar2);
    }
    func_0x000107c5fadc(pcVar7,puVar6);
    func_0x000107c6142c(puVar6);
    ppcVar5 = &pcStack_48;
    pcStack_48 = pcVar7;
    func_0x0001006c71a4(ppcVar5);
    func_0x000107c61170(pcVar7);
    func_0x000107c61574(pcVar3);
    ppcVar4 = (char **)0x112d72d90;
    func_0x00010281b718(0x112d72d90,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x0001000c2068();
    func_0x000107c615e8(pcVar1);
    func_0x000107c61574(ppcVar5);
  }
  return ppcVar4;
}



/* Entry: 10281acf0; end: 10281ad43;  */

void FUN_10281acf0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10281ad44();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10281ad44; end: 10281af43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281ad44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  lVar4 = _DAT_112ec34a8;
  func_0x000107c61428(unaff_x20 + _DAT_112ec34a8,auStack_68,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112ec34e0);
    func_0x000107c615f0(lVar4);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c41050();
      func_0x000107c61180();
      lVar6 = lVar3;
      func_0x000107c4a564();
      func_0x000107c61170(lVar3);
      func_0x00010439c014(0);
      func_0x000107c610f8();
      uVar1 = 0x17;
      func_0x00010439b9d8(0x17,0,0,0xef,0,0,0x3e,0);
      if ((int)lVar6 == 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112ec34c8);
        lVar3 = lVar6;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar6);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        lVar3 = *(long *)(unaff_x20 + _DAT_112ec34d8);
        func_0x000107c3eda8(lVar3);
        func_0x000107c61180();
      }
      else {
        lVar6 = *(long *)(unaff_x20 + _DAT_112ec34d0);
        lVar3 = lVar6;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar6);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        func_0x000103929b80(0);
        func_0x000107c615f0(lVar4);
        uVar2 = uVar1;
        func_0x000107c61174(uVar1);
        func_0x000107c61174();
        lVar3 = lVar4;
        func_0x000103929734(lVar4,uVar2,unaff_x20,0,3);
      }
      func_0x000107c42c1c(lVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar1);
    }
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 10281af44; end: 10281b077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281af44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + _DAT_112ec34c0);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    FUN_102819b0c();
    func_0x000107c61574(lVar2);
  }
  lVar2 = *(long *)(param_1 + _DAT_112ec34e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_10281b024:
    lVar2 = *(long *)(param_1 + _DAT_112ec34e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_10281b05c;
    func_0x000107c4bf68();
  }
  else {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c4a564();
    func_0x000107c61170(lVar1);
    if ((int)lVar2 == 0) goto LAB_10281b024;
    lVar2 = *(long *)(param_1 + _DAT_112ec34e8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_10281b05c;
    func_0x000107c4bc38();
  }
  func_0x000107c615e8(lVar2);
LAB_10281b05c:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10281b078; end: 10281b0ab;  */

void FUN_10281b078(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,*(undefined1 *)(param_2 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 10281b0ac; end: 10281b123; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_10281b0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281a0dc(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10281b124; end: 10281b393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281b124(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  uVar1 = param_1;
  func_0x000107c40e28();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c4ce20();
  func_0x000107c61180();
  if (uVar2 == 0) goto LAB_10281b35c;
  uVar3 = uVar2;
  func_0x000107c3ea4c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) goto LAB_10281b35c;
  uVar2 = uVar3;
  func_0x000107c500f0();
  if ((int)uVar2 == 3) {
    uVar2 = param_1;
    func_0x000107c4cde0();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if ((uVar4 == *(ulong *)(unaff_x20 + _DAT_112ec34b8)) &&
       (param_2 == ((ulong *)(unaff_x20 + _DAT_112ec34b8))[1])) {
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c6142c(param_2);
      return;
    }
    uVar2 = param_2;
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112ec34b0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c40ee4();
        func_0x000107c615e8(lVar5);
        if (lVar6 == 3) goto LAB_10281b250;
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_112ec34c0);
      if (lVar5 == 0) {
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar3);
        return;
      }
      func_0x000107c6157c(lVar5);
      uVar4 = param_1;
      func_0x000107c40258();
      func_0x000107c61180();
      uVar7 = uVar4;
      func_0x000107c5faec();
      uVar9 = uVar2;
      func_0x000107c61170(uVar4);
      func_0x000107c40674();
      func_0x000107c61180();
      uVar8 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar4 = uVar7 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar4 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        uVar4 = uVar8 & 0xffffffffffff;
        if ((uVar9 & 0x2000000000000000) != 0) {
          uVar4 = uVar9 >> 0x38 & 0xf;
        }
        if (uVar4 != 0) {
          FUN_10281987c(uVar7,uVar2,uVar8,uVar9);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar3);
          func_0x000107c61574(lVar5);
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(uVar9);
          return;
        }
      }
      func_0x000107c6142c(uVar2);
      func_0x000107c6142c(uVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(lVar5);
      goto LAB_10281b35c;
    }
  }
LAB_10281b250:
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
LAB_10281b35c:
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10281b394; end: 10281b3ef; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_10281b394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281b124(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10281b3f0; end: 10281b3f7; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin pluginType] */

undefined8 FUN_10281b3f0(void)

{
  return 0;
}



/* Entry: 10281b3f8; end: 10281b40f; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010281b40c) */

void FUN_10281b3f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10281b410; end: 10281b49f;  */

/* WARNING: Possible PIC construction at 0x00010281b450: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281b410(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec34c8);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec34d0);
    lVar1 = lVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10281b4a0; end: 10281b4c7; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin dismissPresentedView] */

void FUN_10281b4a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10281b410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10281b4c8; end: 10281b527; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin init] */

void FUN_10281b4c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiMessageAccessoryPlugins.BitmojiComicStyleMessageAccessoryPlugin",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10281b4f4);
  (*pcVar1)();
}



/* Entry: 10281b528; end: 10281b5f3; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281b528(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec34a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec34f8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec34b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec34c0));
  return;
}



/* Entry: 10281b5f4; end: 10281b5ff; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x00010281b644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281b660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281b648) */
/* WARNING: Removing unreachable block (ram,0x00010281b664) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281b5f4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281b600; end: 10281b60b; -[_TtC30BitmojiMessageAccessoryPlugins39BitmojiComicStyleMessageAccessoryPlugin plusManagementDidDismiss] */

/* WARNING: Possible PIC construction at 0x00010281b644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281b660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281b648) */
/* WARNING: Removing unreachable block (ram,0x00010281b664) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281b600(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281b60c; end: 10281b68b;  */

/* WARNING: Possible PIC construction at 0x00010281b644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281b660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281b648) */
/* WARNING: Removing unreachable block (ram,0x00010281b664) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10281b60c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281b68c; end: 10281b6ab;  */

void FUN_10281b68c(void)

{
  func_0x000107c61168(&PTR_PTR_112864998);
  return;
}



/* Entry: 10281b6ac; end: 10281b6d7;  */

void FUN_10281b6ac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10281ad44();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10281b6d8; end: 10281b757;  */

void FUN_10281b6d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10281b758; end: 10281b75f;  */

void FUN_10281b758(long param_1,long param_2)

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



/* Entry: 10281b760; end: 10281bccf;  */

void FUN_10281b760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_1105534a8;
  func_0x000107c613fc(&UNK_1105534a8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_10281bcd0,puVar1);
  return;
}



/* Entry: 10281bcd0; end: 10281bd03;  */

void FUN_10281bcd0(void)

{
  long unaff_x20;
  
  func_0x00010281b864(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10281bd04; end: 10281bd13;  */

undefined1  [16] FUN_10281bd04(void)

{
  return ZEXT816(0x1105534d0);
}



/* Entry: 10281bd14; end: 10281bd5b; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281bd14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec3548;
  func_0x000107c61428(param_1 + _DAT_112ec3548,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10281bd5c; end: 10281bdbf; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281bd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec3548;
  func_0x000107c61428(param_1 + _DAT_112ec3548,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10281bdc0; end: 10281bf17;  */

undefined * FUN_10281bdc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  
  uVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  uVar2 = param_1;
  func_0x0001000b637c(param_1);
  uVar3 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar2);
  FUN_10281bf18();
  uVar4 = uVar2;
  func_0x0001006c733c();
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  puVar5 = &UNK_1105534f0;
  func_0x000107c613fc(&UNK_1105534f0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined8 *)(puVar5 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  puVar6 = &UNK_110553518;
  func_0x000107c613fc(&UNK_110553518,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10281c4b8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar1 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  pcVar7 = FUN_10281c730;
  func_0x0001000bfde0(FUN_10281c730,puVar6,uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar6);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar7);
  return puVar6;
}



/* Entry: 10281bf18; end: 10281c07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281bf18(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_50;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec3568);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d63ef8,&UNK_10dae35f0);
    lStack_50 = 0;
    uStack_48 = 0;
    func_0x000100854cb0(&lStack_50);
  }
  else {
    func_0x0001000285a8(0x112d5c1e0,&UNK_10d923090);
    lVar2 = lVar1;
    func_0x000107c3e548(lVar1);
    func_0x000107c61180();
    lVar7 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    uVar3 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    pcVar4 = FUN_10281c9fc;
    uVar6 = 0;
    func_0x0001000bfde0(FUN_10281c9fc,0,uVar3);
    func_0x000107c61574(lVar7);
    lVar2 = lVar1;
    func_0x000107c3e544();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar7 = 0;
      uVar6 = 0;
    }
    else {
      lVar7 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    lStack_50 = lVar7;
    uStack_48 = uVar6;
    func_0x0001006c71a4(&lStack_50);
    func_0x000107c61574(pcVar4);
    func_0x000107c6142c(uVar6);
    func_0x000100dd41f8();
    func_0x0001000c2068();
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(plVar5);
  }
  return;
}



/* Entry: 10281c080; end: 10281c4b7;  */

/* WARNING: Possible PIC construction at 0x00010281c0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281c380) */
/* WARNING: Removing unreachable block (ram,0x00010281c298) */
/* WARNING: Removing unreachable block (ram,0x00010281c204) */
/* WARNING: Removing unreachable block (ram,0x00010281c114) */
/* WARNING: Removing unreachable block (ram,0x00010281c124) */
/* WARNING: Removing unreachable block (ram,0x00010281c140) */
/* WARNING: Removing unreachable block (ram,0x00010281c474) */
/* WARNING: Removing unreachable block (ram,0x00010281c154) */
/* WARNING: Removing unreachable block (ram,0x00010281c0f4) */
/* WARNING: Removing unreachable block (ram,0x00010281c4b4) */
/* WARNING: Removing unreachable block (ram,0x00010281c104) */
/* WARNING: Removing unreachable block (ram,0x00010281c0d4) */
/* WARNING: Removing unreachable block (ram,0x00010281c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010281c0e4) */
/* WARNING: Removing unreachable block (ram,0x00010281c0c0) */
/* WARNING: Removing unreachable block (ram,0x00010281c45c) */
/* WARNING: Removing unreachable block (ram,0x00010281c490) */
/* WARNING: Removing unreachable block (ram,0x00010281c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010281c414) */

void FUN_10281c080(void)

{
  func_0x000107c4051c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10281c4b8; end: 10281c4c3;  */

/* WARNING: Possible PIC construction at 0x00010281c0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281c410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281c380) */
/* WARNING: Removing unreachable block (ram,0x00010281c298) */
/* WARNING: Removing unreachable block (ram,0x00010281c204) */
/* WARNING: Removing unreachable block (ram,0x00010281c114) */
/* WARNING: Removing unreachable block (ram,0x00010281c124) */
/* WARNING: Removing unreachable block (ram,0x00010281c140) */
/* WARNING: Removing unreachable block (ram,0x00010281c474) */
/* WARNING: Removing unreachable block (ram,0x00010281c154) */
/* WARNING: Removing unreachable block (ram,0x00010281c0f4) */
/* WARNING: Removing unreachable block (ram,0x00010281c4b4) */
/* WARNING: Removing unreachable block (ram,0x00010281c104) */
/* WARNING: Removing unreachable block (ram,0x00010281c0d4) */
/* WARNING: Removing unreachable block (ram,0x00010281c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010281c0e4) */
/* WARNING: Removing unreachable block (ram,0x00010281c0c0) */
/* WARNING: Removing unreachable block (ram,0x00010281c45c) */
/* WARNING: Removing unreachable block (ram,0x00010281c490) */
/* WARNING: Removing unreachable block (ram,0x00010281c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010281c414) */

void FUN_10281c4b8(void)

{
  func_0x000107c4051c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10281c4c4; end: 10281c543;  */

void FUN_10281c4c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  func_0x000107c4a384(*param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 10281c544; end: 10281c5b3;  */

void FUN_10281c544(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10281c5b4(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10281c5b4; end: 10281c72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281c5b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_1a8 [160];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = _DAT_112ec3548;
  func_0x000107c61428(unaff_x20 + _DAT_112ec3548,auStack_108,0,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112ec3558);
    func_0x000107c615f0(lVar3);
    lVar1 = lVar4;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    uStack_e8 = 0;
    uStack_f0 = 3;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 1;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec3560);
    uStack_e0 = param_1;
    uStack_d8 = param_2;
    func_0x000104312490(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    FUN_102575fb4(&uStack_f0,auStack_1a8);
    puVar2 = &uStack_f0;
    func_0x000104311600(puVar2);
    func_0x000107c3ed98(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c42c1c(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000102575ff0(&uStack_f0);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 10281c730; end: 10281c763;  */

void FUN_10281c730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1],param_2[2]);
  *param_1 = uVar1;
  return;
}



/* Entry: 10281c764; end: 10281c7db; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_10281c764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281bdc0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10281c7dc; end: 10281c97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281c7dc(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  
  func_0x000107c4051c();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  uVar2 = param_1;
  func_0x000107c5a934();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2;
  func_0x000107c5d8c4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
    return;
  }
  uVar2 = uVar3;
  func_0x000107c44b20();
  if ((int)uVar2 != 0) {
    uVar2 = uVar3;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar6 = param_2;
    if (uVar2 != 0) {
      uVar4 = uVar2;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      uVar6 = param_2;
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec3550);
        uVar4 = ((ulong *)(unaff_x20 + _DAT_112ec3550))[1];
        if ((uVar5 == uVar2) && (param_2 == uVar4)) {
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(param_2);
          return;
        }
        uVar6 = param_2;
        func_0x000107c605b8(uVar5,param_2,uVar2,uVar4,0);
        func_0x000107c6142c(param_2);
        if ((uVar5 & 1) != 0) goto LAB_10281c95c;
      }
    }
    uVar2 = uVar3;
    func_0x000107c42778();
    func_0x000107c61180();
    if (uVar2 != 0) {
      func_0x000107c61170();
      uVar2 = uVar3;
      func_0x000107c42778();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar4 = uVar2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        func_0x000107c5fb5c(uVar4,uVar6);
        func_0x000107c6142c(uVar6);
        func_0x000107c61170(uVar3);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10281c980);
      (*pcVar1)();
    }
  }
LAB_10281c95c:
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10281c980; end: 10281c9db; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin isApplicableToMessage:] */

uint FUN_10281c980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281c7dc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10281c9dc; end: 10281c9e3; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin pluginType] */

undefined8 FUN_10281c9dc(void)

{
  return 1;
}



/* Entry: 10281c9e4; end: 10281c9fb; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010281c9f8) */

void FUN_10281c9e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10281c9fc; end: 10281ca27;  */

void FUN_10281c9fc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c61174();
  func_0x000107c5fb14();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 10281ca28; end: 10281ca87; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin init] */

void FUN_10281ca28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiMessageAccessoryPlugins.BitmojiTryOnMessageAccessoryPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10281ca54);
  (*pcVar1)();
}



/* Entry: 10281ca88; end: 10281caf3; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010281cab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281cab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281ca88(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec3548));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec3558));
  return;
}



/* Entry: 10281caf4; end: 10281cb77; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin bitmojiAvatarBuilderFailedWithError:] */

/* WARNING: Possible PIC construction at 0x00010281cb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281cb4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281cb34) */
/* WARNING: Removing unreachable block (ram,0x00010281cb50) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281caf4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281cb78; end: 10281cb97;  */

void FUN_10281cb78(void)

{
  func_0x000107c61168(&PTR_PTR_112864aa8);
  return;
}



/* Entry: 10281cb98; end: 10281cc1b;  */

/* WARNING: Possible PIC construction at 0x00010281cbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281cbf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281cbd8) */
/* WARNING: Removing unreachable block (ram,0x00010281cbf4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cb98(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281cc1c; end: 10281cc43;  */

void FUN_10281cc1c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10281c5b4(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10281cc44; end: 10281cc83;  */

void FUN_10281cc44(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10281cc84; end: 10281cc87; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin bitmojiAvatarBuilderCompleted] */

/* WARNING: Possible PIC construction at 0x00010281cbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281cbf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281cbd8) */
/* WARNING: Removing unreachable block (ram,0x00010281cbf4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cc84(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281cc88; end: 10281cc8b; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x00010281cbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281cbf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281cbd8) */
/* WARNING: Removing unreachable block (ram,0x00010281cbf4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cc88(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281cc8c; end: 10281cc8f; -[_TtC30BitmojiMessageAccessoryPlugins34BitmojiTryOnMessageAccessoryPlugin bitmojiAvatarBuilderCancelled] */

/* WARNING: Possible PIC construction at 0x00010281cbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281cbf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281cbd8) */
/* WARNING: Removing unreachable block (ram,0x00010281cbf4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cc8c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10281cc90; end: 10281cd33;  */

void FUN_10281cc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec3540,&UNK_10dae3580);
  puVar1 = &UNK_1105535b8;
  func_0x000107c613fc(&UNK_1105535b8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10281cee4,puVar1);
  return;
}



/* Entry: 10281cd34; end: 10281cee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cd34(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  uVar2 = 0x112e028b0;
  func_0x0001000285a8(0x112e028b0,&UNK_10d9ecc00);
  func_0x000107c610f8();
  func_0x00010017da58(uVar3);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar5 = *(undefined8 *)(lStack_60 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_60);
  uVar3 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  lVar6 = 0;
  FUN_10281cb78();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112ec3548) = 0;
  *(undefined **)(lVar7 + _DAT_112ec3558) = puVar4;
  *(undefined8 *)(lVar7 + _DAT_112ec3560) = uStack_58;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ec3550);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ec3568) = uVar3;
  plVar8 = &lStack_78;
  lStack_78 = lVar7;
  lStack_70 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10281cee4; end: 10281ceff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cee4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar3 = uStack_58;
  uVar2 = 0x112e028b0;
  func_0x0001000285a8(0x112e028b0,&UNK_10d9ecc00);
  func_0x000107c610f8();
  func_0x00010017da58(uVar3);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar5 = *(undefined8 *)(lStack_60 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_60);
  uVar3 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  lVar6 = 0;
  FUN_10281cb78();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112ec3548) = 0;
  *(undefined **)(lVar7 + _DAT_112ec3558) = puVar4;
  *(undefined8 *)(lVar7 + _DAT_112ec3560) = uStack_58;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112ec3550);
  *puVar1 = uVar5;
  puVar1[1] = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112ec3568) = uVar3;
  plVar8 = &lStack_78;
  lStack_78 = lVar7;
  lStack_70 = lVar6;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10281cf00; end: 10281cf0f; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cf00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec35a8));
  return;
}



/* Entry: 10281cf10; end: 10281cf43; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cf10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec35a8);
  *(undefined8 *)(param_1 + _DAT_112ec35a8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10281cf44; end: 10281cf63; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin playbackPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cf44(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec35b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10281cf64; end: 10281cf77; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin setPlaybackPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cf64(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec35b0,param_3);
  return;
}



/* Entry: 10281cf78; end: 10281cf87; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cf78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec35b8));
  return;
}



/* Entry: 10281cf88; end: 10281cfbb; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cf88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec35b8);
  *(undefined8 *)(param_1 + _DAT_112ec35b8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10281cfbc; end: 10281cfcb; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281cfbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3600));
  return;
}



/* Entry: 10281cfcc; end: 10281d00b; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_10281cfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10281d00c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10281d00c; end: 10281d14b;  */

/* WARNING: Possible PIC construction at 0x00010281d040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281d0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281d10c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281d0f4) */
/* WARNING: Removing unreachable block (ram,0x00010281d044) */
/* WARNING: Removing unreachable block (ram,0x00010281d130) */
/* WARNING: Removing unreachable block (ram,0x00010281d04c) */
/* WARNING: Removing unreachable block (ram,0x00010281d110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281d00c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec3600);
  *(undefined8 *)(unaff_x20 + _DAT_112ec3600) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10281d14c; end: 10281d1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281d14c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec35e8;
  if (param_2 != 0) {
    func_0x000107c4b940(*(undefined8 *)(param_2 + _DAT_112ec35e8));
    lVar2 = _DAT_112ec35f0;
    func_0x000107c61428(param_2 + _DAT_112ec35f0,auStack_60,1,0);
    uVar3 = *(undefined8 *)(param_2 + lVar2);
    *(undefined **)(param_2 + lVar2) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar3);
    func_0x000107c5d278(*(undefined8 *)(param_2 + lVar1));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10281d1f0; end: 10281d77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10281d1f0(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x20;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uVar6;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec35e0);
  uVar19 = param_2;
  func_0x000107c4ce08(uVar2,param_2,param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 != 0) {
      uVar3 = uVar4;
      func_0x000107c5d8c4();
      func_0x000107c61180();
      if (uVar3 != 0) {
        uVar5 = uVar3;
        func_0x000107c44b20();
        if ((uVar5 & 1) != 0) {
          uVar5 = uVar2;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar5 != 0) {
            uVar6 = uVar5;
            func_0x000107c4ca5c();
            uVar1 = (uint)uVar6;
            func_0x0001085436b8();
            uVar6 = uVar2;
            func_0x000107c40258();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c5faec();
            puVar8 = PTR_PTR_1126ab138;
            func_0x000107c610f8();
            func_0x000107c453e4();
            uVar9 = uVar2;
            func_0x000107c3dc7c(uVar2);
            func_0x000107c61180();
            uVar10 = uVar2;
            func_0x000107c40674(uVar2);
            func_0x000107c61180();
            uVar11 = uVar5;
            func_0x000107c5caf0(uVar5);
            func_0x000107c61180();
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar9);
            func_0x000107c61170(uVar10);
            func_0x000107c53384(puVar8);
            func_0x000107c61170(uVar11);
            puVar12 = PTR_PTR_1126ab140;
            func_0x000107c610f8();
            func_0x000107c453e4();
            puVar13 = &UNK_1105536a8;
            func_0x000107c613fc(&UNK_1105536a8,0x18,7);
            func_0x000107c61614(puVar13 + 0x10);
            puVar14 = &UNK_1105537c0;
            func_0x000107c613fc(&UNK_1105537c0,0x28,7);
            *(undefined **)(puVar14 + 0x10) = puVar13;
            *(undefined **)(puVar14 + 0x18) = param_1;
            *(undefined8 *)(puVar14 + 0x20) = param_2;
            pcStack_70 = FUN_10281f040;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            puStack_80 = &UNK_1012935d4;
            puStack_78 = &UNK_1105537d8;
            ppuVar15 = &puStack_90;
            puStack_68 = puVar14;
            func_0x000107c60bc4(ppuVar15);
            puVar13 = puStack_68;
            func_0x000107c61174();
            func_0x000107c61174(param_2);
            func_0x000107c61574(puVar13);
            func_0x000107c56d90(puVar12);
            func_0x000107c60bd0(ppuVar15);
            if ((uVar1 & 1) != 0) {
              lVar16 = *(long *)(unaff_x20 + _DAT_112ec35d8);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar16 != 0) {
                lVar17 = lVar16;
                func_0x000107c509b4();
                func_0x000107c61180();
                func_0x000107c615e8(lVar16);
                if (lVar17 != 0) {
                  lVar16 = lVar17;
                  func_0x0001065c2f88(lVar17,*(undefined8 *)(unaff_x20 + _DAT_112ec35d0));
                  func_0x000107c61180();
                  if (lVar16 != 0) {
                    func_0x000107c5942c(puVar12);
                    func_0x000107c615e8(lVar17);
                    lVar17 = lVar16;
                  }
                  func_0x000107c615e8(lVar17);
                }
              }
            }
            uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112ec35c8);
            func_0x000107c5c734(uVar18);
            func_0x000107c61180();
            func_0x000107c54244(puVar12);
            func_0x000107c615e8(uVar18);
            uVar6 = uVar7;
            FUN_10281e8f8(uVar7,uVar19);
            puStack_90 = param_1;
            func_0x000100087c34(&puStack_90);
            lVar16 = *(long *)(unaff_x20 + _DAT_112ec35b8);
            if (lVar16 == 0) {
              func_0x000107c6142c(uVar19);
              uVar19 = 0;
            }
            else {
              func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
              func_0x000107c61174(lVar16);
              lVar17 = lVar16;
              func_0x0001000b637c();
              func_0x000107c61170(lVar16);
              puVar13 = &UNK_110553810;
              func_0x000107c613fc(&UNK_110553810,0x20,7);
              *(ulong *)(puVar13 + 0x10) = uVar7;
              *(undefined8 *)(puVar13 + 0x18) = uVar19;
              uVar19 = 0x10281f0d8;
              func_0x0001000c0ebc(0x10281f0d8,puVar13);
              func_0x000107c61574(lVar17);
              func_0x000107c61574(puVar13);
              uVar20 = 0;
              FUN_10281f04c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              uVar18 = 0x10281f0d0;
              func_0x0001000bfde0(0x10281f0d0,0,uVar20);
              func_0x000107c61574(uVar19);
              func_0x0001004575f0();
              func_0x000107c61574(uVar18);
              uVar18 = uVar19;
              func_0x000107c421ac(uVar19);
              func_0x000107c61180();
              func_0x000107c61170(uVar19);
              uVar19 = uVar18;
              func_0x000107c5cb24(uVar18);
              func_0x000107c61180();
              func_0x000107c61170(uVar18);
            }
            func_0x000107c56660(puVar12);
            func_0x000107c61170(uVar19);
            uVar19 = 0x112ec3650;
            uVar20 = 0;
            FUN_10281f04c(0,0x112ec3650,&PTR_PTR_1126ab148);
            func_0x000107c614e8();
            func_0x000107c3ff48();
            func_0x000107c61180();
            uVar18 = uVar20;
            func_0x000107c5faec();
            func_0x000107c61170(uVar20);
            uVar20 = 0;
            FUN_10281f04c(0,0x112ec3658,&PTR_PTR_1126ab138);
            uVar21 = 0;
            puStack_90 = puVar8;
            puStack_78 = (undefined *)uVar20;
            FUN_10281f04c(0,0x112ec3660,&PTR_PTR_1126ab140);
            apuStack_b0[0] = puVar12;
            uStack_98 = uVar21;
            func_0x000107c610f8(PTR_PTR_1126c67d8);
            func_0x000107c61174(puVar8);
            func_0x000107c61174(puVar12);
            FUN_1027efbc4(uVar18,uVar19,&puStack_90,apuStack_b0);
            func_0x000107c615e8(uVar2);
            func_0x000107c61170(uVar5);
            func_0x000107c61574(uVar6);
            func_0x000107c61170(puVar12);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar4);
            return uVar18;
          }
        }
        func_0x000107c61170(uVar4);
        uVar4 = uVar3;
      }
      func_0x000107c61170(uVar4);
    }
  }
  func_0x000107c615e8(uVar2);
  return 0;
}



/* Entry: 10281d780; end: 10281d7fb;  */

void FUN_10281d780(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10281ea68(param_3,param_4,param_1,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10281d7fc; end: 10281d873; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_10281d7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281d1f0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10281d874; end: 10281d88b; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010281d888) */

void FUN_10281d874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10281d88c; end: 10281d893; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin pluginType] */

undefined8 FUN_10281d88c(void)

{
  return 0;
}



/* Entry: 10281d894; end: 10281d89b; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_10281d894(void)

{
  return 1;
}



/* Entry: 10281d89c; end: 10281d917; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_10281d89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281df64(param_3,param_4,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10281d918; end: 10281d993; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_10281d918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281df64(param_3,param_4,1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10281d994; end: 10281da23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10281d994(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec35e0);
  func_0x000107c4ce08(uVar1,param_2,param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4f860();
  func_0x000107c61180();
  func_0x000107c615e8(uVar1);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar2;
    func_0x000107c4ca5c();
    func_0x0001085436b8();
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar2;
      func_0x000107c4ca5c(uVar2);
      func_0x0001085436ac();
    }
    else {
      uVar1 = 1;
    }
    func_0x000107c61170(uVar2);
  }
  return uVar1;
}



/* Entry: 10281da24; end: 10281da7f; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin shouldDisplayContextualHeaderForMessage:] */

uint FUN_10281da24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281d994(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10281da80; end: 10281deeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10281da80(ulong param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112ec35e0);
  uVar8 = param_2;
  func_0x000107c4ce08(uVar3,param_2,param_1);
  func_0x000107c61180();
  FUN_10281d994();
  if ((param_1 & 1) != 0) {
    uVar4 = uVar3;
    func_0x000107c4f860();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar12 = uVar4;
      func_0x000107c4ca5c();
      iVar2 = (int)uVar12;
      func_0x0001085436b8();
      uVar12 = uVar3;
      func_0x000107c3f91c();
      func_0x000107c61180();
      if (uVar12 == 0) {
LAB_10281dd14:
        func_0x000105fa82e4();
        func_0x000107c61180();
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10281dee4);
          (*pcVar1)();
        }
        uVar7 = uVar12;
        func_0x000107c5faec();
        func_0x000107c61170(uVar12);
        lVar11 = 0;
        uVar12 = 0;
        uVar10 = 0;
      }
      else {
        uVar7 = uVar12;
        func_0x000107c5faec();
        uVar10 = uVar8;
        if (uVar7 == *(ulong *)(unaff_x20 + _DAT_112ec35c0) &&
            uVar8 == ((ulong *)(unaff_x20 + _DAT_112ec35c0))[1]) {
          func_0x000107c61170(uVar12);
          func_0x000107c6142c();
          if (iVar2 == 0) goto LAB_10281db58;
LAB_10281dbf0:
          func_0x000105fa82fc();
          func_0x000107c61180();
          uVar12 = uVar8;
          uVar8 = uVar10;
joined_r0x00010281dbfc:
          if (uVar12 == 0) goto LAB_10281dd14;
          uVar7 = uVar12;
          func_0x000107c5faec();
          func_0x000107c61170(uVar12);
LAB_10281dc18:
          func_0x000107c61434(uVar8);
          lVar11 = 0;
          uVar12 = 0;
          uVar10 = uVar8;
        }
        else {
          func_0x000107c605b8();
          func_0x000107c6142c(uVar8);
          if ((uVar7 & 1) != 0) {
            func_0x000107c61170();
            uVar8 = uVar12;
            if (iVar2 != 0) goto LAB_10281dbf0;
LAB_10281db58:
            func_0x000105fa82b4();
            func_0x000107c61180();
            uVar12 = uVar8;
            uVar8 = uVar10;
            goto joined_r0x00010281dbfc;
          }
          uVar8 = uVar12;
          func_0x0001070b2c1c();
          func_0x000107c61180();
          func_0x000107c61170();
          if (param_2 == 0) goto LAB_10281dd14;
          uVar12 = param_2;
          func_0x000107c5faec();
          uVar10 = uVar8;
          func_0x000107c61170();
          if (iVar2 == 0) {
            func_0x000105fa82cc();
            func_0x000107c61180();
            if (param_2 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10281deec);
              (*pcVar1)();
            }
            uVar7 = param_2;
            func_0x000107c5faec();
            func_0x000107c61170(param_2);
            lVar9 = 0x112d36008;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar9 + 0x18) = 2;
            *(undefined8 *)(lVar9 + 0x10) = 1;
            *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
            lVar11 = lVar9;
            func_0x00010075bbf0();
            *(long *)(lVar9 + 0x40) = lVar11;
            *(ulong *)(lVar9 + 0x20) = uVar12;
            *(ulong *)(lVar9 + 0x28) = uVar8;
            uVar8 = uVar10;
            func_0x000107c5fae0(uVar7,uVar10,lVar9);
            uVar12 = uVar8;
            func_0x000107c6142c(uVar10);
            func_0x000107c61574();
            func_0x000105fa82e4();
          }
          else {
            func_0x000105fa8314();
            func_0x000107c61180();
            if (param_2 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10281dee8);
              (*pcVar1)();
            }
            uVar7 = param_2;
            func_0x000107c5faec();
            func_0x000107c61170(param_2);
            lVar9 = 0x112d36008;
            func_0x0001000285a8(0x112d36008,&UNK_10d900720);
            func_0x000107c613fc();
            *(undefined8 *)(lVar9 + 0x18) = 2;
            *(undefined8 *)(lVar9 + 0x10) = 1;
            *(undefined **)(lVar9 + 0x38) = PTR___sSSN_11034da80;
            lVar11 = lVar9;
            func_0x00010075bbf0();
            *(long *)(lVar9 + 0x40) = lVar11;
            *(ulong *)(lVar9 + 0x20) = uVar12;
            *(ulong *)(lVar9 + 0x28) = uVar8;
            uVar8 = uVar10;
            func_0x000107c5fae0(uVar7,uVar10,lVar9);
            uVar12 = uVar8;
            func_0x000107c6142c(uVar10);
            func_0x000107c61574();
            func_0x000105fa832c();
          }
          func_0x000107c61180();
          if (lVar9 == 0) goto LAB_10281dc18;
          lVar11 = lVar9;
          func_0x000107c5faec();
          func_0x000107c61170(lVar9);
          func_0x000107c61434(uVar8);
          uVar10 = uVar8;
        }
      }
      puVar5 = PTR_PTR_1126c68c8;
      func_0x000107c61168(PTR_PTR_1126c68c8);
      func_0x000107c501a8();
      func_0x000107c61180();
      func_0x000107c5fadc(uVar7,uVar8);
      func_0x000107c6142c(uVar8);
      if (uVar12 == 0) {
        lVar11 = 0;
      }
      else {
        func_0x000107c5fadc(lVar11,uVar12);
        func_0x000107c6142c(uVar12);
      }
      puVar6 = PTR_PTR_1126c68c0;
      func_0x000107c610f8(PTR_PTR_1126c68c0);
      func_0x000107c48c9c();
      func_0x000107c615e8(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(uVar10);
      goto LAB_10281ddd8;
    }
  }
  puVar5 = PTR_PTR_1126c68c8;
  func_0x000107c61168(PTR_PTR_1126c68c8);
  func_0x000107c501a8();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126c68c0;
  func_0x000107c610f8(PTR_PTR_1126c68c0);
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  lVar11 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c48c9c(puVar6);
  func_0x000107c615e8(uVar3);
LAB_10281ddd8:
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar11);
  return puVar6;
}



/* Entry: 10281deec; end: 10281df63; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_10281deec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10281da80(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



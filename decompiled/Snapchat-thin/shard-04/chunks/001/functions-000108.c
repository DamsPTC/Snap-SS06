/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10314dcd8; end: 10314dd37; -[_TtC23WebLensesImplementationP33_D5DA41BA9856C113C2F4E0428FC29BF318ScriptMessageProxy init] */

void FUN_10314dcd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesImplementation.ScriptMessageProxy",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10314dd04);
  (*pcVar1)();
}



/* Entry: 10314dd38; end: 10314dd47; -[_TtC23WebLensesImplementationP33_D5DA41BA9856C113C2F4E0428FC29BF318ScriptMessageProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314dd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f44f50);
  return;
}



/* Entry: 10314dd48; end: 10314dd67;  */

void FUN_10314dd48(void)

{
  func_0x000107c61168(&PTR_PTR_1128ba808);
  return;
}



/* Entry: 10314dd68; end: 10314ddc3;  */

long FUN_10314dd68(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10314ddc4; end: 10314debb;  */

undefined8 * FUN_10314ddc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 10314debc; end: 10314df1f;  */

undefined8 * FUN_10314debc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[7] = param_2[7];
  return param_1;
}



/* Entry: 10314df20; end: 10314dfc7;  */

int FUN_10314df20(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10314dfc8; end: 10314dfff;  */

void FUN_10314dfc8(void)

{
  long unaff_x20;
  
  FUN_103148718(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10314e000; end: 10314e1db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314e000(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = (long)puVar7 - extraout_x12;
  func_0x000107c3abfc();
  func_0x000107c61180();
  bVar1 = param_1 == 0;
  if (bVar1) {
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar7);
    func_0x000107c61170(param_1);
    param_1 = 0;
    func_0x000107c5ede0();
  }
  lVar8 = *(long *)(param_1 + -8);
  (**(code **)(lVar8 + 0x38))(puVar7,bVar1,1,param_1);
  func_0x0001001021cc(puVar7,uVar5);
  func_0x000107c5ede0(0);
  lVar3 = 1;
  uVar2 = uVar5;
  (**(code **)(lVar8 + 0x30))(uVar5,1,param_1);
  if ((int)uVar2 == 1) {
    FUN_10314e7b0(uVar5,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000107c5edc8();
    (**(code **)(lVar8 + 8))(uVar5,param_1);
    if (lVar3 != 0) {
      if (uVar2 == 0x736e656c626577 && lVar3 == -0x1900000000000000) {
        func_0x000107c6142c(lVar3);
      }
      else {
        func_0x000107c605b8(uVar2,lVar3,0x736e656c626577,0xe700000000000000,0);
        func_0x000107c6142c(lVar3);
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      pcVar4 = *(code **)(unaff_x20 + _DAT_112f44f10);
      if (pcVar4 != (code *)0x0) {
        uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f44f10))[1];
        func_0x000107c6157c(uVar6);
        (*pcVar4)();
        func_0x000100d372f0(pcVar4,uVar6);
      }
    }
  }
  return;
}



/* Entry: 10314e1dc; end: 10314e4df;  */

void FUN_10314e1dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar9 = (long *)(uVar8 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)plVar9 - extraout_x12_00;
  lVar2 = param_1;
  func_0x000107c50300(param_1);
  func_0x000107c61180();
  func_0x000107c5eae8(puVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c5eaf0(lVar7);
  (**(code **)(lVar10 + 8))(puVar6,lVar1);
  func_0x000100029394(lVar7,plVar9);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar1 = 1;
  plVar3 = plVar9;
  (*pcVar11)(plVar9,1,lVar2);
  if ((int)plVar3 == 1) {
    FUN_10314e7b0(plVar9,0x112d36580,&UNK_10d9016d0);
    func_0x0001046300d0();
LAB_10314e3a8:
    func_0x000100029394(lVar7,uVar8);
    lVar1 = 1;
    uVar4 = uVar8;
    (*pcVar11)(uVar8,1,lVar2);
    if ((int)uVar4 == 1) {
      FUN_10314e7b0(uVar8,0x112d36580,&UNK_10d9016d0);
      uVar5 = 0;
      goto LAB_10314e49c;
    }
    func_0x000107c5edc8();
    (**(code **)(lVar10 + 8))(uVar8,lVar2);
    if (lVar1 != 0) {
      if ((uVar4 == 0x736e656c626577) && (lVar1 == -0x1900000000000000)) {
        func_0x000107c6142c(0xe700000000000000);
      }
      else {
        func_0x000107c605b8(uVar4,lVar1,0x736e656c626577,0xe700000000000000,0);
        func_0x000107c6142c(lVar1);
        if ((uVar4 & 1) == 0) goto LAB_10314e498;
      }
      lVar2 = param_1;
      func_0x000107c5c744();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c61170();
        func_0x000107c5ac78();
        if ((int)param_1 == 0) goto LAB_10314e3f4;
      }
    }
LAB_10314e498:
    uVar5 = 0;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar10 + 8))(plVar9,lVar2);
    func_0x0001046300d0();
    if (lVar1 == 0) goto LAB_10314e3a8;
    if (plVar3 == (long *)*plVar9 && lVar1 == plVar9[1]) {
      func_0x000107c6142c(lVar1);
    }
    else {
      func_0x000107c605b8(plVar3,lVar1,(long *)*plVar9,plVar9[1],0);
      func_0x000107c6142c(lVar1);
      if (((ulong)plVar3 & 1) == 0) goto LAB_10314e3a8;
    }
LAB_10314e3f4:
    uVar5 = 1;
  }
LAB_10314e49c:
  (**(code **)(param_2 + 0x10))(param_2,uVar5);
  FUN_10314e7b0(lVar7,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 10314e4e0; end: 10314e79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314e4e0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  pcVar4 = *(code **)(unaff_x20 + _DAT_112f44f08);
  if (pcVar4 != (code *)0x0) {
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f44f08))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar4)();
    func_0x000100d372f0(pcVar4,uVar2);
  }
  if (*(char *)(unaff_x20 + _DAT_112f44ef8) == '\x01') {
    pcVar4 = *(code **)(unaff_x20 + _DAT_112f44f18);
    if (pcVar4 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f44f18))[1];
      lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f44ee8))[1];
      uStack_a8 = 0;
      if (lVar5 != 0) {
        uStack_a8 = *(undefined8 *)(unaff_x20 + _DAT_112f44ee8);
      }
      lStack_a0 = -0x2000000000000000;
      if (lVar5 != 0) {
        lStack_a0 = lVar5;
      }
      uStack_c8 = 0xd00000000000001d;
      uStack_d0 = 4;
      uStack_c0 = 0x800000010f1288c0;
      uStack_b8 = 0;
      uStack_b0 = 0xe000000000000000;
      uStack_98 = 0;
      uStack_88 = 0xd00000000000001d;
      uStack_90 = 4;
      uStack_78 = 0;
      uStack_80 = 0x800000010f1288c0;
      uStack_70 = 0xe000000000000000;
      uStack_58 = 0;
      uStack_68 = uStack_a8;
      lStack_60 = lStack_a0;
      FUN_10314e7a0(pcVar4,uVar2);
      func_0x000107c61434(lVar5);
      (*pcVar4)(&uStack_90);
      func_0x00010314e7f0(&uStack_d0);
      func_0x000100d372f0(pcVar4,uVar2);
    }
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f44ed8);
  if (lVar5 != 0) {
    lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f44ee8))[1];
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f44ee8);
      lVar7 = ((long *)(unaff_x20 + _DAT_112f44ed8))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f44ee0);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f44ee0))[1];
      func_0x000107c615f0(lVar5);
      func_0x000107c61434(lVar6);
      func_0x000107c61434(uVar1);
      FUN_10314c904(lVar5,lVar7,uVar2,uVar1,uVar3,lVar6);
      func_0x000107c615e8(lVar5);
      func_0x000107c6142c(lVar6);
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 10314e7a0; end: 10314e7af;  */

void FUN_10314e7a0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10314e7b0; end: 10314e81b;  */

undefined8 FUN_10314e7b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10314e81c; end: 10314e81f;  */

void FUN_10314e81c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10314e820; end: 10314e8f3;  */

long FUN_10314e820(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c4a73c();
    if ((int)lVar2 != 0) {
      lVar2 = lVar1;
      func_0x000107c3df58();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        puVar5 = PTR___sSSN_11034da80;
        func_0x000107c5fe10();
        func_0x000107c61170(lVar2);
        puVar4 = PTR_PTR_1133c92b8;
        func_0x000107c5faec();
        func_0x0001000f66f0();
        func_0x000107c6142c(puVar5);
        func_0x000107c6142c(lVar3);
        if (((ulong)puVar4 & 1) != 0) {
          return param_1;
        }
      }
      func_0x000107c61170(lVar1);
      return 0;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61174(param_1);
  return param_1;
}



/* Entry: 10314e8f4; end: 10314e903;  */

undefined1  [16] FUN_10314e8f4(void)

{
  return ZEXT816(0x110613688);
}



/* Entry: 10314e904; end: 10314ea23;  */

/* WARNING: Possible PIC construction at 0x00010314e984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314e9f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314e988) */
/* WARNING: Removing unreachable block (ram,0x00010314e9f4) */
/* WARNING: Removing unreachable block (ram,0x00010314ea04) */
/* WARNING: Removing unreachable block (ram,0x00010314ea0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314e904(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puVar4;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112f44fa0);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar4 = puVar1;
    func_0x000107c5fc48(puVar1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar1);
    func_0x000107c45788(puVar3);
  }
  else {
    lVar2 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    func_0x000107c61174(puVar4);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10314ea24; end: 10314ea6f;  */

bool FUN_10314ea24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  return puVar2 == (undefined *)0x0;
}



/* Entry: 10314ea70; end: 10314ead3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10314ea70(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f45008;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f45008);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10314ead4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 10314ead4; end: 10314ec37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10314ead4(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  
  lVar3 = *(long *)(param_1 + _DAT_112f45048);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    uStack_88 = ((undefined8 *)(lVar3 + _DAT_1130703f8))[1];
    uStack_90 = *(undefined8 *)(lVar3 + _DAT_1130703f8);
    uStack_78 = ((undefined8 *)(lVar3 + _DAT_113070400))[1];
    uStack_80 = *(undefined8 *)(lVar3 + _DAT_113070400);
    func_0x000107c615f0(*(undefined8 *)(lVar3 + _DAT_1130703f8));
    func_0x000107c615f0(uStack_80);
  }
  lVar3 = _DAT_112f45030;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f45040);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f45068);
  FUN_103152ed0(param_1 + _DAT_112f45030,auStack_68);
  func_0x00010313e600();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar5);
  puVar1 = auStack_68;
  FUN_10313a14c(puVar1,uVar4);
  lVar2 = 0;
  func_0x000103139db8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0;
  func_0x000107c61614(lVar2 + 0x10,0);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x28) = uStack_88;
  *(undefined8 *)(lVar2 + 0x20) = uStack_90;
  *(undefined8 *)(lVar2 + 0x38) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(lVar2 + 0x48) = uVar4;
  FUN_103152ed0(param_1 + lVar3,lVar2 + 0x50);
  *(undefined1 **)(lVar2 + 0x78) = puVar1;
  *(undefined ***)(lVar2 + 0x80) = &PTR_DAT_110612588;
  *(undefined ***)(lVar2 + 0x18) = &PTR_DAT_1106136e8;
  func_0x000107c61604(lVar2 + 0x10,param_1);
  return lVar2;
}



/* Entry: 10314ec38; end: 10314f163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10314ec38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f44f98) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f44fa0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fa8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fb8);
  *puVar1 = FUN_10314ea24;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f44fc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f44fc8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fd0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f44fd8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f44fe0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fe8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44ff0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44ff8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f45000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45008) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f45010) = param_1;
  FUN_103152ed0(param_2,unaff_x20 + _DAT_112f45018);
  *(undefined8 *)(unaff_x20 + _DAT_112f45020) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45028);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  FUN_103152ed0(param_6,unaff_x20 + _DAT_112f45030);
  *(undefined8 *)(unaff_x20 + _DAT_112f45038) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f45040) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f45048) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f45050) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f45058) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f45060) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f45068) = param_13;
  FUN_1031534f0(param_14,unaff_x20 + _DAT_112f45070,0x112f43c30,&UNK_10db90030);
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000103153538(param_14,0x112f43c30,&UNK_10db90030);
  func_0x0001000834e4(param_6);
  func_0x0001000834e4(param_2);
  return puVar2;
}



/* Entry: 10314f164; end: 10314f4af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314f164(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f44f98);
  *(undefined8 *)(unaff_x20 + _DAT_112f44f98) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar9);
  plVar11 = *(long **)(unaff_x20 + _DAT_112f45040);
  plVar2 = plVar11;
  func_0x000107c615f0();
  func_0x000100471e0c();
  func_0x000107c615e8(plVar11);
  puVar3 = &UNK_1106136a8;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar13 = FUN_10314f50c;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_10314f50c);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  pcVar4 = pcVar13;
  func_0x000107c614f0(pcVar13);
  (**(code **)(puVar6 + 0x10))(uVar1,pcVar4,puVar6);
  func_0x000107c615e8(pcVar13);
  if (*(long *)(unaff_x20 + _DAT_112f45048) != 0) {
    plVar2 = (long *)(*(long *)(unaff_x20 + _DAT_112f45048) + _DAT_1130703f8);
    lVar10 = *plVar2;
    if (lVar10 != 0) {
      lVar12 = plVar2[1];
      lVar5 = lVar10;
      func_0x000107c614f0(lVar10);
      pcVar13 = *(code **)(lVar12 + 0x28);
      func_0x000107c615f0(lVar10);
      (*pcVar13)(lVar5,lVar12);
      func_0x000107c615e8(lVar10);
      plVar2 = plVar11;
      func_0x000107c615f0();
      func_0x000100471e0c();
      func_0x000107c61574(lVar5);
      func_0x000107c615e8(plVar11);
      puVar3 = &UNK_1106136a8;
      func_0x000107c613fc(&UNK_1106136a8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcVar13 = (code *)0x10314fc08;
      puVar6 = puVar3;
      (**(code **)(*plVar2 + 0x60))(0x10314fc08);
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar3);
      pcVar4 = pcVar13;
      func_0x000107c614f0(pcVar13);
      (**(code **)(puVar6 + 0x10))(uVar1,pcVar4,puVar6);
      func_0x000107c615e8(pcVar13);
    }
  }
  FUN_10314ea70();
  FUN_103138814();
  func_0x000107c61574(pcVar13);
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168();
  func_0x000107c41570();
  func_0x000107c61180();
  puVar7 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c4c188();
  func_0x000107c61180();
  puVar3 = &UNK_1106136a8;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_60 = FUN_10314fbe4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ef35e4;
  puStack_68 = &UNK_1106136c0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar3 = puVar6;
  func_0x000107c3d7c4();
  func_0x000107c61180();
  func_0x000107c61574(uVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f45000);
  *(undefined **)(unaff_x20 + _DAT_112f45000) = puVar3;
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 10314f4b0; end: 10314f50b;  */

void FUN_10314f4b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10314f514(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10314f50c; end: 10314f513;  */

void FUN_10314f50c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10314f514(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10314f514; end: 10314f7cf;  */

/* WARNING: Possible PIC construction at 0x00010314f57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314fdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314fe50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314fe70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103150110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315014c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103150180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314f5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314f698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314f700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314f6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010314f644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010314f6a8) */
/* WARNING: Removing unreachable block (ram,0x00010314f6b8) */
/* WARNING: Removing unreachable block (ram,0x00010314f704) */
/* WARNING: Removing unreachable block (ram,0x00010314f72c) */
/* WARNING: Removing unreachable block (ram,0x00010314f708) */
/* WARNING: Removing unreachable block (ram,0x00010314f710) */
/* WARNING: Removing unreachable block (ram,0x00010314f738) */
/* WARNING: Removing unreachable block (ram,0x00010314f7a8) */
/* WARNING: Removing unreachable block (ram,0x00010314f718) */
/* WARNING: Removing unreachable block (ram,0x00010314f768) */
/* WARNING: Removing unreachable block (ram,0x00010314f77c) */
/* WARNING: Removing unreachable block (ram,0x00010314f794) */
/* WARNING: Removing unreachable block (ram,0x00010314f7b4) */
/* WARNING: Removing unreachable block (ram,0x00010314f69c) */
/* WARNING: Removing unreachable block (ram,0x00010314f5e0) */
/* WARNING: Removing unreachable block (ram,0x00010314f628) */
/* WARNING: Removing unreachable block (ram,0x00010314f62c) */
/* WARNING: Removing unreachable block (ram,0x00010314f5e4) */
/* WARNING: Removing unreachable block (ram,0x00010314f634) */
/* WARNING: Removing unreachable block (ram,0x00010314f638) */
/* WARNING: Removing unreachable block (ram,0x00010314f5e8) */
/* WARNING: Removing unreachable block (ram,0x00010314f5ec) */
/* WARNING: Removing unreachable block (ram,0x00010314f5f0) */
/* WARNING: Removing unreachable block (ram,0x00010314f64c) */
/* WARNING: Removing unreachable block (ram,0x00010314f5f4) */
/* WARNING: Removing unreachable block (ram,0x00010314f63c) */
/* WARNING: Removing unreachable block (ram,0x00010314f624) */
/* WARNING: Removing unreachable block (ram,0x000103150184) */
/* WARNING: Removing unreachable block (ram,0x000103150150) */
/* WARNING: Removing unreachable block (ram,0x000103150114) */
/* WARNING: Removing unreachable block (ram,0x00010314fe74) */
/* WARNING: Removing unreachable block (ram,0x00010314feb0) */
/* WARNING: Removing unreachable block (ram,0x00010314fedc) */
/* WARNING: Removing unreachable block (ram,0x00010314fef0) */
/* WARNING: Removing unreachable block (ram,0x00010314ff3c) */
/* WARNING: Removing unreachable block (ram,0x00010314ff4c) */
/* WARNING: Removing unreachable block (ram,0x00010314ff78) */
/* WARNING: Removing unreachable block (ram,0x00010314ffb0) */
/* WARNING: Removing unreachable block (ram,0x00010314ffb8) */
/* WARNING: Removing unreachable block (ram,0x00010314ffc4) */
/* WARNING: Removing unreachable block (ram,0x000103150194) */
/* WARNING: Removing unreachable block (ram,0x00010314ffd8) */
/* WARNING: Removing unreachable block (ram,0x00010315019c) */
/* WARNING: Removing unreachable block (ram,0x0001031501a8) */
/* WARNING: Removing unreachable block (ram,0x0001031501ac) */
/* WARNING: Removing unreachable block (ram,0x00010314ffdc) */
/* WARNING: Removing unreachable block (ram,0x00010314fe54) */
/* WARNING: Removing unreachable block (ram,0x00010314fdb4) */
/* WARNING: Removing unreachable block (ram,0x00010314f580) */
/* WARNING: Removing unreachable block (ram,0x00010314f584) */
/* WARNING: Removing unreachable block (ram,0x00010314f588) */
/* WARNING: Removing unreachable block (ram,0x00010314fce0) */
/* WARNING: Removing unreachable block (ram,0x0001031501c4) */
/* WARNING: Removing unreachable block (ram,0x00010314fd10) */
/* WARNING: Removing unreachable block (ram,0x00010314fd50) */
/* WARNING: Removing unreachable block (ram,0x00010314fdb8) */
/* WARNING: Removing unreachable block (ram,0x00010314fdc4) */
/* WARNING: Removing unreachable block (ram,0x00010314fe58) */
/* WARNING: Removing unreachable block (ram,0x00010314fe60) */
/* WARNING: Removing unreachable block (ram,0x00010314fe30) */
/* WARNING: Removing unreachable block (ram,0x00010314fd90) */
/* WARNING: Removing unreachable block (ram,0x00010314f648) */
/* WARNING: Removing unreachable block (ram,0x00010314f65c) */
/* WARNING: Removing unreachable block (ram,0x00010314f6a0) */
/* WARNING: Removing unreachable block (ram,0x00010314f670) */
/* WARNING: Removing unreachable block (ram,0x00010314f6d4) */
/* WARNING: Removing unreachable block (ram,0x00010314f6dc) */
/* WARNING: Removing unreachable block (ram,0x00010314f678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314f514(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f45040));
  func_0x000100bc7fa4();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f44fa0);
  if (lVar1 == 0) {
    if (param_1 == 0) {
      return;
    }
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10314f7d0; end: 10314f82f;  */

void FUN_10314f7d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10314f830(0,uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10314f830; end: 10314fb4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314f830(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [24];
  long lStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = *(long *)(unaff_x20 + _DAT_112f44fa0);
  if (lVar10 == 0) {
    lVar10 = unaff_x20 + _DAT_112f45030;
    uVar12 = *(undefined8 *)(lVar10 + 0x18);
    lVar11 = *(long *)(lVar10 + 0x20);
    func_0x0001000a8868(lVar10,uVar12);
    (**(code **)(lVar11 + 0xc0))(1,param_1,uVar12,lVar11);
  }
  else {
    lVar11 = *(long *)(unaff_x20 + _DAT_112f45050);
    if (lVar11 != 0) {
      plVar1 = (long *)(lVar11 + _DAT_1130703b8);
      func_0x000107c61428(plVar1,auStack_78,0,0);
      lVar8 = *plVar1;
      if (lVar8 != 0) {
        if (*(long *)(unaff_x20 + _DAT_112f45048) == 0) {
          func_0x000107c615f0(lVar8);
          func_0x000107c61174(lVar10);
        }
        else {
          lVar7 = plVar1[1];
          FUN_103152ed0(*(long *)(unaff_x20 + _DAT_112f45048) + _DAT_1130703f0,auStack_a0);
          func_0x0001000a8868(auStack_a0,lStack_88);
          pcVar9 = *(code **)(uStack_80 + 0x10);
          func_0x000107c615f0(lVar8);
          lVar4 = lVar10;
          func_0x000107c61174();
          lVar5 = lStack_88;
          uVar6 = uStack_80;
          (*pcVar9)();
          func_0x0001000834e4(auStack_a0);
          if (lVar5 != 0) {
            if ((uVar6 & 1) != 0) {
              lVar2 = unaff_x20 + _DAT_112f45030;
              uVar12 = *(undefined8 *)(lVar2 + 0x18);
              lVar3 = *(long *)(lVar2 + 0x20);
              func_0x0001000a8868(lVar2,uVar12);
              (**(code **)(lVar3 + 200))(uVar12,lVar3);
            }
            lVar11 = *(long *)(lVar11 + _DAT_1130703c0);
            func_0x000107c61428(lVar11 + 0x28,auStack_a0,1,0);
            uVar12 = *(undefined8 *)(lVar11 + 0x28);
            *(long *)(lVar11 + 0x28) = lVar10;
            func_0x000107c61174(lVar4);
            func_0x000107c61170(uVar12);
            lVar10 = unaff_x20 + _DAT_112f45030;
            uVar12 = *(undefined8 *)(lVar10 + 0x18);
            lVar11 = *(long *)(lVar10 + 0x20);
            func_0x0001000a8868(lVar10,uVar12);
            (**(code **)(lVar11 + 0xc0))(0,param_1,uVar12,lVar11);
            lVar10 = lVar8;
            func_0x000107c614f0(lVar8);
            (**(code **)(lVar7 + 8))(unaff_x20,&PTR_DAT_110613700,lVar10,lVar7);
            pcVar9 = *(code **)(lVar7 + 0x10);
            func_0x000107c61174(lVar5);
            (*pcVar9)();
            func_0x000107c61170(lVar4);
            func_0x000107c615e8(lVar8);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar5);
            return;
          }
        }
        lVar11 = unaff_x20 + _DAT_112f45030;
        uVar12 = *(undefined8 *)(lVar11 + 0x18);
        lVar4 = *(long *)(lVar11 + 0x20);
        func_0x0001000a8868(lVar11,uVar12);
        (**(code **)(lVar4 + 0xc0))(3,param_1,uVar12,lVar4);
        func_0x000107c61170(lVar10);
        func_0x000107c615e8(lVar8);
        return;
      }
    }
    lVar11 = unaff_x20 + _DAT_112f45030;
    uVar12 = *(undefined8 *)(lVar11 + 0x18);
    lVar8 = *(long *)(lVar11 + 0x20);
    func_0x0001000a8868(lVar11,uVar12);
    pcVar9 = *(code **)(lVar8 + 0xc0);
    func_0x000107c61174(lVar10);
    (*pcVar9)(2,param_1,uVar12,lVar8);
    func_0x000107c61170(lVar10);
  }
  return;
}



/* Entry: 10314fb4c; end: 10314fbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314fb4c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (*(long *)(param_2 + _DAT_112f44fa0) != 0) {
      param_2 = param_2 + _DAT_112f45030;
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      lVar2 = *(long *)(param_2 + 0x20);
      func_0x0001000a8868(param_2,uVar1);
      (**(code **)(lVar2 + 0xb8))(uVar1,lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10314fbe4; end: 10314fc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314fbe4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + _DAT_112f44fa0) != 0) {
      lVar3 = lVar3 + _DAT_112f45030;
      uVar1 = *(undefined8 *)(lVar3 + 0x18);
      lVar2 = *(long *)(lVar3 + 0x20);
      func_0x0001000a8868(lVar3,uVar1);
      (**(code **)(lVar2 + 0xb8))(uVar1,lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10314fc10; end: 10314fcdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314fc10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f45040));
  func_0x000100bc7fa4();
  lVar7 = *(long *)(unaff_x20 + _DAT_112f44f98);
  *(undefined8 *)(unaff_x20 + _DAT_112f44f98) = 0;
  func_0x000107c61574();
  lVar6 = _DAT_112f45000;
  lVar14 = *(long *)(unaff_x20 + _DAT_112f45000);
  if (lVar14 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar14);
    func_0x000107c41570(puVar8);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(lVar14);
    lVar7 = *(long *)(unaff_x20 + lVar6);
    *(undefined8 *)(unaff_x20 + lVar6) = 0;
    func_0x000107c615e8();
  }
  FUN_10314ea70();
  uVar15 = *(undefined8 *)(lVar7 + 0x88);
  *(undefined8 *)(lVar7 + 0x88) = 0;
  func_0x000107c61574();
  func_0x000107c61574(uVar15);
  lVar6 = _DAT_112f44fa0;
  if (*(long *)(unaff_x20 + _DAT_112f44fa0) == 0) {
    return;
  }
  pcVar19 = *(code **)(unaff_x20 + _DAT_112f44fb8);
  uVar16 = ((undefined8 *)(unaff_x20 + _DAT_112f44fb8))[1];
  uVar9 = uVar16;
  func_0x000107c6157c();
  (*pcVar19)();
  func_0x000107c61574(uVar16);
  iVar12 = 1;
  if ((uVar9 & 1) == 0) {
    iVar12 = 2;
  }
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0xd000000000000029;
  uStack_70 = 0x800000010f128c50;
  lVar7 = *(long *)(unaff_x20 + lVar6);
  if (lVar7 == 0) {
    param_2 = 0xe300000000000000;
    lVar14 = 0x6c696e;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar14 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  func_0x000107c5fb78(lVar14,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uStack_70);
  lVar7 = unaff_x20 + _DAT_112f45030;
  lVar14 = *(long *)(lVar7 + 0x18);
  lVar11 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,lVar14);
  (**(code **)(lVar11 + 0x78))(iVar12,lVar14,lVar11);
  lVar11 = _DAT_112f44fe0;
  cVar5 = *(char *)(unaff_x20 + _DAT_112f44fe0);
  lVar10 = *(long *)(unaff_x20 + lVar6);
  if (lVar10 == 0) {
    lVar18 = 0;
    lVar14 = 0;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar18 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
  }
  FUN_1031521c8();
  uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = 0;
  func_0x000107c61170(uVar15);
  FUN_10314e904();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fd0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f44fd8) = 0;
  *(undefined1 *)(unaff_x20 + lVar11) = 0;
  lVar6 = _DAT_112f44fc0;
  if (*(long *)(unaff_x20 + _DAT_112f44fc0) != 0) {
    lVar11 = unaff_x20 + _DAT_112f45018;
    uVar15 = *(undefined8 *)(lVar11 + 0x18);
    lVar10 = *(long *)(lVar11 + 0x20);
    func_0x0001000a8868(lVar11,uVar15);
    (**(code **)(lVar10 + 0x10))(uVar15,lVar10);
  }
  if (*(long *)(unaff_x20 + _DAT_112f45048) != 0) {
    puVar2 = (ulong *)(*(long *)(unaff_x20 + _DAT_112f45048) + _DAT_113070400);
    uVar16 = *puVar2;
    uVar9 = puVar2[1];
    uVar17 = uVar16;
    func_0x000107c614f0();
    pcVar19 = *(code **)(uVar9 + 0x30);
    func_0x000107c615f0(uVar16);
    (*pcVar19)(uVar17,uVar9);
    func_0x000107c615e8(uVar16);
    if (((uVar17 & 1) != 0) && (*(long *)(unaff_x20 + _DAT_112f45050) != 0)) {
      puVar2 = (ulong *)(*(long *)(unaff_x20 + _DAT_112f45050) + _DAT_1130703b8);
      func_0x000107c61428(puVar2,&uStack_78,0,0);
      uVar16 = *puVar2;
      if (uVar16 != 0) {
        uVar17 = puVar2[1];
        uVar9 = uVar16;
        func_0x000107c614f0();
        pcVar19 = *(code **)(uVar17 + 0x20);
        func_0x000107c615f0(uVar16);
        (*pcVar19)(uVar9,uVar17);
        func_0x000107c615e8(uVar16);
        if ((((uVar9 & 1) != 0) && (cVar5 != '\0')) &&
           (lVar11 = *(long *)(unaff_x20 + _DAT_112f45060), lVar11 != 0)) {
          plVar3 = (long *)(unaff_x20 + _DAT_112f44fa8);
          lVar10 = *plVar3;
          if (lVar10 != 0) {
            if (lVar14 != 0) {
              lVar13 = plVar3[1];
              func_0x000107c61174();
              func_0x000107c61174(lVar10);
              func_0x000107c602fc(0x38);
              func_0x000107c5fb78(0xd000000000000011,0x800000010f128c80);
              func_0x000107c5fb78(lVar18,lVar14);
              func_0x000107c5fb78(0xd000000000000025,0x800000010f128ca0);
              func_0x000107c6142c(0xe000000000000000);
              uVar15 = *(undefined8 *)(lVar7 + 0x18);
              lVar4 = *(long *)(lVar7 + 0x20);
              func_0x0001000a8868(lVar7,uVar15);
              (**(code **)(lVar4 + 0xd8))(0,uVar15,lVar4);
              puVar8 = &UNK_1106137b8;
              func_0x000107c613fc(&UNK_1106137b8,0x20,7);
              *(long *)(puVar8 + 0x18) = lVar13;
              func_0x000107c61614(puVar8 + 0x10,lVar10);
              func_0x000107c61174(lVar10);
              func_0x000107c6157c(puVar8);
              func_0x00010434ab68(lVar10,lVar18,lVar14,FUN_103152ec8,puVar8);
              func_0x000107c6142c(lVar14);
              func_0x000107c61170(lVar10);
              func_0x000107c61578(puVar8,2);
              FUN_10314ea70();
              FUN_103139084(iVar12 == 2);
              func_0x000107c61574(puVar8);
              func_0x000107c61170(lVar10);
              func_0x000107c61170(lVar11);
              func_0x000107c61604(*(long *)(*(long *)(unaff_x20 + _DAT_112f45008) + 0x78) + 0x10,0);
              lVar7 = *plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              func_0x000107c61170(lVar7);
              uVar15 = *(undefined8 *)(unaff_x20 + lVar6);
              *(undefined8 *)(unaff_x20 + lVar6) = 0;
              func_0x000107c615e8(uVar15);
              return;
            }
            goto LAB_10315019c;
          }
        }
      }
    }
  }
  func_0x000107c6142c(lVar14);
LAB_10315019c:
  if (*(long *)(unaff_x20 + _DAT_112f45060) != 0) {
    func_0x00010434ad9c();
  }
  FUN_10315233c(0,iVar12 == 2);
  return;
}



/* Entry: 10314fce0; end: 10315059b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10314fce0(uint param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = _DAT_112f44fa0;
  if (*(long *)(unaff_x20 + _DAT_112f44fa0) == 0) {
    return;
  }
  pcVar18 = *(code **)(unaff_x20 + _DAT_112f44fb8);
  uVar14 = ((undefined8 *)(unaff_x20 + _DAT_112f44fb8))[1];
  uVar7 = uVar14;
  func_0x000107c6157c();
  (*pcVar18)();
  func_0x000107c61574(uVar14);
  if ((uVar7 & 1) == 0) {
    param_1 = 2;
  }
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x2b);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0xd000000000000029;
  uStack_70 = 0x800000010f128c50;
  lVar8 = *(long *)(unaff_x20 + lVar6);
  if (lVar8 == 0) {
    param_2 = 0xe300000000000000;
    lVar15 = 0x6c696e;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar15 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
  }
  func_0x000107c5fb78(lVar15,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uStack_70);
  lVar8 = unaff_x20 + _DAT_112f45030;
  lVar15 = *(long *)(lVar8 + 0x18);
  lVar11 = *(long *)(lVar8 + 0x20);
  func_0x0001000a8868(lVar8,lVar15);
  (**(code **)(lVar11 + 0x78))(param_1,lVar15,lVar11);
  lVar11 = _DAT_112f44fe0;
  cVar5 = *(char *)(unaff_x20 + _DAT_112f44fe0);
  lVar9 = *(long *)(unaff_x20 + lVar6);
  if (lVar9 == 0) {
    lVar17 = 0;
    lVar15 = 0;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar17 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
  }
  FUN_1031521c8();
  uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = 0;
  func_0x000107c61170(uVar10);
  FUN_10314e904();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fd0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f44fd8) = 0;
  *(undefined1 *)(unaff_x20 + lVar11) = 0;
  lVar6 = _DAT_112f44fc0;
  if (*(long *)(unaff_x20 + _DAT_112f44fc0) != 0) {
    lVar11 = unaff_x20 + _DAT_112f45018;
    uVar10 = *(undefined8 *)(lVar11 + 0x18);
    lVar9 = *(long *)(lVar11 + 0x20);
    func_0x0001000a8868(lVar11,uVar10);
    (**(code **)(lVar9 + 0x10))(uVar10,lVar9);
  }
  if (*(long *)(unaff_x20 + _DAT_112f45048) != 0) {
    puVar2 = (ulong *)(*(long *)(unaff_x20 + _DAT_112f45048) + _DAT_113070400);
    uVar14 = *puVar2;
    uVar7 = puVar2[1];
    uVar16 = uVar14;
    func_0x000107c614f0();
    pcVar18 = *(code **)(uVar7 + 0x30);
    func_0x000107c615f0(uVar14);
    (*pcVar18)(uVar16,uVar7);
    func_0x000107c615e8(uVar14);
    if (((uVar16 & 1) != 0) && (*(long *)(unaff_x20 + _DAT_112f45050) != 0)) {
      puVar2 = (ulong *)(*(long *)(unaff_x20 + _DAT_112f45050) + _DAT_1130703b8);
      func_0x000107c61428(puVar2,&uStack_78,0,0);
      uVar14 = *puVar2;
      if (uVar14 != 0) {
        uVar16 = puVar2[1];
        uVar7 = uVar14;
        func_0x000107c614f0();
        pcVar18 = *(code **)(uVar16 + 0x20);
        func_0x000107c615f0(uVar14);
        (*pcVar18)(uVar7,uVar16);
        func_0x000107c615e8(uVar14);
        if ((((uVar7 & 1) != 0) && (cVar5 != '\0')) &&
           (lVar11 = *(long *)(unaff_x20 + _DAT_112f45060), lVar11 != 0)) {
          plVar3 = (long *)(unaff_x20 + _DAT_112f44fa8);
          lVar9 = *plVar3;
          if (lVar9 != 0) {
            if (lVar15 != 0) {
              lVar13 = plVar3[1];
              func_0x000107c61174();
              func_0x000107c61174(lVar9);
              func_0x000107c602fc(0x38);
              func_0x000107c5fb78(0xd000000000000011,0x800000010f128c80);
              func_0x000107c5fb78(lVar17,lVar15);
              func_0x000107c5fb78(0xd000000000000025,0x800000010f128ca0);
              func_0x000107c6142c(0xe000000000000000);
              uVar10 = *(undefined8 *)(lVar8 + 0x18);
              lVar4 = *(long *)(lVar8 + 0x20);
              func_0x0001000a8868(lVar8,uVar10);
              (**(code **)(lVar4 + 0xd8))(0,uVar10,lVar4);
              puVar12 = &UNK_1106137b8;
              func_0x000107c613fc(&UNK_1106137b8,0x20,7);
              *(long *)(puVar12 + 0x18) = lVar13;
              func_0x000107c61614(puVar12 + 0x10,lVar9);
              func_0x000107c61174(lVar9);
              func_0x000107c6157c(puVar12);
              func_0x00010434ab68(lVar9,lVar17,lVar15,FUN_103152ec8,puVar12);
              func_0x000107c6142c(lVar15);
              func_0x000107c61170(lVar9);
              func_0x000107c61578(puVar12,2);
              FUN_10314ea70();
              FUN_103139084((param_1 & 0xff) == 2);
              func_0x000107c61574(puVar12);
              func_0x000107c61170(lVar9);
              func_0x000107c61170(lVar11);
              func_0x000107c61604(*(long *)(*(long *)(unaff_x20 + _DAT_112f45008) + 0x78) + 0x10,0);
              lVar8 = *plVar3;
              *plVar3 = 0;
              plVar3[1] = 0;
              func_0x000107c61170(lVar8);
              uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
              *(undefined8 *)(unaff_x20 + lVar6) = 0;
              func_0x000107c615e8(uVar10);
              return;
            }
            goto LAB_10315019c;
          }
        }
      }
    }
  }
  func_0x000107c6142c(lVar15);
LAB_10315019c:
  if (*(long *)(unaff_x20 + _DAT_112f45060) != 0) {
    func_0x00010434ad9c();
  }
  FUN_10315233c(0,(param_1 & 0xff) == 2);
  return;
}



/* Entry: 10315059c; end: 103150c0f;  */

/* WARNING: Possible PIC construction at 0x0001031505e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010315063c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031506bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103150834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103150b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103150bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031508f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103150938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031508f4) */
/* WARNING: Removing unreachable block (ram,0x000103150bcc) */
/* WARNING: Removing unreachable block (ram,0x000103150b24) */
/* WARNING: Removing unreachable block (ram,0x000103150b74) */
/* WARNING: Removing unreachable block (ram,0x000103150bc4) */
/* WARNING: Removing unreachable block (ram,0x000103150838) */
/* WARNING: Removing unreachable block (ram,0x00010315083c) */
/* WARNING: Removing unreachable block (ram,0x000103150958) */
/* WARNING: Removing unreachable block (ram,0x000103150854) */
/* WARNING: Removing unreachable block (ram,0x0001031506c0) */
/* WARNING: Removing unreachable block (ram,0x0001031508d8) */
/* WARNING: Removing unreachable block (ram,0x00010315078c) */
/* WARNING: Removing unreachable block (ram,0x0001031507a0) */
/* WARNING: Removing unreachable block (ram,0x0001031507e8) */
/* WARNING: Removing unreachable block (ram,0x000103150960) */
/* WARNING: Removing unreachable block (ram,0x0001031509d0) */
/* WARNING: Removing unreachable block (ram,0x000103150a30) */
/* WARNING: Removing unreachable block (ram,0x0001031507f8) */
/* WARNING: Removing unreachable block (ram,0x000103150640) */
/* WARNING: Removing unreachable block (ram,0x00010315069c) */
/* WARNING: Removing unreachable block (ram,0x000103150674) */
/* WARNING: Removing unreachable block (ram,0x0001031506a8) */
/* WARNING: Removing unreachable block (ram,0x0001031505ec) */
/* WARNING: Removing unreachable block (ram,0x00010315093c) */
/* WARNING: Removing unreachable block (ram,0x000103150bec) */

void FUN_10315059c(void)

{
  func_0x000107c602fc(0x25);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 103150c10; end: 103150ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103150c10(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f44fd0);
  if (((char)plVar1[1] != '\x01') && (*plVar1 == param_1)) {
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(0xe000000000000000);
    puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(0x800000010f128d80);
    lVar2 = unaff_x20 + _DAT_112f45030;
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    lVar3 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar4);
    (**(code **)(lVar3 + 0x88))(param_2,uVar4,lVar3);
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    lVar3 = *(long *)(lVar2 + 0x20);
    func_0x0001000a8868(lVar2,uVar4);
    (**(code **)(lVar3 + 0x78))(3,uVar4,lVar3);
    FUN_1031521c8();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f44fa0);
    *(undefined8 *)(unaff_x20 + _DAT_112f44fa0) = 0;
    func_0x000107c61170(uVar4);
    FUN_10314e904();
    *plVar1 = 0;
    *(undefined1 *)(plVar1 + 1) = 1;
    *(undefined1 *)(unaff_x20 + _DAT_112f44fd8) = 0;
    if (*(long *)(unaff_x20 + _DAT_112f44fc0) != 0) {
      lVar2 = unaff_x20 + _DAT_112f45018;
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      lVar3 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,uVar4);
      (**(code **)(lVar3 + 0x10))(uVar4,lVar3);
    }
    if (*(long *)(unaff_x20 + _DAT_112f45060) != 0) {
      func_0x00010434ad9c();
    }
    FUN_10315233c(0,0);
  }
  return;
}



/* Entry: 103150ddc; end: 103151357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103150ddc(undefined8 param_1,long param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  *(undefined1 *)(unaff_x20 + _DAT_112f44fd8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f44fe0) = 1;
  plVar1 = (long *)(unaff_x20 + _DAT_112f44fa8);
  lVar5 = *plVar1;
  *plVar1 = param_2;
  plVar1[1] = param_3;
  func_0x000107c61170(lVar5);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f44fc0);
  *(undefined1 **)(unaff_x20 + _DAT_112f44fc0) = param_4;
  func_0x000107c61174();
  func_0x000107c615e8(uVar11);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f44ff0);
  uVar11 = puVar2[1];
  *puVar2 = param_6;
  puVar2[1] = param_7;
  func_0x000107c615f0(param_4);
  func_0x000107c6142c(uVar11);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f45058);
  if (lVar5 == 0) {
    func_0x000107c61434(param_7);
  }
  else {
    func_0x000107c61438(param_7,2);
    func_0x000107c6071c();
    func_0x00010434b3d0(0);
    func_0x000107c610f8();
    uVar11 = param_6;
    func_0x00010434b1f8(param_1,param_6,param_7,0);
    func_0x000107c4f644(lVar5);
    func_0x000107c61170(uVar11);
  }
  func_0x000107c3e2c0();
  if (*(long *)(unaff_x20 + _DAT_112f45048) != 0) {
    FUN_103152ed0(*(long *)(unaff_x20 + _DAT_112f45048) + _DAT_1130703f0,&puStack_a0);
    func_0x0001000a8868(&puStack_a0,puStack_88);
    lVar5 = param_2;
    func_0x000107c5de64(param_2);
    func_0x000107c61180();
    (**(code **)(lStack_80 + 8))();
    func_0x000107c61170(lVar5);
    func_0x0001000834e4();
    param_4 = (undefined1 *)ppuVar6;
  }
  FUN_10314ea70();
  lVar5 = param_2;
  func_0x000107c5de64(param_2);
  func_0x000107c61180();
  func_0x000107c61604(*(long *)(param_4 + 0x78) + 0x10,lVar5);
  func_0x000107c61574(param_4);
  func_0x000107c61170(lVar5);
  puVar9 = &UNK_1106136a8;
  puVar7 = puVar9;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar2 = (undefined8 *)(param_2 + _DAT_112f44e68);
  uVar11 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 0x103153608;
  puVar2[1] = puVar7;
  func_0x000107c6157c(puVar7);
  func_0x000100d373b8(uVar11,uVar3);
  func_0x000107c61574(puVar7);
  puVar7 = puVar9;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar2 = (undefined8 *)(param_2 + _DAT_112f44e70);
  uVar11 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 0x10315360c;
  puVar2[1] = puVar7;
  func_0x000107c6157c(puVar7);
  func_0x000100d373b8(uVar11,uVar3);
  func_0x000107c61574(puVar7);
  puVar7 = puVar9;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  lVar5 = *(long *)(param_2 + _DAT_112f44e60);
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f44f08);
  uVar11 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 0x103153604;
  puVar2[1] = puVar7;
  func_0x000107c61580(puVar7,2);
  func_0x000100d373b8(uVar11,uVar3);
  func_0x000107c61578(puVar7,2);
  puVar8 = puVar9;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar7 = &UNK_110613880;
  func_0x000107c613fc(&UNK_110613880,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar8;
  *(undefined8 *)(puVar7 + 0x18) = param_5;
  puVar2 = (undefined8 *)(param_2 + _DAT_112f44e78);
  uVar11 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 0x103153600;
  puVar2[1] = puVar7;
  func_0x000107c6157c(puVar8);
  func_0x000100d373b8(uVar11,uVar3);
  func_0x000107c61574(puVar8);
  puVar8 = puVar9;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar7 = &UNK_1106138a8;
  func_0x000107c613fc(&UNK_1106138a8,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar8;
  *(undefined8 *)(puVar7 + 0x18) = param_5;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f44f18);
  uVar11 = *puVar2;
  uVar3 = puVar2[1];
  *puVar2 = 0x1031535f8;
  puVar2[1] = puVar7;
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(puVar7);
  func_0x000100d373b8(uVar11,uVar3);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar7);
  lVar5 = unaff_x20 + _DAT_112f45030;
  uVar11 = *(undefined8 *)(lVar5 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar11);
  (**(code **)(lVar4 + 0xd8))(1,uVar11,lVar4);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f45040);
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar7 = &UNK_1106138d0;
  func_0x000107c613fc(&UNK_1106138d0,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar9;
  *(undefined8 *)(puVar7 + 0x18) = param_5;
  lStack_80 = 0x1031535fc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106138e8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  func_0x000107c4e524(uVar11);
  func_0x000107c60bd0(ppuVar10);
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x35);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f128df0);
  func_0x000107c5fb78(param_6,param_7);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f128e10);
  func_0x000107c6142c(uStack_98);
  return;
}



/* Entry: 103151358; end: 103151e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103151358(long param_1,undefined **param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 uStack_cc;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar17 = *(long *)(unaff_x20 + _DAT_112f45048);
  if (lVar17 == 0) {
    pcVar15 = *(code **)(unaff_x20 + _DAT_112f44fb0);
    if (pcVar15 == (code *)0x0) {
      plVar16 = (long *)0x0;
      uVar13 = 0;
      lVar12 = *(long *)(unaff_x20 + _DAT_112f45038);
      goto LAB_10315172c;
    }
    uVar13 = 0;
    plVar16 = (long *)0x0;
  }
  else {
    uVar13 = *(ulong *)(lVar17 + _DAT_113070400);
    param_2 = (undefined **)((ulong *)(lVar17 + _DAT_113070400))[1];
    uVar5 = uVar13;
    func_0x000107c614f0();
    pcVar15 = (code *)param_2[1];
    func_0x000107c615f0(uVar13);
    (*pcVar15)(uVar5,param_2);
    pcVar15 = (code *)param_2[10];
    func_0x000107c615f0(uVar13);
    (*pcVar15)(uVar5,param_2);
    func_0x000107c615e8(uVar13);
    pcVar15 = (code *)param_2[3];
    func_0x000107c615f0(uVar13);
    (*pcVar15)(uVar5,param_2);
    func_0x000107c615e8(uVar13);
    pcVar15 = (code *)param_2[2];
    func_0x000107c615f0(uVar13);
    (*pcVar15)();
    func_0x000107c615e8(uVar13);
    lVar12 = _DAT_112f44fa0;
    if ((uVar5 & 1) == 0) {
      plVar16 = (long *)0x0;
    }
    else {
      uVar18 = *(undefined8 *)(lVar17 + _DAT_113070408);
      uVar3 = ((undefined8 *)(lVar17 + _DAT_113070408))[1];
      uVar2 = *(undefined8 *)(lVar17 + _DAT_113070410);
      uVar4 = ((undefined8 *)(lVar17 + _DAT_113070410))[1];
      lVar14 = *(long *)(unaff_x20 + _DAT_112f44fa0);
      if (lVar14 == 0) {
        func_0x000107c615f0();
        func_0x000107c615f0(uVar18);
        lStack_c8 = 0;
        ppuStack_c0 = (undefined **)0x0;
        lVar6 = 0;
        uStack_cc = 0;
        ppuStack_e0 = (undefined **)0x0;
        lStack_d8 = 0;
        lVar14 = 0;
      }
      else {
        func_0x000107c615f0();
        func_0x000107c615f0(uVar18);
        func_0x000107c4b1dc();
        func_0x000107c61180();
        lStack_c8 = lVar14;
        func_0x000107c5faec();
        ppuStack_e0 = param_2;
        func_0x000107c61170(lVar14);
        lVar14 = *(long *)(unaff_x20 + lVar12);
        ppuStack_c0 = param_2;
        if (lVar14 == 0) {
          uStack_cc = 0;
LAB_1031515d8:
          lVar6 = 0;
          ppuStack_e0 = (undefined **)0x0;
          lStack_d8 = 0;
        }
        else {
          func_0x000107c4a55c();
          lVar6 = *(long *)(unaff_x20 + lVar12);
          uStack_cc = (undefined1)lVar14;
          if (lVar6 == 0) goto LAB_1031515d8;
          func_0x000107c401fc();
          func_0x000107c61180();
          if (lVar6 == 0) {
LAB_1031515a4:
            lStack_d8 = 0;
            ppuStack_e0 = (undefined **)0x0;
          }
          else {
            lVar14 = lVar6;
            func_0x000107c3ddb8();
            func_0x000107c61180();
            func_0x000107c61170(lVar6);
            if (lVar14 == 0) goto LAB_1031515a4;
            lStack_d8 = lVar14;
            func_0x000107c5faec();
            func_0x000107c61170(lVar14);
          }
          lVar6 = *(long *)(unaff_x20 + lVar12);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            func_0x000107c5db5c();
            lVar14 = *(long *)(unaff_x20 + lVar12);
            if (lVar14 != 0) {
              func_0x000107c49b94();
              goto LAB_1031515e4;
            }
          }
        }
        lVar14 = 0;
      }
LAB_1031515e4:
      func_0x00010434914c(lVar6,lVar14);
      lVar19 = *(long *)(unaff_x20 + lVar12);
      lVar7 = 0;
      FUN_10314455c();
      lVar14 = lVar7;
      func_0x000107c610f8();
      func_0x000107c61614(lVar14 + _DAT_112f44b18,0);
      lVar12 = _DAT_112f44b20;
      func_0x000107c61174(lVar19);
      pcVar8 = "WebLensJSBridge";
      func_0x0001000c10c0();
      func_0x000107c61180();
      *(char **)(lVar14 + lVar12) = pcVar8;
      puVar1 = (undefined8 *)(lVar14 + _DAT_112f44b00);
      *puVar1 = uVar18;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)(lVar14 + _DAT_112f44b08);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      plVar16 = (long *)(lVar14 + _DAT_112f44b10);
      *plVar16 = lStack_c8;
      plVar16[1] = (long)ppuStack_c0;
      *(undefined1 *)(plVar16 + 2) = uStack_cc;
      plVar16[3] = lStack_d8;
      plVar16[4] = (long)ppuStack_e0;
      plVar16[5] = lVar6;
      plVar16[6] = lVar19;
      plVar16 = &lStack_98;
      param_2 = (undefined **)PTR_s_init_1125d9248;
      lStack_98 = lVar14;
      lStack_90 = lVar7;
      func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
    }
    pcVar15 = *(code **)(unaff_x20 + _DAT_112f44fb0);
    if (pcVar15 == (code *)0x0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_112f45038);
      func_0x000107c615f0(*(undefined8 *)(lVar17 + _DAT_113070418));
LAB_10315172c:
      FUN_10314b548(0);
      FUN_103152ed0(unaff_x20 + _DAT_112f45030,auStack_88);
      func_0x000107c614f0();
      func_0x000107c61174(plVar16);
      func_0x000107c615f0();
      FUN_10314b7f4();
      param_2 = &PTR_DAT_110613710;
      goto LAB_1031517a4;
    }
  }
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f44fb0 + 8);
  func_0x000107c6157c(uVar18);
  lVar12 = param_1;
  (*pcVar15)();
  func_0x000100d373b8(pcVar15,uVar18);
LAB_1031517a4:
  lVar17 = lVar12;
  func_0x000107c61174();
  func_0x000107c5677c();
  func_0x000107c61170(lVar17);
  func_0x000107c615e8(uVar13);
  func_0x000107c61170(plVar16);
  puVar11 = &UNK_1106136a8;
  puVar9 = puVar11;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar1 = (undefined8 *)(lVar17 + _DAT_112f44e68);
  uVar18 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_103153580;
  puVar1[1] = puVar9;
  func_0x000107c6157c(puVar9);
  func_0x000100d373b8(uVar18,uVar2);
  func_0x000107c61574(puVar9);
  puVar9 = puVar11;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar1 = (undefined8 *)(lVar17 + _DAT_112f44e70);
  uVar18 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0x103153598;
  puVar1[1] = puVar9;
  func_0x000107c6157c(puVar9);
  func_0x000100d373b8(uVar18,uVar2);
  func_0x000107c61574(puVar9);
  puVar10 = puVar11;
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  puVar9 = &UNK_110613948;
  func_0x000107c613fc(&UNK_110613948,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar10;
  *(long *)(puVar9 + 0x18) = param_1;
  puVar1 = (undefined8 *)(lVar17 + _DAT_112f44e78);
  uVar18 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0x1031535b0;
  puVar1[1] = puVar9;
  func_0x000107c6157c(puVar10);
  func_0x000100d373b8(uVar18,uVar2);
  func_0x000107c61574(puVar10);
  func_0x000107c613fc(&UNK_1106136a8,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar9 = &UNK_110613970;
  func_0x000107c613fc(&UNK_110613970,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar11;
  *(long *)(puVar9 + 0x18) = param_1;
  puVar1 = (undefined8 *)(*(long *)(lVar17 + _DAT_112f44e60) + _DAT_112f44f18);
  uVar18 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0x1031535c8;
  puVar1[1] = puVar9;
  func_0x000107c6157c(puVar11);
  func_0x000107c6157c(puVar9);
  func_0x000100d373b8(uVar18,uVar2);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar9);
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = lVar12;
  return auVar20;
}



/* Entry: 103151e98; end: 103151f0f;  */

void FUN_103151e98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103151f10(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103151f10; end: 1031521c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103151f10(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  if (((char)((long *)(unaff_x20 + _DAT_112f44fd0))[1] == '\x01') ||
     (*(long *)(unaff_x20 + _DAT_112f44fd0) != param_3)) {
    if (param_1 != 0) {
      func_0x000107c602fc(0x33);
      func_0x000107c5fb78(0x69746172656e6547,0xeb00000000206e6f);
      puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c5fb78(0xd000000000000026,0x800000010f128d30);
      func_0x000107c6142c(0xe000000000000000);
    }
  }
  else {
    if (param_1 == 0) {
      plVar1 = (long *)(unaff_x20 + _DAT_112f44fd0);
      if (((char)plVar1[1] != '\x01') && (*plVar1 == param_3)) {
        func_0x000107c602fc(0x13);
        func_0x000107c6142c(0xe000000000000000);
        puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar5);
        func_0x000107c6142c(0x800000010f128d80);
        lVar4 = unaff_x20 + _DAT_112f45030;
        uVar3 = *(undefined8 *)(lVar4 + 0x18);
        lVar2 = *(long *)(lVar4 + 0x20);
        func_0x0001000a8868(lVar4,uVar3);
        (**(code **)(lVar2 + 0x88))(1,uVar3,lVar2);
        uVar3 = *(undefined8 *)(lVar4 + 0x18);
        lVar2 = *(long *)(lVar4 + 0x20);
        func_0x0001000a8868(lVar4,uVar3);
        (**(code **)(lVar2 + 0x78))(3,uVar3,lVar2);
        FUN_1031521c8();
        uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f44fa0);
        *(undefined8 *)(unaff_x20 + _DAT_112f44fa0) = 0;
        func_0x000107c61170(uVar3);
        FUN_10314e904();
        *plVar1 = 0;
        *(undefined1 *)(plVar1 + 1) = 1;
        *(undefined1 *)(unaff_x20 + _DAT_112f44fd8) = 0;
        if (*(long *)(unaff_x20 + _DAT_112f44fc0) != 0) {
          lVar4 = unaff_x20 + _DAT_112f45018;
          uVar3 = *(undefined8 *)(lVar4 + 0x18);
          lVar2 = *(long *)(lVar4 + 0x20);
          func_0x0001000a8868(lVar4,uVar3);
          (**(code **)(lVar2 + 0x10))(uVar3,lVar2);
        }
        if (*(long *)(unaff_x20 + _DAT_112f45060) != 0) {
          func_0x00010434ad9c();
        }
        FUN_10315233c(0,0);
      }
      return;
    }
    func_0x000107c615f0();
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(0xe000000000000000);
    puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x786966657270202c,0xea00000000002220);
    func_0x000107c5fb78(0x73656c6946,0xe500000000000000);
    func_0x000107c5fb78(0x2922,0xe200000000000000);
    func_0x000107c6142c(0x800000010f128d60);
    lVar4 = unaff_x20 + _DAT_112f45030;
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    lVar2 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar3);
    (**(code **)(lVar2 + 0x28))(uVar3,lVar2);
    lVar4 = *(long *)(unaff_x20 + _DAT_112f44fa8);
    if (lVar4 == 0) {
      FUN_103150c10(param_3,2);
      func_0x000107c615e8(param_1);
    }
    else {
      func_0x000107c61174();
      func_0x00010314bf88(param_1,param_2,0x73656c6946,0xe500000000000000,0x74682e7865646e69,
                          0xea00000000006c6d);
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(param_1);
      *(undefined1 *)(unaff_x20 + _DAT_112f44fe0) = 1;
    }
  }
  return;
}



/* Entry: 1031521c8; end: 1031522db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031521c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44ff0);
  lVar4 = puVar1[1];
  if (lVar4 != 0) {
    uVar5 = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44ff8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    lVar6 = unaff_x20 + _DAT_112f45030;
    uVar2 = *(undefined8 *)(lVar6 + 0x18);
    lVar3 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,uVar2);
    (**(code **)(lVar3 + 0x90))(1,uVar2,lVar3);
    lVar6 = *(long *)(unaff_x20 + _DAT_112f45058);
    if (lVar6 != 0) {
      func_0x000107c61434(lVar4);
      func_0x000107c6071c();
      func_0x00010434b3d0(0);
      func_0x000107c610f8();
      func_0x00010434b1f8(param_1,uVar5,lVar4,2);
      func_0x000107c4f644(lVar6);
      func_0x000107c61170(uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
    return;
  }
  return;
}



/* Entry: 1031522dc; end: 10315233b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031522dc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10314c058();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10315233c; end: 1031523fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10315233c(ulong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((param_1 & 1) == 0) && (param_1 = *(ulong *)(unaff_x20 + _DAT_112f44fa8), param_1 != 0)) {
    func_0x000107c61174();
    FUN_10314c058();
    func_0x000107c61170(param_1);
  }
  FUN_10314ea70();
  FUN_103139084(param_2 & 1);
  func_0x000107c61574(param_1);
  func_0x000107c61604(*(long *)(*(long *)(unaff_x20 + _DAT_112f45008) + 0x78) + 0x10,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44fa8);
  uVar2 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f44fc0);
  *(undefined8 *)(unaff_x20 + _DAT_112f44fc0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1031523fc; end: 10315244f;  */

void FUN_1031523fc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001031519c8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103152450; end: 103152663;  */

/* WARNING: Possible PIC construction at 0x0001031525d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103152638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031525dc) */
/* WARNING: Removing unreachable block (ram,0x00010315263c) */
/* WARNING: Removing unreachable block (ram,0x0001031525ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103152450(double param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  double *pdVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  double dVar8;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f45040));
  func_0x000100bc7fa4();
  lVar6 = *(long *)(unaff_x20 + _DAT_112f44fa0);
  if ((((lVar6 != 0) && ((char)((long *)(unaff_x20 + _DAT_112f44fd0))[1] != '\x01')) &&
      (*(long *)(unaff_x20 + _DAT_112f44fd0) == param_2)) &&
     ((plVar1 = (long *)(unaff_x20 + _DAT_112f44fe8), (char)plVar1[1] == '\x01' ||
      (*plVar1 != param_2)))) {
    *plVar1 = param_2;
    *(undefined1 *)(plVar1 + 1) = 0;
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f44ff0);
    uVar7 = puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    func_0x000107c61174();
    func_0x000107c6142c(uVar7);
    lVar3 = unaff_x20 + _DAT_112f45030;
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    lVar5 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar7);
    (**(code **)(lVar5 + 0x90))(0,uVar7,lVar5);
    pdVar4 = (double *)(unaff_x20 + _DAT_112f44ff8);
    if (*(char *)(pdVar4 + 1) != '\x01') {
      dVar8 = *pdVar4;
      uVar7 = *(undefined8 *)(lVar3 + 0x18);
      lVar5 = *(long *)(lVar3 + 0x20);
      func_0x0001000a8868(lVar3,uVar7);
      func_0x000107c6071c();
      (**(code **)(lVar5 + 0x98))(param_1 - dVar8,uVar7,lVar5);
      *pdVar4 = 0.0;
      *(undefined1 *)(pdVar4 + 1) = 1;
    }
    func_0x000107c4b1dc(lVar6);
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 103152664; end: 1031529f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103152664(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long alStack_88 [3];
  long lStack_70;
  long lStack_68;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f45040));
  func_0x000100bc7fa4();
  lVar8 = *(long *)(unaff_x20 + _DAT_112f44fa0);
  if (((lVar8 != 0) && ((char)((long *)(unaff_x20 + _DAT_112f44fd0))[1] != '\x01')) &&
     (*(long *)(unaff_x20 + _DAT_112f44fd0) == param_2)) {
    uVar10 = 0xee00726f7272655f;
    uVar11 = 0x7468677561636e75;
    lVar9 = unaff_x20 + _DAT_112f45030;
    uVar7 = *(undefined8 *)(lVar9 + 0x18);
    lVar5 = *(long *)(lVar9 + 0x20);
    func_0x0001000a8868(lVar9,uVar7);
    lVar9 = *param_1;
    if (lVar9 < 2) {
      if (lVar9 != 0) {
        if (lVar9 != 1) {
LAB_1031529c8:
          alStack_88[0] = lVar9;
          func_0x000107c61174(lVar8);
          func_0x000107c60614(&UNK_11075d468,alStack_88,&UNK_11075d468,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1031529f4);
          (*pcVar12)();
        }
        uVar10 = 0x800000010f128870;
        uVar11 = 0xd000000000000013;
      }
    }
    else if (lVar9 == 2) {
      uVar11 = 0x5f656c6f736e6f63;
      uVar10 = 0xed0000726f727265;
    }
    else if (lVar9 == 3) {
      uVar11 = 0x697461676976616e;
      uVar10 = 0xea00000000006e6f;
    }
    else {
      if (lVar9 != 4) goto LAB_1031529c8;
      uVar11 = 0xd000000000000010;
      uVar10 = 0x800000010f128e30;
    }
    pcVar12 = *(code **)(lVar5 + 0xb0);
    func_0x000107c61174(lVar8);
    (*pcVar12)(uVar11,uVar10,uVar7,lVar5);
    func_0x000107c6142c(uVar10);
    FUN_1031534f0(unaff_x20 + _DAT_112f45070,alStack_88,0x112f43c30,&UNK_10db90030);
    if (lStack_70 == 0) {
      func_0x000107c61170(lVar8);
      func_0x000103153538(alStack_88,0x112f43c30,&UNK_10db90030);
    }
    else {
      lVar5 = lStack_70;
      func_0x0001000a8868(alStack_88,lStack_70);
      uVar7 = 0x697461676976616e;
      uVar10 = 0xea00000000006e6f;
      if (lVar9 != 3) {
        uVar7 = 0xd000000000000010;
        uVar10 = 0x800000010f128e30;
      }
      uVar11 = 0xed0000726f727265;
      uVar2 = 0x5f656c6f736e6f63;
      if (lVar9 != 2) {
        uVar11 = uVar10;
        uVar2 = uVar7;
      }
      uVar7 = 0x7468677561636e75;
      if (lVar9 != 0) {
        uVar7 = 0xd000000000000013;
      }
      uVar10 = 0xee00726f7272655f;
      if (lVar9 != 0) {
        uVar10 = 0x800000010f128870;
      }
      if (lVar9 < 2) {
        uVar11 = uVar10;
        uVar2 = uVar7;
      }
      lVar9 = param_1[1];
      lVar1 = param_1[2];
      FUN_1031532bc(param_1);
      lVar3 = lVar8;
      lVar6 = lVar5;
      func_0x000107c4b1dc(lVar8);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      (**(code **)(lStack_68 + 8))
                (uVar2,uVar11,lVar9,lVar1,param_1,lVar5,lVar4,lVar6,lStack_70,lStack_68);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(lVar6);
      func_0x000107c61170(lVar8);
      func_0x000107c6142c(lVar5);
      func_0x0001000834e4(alStack_88);
    }
  }
  return;
}



/* Entry: 1031529f4; end: 103152a4b;  */

void FUN_1031529f4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10314fce0(4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103152a4c; end: 103152b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103152a4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112f45048);
    lVar2 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar2 + _DAT_1130703f8);
      lVar1 = ((long *)(lVar2 + _DAT_1130703f8))[1];
      func_0x000107c615f0(lVar3);
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        func_0x000107c614f0(lVar3);
        (**(code **)(lVar1 + 0x10))();
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 103152b04; end: 103152b5f;  */

void FUN_103152b04(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_103152450(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103152b60; end: 103152bcf;  */

void FUN_103152b60(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103152664(param_1,param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103152bd0; end: 103152c2f; -[_TtC23WebLensesImplementation17WebLensesWorkflow init] */

void FUN_103152bd0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesImplementation.WebLensesWorkflow",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103152bfc);
  (*pcVar1)();
}



/* Entry: 103152c30; end: 103152dc7; -[_TtC23WebLensesImplementation17WebLensesWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103152c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103152c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103152d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103152d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103152d34) */
/* WARNING: Removing unreachable block (ram,0x000103152c84) */
/* WARNING: Removing unreachable block (ram,0x000103152c50) */
/* WARNING: Removing unreachable block (ram,0x000103152d7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103152c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f45010));
  return;
}



/* Entry: 103152dc8; end: 103152e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103152dc8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f45018;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x20))(uVar2,lVar3);
  return;
}



/* Entry: 103152e14; end: 103152e8b; -[_TtC23WebLensesImplementation17WebLensesWorkflow isPointInsideView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103152e14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + _DAT_112f44fa8);
  lVar1 = lVar2;
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
    FUN_10314b370(param_1,param_2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_3);
  }
  return (uint)lVar1 & 1;
}



/* Entry: 103152e8c; end: 103152e8f; -[_TtC23WebLensesImplementation17WebLensesWorkflow setUIHidden:] */

void FUN_103152e8c(void)

{
  return;
}



/* Entry: 103152e90; end: 103152ea7; -[_TtC23WebLensesImplementation17WebLensesWorkflow isCameraRecordingDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103152e90(long param_1)

{
  return *(long *)(param_1 + _DAT_112f44fa0) != 0;
}



/* Entry: 103152ea8; end: 103152ec7;  */

void FUN_103152ea8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ba8c8);
  return;
}



/* Entry: 103152ec8; end: 103152ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103152ec8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10314c058();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103152ed0; end: 103152f13;  */

long FUN_103152ed0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103152f14; end: 10315324b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103152f14(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1031534f0(param_1,puVar6,0x112d36580,&UNK_10d9016d0);
  puVar4 = puVar6;
  (**(code **)(lVar13 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x000103153538(puVar6,0x112d36580,&UNK_10d9016d0);
    lVar3 = unaff_x20 + _DAT_112f45030;
    uVar11 = *(undefined8 *)(lVar3 + 0x18);
    lVar5 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar11);
    (**(code **)(lVar5 + 0xd0))(1,uVar11,lVar5);
    return;
  }
  (**(code **)(lVar13 + 0x20))(lVar5,puVar6,lVar3);
  lVar9 = *(long *)(unaff_x20 + _DAT_112f44fa0);
  if (lVar9 == 0) {
    lVar9 = unaff_x20 + _DAT_112f45030;
    uVar11 = *(undefined8 *)(lVar9 + 0x18);
    lVar10 = *(long *)(lVar9 + 0x20);
    func_0x0001000a8868(lVar9,uVar11);
    (**(code **)(lVar10 + 0xd0))(2,uVar11,lVar10);
    FUN_103138560(lVar5);
  }
  else {
    lVar10 = *(long *)(unaff_x20 + _DAT_112f45050);
    if (lVar10 != 0) {
      plVar1 = (long *)(lVar10 + _DAT_1130703b8);
      func_0x000107c61428(plVar1,auStack_78,0,0);
      lVar7 = *plVar1;
      if (lVar7 != 0) {
        lVar8 = plVar1[1];
        lVar10 = *(long *)(lVar10 + _DAT_1130703c0);
        func_0x000107c61428(lVar10 + 0x28,auStack_90,1,0);
        uVar11 = *(undefined8 *)(lVar10 + 0x28);
        *(long *)(lVar10 + 0x28) = lVar9;
        func_0x000107c61174(lVar9);
        func_0x000107c61174();
        func_0x000107c615f0(lVar7);
        func_0x000107c61170(uVar11);
        lVar10 = unaff_x20 + _DAT_112f45030;
        uVar11 = *(undefined8 *)(lVar10 + 0x18);
        lVar2 = *(long *)(lVar10 + 0x20);
        func_0x0001000a8868(lVar10,uVar11);
        (**(code **)(lVar2 + 0xd0))(0,uVar11,lVar2);
        lVar10 = lVar7;
        func_0x000107c614f0(lVar7);
        (**(code **)(lVar8 + 8))();
        (**(code **)(lVar8 + 0x18))(lVar5,lVar10,lVar8);
        func_0x000107c61170(lVar9);
        func_0x000107c615e8(lVar7);
        goto LAB_10315321c;
      }
    }
    lVar10 = unaff_x20 + _DAT_112f45030;
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
    lVar7 = *(long *)(lVar10 + 0x20);
    func_0x0001000a8868(lVar10,uVar11);
    pcVar12 = *(code **)(lVar7 + 0xd0);
    func_0x000107c61174(lVar9);
    (*pcVar12)(3,uVar11,lVar7);
    FUN_103138560(lVar5);
    func_0x000107c61170(lVar9);
  }
LAB_10315321c:
  (**(code **)(lVar13 + 8))(lVar5,lVar3);
  return;
}



/* Entry: 10315324c; end: 103153263;  */

undefined8 * FUN_10315324c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103153264; end: 103153297;  */

void FUN_103153264(void)

{
  long unaff_x20;
  
  func_0x000103151cb8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 103153298; end: 1031532a3;  */

void FUN_103153298(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_103151f10(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1031532a4; end: 1031532bb;  */

void FUN_1031532a4(void)

{
  FUN_1031523fc();
  return;
}



/* Entry: 1031532bc; end: 1031534ef;  */

undefined1  [16] FUN_1031532bc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar1 = uVar5 & 0xffffffffffff;
  if ((uVar8 & 0x2000000000000000) != 0) {
    uVar1 = uVar8 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0xffffffffffff;
    if ((*(ulong *)(param_1 + 0x30) & 0x2000000000000000) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x30) >> 0x38 & 0xf;
    }
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar1 != 0) {
      func_0x000107c5fb78(*(ulong *)(param_1 + 0x28));
      puVar2 = (undefined *)0x0;
      func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      puVar7 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
        func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar2);
      }
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = 0x3d656372756f73;
      *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = 0xe700000000000000;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      if (*(long *)(puVar7 + 0x10) == 0) {
        func_0x000107c6142c(puVar7);
        uVar5 = 0;
        uVar8 = 0;
        goto LAB_103153454;
      }
    }
    else {
      puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      puVar2 = puVar7;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar2 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = 0x3d656e696c;
      *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = 0xe500000000000000;
    }
    uVar3 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = uVar3;
    func_0x00010011d734();
    uVar5 = 0x20;
    uVar8 = 0xe100000000000000;
    func_0x000107c5fa80(0x20,0xe100000000000000,uVar3,uVar4);
    func_0x000107c6142c(puVar7);
  }
  else {
    func_0x000107c61434(uVar8);
  }
LAB_103153454:
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



/* Entry: 1031534f0; end: 103153577;  */

undefined8 FUN_1031534f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103153578; end: 10315357f;  */

void FUN_103153578(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_103139e34(param_1,puVar3,0x112d36580,&UNK_10d9016d0);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_103139eb4(puVar3,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar4,puVar3,lVar1);
    FUN_103138560(lVar4);
    (**(code **)(lVar5 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 103153580; end: 1031535df;  */

void FUN_103153580(void)

{
  FUN_1031529f4();
  return;
}



/* Entry: 1031535e0; end: 10315360f;  */

void FUN_1031535e0(long param_1,long param_2)

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



/* Entry: 103153610; end: 103153663;  */

void FUN_103153610(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  uVar1 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_3[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3[4];
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  return;
}



/* Entry: 103153664; end: 103153683;  */

void FUN_103153664(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  uVar1 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_3[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3[4];
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  return;
}



/* Entry: 103153684; end: 10315379b;  */

void FUN_103153684(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  func_0x000107c6157c();
  func_0x000107c61574(uVar7);
  pcVar2 = FUN_10315379c;
  func_0x0001000bfde0(FUN_10315379c,0,PTR___sSbN_11034dd40);
  plVar3 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068();
  func_0x000107c61574(pcVar2);
  puVar4 = &UNK_1106139a8;
  func_0x000107c613fc(&UNK_1106139a8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcVar2 = FUN_103153918;
  puVar6 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_103153918);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar5 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(puVar6 + 0x10))(uVar1,pcVar5,puVar6);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
  return;
}



/* Entry: 10315379c; end: 1031537cb;  */

void FUN_10315379c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  func_0x000107c40808();
  *(bool *)param_1 = 0 < lVar1;
  return;
}



/* Entry: 1031537cc; end: 103153917;  */

void FUN_1031537cc(char *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_80 [24];
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return;
    }
    if (*(char *)(param_2 + 0x50) != '\x01') {
      lVar1 = *(long *)(param_2 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        *(undefined1 *)(param_2 + 0x50) = 1;
        FUN_103153ba0(param_2 + 0x20,auStack_80);
        if (lStack_68 == 0) {
          func_0x000103153bf0(auStack_80);
        }
        else {
          func_0x0001000a8868(auStack_80,lStack_68);
          (**(code **)(lStack_60 + 0xe0))(lStack_68,lStack_60);
          func_0x0001000834e4(auStack_80);
        }
        func_0x000107c5be24(lVar1);
        func_0x000107c61574(param_2);
        func_0x000107c615e8(lVar1);
        return;
      }
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      return;
    }
    FUN_103153920(0x6574617669746361,0xea00000000002928,0x2e);
  }
  func_0x000107c61574();
  return;
}



/* Entry: 103153918; end: 10315391f;  */

void FUN_103153918(char *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_80 [24];
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      return;
    }
    if (*(char *)(lVar2 + 0x50) != '\x01') {
      lVar1 = *(long *)(lVar2 + 0x10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        *(undefined1 *)(lVar2 + 0x50) = 1;
        FUN_103153ba0(lVar2 + 0x20,auStack_80);
        if (lStack_68 == 0) {
          func_0x000103153bf0(auStack_80);
        }
        else {
          func_0x0001000a8868(auStack_80,lStack_68);
          (**(code **)(lStack_60 + 0xe0))(lStack_68,lStack_60);
          func_0x0001000834e4(auStack_80);
        }
        func_0x000107c5be24(lVar1);
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(lVar1);
        return;
      }
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      return;
    }
    FUN_103153920(0x6574617669746361,0xea00000000002928,0x2e);
  }
  func_0x000107c61574();
  return;
}



/* Entry: 103153920; end: 103153a5b;  */

void FUN_103153920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  long lStack_58;
  
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0x50) = 0;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      FUN_103153ba0(unaff_x20 + 0x20,&uStack_78);
      if (lStack_60 == 0) {
        func_0x000103153bf0(&uStack_78);
      }
      else {
        func_0x0001000a8868(&uStack_78,lStack_60);
        (**(code **)(lStack_58 + 0xe8))(lStack_60,lStack_58);
        func_0x0001000834e4(&uStack_78);
      }
      uStack_78 = param_1;
      uStack_70 = param_2;
      func_0x000107c61434(param_2);
      func_0x000107c5fb78(0x2f,0xe100000000000000);
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      uVar1 = uStack_70;
      uVar3 = uStack_78;
      func_0x000107c5fadc(uStack_78,uStack_70);
      func_0x000107c6142c(uVar1);
      func_0x000107c5ba8c(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 103153a5c; end: 103153b9f;  */

void FUN_103153a5c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c61574(uVar1);
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0x50) = 0;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      FUN_103153ba0(unaff_x20 + 0x20,&uStack_58);
      if (lStack_40 == 0) {
        func_0x000103153bf0(&uStack_58);
      }
      else {
        func_0x0001000a8868(&uStack_58,lStack_40);
        (**(code **)(lStack_38 + 0xe8))(lStack_40,lStack_38);
        func_0x0001000834e4(&uStack_58);
      }
      uStack_58 = 0x6176697463616564;
      uStack_50 = 0xec00000029286574;
      func_0x000107c5fb78(0x2f,0xe100000000000000);
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      uVar1 = uStack_50;
      uVar3 = uStack_58;
      func_0x000107c5fadc(uStack_58,uStack_50);
      func_0x000107c6142c(uVar1);
      func_0x000107c5ba8c(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 103153ba0; end: 103153c37;  */

undefined8 FUN_103153ba0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f44260;
  func_0x0001000285a8(0x112f44260,&UNK_10db90460);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103153c38; end: 103153c93;  */

void FUN_103153c38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000103153bf0(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103153c94; end: 103153caf;  */

void FUN_103153c94(undefined8 param_1)

{
  func_0x0001000285a8(0x112f45160,&UNK_10db91100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103153cb0,param_1);
  return;
}



/* Entry: 103153cb0; end: 103153e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103153cb0(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  func_0x0001031541f8();
  func_0x000107c61170(uVar3);
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + _DAT_113082680);
    func_0x000107c61434(lVar7);
    func_0x000107c61170(param_2);
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_103153d40:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      lVar2 = 0x112ef6f08;
      uVar6 = 0;
      func_0x0001000285a8(0x112ef6f08);
      func_0x0001000a7158();
      if ((uVar6 & 1) == 0) goto LAB_103153d40;
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
    }
    func_0x000107c6142c(lVar7);
    if (lStack_38 != 0) {
      uVar3 = 0x112ef6f08;
      func_0x0001000285a8(0x112ef6f08,&UNK_10db25bd0);
      puVar4 = &uStack_58;
      func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000100083b20(&uStack_50);
        uVar3 = uStack_50;
        uVar5 = 0;
        func_0x0001043ecc38(0);
        func_0x000107c610f8();
        func_0x0001043ecb24(uVar3,uVar5);
        func_0x000107c61574(uStack_58);
        *param_1 = uVar3;
        return;
      }
      goto LAB_103153df4;
    }
  }
  func_0x00010006e7f4(&uStack_50);
LAB_103153df4:
  func_0x0001048d9980(0xd00000000000003d,0x800000010f128ee0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103153e14);
  (*pcVar1)();
}



/* Entry: 103153e14; end: 103153e2f;  */

void FUN_103153e14(undefined8 param_1)

{
  func_0x0001000285a8(0x112f45168,&UNK_10db91108);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103153e30,param_1);
  return;
}



/* Entry: 103153e30; end: 103153f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103153e30(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&uStack_58);
  uVar3 = uStack_58;
  FUN_10315418c();
  func_0x000107c61170(uVar3);
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + _DAT_1130826e0);
    func_0x000107c61434(lVar7);
    func_0x000107c61170(param_2);
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_103153ec0:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      lVar2 = 0x112ef6f40;
      uVar6 = 0;
      func_0x0001000285a8(0x112ef6f40);
      func_0x0001000a7158();
      if ((uVar6 & 1) == 0) goto LAB_103153ec0;
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar2 * 0x20,&uStack_50);
    }
    func_0x000107c6142c(lVar7);
    if (lStack_38 != 0) {
      uVar3 = 0x112ef6f40;
      func_0x0001000285a8(0x112ef6f40,&UNK_10db25c10);
      puVar4 = &uStack_58;
      func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000100083b20(&uStack_50);
        uVar3 = uStack_50;
        puVar5 = PTR_PTR_1126acca0;
        func_0x000107c610f8();
        func_0x000107c473d0();
        func_0x000107c61170(uVar3);
        func_0x000107c61574(uStack_58);
        *param_1 = puVar5;
        return;
      }
      goto LAB_103153f70;
    }
  }
  func_0x00010006e7f4(&uStack_50);
LAB_103153f70:
  func_0x0001048d9980(0xd00000000000003f,0x800000010f128ea0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103153f90);
  (*pcVar1)();
}



/* Entry: 103153f90; end: 103153fab;  */

void FUN_103153f90(undefined8 param_1)

{
  func_0x0001000285a8(0x112f45170,&UNK_10db91110);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103153ffc,param_1);
  return;
}



/* Entry: 103153fac; end: 10315415b;  */

void FUN_103153fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10315415c; end: 10315418b;  */

undefined1  [16] FUN_10315415c(void)

{
  return ZEXT816(0x110613a78);
}



/* Entry: 10315418c; end: 103154263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10315418c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f45178);
  if (lVar2 == 0) {
    uStack_28 = 0;
  }
  else {
    lVar1 = ((long *)(unaff_x20 + _DAT_112f45178))[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(lVar1 + 0x10))();
    func_0x000100083b20(&uStack_28);
    func_0x000107c61574(lVar2);
  }
  return uStack_28;
}



/* Entry: 103154264; end: 10315431b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103154264(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f45178);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10315431c; end: 10315434f;  */

void FUN_10315431c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103154350; end: 10315435f; -[_TtC26CallUICameraScopedServices29CallUICameraViewfinderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103154350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f45178));
  return;
}



/* Entry: 103154360; end: 10315437f;  */

void FUN_103154360(void)

{
  func_0x000107c61168(&PTR_PTR_1128baa60);
  return;
}



/* Entry: 103154380; end: 1031543eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103154380(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103154774();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f451b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031543ec; end: 103154457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031543ec(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f451b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103154458; end: 1031544b7; -[_TtC40InAppPipCallScopedFactoryServiceProvider26InAppPipCallScopedServices init] */

void FUN_103154458(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("InAppPipCallScopedFactoryServiceProvider.InAppPipCallScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103154484);
  (*pcVar1)();
}



/* Entry: 1031544b8; end: 1031544c7; -[_TtC40InAppPipCallScopedFactoryServiceProvider26InAppPipCallScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031544b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f451b0));
  return;
}



/* Entry: 1031544c8; end: 103154533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031544c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110613d10;
  func_0x000107c613fc(&UNK_110613d10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10315480c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103154534; end: 1031545cf;  */

void FUN_103154534(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110613c20;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110613c20;
  return;
}



/* Entry: 1031545d0; end: 103154607;  */

void FUN_1031545d0(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103154608; end: 10315460f;  */

undefined8 FUN_103154608(void)

{
  return 0x1b;
}



/* Entry: 103154610; end: 103154743;  */

void FUN_103154610(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110613d38;
  func_0x000107c613fc(&UNK_110613d38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031547e4;
  func_0x00010058fa64(FUN_1031547e4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103154744; end: 103154773;  */

undefined ** FUN_103154744(void)

{
  return &PTR_DAT_113066670;
}



/* Entry: 103154774; end: 103154793;  */

void FUN_103154774(void)

{
  func_0x000107c61168(&PTR_PTR_1128bab20);
  return;
}



/* Entry: 103154794; end: 1031547e3;  */

undefined1  [16] FUN_103154794(void)

{
  return ZEXT816(0x110613c70);
}



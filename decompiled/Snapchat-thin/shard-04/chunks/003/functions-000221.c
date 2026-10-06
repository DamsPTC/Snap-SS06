/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103351b10; end: 103351bef;  */

void FUN_103351b10(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    if (param_3 != 0) {
      func_0x000107c61428(param_4 + 0x10,auStack_58,1,0);
      uVar2 = *(undefined8 *)(param_4 + 0x10);
      uVar3 = *(undefined8 *)(param_4 + 0x18);
      *(undefined8 *)(param_4 + 0x10) = param_2;
      *(long *)(param_4 + 0x18) = param_3;
      uVar1 = *(undefined1 *)(param_4 + 0x20);
      *(undefined1 *)(param_4 + 0x20) = 0;
      func_0x000107c61434(param_3);
      goto LAB_103351bc4;
    }
    uStack_68 = 0;
  }
  else {
    func_0x000107c614cc(param_1,auStack_60,auStack_78);
    func_0x000107c60640();
    param_2 = uStack_70;
  }
  func_0x000107c61428(param_4 + 0x10,auStack_58,1,0);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(undefined8 *)(param_4 + 0x18) = uStack_68;
  uVar1 = *(undefined1 *)(param_4 + 0x20);
  *(undefined1 *)(param_4 + 0x20) = 1;
LAB_103351bc4:
  func_0x0001033541c8(uVar2,uVar3,uVar1);
  func_0x000107c60f3c(param_5);
  return;
}



/* Entry: 103351bf0; end: 103352d6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103351bf0(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,byte param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f5b7e8);
    uVar1 = uVar3;
    func_0x000107c614f0();
    puVar2 = &UNK_110641ae0;
    func_0x000107c613fc(&UNK_110641ae0,0x61,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    puVar2[0x20] = param_4 & 1;
    *(long *)(puVar2 + 0x28) = param_1;
    *(undefined8 *)(puVar2 + 0x30) = param_5;
    *(undefined8 *)(puVar2 + 0x38) = param_6;
    *(undefined8 *)(puVar2 + 0x40) = param_7;
    *(undefined8 *)(puVar2 + 0x48) = param_8;
    *(undefined8 *)(puVar2 + 0x50) = param_9;
    *(undefined8 *)(puVar2 + 0x58) = param_10;
    puVar2[0x60] = param_11 & 1;
    func_0x000107c61434(param_10);
    func_0x000107c615f0(uVar3);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x00010090569c(FUN_1033541dc,puVar2,uVar1);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 103352d70; end: 103352fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103352d70(byte *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    uStack_80 = 0;
    func_0x000104888f7c(&uStack_80);
    return;
  }
  if ((bVar1 & 1) == 0) {
    func_0x0001000d224c(&uStack_80);
    uVar2 = CONCAT71(uStack_7f,uStack_80);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c4a04c();
      func_0x000107c615e8(uVar2);
      if ((uVar3 & 1) == 0) goto LAB_103352ef8;
    }
    FUN_1033545ac(param_2 + _DAT_112f5b7d0,auStack_a8,0x112f5b7d8,&UNK_10dbb3d50);
    if (lStack_90 != 0) {
      func_0x000100d43ce8(auStack_a8,&uStack_80);
      func_0x0001000a8868(&uStack_80,uStack_68);
      uVar4 = uStack_68;
      (**(code **)(lStack_60 + 8))(uStack_68,lStack_60);
      puVar5 = &UNK_110641708;
      func_0x000107c613fc(&UNK_110641708,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_2);
      FUN_103354528(param_3,auStack_a8);
      puVar6 = &UNK_110641b80;
      func_0x000107c613fc(&UNK_110641b80,0x40,7);
      func_0x000100d43ce8(auStack_a8,puVar6 + 0x10);
      *(undefined **)(puVar6 + 0x38) = puVar5;
      func_0x0001048898b8(0,1,0x103354588,puVar6,PTR___sSbN_11034dd40);
      func_0x000107c61574(uVar4);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(param_2);
      func_0x0001000834e4(&uStack_80);
      return;
    }
    FUN_103354944(auStack_a8,0x112f5b7d8,&UNK_10dbb3d50);
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    uStack_80 = 0;
  }
  else {
LAB_103352ef8:
    func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
    uStack_80 = 1;
  }
  func_0x000104888f7c(&uStack_80);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 103352fac; end: 103353137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103352fac(char *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x0001000a8868(param_2,uVar2);
    uVar4 = 1;
    (**(code **)(lVar1 + 0x10))(1,uVar2,lVar1);
    uVar2 = 0;
    func_0x000100775264(0,1,FUN_103353138,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar4);
    func_0x000104889f74(0,1,FUN_103353144,0);
    func_0x000107c61574(uVar2);
  }
  else {
    if (*param_1 == '\x01') {
      func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
      lVar1 = param_3 + 0x10;
      func_0x000107c61618();
      if (lVar1 != 0) {
        uVar4 = *(undefined8 *)(lVar1 + _DAT_112f5b7e8);
        func_0x000107c615f0(uVar4);
        func_0x000107c61170(lVar1);
        uVar2 = uVar4;
        func_0x000107c614f0(uVar4);
        func_0x000107c6157c(param_3);
        func_0x00010090569c(FUN_1033545a4,param_3,uVar2);
        func_0x000107c615e8(uVar4);
        func_0x000107c61574(param_3);
      }
      func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      uStack_49 = 0;
      puVar3 = &uStack_49;
    }
    else {
      func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      auStack_48[0] = 0;
      puVar3 = auStack_48;
    }
    func_0x000104888f7c(puVar3);
  }
  return;
}



/* Entry: 103353138; end: 103353143;  */

void FUN_103353138(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 103353144; end: 1033531eb;  */

void FUN_103353144(void)

{
  undefined1 uStack_21;
  
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  uStack_21 = 1;
  func_0x000104888f7c(&uStack_21);
  return;
}



/* Entry: 1033531ec; end: 10335344b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033531ec(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = param_1;
  uVar3 = param_2;
  func_0x0001000d224c(&uStack_70);
  func_0x00010912c994();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  uVar4 = uStack_70;
  if ((uVar2 == param_1) && (uVar3 == param_2)) {
    func_0x000107c6142c(uVar3);
LAB_10335329c:
    func_0x000107c614f0(uStack_70);
    pcVar5 = *(code **)(lStack_68 + 8);
    param_3 = 0;
    param_4 = 2;
  }
  else {
    uVar1 = uVar3;
    func_0x000107c605b8(uVar2,uVar3,param_1,param_2,0);
    func_0x000107c6142c();
    if ((uVar2 & 1) != 0) goto LAB_10335329c;
    func_0x00010912c9ec();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if ((uVar2 == param_1) && (uVar1 == param_2)) {
      func_0x000107c6142c(uVar1);
LAB_10335334c:
      func_0x000107c614f0(uStack_70);
      pcVar5 = *(code **)(lStack_68 + 8);
    }
    else {
      uVar3 = uVar1;
      func_0x000107c605b8(uVar2,uVar1,param_1,param_2,0);
      func_0x000107c6142c();
      if ((uVar2 & 1) != 0) goto LAB_10335334c;
      func_0x00010912c9c0();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = uVar3;
      if ((uVar2 == param_1) && (uVar3 == param_2)) {
LAB_10335339c:
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x000107c605b8(uVar2,uVar3,param_1,param_2,0);
        func_0x000107c6142c();
        if ((uVar2 & 1) == 0) {
          func_0x00010912ca18();
          func_0x000107c61180();
          uVar2 = uVar3;
          func_0x000107c5faec();
          func_0x000107c61170(uVar3);
          if ((uVar2 == param_1) && (uVar1 == param_2)) goto LAB_10335339c;
          func_0x000107c605b8(uVar2,uVar1,param_1,param_2,0);
          func_0x000107c6142c(uVar1);
          if ((uVar2 & 1) == 0) goto LAB_1033532bc;
        }
      }
      func_0x000107c614f0(uStack_70);
      pcVar5 = *(code **)(lStack_68 + 8);
      param_3 = 0;
      param_4 = 1;
    }
  }
  (*pcVar5)(param_3,param_4,uVar4,lStack_68);
LAB_1033532bc:
  func_0x000107c615e8(uStack_70);
  return;
}



/* Entry: 10335344c; end: 1033534d3;  */

void FUN_10335344c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103354600(uVar1,uVar2,param_3,param_4,param_5);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1033534d4; end: 10335368f;  */

/* WARNING: Possible PIC construction at 0x000103353560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033535f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103353608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103353630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335360c) */
/* WARNING: Removing unreachable block (ram,0x0001033535fc) */
/* WARNING: Removing unreachable block (ram,0x000103353564) */
/* WARNING: Removing unreachable block (ram,0x000103353634) */

void FUN_1033534d4(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 auStack_70 [16];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  if ((param_1 & 1) == 0) {
    func_0x000107c498cc(param_4);
    func_0x000107c61180();
    (*param_2)();
  }
  else {
    func_0x000107c5d7e0();
    func_0x000107c61180();
    func_0x000107c5edb4(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 103353690; end: 1033536ef; -[_TtC25LensMultiplayerURIHandler42LensProcessingURIServiceMultiplayerHandler init] */

void FUN_103353690(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensMultiplayerURIHandler.LensProcessingURIServiceMultiplayerHandler",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033536bc);
  (*pcVar1)();
}



/* Entry: 1033536f0; end: 103353853; -[_TtC25LensMultiplayerURIHandler42LensProcessingURIServiceMultiplayerHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033536f0(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b788));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b790));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b798));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b7a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b7a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b7b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b7b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b7c0));
  FUN_103354944(param_1 + _DAT_112f5b7c8,0x112e60330,&UNK_10dbb3c50);
  FUN_103354944(param_1 + _DAT_112f5b7d0,0x112f5b7d8,&UNK_10dbb3d50);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b7e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b7e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f5b7f0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f5b758));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b778));
  puVar1 = (undefined8 *)(param_1 + _DAT_112f5b780);
  FUN_103353b64(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],*(undefined1 *)(puVar1 + 9));
  return;
}



/* Entry: 103353854; end: 103353873;  */

void FUN_103353854(void)

{
  func_0x000107c61168(&PTR_PTR_1128cff18);
  return;
}



/* Entry: 103353874; end: 1033538d7;  */

long FUN_103353874(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1033538d8; end: 103353a07;  */

undefined8 * FUN_1033538d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103353a08; end: 103353a7b;  */

undefined8 * FUN_103353a08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



/* Entry: 103353a7c; end: 103353b2f;  */

int FUN_103353a7c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103353b30; end: 103353b63;  */

void FUN_103353b30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103353b64; end: 103353bbf;  */

/* WARNING: Possible PIC construction at 0x000103353b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103353b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103353b8c) */
/* WARNING: Removing unreachable block (ram,0x000103353b9c) */

void FUN_103353b64(void)

{
  long in_stack_00000000;
  
  if (in_stack_00000000 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 103353bc0; end: 103354037;  */

undefined1  [16] FUN_103353bc0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  uStack_50 = 0;
  puVar4 = &UNK_110641860;
  func_0x000107c613fc(&UNK_110641860,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_50;
  puVar5 = &UNK_110641888;
  func_0x000107c613fc(&UNK_110641888,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_103354070;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_60 = FUN_103354078;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1019dec60;
  puStack_68 = &UNK_1106418a0;
  ppuVar6 = &puStack_80;
  puStack_58 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_58;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4c590(param_1);
  func_0x000107c60bd0(ppuVar6);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x71,0xde,0x25,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103353d14);
  (*pcVar3)();
}



/* Entry: 103354038; end: 10335406f;  */

void FUN_103354038(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103350df4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),unaff_x20 + 0x50
               );
  return;
}



/* Entry: 103354070; end: 103354077;  */

void FUN_103354070(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  if (param_3 == 0) {
    lVar3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c52060();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
  }
  lVar1 = plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 103354078; end: 103354097;  */

void FUN_103354078(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103354098; end: 1033540c3;  */

void FUN_103354098(undefined8 param_1,long param_2,char param_3)

{
  if ((param_3 == '\x01') && (param_2 == 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1033540c4; end: 1033540fb;  */

/* WARNING: Possible PIC construction at 0x0001033540e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033540ec) */

void FUN_1033540c4(undefined8 param_1,long param_2)

{
  char in_w5;
  
  if ((in_w5 == '\x01') && (param_2 == 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1033540fc; end: 10335411f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033540fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c60f3c(uVar1);
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112f5b7e8);
    uVar3 = uVar6;
    func_0x000107c614f0(uVar6);
    puVar4 = &UNK_110641b08;
    func_0x000107c613fc(&UNK_110641b08,0x48,7);
    uVar7 = *param_1;
    uVar9 = param_1[3];
    uVar8 = param_1[2];
    *(undefined8 *)(puVar4 + 0x18) = param_1[1];
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    *(undefined8 *)(puVar4 + 0x28) = uVar9;
    *(undefined8 *)(puVar4 + 0x20) = uVar8;
    *(undefined2 *)(puVar4 + 0x30) = *(undefined2 *)(param_1 + 4);
    *(undefined8 *)(puVar4 + 0x38) = uVar5;
    *(undefined8 *)(puVar4 + 0x40) = uVar1;
    func_0x000107c615f0(uVar6);
    FUN_1033545ac(param_1,auStack_90,0x112f5b828,&UNK_10dbb3cb0);
    func_0x000107c6157c(uVar5);
    func_0x000107c61174(uVar1);
    func_0x00010090569c(FUN_1033544d0,puVar4,uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 103354120; end: 103354153;  */

void FUN_103354120(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103354154; end: 10335415f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103354154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c60f3c(uVar1);
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112f5b7e8);
    uVar3 = uVar6;
    func_0x000107c614f0(uVar6);
    puVar4 = &UNK_110641b30;
    func_0x000107c613fc(&UNK_110641b30,0x38,7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = uVar5;
    *(undefined8 *)(puVar4 + 0x30) = uVar1;
    func_0x000107c615f0(uVar6);
    func_0x000107c614b0(param_3);
    func_0x000107c61434(param_2);
    func_0x000107c6157c(uVar5);
    func_0x000107c61174(uVar1);
    func_0x00010090569c(0x103354a04,puVar4,uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 103354160; end: 10335419f;  */

void FUN_103354160(void)

{
  long unaff_x20;
  
  FUN_103351bf0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1033541a0; end: 1033541db;  */

void FUN_1033541a0(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    if (lVar1 != 0) {
      func_0x000107c61428(lVar2 + 0x10,auStack_58,1,0);
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      uVar5 = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar2 + 0x10) = uVar7;
      *(long *)(lVar2 + 0x18) = lVar1;
      uVar3 = *(undefined1 *)(lVar2 + 0x20);
      *(undefined1 *)(lVar2 + 0x20) = 0;
      func_0x000107c61434(lVar1);
      goto LAB_103351bc4;
    }
    uStack_68 = 0;
  }
  else {
    func_0x000107c614cc(*(long *)(unaff_x20 + 0x10),auStack_60,auStack_78);
    func_0x000107c60640();
    uVar7 = uStack_70;
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_58,1,0);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  *(undefined8 *)(lVar2 + 0x18) = uStack_68;
  uVar3 = *(undefined1 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x20) = 1;
LAB_103351bc4:
  func_0x0001033541c8(uVar4,uVar5,uVar3);
  func_0x000107c60f3c(uVar6);
  return;
}



/* Entry: 1033541dc; end: 10335421b;  */

void FUN_1033541dc(void)

{
  long unaff_x20;
  
  func_0x000103351d58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10335421c; end: 10335425b;  */

void FUN_10335421c(undefined8 param_1,long param_2,char param_3)

{
  if (param_3 == -1) {
    return;
  }
  if ((param_3 == '\x01') && (param_2 == 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10335425c; end: 103354483;  */

undefined * FUN_10335425c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = puVar8 + -extraout_x12;
  func_0x000107c5d7e0(param_3);
  func_0x000107c61180();
  if (param_2 == 1) {
    func_0x000107c5edb4(puVar8);
    func_0x000107c61170(param_3);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar5 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar4 = puVar5;
    func_0x000107c5ed90();
    uVar2 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f1403e0);
    puVar6 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar3);
    puVar7 = puVar8;
  }
  else {
    func_0x000107c5edb4(puVar7);
    func_0x000107c61170(param_3);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar4 = puVar3;
    func_0x000107c5ed90();
    uVar2 = 0;
    if (param_2 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      uVar2 = param_1;
    }
    puVar5 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar6 = puVar3;
    func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar3);
  }
  func_0x000107c4913c(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar6);
  (**(code **)(lVar9 + 8))(puVar7,lVar1);
  return puVar5;
}



/* Entry: 103354484; end: 103354497;  */

/* WARNING: Possible PIC construction at 0x0001033544bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033544c0) */

void FUN_103354484(undefined8 param_1,long param_2,undefined8 param_3,long param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = param_5 >> 0x10 & 0xff;
  if (0xfe < uVar1) {
    return;
  }
  if ((uVar1 == 1) && (param_4 = param_2, param_2 == 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 103354498; end: 1033544cf;  */

/* WARNING: Possible PIC construction at 0x0001033544bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033544c0) */

void FUN_103354498(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,char param_6)

{
  if ((param_6 == '\x01') && (param_4 = param_2, param_2 == 1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 1033544d0; end: 1033544db;  */

void FUN_1033544d0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint3 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar13 = *(long *)(unaff_x20 + 0x18);
  if (lVar13 == 1) {
    func_0x000107c61428(lVar2 + 0x10,auStack_78,1,0);
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar8 = *(undefined8 *)(lVar2 + 0x18);
    uVar9 = *(undefined8 *)(lVar2 + 0x20);
    uVar10 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(uint3 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x18) = 1;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined2 *)(lVar2 + 0x30) = 0;
    *(undefined1 *)(lVar2 + 0x32) = 1;
  }
  else {
    bVar5 = *(byte *)(unaff_x20 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar11 = 0x100;
    if ((*(byte *)(unaff_x20 + 0x31) & 1) == 0) {
      uVar11 = 0;
    }
    func_0x000107c61428(lVar2 + 0x10,auStack_78,1,0);
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar8 = *(undefined8 *)(lVar2 + 0x18);
    uVar9 = *(undefined8 *)(lVar2 + 0x20);
    uVar10 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(uint3 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x10) = uVar12;
    *(long *)(lVar2 + 0x18) = lVar13;
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    *(ushort *)(lVar2 + 0x30) = uVar11 | bVar5 & 1;
    *(undefined1 *)(lVar2 + 0x32) = 0;
    func_0x000107c61434(uVar3);
    func_0x000107c61434(lVar13);
  }
  func_0x0001033541b4(uVar7,uVar8,uVar9,uVar10,(ulong)uVar6);
  func_0x000107c60f3c(uVar4);
  return;
}



/* Entry: 1033544dc; end: 103354517;  */

void FUN_1033544dc(void)

{
  long unaff_x20;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103354518; end: 103354527;  */

void FUN_103354518(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    if (lVar1 != 0) {
      func_0x000107c61428(lVar2 + 0x10,auStack_58,1,0);
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      uVar5 = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 *)(lVar2 + 0x10) = uVar7;
      *(long *)(lVar2 + 0x18) = lVar1;
      uVar3 = *(undefined1 *)(lVar2 + 0x20);
      *(undefined1 *)(lVar2 + 0x20) = 0;
      func_0x000107c61434(lVar1);
      goto LAB_103351bc4;
    }
    uStack_68 = 0;
  }
  else {
    func_0x000107c614cc(*(long *)(unaff_x20 + 0x10),auStack_60,auStack_78);
    func_0x000107c60640();
    uVar7 = uStack_70;
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_58,1,0);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  *(undefined8 *)(lVar2 + 0x18) = uStack_68;
  uVar3 = *(undefined1 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x20) = 1;
LAB_103351bc4:
  func_0x0001033541c8(uVar4,uVar5,uVar3);
  func_0x000107c60f3c(uVar6);
  return;
}



/* Entry: 103354528; end: 10335456b;  */

long FUN_103354528(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10335456c; end: 1033545a3;  */

void FUN_10335456c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103352d70(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Entry: 1033545a4; end: 1033545ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033545a4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f5b768) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1033545ac; end: 1033545f3;  */

undefined8 FUN_1033545ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1033545f4; end: 1033545ff;  */

void FUN_1033545f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    FUN_103354600(uVar1,uVar3,uVar4,uVar2,uVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 103354600; end: 103354943;  */

undefined *
FUN_103354600(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
             undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long alStack_100 [4];
  code *pcStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_d0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0x436567617373656d;
  puVar10 = PTR___sSSN_11034da80;
  *(undefined **)(puVar3 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(puVar3 + 0x28) = 0xee00746e65746e6f;
  *(undefined8 *)(puVar3 + 0x30) = param_1;
  *(undefined8 *)(puVar3 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  puVar7 = puVar3;
  func_0x000100214a84(puVar3);
  func_0x000107c61588(puVar3);
  FUN_103354944(puVar3 + 0x20,0x112d4b5f0,&UNK_10d9127d0);
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar4 = puVar7;
  func_0x000107c5f9dc(puVar7,puVar10,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar7);
  puStack_c0 = (undefined *)0x0;
  puVar5 = puVar4;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar7 = puStack_c0;
  func_0x000107c61174();
  if (puVar3 == (undefined *)0x0) {
    param_5 = puVar7;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar7);
    func_0x000107c61654();
    puVar3 = param_5;
    func_0x000107c614ac(param_5);
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c5d7e0(param_3);
    func_0x000107c61180();
    func_0x000107c5edb4((long)&pcStack_e0 + lVar1);
    func_0x000107c61170(param_3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar3 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar6 = puVar4;
    func_0x00010006c00c(puVar4,puVar10);
    lStack_d8 = lVar2;
    func_0x000107c5ed90();
    puVar7 = (undefined *)0x4b4f;
    func_0x000107c5fadc(0x4b4f,0xe200000000000000);
    puVar8 = puVar5;
    pcStack_e0 = param_4;
    func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar5);
    puVar9 = puVar4;
    func_0x000107c5ee20(puVar4,puVar10);
    func_0x00010006c090(puVar4,puVar10);
    puVar5 = puVar6;
    func_0x000107c4913c(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    (**(code **)(lStack_d0 + 8))((long)&pcStack_e0 + lVar1,lStack_d8);
    (*pcStack_e0)(puVar3);
    func_0x00010006c090(puVar4);
    func_0x000107c61170(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  func_0x000107c60e78();
  *(undefined **)((long)alStack_100 + lVar1) = param_5;
  *(undefined **)((long)alStack_100 + lVar1 + 8) = puVar7;
  *(undefined1 **)((long)alStack_100 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_100 + lVar1 + 0x18) = FUN_103354944;
  func_0x0001000285a8(puVar10,puVar5);
  (**(code **)(*(long *)(puVar10 + -8) + 8))(puVar3,puVar10);
  return puVar3;
}



/* Entry: 103354944; end: 103354983;  */

undefined8 FUN_103354944(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103354984; end: 103354993;  */

/* WARNING: Possible PIC construction at 0x000103353560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033535f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103353608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103353630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335360c) */
/* WARNING: Removing unreachable block (ram,0x0001033535fc) */
/* WARNING: Removing unreachable block (ram,0x000103353564) */
/* WARNING: Removing unreachable block (ram,0x000103353634) */

void FUN_103354984(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0;
  func_0x000107c5ede0(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  if ((param_1 & 1) == 0) {
    func_0x000107c498cc(uVar3);
    func_0x000107c61180();
    (*pcVar1)();
  }
  else {
    func_0x000107c5d7e0();
    func_0x000107c61180();
    func_0x000107c5edb4(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103354994; end: 1033549d3;  */

void FUN_103354994(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033549d4; end: 103354a07;  */

void FUN_1033549d4(long param_1,long param_2)

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



/* Entry: 103354a08; end: 103354bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103354a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f5b840);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b848) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f5b850) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b858) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b860) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b868) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b870) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b878) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b880) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f5b888) = param_4;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f5b890) = puVar2;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_103354bb4();
  FUN_103354cd8();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c615e8(param_7);
  return puVar3;
}



/* Entry: 103354bb4; end: 103354cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103354bb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f5b858);
  func_0x000107c406b4(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4da88();
  func_0x000107c61180();
  puVar3 = &UNK_110641c48;
  func_0x000107c613fc(&UNK_110641c48,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_50 = 0x103356f20;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x103356f6c;
  puStack_58 = &UNK_110641e40;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 103354cd8; end: 103355047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103354cd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x0001000d224c(&puStack_a0);
  puVar1 = puStack_a0;
  if (puStack_a0 != (undefined *)0x0) {
    puVar2 = puStack_a0;
    func_0x000107c41074();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar5 = puStack_a0;
      func_0x000107c5e3e8();
      func_0x000107c61180();
    }
    else {
      puVar3 = puVar2;
      func_0x000107c61174();
      puVar4 = puStack_a0;
      func_0x000107c5e3e8();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5bc40();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61174();
    func_0x000107c41dd0(puStack_a0);
    puVar6 = puStack_a0;
    func_0x000107c61180();
    puVar7 = puVar5;
    func_0x000107c4da88(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar3 = &UNK_110641c48;
    puVar8 = puVar3;
    func_0x000107c613fc(&UNK_110641c48,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_103356ed4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1019eb2d8;
    puStack_88 = &UNK_110641d78;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_78);
    puVar8 = puVar7;
    func_0x000107c5c320(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c3e924(puVar8);
    func_0x000107c61170(puVar8);
    puVar7 = puVar6;
    func_0x000107c4da88(puVar6);
    func_0x000107c61180();
    puVar8 = puVar3;
    func_0x000107c613fc(&UNK_110641c48,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    pcStack_80 = (code *)0x103356ef4;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1019eb2d8;
    puStack_88 = &UNK_110641da0;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_78);
    puVar8 = puVar7;
    func_0x000107c5c320(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c3e924(puVar8);
    func_0x000107c61170(puVar8);
    puVar7 = puVar1;
    func_0x000107c41c24(puVar1);
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c4da88();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c613fc(&UNK_110641c48,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_80 = FUN_103356f14;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x10311f730;
    puStack_88 = &UNK_110641dc8;
    ppuVar9 = &puStack_a0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_78);
    puVar3 = puVar8;
    func_0x000107c5c320(puVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c3e924(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 103355048; end: 1033550bf;  */

void FUN_103355048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1033550cc(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033550c0; end: 1033550cb;  */

void FUN_1033550c0(void)

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
    FUN_1033550cc(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1033550cc; end: 1033553db;  */

/* WARNING: Possible PIC construction at 0x00010335519c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103355210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103355250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033552e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103355254) */
/* WARNING: Removing unreachable block (ram,0x00010335525c) */
/* WARNING: Removing unreachable block (ram,0x0001033552e8) */
/* WARNING: Removing unreachable block (ram,0x000103355358) */
/* WARNING: Removing unreachable block (ram,0x00010335537c) */
/* WARNING: Removing unreachable block (ram,0x000103355390) */
/* WARNING: Removing unreachable block (ram,0x0001033553cc) */
/* WARNING: Removing unreachable block (ram,0x000103355384) */
/* WARNING: Removing unreachable block (ram,0x0001033553b4) */
/* WARNING: Removing unreachable block (ram,0x000103355318) */
/* WARNING: Removing unreachable block (ram,0x000103355264) */
/* WARNING: Removing unreachable block (ram,0x00010335531c) */
/* WARNING: Removing unreachable block (ram,0x000103355214) */
/* WARNING: Removing unreachable block (ram,0x0001033551a0) */
/* WARNING: Removing unreachable block (ram,0x0001033551c8) */
/* WARNING: Removing unreachable block (ram,0x0001033552b8) */
/* WARNING: Removing unreachable block (ram,0x0001033552cc) */
/* WARNING: Removing unreachable block (ram,0x0001033551d8) */
/* WARNING: Removing unreachable block (ram,0x0001033552e4) */
/* WARNING: Removing unreachable block (ram,0x000103355338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033550cc(undefined8 param_1,code *param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f5b860));
  func_0x000100bc7fa4();
  if (*(char *)(unaff_x20 + _DAT_112f5b850) == '\x01') {
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(auStack_70 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  }
  else {
    func_0x000107c4d778(param_1);
    func_0x000107c61180();
    (*param_2)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033553dc; end: 103355507; -[_TtC25LensMultiplayerURIHandler36LensTalkUriServiceMultiplayerHandler handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x0001033554d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033554e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033554d4) */
/* WARNING: Removing unreachable block (ram,0x0001033554e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033553dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110641c70;
  func_0x000107c613fc(&UNK_110641c70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f5b860);
  func_0x000107c614f0(uVar4);
  puVar2 = &UNK_110641c48;
  func_0x000107c613fc(&UNK_110641c48,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110641c98;
  func_0x000107c613fc(&UNK_110641c98,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(code **)(puVar3 + 0x20) = FUN_103356de4;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x103356f50,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103355508; end: 10335550b; -[_TtC25LensMultiplayerURIHandler36LensTalkUriServiceMultiplayerHandler reset] */

void FUN_103355508(void)

{
  return;
}



/* Entry: 10335550c; end: 103355a43;  */

/* WARNING: Possible PIC construction at 0x0001033555bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033555dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335585c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103355884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103355928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033559b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033559fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103355a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033558b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103355a10) */
/* WARNING: Removing unreachable block (ram,0x000103355a00) */
/* WARNING: Removing unreachable block (ram,0x0001033559bc) */
/* WARNING: Removing unreachable block (ram,0x00010335592c) */
/* WARNING: Removing unreachable block (ram,0x000103355888) */
/* WARNING: Removing unreachable block (ram,0x000103355a20) */
/* WARNING: Removing unreachable block (ram,0x000103355860) */
/* WARNING: Removing unreachable block (ram,0x0001033555e0) */
/* WARNING: Removing unreachable block (ram,0x0001033555c0) */
/* WARNING: Removing unreachable block (ram,0x0001033555c4) */
/* WARNING: Removing unreachable block (ram,0x0001033558b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335550c(long param_1,code *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_f0 [16];
  code *pcStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = *(long *)(unaff_x20 + _DAT_112f5b848);
  if (lVar6 == 0) {
    func_0x000107c498f4(param_1);
    func_0x000107c61180();
    (*param_2)();
    lVar6 = param_1;
  }
  else {
    puStack_c0 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_b8 = lVar3;
    func_0x000107c61174();
    lVar3 = lVar6;
    func_0x000107c401fc();
    func_0x000107c61180();
    lStack_b0 = param_3;
    if (lVar3 == 0) {
      lVar3 = lVar6;
      func_0x000107c4a55c();
      uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f5b840))[1];
      if (uVar8 != 0) {
        puVar7 = *(undefined **)(unaff_x20 + _DAT_112f5b840);
        uVar1 = (ulong)puVar7 & 0xffffffffffff;
        if ((uVar8 & 0x2000000000000000) != 0) {
          uVar1 = uVar8 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          lStack_d8 = lVar9;
          lStack_c8 = lVar6;
          puStack_a8 = puVar7;
          uStack_a0 = uVar8;
          func_0x000107c61438(uVar8,2);
          uStack_d0 = 0;
          func_0x000107c5fb78(0x6f656469762d,0xe600000000000000);
          uVar1 = uStack_a0;
          puVar5 = puStack_a8;
          func_0x0001000d224c(&lStack_78);
          puVar4 = &UNK_110641cc0;
          func_0x000107c613fc(&UNK_110641cc0,0x60,7);
          lVar6 = lStack_b0;
          *(long *)(puVar4 + 0x10) = param_1;
          *(code **)(puVar4 + 0x18) = param_2;
          *(long *)(puVar4 + 0x20) = lStack_b0;
          puVar4[0x28] = (char)lVar3;
          *(undefined8 *)(puVar4 + 0x30) = uStack_d0;
          *(undefined8 *)(puVar4 + 0x38) = 0;
          *(undefined **)(puVar4 + 0x40) = puVar5;
          *(ulong *)(puVar4 + 0x48) = uVar1;
          *(undefined **)(puVar4 + 0x50) = puVar7;
          *(ulong *)(puVar4 + 0x58) = uVar8;
          pcStack_e0 = param_2;
          func_0x000107c61434(0);
          func_0x000107c61434(uVar8);
          func_0x000107c61434(uVar1);
          func_0x000107c6157c(lVar6);
          func_0x000107c61174(param_1);
          func_0x0001000d224c(&puStack_a8);
          puVar7 = puStack_a8;
          if (puStack_a8 == (undefined *)0x0) {
            func_0x000107c5d7e0(param_1);
            func_0x000107c61180();
            func_0x000107c5edb4(puStack_c0);
            lVar6 = param_1;
          }
          else {
            func_0x000107c614f0(*(undefined8 *)(lStack_78 + _DAT_112f5b720));
            func_0x000100bcb214();
            puVar5 = &UNK_110641ce8;
            func_0x000107c613fc(&UNK_110641ce8,0x20,7);
            *(undefined8 *)(puVar5 + 0x10) = 0x103356e28;
            *(undefined **)(puVar5 + 0x18) = puVar4;
            puVar2 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_88 = FUN_103356e68;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_100c75f50;
            puStack_90 = &UNK_110641d00;
            puStack_80 = puVar5;
            func_0x000107c60bc4(&puStack_a8);
            puVar5 = puStack_80;
            lStack_b0 = lStack_78;
            func_0x000107c6157c(puVar4);
            func_0x000107c61574(puVar5);
            puVar5 = &UNK_110641d38;
            func_0x000107c613fc(&UNK_110641d38,0x20,7);
            *(undefined8 *)(puVar5 + 0x10) = 0x103356e28;
            *(undefined **)(puVar5 + 0x18) = puVar4;
            pcStack_88 = (code *)0x103356e8c;
            puStack_a8 = puVar2;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1012519d0;
            puStack_90 = &UNK_110641d50;
            puStack_80 = puVar5;
            func_0x000107c60bc4(&puStack_a8);
            puVar5 = puStack_80;
            func_0x000107c6157c(puVar4);
            func_0x000107c61574(puVar5);
            func_0x000107c42f88(puVar7);
            func_0x000107c6142c(uVar8);
            func_0x000107c6142c(uVar1);
            func_0x000107c6142c(0);
            func_0x000107c61574(puVar4);
            lVar6 = lStack_b0;
          }
          goto code_r0x000107c61170;
        }
      }
      func_0x000107c6142c(0);
      func_0x000107c498f4(param_1);
      func_0x000107c61180();
      (*param_2)();
    }
    else {
      func_0x000107c3ddb8();
      func_0x000107c61180();
      lVar6 = lVar3;
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 103355a44; end: 103356533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103355a44(undefined8 param_1,code *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long unaff_x20;
  long lVar8;
  code *pcStack_70;
  long lStack_68;
  
  lVar1 = 0;
  pcStack_70 = param_2;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&pcStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + _DAT_112f5b848) != 0) {
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 != 0) {
      func_0x000107c40200(lStack_68);
      func_0x000107c615e8(lStack_68);
    }
  }
  func_0x000107c5d7e0(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar8);
  func_0x000107c61170(param_1);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar3 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar4 = puVar3;
  func_0x000107c5ed90();
  uVar5 = 0x4b4f;
  func_0x000107c5fadc(0x4b4f,0xe200000000000000);
  puVar6 = puVar2;
  func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar2);
  func_0x000107c4913c(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  (**(code **)(lVar7 + 8))(lVar8,lVar1);
  (*pcStack_70)(puVar3);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 103356534; end: 10335660b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103356534(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_49 = 0;
    puStack_60 = &uStack_49;
    func_0x00010446dcb4(FUN_10335660c,0,0x103356f28,auStack_70);
    uVar2 = ((undefined8 *)(param_1 + _DAT_11307bf50))[1];
    puVar1 = (undefined8 *)(param_2 + _DAT_112f5b840);
    uVar3 = puVar1[1];
    *puVar1 = *(undefined8 *)(param_1 + _DAT_11307bf50);
    puVar1[1] = uVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    *(undefined1 *)(param_2 + _DAT_112f5b850) = uStack_49;
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10335660c; end: 10335660f;  */

void FUN_10335660c(void)

{
  return;
}



/* Entry: 103356610; end: 1033568fb;  */

/* WARNING: Possible PIC construction at 0x0001033566b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033566f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103356734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103356750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335679c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033568bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033568cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033567ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033568d0) */
/* WARNING: Removing unreachable block (ram,0x0001033568c0) */
/* WARNING: Removing unreachable block (ram,0x0001033568dc) */
/* WARNING: Removing unreachable block (ram,0x0001033567a0) */
/* WARNING: Removing unreachable block (ram,0x000103356754) */
/* WARNING: Removing unreachable block (ram,0x000103356738) */
/* WARNING: Removing unreachable block (ram,0x00010335673c) */
/* WARNING: Removing unreachable block (ram,0x0001033566f8) */
/* WARNING: Removing unreachable block (ram,0x0001033566b8) */
/* WARNING: Removing unreachable block (ram,0x0001033568e0) */
/* WARNING: Removing unreachable block (ram,0x0001033566bc) */
/* WARNING: Removing unreachable block (ram,0x0001033566fc) */
/* WARNING: Removing unreachable block (ram,0x000103356758) */
/* WARNING: Removing unreachable block (ram,0x000103356760) */
/* WARNING: Removing unreachable block (ram,0x00010335676c) */
/* WARNING: Removing unreachable block (ram,0x0001033567a8) */
/* WARNING: Removing unreachable block (ram,0x000103356774) */
/* WARNING: Removing unreachable block (ram,0x0001033567d8) */
/* WARNING: Removing unreachable block (ram,0x0001033567dc) */
/* WARNING: Removing unreachable block (ram,0x000103356778) */
/* WARNING: Removing unreachable block (ram,0x000103356784) */
/* WARNING: Removing unreachable block (ram,0x00010335678c) */
/* WARNING: Removing unreachable block (ram,0x000103356800) */
/* WARNING: Removing unreachable block (ram,0x0001033568c8) */
/* WARNING: Removing unreachable block (ram,0x00010335681c) */
/* WARNING: Removing unreachable block (ram,0x000103356798) */
/* WARNING: Removing unreachable block (ram,0x00010335671c) */
/* WARNING: Removing unreachable block (ram,0x0001033566dc) */
/* WARNING: Removing unreachable block (ram,0x0001033567b0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103356610(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f5b860));
  func_0x000100bc7fa4();
  if (*(char *)(unaff_x20 + _DAT_112f5b850) == '\x01') {
    uVar1 = param_1;
    func_0x000107c49b94();
    if ((int)uVar1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c61174(param_1);
    }
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f5b848);
    *(undefined8 *)(unaff_x20 + _DAT_112f5b848) = param_1;
    func_0x000107c61174(param_1);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f5b848);
    *(undefined8 *)(unaff_x20 + _DAT_112f5b848) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033568fc; end: 103356967;  */

void FUN_1033568fc(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103356968; end: 103356ab3;  */

/* WARNING: Possible PIC construction at 0x0001033569d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103356a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103356a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103356a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103356a2c) */
/* WARNING: Removing unreachable block (ram,0x000103356a08) */
/* WARNING: Removing unreachable block (ram,0x000103356a30) */
/* WARNING: Removing unreachable block (ram,0x000103356a0c) */
/* WARNING: Removing unreachable block (ram,0x000103356a14) */
/* WARNING: Removing unreachable block (ram,0x000103356a4c) */
/* WARNING: Removing unreachable block (ram,0x000103356a1c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001033569d4) */
/* WARNING: Removing unreachable block (ram,0x000103356a70) */
/* WARNING: Removing unreachable block (ram,0x000103356a9c) */
/* WARNING: Removing unreachable block (ram,0x000103356a7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103356968(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f5b860));
  func_0x000100bc7fa4();
  lVar1 = *(long *)(unaff_x20 + _DAT_112f5b848);
  if (lVar1 == 0) {
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



/* Entry: 103356ab4; end: 103356b4b;  */

void FUN_103356ab4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c42440(param_1);
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_103356b4c(uVar1,puVar2);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 103356b4c; end: 103356c5b;  */

/* WARNING: Possible PIC construction at 0x000103356bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103356bcc) */
/* WARNING: Removing unreachable block (ram,0x000103356bd0) */
/* WARNING: Removing unreachable block (ram,0x000103356bd4) */
/* WARNING: Removing unreachable block (ram,0x000103356c14) */
/* WARNING: Removing unreachable block (ram,0x000103356bd8) */
/* WARNING: Removing unreachable block (ram,0x000103356c1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103356b4c(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f5b860));
  func_0x000100bc7fa4();
  if (*(char *)(unaff_x20 + _DAT_112f5b850) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f5b848);
    if (lVar1 != 0) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 103356c5c; end: 103356ca7;  */

void FUN_103356c5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103356ca8; end: 103356d07; -[_TtC25LensMultiplayerURIHandler36LensTalkUriServiceMultiplayerHandler init] */

void FUN_103356ca8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensMultiplayerURIHandler.LensTalkUriServiceMultiplayerHandler",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103356cd4);
  (*pcVar1)();
}



/* Entry: 103356d08; end: 103356dc3; -[_TtC25LensMultiplayerURIHandler36LensTalkUriServiceMultiplayerHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103356d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103356d98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103356d08(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b858));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b860));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f5b870));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b868));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b878));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b880));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f5b888));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5b890));
  return;
}



/* Entry: 103356dc4; end: 103356de3;  */

void FUN_103356dc4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0068);
  return;
}



/* Entry: 103356de4; end: 103356df3;  */

void FUN_103356de4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103356df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103356df4; end: 103356e67;  */

void FUN_103356df4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103356e68; end: 103356e93;  */

void FUN_103356e68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1,param_2,0,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103356e94; end: 103356ed3;  */

undefined8 FUN_103356e94(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103356ed4; end: 103356f13;  */

void FUN_103356ed4(void)

{
  FUN_1033568fc();
  return;
}



/* Entry: 103356f14; end: 103356f6f;  */

void FUN_103356f14(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar3,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42440(param_1);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    FUN_103356b4c(uVar2,puVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar3);
  }
  return;
}



/* Entry: 103356f70; end: 103357adb;  */

void FUN_103356f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ee3a00,&UNK_10db0ebc0);
  puVar1 = &UNK_110641e78;
  func_0x000107c613fc(&UNK_110641e78,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_2;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_103357adc,puVar1);
  return;
}



/* Entry: 103357adc; end: 103357b17;  */

void FUN_103357adc(void)

{
  long unaff_x20;
  
  func_0x000103357098(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 103357b18; end: 103357b27;  */

undefined1  [16] FUN_103357b18(void)

{
  return ZEXT816(0x110641ea0);
}



/* Entry: 103357b28; end: 103357baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357b28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10334d9c0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f5b720) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f5b728) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103357bb0; end: 103357bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = 0;
  FUN_10334d9c0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f5b720) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f5b728) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 103357bb8; end: 103357ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357bb8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  uVar6 = *(undefined8 *)(param_3 + _DAT_113070050);
  lVar2 = 0;
  FUN_10334d160();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112f5b688;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d8468();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112f5b668) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f5b670) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112f5b678) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112f5b680) = param_5;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_60,puVar4);
  *param_1 = plVar5;
  return;
}



/* Entry: 103357ca8; end: 103357cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_60;
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113070050);
  lVar5 = 0;
  FUN_10334d160();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar4 = _DAT_112f5b688;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d8468();
  *(undefined **)(lVar6 + lVar4) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112f5b668) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112f5b670) = uVar9;
  *(undefined8 *)(lVar6 + _DAT_112f5b678) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f5b680) = uVar3;
  puVar7 = PTR_s_init_1125d9248;
  lStack_60 = lVar6;
  lStack_58 = lVar5;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(uVar3);
  func_0x000107c61154(&lStack_60,puVar7);
  *param_1 = plVar8;
  return;
}



/* Entry: 103357cb4; end: 103357cfb;  */

undefined8 FUN_103357cb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103357cfc; end: 103357d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357cfc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uStack_40 = 0;
    uVar2 = 0;
    FUN_103354994(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    func_0x000107c5fc50(param_1,&uStack_40,uVar2);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f5b758);
    *(undefined8 *)(lVar1 + _DAT_112f5b758) = uStack_40;
    func_0x000107c6142c(uVar2);
    FUN_10334e114();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 103357d20; end: 103357d5f;  */

undefined8 FUN_103357d20(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103357d60; end: 103357d6b; -[SCLensTalkMultiplayerURIHandlerEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357d60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b8c8;
  func_0x000107c61428(param_1 + _DAT_112f5b8c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103357d6c; end: 103357d77; -[SCLensTalkMultiplayerURIHandlerEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b8c8;
  func_0x000107c61428(param_1 + _DAT_112f5b8c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103357d78; end: 103357d83; -[SCLensTalkMultiplayerURIHandlerEntryPoint callUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357d78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b8d0;
  func_0x000107c61428(param_1 + _DAT_112f5b8d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103357d84; end: 103357d8f; -[SCLensTalkMultiplayerURIHandlerEntryPoint setCallUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b8d0;
  func_0x000107c61428(param_1 + _DAT_112f5b8d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103357d90; end: 103357d9b; -[SCLensTalkMultiplayerURIHandlerEntryPoint lensGamesRPCServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357d90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b8d8;
  func_0x000107c61428(param_1 + _DAT_112f5b8d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103357d9c; end: 103357da7; -[SCLensTalkMultiplayerURIHandlerEntryPoint setLensGamesRPCServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b8d8;
  func_0x000107c61428(param_1 + _DAT_112f5b8d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103357da8; end: 103357db3; -[SCLensTalkMultiplayerURIHandlerEntryPoint connectedLensInTalkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357da8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b8e0;
  func_0x000107c61428(param_1 + _DAT_112f5b8e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103357db4; end: 103357dbf; -[SCLensTalkMultiplayerURIHandlerEntryPoint setConnectedLensInTalkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b8e0;
  func_0x000107c61428(param_1 + _DAT_112f5b8e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103357dc0; end: 103357dcb; -[SCLensTalkMultiplayerURIHandlerEntryPoint snapTokenServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357dc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b8e8;
  func_0x000107c61428(param_1 + _DAT_112f5b8e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103357dcc; end: 103357dd7; -[SCLensTalkMultiplayerURIHandlerEntryPoint setSnapTokenServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b8e8;
  func_0x000107c61428(param_1 + _DAT_112f5b8e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103357dd8; end: 103357de3; -[SCLensTalkMultiplayerURIHandlerEntryPoint lensProcessingCarouselServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357dd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b8f0;
  func_0x000107c61428(param_1 + _DAT_112f5b8f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103357de4; end: 103357def; -[SCLensTalkMultiplayerURIHandlerEntryPoint setLensProcessingCarouselServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b8f0;
  func_0x000107c61428(param_1 + _DAT_112f5b8f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103357df0; end: 103357dfb; -[SCLensTalkMultiplayerURIHandlerEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357df0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5b8f8;
  func_0x000107c61428(param_1 + _DAT_112f5b8f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103357dfc; end: 103357e3f;  */

void FUN_103357dfc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103357e40; end: 103357e4b; -[SCLensTalkMultiplayerURIHandlerEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103357e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5b8f8;
  func_0x000107c61428(param_1 + _DAT_112f5b8f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103357e4c; end: 103357e9f;  */

void FUN_103357e4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



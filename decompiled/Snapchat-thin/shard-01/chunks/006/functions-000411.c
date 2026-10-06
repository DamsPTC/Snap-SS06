/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101278194; end: 1012781ff; -[SCProfile3SectionSlot initWithOrder:section:provider:] */

undefined8
FUN_101278194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  FUN_1012782ac(param_3,param_4,param_5);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  return param_3;
}



/* Entry: 101278200; end: 10127825f; -[SCProfile3SectionSlot init] */

void FUN_101278200(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyProfile3Implementation.SCProfile3SectionSlot",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10127822c);
  (*pcVar1)();
}



/* Entry: 101278260; end: 1012782ab; -[SCProfile3SectionSlot .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101278260(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6cd48));
  FUN_101278398(param_1 + _DAT_112d6cd30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112d6cd38 + 0x20));
  return;
}



/* Entry: 1012782ac; end: 101278397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012782ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112d6cd30;
  func_0x000107c61614(unaff_x20 + _DAT_112d6cd30,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d6cd38);
  uVar4 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar6 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd48) = param_2;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  func_0x000107c61154(&stack0xffffffffffffff98,puVar2);
  return;
}



/* Entry: 101278398; end: 1012783bb;  */

undefined8 FUN_101278398(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1012783bc; end: 1012783db;  */

void FUN_1012783bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c0938);
  return;
}



/* Entry: 1012783dc; end: 101278407;  */

long FUN_1012783dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101278408; end: 10127840f;  */

void FUN_101278408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 101278410; end: 10127845b;  */

undefined8 * FUN_101278410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10127845c; end: 1012784ef;  */

undefined8 * FUN_10127845c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 1012784f0; end: 101278543;  */

undefined8 * FUN_1012784f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 101278544; end: 1012785ef;  */

int FUN_101278544(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1012785f0; end: 10127863f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012785f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000101279260();
  lVar1 = _DAT_112d6cd78;
  if (*(long *)(unaff_x20 + _DAT_112d6cd78) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c4ff34(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d6cd78) + _DAT_112d6cad0));
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101278640; end: 101278bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101278640(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  lVar1 = _DAT_112d6cd78;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d6cd78);
  if (lVar3 != 0) {
    if (param_1 == lVar3) {
      return;
    }
    func_0x000107c61174();
    FUN_10127a6d8();
    FUN_10127a6d8();
    func_0x000107c4ff34(*(undefined8 *)(lVar3 + _DAT_112d6cad0));
    func_0x000107c61170(lVar3);
  }
  uVar15 = *(undefined8 *)(param_1 + _DAT_112d6cad0);
  uVar13 = unaff_x20;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_10127a2b0(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = uVar13;
  func_0x000107c5fc54(uVar13,uVar4);
  func_0x000107c61170(uVar13);
  if (uVar5 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar13 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar13 != 0) {
    if ((long)uVar13 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101278adc);
      (*pcVar2)();
    }
    uVar14 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar14;
        func_0x000100f040d0(uVar14,uVar5);
      }
      puVar7 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
      func_0x000107c61168(PTR__OBJC_CLASS___UICollectionView_1126afd20);
      uVar8 = uVar6;
      func_0x000107c6148c(uVar6,puVar7);
      if (uVar8 != 0) {
        FUN_10127a2b0(0,0x112d6cd90,&PTR__OBJC_CLASS___UICollectionView_1126afd20);
        uVar9 = uVar8;
        func_0x000107c60118(uVar8,uVar15);
        if ((uVar9 & 1) == 0) {
          func_0x000107c4ff34(uVar8);
        }
      }
      uVar14 = uVar14 + 1;
      func_0x000107c61170(uVar6);
    } while (uVar13 != uVar14);
  }
  func_0x000107c6142c(uVar5);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_1);
  func_0x000101279260();
  func_0x000107c5a050(uVar15);
  func_0x000107c3d89c(unaff_x20);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar10 = puVar7;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar10 + 0x18) = 9;
  *(undefined8 *)(puVar10 + 0x10) = 4;
  uVar4 = uVar15;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar13 = unaff_x20;
  func_0x000107c5cbe4(unaff_x20);
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar10 + 0x20) = uVar11;
  uVar4 = uVar15;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar13 = unaff_x20;
  func_0x000107c4acb0(unaff_x20);
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar10 + 0x28) = uVar11;
  uVar4 = uVar15;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar13 = unaff_x20;
  func_0x000107c5ce8c(unaff_x20);
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar10 + 0x30) = uVar11;
  uVar4 = uVar15;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar13 = unaff_x20;
  func_0x000107c3ec1c(unaff_x20);
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar10 + 0x38) = uVar11;
  uVar4 = 0;
  FUN_10127a2b0(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar12 = puVar10;
  func_0x000107c5fc48(puVar10,uVar4);
  func_0x000107c61574(puVar10);
  func_0x000107c3d048(puVar7);
  func_0x000107c61170(puVar12);
  puVar7 = &UNK_11039a938;
  puVar10 = puVar7;
  func_0x000107c613fc(&UNK_11039a938,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,unaff_x20);
  func_0x000107c6157c(puVar10);
  FUN_10127a730(uVar15,FUN_10127a260,puVar10);
  func_0x000107c61578(puVar10,2);
  func_0x000107c613fc(&UNK_11039a938,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
  func_0x000107c6157c(puVar7);
  FUN_10127a730(uVar15,0x10127a278,puVar7);
  func_0x000107c61578(puVar7,2);
  return;
}



/* Entry: 101278c00; end: 101278c67; -[_TtC24MyProfile3ImplementationP33_9D64D2DEBD095E5B3237409F7A0F27AF47SCProfile3UIControlTapFallbackGestureRecognizer initWithTarget:action:] */

void FUN_101278c00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  func_0x000101278adc(&uStack_50,param_4);
  return;
}



/* Entry: 101278c68; end: 101278ca3; -[_TtC24MyProfile3ImplementationP33_9D64D2DEBD095E5B3237409F7A0F27AF29SCProfile3TapFallbackDelegate gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

bool FUN_101278c68(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x000107c6148c(in_x3,puVar1);
  return in_x3 == 0;
}



/* Entry: 101278ca4; end: 101278cdf; -[_TtC24MyProfile3ImplementationP33_9D64D2DEBD095E5B3237409F7A0F27AF29SCProfile3TapFallbackDelegate init] */

void FUN_101278ca4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101278ce0; end: 101278d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101278ce0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d6cdd0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6cdd0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_10127a628();
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c61180();
    func_0x000107c5317c();
    func_0x000107c53fc8(lVar2,param_2,0);
    func_0x000107c53fcc(lVar2,param_2,*(undefined8 *)(unaff_x20 + _DAT_112d6cdc8));
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 101278d98; end: 101278fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101278d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd98) = 0;
  lVar1 = _DAT_112d6cda0;
  lVar2 = 0;
  func_0x00010127ac8c();
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(long *)(unaff_x20 + lVar1) = lVar2;
  lVar1 = _DAT_112d6cd80;
  lVar4 = 0;
  FUN_10127a928();
  lVar2 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0x3fb999999999999a;
  *(long *)(unaff_x20 + lVar1) = lVar2;
  lVar1 = _DAT_112d6cd88;
  func_0x000107c613fc(lVar4,0x38,7);
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0x3fb999999999999a;
  *(long *)(unaff_x20 + lVar1) = lVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112d6cda8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdc0) = 0;
  lVar1 = _DAT_112d6cdc8;
  uVar3 = 0;
  func_0x00010127a290();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdd0) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010d92f930);
  func_0x000107c520f4(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  FUN_101278ce0();
  func_0x000107c3d6fc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 101278fb4; end: 101278fd3; -[SCProfile3ContentAdapterView initWithFrame:] */

void FUN_101278fb4(void)

{
  FUN_101278d98();
  return;
}



/* Entry: 101278fd4; end: 1012791df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101278fd4(undefined1 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd98) = 0;
  lVar1 = _DAT_112d6cda0;
  lVar2 = 0;
  func_0x00010127ac8c();
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(long *)(unaff_x20 + lVar1) = lVar2;
  lVar1 = _DAT_112d6cd80;
  lVar4 = 0;
  FUN_10127a928();
  lVar2 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0x3fb999999999999a;
  *(long *)(unaff_x20 + lVar1) = lVar2;
  lVar1 = _DAT_112d6cd88;
  func_0x000107c613fc(lVar4,0x38,7);
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0x3fb999999999999a;
  *(long *)(unaff_x20 + lVar1) = lVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112d6cda8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdb8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cd78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdc0) = 0;
  lVar1 = _DAT_112d6cdc8;
  uVar3 = 0;
  func_0x00010127a290();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6cdd0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  puVar6 = param_1;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c61174();
    uVar3 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010d92f930);
    func_0x000107c520f4(puVar6);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar3);
    FUN_101278ce0();
    func_0x000107c3d6fc(puVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1012791e0; end: 101279207; -[SCProfile3ContentAdapterView initWithCoder:] */

void FUN_1012791e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101278fd4();
  return;
}



/* Entry: 101279208; end: 101279317; -[SCProfile3ContentAdapterView handleFallbackTap:] */

/* WARNING: Possible PIC construction at 0x000101279248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010127924c) */

void FUN_101279208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c4b8b8(param_3,param_2,param_1);
  FUN_10127a30c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101279318; end: 1012795cb;  */

/* WARNING: Possible PIC construction at 0x000101279418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012795a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010127941c) */
/* WARNING: Removing unreachable block (ram,0x00010127943c) */
/* WARNING: Removing unreachable block (ram,0x00010127945c) */
/* WARNING: Removing unreachable block (ram,0x000101279468) */
/* WARNING: Removing unreachable block (ram,0x0001012795a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101279318(double param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112d6cdc0;
  dVar7 = ABS(param_1);
  if (((dVar7 != INFINITY &&
       ((ulong)dVar7 < 0x7ff0000000000000 &&
       (-1 < (long)param_1 || 0xffffffffffffe < (long)dVar7 - 1U))) &&
       (-1 < (long)param_1 || 0x3fe < (long)dVar7 + 0xfff0000000000000U >> 0x35)) &&
     (param_1 <= 100000.0)) {
    if (((*(char *)(unaff_x20 + _DAT_112d6cda8) != '\x01') ||
        (*(double *)(unaff_x20 + _DAT_112d6cdb0) + -1.0 <= param_1)) ||
       ((*(long *)(unaff_x20 + _DAT_112d6cd78) != 0 &&
        ((*(byte *)(*(long *)(unaff_x20 + _DAT_112d6cd78) + _DAT_1137ff2f0) & 1) != 0)))) {
      puVar3 = (undefined *)0x0;
      if (*(long *)(unaff_x20 + _DAT_112d6cdc0) != 0) {
        func_0x000107c498f8();
        puVar3 = *(undefined **)(unaff_x20 + lVar1);
      }
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
    }
    else {
      if (*(long *)(unaff_x20 + _DAT_112d6cdc0) != 0) {
        func_0x000107c498f8();
      }
      puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSTimer_1126af1b0);
      puVar3 = &UNK_11039a938;
      func_0x000107c613fc(&UNK_11039a938,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar5 = &UNK_11039a988;
      func_0x000107c613fc(&UNK_11039a988,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar3;
      *(long *)(puVar5 + 0x18) = lVar2;
      pcStack_60 = FUN_10127a668;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_100fef460;
      puStack_68 = &UNK_11039a9a0;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c51924(0x3fe0000000000000,puVar4);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      func_0x000107c4c190();
      func_0x000107c61180();
      func_0x000107c3d8e0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1012795cc; end: 10127961b; -[SCProfile3ContentAdapterView attachLightweightBridge:] */

/* WARNING: Possible PIC construction at 0x000101279604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101279608) */

void FUN_1012795cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101278640(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10127961c; end: 101279783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127961c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  lVar5 = _DAT_112d6cd98;
  func_0x000107c61428(unaff_x20 + _DAT_112d6cd98,auStack_88,0,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (lVar5 != 0) {
    lVar2 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = 0;
    FUN_10127a2b0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar2 + 0x38) = uVar3;
    *(undefined **)(lVar2 + 0x20) = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c615f0(lVar5);
    lVar4 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar2);
    lVar2 = lVar5;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      func_0x000107c60234(&uStack_70,lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar1);
      goto LAB_101279760;
    }
  }
  func_0x000107c61170(puVar1);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
LAB_101279760:
  func_0x00010006e7f4(&uStack_70);
  return;
}



/* Entry: 101279784; end: 1012797bb; -[SCProfile3ContentAdapterView notifyContentHeightUpdate:] */

void FUN_101279784(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_10127961c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1012797bc; end: 1012798bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012797bc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6cd98;
  func_0x000107c61428(unaff_x20 + _DAT_112d6cd98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615e8(uVar2);
  func_0x000107c615f0(param_1);
  pcVar3 = "composer_applyContext(_:)";
  func_0x0001000c10c0("composer_applyContext(_:)");
  func_0x000107c61180();
  puVar4 = &UNK_11039a938;
  func_0x000107c613fc(&UNK_11039a938,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uStack_58 = 0x10127a6d4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_11039a950;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1012798bc; end: 101279903; -[SCProfile3ContentAdapterView composer_applyContext:] */

void FUN_1012798bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1012797bc(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101279904; end: 101279a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101279904(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1;
  func_0x00010127a648();
  lVar2 = param_1;
  func_0x000107c61480(param_1,lVar1);
  lVar1 = _DAT_112d6cd98;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112d6cd98,auStack_58,1,0);
    uVar6 = *(undefined8 *)(lVar2 + lVar1);
    *(undefined8 *)(lVar2 + lVar1) = param_2;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c615e8(uVar6);
    pcVar3 = "bindAttributes(_:)";
    func_0x0001000c10c0("bindAttributes(_:)");
    func_0x000107c61180();
    puVar4 = &UNK_11039a938;
    func_0x000107c613fc(&UNK_11039a938,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar2);
    pcStack_68 = FUN_10127a670;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_11039aa18;
    ppuVar5 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 101279a40; end: 101279ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101279a40(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112d6cda8) == '\x01') {
      FUN_10127961c(*(undefined8 *)(param_1 + _DAT_112d6cdb0));
    }
    FUN_101279c30();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101279ab8; end: 101279b2b;  */

void FUN_101279ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 101279b2c; end: 101279bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101279b2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x00010127a648();
  lVar2 = param_1;
  func_0x000107c61480(param_1,lVar1);
  lVar1 = _DAT_112d6cd98;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112d6cd98,auStack_48,1,0);
    uVar3 = *(undefined8 *)(lVar2 + lVar1);
    *(undefined8 *)(lVar2 + lVar1) = 0;
    func_0x000107c61174(param_1);
    func_0x000107c615e8(uVar3);
    func_0x000101279260();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101279c00; end: 101279c2f; +[SCProfile3ContentAdapterView bindAttributes:] */

void FUN_101279c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  FUN_10127a530(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 101279c30; end: 101279f7b;  */

/* WARNING: Possible PIC construction at 0x000101279d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101279d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101279418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012795a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010127941c) */
/* WARNING: Removing unreachable block (ram,0x00010127943c) */
/* WARNING: Removing unreachable block (ram,0x00010127945c) */
/* WARNING: Removing unreachable block (ram,0x000101279468) */
/* WARNING: Removing unreachable block (ram,0x000101279d60) */
/* WARNING: Removing unreachable block (ram,0x000101279d38) */
/* WARNING: Removing unreachable block (ram,0x0001012795a4) */
/* WARNING: Removing unreachable block (ram,0x000101279388) */
/* WARNING: Removing unreachable block (ram,0x000101279378) */
/* WARNING: Removing unreachable block (ram,0x000101279374) */
/* WARNING: Removing unreachable block (ram,0x000101279384) */
/* WARNING: Removing unreachable block (ram,0x0001012795b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101279c30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112d6cd78);
  if (lVar7 == 0) {
    FUN_10127a6d8(*(undefined8 *)(unaff_x20 + _DAT_112d6cd80));
    ppuVar5 = &puStack_80;
    lVar1 = unaff_x20;
    func_0x000107c614f0();
    lVar7 = _DAT_112d6cdc0;
    if (((*(char *)(unaff_x20 + _DAT_112d6cda8) != '\x01') ||
        (*(double *)(unaff_x20 + _DAT_112d6cdb0) + -1.0 <= 0.0)) ||
       ((*(long *)(unaff_x20 + _DAT_112d6cd78) != 0 &&
        ((*(byte *)(*(long *)(unaff_x20 + _DAT_112d6cd78) + _DAT_1137ff2f0) & 1) != 0)))) {
      puVar2 = (undefined *)0x0;
      if (*(long *)(unaff_x20 + _DAT_112d6cdc0) != 0) {
        func_0x000107c498f8();
        puVar2 = *(undefined **)(unaff_x20 + lVar7);
      }
      *(undefined8 *)(unaff_x20 + lVar7) = 0;
    }
    else {
      if (*(long *)(unaff_x20 + _DAT_112d6cdc0) != 0) {
        func_0x000107c498f8();
      }
      puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSTimer_1126af1b0);
      puVar4 = &UNK_11039a938;
      func_0x000107c613fc(&UNK_11039a938,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,unaff_x20);
      puVar2 = &UNK_11039a988;
      func_0x000107c613fc(&UNK_11039a988,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar4;
      *(long *)(puVar2 + 0x18) = lVar1;
      pcStack_60 = FUN_10127a668;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_100fef460;
      puStack_68 = &UNK_11039a9a0;
      puStack_58 = puVar2;
      func_0x000107c60bc4(&puStack_80);
      func_0x000107c61574(puStack_58);
      func_0x000107c51924(0x3fe0000000000000,puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      func_0x000107c4c190();
      func_0x000107c61180();
      func_0x000107c3d8e0();
    }
  }
  else {
    puVar6 = *(undefined **)(lVar7 + _DAT_112d6cad0);
    puVar4 = &UNK_11039a938;
    puVar3 = puVar4;
    func_0x000107c613fc(&UNK_11039a938,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar2 = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c61174();
    func_0x000107c61174(lVar7);
    func_0x000107c6157c(puVar3);
    FUN_10127a730(puVar6,0x10127a6c4,puVar3);
    func_0x000107c61578(puVar3,2);
    func_0x000107c613fc(&UNK_11039a938,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x000107c6157c(puVar4);
    FUN_10127a730(puVar6,0x10127a6c8,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101279f7c; end: 101279fa3; -[SCProfile3ContentAdapterView layoutSubviews] */

void FUN_101279f7c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101279db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101279fa4; end: 10127a007;  */

void FUN_101279fa4(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101279318(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10127a008; end: 10127a05b;  */

void FUN_10127a008(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c56a14();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10127a05c; end: 10127a083; -[SCProfile3ContentAdapterView prepareForTeardown] */

void FUN_10127a05c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012785f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10127a084; end: 10127a18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127a084(undefined8 param_1,double param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [24];
  
  puVar6 = auStack_48;
  func_0x000107c61428(param_4 + 0x10,puVar6,0,0);
  uVar5 = (uint)puVar6;
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    lVar2 = *(long *)(param_4 + _DAT_112d6cd78);
    lVar7 = param_4;
    if (lVar2 != 0) {
      uVar8 = *(undefined8 *)(param_4 + _DAT_112d6cdc0);
      *(undefined8 *)(param_4 + _DAT_112d6cdc0) = 0;
      func_0x000107c61174();
      func_0x000107c61170(uVar8);
      lVar3 = *(long *)(lVar2 + _DAT_112d6cad0);
      func_0x000107c404f0();
      lVar1 = _DAT_112d6cdb0;
      lVar4 = param_4;
      lVar7 = lVar2;
      if ((param_2 < *(double *)(param_4 + _DAT_112d6cdb0) + -1.0) &&
         (FUN_10127ab78(param_2), lVar4 = lVar2, lVar7 = param_4, (uVar5 & 0xff) != 1)) {
        *(undefined1 *)(param_4 + _DAT_112d6cda8) = 1;
        *(double *)(param_4 + lVar1) = (double)lVar3;
        FUN_10127961c();
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 10127a190; end: 10127a193;  */

void FUN_10127a190(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10127a194; end: 10127a1c7;  */

void FUN_10127a194(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10127a1c8; end: 10127a25f; -[SCProfile3ContentAdapterView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010127a224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127a244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010127a228) */
/* WARNING: Removing unreachable block (ram,0x00010127a248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127a1c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6cd98));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6cda0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6cd80));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d6cd88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6cd78));
  return;
}



/* Entry: 10127a260; end: 10127a2af;  */

void FUN_10127a260(void)

{
  FUN_101279fa4();
  return;
}



/* Entry: 10127a2b0; end: 10127a2ef;  */

void FUN_10127a2b0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10127a2f0; end: 10127a30b;  */

void FUN_10127a2f0(long param_1,long param_2)

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



/* Entry: 10127a30c; end: 10127a52f;  */

undefined4 FUN_10127a30c(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  func_0x000107c44ec4();
  func_0x000107c61180();
  if (unaff_x20 == (undefined1 *)0x0) {
    uVar6 = 5;
  }
  else {
    func_0x000107c61614(auStack_48);
    func_0x000107c61428(auStack_48,auStack_60,0,0);
    func_0x000107c61174();
    func_0x000107c61174();
    puVar1 = PTR__OBJC_CLASS___UIControl_1126c3e60;
    func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
    puVar2 = unaff_x20;
    func_0x000107c6148c(unaff_x20,puVar1);
    puVar3 = unaff_x20;
    while (puVar2 == (undefined1 *)0x0) {
      func_0x000107c61170(puVar3);
      puVar2 = auStack_48;
      func_0x000107c61618();
      if ((puVar2 != (undefined1 *)0x0) && (func_0x000107c61170(), puVar2 == puVar3)) {
        func_0x000107c61170(puVar3);
LAB_10127a504:
        func_0x000107c61610(auStack_48);
        func_0x000107c61170(unaff_x20);
        return 4;
      }
      puVar5 = puVar3;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61174();
      func_0x000107c61170(puVar3);
      if (puVar5 == (undefined1 *)0x0) goto LAB_10127a504;
      puVar1 = PTR__OBJC_CLASS___UIControl_1126c3e60;
      func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
      puVar2 = puVar5;
      func_0x000107c6148c(puVar5,puVar1);
      puVar3 = puVar5;
    }
    func_0x000107c61174(puVar3);
    func_0x000107c3cf00(puVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    puVar5 = puVar2;
    func_0x000107c3db24();
    puVar4 = puVar2;
    func_0x000107c49cd8();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107c61610(auStack_48);
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      uVar6 = 3;
    }
    else if (((ulong)puVar5 & 0x2040) == 0) {
      func_0x000107c61610(auStack_48);
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      uVar6 = 1;
      if (puVar5 != (undefined1 *)0x0) {
        uVar6 = 2;
      }
    }
    else {
      func_0x000107c51d9c(puVar2);
      func_0x000107c3f4f4(puVar2);
      func_0x000107c61610(auStack_48);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(unaff_x20);
      uVar6 = 0;
    }
  }
  return uVar6;
}



/* Entry: 10127a530; end: 10127a627;  */

void FUN_10127a530(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar4 = &puStack_70;
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef32330);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_50 = FUN_101279904;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101279ab8;
  puStack_58 = &UNK_11039a9c8;
  func_0x000107c60bc4(&puStack_70);
  pcStack_50 = FUN_101279b2c;
  uStack_48 = 0;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  pcStack_60 = (code *)0x10127a6c0;
  puStack_58 = &UNK_11039a9f0;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c3e908(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10127a628; end: 10127a667;  */

void FUN_10127a628(void)

{
  func_0x000107c61168(&PTR_PTR_1127c0a10);
  return;
}



/* Entry: 10127a668; end: 10127a66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127a668(undefined8 param_1,double param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar7 = auStack_48;
  func_0x000107c61428(lVar2 + 0x10,puVar7,0,0);
  uVar6 = (uint)puVar7;
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112d6cd78);
    lVar8 = lVar2;
    if (lVar3 != 0) {
      uVar9 = *(undefined8 *)(lVar2 + _DAT_112d6cdc0);
      *(undefined8 *)(lVar2 + _DAT_112d6cdc0) = 0;
      func_0x000107c61174();
      func_0x000107c61170(uVar9);
      lVar4 = *(long *)(lVar3 + _DAT_112d6cad0);
      func_0x000107c404f0();
      lVar1 = _DAT_112d6cdb0;
      lVar5 = lVar2;
      lVar8 = lVar3;
      if ((param_2 < *(double *)(lVar2 + _DAT_112d6cdb0) + -1.0) &&
         (FUN_10127ab78(param_2), lVar5 = lVar3, lVar8 = lVar2, (uVar6 & 0xff) != 1)) {
        *(undefined1 *)(lVar2 + _DAT_112d6cda8) = 1;
        *(double *)(lVar2 + lVar1) = (double)lVar4;
        FUN_10127961c();
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 10127a670; end: 10127a69f;  */

void FUN_10127a670(void)

{
  FUN_101279a40();
  return;
}



/* Entry: 10127a6a0; end: 10127a6d7;  */

void FUN_10127a6a0(long param_1,long param_2)

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



/* Entry: 10127a6d8; end: 10127a72f;  */

void FUN_10127a6d8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c5ed04();
    func_0x000107c61170(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10127a730; end: 10127a8cb;  */

/* WARNING: Possible PIC construction at 0x00010127a780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127a89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127a7f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127a7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010127a7fc) */
/* WARNING: Removing unreachable block (ram,0x00010127a8a0) */
/* WARNING: Removing unreachable block (ram,0x00010127a784) */
/* WARNING: Removing unreachable block (ram,0x00010127a808) */
/* WARNING: Removing unreachable block (ram,0x00010127a7c0) */
/* WARNING: Removing unreachable block (ram,0x00010127a6d8) */
/* WARNING: Removing unreachable block (ram,0x00010127a6fc) */
/* WARNING: Removing unreachable block (ram,0x00010127a714) */
/* WARNING: Removing unreachable block (ram,0x00010127a948) */
/* WARNING: Removing unreachable block (ram,0x00010127a954) */
/* WARNING: Removing unreachable block (ram,0x00010127a94c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10127a730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  FUN_10127a948(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 10127a8cc; end: 10127a927;  */

void FUN_10127a8cc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5ed04();
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10127a948(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10127a928; end: 10127a947;  */

void FUN_10127a928(void)

{
  func_0x000107c61168(&PTR_PTR_112d6ce90);
  return;
}



/* Entry: 10127a948; end: 10127a963;  */

void FUN_10127a948(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 10127a964; end: 10127ab17;  */

void FUN_10127a964(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_a8;
  double dStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar2 = 0x112d6cf08;
    func_0x0001000285a8(0x112d6cf08,&UNK_10d92fa38);
    func_0x000107c5ed48(&puStack_a8);
    puVar4 = (undefined *)0x0;
    if ((char)puStack_98 != '\x01') {
      puVar4 = puStack_a8;
    }
    dVar8 = 0.0;
    if ((char)puStack_98 != '\x01') {
      dVar8 = dStack_a0;
    }
    func_0x000107c5ed44(&puStack_a8,uVar2);
    puVar6 = (undefined *)0x0;
    if ((char)puStack_98 != '\x01') {
      puVar6 = puStack_a8;
    }
    dVar7 = 0.0;
    if ((char)puStack_98 != '\x01') {
      dVar7 = dStack_a0;
    }
    if ((0.1 < ABS((double)puVar4 - (double)puVar6)) || (0.1 < ABS(dVar8 - dVar7))) {
      uVar2 = *(undefined8 *)(param_3 + 0x28);
      uVar1 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010127ab20(uVar2,uVar1);
      pcVar3 = "observe(collectionView:onHeightChange:)";
      func_0x0001000c10c0("observe(collectionView:onHeightChange:)");
      func_0x000107c61180();
      puVar4 = &UNK_11039aa78;
      func_0x000107c613fc(&UNK_11039aa78,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar2;
      *(undefined8 *)(puVar4 + 0x18) = uVar1;
      *(double *)(puVar4 + 0x20) = dVar7;
      pcStack_88 = FUN_10127ab30;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      dStack_a0 = 5.47077039858234e-315;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11039aa90;
      ppuVar5 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_80;
      func_0x00010127ab20(uVar2,uVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(pcVar3);
      FUN_10127a948(uVar2,uVar1);
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10127ab18; end: 10127ab2f;  */

void FUN_10127ab18(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_a8;
  double dStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = 0x112d6cf08;
    func_0x0001000285a8(0x112d6cf08,&UNK_10d92fa38);
    func_0x000107c5ed48(&puStack_a8);
    puVar5 = (undefined *)0x0;
    if ((char)puStack_98 != '\x01') {
      puVar5 = puStack_a8;
    }
    dVar9 = 0.0;
    if ((char)puStack_98 != '\x01') {
      dVar9 = dStack_a0;
    }
    func_0x000107c5ed44(&puStack_a8,uVar3);
    puVar7 = (undefined *)0x0;
    if ((char)puStack_98 != '\x01') {
      puVar7 = puStack_a8;
    }
    dVar8 = 0.0;
    if ((char)puStack_98 != '\x01') {
      dVar8 = dStack_a0;
    }
    if ((0.1 < ABS((double)puVar5 - (double)puVar7)) || (0.1 < ABS(dVar9 - dVar8))) {
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      uVar1 = *(undefined8 *)(lVar2 + 0x30);
      func_0x00010127ab20(uVar3,uVar1);
      pcVar4 = "observe(collectionView:onHeightChange:)";
      func_0x0001000c10c0("observe(collectionView:onHeightChange:)");
      func_0x000107c61180();
      puVar5 = &UNK_11039aa78;
      func_0x000107c613fc(&UNK_11039aa78,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar3;
      *(undefined8 *)(puVar5 + 0x18) = uVar1;
      *(double *)(puVar5 + 0x20) = dVar8;
      pcStack_88 = FUN_10127ab30;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      dStack_a0 = 5.47077039858234e-315;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11039aa90;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar5 = puStack_80;
      func_0x00010127ab20(uVar3,uVar1);
      func_0x000107c61574(puVar5);
      func_0x000107c4e524(pcVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(pcVar4);
      FUN_10127a948(uVar3,uVar1);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10127ab30; end: 10127ab5b;  */

void FUN_10127ab30(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20));
  }
  return;
}



/* Entry: 10127ab5c; end: 10127ab77;  */

void FUN_10127ab5c(long param_1,long param_2)

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



/* Entry: 10127ab78; end: 10127ac57;  */

undefined1  [16] FUN_10127ab78(double param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_40;
  byte bStack_38;
  
  if (((ulong)param_1 < 0x8000000000000000 &&
       (long)ABS(param_1) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
      (long)param_1 - 1U < 0xfffffffffffff) || ABS(param_1) == 0.0) {
    dVar4 = (double)(long)param_1;
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10127ac54);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10127ac58);
      (*pcVar1)();
    }
    lStack_50 = (long)dVar4;
    uVar2 = 0x112d4f4d0;
    func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
    func_0x000100087bd4(&uStack_40,FUN_10127acac,auStack_60,uVar2);
    uVar3 = (ulong)bStack_38;
  }
  else {
    uStack_40 = 0;
    uVar3 = 1;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uStack_40;
  return auVar5;
}



/* Entry: 10127ac58; end: 10127ac67;  */

void FUN_10127ac58(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10127ac68; end: 10127acab;  */

void FUN_10127ac68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10127acac; end: 10127aceb;  */

void FUN_10127acac(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if ((*(char *)(lVar1 + 0x20) == '\x01') || (lVar2 != *(long *)(lVar1 + 0x18))) {
    uVar3 = 0;
    *(long *)(lVar1 + 0x18) = lVar2;
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar3 = 1;
  }
  *param_1 = lVar2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}



/* Entry: 10127acec; end: 10127acf3; -[_TtC45PublicProfileManagementContextServiceProvider45DefaultPublicProfileManagementContextProvider makeLivePublicStoryStateObserver] */

void FUN_10127acec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10127acf4; end: 10127acfb; -[_TtC45PublicProfileManagementContextServiceProvider45DefaultPublicProfileManagementContextProvider providePublicProfileManagementContextWithViewController:businessProfileAndUserData:stronglyHeldNotificationSettingsActionHandler:publicProfileManagementScopeDelegate:activityFeedPresenter:communityPillContext:] */

void FUN_10127acf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10127acfc; end: 10127ad03; -[_TtC45PublicProfileManagementContextServiceProvider45DefaultPublicProfileManagementContextProvider providePublicProfileManagementViewModelWithBusinessProfileAndUserData:notificationId:routeName:defaultTab:deeplinkURL:deeplinkHandlingId:deeplinkAction:deeplinkAdId:deeplinkSnapId:deeplinkSnapContentType:] */

void FUN_10127acfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10127ad04; end: 10127ad3f; -[_TtC45PublicProfileManagementContextServiceProvider45DefaultPublicProfileManagementContextProvider init] */

void FUN_10127ad04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10127ad40; end: 10127ad93;  */

void FUN_10127ad40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10127ad94; end: 10127d047;  */

long FUN_10127ad94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0xe8,0);
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_22;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  *(undefined8 *)(unaff_x20 + 200) = param_24;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_23;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_26;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_25;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_27;
  func_0x000107c61604(unaff_x20 + 0xe8,param_28);
  func_0x000107c61170(param_28);
  *(undefined8 *)(unaff_x20 + 0xf8) = param_30;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_29;
  *(undefined8 *)(unaff_x20 + 0x108) = param_32;
  *(undefined8 *)(unaff_x20 + 0x100) = param_31;
  *(undefined8 *)(unaff_x20 + 0x118) = param_34;
  *(undefined8 *)(unaff_x20 + 0x110) = param_33;
  *(undefined8 *)(unaff_x20 + 0x128) = param_36;
  *(undefined8 *)(unaff_x20 + 0x120) = param_35;
  *(undefined8 *)(unaff_x20 + 0x138) = param_38;
  *(undefined8 *)(unaff_x20 + 0x130) = param_37;
  *(undefined8 *)(unaff_x20 + 0x148) = param_40;
  *(undefined8 *)(unaff_x20 + 0x140) = param_39;
  *(undefined8 *)(unaff_x20 + 0x158) = param_42;
  *(undefined8 *)(unaff_x20 + 0x150) = param_41;
  *(undefined8 *)(unaff_x20 + 0x168) = param_44;
  *(undefined8 *)(unaff_x20 + 0x160) = param_43;
  *(undefined8 *)(unaff_x20 + 0x178) = param_46;
  *(undefined8 *)(unaff_x20 + 0x170) = param_45;
  *(undefined8 *)(unaff_x20 + 0x188) = param_48;
  *(undefined8 *)(unaff_x20 + 0x180) = param_47;
  *(undefined8 *)(unaff_x20 + 0x198) = param_50;
  *(undefined8 *)(unaff_x20 + 400) = param_49;
  *(undefined8 *)(unaff_x20 + 0x1a8) = param_52;
  *(undefined8 *)(unaff_x20 + 0x1a0) = param_51;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_54;
  *(undefined8 *)(unaff_x20 + 0x1b0) = param_53;
  *(undefined8 *)(unaff_x20 + 0x1c8) = param_56;
  *(undefined8 *)(unaff_x20 + 0x1c0) = param_55;
  *(undefined8 *)(unaff_x20 + 0x1d8) = param_58;
  *(undefined8 *)(unaff_x20 + 0x1d0) = param_57;
  *(undefined8 *)(unaff_x20 + 0x1e8) = param_60;
  *(undefined8 *)(unaff_x20 + 0x1e0) = param_59;
  *(undefined8 *)(unaff_x20 + 0x1f0) = param_61;
  return unaff_x20;
}



/* Entry: 10127d048; end: 10127d2a3;  */

void FUN_10127d048(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61610(unaff_x20 + 0xe8);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  FUN_10127d590(*(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230),
                *(undefined8 *)(unaff_x20 + 0x238),*(undefined8 *)(unaff_x20 + 0x240),
                *(undefined8 *)(unaff_x20 + 0x248),*(undefined8 *)(unaff_x20 + 0x250));
  return;
}



/* Entry: 10127d2a4; end: 10127d2eb;  */

undefined8 FUN_10127d2a4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d6cfe0;
  func_0x0001000285a8(0x112d6cfe0,&UNK_10d92fad0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10127d2ec; end: 10127d2ef;  */

void FUN_10127d2ec(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 10127d2f0; end: 10127d323;  */

void FUN_10127d2f0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 10127d324; end: 10127d33f;  */

void FUN_10127d324(long param_1,long param_2)

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



/* Entry: 10127d340; end: 10127d54f;  */

void FUN_10127d340(void)

{
  undefined8 in_stack_00000110;
  
  func_0x000107c614e8(in_stack_00000110);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bff3890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10127d550; end: 10127d58f;  */

void FUN_10127d550(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10127d590; end: 10127d65b;  */

/* WARNING: Possible PIC construction at 0x00010127d600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127d610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127d620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127d630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010127d624) */
/* WARNING: Removing unreachable block (ram,0x00010127d614) */
/* WARNING: Removing unreachable block (ram,0x00010127d604) */
/* WARNING: Removing unreachable block (ram,0x00010127d634) */

void FUN_10127d590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  if (param_1 != 0) {
    func_0x000107c61170();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_9);
    return;
  }
  return;
}



/* Entry: 10127d65c; end: 10127d67b;  */

void FUN_10127d65c(void)

{
  func_0x000107c61168(&PTR_PTR_112d6d040);
  return;
}



/* Entry: 10127d67c; end: 10127d71f;  */

long FUN_10127d67c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10127d720; end: 10127d7f7;  */

undefined8 * FUN_10127d720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar1 = param_2[2];
  uVar7 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar7;
  uVar2 = param_2[4];
  uVar8 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar8;
  uVar3 = param_2[6];
  uVar9 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar9;
  uVar4 = param_2[8];
  uVar10 = param_2[9];
  param_1[8] = uVar4;
  param_1[9] = uVar10;
  uVar5 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xb] = uVar11;
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(uVar3);
  func_0x000107c615f0(uVar9);
  func_0x000107c615f0(uVar4);
  func_0x000107c615f0(uVar10);
  func_0x000107c615f0(uVar5);
  func_0x000107c615f0(uVar11);
  return param_1;
}



/* Entry: 10127d7f8; end: 10127d943;  */

undefined8 * FUN_10127d7f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 10127d944; end: 10127d9f7;  */

undefined8 * FUN_10127d944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(param_1[8]);
  uVar1 = param_1[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(param_1[10]);
  uVar1 = param_1[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 10127d9f8; end: 10127daab;  */

int FUN_10127d9f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10127daac; end: 10127e417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10127daac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112d6d288;
  func_0x000107c61614(unaff_x20 + _DAT_112d6d288,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6d290) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d298) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2b0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2b8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2c0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2c8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2d0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2d8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2e0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2e8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2f0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d2f8) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d300) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d308) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d310) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d318) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d320) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d328) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d330) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d338) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d340) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d348) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d350) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d358) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d360) = param_27;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d368) = param_28;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d370) = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d378) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d380) = param_31;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d388) = param_32;
  func_0x000107c61604(unaff_x20 + lVar1,param_33);
  *(undefined8 *)(unaff_x20 + _DAT_112d6d390) = param_34;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d398) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3a0) = param_36;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3a8) = param_37;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3b0) = param_38;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3b8) = param_39;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3c0) = param_40;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3c8) = param_41;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3d0) = param_42;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_31;
  func_0x000107c5d254();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3d8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3e0) = param_43;
  func_0x000107c61174();
  uVar2 = param_44;
  func_0x000107c3d90c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3e8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3f0) = param_45;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d3f8) = param_46;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d400) = param_47;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d408) = param_48;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d410) = param_49;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d418) = param_50;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d420) = param_51;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d428) = param_52;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d430) = param_53;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d438) = param_54;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d440) = param_55;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d448) = param_56;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d450) = param_57;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d458) = param_58;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d460) = param_59;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d468) = param_60;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d470) = param_61;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d478) = param_62;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d480) = param_63;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d488) = param_64;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d490) = param_65;
  *(undefined8 *)(unaff_x20 + _DAT_112d6d498) = param_66;
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  return puVar3;
}



/* Entry: 10127e418; end: 10127e477; -[_TtC45PublicProfileManagementContextServiceProvider38PublicProfileManagementContextProvider init] */

void FUN_10127e418(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicProfileManagementContextServiceProvider.PublicProfileManagementContextProvider"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10127e444);
  (*pcVar1)();
}



/* Entry: 10127e478; end: 10127e8bf; -[_TtC45PublicProfileManagementContextServiceProvider38PublicProfileManagementContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010127e494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e5f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e6a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e6e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e7a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e7e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010127e8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010127e888) */
/* WARNING: Removing unreachable block (ram,0x00010127e868) */
/* WARNING: Removing unreachable block (ram,0x00010127e848) */
/* WARNING: Removing unreachable block (ram,0x00010127e828) */
/* WARNING: Removing unreachable block (ram,0x00010127e808) */
/* WARNING: Removing unreachable block (ram,0x00010127e7e8) */
/* WARNING: Removing unreachable block (ram,0x00010127e7c8) */
/* WARNING: Removing unreachable block (ram,0x00010127e7a8) */
/* WARNING: Removing unreachable block (ram,0x00010127e788) */
/* WARNING: Removing unreachable block (ram,0x00010127e768) */
/* WARNING: Removing unreachable block (ram,0x00010127e748) */
/* WARNING: Removing unreachable block (ram,0x00010127e728) */
/* WARNING: Removing unreachable block (ram,0x00010127e708) */
/* WARNING: Removing unreachable block (ram,0x00010127e6e8) */
/* WARNING: Removing unreachable block (ram,0x00010127e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010127e6a8) */
/* WARNING: Removing unreachable block (ram,0x00010127e678) */
/* WARNING: Removing unreachable block (ram,0x00010127e658) */
/* WARNING: Removing unreachable block (ram,0x00010127e638) */
/* WARNING: Removing unreachable block (ram,0x00010127e618) */
/* WARNING: Removing unreachable block (ram,0x00010127e5f8) */
/* WARNING: Removing unreachable block (ram,0x00010127e5d8) */
/* WARNING: Removing unreachable block (ram,0x00010127e5b8) */
/* WARNING: Removing unreachable block (ram,0x00010127e598) */
/* WARNING: Removing unreachable block (ram,0x00010127e578) */
/* WARNING: Removing unreachable block (ram,0x00010127e558) */
/* WARNING: Removing unreachable block (ram,0x00010127e538) */
/* WARNING: Removing unreachable block (ram,0x00010127e518) */
/* WARNING: Removing unreachable block (ram,0x00010127e4f8) */
/* WARNING: Removing unreachable block (ram,0x00010127e4d8) */
/* WARNING: Removing unreachable block (ram,0x00010127e4b8) */
/* WARNING: Removing unreachable block (ram,0x00010127e498) */
/* WARNING: Removing unreachable block (ram,0x00010127e8a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127e478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6d290));
  return;
}



/* Entry: 10127e8c0; end: 10127e967; -[_TtC45PublicProfileManagementContextServiceProvider38PublicProfileManagementContextProvider makeLivePublicStoryStateObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10127e8c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + _DAT_112d6d410) + _DAT_112ff2c78);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d6d320);
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c4f3e4(uVar3);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126a67c0;
  func_0x000107c610f8(PTR_PTR_1126a67c0);
  func_0x000107c4788c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10127e968; end: 10127f037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10127e968(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7,long param_8,undefined8 param_9,long param_10,
             undefined4 param_11,undefined4 param_12,long param_13,undefined8 param_14,long param_15
             ,undefined8 param_16,long param_17,undefined8 param_18)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d6d298);
  uVar7 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d6d2e8);
    func_0x000107c42eac();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10127f038);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar2);
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6d408) + _DAT_113017e98);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar4);
        puVar12 = (undefined *)0x0;
      }
      else {
        lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112d6d348) + _DAT_113091ad8);
        func_0x000107c61174();
        func_0x000107c41214();
        func_0x000107c61180();
        if (param_1 == 0) {
          lVar8 = 0;
          uVar13 = 0xf000000000000000;
          uVar9 = uVar7;
        }
        else {
          lVar8 = param_1;
          func_0x000107c5ee30();
          uVar9 = uVar7;
          func_0x000107c61170(param_1);
          uVar13 = uVar7;
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        lVar10 = lVar5;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (lVar10 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar9);
        }
        func_0x000107c5fadc(param_4,param_5);
        if (uVar13 >> 0x3c < 0xf) {
          lVar11 = lVar8;
          func_0x000107c5ee20(lVar8,uVar13);
          func_0x0001000b44c0(lVar8,uVar13);
        }
        else {
          lVar11 = 0;
        }
        puVar12 = PTR_PTR_1126ce628;
        func_0x000107c610f8(PTR_PTR_1126ce628);
        func_0x000107c48408();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(param_4);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar10);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c5558c(puVar12);
        func_0x000107c61170(puVar6);
        func_0x000107c40d38(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c566c0(puVar12);
        func_0x000107c61170(puVar6);
        func_0x000107c40d3c(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c566c4(puVar12);
        func_0x000107c61170(puVar6);
        func_0x000107c44e34(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c58be4(puVar12);
        func_0x000107c61170(puVar6);
        func_0x000107c44e30(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c578fc(puVar12);
        func_0x000107c61170(puVar6);
        func_0x000107c44e40(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c59914(puVar12);
        func_0x000107c61170(puVar6);
        func_0x000107c44e3c(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c596ec(puVar12);
        func_0x000107c61170(puVar6);
        func_0x000108f4a298(lVar2,*(undefined8 *)(unaff_x20 + _DAT_112d6d2a0));
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c596fc(puVar12);
        func_0x000107c61170(puVar6);
        uVar7 = param_2;
        func_0x000107c5fb5c(param_2,param_3);
        if (uVar7 != 0) {
          func_0x000107c5fadc(param_2,param_3);
          func_0x000107c5956c(puVar12);
          func_0x000107c61170(param_2);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c53f34(puVar12);
        func_0x000107c61170(puVar6);
        lVar8 = param_6;
        func_0x000107c5fb5c(param_6,param_7);
        if (lVar8 != 0) {
          func_0x000107c5fadc(param_6,param_7);
          func_0x000107c53f9c(puVar12);
          func_0x000107c61170(param_6);
        }
        lVar8 = param_8;
        func_0x000107c5fb5c(param_8,param_9);
        if (lVar8 != 0) {
          func_0x000107c5fadc(param_8,param_9);
          func_0x000107c53f50(puVar12);
          func_0x000107c61170(param_8);
        }
        if (param_10 != 0) {
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c53f44(puVar12);
          func_0x000107c61170(puVar6);
        }
        lVar8 = param_13;
        func_0x000107c5fb5c(param_13,param_14);
        if (lVar8 != 0) {
          func_0x000107c5fadc(param_13,param_14);
          func_0x000107c53f38(puVar12);
          func_0x000107c61170(param_13);
        }
        lVar8 = param_15;
        func_0x000107c5fb5c(param_15,param_16);
        if (lVar8 != 0) {
          func_0x000107c5fadc(param_15,param_16);
          func_0x000107c53f5c(puVar12);
          func_0x000107c61170(param_15);
        }
        lVar8 = param_17;
        func_0x000107c5fb5c(param_17,param_18);
        if (lVar8 != 0) {
          func_0x000107c5fadc(param_17,param_18);
          func_0x000107c53f58(puVar12);
          func_0x000107c61170(param_17);
        }
        lVar8 = *(long *)(unaff_x20 + _DAT_112d6d488);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar8 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar8;
          func_0x000107c4415c();
          func_0x000107c61180();
          func_0x000107c615e8(lVar8);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c568d0(puVar12);
        func_0x000107c61170(puVar6);
        lVar8 = lVar3;
        func_0x000107c49cbc(lVar3);
        func_0x000107c61180();
        lVar11 = lVar8;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        puVar6 = PTR_PTR_1126b4ab8;
        func_0x000107c610f8(PTR_PTR_1126b4ab8);
        func_0x000107c465dc();
        func_0x000107c567e4(puVar12);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(puVar6);
      }
    }
  }
  return puVar12;
}



/* Entry: 10127f038; end: 10128297b; -[_TtC45PublicProfileManagementContextServiceProvider38PublicProfileManagementContextProvider providePublicProfileManagementViewModelWithBusinessProfileAndUserData:notificationId:routeName:defaultTab:deeplinkURL:deeplinkHandlingId:deeplinkAction:deeplinkAdId:deeplinkSnapId:deeplinkSnapContentType:] */

void FUN_10127f038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c5faec();
  uVar2 = param_2;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar7 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10127e968(param_3,param_4,param_2,param_5,uVar2,param_6,uVar3,param_7,uVar4,param_8,param_9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10128297c; end: 101283187; -[_TtC45PublicProfileManagementContextServiceProvider38PublicProfileManagementContextProvider providePublicProfileManagementContextWithViewController:businessProfileAndUserData:stronglyHeldNotificationSettingsActionHandler:publicProfileManagementScopeDelegate:activityFeedPresenter:communityPillContext:] */

void FUN_10128297c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x00010127f1b4(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101283188; end: 1012831c7;  */

void FUN_101283188(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1012831c8; end: 1012831e7;  */

void FUN_1012831c8(long param_1,long param_2)

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



/* Entry: 1012831e8; end: 10128323b;  */

void FUN_1012831e8(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 10128323c; end: 10128323f;  */

void FUN_10128323c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 101283240; end: 1012834ef;  */

long FUN_101283240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x110,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_22;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_21;
  *(undefined8 *)(unaff_x20 + 200) = param_24;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_23;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_26;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_25;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_28;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_27;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_30;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_29;
  *(undefined8 *)(unaff_x20 + 0x100) = param_31;
  *(undefined8 *)(unaff_x20 + 0x108) = param_32;
  func_0x000107c61604(unaff_x20 + 0x110,param_33);
  func_0x000107c61170(param_33);
  *(undefined8 *)(unaff_x20 + 0x120) = param_35;
  *(undefined8 *)(unaff_x20 + 0x118) = param_34;
  *(undefined8 *)(unaff_x20 + 0x130) = param_37;
  *(undefined8 *)(unaff_x20 + 0x128) = param_36;
  *(undefined8 *)(unaff_x20 + 0x140) = param_39;
  *(undefined8 *)(unaff_x20 + 0x138) = param_38;
  *(undefined8 *)(unaff_x20 + 0x150) = param_41;
  *(undefined8 *)(unaff_x20 + 0x148) = param_40;
  *(undefined8 *)(unaff_x20 + 0x160) = param_43;
  *(undefined8 *)(unaff_x20 + 0x158) = param_42;
  *(undefined8 *)(unaff_x20 + 0x170) = param_45;
  *(undefined8 *)(unaff_x20 + 0x168) = param_44;
  *(undefined8 *)(unaff_x20 + 0x180) = param_47;
  *(undefined8 *)(unaff_x20 + 0x178) = param_46;
  *(undefined8 *)(unaff_x20 + 400) = param_49;
  *(undefined8 *)(unaff_x20 + 0x188) = param_48;
  *(undefined8 *)(unaff_x20 + 0x1a0) = param_51;
  *(undefined8 *)(unaff_x20 + 0x198) = param_50;
  *(undefined8 *)(unaff_x20 + 0x1b0) = param_53;
  *(undefined8 *)(unaff_x20 + 0x1a8) = param_52;
  *(undefined8 *)(unaff_x20 + 0x1c0) = param_55;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_54;
  *(undefined8 *)(unaff_x20 + 0x1d0) = param_57;
  *(undefined8 *)(unaff_x20 + 0x1c8) = param_56;
  *(undefined8 *)(unaff_x20 + 0x1e0) = param_59;
  *(undefined8 *)(unaff_x20 + 0x1d8) = param_58;
  *(undefined8 *)(unaff_x20 + 0x1f0) = param_61;
  *(undefined8 *)(unaff_x20 + 0x1e8) = param_60;
  *(undefined8 *)(unaff_x20 + 0x200) = param_63;
  *(undefined8 *)(unaff_x20 + 0x1f8) = param_62;
  *(undefined8 *)(unaff_x20 + 0x210) = param_65;
  *(undefined8 *)(unaff_x20 + 0x208) = param_64;
  *(undefined8 *)(unaff_x20 + 0x218) = param_66;
  return unaff_x20;
}



/* Entry: 1012834f0; end: 1012835db;  */

undefined * FUN_1012834f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11039acf0;
  func_0x000107c613fc(&UNK_11039acf0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_101284210;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101284218;
  puStack_48 = &UNK_11039ad08;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a6850;
  func_0x000107c610f8(PTR_PTR_1126a6850);
  func_0x000107c481b0();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1012835dc; end: 10128420f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012835dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    func_0x00010127ad74();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    uVar54 = *(undefined8 *)(param_1 + 0x10);
    uVar55 = *(undefined8 *)(param_1 + 0x18);
    uVar56 = *(undefined8 *)(param_1 + 0x20);
    uVar57 = *(undefined8 *)(param_1 + 0x28);
    uVar58 = *(undefined8 *)(param_1 + 0x30);
    uVar59 = *(undefined8 *)(param_1 + 0x38);
    uVar60 = *(undefined8 *)(param_1 + 0x40);
    uVar61 = *(undefined8 *)(param_1 + 0x48);
    uVar62 = *(undefined8 *)(param_1 + 0x50);
    uVar63 = *(undefined8 *)(param_1 + 0x58);
    uVar64 = *(undefined8 *)(param_1 + 0x60);
    uVar65 = *(undefined8 *)(param_1 + 0x68);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    uVar8 = *(undefined8 *)(param_1 + 0x88);
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    uVar10 = *(undefined8 *)(param_1 + 0x98);
    uVar11 = *(undefined8 *)(param_1 + 0xa0);
    uVar12 = *(undefined8 *)(param_1 + 0xa8);
    uVar13 = *(undefined8 *)(param_1 + 0xb0);
    uVar14 = *(undefined8 *)(param_1 + 0xb8);
    uVar15 = *(undefined8 *)(param_1 + 0xc0);
    uVar16 = *(undefined8 *)(param_1 + 200);
    uVar17 = *(undefined8 *)(param_1 + 0xd0);
    uVar18 = *(undefined8 *)(param_1 + 0xd8);
    uVar19 = *(undefined8 *)(param_1 + 0xe0);
    uVar20 = *(undefined8 *)(param_1 + 0xe8);
    uVar21 = *(undefined8 *)(param_1 + 0xf0);
    uVar22 = *(undefined8 *)(param_1 + 0xf8);
    uVar23 = *(undefined8 *)(param_1 + 0x100);
    uVar24 = *(undefined8 *)(param_1 + 0x108);
    lVar2 = param_1 + 0x110;
    func_0x000107c61618();
    uVar25 = *(undefined8 *)(param_1 + 0x118);
    uVar26 = *(undefined8 *)(param_1 + 0x120);
    uVar27 = *(undefined8 *)(param_1 + 0x128);
    uVar28 = *(undefined8 *)(param_1 + 0x130);
    uVar29 = *(undefined8 *)(param_1 + 0x138);
    uVar30 = *(undefined8 *)(param_1 + 0x140);
    uVar31 = *(undefined8 *)(param_1 + 0x148);
    uVar32 = *(undefined8 *)(param_1 + 0x150);
    uVar33 = *(undefined8 *)(param_1 + 0x158);
    uVar67 = *(undefined8 *)(param_1 + 0x160);
    uVar34 = *(undefined8 *)(param_1 + 0x168);
    uVar35 = *(undefined8 *)(param_1 + 0x170);
    uVar36 = *(undefined8 *)(param_1 + 0x178);
    uVar37 = *(undefined8 *)(param_1 + 0x180);
    uVar38 = *(undefined8 *)(param_1 + 0x188);
    uVar39 = *(undefined8 *)(param_1 + 400);
    uVar40 = *(undefined8 *)(param_1 + 0x198);
    uVar41 = *(undefined8 *)(param_1 + 0x1a0);
    uVar42 = *(undefined8 *)(param_1 + 0x1a8);
    uVar43 = *(undefined8 *)(param_1 + 0x1b0);
    uVar44 = *(undefined8 *)(param_1 + 0x1b8);
    uVar45 = *(undefined8 *)(param_1 + 0x1c0);
    uVar46 = *(undefined8 *)(param_1 + 0x1c8);
    uVar47 = *(undefined8 *)(param_1 + 0x1d0);
    uVar48 = *(undefined8 *)(param_1 + 0x1d8);
    uVar49 = *(undefined8 *)(param_1 + 0x1e0);
    uVar50 = *(undefined8 *)(param_1 + 0x1e8);
    uVar51 = *(undefined8 *)(param_1 + 0x1f0);
    uVar70 = *(undefined8 *)(*(long *)(param_1 + 0x208) + _DAT_113021f38);
    uVar52 = *(undefined8 *)(param_1 + 0x1f8);
    uVar53 = *(undefined8 *)(param_1 + 0x200);
    uVar69 = *(undefined8 *)(param_1 + 0x210);
    uVar68 = *(undefined8 *)(param_1 + 0x218);
    lVar3 = 0;
    func_0x00010128321c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    lVar1 = _DAT_112d6d288;
    func_0x000107c61614(lVar4 + _DAT_112d6d288,0);
    *(undefined8 *)(lVar4 + _DAT_112d6d290) = uVar54;
    *(undefined8 *)(lVar4 + _DAT_112d6d298) = uVar55;
    *(undefined8 *)(lVar4 + _DAT_112d6d2a0) = uVar56;
    *(undefined8 *)(lVar4 + _DAT_112d6d2a8) = uVar57;
    *(undefined8 *)(lVar4 + _DAT_112d6d2b0) = uVar58;
    *(undefined8 *)(lVar4 + _DAT_112d6d2b8) = uVar59;
    *(undefined8 *)(lVar4 + _DAT_112d6d2c0) = uVar60;
    *(undefined8 *)(lVar4 + _DAT_112d6d2c8) = uVar61;
    *(undefined8 *)(lVar4 + _DAT_112d6d2d0) = uVar62;
    *(undefined8 *)(lVar4 + _DAT_112d6d2d8) = uVar63;
    *(undefined8 *)(lVar4 + _DAT_112d6d2e0) = uVar64;
    *(undefined8 *)(lVar4 + _DAT_112d6d2e8) = uVar65;
    *(undefined8 *)(lVar4 + _DAT_112d6d2f0) = uVar5;
    *(undefined8 *)(lVar4 + _DAT_112d6d2f8) = uVar6;
    *(undefined8 *)(lVar4 + _DAT_112d6d300) = uVar7;
    *(undefined8 *)(lVar4 + _DAT_112d6d308) = uVar8;
    *(undefined8 *)(lVar4 + _DAT_112d6d310) = uVar9;
    *(undefined8 *)(lVar4 + _DAT_112d6d318) = uVar10;
    *(undefined8 *)(lVar4 + _DAT_112d6d320) = uVar11;
    *(undefined8 *)(lVar4 + _DAT_112d6d328) = uVar12;
    *(undefined8 *)(lVar4 + _DAT_112d6d330) = uVar13;
    *(undefined8 *)(lVar4 + _DAT_112d6d338) = uVar14;
    *(undefined8 *)(lVar4 + _DAT_112d6d340) = uVar15;
    *(undefined8 *)(lVar4 + _DAT_112d6d348) = uVar16;
    *(undefined8 *)(lVar4 + _DAT_112d6d350) = uVar17;
    *(undefined8 *)(lVar4 + _DAT_112d6d358) = uVar18;
    *(undefined8 *)(lVar4 + _DAT_112d6d360) = uVar19;
    *(undefined8 *)(lVar4 + _DAT_112d6d368) = uVar20;
    *(undefined8 *)(lVar4 + _DAT_112d6d370) = uVar21;
    *(undefined8 *)(lVar4 + _DAT_112d6d378) = uVar22;
    *(undefined8 *)(lVar4 + _DAT_112d6d380) = uVar23;
    *(undefined8 *)(lVar4 + _DAT_112d6d388) = uVar24;
    func_0x000107c61604(lVar4 + lVar1,lVar2);
    *(undefined8 *)(lVar4 + _DAT_112d6d390) = uVar25;
    *(undefined8 *)(lVar4 + _DAT_112d6d398) = uVar26;
    *(undefined8 *)(lVar4 + _DAT_112d6d3a0) = uVar27;
    *(undefined8 *)(lVar4 + _DAT_112d6d3a8) = uVar28;
    *(undefined8 *)(lVar4 + _DAT_112d6d3b0) = uVar29;
    *(undefined8 *)(lVar4 + _DAT_112d6d3b8) = uVar30;
    *(undefined8 *)(lVar4 + _DAT_112d6d3c0) = uVar31;
    *(undefined8 *)(lVar4 + _DAT_112d6d3c8) = uVar32;
    *(undefined8 *)(lVar4 + _DAT_112d6d3d0) = uVar33;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar63);
    func_0x000107c61174(uVar64);
    func_0x000107c61174(uVar65);
    uVar66 = uVar23;
    func_0x000107c5d254();
    func_0x000107c61180();
    *(undefined8 *)(lVar4 + _DAT_112d6d3d8) = uVar66;
    *(undefined8 *)(lVar4 + _DAT_112d6d3e0) = uVar67;
    func_0x000107c61174(uVar67);
    uVar66 = uVar34;
    func_0x000107c3d90c();
    func_0x000107c61180();
    *(undefined8 *)(lVar4 + _DAT_112d6d3e8) = uVar66;
    *(undefined8 *)(lVar4 + _DAT_112d6d3f0) = uVar35;
    *(undefined8 *)(lVar4 + _DAT_112d6d3f8) = uVar36;
    *(undefined8 *)(lVar4 + _DAT_112d6d400) = uVar37;
    *(undefined8 *)(lVar4 + _DAT_112d6d408) = uVar38;
    *(undefined8 *)(lVar4 + _DAT_112d6d410) = uVar39;
    *(undefined8 *)(lVar4 + _DAT_112d6d418) = uVar40;
    *(undefined8 *)(lVar4 + _DAT_112d6d420) = uVar41;
    *(undefined8 *)(lVar4 + _DAT_112d6d428) = uVar42;
    *(undefined8 *)(lVar4 + _DAT_112d6d430) = uVar43;
    *(undefined8 *)(lVar4 + _DAT_112d6d438) = uVar44;
    *(undefined8 *)(lVar4 + _DAT_112d6d440) = uVar45;
    *(undefined8 *)(lVar4 + _DAT_112d6d448) = uVar46;
    *(undefined8 *)(lVar4 + _DAT_112d6d450) = uVar47;
    *(undefined8 *)(lVar4 + _DAT_112d6d458) = uVar48;
    *(undefined8 *)(lVar4 + _DAT_112d6d460) = uVar49;
    *(undefined8 *)(lVar4 + _DAT_112d6d468) = uVar50;
    *(undefined8 *)(lVar4 + _DAT_112d6d470) = uVar51;
    *(undefined8 *)(lVar4 + _DAT_112d6d478) = uVar52;
    *(undefined8 *)(lVar4 + _DAT_112d6d480) = uVar53;
    *(undefined8 *)(lVar4 + _DAT_112d6d488) = uVar70;
    *(undefined8 *)(lVar4 + _DAT_112d6d490) = uVar69;
    *(undefined8 *)(lVar4 + _DAT_112d6d498) = uVar68;
    lStack_90 = lVar4;
    lStack_88 = lVar3;
    func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar54);
    func_0x000107c61170(uVar55);
    func_0x000107c61170(uVar56);
    func_0x000107c61170(uVar57);
    func_0x000107c61170(uVar58);
    func_0x000107c61170(uVar59);
    func_0x000107c61170(uVar60);
    func_0x000107c61170(uVar61);
    func_0x000107c61170(uVar62);
    func_0x000107c61170(uVar63);
    func_0x000107c61170(uVar64);
    func_0x000107c61170(uVar65);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar67);
    func_0x000107c61170(uVar34);
  }
  return;
}



/* Entry: 101284210; end: 101284217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101284210(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x00010127ad74();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    uVar55 = *(undefined8 *)(lVar2 + 0x10);
    uVar56 = *(undefined8 *)(lVar2 + 0x18);
    uVar57 = *(undefined8 *)(lVar2 + 0x20);
    uVar58 = *(undefined8 *)(lVar2 + 0x28);
    uVar59 = *(undefined8 *)(lVar2 + 0x30);
    uVar60 = *(undefined8 *)(lVar2 + 0x38);
    uVar61 = *(undefined8 *)(lVar2 + 0x40);
    uVar62 = *(undefined8 *)(lVar2 + 0x48);
    uVar63 = *(undefined8 *)(lVar2 + 0x50);
    uVar64 = *(undefined8 *)(lVar2 + 0x58);
    uVar65 = *(undefined8 *)(lVar2 + 0x60);
    uVar66 = *(undefined8 *)(lVar2 + 0x68);
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    uVar7 = *(undefined8 *)(lVar2 + 0x78);
    uVar8 = *(undefined8 *)(lVar2 + 0x80);
    uVar9 = *(undefined8 *)(lVar2 + 0x88);
    uVar10 = *(undefined8 *)(lVar2 + 0x90);
    uVar11 = *(undefined8 *)(lVar2 + 0x98);
    uVar12 = *(undefined8 *)(lVar2 + 0xa0);
    uVar13 = *(undefined8 *)(lVar2 + 0xa8);
    uVar14 = *(undefined8 *)(lVar2 + 0xb0);
    uVar15 = *(undefined8 *)(lVar2 + 0xb8);
    uVar16 = *(undefined8 *)(lVar2 + 0xc0);
    uVar17 = *(undefined8 *)(lVar2 + 200);
    uVar18 = *(undefined8 *)(lVar2 + 0xd0);
    uVar19 = *(undefined8 *)(lVar2 + 0xd8);
    uVar20 = *(undefined8 *)(lVar2 + 0xe0);
    uVar21 = *(undefined8 *)(lVar2 + 0xe8);
    uVar22 = *(undefined8 *)(lVar2 + 0xf0);
    uVar23 = *(undefined8 *)(lVar2 + 0xf8);
    uVar24 = *(undefined8 *)(lVar2 + 0x100);
    uVar25 = *(undefined8 *)(lVar2 + 0x108);
    lVar3 = lVar2 + 0x110;
    func_0x000107c61618();
    uVar26 = *(undefined8 *)(lVar2 + 0x118);
    uVar27 = *(undefined8 *)(lVar2 + 0x120);
    uVar28 = *(undefined8 *)(lVar2 + 0x128);
    uVar29 = *(undefined8 *)(lVar2 + 0x130);
    uVar30 = *(undefined8 *)(lVar2 + 0x138);
    uVar31 = *(undefined8 *)(lVar2 + 0x140);
    uVar32 = *(undefined8 *)(lVar2 + 0x148);
    uVar33 = *(undefined8 *)(lVar2 + 0x150);
    uVar34 = *(undefined8 *)(lVar2 + 0x158);
    uVar68 = *(undefined8 *)(lVar2 + 0x160);
    uVar35 = *(undefined8 *)(lVar2 + 0x168);
    uVar36 = *(undefined8 *)(lVar2 + 0x170);
    uVar37 = *(undefined8 *)(lVar2 + 0x178);
    uVar38 = *(undefined8 *)(lVar2 + 0x180);
    uVar39 = *(undefined8 *)(lVar2 + 0x188);
    uVar40 = *(undefined8 *)(lVar2 + 400);
    uVar41 = *(undefined8 *)(lVar2 + 0x198);
    uVar42 = *(undefined8 *)(lVar2 + 0x1a0);
    uVar43 = *(undefined8 *)(lVar2 + 0x1a8);
    uVar44 = *(undefined8 *)(lVar2 + 0x1b0);
    uVar45 = *(undefined8 *)(lVar2 + 0x1b8);
    uVar46 = *(undefined8 *)(lVar2 + 0x1c0);
    uVar47 = *(undefined8 *)(lVar2 + 0x1c8);
    uVar48 = *(undefined8 *)(lVar2 + 0x1d0);
    uVar49 = *(undefined8 *)(lVar2 + 0x1d8);
    uVar50 = *(undefined8 *)(lVar2 + 0x1e0);
    uVar51 = *(undefined8 *)(lVar2 + 0x1e8);
    uVar52 = *(undefined8 *)(lVar2 + 0x1f0);
    uVar71 = *(undefined8 *)(*(long *)(lVar2 + 0x208) + _DAT_113021f38);
    uVar53 = *(undefined8 *)(lVar2 + 0x1f8);
    uVar54 = *(undefined8 *)(lVar2 + 0x200);
    uVar70 = *(undefined8 *)(lVar2 + 0x210);
    uVar69 = *(undefined8 *)(lVar2 + 0x218);
    lVar4 = 0;
    func_0x00010128321c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    lVar1 = _DAT_112d6d288;
    func_0x000107c61614(lVar5 + _DAT_112d6d288,0);
    *(undefined8 *)(lVar5 + _DAT_112d6d290) = uVar55;
    *(undefined8 *)(lVar5 + _DAT_112d6d298) = uVar56;
    *(undefined8 *)(lVar5 + _DAT_112d6d2a0) = uVar57;
    *(undefined8 *)(lVar5 + _DAT_112d6d2a8) = uVar58;
    *(undefined8 *)(lVar5 + _DAT_112d6d2b0) = uVar59;
    *(undefined8 *)(lVar5 + _DAT_112d6d2b8) = uVar60;
    *(undefined8 *)(lVar5 + _DAT_112d6d2c0) = uVar61;
    *(undefined8 *)(lVar5 + _DAT_112d6d2c8) = uVar62;
    *(undefined8 *)(lVar5 + _DAT_112d6d2d0) = uVar63;
    *(undefined8 *)(lVar5 + _DAT_112d6d2d8) = uVar64;
    *(undefined8 *)(lVar5 + _DAT_112d6d2e0) = uVar65;
    *(undefined8 *)(lVar5 + _DAT_112d6d2e8) = uVar66;
    *(undefined8 *)(lVar5 + _DAT_112d6d2f0) = uVar6;
    *(undefined8 *)(lVar5 + _DAT_112d6d2f8) = uVar7;
    *(undefined8 *)(lVar5 + _DAT_112d6d300) = uVar8;
    *(undefined8 *)(lVar5 + _DAT_112d6d308) = uVar9;
    *(undefined8 *)(lVar5 + _DAT_112d6d310) = uVar10;
    *(undefined8 *)(lVar5 + _DAT_112d6d318) = uVar11;
    *(undefined8 *)(lVar5 + _DAT_112d6d320) = uVar12;
    *(undefined8 *)(lVar5 + _DAT_112d6d328) = uVar13;
    *(undefined8 *)(lVar5 + _DAT_112d6d330) = uVar14;
    *(undefined8 *)(lVar5 + _DAT_112d6d338) = uVar15;
    *(undefined8 *)(lVar5 + _DAT_112d6d340) = uVar16;
    *(undefined8 *)(lVar5 + _DAT_112d6d348) = uVar17;
    *(undefined8 *)(lVar5 + _DAT_112d6d350) = uVar18;
    *(undefined8 *)(lVar5 + _DAT_112d6d358) = uVar19;
    *(undefined8 *)(lVar5 + _DAT_112d6d360) = uVar20;
    *(undefined8 *)(lVar5 + _DAT_112d6d368) = uVar21;
    *(undefined8 *)(lVar5 + _DAT_112d6d370) = uVar22;
    *(undefined8 *)(lVar5 + _DAT_112d6d378) = uVar23;
    *(undefined8 *)(lVar5 + _DAT_112d6d380) = uVar24;
    *(undefined8 *)(lVar5 + _DAT_112d6d388) = uVar25;
    func_0x000107c61604(lVar5 + lVar1,lVar3);
    *(undefined8 *)(lVar5 + _DAT_112d6d390) = uVar26;
    *(undefined8 *)(lVar5 + _DAT_112d6d398) = uVar27;
    *(undefined8 *)(lVar5 + _DAT_112d6d3a0) = uVar28;
    *(undefined8 *)(lVar5 + _DAT_112d6d3a8) = uVar29;
    *(undefined8 *)(lVar5 + _DAT_112d6d3b0) = uVar30;
    *(undefined8 *)(lVar5 + _DAT_112d6d3b8) = uVar31;
    *(undefined8 *)(lVar5 + _DAT_112d6d3c0) = uVar32;
    *(undefined8 *)(lVar5 + _DAT_112d6d3c8) = uVar33;
    *(undefined8 *)(lVar5 + _DAT_112d6d3d0) = uVar34;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar64);
    func_0x000107c61174(uVar65);
    func_0x000107c61174(uVar66);
    uVar67 = uVar24;
    func_0x000107c5d254();
    func_0x000107c61180();
    *(undefined8 *)(lVar5 + _DAT_112d6d3d8) = uVar67;
    *(undefined8 *)(lVar5 + _DAT_112d6d3e0) = uVar68;
    func_0x000107c61174(uVar68);
    uVar67 = uVar35;
    func_0x000107c3d90c();
    func_0x000107c61180();
    *(undefined8 *)(lVar5 + _DAT_112d6d3e8) = uVar67;
    *(undefined8 *)(lVar5 + _DAT_112d6d3f0) = uVar36;
    *(undefined8 *)(lVar5 + _DAT_112d6d3f8) = uVar37;
    *(undefined8 *)(lVar5 + _DAT_112d6d400) = uVar38;
    *(undefined8 *)(lVar5 + _DAT_112d6d408) = uVar39;
    *(undefined8 *)(lVar5 + _DAT_112d6d410) = uVar40;
    *(undefined8 *)(lVar5 + _DAT_112d6d418) = uVar41;
    *(undefined8 *)(lVar5 + _DAT_112d6d420) = uVar42;
    *(undefined8 *)(lVar5 + _DAT_112d6d428) = uVar43;
    *(undefined8 *)(lVar5 + _DAT_112d6d430) = uVar44;
    *(undefined8 *)(lVar5 + _DAT_112d6d438) = uVar45;
    *(undefined8 *)(lVar5 + _DAT_112d6d440) = uVar46;
    *(undefined8 *)(lVar5 + _DAT_112d6d448) = uVar47;
    *(undefined8 *)(lVar5 + _DAT_112d6d450) = uVar48;
    *(undefined8 *)(lVar5 + _DAT_112d6d458) = uVar49;
    *(undefined8 *)(lVar5 + _DAT_112d6d460) = uVar50;
    *(undefined8 *)(lVar5 + _DAT_112d6d468) = uVar51;
    *(undefined8 *)(lVar5 + _DAT_112d6d470) = uVar52;
    *(undefined8 *)(lVar5 + _DAT_112d6d478) = uVar53;
    *(undefined8 *)(lVar5 + _DAT_112d6d480) = uVar54;
    *(undefined8 *)(lVar5 + _DAT_112d6d488) = uVar71;
    *(undefined8 *)(lVar5 + _DAT_112d6d490) = uVar70;
    *(undefined8 *)(lVar5 + _DAT_112d6d498) = uVar69;
    lStack_90 = lVar5;
    lStack_88 = lVar4;
    func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(uVar55);
    func_0x000107c61170(uVar56);
    func_0x000107c61170(uVar57);
    func_0x000107c61170(uVar58);
    func_0x000107c61170(uVar59);
    func_0x000107c61170(uVar60);
    func_0x000107c61170(uVar61);
    func_0x000107c61170(uVar62);
    func_0x000107c61170(uVar63);
    func_0x000107c61170(uVar64);
    func_0x000107c61170(uVar65);
    func_0x000107c61170(uVar66);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar68);
    func_0x000107c61170(uVar35);
  }
  return;
}



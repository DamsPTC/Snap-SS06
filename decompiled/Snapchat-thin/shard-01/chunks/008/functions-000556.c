/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10155b894; end: 10155b933;  */

undefined8 FUN_10155b894(undefined8 param_1)

{
  (*(code *)&DAT_10400e3fc)();
  return param_1;
}



/* Entry: 10155b934; end: 10155b963;  */

void FUN_10155b934(undefined8 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x300;
  return;
}



/* Entry: 10155b964; end: 10155b997;  */

undefined8 FUN_10155b964(undefined8 param_1)

{
  (*(code *)&DAT_103522274)();
  return param_1;
}



/* Entry: 10155b998; end: 10155b99b;  */

void FUN_10155b998(void)

{
  return;
}



/* Entry: 10155b99c; end: 10155b9d7;  */

undefined8 FUN_10155b99c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10400e444)(param_2,param_1);
  return param_2;
}



/* Entry: 10155b9d8; end: 10155ba2f;  */

void FUN_10155b9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10155bac0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10155ba30; end: 10155ba6b; -[_TtC32AdRenderDataParserImplementation14AdNativeLogger init] */

void FUN_10155ba30(undefined8 param_1)

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



/* Entry: 10155ba6c; end: 10155babf;  */

void FUN_10155ba6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10155bac0; end: 10155bbab;  */

void FUN_10155bac0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar6 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar7 = 7;
    if (uVar6 == 0) {
      uVar7 = 0xb;
    }
    uVar7 = uVar7 | uVar1 << 0x10;
    uVar8 = 0xf;
    uVar4 = 0;
    do {
      uVar6 = 0x640;
      uVar9 = uVar8;
      func_0x000107c5fb68(uVar8,0x640,uVar7,param_1,param_2);
      uVar2 = uVar7;
      if ((uVar6 & 0xff) != 1) {
        uVar2 = uVar9;
      }
      uVar9 = uVar2 >> 0xe;
      if (uVar9 < uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10155bbac);
        (*pcVar3)();
      }
      uVar4 = uVar2;
      uVar5 = param_2;
      func_0x000107c5fbd8(uVar8,uVar2,param_1,param_2);
      func_0x000107c5fb2c();
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar4);
      uVar8 = uVar2;
      uVar4 = uVar9;
    } while (uVar9 < uVar1 << 2);
  }
  return;
}



/* Entry: 10155bbac; end: 10155bbaf; -[_TtC32AdRenderDataParserImplementation14AdNativeLogger errorWithMessage:] */

void FUN_10155bbac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10155bac0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10155bbb0; end: 10155bbb3; -[_TtC32AdRenderDataParserImplementation14AdNativeLogger logWithMessage:] */

void FUN_10155bbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10155bac0(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10155bbb4; end: 10155bbff;  */

void FUN_10155bbb4(undefined8 param_1)

{
  func_0x0001000285a8(0x112db4118,&UNK_10d95e680);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10155bc7c,param_1);
  return;
}



/* Entry: 10155bc00; end: 10155bc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10155bc00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113010be0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10155bc7c; end: 10155bc93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10155bc7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113010be0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10155bc94; end: 10155bcdf;  */

void FUN_10155bc94(undefined8 param_1)

{
  func_0x0001000285a8(0x112db4120,&UNK_10d95e6c0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10155bd5c,param_1);
  return;
}



/* Entry: 10155bce0; end: 10155bd5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10155bce0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113010c38);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10155bd5c; end: 10155bd73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10155bd5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113010c38);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10155bd74; end: 10155bda3;  */

void FUN_10155bd74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10155bda4; end: 10155be23;  */

void FUN_10155bda4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db41c0,&UNK_10d95e720);
  puVar1 = &UNK_1103dce08;
  func_0x000107c613fc(&UNK_1103dce08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10155c024,puVar1);
  return;
}



/* Entry: 10155be24; end: 10155c023;  */

void FUN_10155be24(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10155c0e4();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112db41c8,&UNK_10d9799a0);
  puVar1 = &UNK_1103dcea0;
  func_0x000107c613fc(&UNK_1103dcea0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  pcVar3 = FUN_10155c104;
  func_0x0001000823a8(FUN_10155c104,puVar1);
  *(code **)(param_2 + 0x10) = pcVar3;
  func_0x0001000285a8(0x112db41d0,&UNK_10d95e730);
  puVar1 = &UNK_1103dcec8;
  func_0x000107c613fc(&UNK_1103dcec8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uStack_50;
  uVar4 = 0x10155c108;
  func_0x0001000823a8(0x10155c108,puVar1);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10155c024; end: 10155c02b;  */

void FUN_10155c024(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_10155c0e4();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112db41c8,&UNK_10d9799a0);
  puVar2 = &UNK_1103dcea0;
  func_0x000107c613fc(&UNK_1103dcea0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uStack_48;
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  pcVar4 = FUN_10155c104;
  func_0x0001000823a8(FUN_10155c104,puVar2);
  *(code **)(lVar1 + 0x10) = pcVar4;
  func_0x0001000285a8(0x112db41d0,&UNK_10d95e730);
  puVar2 = &UNK_1103dcec8;
  func_0x000107c613fc(&UNK_1103dcec8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uStack_50;
  uVar5 = 0x10155c108;
  func_0x0001000823a8(0x10155c108,puVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(lVar1 + 0x18) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10155c02c; end: 10155c08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10155c02c(void)

{
  func_0x0001000d224c();
  return;
}



/* Entry: 10155c08c; end: 10155c097;  */

void FUN_10155c08c(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010155c0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10155c098; end: 10155c0d3;  */

void FUN_10155c098(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010155c0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10155c0d4; end: 10155c0e3;  */

undefined1  [16] FUN_10155c0d4(void)

{
  return ZEXT816(0x1103dce80);
}



/* Entry: 10155c0e4; end: 10155c103;  */

void FUN_10155c0e4(void)

{
  func_0x000107c61168(&PTR_PTR_112db4218);
  return;
}



/* Entry: 10155c104; end: 10155c10b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10155c104(void)

{
  func_0x0001000d224c();
  return;
}



/* Entry: 10155c10c; end: 10155c26b;  */

void FUN_10155c10c(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  long unaff_x20;
  long lVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(*(long *)(param_2 + 0x10) + 0x10) == 0) {
    if (((param_3 & 1) == 0) && (*(long *)(unaff_x20 + 0x10) != 0)) {
      lVar1 = 1;
      func_0x000107c4be2c(*(long *)(unaff_x20 + 0x10),param_3,1,*(undefined1 *)(unaff_x20 + 0x18),
                          param_4);
      uStack_78 = 0;
      uStack_70 = 0;
      lStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      param_2 = 0;
      goto LAB_10155c240;
    }
  }
  else {
    FUN_10155c26c(&uStack_78);
    FUN_10154f9fc();
    lVar1 = param_4;
    if (lStack_68 != 1) {
      func_0x000107c61434(uStack_58);
      func_0x000107c61434(lStack_68);
      func_0x000101553c50(uStack_78,uStack_70,lStack_68,uStack_60,uStack_58);
      func_0x000101553c50(0,0,1,0,0);
      goto LAB_10155c240;
    }
    if (param_4 != 0) {
      lStack_68 = 1;
      goto LAB_10155c240;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x000107c4be2c();
    }
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_2 = 0;
  lVar1 = 1;
LAB_10155c240:
  *param_1 = uStack_78;
  param_1[1] = uStack_70;
  param_1[2] = lStack_68;
  param_1[3] = uStack_60;
  param_1[4] = uStack_58;
  param_1[5] = param_2;
  param_1[6] = lVar1;
  return;
}



/* Entry: 10155c26c; end: 10155c49b;  */

void FUN_10155c26c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long extraout_x8;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_90 [4];
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar9 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar9 + 0x10) != 0) {
    uVar13 = *(undefined8 *)(lVar9 + 0x20);
    uVar14 = *(ulong *)(lVar9 + 0x30);
    uVar4 = *(ulong *)(lVar9 + 0x38);
    uVar2 = *(undefined8 *)(lVar9 + 0x40);
    uVar5 = *(undefined8 *)(lVar9 + 0x48);
    uVar3 = *(undefined8 *)(lVar9 + 0x50);
    uVar6 = *(undefined8 *)(lVar9 + 0x58);
    uVar7 = (uint)(uVar4 >> 0x20);
    uVar10 = uVar7 >> 0x1e;
    uStack_68 = param_3;
    if (uVar7 >> 0x1e < 2) {
      if (uVar10 == 0) {
        if ((uVar4 >> 0x30 & 0xff) != 0) {
LAB_10155c32c:
          uStack_8c = (uint)*(byte *)(lVar9 + 0x28);
          func_0x00010006c00c(uVar14,uVar4);
          uStack_88 = uVar2;
          uStack_80 = uVar5;
          func_0x00010006c00c(uVar2,uVar5);
          uStack_78 = uVar3;
          uStack_70 = uVar6;
          func_0x00010006c00c(uVar3,uVar6);
          func_0x000107c5fb04(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          uVar15 = uVar14;
          uVar12 = uVar4;
          func_0x000107c5faf0(uVar14,uVar4,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          if (uVar12 != 0) {
            uVar1 = uVar15 & 0xffffffffffff;
            if ((uVar12 & 0x2000000000000000) != 0) {
              uVar1 = uVar12 >> 0x38 & 0xf;
            }
            if (uVar1 != 0) {
              if (uStack_8c != 1) {
                if (*(long *)(unaff_x20 + 0x10) != 0) {
                  func_0x000107c4be2c();
                }
                uVar13 = 5;
              }
              func_0x00010006c090(uVar14,uVar4);
              func_0x00010006c090(uStack_88,uStack_80);
              func_0x00010006c090(uStack_78,uStack_70);
              func_0x000107c61434(uVar12);
              uVar14 = uVar12;
              goto LAB_10155c468;
            }
            func_0x000107c6142c(uVar12);
          }
          if (*(long *)(unaff_x20 + 0x10) != 0) {
            func_0x000107c4be2c();
          }
          func_0x00010006c090(uVar14,uVar4);
          func_0x00010006c090(uStack_88,uStack_80);
          func_0x00010006c090(uStack_78,uStack_70);
          goto LAB_10155c458;
        }
      }
      else {
        iVar11 = (int)(uVar14 >> 0x20);
        if (SBORROW4(iVar11,(int)uVar14)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10155c49c);
          (*pcVar8)();
        }
        if (0 < iVar11 - (int)uVar14) goto LAB_10155c32c;
      }
    }
    else if (uVar10 == 2) {
      if (SBORROW8(*(long *)(uVar14 + 0x18),*(long *)(uVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10155c498);
        (*pcVar8)();
      }
      if (0 < *(long *)(uVar14 + 0x18) - *(long *)(uVar14 + 0x10)) goto LAB_10155c32c;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x000107c4be2c();
    }
  }
LAB_10155c458:
  uVar13 = 0;
  uVar15 = 0;
  uVar12 = 0;
  uVar14 = 1;
LAB_10155c468:
  *param_1 = uVar13;
  param_1[1] = uVar15;
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  param_1[4] = uVar12;
  return;
}



/* Entry: 10155c49c; end: 10155c587;  */

void FUN_10155c49c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db4280,&UNK_10d95e7c0);
  puVar1 = &UNK_1103dcef0;
  func_0x000107c613fc(&UNK_1103dcef0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10155c588,puVar1);
  return;
}



/* Entry: 10155c588; end: 10155c58f;  */

void FUN_10155c588(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_31,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_10155c604();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x18) = uStack_31;
  *(undefined8 *)(lVar1 + 0x10) = uStack_40;
  *param_1 = lVar1;
  return;
}



/* Entry: 10155c590; end: 10155c5cf;  */

void FUN_10155c590(undefined1 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10155c5d0; end: 10155c5f3;  */

void FUN_10155c5d0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10155c5f4; end: 10155c603;  */

undefined1  [16] FUN_10155c5f4(void)

{
  return ZEXT816(0x1103dcf18);
}



/* Entry: 10155c604; end: 10155c727;  */

void FUN_10155c604(void)

{
  func_0x000107c61168(&PTR_PTR_112db42c8);
  return;
}



/* Entry: 10155c728; end: 10155c94f;  */

undefined * FUN_10155c728(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  char cVar9;
  undefined1 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 != 0) {
    func_0x00010155299c(0,lVar19,0);
    lVar21 = 0;
    puVar17 = puVar11;
    do {
      puVar12 = (undefined8 *)(param_1 + 0x20 + lVar21 * 0x38);
      uVar1 = *puVar12;
      uVar5 = puVar12[1];
      uVar13 = puVar12[2];
      cVar9 = *(char *)(puVar12 + 3);
      lVar16 = puVar12[4];
      lVar20 = *(long *)(lVar16 + 0x10);
      if (lVar20 == 0) {
        func_0x000107c61434();
        puVar18 = puVar17;
      }
      else {
        uVar2 = puVar12[5];
        uVar6 = puVar12[6];
        func_0x000107c61438(uVar5,2);
        func_0x000107c61434(lVar16);
        func_0x00010006c00c(uVar2,uVar6);
        func_0x0001015529b8(0,lVar20,0);
        puVar12 = (undefined8 *)(lVar16 + 0x28);
        do {
          uVar3 = puVar12[-1];
          uVar7 = *puVar12;
          lVar15 = puVar12[1];
          lVar14 = puVar12[3];
          uVar10 = *(undefined1 *)((long)puVar12 + 0x21);
          uVar4 = *(ulong *)(puVar17 + 0x10);
          uVar8 = *(ulong *)(puVar17 + 0x18);
          func_0x000107c61434(uVar7);
          if (uVar8 >> 1 <= uVar4) {
            func_0x0001015529b8(1 < uVar8,uVar4 + 1,1);
          }
          *(ulong *)(puVar17 + 0x10) = uVar4 + 1;
          *(undefined8 *)(puVar17 + uVar4 * 0x18 + 0x20) = uVar3;
          *(undefined8 *)(puVar17 + uVar4 * 0x18 + 0x28) = uVar7;
          puVar17[uVar4 * 0x18 + 0x30] = lVar15 != 2;
          puVar17[uVar4 * 0x18 + 0x31] = lVar14 == 2;
          puVar17[uVar4 * 0x18 + 0x32] = uVar10;
          puVar12 = puVar12 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        func_0x000107c6142c(lVar16);
        func_0x000107c6142c(uVar5);
        func_0x00010006c090(uVar2,uVar6);
        puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      if (cVar9 != '\x01') {
        uVar13 = 0;
      }
      uVar4 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar4) {
        func_0x00010155299c(1 < *(ulong *)(puVar11 + 0x18),uVar4 + 1,1);
      }
      lVar21 = lVar21 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar11 + uVar4 * 0x20 + 0x20) = uVar1;
      *(undefined8 *)(puVar11 + uVar4 * 0x20 + 0x28) = uVar5;
      *(undefined8 *)(puVar11 + uVar4 * 0x20 + 0x30) = uVar13;
      *(undefined **)(puVar11 + uVar4 * 0x20 + 0x38) = puVar17;
      puVar17 = puVar18;
    } while (lVar21 != lVar19);
  }
  return puVar11;
}



/* Entry: 10155c950; end: 10155c9eb;  */

uint FUN_10155c950(ulong param_1,uint param_2,long param_3)

{
  double dVar1;
  
  if ((int)param_1 == 0xf) {
LAB_10155c9b0:
    param_2 = 0;
  }
  else {
    func_0x000107c61168(PTR_PTR_1126afec0);
    dVar1 = 12.0;
    func_0x000107c51b38();
    if (((double)param_3 < dVar1) && (param_1 < 0x16)) {
      if ((1L << (param_1 & 0x3f) & 0x221864U) != 0) goto LAB_10155c9b0;
      if ((1L << (param_1 & 0x3f) & 0x2100U) != 0) {
        param_2 = param_2 ^ 1;
        goto LAB_10155c9d8;
      }
    }
    param_2 = 1;
  }
LAB_10155c9d8:
  return param_2 & 1;
}



/* Entry: 10155c9ec; end: 10155ca3b;  */

undefined1  [16] FUN_10155c9ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x10),
                      *(undefined8 *)(param_3 + 0x18));
  return auVar1;
}



/* Entry: 10155ca3c; end: 10155ca5b;  */

void FUN_10155ca3c(void)

{
  func_0x000107c61168(&PTR_PTR_112db4428);
  return;
}



/* Entry: 10155ca5c; end: 10155caeb;  */

undefined1  [16] FUN_10155ca5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x20,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x20),
                      *(undefined8 *)(param_3 + 0x28));
  return auVar1;
}



/* Entry: 10155caec; end: 10155cd9f;  */

void FUN_10155caec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_578 [232];
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
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
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uStack_a8 = *(undefined8 *)(param_4 + 0xf8);
  uStack_b0 = *(undefined8 *)(param_4 + 0xf0);
  uStack_188 = *(undefined8 *)(param_4 + 0x108);
  uStack_190 = *(undefined8 *)(param_4 + 0x100);
  uStack_98 = *(undefined8 *)(param_4 + 0x108);
  uStack_a0 = *(undefined8 *)(param_4 + 0x100);
  uStack_178 = *(undefined8 *)(param_4 + 0x118);
  uStack_180 = *(undefined8 *)(param_4 + 0x110);
  uStack_e8 = *(undefined8 *)(param_4 + 0xb8);
  uStack_f0 = *(undefined8 *)(param_4 + 0xb0);
  uStack_1c8 = *(undefined8 *)(param_4 + 200);
  uStack_1d0 = *(undefined8 *)(param_4 + 0xc0);
  uStack_d8 = *(undefined8 *)(param_4 + 200);
  uStack_e0 = *(undefined8 *)(param_4 + 0xc0);
  uStack_1b8 = *(undefined8 *)(param_4 + 0xd8);
  uStack_1c0 = *(undefined8 *)(param_4 + 0xd0);
  uStack_c8 = *(undefined8 *)(param_4 + 0xd8);
  uStack_d0 = *(undefined8 *)(param_4 + 0xd0);
  uStack_1a8 = *(undefined8 *)(param_4 + 0xe8);
  uStack_1b0 = *(undefined8 *)(param_4 + 0xe0);
  uStack_b8 = *(undefined8 *)(param_4 + 0xe8);
  uStack_c0 = *(undefined8 *)(param_4 + 0xe0);
  uStack_198 = *(undefined8 *)(param_4 + 0xf8);
  uStack_1a0 = *(undefined8 *)(param_4 + 0xf0);
  uStack_128 = *(undefined8 *)(param_4 + 0x78);
  uStack_130 = *(undefined8 *)(param_4 + 0x70);
  uStack_208 = *(undefined8 *)(param_4 + 0x88);
  uStack_210 = *(undefined8 *)(param_4 + 0x80);
  uStack_118 = *(undefined8 *)(param_4 + 0x88);
  uStack_120 = *(undefined8 *)(param_4 + 0x80);
  uStack_1f8 = *(undefined8 *)(param_4 + 0x98);
  uStack_200 = *(undefined8 *)(param_4 + 0x90);
  uStack_108 = *(undefined8 *)(param_4 + 0x98);
  uStack_110 = *(undefined8 *)(param_4 + 0x90);
  uStack_1e8 = *(undefined8 *)(param_4 + 0xa8);
  uStack_1f0 = *(undefined8 *)(param_4 + 0xa0);
  uStack_f8 = *(undefined8 *)(param_4 + 0xa8);
  uStack_100 = *(undefined8 *)(param_4 + 0xa0);
  uStack_1d8 = *(undefined8 *)(param_4 + 0xb8);
  uStack_1e0 = *(undefined8 *)(param_4 + 0xb0);
  uStack_248 = *(undefined8 *)(param_4 + 0x48);
  uStack_250 = *(undefined8 *)(param_4 + 0x40);
  uStack_238 = *(undefined8 *)(param_4 + 0x58);
  uStack_240 = *(undefined8 *)(param_4 + 0x50);
  uStack_228 = *(undefined8 *)(param_4 + 0x68);
  uStack_230 = *(undefined8 *)(param_4 + 0x60);
  uStack_218 = *(undefined8 *)(param_4 + 0x78);
  uStack_220 = *(undefined8 *)(param_4 + 0x70);
  uStack_158 = *(undefined8 *)(param_4 + 0x48);
  uStack_160 = *(undefined8 *)(param_4 + 0x40);
  uStack_148 = *(undefined8 *)(param_4 + 0x58);
  uStack_150 = *(undefined8 *)(param_4 + 0x50);
  uStack_138 = *(undefined8 *)(param_4 + 0x68);
  uStack_140 = *(undefined8 *)(param_4 + 0x60);
  uStack_88 = *(undefined8 *)(param_4 + 0x118);
  uStack_90 = *(undefined8 *)(param_4 + 0x110);
  uStack_170 = *(undefined8 *)(param_4 + 0x120);
  uStack_80 = *(undefined8 *)(param_4 + 0x120);
  iVar13 = (int)&uStack_250;
  FUN_101567130();
  if (iVar13 != 1) {
    uStack_2d8 = uStack_98;
    uStack_2e0 = uStack_a0;
    uStack_2c8 = uStack_88;
    uStack_2d0 = uStack_90;
    uStack_2c0 = uStack_80;
    uStack_318 = uStack_d8;
    uStack_320 = uStack_e0;
    uStack_308 = uStack_c8;
    uStack_310 = uStack_d0;
    uStack_2f8 = uStack_b8;
    uStack_300 = uStack_c0;
    uStack_2e8 = uStack_a8;
    uStack_2f0 = uStack_b0;
    uStack_358 = uStack_118;
    uStack_360 = uStack_120;
    uStack_348 = uStack_108;
    uStack_350 = uStack_110;
    uStack_338 = uStack_f8;
    uStack_340 = uStack_100;
    uStack_328 = uStack_e8;
    uStack_330 = uStack_f0;
    uStack_398 = uStack_158;
    uStack_3a0 = uStack_160;
    uStack_388 = uStack_148;
    uStack_390 = uStack_150;
    uStack_378 = uStack_138;
    uStack_380 = uStack_140;
    uStack_368 = uStack_128;
    uStack_370 = uStack_130;
    iVar13 = (int)&uStack_160;
    func_0x000101567154();
    if (iVar13 == 1) {
      puVar14 = &uStack_3a0;
      FUN_100cb5088();
      uVar19 = puVar14[0x10];
      uVar18 = puVar14[0xf];
      uVar15 = puVar14[0xd];
      uVar11 = *(undefined1 *)(puVar14 + 0xe);
      uVar12 = *(undefined1 *)(puVar14 + 0xc);
      uVar1 = puVar14[10];
      uVar6 = puVar14[0xb];
      uVar2 = puVar14[8];
      uVar7 = puVar14[9];
      uVar3 = puVar14[6];
      uVar8 = puVar14[7];
      uVar4 = puVar14[4];
      uVar9 = puVar14[5];
      uVar17 = puVar14[3];
      uVar16 = puVar14[2];
      uVar5 = *puVar14;
      uVar10 = puVar14[1];
      uStack_3c8 = uStack_188;
      uStack_3d0 = uStack_190;
      uStack_3b8 = uStack_178;
      uStack_3c0 = uStack_180;
      uStack_3b0 = uStack_170;
      uStack_428 = uStack_1e8;
      uStack_430 = uStack_1f0;
      uStack_418 = uStack_1d8;
      uStack_420 = uStack_1e0;
      uStack_408 = uStack_1c8;
      uStack_410 = uStack_1d0;
      uStack_3f8 = uStack_1b8;
      uStack_400 = uStack_1c0;
      uStack_3e8 = uStack_1a8;
      uStack_3f0 = uStack_1b0;
      uStack_3d8 = uStack_198;
      uStack_3e0 = uStack_1a0;
      uStack_448 = uStack_208;
      uStack_450 = uStack_210;
      uStack_438 = uStack_1f8;
      uStack_440 = uStack_200;
      uStack_488 = uStack_248;
      uStack_490 = uStack_250;
      uStack_478 = uStack_238;
      uStack_480 = uStack_240;
      uStack_468 = uStack_228;
      uStack_470 = uStack_230;
      uStack_458 = uStack_218;
      uStack_460 = uStack_220;
      FUN_101567160(&uStack_490,auStack_578);
      uStack_288 = puVar14[0x16];
      uStack_290 = puVar14[0x15];
      uStack_278 = puVar14[0x18];
      uStack_280 = puVar14[0x17];
      uStack_268 = puVar14[0x1a];
      uStack_270 = puVar14[0x19];
      uStack_258 = puVar14[0x1c];
      uStack_260 = puVar14[0x1b];
      uStack_2a8 = puVar14[0x12];
      uStack_2b0 = puVar14[0x11];
      uStack_298 = puVar14[0x14];
      uStack_2a0 = puVar14[0x13];
      uStack_338 = uVar15;
      uStack_350 = uVar1;
      uStack_348 = uVar6;
      uStack_360 = uVar2;
      uStack_358 = uVar7;
      uStack_370 = uVar3;
      uStack_368 = uVar8;
      uStack_380 = uVar4;
      uStack_378 = uVar9;
      uStack_3a0 = uVar5;
      uStack_398 = uVar10;
      uStack_328 = uVar18;
      uStack_320 = uVar19;
      uStack_390 = uVar16;
      uStack_388 = uVar17;
      uStack_340._0_1_ = uVar12;
      uStack_330._0_1_ = uVar11;
      goto LAB_10155cd34;
    }
  }
  FUN_10166462c(&uStack_3a0);
  uStack_288 = uStack_2f0;
  uStack_290 = uStack_2f8;
  uStack_278 = uStack_2e0;
  uStack_280 = uStack_2e8;
  uStack_268 = uStack_2d0;
  uStack_270 = uStack_2d8;
  uStack_258 = uStack_2c0;
  uStack_260 = uStack_2c8;
  uStack_2a8 = uStack_310;
  uStack_2b0 = uStack_318;
  uStack_298 = uStack_300;
  uStack_2a0 = uStack_308;
LAB_10155cd34:
  *param_1 = uStack_3a0;
  param_1[1] = uStack_398;
  param_1[3] = uStack_388;
  param_1[2] = uStack_390;
  param_1[4] = uStack_380;
  param_1[5] = uStack_378;
  param_1[6] = uStack_370;
  param_1[7] = uStack_368;
  param_1[8] = uStack_360;
  param_1[9] = uStack_358;
  param_1[10] = uStack_350;
  param_1[0xb] = uStack_348;
  *(undefined1 *)(param_1 + 0xc) = (undefined1)uStack_340;
  param_1[0xd] = uStack_338;
  *(undefined1 *)(param_1 + 0xe) = (undefined1)uStack_330;
  param_1[0x10] = uStack_320;
  param_1[0xf] = uStack_328;
  param_1[0x12] = uStack_2a8;
  param_1[0x11] = uStack_2b0;
  param_1[0x14] = uStack_298;
  param_1[0x13] = uStack_2a0;
  param_1[0x1c] = uStack_258;
  param_1[0x1b] = uStack_260;
  param_1[0x1a] = uStack_268;
  param_1[0x19] = uStack_270;
  param_1[0x18] = uStack_278;
  param_1[0x17] = uStack_280;
  param_1[0x16] = uStack_288;
  param_1[0x15] = uStack_290;
  return;
}



/* Entry: 10155cda0; end: 10155ce9f;  */

void FUN_10155cda0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x128,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x128));
  return;
}



/* Entry: 10155cea0; end: 10155d0c7;  */

void FUN_10155cea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [216];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte bStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte bStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 *puVar3;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x148),auStack_240,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x1f0);
  uStack_b0 = *(undefined8 *)(param_4 + 0x1e8);
  uStack_98 = *(undefined8 *)(param_4 + 0x200);
  uStack_a0 = *(undefined8 *)(param_4 + 0x1f8);
  uStack_88 = *(undefined8 *)(param_4 + 0x210);
  uStack_90 = *(undefined8 *)(param_4 + 0x208);
  uStack_80 = *(undefined8 *)(param_4 + 0x218);
  uStack_e8 = *(undefined8 *)(param_4 + 0x1b0);
  uStack_f0 = *(undefined8 *)(param_4 + 0x1a8);
  uStack_d8 = *(undefined8 *)(param_4 + 0x1c0);
  uStack_e0 = *(undefined8 *)(param_4 + 0x1b8);
  uStack_c8 = *(undefined8 *)(param_4 + 0x1d0);
  uStack_d0 = *(undefined8 *)(param_4 + 0x1c8);
  uStack_b8 = *(undefined8 *)(param_4 + 0x1e0);
  uStack_c0 = *(undefined8 *)(param_4 + 0x1d8);
  uStack_128 = *(undefined8 *)(param_4 + 0x170);
  uStack_130 = *(undefined8 *)(param_4 + 0x168);
  uStack_118 = *(undefined8 *)(param_4 + 0x180);
  uStack_120 = *(undefined8 *)(param_4 + 0x178);
  uStack_108 = *(undefined8 *)(param_4 + 400);
  uStack_110 = *(undefined8 *)(param_4 + 0x188);
  uStack_f8 = *(undefined8 *)(param_4 + 0x1a0);
  uStack_100 = *(undefined8 *)(param_4 + 0x198);
  uStack_148 = *(undefined8 *)(param_4 + 0x150);
  uStack_150 = *(undefined8 *)(param_4 + 0x148);
  uStack_138 = *(undefined8 *)(param_4 + 0x160);
  uStack_140 = *(undefined8 *)(param_4 + 0x158);
  iVar1 = (int)&uStack_150;
  FUN_101567240();
  if (iVar1 == 1) {
    puVar3 = &uStack_228;
    func_0x00010162f8d0(&uStack_228);
    uStack_328 = uStack_160;
    uStack_330 = uStack_168;
    uStack_338 = uStack_158;
    uStack_358 = uStack_180;
    uStack_360 = uStack_188;
    uStack_348 = uStack_170;
    uStack_350 = uStack_178;
    uStack_378 = uStack_190;
    uStack_380 = uStack_198;
    uStack_368 = uStack_1a0;
    uStack_370 = uStack_1a8;
    uStack_3a8 = uStack_1c0;
    uStack_3b0 = uStack_1c8;
    uStack_398 = uStack_1b0;
    uStack_3a0 = uStack_1b8;
    uStack_388 = uStack_1d8;
    uStack_3bc = uStack_1d0;
    uStack_3b8 = uStack_1e8;
  }
  else {
    uStack_3b8 = uStack_110;
    uStack_388 = uStack_100;
    uStack_3bc = (undefined1)uStack_f8;
    uStack_3a8 = uStack_e8;
    uStack_3b0 = uStack_f0;
    uStack_398 = uStack_d8;
    uStack_3a0 = uStack_e0;
    uStack_378 = uStack_b8;
    uStack_380 = uStack_c0;
    uStack_368 = uStack_c8;
    uStack_370 = uStack_d0;
    uStack_358 = uStack_a8;
    uStack_360 = uStack_b0;
    uStack_348 = uStack_98;
    uStack_350 = uStack_a0;
    uStack_328 = uStack_88;
    uStack_330 = uStack_90;
    uStack_338 = uStack_80;
    puVar3 = &uStack_150;
    uStack_220 = uStack_148;
    uStack_1e0 = uStack_108;
    uStack_200 = uStack_128;
    uStack_210 = uStack_138;
    uStack_1f8 = uStack_120;
    bStack_1f0 = (byte)uStack_118;
    bStack_218 = (byte)uStack_140;
    uStack_208 = (undefined1)uStack_130;
  }
  uVar2 = *puVar3;
  FUN_10156738c(&uStack_150,auStack_318,0x112db4338,&UNK_10d95e860);
  *param_1 = uVar2;
  param_1[1] = uStack_220;
  *(byte *)(param_1 + 2) = bStack_218 & 1;
  param_1[3] = uStack_210;
  *(undefined1 *)(param_1 + 4) = uStack_208;
  param_1[5] = uStack_200;
  param_1[6] = uStack_1f8;
  *(byte *)(param_1 + 7) = bStack_1f0 & 1;
  param_1[8] = uStack_3b8;
  param_1[9] = uStack_1e0;
  param_1[10] = uStack_388;
  *(undefined1 *)(param_1 + 0xb) = uStack_3bc;
  param_1[0xd] = uStack_3a8;
  param_1[0xc] = uStack_3b0;
  param_1[0xf] = uStack_398;
  param_1[0xe] = uStack_3a0;
  param_1[0x11] = uStack_368;
  param_1[0x10] = uStack_370;
  param_1[0x13] = uStack_378;
  param_1[0x12] = uStack_380;
  param_1[0x15] = uStack_358;
  param_1[0x14] = uStack_360;
  param_1[0x17] = uStack_348;
  param_1[0x16] = uStack_350;
  param_1[0x19] = uStack_328;
  param_1[0x18] = uStack_330;
  param_1[0x1a] = uStack_338;
  return;
}



/* Entry: 10155d0c8; end: 10155d4b3;  */

uint FUN_10155d0c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_8e8 [216];
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
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
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
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
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [24];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428((undefined8 *)(param_3 + 0x148),auStack_2e8,0,0);
  uStack_148 = *(undefined8 *)(param_3 + 0x1f0);
  uStack_150 = *(undefined8 *)(param_3 + 0x1e8);
  uStack_138 = *(undefined8 *)(param_3 + 0x200);
  uStack_140 = *(undefined8 *)(param_3 + 0x1f8);
  uStack_128 = *(undefined8 *)(param_3 + 0x210);
  uStack_130 = *(undefined8 *)(param_3 + 0x208);
  uStack_120 = *(undefined8 *)(param_3 + 0x218);
  uStack_188 = *(undefined8 *)(param_3 + 0x1b0);
  uStack_190 = *(undefined8 *)(param_3 + 0x1a8);
  uStack_178 = *(undefined8 *)(param_3 + 0x1c0);
  uStack_180 = *(undefined8 *)(param_3 + 0x1b8);
  uStack_168 = *(undefined8 *)(param_3 + 0x1d0);
  uStack_170 = *(undefined8 *)(param_3 + 0x1c8);
  uStack_158 = *(undefined8 *)(param_3 + 0x1e0);
  uStack_160 = *(undefined8 *)(param_3 + 0x1d8);
  uStack_1c8 = *(undefined8 *)(param_3 + 0x170);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x168);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x180);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x178);
  uStack_1a8 = *(undefined8 *)(param_3 + 400);
  uStack_1b0 = *(undefined8 *)(param_3 + 0x188);
  uStack_198 = *(undefined8 *)(param_3 + 0x1a0);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x198);
  uStack_1e8 = *(undefined8 *)(param_3 + 0x150);
  uStack_1f0 = *(undefined8 *)(param_3 + 0x148);
  uStack_1d8 = *(undefined8 *)(param_3 + 0x160);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x158);
  func_0x000101567258(&uStack_118);
  iVar2 = (int)&uStack_3c8;
  uStack_3f8 = uStack_148;
  uStack_400 = uStack_150;
  uStack_3e8 = uStack_138;
  uStack_3f0 = uStack_140;
  uStack_3d8 = uStack_128;
  uStack_3e0 = uStack_130;
  uStack_438 = uStack_188;
  uStack_440 = uStack_190;
  uStack_428 = uStack_178;
  uStack_430 = uStack_180;
  uStack_418 = uStack_168;
  uStack_420 = uStack_170;
  uStack_408 = uStack_158;
  uStack_410 = uStack_160;
  uStack_478 = uStack_1c8;
  uStack_480 = uStack_1d0;
  uStack_468 = uStack_1b8;
  uStack_470 = uStack_1c0;
  uStack_458 = uStack_1a8;
  uStack_460 = uStack_1b0;
  uStack_448 = uStack_198;
  uStack_450 = uStack_1a0;
  uStack_498 = uStack_1e8;
  uStack_4a0 = uStack_1f0;
  uStack_488 = uStack_1d8;
  uStack_490 = uStack_1e0;
  uStack_310 = uStack_60;
  uStack_318 = uStack_68;
  uStack_300 = uStack_50;
  uStack_308 = uStack_58;
  uStack_350 = uStack_a0;
  uStack_358 = uStack_a8;
  uStack_340 = uStack_90;
  uStack_348 = uStack_98;
  uStack_330 = uStack_80;
  uStack_338 = uStack_88;
  uStack_320 = uStack_70;
  uStack_328 = uStack_78;
  uStack_390 = uStack_e0;
  uStack_398 = uStack_e8;
  uStack_380 = uStack_d0;
  uStack_388 = uStack_d8;
  uStack_370 = uStack_c0;
  uStack_378 = uStack_c8;
  uStack_360 = uStack_b0;
  uStack_368 = uStack_b8;
  uStack_3a0 = uStack_f0;
  uStack_3a8 = uStack_f8;
  uStack_3c0 = uStack_110;
  uStack_3c8 = uStack_118;
  uStack_3d0 = uStack_120;
  uStack_2f8 = uStack_48;
  uStack_3b0 = uStack_100;
  uStack_3b8 = uStack_108;
  iVar1 = (int)&uStack_4a0;
  func_0x000101567240();
  if (iVar1 == 1) {
    func_0x000101567240();
    if (iVar2 == 1) {
      uStack_5a8 = uStack_3f8;
      uStack_5b0 = uStack_400;
      uStack_598 = uStack_3e8;
      uStack_5a0 = uStack_3f0;
      uStack_588 = uStack_3d8;
      uStack_590 = uStack_3e0;
      uStack_580 = uStack_3d0;
      uStack_5e8 = uStack_438;
      uStack_5f0 = uStack_440;
      uStack_5d8 = uStack_428;
      uStack_5e0 = uStack_430;
      uStack_5c8 = uStack_418;
      uStack_5d0 = uStack_420;
      uStack_5b8 = uStack_408;
      uStack_5c0 = uStack_410;
      uStack_628 = uStack_478;
      uStack_630 = uStack_480;
      uStack_618 = uStack_468;
      uStack_620 = uStack_470;
      uStack_608 = uStack_458;
      uStack_610 = uStack_460;
      uStack_5f8 = uStack_448;
      uStack_600 = uStack_450;
      uStack_648 = uStack_498;
      uStack_650 = uStack_4a0;
      uStack_638 = uStack_488;
      uStack_640 = uStack_490;
      FUN_10156738c(&uStack_1f0,&uStack_2d0,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_650,0x112db4338,&UNK_10d95e860);
      uVar4 = 0;
      goto LAB_10155d498;
    }
  }
  else {
    uStack_688 = uStack_3f8;
    uStack_690 = uStack_400;
    uStack_678 = uStack_3e8;
    uStack_680 = uStack_3f0;
    uStack_668 = uStack_3d8;
    uStack_670 = uStack_3e0;
    uStack_660 = uStack_3d0;
    uStack_6c8 = uStack_438;
    uStack_6d0 = uStack_440;
    uStack_6b8 = uStack_428;
    uStack_6c0 = uStack_430;
    uStack_6a8 = uStack_418;
    uStack_6b0 = uStack_420;
    uStack_698 = uStack_408;
    uStack_6a0 = uStack_410;
    uStack_708 = uStack_478;
    uStack_710 = uStack_480;
    uStack_6f8 = uStack_468;
    uStack_700 = uStack_470;
    uStack_6e8 = uStack_458;
    uStack_6f0 = uStack_460;
    uStack_6d8 = uStack_448;
    uStack_6e0 = uStack_450;
    uStack_728 = uStack_498;
    uStack_730 = uStack_4a0;
    uStack_718 = uStack_488;
    uStack_720 = uStack_490;
    func_0x000101567240();
    if (iVar2 != 1) {
      uStack_768 = uStack_320;
      uStack_770 = uStack_328;
      uStack_758 = uStack_310;
      uStack_760 = uStack_318;
      uStack_748 = uStack_300;
      uStack_750 = uStack_308;
      uStack_7a8 = uStack_360;
      uStack_7b0 = uStack_368;
      uStack_798 = uStack_350;
      uStack_7a0 = uStack_358;
      uStack_788 = uStack_340;
      uStack_790 = uStack_348;
      uStack_778 = uStack_330;
      uStack_780 = uStack_338;
      uStack_7e8 = uStack_3a0;
      uStack_7f0 = uStack_3a8;
      uStack_7d8 = uStack_390;
      uStack_7e0 = uStack_398;
      uStack_7c8 = uStack_380;
      uStack_7d0 = uStack_388;
      uStack_7b8 = uStack_370;
      uStack_7c0 = uStack_378;
      uStack_808 = uStack_3c0;
      uStack_810 = uStack_3c8;
      uStack_7f8 = uStack_3b0;
      uStack_800 = uStack_3b8;
      uStack_5a8 = uStack_320;
      uStack_5b0 = uStack_328;
      uStack_598 = uStack_310;
      uStack_5a0 = uStack_318;
      uStack_588 = uStack_300;
      uStack_590 = uStack_308;
      uStack_5e8 = uStack_360;
      uStack_5f0 = uStack_368;
      uStack_5d8 = uStack_350;
      uStack_5e0 = uStack_358;
      uStack_5c8 = uStack_340;
      uStack_5d0 = uStack_348;
      uStack_5b8 = uStack_330;
      uStack_5c0 = uStack_338;
      uStack_628 = uStack_3a0;
      uStack_630 = uStack_3a8;
      uStack_618 = uStack_390;
      uStack_620 = uStack_398;
      uStack_608 = uStack_380;
      uStack_610 = uStack_388;
      uStack_5f8 = uStack_370;
      uStack_600 = uStack_378;
      uStack_740 = uStack_2f8;
      uStack_580 = uStack_2f8;
      uStack_648 = uStack_3c0;
      uStack_650 = uStack_3c8;
      uStack_638 = uStack_3b0;
      uStack_640 = uStack_3b8;
      uStack_228 = uStack_688;
      uStack_230 = uStack_690;
      uStack_218 = uStack_678;
      uStack_220 = uStack_680;
      uStack_208 = uStack_668;
      uStack_210 = uStack_670;
      uStack_200 = uStack_660;
      uStack_268 = uStack_6c8;
      uStack_270 = uStack_6d0;
      uStack_258 = uStack_6b8;
      uStack_260 = uStack_6c0;
      uStack_248 = uStack_6a8;
      uStack_250 = uStack_6b0;
      uStack_238 = uStack_698;
      uStack_240 = uStack_6a0;
      uStack_2a8 = uStack_708;
      uStack_2b0 = uStack_710;
      uStack_298 = uStack_6f8;
      uStack_2a0 = uStack_700;
      uStack_288 = uStack_6e8;
      uStack_290 = uStack_6f0;
      uStack_278 = uStack_6d8;
      uStack_280 = uStack_6e0;
      uStack_2c8 = uStack_728;
      uStack_2d0 = uStack_730;
      uStack_2b8 = uStack_718;
      uStack_2c0 = uStack_720;
      FUN_10156738c(&uStack_1f0,auStack_8e8,0x112db4338,&UNK_10d95e860);
      FUN_10156738c(&uStack_1f0,auStack_8e8,0x112db4338,&UNK_10d95e860);
      puVar3 = &uStack_2d0;
      FUN_10162fed8(puVar3,&uStack_650);
      FUN_101568ed8(&uStack_1f0,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_810,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_4a0,0x112db4338,&UNK_10d95e860);
      uVar4 = (uint)puVar3 ^ 1;
      goto LAB_10155d498;
    }
  }
  func_0x000107c610b4(&uStack_650,&uStack_4a0,0x1b0);
  FUN_10156738c(&uStack_1f0,&uStack_2d0,0x112db4338,&UNK_10d95e860);
  FUN_101568ed8(&uStack_650,0x112db4340,&UNK_10d95e868);
  uVar4 = 1;
LAB_10155d498:
  return uVar4 & 1;
}



/* Entry: 10155d4b4; end: 10155d567;  */

undefined1 FUN_10155d4b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x220,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x220);
}



/* Entry: 10155d568; end: 10155d687;  */

void FUN_10155d568(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_4 + 0x228);
  uVar2 = *(undefined8 *)(param_4 + 0x230);
  uVar3 = *(undefined8 *)(param_4 + 0x238);
  uVar4 = *(undefined8 *)(param_4 + 0x240);
  uVar5 = *(undefined8 *)(param_4 + 0x248);
  uVar6 = *(undefined8 *)(param_4 + 0x250);
  FUN_101568f34(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,&SUB_10006c00c);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}



/* Entry: 10155d688; end: 10155d703;  */

undefined1 FUN_10155d688(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 600,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 600);
}



/* Entry: 10155d704; end: 10155d927;  */

void FUN_10155d704(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [216];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte bStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte bStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 *puVar3;
  
  func_0x000107c61428(param_4 + 0x280,auStack_240,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x328);
  uStack_b0 = *(undefined8 *)(param_4 + 800);
  uStack_98 = *(undefined8 *)(param_4 + 0x338);
  uStack_a0 = *(undefined8 *)(param_4 + 0x330);
  uStack_88 = *(undefined8 *)(param_4 + 0x348);
  uStack_90 = *(undefined8 *)(param_4 + 0x340);
  uStack_80 = *(undefined8 *)(param_4 + 0x350);
  uStack_e8 = *(undefined8 *)(param_4 + 0x2e8);
  uStack_f0 = *(undefined8 *)(param_4 + 0x2e0);
  uStack_d8 = *(undefined8 *)(param_4 + 0x2f8);
  uStack_e0 = *(undefined8 *)(param_4 + 0x2f0);
  uStack_c8 = *(undefined8 *)(param_4 + 0x308);
  uStack_d0 = *(undefined8 *)(param_4 + 0x300);
  uStack_b8 = *(undefined8 *)(param_4 + 0x318);
  uStack_c0 = *(undefined8 *)(param_4 + 0x310);
  uStack_128 = *(undefined8 *)(param_4 + 0x2a8);
  uStack_130 = *(undefined8 *)(param_4 + 0x2a0);
  uStack_118 = *(undefined8 *)(param_4 + 0x2b8);
  uStack_120 = *(undefined8 *)(param_4 + 0x2b0);
  uStack_108 = *(undefined8 *)(param_4 + 0x2c8);
  uStack_110 = *(undefined8 *)(param_4 + 0x2c0);
  uStack_f8 = *(undefined8 *)(param_4 + 0x2d8);
  uStack_100 = *(undefined8 *)(param_4 + 0x2d0);
  uStack_148 = *(undefined8 *)(param_4 + 0x288);
  uStack_150 = *(undefined8 *)(param_4 + 0x280);
  uStack_138 = *(undefined8 *)(param_4 + 0x298);
  uStack_140 = *(undefined8 *)(param_4 + 0x290);
  iVar1 = (int)&uStack_150;
  FUN_101567240();
  if (iVar1 == 1) {
    puVar3 = &uStack_228;
    func_0x00010162f8d0(&uStack_228);
    uStack_328 = uStack_160;
    uStack_330 = uStack_168;
    uStack_338 = uStack_158;
    uStack_358 = uStack_180;
    uStack_360 = uStack_188;
    uStack_348 = uStack_170;
    uStack_350 = uStack_178;
    uStack_378 = uStack_190;
    uStack_380 = uStack_198;
    uStack_368 = uStack_1a0;
    uStack_370 = uStack_1a8;
    uStack_3a8 = uStack_1c0;
    uStack_3b0 = uStack_1c8;
    uStack_398 = uStack_1b0;
    uStack_3a0 = uStack_1b8;
    uStack_388 = uStack_1d8;
    uStack_3bc = uStack_1d0;
    uStack_3b8 = uStack_1e8;
  }
  else {
    uStack_3b8 = uStack_110;
    uStack_388 = uStack_100;
    uStack_3bc = (undefined1)uStack_f8;
    uStack_3a8 = uStack_e8;
    uStack_3b0 = uStack_f0;
    uStack_398 = uStack_d8;
    uStack_3a0 = uStack_e0;
    uStack_378 = uStack_b8;
    uStack_380 = uStack_c0;
    uStack_368 = uStack_c8;
    uStack_370 = uStack_d0;
    uStack_358 = uStack_a8;
    uStack_360 = uStack_b0;
    uStack_348 = uStack_98;
    uStack_350 = uStack_a0;
    uStack_328 = uStack_88;
    uStack_330 = uStack_90;
    uStack_338 = uStack_80;
    puVar3 = &uStack_150;
    uStack_220 = uStack_148;
    uStack_1e0 = uStack_108;
    uStack_200 = uStack_128;
    uStack_210 = uStack_138;
    uStack_1f8 = uStack_120;
    bStack_1f0 = (byte)uStack_118;
    bStack_218 = (byte)uStack_140;
    uStack_208 = (undefined1)uStack_130;
  }
  uVar2 = *puVar3;
  FUN_10156738c(&uStack_150,auStack_318,0x112db4338,&UNK_10d95e860);
  *param_1 = uVar2;
  param_1[1] = uStack_220;
  *(byte *)(param_1 + 2) = bStack_218 & 1;
  param_1[3] = uStack_210;
  *(undefined1 *)(param_1 + 4) = uStack_208;
  param_1[5] = uStack_200;
  param_1[6] = uStack_1f8;
  *(byte *)(param_1 + 7) = bStack_1f0 & 1;
  param_1[8] = uStack_3b8;
  param_1[9] = uStack_1e0;
  param_1[10] = uStack_388;
  *(undefined1 *)(param_1 + 0xb) = uStack_3bc;
  param_1[0xd] = uStack_3a8;
  param_1[0xc] = uStack_3b0;
  param_1[0xf] = uStack_398;
  param_1[0xe] = uStack_3a0;
  param_1[0x11] = uStack_368;
  param_1[0x10] = uStack_370;
  param_1[0x13] = uStack_378;
  param_1[0x12] = uStack_380;
  param_1[0x15] = uStack_358;
  param_1[0x14] = uStack_360;
  param_1[0x17] = uStack_348;
  param_1[0x16] = uStack_350;
  param_1[0x19] = uStack_328;
  param_1[0x18] = uStack_330;
  param_1[0x1a] = uStack_338;
  return;
}



/* Entry: 10155d928; end: 10155dcd3;  */

uint FUN_10155d928(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_8d8 [216];
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
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
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
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
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2d8 [24];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61428(param_3 + 0x280,auStack_2d8,0,0);
  uStack_138 = *(undefined8 *)(param_3 + 0x328);
  uStack_140 = *(undefined8 *)(param_3 + 800);
  uStack_128 = *(undefined8 *)(param_3 + 0x338);
  uStack_130 = *(undefined8 *)(param_3 + 0x330);
  uStack_118 = *(undefined8 *)(param_3 + 0x348);
  uStack_120 = *(undefined8 *)(param_3 + 0x340);
  uStack_110 = *(undefined8 *)(param_3 + 0x350);
  uStack_178 = *(undefined8 *)(param_3 + 0x2e8);
  uStack_180 = *(undefined8 *)(param_3 + 0x2e0);
  uStack_168 = *(undefined8 *)(param_3 + 0x2f8);
  uStack_170 = *(undefined8 *)(param_3 + 0x2f0);
  uStack_158 = *(undefined8 *)(param_3 + 0x308);
  uStack_160 = *(undefined8 *)(param_3 + 0x300);
  uStack_148 = *(undefined8 *)(param_3 + 0x318);
  uStack_150 = *(undefined8 *)(param_3 + 0x310);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x2a8);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x2a0);
  uStack_1a8 = *(undefined8 *)(param_3 + 0x2b8);
  uStack_1b0 = *(undefined8 *)(param_3 + 0x2b0);
  uStack_198 = *(undefined8 *)(param_3 + 0x2c8);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x2c0);
  uStack_188 = *(undefined8 *)(param_3 + 0x2d8);
  uStack_190 = *(undefined8 *)(param_3 + 0x2d0);
  uStack_1d8 = *(undefined8 *)(param_3 + 0x288);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x280);
  uStack_1c8 = *(undefined8 *)(param_3 + 0x298);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x290);
  func_0x000101567258(&uStack_108);
  iVar2 = (int)&uStack_3b8;
  uStack_3e8 = uStack_138;
  uStack_3f0 = uStack_140;
  uStack_3d8 = uStack_128;
  uStack_3e0 = uStack_130;
  uStack_3c8 = uStack_118;
  uStack_3d0 = uStack_120;
  uStack_428 = uStack_178;
  uStack_430 = uStack_180;
  uStack_418 = uStack_168;
  uStack_420 = uStack_170;
  uStack_408 = uStack_158;
  uStack_410 = uStack_160;
  uStack_3f8 = uStack_148;
  uStack_400 = uStack_150;
  uStack_468 = uStack_1b8;
  uStack_470 = uStack_1c0;
  uStack_458 = uStack_1a8;
  uStack_460 = uStack_1b0;
  uStack_448 = uStack_198;
  uStack_450 = uStack_1a0;
  uStack_438 = uStack_188;
  uStack_440 = uStack_190;
  uStack_488 = uStack_1d8;
  uStack_490 = uStack_1e0;
  uStack_478 = uStack_1c8;
  uStack_480 = uStack_1d0;
  uStack_300 = uStack_50;
  uStack_308 = uStack_58;
  uStack_2f0 = uStack_40;
  uStack_2f8 = uStack_48;
  uStack_340 = uStack_90;
  uStack_348 = uStack_98;
  uStack_330 = uStack_80;
  uStack_338 = uStack_88;
  uStack_320 = uStack_70;
  uStack_328 = uStack_78;
  uStack_310 = uStack_60;
  uStack_318 = uStack_68;
  uStack_380 = uStack_d0;
  uStack_388 = uStack_d8;
  uStack_370 = uStack_c0;
  uStack_378 = uStack_c8;
  uStack_360 = uStack_b0;
  uStack_368 = uStack_b8;
  uStack_350 = uStack_a0;
  uStack_358 = uStack_a8;
  uStack_390 = uStack_e0;
  uStack_398 = uStack_e8;
  uStack_3b0 = uStack_100;
  uStack_3b8 = uStack_108;
  uStack_3c0 = uStack_110;
  uStack_2e8 = uStack_38;
  uStack_3a0 = uStack_f0;
  uStack_3a8 = uStack_f8;
  iVar1 = (int)&uStack_490;
  func_0x000101567240();
  if (iVar1 == 1) {
    func_0x000101567240();
    if (iVar2 == 1) {
      uStack_598 = uStack_3e8;
      uStack_5a0 = uStack_3f0;
      uStack_588 = uStack_3d8;
      uStack_590 = uStack_3e0;
      uStack_578 = uStack_3c8;
      uStack_580 = uStack_3d0;
      uStack_570 = uStack_3c0;
      uStack_5d8 = uStack_428;
      uStack_5e0 = uStack_430;
      uStack_5c8 = uStack_418;
      uStack_5d0 = uStack_420;
      uStack_5b8 = uStack_408;
      uStack_5c0 = uStack_410;
      uStack_5a8 = uStack_3f8;
      uStack_5b0 = uStack_400;
      uStack_618 = uStack_468;
      uStack_620 = uStack_470;
      uStack_608 = uStack_458;
      uStack_610 = uStack_460;
      uStack_5f8 = uStack_448;
      uStack_600 = uStack_450;
      uStack_5e8 = uStack_438;
      uStack_5f0 = uStack_440;
      uStack_638 = uStack_488;
      uStack_640 = uStack_490;
      uStack_628 = uStack_478;
      uStack_630 = uStack_480;
      FUN_10156738c(&uStack_1e0,&uStack_2c0,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_640,0x112db4338,&UNK_10d95e860);
      uVar4 = 0;
      goto LAB_10155dcbc;
    }
  }
  else {
    uStack_678 = uStack_3e8;
    uStack_680 = uStack_3f0;
    uStack_668 = uStack_3d8;
    uStack_670 = uStack_3e0;
    uStack_658 = uStack_3c8;
    uStack_660 = uStack_3d0;
    uStack_650 = uStack_3c0;
    uStack_6b8 = uStack_428;
    uStack_6c0 = uStack_430;
    uStack_6a8 = uStack_418;
    uStack_6b0 = uStack_420;
    uStack_698 = uStack_408;
    uStack_6a0 = uStack_410;
    uStack_688 = uStack_3f8;
    uStack_690 = uStack_400;
    uStack_6f8 = uStack_468;
    uStack_700 = uStack_470;
    uStack_6e8 = uStack_458;
    uStack_6f0 = uStack_460;
    uStack_6d8 = uStack_448;
    uStack_6e0 = uStack_450;
    uStack_6c8 = uStack_438;
    uStack_6d0 = uStack_440;
    uStack_718 = uStack_488;
    uStack_720 = uStack_490;
    uStack_708 = uStack_478;
    uStack_710 = uStack_480;
    func_0x000101567240();
    if (iVar2 != 1) {
      uStack_758 = uStack_310;
      uStack_760 = uStack_318;
      uStack_748 = uStack_300;
      uStack_750 = uStack_308;
      uStack_738 = uStack_2f0;
      uStack_740 = uStack_2f8;
      uStack_798 = uStack_350;
      uStack_7a0 = uStack_358;
      uStack_788 = uStack_340;
      uStack_790 = uStack_348;
      uStack_778 = uStack_330;
      uStack_780 = uStack_338;
      uStack_768 = uStack_320;
      uStack_770 = uStack_328;
      uStack_7d8 = uStack_390;
      uStack_7e0 = uStack_398;
      uStack_7c8 = uStack_380;
      uStack_7d0 = uStack_388;
      uStack_7b8 = uStack_370;
      uStack_7c0 = uStack_378;
      uStack_7a8 = uStack_360;
      uStack_7b0 = uStack_368;
      uStack_7f8 = uStack_3b0;
      uStack_800 = uStack_3b8;
      uStack_7e8 = uStack_3a0;
      uStack_7f0 = uStack_3a8;
      uStack_598 = uStack_310;
      uStack_5a0 = uStack_318;
      uStack_588 = uStack_300;
      uStack_590 = uStack_308;
      uStack_578 = uStack_2f0;
      uStack_580 = uStack_2f8;
      uStack_5d8 = uStack_350;
      uStack_5e0 = uStack_358;
      uStack_5c8 = uStack_340;
      uStack_5d0 = uStack_348;
      uStack_5b8 = uStack_330;
      uStack_5c0 = uStack_338;
      uStack_5a8 = uStack_320;
      uStack_5b0 = uStack_328;
      uStack_618 = uStack_390;
      uStack_620 = uStack_398;
      uStack_608 = uStack_380;
      uStack_610 = uStack_388;
      uStack_5f8 = uStack_370;
      uStack_600 = uStack_378;
      uStack_5e8 = uStack_360;
      uStack_5f0 = uStack_368;
      uStack_730 = uStack_2e8;
      uStack_570 = uStack_2e8;
      uStack_638 = uStack_3b0;
      uStack_640 = uStack_3b8;
      uStack_628 = uStack_3a0;
      uStack_630 = uStack_3a8;
      uStack_218 = uStack_678;
      uStack_220 = uStack_680;
      uStack_208 = uStack_668;
      uStack_210 = uStack_670;
      uStack_1f8 = uStack_658;
      uStack_200 = uStack_660;
      uStack_1f0 = uStack_650;
      uStack_258 = uStack_6b8;
      uStack_260 = uStack_6c0;
      uStack_248 = uStack_6a8;
      uStack_250 = uStack_6b0;
      uStack_238 = uStack_698;
      uStack_240 = uStack_6a0;
      uStack_228 = uStack_688;
      uStack_230 = uStack_690;
      uStack_298 = uStack_6f8;
      uStack_2a0 = uStack_700;
      uStack_288 = uStack_6e8;
      uStack_290 = uStack_6f0;
      uStack_278 = uStack_6d8;
      uStack_280 = uStack_6e0;
      uStack_268 = uStack_6c8;
      uStack_270 = uStack_6d0;
      uStack_2b8 = uStack_718;
      uStack_2c0 = uStack_720;
      uStack_2a8 = uStack_708;
      uStack_2b0 = uStack_710;
      FUN_10156738c(&uStack_1e0,auStack_8d8,0x112db4338,&UNK_10d95e860);
      FUN_10156738c(&uStack_1e0,auStack_8d8,0x112db4338,&UNK_10d95e860);
      puVar3 = &uStack_2c0;
      FUN_10162fed8(puVar3,&uStack_640);
      FUN_101568ed8(&uStack_1e0,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_800,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_490,0x112db4338,&UNK_10d95e860);
      uVar4 = (uint)puVar3 ^ 1;
      goto LAB_10155dcbc;
    }
  }
  func_0x000107c610b4(&uStack_640,&uStack_490,0x1b0);
  FUN_10156738c(&uStack_1e0,&uStack_2c0,0x112db4338,&UNK_10d95e860);
  FUN_101568ed8(&uStack_640,0x112db4340,&UNK_10d95e868);
  uVar4 = 1;
LAB_10155dcbc:
  return uVar4 & 1;
}



/* Entry: 10155dcd4; end: 10155defb;  */

void FUN_10155dcd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack_3bc;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_318 [216];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte bStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte bStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 *puVar3;
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x358),auStack_240,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x400);
  uStack_b0 = *(undefined8 *)(param_4 + 0x3f8);
  uStack_98 = *(undefined8 *)(param_4 + 0x410);
  uStack_a0 = *(undefined8 *)(param_4 + 0x408);
  uStack_88 = *(undefined8 *)(param_4 + 0x420);
  uStack_90 = *(undefined8 *)(param_4 + 0x418);
  uStack_80 = *(undefined8 *)(param_4 + 0x428);
  uStack_e8 = *(undefined8 *)(param_4 + 0x3c0);
  uStack_f0 = *(undefined8 *)(param_4 + 0x3b8);
  uStack_d8 = *(undefined8 *)(param_4 + 0x3d0);
  uStack_e0 = *(undefined8 *)(param_4 + 0x3c8);
  uStack_c8 = *(undefined8 *)(param_4 + 0x3e0);
  uStack_d0 = *(undefined8 *)(param_4 + 0x3d8);
  uStack_b8 = *(undefined8 *)(param_4 + 0x3f0);
  uStack_c0 = *(undefined8 *)(param_4 + 1000);
  uStack_128 = *(undefined8 *)(param_4 + 0x380);
  uStack_130 = *(undefined8 *)(param_4 + 0x378);
  uStack_118 = *(undefined8 *)(param_4 + 0x390);
  uStack_120 = *(undefined8 *)(param_4 + 0x388);
  uStack_108 = *(undefined8 *)(param_4 + 0x3a0);
  uStack_110 = *(undefined8 *)(param_4 + 0x398);
  uStack_f8 = *(undefined8 *)(param_4 + 0x3b0);
  uStack_100 = *(undefined8 *)(param_4 + 0x3a8);
  uStack_148 = *(undefined8 *)(param_4 + 0x360);
  uStack_150 = *(undefined8 *)(param_4 + 0x358);
  uStack_138 = *(undefined8 *)(param_4 + 0x370);
  uStack_140 = *(undefined8 *)(param_4 + 0x368);
  iVar1 = (int)&uStack_150;
  FUN_101567240();
  if (iVar1 == 1) {
    puVar3 = &uStack_228;
    func_0x00010162f8d0(&uStack_228);
    uStack_328 = uStack_160;
    uStack_330 = uStack_168;
    uStack_338 = uStack_158;
    uStack_358 = uStack_180;
    uStack_360 = uStack_188;
    uStack_348 = uStack_170;
    uStack_350 = uStack_178;
    uStack_378 = uStack_190;
    uStack_380 = uStack_198;
    uStack_368 = uStack_1a0;
    uStack_370 = uStack_1a8;
    uStack_3a8 = uStack_1c0;
    uStack_3b0 = uStack_1c8;
    uStack_398 = uStack_1b0;
    uStack_3a0 = uStack_1b8;
    uStack_388 = uStack_1d8;
    uStack_3bc = uStack_1d0;
    uStack_3b8 = uStack_1e8;
  }
  else {
    uStack_3b8 = uStack_110;
    uStack_388 = uStack_100;
    uStack_3bc = (undefined1)uStack_f8;
    uStack_3a8 = uStack_e8;
    uStack_3b0 = uStack_f0;
    uStack_398 = uStack_d8;
    uStack_3a0 = uStack_e0;
    uStack_378 = uStack_b8;
    uStack_380 = uStack_c0;
    uStack_368 = uStack_c8;
    uStack_370 = uStack_d0;
    uStack_358 = uStack_a8;
    uStack_360 = uStack_b0;
    uStack_348 = uStack_98;
    uStack_350 = uStack_a0;
    uStack_328 = uStack_88;
    uStack_330 = uStack_90;
    uStack_338 = uStack_80;
    puVar3 = &uStack_150;
    uStack_220 = uStack_148;
    uStack_1e0 = uStack_108;
    uStack_200 = uStack_128;
    uStack_210 = uStack_138;
    uStack_1f8 = uStack_120;
    bStack_1f0 = (byte)uStack_118;
    bStack_218 = (byte)uStack_140;
    uStack_208 = (undefined1)uStack_130;
  }
  uVar2 = *puVar3;
  FUN_10156738c(&uStack_150,auStack_318,0x112db4338,&UNK_10d95e860);
  *param_1 = uVar2;
  param_1[1] = uStack_220;
  *(byte *)(param_1 + 2) = bStack_218 & 1;
  param_1[3] = uStack_210;
  *(undefined1 *)(param_1 + 4) = uStack_208;
  param_1[5] = uStack_200;
  param_1[6] = uStack_1f8;
  *(byte *)(param_1 + 7) = bStack_1f0 & 1;
  param_1[8] = uStack_3b8;
  param_1[9] = uStack_1e0;
  param_1[10] = uStack_388;
  *(undefined1 *)(param_1 + 0xb) = uStack_3bc;
  param_1[0xd] = uStack_3a8;
  param_1[0xc] = uStack_3b0;
  param_1[0xf] = uStack_398;
  param_1[0xe] = uStack_3a0;
  param_1[0x11] = uStack_368;
  param_1[0x10] = uStack_370;
  param_1[0x13] = uStack_378;
  param_1[0x12] = uStack_380;
  param_1[0x15] = uStack_358;
  param_1[0x14] = uStack_360;
  param_1[0x17] = uStack_348;
  param_1[0x16] = uStack_350;
  param_1[0x19] = uStack_328;
  param_1[0x18] = uStack_330;
  param_1[0x1a] = uStack_338;
  return;
}



/* Entry: 10155defc; end: 10155e2e7;  */

uint FUN_10155defc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_8e8 [216];
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
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
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
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
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [24];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428((undefined8 *)(param_3 + 0x358),auStack_2e8,0,0);
  uStack_148 = *(undefined8 *)(param_3 + 0x400);
  uStack_150 = *(undefined8 *)(param_3 + 0x3f8);
  uStack_138 = *(undefined8 *)(param_3 + 0x410);
  uStack_140 = *(undefined8 *)(param_3 + 0x408);
  uStack_128 = *(undefined8 *)(param_3 + 0x420);
  uStack_130 = *(undefined8 *)(param_3 + 0x418);
  uStack_120 = *(undefined8 *)(param_3 + 0x428);
  uStack_188 = *(undefined8 *)(param_3 + 0x3c0);
  uStack_190 = *(undefined8 *)(param_3 + 0x3b8);
  uStack_178 = *(undefined8 *)(param_3 + 0x3d0);
  uStack_180 = *(undefined8 *)(param_3 + 0x3c8);
  uStack_168 = *(undefined8 *)(param_3 + 0x3e0);
  uStack_170 = *(undefined8 *)(param_3 + 0x3d8);
  uStack_158 = *(undefined8 *)(param_3 + 0x3f0);
  uStack_160 = *(undefined8 *)(param_3 + 1000);
  uStack_1c8 = *(undefined8 *)(param_3 + 0x380);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x378);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x390);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x388);
  uStack_1a8 = *(undefined8 *)(param_3 + 0x3a0);
  uStack_1b0 = *(undefined8 *)(param_3 + 0x398);
  uStack_198 = *(undefined8 *)(param_3 + 0x3b0);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x3a8);
  uStack_1e8 = *(undefined8 *)(param_3 + 0x360);
  uStack_1f0 = *(undefined8 *)(param_3 + 0x358);
  uStack_1d8 = *(undefined8 *)(param_3 + 0x370);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x368);
  func_0x000101567258(&uStack_118);
  iVar2 = (int)&uStack_3c8;
  uStack_3f8 = uStack_148;
  uStack_400 = uStack_150;
  uStack_3e8 = uStack_138;
  uStack_3f0 = uStack_140;
  uStack_3d8 = uStack_128;
  uStack_3e0 = uStack_130;
  uStack_438 = uStack_188;
  uStack_440 = uStack_190;
  uStack_428 = uStack_178;
  uStack_430 = uStack_180;
  uStack_418 = uStack_168;
  uStack_420 = uStack_170;
  uStack_408 = uStack_158;
  uStack_410 = uStack_160;
  uStack_478 = uStack_1c8;
  uStack_480 = uStack_1d0;
  uStack_468 = uStack_1b8;
  uStack_470 = uStack_1c0;
  uStack_458 = uStack_1a8;
  uStack_460 = uStack_1b0;
  uStack_448 = uStack_198;
  uStack_450 = uStack_1a0;
  uStack_498 = uStack_1e8;
  uStack_4a0 = uStack_1f0;
  uStack_488 = uStack_1d8;
  uStack_490 = uStack_1e0;
  uStack_310 = uStack_60;
  uStack_318 = uStack_68;
  uStack_300 = uStack_50;
  uStack_308 = uStack_58;
  uStack_350 = uStack_a0;
  uStack_358 = uStack_a8;
  uStack_340 = uStack_90;
  uStack_348 = uStack_98;
  uStack_330 = uStack_80;
  uStack_338 = uStack_88;
  uStack_320 = uStack_70;
  uStack_328 = uStack_78;
  uStack_390 = uStack_e0;
  uStack_398 = uStack_e8;
  uStack_380 = uStack_d0;
  uStack_388 = uStack_d8;
  uStack_370 = uStack_c0;
  uStack_378 = uStack_c8;
  uStack_360 = uStack_b0;
  uStack_368 = uStack_b8;
  uStack_3a0 = uStack_f0;
  uStack_3a8 = uStack_f8;
  uStack_3c0 = uStack_110;
  uStack_3c8 = uStack_118;
  uStack_3d0 = uStack_120;
  uStack_2f8 = uStack_48;
  uStack_3b0 = uStack_100;
  uStack_3b8 = uStack_108;
  iVar1 = (int)&uStack_4a0;
  func_0x000101567240();
  if (iVar1 == 1) {
    func_0x000101567240();
    if (iVar2 == 1) {
      uStack_5a8 = uStack_3f8;
      uStack_5b0 = uStack_400;
      uStack_598 = uStack_3e8;
      uStack_5a0 = uStack_3f0;
      uStack_588 = uStack_3d8;
      uStack_590 = uStack_3e0;
      uStack_580 = uStack_3d0;
      uStack_5e8 = uStack_438;
      uStack_5f0 = uStack_440;
      uStack_5d8 = uStack_428;
      uStack_5e0 = uStack_430;
      uStack_5c8 = uStack_418;
      uStack_5d0 = uStack_420;
      uStack_5b8 = uStack_408;
      uStack_5c0 = uStack_410;
      uStack_628 = uStack_478;
      uStack_630 = uStack_480;
      uStack_618 = uStack_468;
      uStack_620 = uStack_470;
      uStack_608 = uStack_458;
      uStack_610 = uStack_460;
      uStack_5f8 = uStack_448;
      uStack_600 = uStack_450;
      uStack_648 = uStack_498;
      uStack_650 = uStack_4a0;
      uStack_638 = uStack_488;
      uStack_640 = uStack_490;
      FUN_10156738c(&uStack_1f0,&uStack_2d0,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_650,0x112db4338,&UNK_10d95e860);
      uVar4 = 0;
      goto LAB_10155e2cc;
    }
  }
  else {
    uStack_688 = uStack_3f8;
    uStack_690 = uStack_400;
    uStack_678 = uStack_3e8;
    uStack_680 = uStack_3f0;
    uStack_668 = uStack_3d8;
    uStack_670 = uStack_3e0;
    uStack_660 = uStack_3d0;
    uStack_6c8 = uStack_438;
    uStack_6d0 = uStack_440;
    uStack_6b8 = uStack_428;
    uStack_6c0 = uStack_430;
    uStack_6a8 = uStack_418;
    uStack_6b0 = uStack_420;
    uStack_698 = uStack_408;
    uStack_6a0 = uStack_410;
    uStack_708 = uStack_478;
    uStack_710 = uStack_480;
    uStack_6f8 = uStack_468;
    uStack_700 = uStack_470;
    uStack_6e8 = uStack_458;
    uStack_6f0 = uStack_460;
    uStack_6d8 = uStack_448;
    uStack_6e0 = uStack_450;
    uStack_728 = uStack_498;
    uStack_730 = uStack_4a0;
    uStack_718 = uStack_488;
    uStack_720 = uStack_490;
    func_0x000101567240();
    if (iVar2 != 1) {
      uStack_768 = uStack_320;
      uStack_770 = uStack_328;
      uStack_758 = uStack_310;
      uStack_760 = uStack_318;
      uStack_748 = uStack_300;
      uStack_750 = uStack_308;
      uStack_7a8 = uStack_360;
      uStack_7b0 = uStack_368;
      uStack_798 = uStack_350;
      uStack_7a0 = uStack_358;
      uStack_788 = uStack_340;
      uStack_790 = uStack_348;
      uStack_778 = uStack_330;
      uStack_780 = uStack_338;
      uStack_7e8 = uStack_3a0;
      uStack_7f0 = uStack_3a8;
      uStack_7d8 = uStack_390;
      uStack_7e0 = uStack_398;
      uStack_7c8 = uStack_380;
      uStack_7d0 = uStack_388;
      uStack_7b8 = uStack_370;
      uStack_7c0 = uStack_378;
      uStack_808 = uStack_3c0;
      uStack_810 = uStack_3c8;
      uStack_7f8 = uStack_3b0;
      uStack_800 = uStack_3b8;
      uStack_5a8 = uStack_320;
      uStack_5b0 = uStack_328;
      uStack_598 = uStack_310;
      uStack_5a0 = uStack_318;
      uStack_588 = uStack_300;
      uStack_590 = uStack_308;
      uStack_5e8 = uStack_360;
      uStack_5f0 = uStack_368;
      uStack_5d8 = uStack_350;
      uStack_5e0 = uStack_358;
      uStack_5c8 = uStack_340;
      uStack_5d0 = uStack_348;
      uStack_5b8 = uStack_330;
      uStack_5c0 = uStack_338;
      uStack_628 = uStack_3a0;
      uStack_630 = uStack_3a8;
      uStack_618 = uStack_390;
      uStack_620 = uStack_398;
      uStack_608 = uStack_380;
      uStack_610 = uStack_388;
      uStack_5f8 = uStack_370;
      uStack_600 = uStack_378;
      uStack_740 = uStack_2f8;
      uStack_580 = uStack_2f8;
      uStack_648 = uStack_3c0;
      uStack_650 = uStack_3c8;
      uStack_638 = uStack_3b0;
      uStack_640 = uStack_3b8;
      uStack_228 = uStack_688;
      uStack_230 = uStack_690;
      uStack_218 = uStack_678;
      uStack_220 = uStack_680;
      uStack_208 = uStack_668;
      uStack_210 = uStack_670;
      uStack_200 = uStack_660;
      uStack_268 = uStack_6c8;
      uStack_270 = uStack_6d0;
      uStack_258 = uStack_6b8;
      uStack_260 = uStack_6c0;
      uStack_248 = uStack_6a8;
      uStack_250 = uStack_6b0;
      uStack_238 = uStack_698;
      uStack_240 = uStack_6a0;
      uStack_2a8 = uStack_708;
      uStack_2b0 = uStack_710;
      uStack_298 = uStack_6f8;
      uStack_2a0 = uStack_700;
      uStack_288 = uStack_6e8;
      uStack_290 = uStack_6f0;
      uStack_278 = uStack_6d8;
      uStack_280 = uStack_6e0;
      uStack_2c8 = uStack_728;
      uStack_2d0 = uStack_730;
      uStack_2b8 = uStack_718;
      uStack_2c0 = uStack_720;
      FUN_10156738c(&uStack_1f0,auStack_8e8,0x112db4338,&UNK_10d95e860);
      FUN_10156738c(&uStack_1f0,auStack_8e8,0x112db4338,&UNK_10d95e860);
      puVar3 = &uStack_2d0;
      FUN_10162fed8(puVar3,&uStack_650);
      FUN_101568ed8(&uStack_1f0,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_810,0x112db4338,&UNK_10d95e860);
      FUN_101568ed8(&uStack_4a0,0x112db4338,&UNK_10d95e860);
      uVar4 = (uint)puVar3 ^ 1;
      goto LAB_10155e2cc;
    }
  }
  func_0x000107c610b4(&uStack_650,&uStack_4a0,0x1b0);
  FUN_10156738c(&uStack_1f0,&uStack_2d0,0x112db4338,&UNK_10d95e860);
  FUN_101568ed8(&uStack_650,0x112db4340,&UNK_10d95e868);
  uVar4 = 1;
LAB_10155e2cc:
  return uVar4 & 1;
}



/* Entry: 10155e2e8; end: 10155e50f;  */

void FUN_10155e2e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [224];
  undefined1 auStack_298 [24];
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
  undefined1 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  
  func_0x000107c61428(param_4 + 0x430,auStack_298,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x4d8);
  uStack_b0 = *(undefined8 *)(param_4 + 0x4d0);
  uStack_98 = *(undefined8 *)(param_4 + 0x4e8);
  uStack_a0 = *(undefined8 *)(param_4 + 0x4e0);
  uStack_88 = *(undefined8 *)(param_4 + 0x4f8);
  uStack_90 = *(undefined8 *)(param_4 + 0x4f0);
  uStack_78 = *(undefined8 *)(param_4 + 0x508);
  uStack_80 = *(undefined8 *)(param_4 + 0x500);
  uStack_e8 = *(undefined8 *)(param_4 + 0x498);
  uStack_f0 = *(undefined8 *)(param_4 + 0x490);
  uStack_d8 = *(undefined8 *)(param_4 + 0x4a8);
  uStack_e0 = *(undefined8 *)(param_4 + 0x4a0);
  uStack_c8 = *(undefined8 *)(param_4 + 0x4b8);
  uStack_d0 = *(undefined8 *)(param_4 + 0x4b0);
  uStack_b8 = *(undefined8 *)(param_4 + 0x4c8);
  uStack_c0 = *(undefined8 *)(param_4 + 0x4c0);
  uStack_128 = *(undefined8 *)(param_4 + 0x458);
  uStack_130 = *(undefined8 *)(param_4 + 0x450);
  uStack_118 = *(undefined8 *)(param_4 + 0x468);
  uStack_120 = *(undefined8 *)(param_4 + 0x460);
  uStack_108 = *(undefined8 *)(param_4 + 0x478);
  uStack_110 = *(undefined8 *)(param_4 + 0x470);
  uStack_f8 = *(undefined8 *)(param_4 + 0x488);
  uStack_100 = *(undefined8 *)(param_4 + 0x480);
  uStack_148 = *(undefined8 *)(param_4 + 0x438);
  uStack_150 = *(undefined8 *)(param_4 + 0x430);
  uStack_138 = *(undefined8 *)(param_4 + 0x448);
  uStack_140 = *(undefined8 *)(param_4 + 0x440);
  iVar1 = (int)&uStack_150;
  func_0x000101567280();
  if (iVar1 == 1) {
    FUN_101666f10(&uStack_280);
    uStack_178 = uStack_1c0;
    uStack_180 = uStack_1c8;
    uStack_168 = uStack_1b0;
    uStack_170 = uStack_1b8;
    uStack_160 = uStack_1a8;
    uStack_198 = uStack_1e0;
    uStack_1a0 = uStack_1e8;
    uStack_188 = uStack_1d0;
    uStack_190 = uStack_1d8;
    uStack_388 = uStack_1f0;
    uStack_390 = uStack_1f8;
    uStack_380 = uStack_208;
    uStack_39c = uStack_200;
    uStack_398 = uStack_218;
    uStack_3b0 = uStack_210;
    uStack_3a8 = uStack_228;
    uStack_3c8 = uStack_278;
    uStack_3d0 = uStack_280;
    uStack_3b8 = uStack_268;
    uStack_3c0 = uStack_270;
  }
  else {
    uStack_3c8 = uStack_148;
    uStack_3d0 = uStack_150;
    uStack_3b8 = uStack_138;
    uStack_3c0 = uStack_140;
    uStack_398 = uStack_e8;
    uStack_3b0 = uStack_e0;
    uStack_3a8 = uStack_f8;
    uStack_380 = uStack_d8;
    uStack_39c = (undefined1)uStack_d0;
    uStack_388 = uStack_c0;
    uStack_390 = uStack_c8;
    uStack_160 = uStack_78;
    uStack_178 = uStack_90;
    uStack_180 = uStack_98;
    uStack_168 = uStack_80;
    uStack_170 = uStack_88;
    uStack_198 = uStack_b0;
    uStack_1a0 = uStack_b8;
    uStack_188 = uStack_a0;
    uStack_190 = uStack_a8;
    uStack_248 = uStack_118;
    uStack_240 = uStack_110;
    uStack_258 = uStack_128;
    uStack_250 = uStack_120;
    uStack_260 = uStack_130;
    uStack_220 = uStack_f0;
    uStack_238 = uStack_108;
    uStack_230 = (undefined1)uStack_100;
  }
  FUN_10156738c(&uStack_150,auStack_378,0x112db4348,&UNK_10d95e870);
  param_1[1] = uStack_3c8;
  *param_1 = uStack_3d0;
  param_1[3] = uStack_3b8;
  param_1[2] = uStack_3c0;
  param_1[4] = uStack_260;
  param_1[5] = uStack_258;
  param_1[6] = uStack_250;
  param_1[7] = uStack_248;
  param_1[8] = uStack_240;
  param_1[9] = uStack_238;
  *(undefined1 *)(param_1 + 10) = uStack_230;
  param_1[0xb] = uStack_3a8;
  param_1[0xc] = uStack_220;
  param_1[0xd] = uStack_398;
  param_1[0xe] = uStack_3b0;
  param_1[0xf] = uStack_380;
  *(undefined1 *)(param_1 + 0x10) = uStack_39c;
  param_1[0x12] = uStack_388;
  param_1[0x11] = uStack_390;
  param_1[0x14] = uStack_198;
  param_1[0x13] = uStack_1a0;
  param_1[0x1b] = uStack_160;
  param_1[0x1a] = uStack_168;
  param_1[0x19] = uStack_170;
  param_1[0x18] = uStack_178;
  param_1[0x17] = uStack_180;
  param_1[0x16] = uStack_188;
  param_1[0x15] = uStack_190;
  return;
}



/* Entry: 10155e510; end: 10155e937;  */

uint FUN_10155e510(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_910 [224];
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
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
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
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
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
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
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [24];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61428(param_3 + 0x430,auStack_2e8,0,0);
  uStack_148 = *(undefined8 *)(param_3 + 0x4d8);
  uStack_150 = *(undefined8 *)(param_3 + 0x4d0);
  uStack_138 = *(undefined8 *)(param_3 + 0x4e8);
  uStack_140 = *(undefined8 *)(param_3 + 0x4e0);
  uStack_128 = *(undefined8 *)(param_3 + 0x4f8);
  uStack_130 = *(undefined8 *)(param_3 + 0x4f0);
  uStack_118 = *(undefined8 *)(param_3 + 0x508);
  uStack_120 = *(undefined8 *)(param_3 + 0x500);
  uStack_188 = *(undefined8 *)(param_3 + 0x498);
  uStack_190 = *(undefined8 *)(param_3 + 0x490);
  uStack_178 = *(undefined8 *)(param_3 + 0x4a8);
  uStack_180 = *(undefined8 *)(param_3 + 0x4a0);
  uStack_168 = *(undefined8 *)(param_3 + 0x4b8);
  uStack_170 = *(undefined8 *)(param_3 + 0x4b0);
  uStack_158 = *(undefined8 *)(param_3 + 0x4c8);
  uStack_160 = *(undefined8 *)(param_3 + 0x4c0);
  uStack_1c8 = *(undefined8 *)(param_3 + 0x458);
  uStack_1d0 = *(undefined8 *)(param_3 + 0x450);
  uStack_1b8 = *(undefined8 *)(param_3 + 0x468);
  uStack_1c0 = *(undefined8 *)(param_3 + 0x460);
  uStack_1a8 = *(undefined8 *)(param_3 + 0x478);
  uStack_1b0 = *(undefined8 *)(param_3 + 0x470);
  uStack_198 = *(undefined8 *)(param_3 + 0x488);
  uStack_1a0 = *(undefined8 *)(param_3 + 0x480);
  uStack_1e8 = *(undefined8 *)(param_3 + 0x438);
  uStack_1f0 = *(undefined8 *)(param_3 + 0x430);
  uStack_1d8 = *(undefined8 *)(param_3 + 0x448);
  uStack_1e0 = *(undefined8 *)(param_3 + 0x440);
  func_0x000101567298(&uStack_110);
  uStack_408 = uStack_148;
  uStack_410 = uStack_150;
  uStack_3f8 = uStack_138;
  uStack_400 = uStack_140;
  uStack_3e8 = uStack_128;
  uStack_3f0 = uStack_130;
  uStack_3d8 = uStack_118;
  uStack_3e0 = uStack_120;
  uStack_448 = uStack_188;
  uStack_450 = uStack_190;
  uStack_438 = uStack_178;
  uStack_440 = uStack_180;
  uStack_428 = uStack_168;
  uStack_430 = uStack_170;
  uStack_418 = uStack_158;
  uStack_420 = uStack_160;
  uStack_488 = uStack_1c8;
  uStack_490 = uStack_1d0;
  uStack_478 = uStack_1b8;
  uStack_480 = uStack_1c0;
  uStack_468 = uStack_1a8;
  uStack_470 = uStack_1b0;
  uStack_458 = uStack_198;
  uStack_460 = uStack_1a0;
  uStack_4a8 = uStack_1e8;
  uStack_4b0 = uStack_1f0;
  uStack_498 = uStack_1d8;
  uStack_4a0 = uStack_1e0;
  uStack_328 = uStack_68;
  uStack_330 = uStack_70;
  uStack_318 = uStack_58;
  uStack_320 = uStack_60;
  uStack_308 = uStack_48;
  uStack_310 = uStack_50;
  uStack_2f8 = uStack_38;
  uStack_300 = uStack_40;
  uStack_368 = uStack_a8;
  uStack_370 = uStack_b0;
  uStack_358 = uStack_98;
  uStack_360 = uStack_a0;
  uStack_348 = uStack_88;
  uStack_350 = uStack_90;
  uStack_338 = uStack_78;
  uStack_340 = uStack_80;
  uStack_3a8 = uStack_e8;
  uStack_3b0 = uStack_f0;
  uStack_398 = uStack_d8;
  uStack_3a0 = uStack_e0;
  uStack_388 = uStack_c8;
  uStack_390 = uStack_d0;
  uStack_378 = uStack_b8;
  uStack_380 = uStack_c0;
  uStack_3c8 = uStack_108;
  uStack_3d0 = uStack_110;
  uStack_3b8 = uStack_f8;
  uStack_3c0 = uStack_100;
  iVar1 = (int)&uStack_4b0;
  func_0x000101567280();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_3d0;
    func_0x000101567280();
    if (iVar1 == 1) {
      uStack_5c8 = uStack_408;
      uStack_5d0 = uStack_410;
      uStack_5b8 = uStack_3f8;
      uStack_5c0 = uStack_400;
      uStack_5a8 = uStack_3e8;
      uStack_5b0 = uStack_3f0;
      uStack_598 = uStack_3d8;
      uStack_5a0 = uStack_3e0;
      uStack_608 = uStack_448;
      uStack_610 = uStack_450;
      uStack_5f8 = uStack_438;
      uStack_600 = uStack_440;
      uStack_5e8 = uStack_428;
      uStack_5f0 = uStack_430;
      uStack_5d8 = uStack_418;
      uStack_5e0 = uStack_420;
      uStack_648 = uStack_488;
      uStack_650 = uStack_490;
      uStack_638 = uStack_478;
      uStack_640 = uStack_480;
      uStack_628 = uStack_468;
      uStack_630 = uStack_470;
      uStack_618 = uStack_458;
      uStack_620 = uStack_460;
      uStack_668 = uStack_4a8;
      uStack_670 = uStack_4b0;
      uStack_658 = uStack_498;
      uStack_660 = uStack_4a0;
      FUN_10156738c(&uStack_1f0,&uStack_2d0,0x112db4348,&UNK_10d95e870);
      FUN_101568ed8(&uStack_670,0x112db4348,&UNK_10d95e870);
      uVar3 = 0;
      goto LAB_10155e920;
    }
  }
  else {
    uStack_6a8 = uStack_408;
    uStack_6b0 = uStack_410;
    uStack_698 = uStack_3f8;
    uStack_6a0 = uStack_400;
    uStack_688 = uStack_3e8;
    uStack_690 = uStack_3f0;
    uStack_678 = uStack_3d8;
    uStack_680 = uStack_3e0;
    uStack_6e8 = uStack_448;
    uStack_6f0 = uStack_450;
    uStack_6d8 = uStack_438;
    uStack_6e0 = uStack_440;
    uStack_6c8 = uStack_428;
    uStack_6d0 = uStack_430;
    uStack_6b8 = uStack_418;
    uStack_6c0 = uStack_420;
    uStack_728 = uStack_488;
    uStack_730 = uStack_490;
    uStack_718 = uStack_478;
    uStack_720 = uStack_480;
    uStack_708 = uStack_468;
    uStack_710 = uStack_470;
    uStack_6f8 = uStack_458;
    uStack_700 = uStack_460;
    uStack_748 = uStack_4a8;
    uStack_750 = uStack_4b0;
    uStack_738 = uStack_498;
    uStack_740 = uStack_4a0;
    iVar1 = (int)&uStack_3d0;
    func_0x000101567280();
    if (iVar1 != 1) {
      uStack_788 = uStack_328;
      uStack_790 = uStack_330;
      uStack_778 = uStack_318;
      uStack_780 = uStack_320;
      uStack_768 = uStack_308;
      uStack_770 = uStack_310;
      uStack_758 = uStack_2f8;
      uStack_760 = uStack_300;
      uStack_7c8 = uStack_368;
      uStack_7d0 = uStack_370;
      uStack_7b8 = uStack_358;
      uStack_7c0 = uStack_360;
      uStack_7a8 = uStack_348;
      uStack_7b0 = uStack_350;
      uStack_798 = uStack_338;
      uStack_7a0 = uStack_340;
      uStack_808 = uStack_3a8;
      uStack_810 = uStack_3b0;
      uStack_7f8 = uStack_398;
      uStack_800 = uStack_3a0;
      uStack_7e8 = uStack_388;
      uStack_7f0 = uStack_390;
      uStack_7d8 = uStack_378;
      uStack_7e0 = uStack_380;
      uStack_828 = uStack_3c8;
      uStack_830 = uStack_3d0;
      uStack_818 = uStack_3b8;
      uStack_820 = uStack_3c0;
      uStack_5c8 = uStack_328;
      uStack_5d0 = uStack_330;
      uStack_5b8 = uStack_318;
      uStack_5c0 = uStack_320;
      uStack_5a8 = uStack_308;
      uStack_5b0 = uStack_310;
      uStack_598 = uStack_2f8;
      uStack_5a0 = uStack_300;
      uStack_608 = uStack_368;
      uStack_610 = uStack_370;
      uStack_5f8 = uStack_358;
      uStack_600 = uStack_360;
      uStack_5e8 = uStack_348;
      uStack_5f0 = uStack_350;
      uStack_5d8 = uStack_338;
      uStack_5e0 = uStack_340;
      uStack_648 = uStack_3a8;
      uStack_650 = uStack_3b0;
      uStack_638 = uStack_398;
      uStack_640 = uStack_3a0;
      uStack_628 = uStack_388;
      uStack_630 = uStack_390;
      uStack_618 = uStack_378;
      uStack_620 = uStack_380;
      uStack_668 = uStack_3c8;
      uStack_670 = uStack_3d0;
      uStack_658 = uStack_3b8;
      uStack_660 = uStack_3c0;
      uStack_228 = uStack_6a8;
      uStack_230 = uStack_6b0;
      uStack_218 = uStack_698;
      uStack_220 = uStack_6a0;
      uStack_208 = uStack_688;
      uStack_210 = uStack_690;
      uStack_1f8 = uStack_678;
      uStack_200 = uStack_680;
      uStack_268 = uStack_6e8;
      uStack_270 = uStack_6f0;
      uStack_258 = uStack_6d8;
      uStack_260 = uStack_6e0;
      uStack_248 = uStack_6c8;
      uStack_250 = uStack_6d0;
      uStack_238 = uStack_6b8;
      uStack_240 = uStack_6c0;
      uStack_2a8 = uStack_728;
      uStack_2b0 = uStack_730;
      uStack_298 = uStack_718;
      uStack_2a0 = uStack_720;
      uStack_288 = uStack_708;
      uStack_290 = uStack_710;
      uStack_278 = uStack_6f8;
      uStack_280 = uStack_700;
      uStack_2c8 = uStack_748;
      uStack_2d0 = uStack_750;
      uStack_2b8 = uStack_738;
      uStack_2c0 = uStack_740;
      FUN_10156738c(&uStack_1f0,auStack_910,0x112db4348,&UNK_10d95e870);
      FUN_10156738c(&uStack_1f0,auStack_910,0x112db4348,&UNK_10d95e870);
      puVar2 = &uStack_2d0;
      FUN_10166770c(puVar2,&uStack_670);
      FUN_101568ed8(&uStack_1f0,0x112db4348,&UNK_10d95e870);
      FUN_101568ed8(&uStack_830,0x112db4348,&UNK_10d95e870);
      FUN_101568ed8(&uStack_4b0,0x112db4348,&UNK_10d95e870);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_10155e920;
    }
  }
  func_0x000107c610b4(&uStack_670,&uStack_4b0,0x1c0);
  FUN_10156738c(&uStack_1f0,&uStack_2d0,0x112db4348,&UNK_10d95e870);
  FUN_101568ed8(&uStack_670,0x112db4350,&UNK_10d95e878);
  uVar3 = 1;
LAB_10155e920:
  return uVar3 & 1;
}



/* Entry: 10155e938; end: 10155e977;  */

undefined1  [16] FUN_10155e938(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x590,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x590);
  return auVar1;
}



/* Entry: 10155e978; end: 10155ec7f;  */

uint FUN_10155e978(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
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
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar5 = &uStack_5d0;
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_238 = param_1[0x19];
  uStack_240 = param_1[0x18];
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  uStack_228 = param_1[0x1b];
  uStack_230 = param_1[0x1a];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_278 = param_1[0x11];
  uStack_280 = param_1[0x10];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_268 = param_1[0x13];
  uStack_270 = param_1[0x12];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_258 = param_1[0x15];
  uStack_260 = param_1[0x14];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_248 = param_1[0x17];
  uStack_250 = param_1[0x16];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_2b8 = param_1[9];
  uStack_2c0 = param_1[8];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_2a8 = param_1[0xb];
  uStack_2b0 = param_1[10];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_298 = param_1[0xd];
  uStack_2a0 = param_1[0xc];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_288 = param_1[0xf];
  uStack_290 = param_1[0xe];
  uStack_2f8 = param_1[1];
  uStack_300 = *param_1;
  uStack_2e8 = param_1[3];
  uStack_2f0 = param_1[2];
  uStack_2d8 = param_1[5];
  uStack_2e0 = param_1[4];
  uStack_2c8 = param_1[7];
  uStack_2d0 = param_1[6];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_148 = param_2[0x19];
  uStack_150 = param_2[0x18];
  uStack_138 = param_2[0x1b];
  uStack_140 = param_2[0x1a];
  uStack_188 = param_2[0x11];
  uStack_190 = param_2[0x10];
  uStack_178 = param_2[0x13];
  uStack_180 = param_2[0x12];
  uStack_168 = param_2[0x15];
  uStack_170 = param_2[0x14];
  uStack_158 = param_2[0x17];
  uStack_160 = param_2[0x16];
  uStack_1c8 = param_2[9];
  uStack_1d0 = param_2[8];
  uStack_1b8 = param_2[0xb];
  uStack_1c0 = param_2[10];
  uStack_1a8 = param_2[0xd];
  uStack_1b0 = param_2[0xc];
  uStack_198 = param_2[0xf];
  uStack_1a0 = param_2[0xe];
  uStack_208 = param_2[1];
  uStack_210 = *param_2;
  uStack_1f8 = param_2[3];
  uStack_200 = param_2[2];
  uStack_1e8 = param_2[5];
  uStack_1f0 = param_2[4];
  uStack_1d8 = param_2[7];
  uStack_1e0 = param_2[6];
  uStack_48 = param_1[0x1b];
  uStack_50 = param_1[0x1a];
  uStack_220 = param_1[0x1c];
  uStack_130 = param_2[0x1c];
  uStack_40 = param_1[0x1c];
  iVar2 = (int)&uStack_300;
  func_0x000101567154();
  if (iVar2 == 1) {
    puVar4 = &uStack_120;
    FUN_100cb5088();
    uStack_418 = puVar4[0x19];
    uStack_420 = puVar4[0x18];
    uStack_408 = puVar4[0x1b];
    uStack_410 = puVar4[0x1a];
    uStack_400 = puVar4[0x1c];
    uStack_458 = puVar4[0x11];
    uStack_460 = puVar4[0x10];
    uStack_448 = puVar4[0x13];
    uStack_450 = puVar4[0x12];
    uStack_438 = puVar4[0x15];
    uStack_440 = puVar4[0x14];
    uStack_428 = puVar4[0x17];
    uStack_430 = puVar4[0x16];
    uStack_498 = puVar4[9];
    uStack_4a0 = puVar4[8];
    uStack_488 = puVar4[0xb];
    uStack_490 = puVar4[10];
    uStack_478 = puVar4[0xd];
    uStack_480 = puVar4[0xc];
    uStack_468 = puVar4[0xf];
    uStack_470 = puVar4[0xe];
    uStack_4d8 = puVar4[1];
    uStack_4e0 = *puVar4;
    uStack_4c8 = puVar4[3];
    uStack_4d0 = puVar4[2];
    uStack_4b8 = puVar4[5];
    uStack_4c0 = puVar4[4];
    uStack_4a8 = puVar4[7];
    uStack_4b0 = puVar4[6];
    uStack_508 = uStack_148;
    uStack_510 = uStack_150;
    uStack_4f8 = uStack_138;
    uStack_500 = uStack_140;
    uStack_4f0 = uStack_130;
    uStack_548 = uStack_188;
    uStack_550 = uStack_190;
    uStack_538 = uStack_178;
    uStack_540 = uStack_180;
    uStack_528 = uStack_168;
    uStack_530 = uStack_170;
    uStack_518 = uStack_158;
    uStack_520 = uStack_160;
    uStack_588 = uStack_1c8;
    uStack_590 = uStack_1d0;
    uStack_578 = uStack_1b8;
    uStack_580 = uStack_1c0;
    uStack_568 = uStack_1a8;
    uStack_570 = uStack_1b0;
    uStack_558 = uStack_198;
    uStack_560 = uStack_1a0;
    uStack_5c8 = uStack_208;
    uStack_5d0 = uStack_210;
    uStack_5b8 = uStack_1f8;
    uStack_5c0 = uStack_200;
    uStack_5a8 = uStack_1e8;
    uStack_5b0 = uStack_1f0;
    uStack_598 = uStack_1d8;
    uStack_5a0 = uStack_1e0;
    iVar2 = (int)&uStack_210;
    func_0x000101567154();
    if (iVar2 == 1) {
      FUN_100cb5088();
      uStack_338 = puVar5[0x17];
      uStack_340 = puVar5[0x16];
      uStack_328 = puVar5[0x19];
      uStack_330 = puVar5[0x18];
      uStack_318 = puVar5[0x1b];
      uStack_320 = puVar5[0x1a];
      uStack_310 = puVar5[0x1c];
      uStack_378 = puVar5[0xf];
      uStack_380 = puVar5[0xe];
      uStack_368 = puVar5[0x11];
      uStack_370 = puVar5[0x10];
      uStack_358 = puVar5[0x13];
      uStack_360 = puVar5[0x12];
      uStack_348 = puVar5[0x15];
      uStack_350 = puVar5[0x14];
      uStack_3b8 = puVar5[7];
      uStack_3c0 = puVar5[6];
      uStack_3a8 = puVar5[9];
      uStack_3b0 = puVar5[8];
      uStack_398 = puVar5[0xb];
      uStack_3a0 = puVar5[10];
      uStack_388 = puVar5[0xd];
      uStack_390 = puVar5[0xc];
      uStack_3e8 = puVar5[1];
      uStack_3f0 = *puVar5;
      uStack_3d8 = puVar5[3];
      uStack_3e0 = puVar5[2];
      uStack_3c8 = puVar5[5];
      uStack_3d0 = puVar5[4];
      puVar5 = &uStack_4e0;
      FUN_101664cf4(puVar5,&uStack_3f0);
      uVar3 = (uint)puVar5;
      goto LAB_10155ec68;
    }
  }
  else {
    puVar5 = &uStack_120;
    FUN_100cb5088();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    uVar7 = puVar5[2];
    uStack_328 = uStack_148;
    uStack_330 = uStack_150;
    uStack_318 = uStack_138;
    uStack_320 = uStack_140;
    uStack_310 = uStack_130;
    uStack_368 = uStack_188;
    uStack_370 = uStack_190;
    uStack_358 = uStack_178;
    uStack_360 = uStack_180;
    uStack_348 = uStack_168;
    uStack_350 = uStack_170;
    uStack_338 = uStack_158;
    uStack_340 = uStack_160;
    uStack_3a8 = uStack_1c8;
    uStack_3b0 = uStack_1d0;
    uStack_398 = uStack_1b8;
    uStack_3a0 = uStack_1c0;
    uStack_388 = uStack_1a8;
    uStack_390 = uStack_1b0;
    uStack_378 = uStack_198;
    uStack_380 = uStack_1a0;
    uStack_3e8 = uStack_208;
    uStack_3f0 = uStack_210;
    uStack_3d8 = uStack_1f8;
    uStack_3e0 = uStack_200;
    uStack_3c8 = uStack_1e8;
    uStack_3d0 = uStack_1f0;
    uStack_3b8 = uStack_1d8;
    uStack_3c0 = uStack_1e0;
    iVar2 = (int)&uStack_210;
    func_0x000101567154();
    if (iVar2 != 1) {
      puVar5 = &uStack_3f0;
      FUN_100cb5088();
      FUN_10163af30(uVar6,uVar1,uVar7,*puVar5,puVar5[1],puVar5[2]);
      uVar3 = (uint)uVar6;
      goto LAB_10155ec68;
    }
  }
  uVar3 = 0;
LAB_10155ec68:
  return uVar3 & 1;
}



/* Entry: 10155ec80; end: 10155ed13;  */

undefined8 FUN_10155ec80(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar6 = *param_1;
  uVar7 = param_1[2];
  uVar2 = param_1[3];
  uVar8 = param_1[4];
  uVar3 = param_1[5];
  uVar9 = param_2[2];
  uVar4 = param_2[3];
  uVar1 = param_2[4];
  uVar5 = param_2[5];
  FUN_100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
  if ((((uVar6 & 1) == 0) || (FUN_100e25fcc(uVar7,uVar2,uVar9,uVar4), (uVar7 & 1) == 0)) ||
     (FUN_100e25fcc(uVar8,uVar3,uVar1,uVar5), (uVar8 & 1) == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}



/* Entry: 10155ed14; end: 10155ed6f;  */

undefined8 FUN_10155ed14(void)

{
  if (lRam0000000112db4368 != -1) {
    func_0x000107c61568(0x112db4368,FUN_10155edb8);
  }
  func_0x000107c6157c(uRam0000000112db4370);
  return 0;
}



/* Entry: 10155ed70; end: 10155edb7;  */

void FUN_10155ed70(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d95ede0,0x1d2,2);
  uRam00000001137ff5d0 = uStack_38;
  uRam00000001137ff5c8 = uStack_40;
  uRam00000001137ff5e0 = uStack_28;
  uRam00000001137ff5d8 = uStack_30;
  uRam00000001137ff5f0 = uStack_18;
  uRam00000001137ff5e8 = uStack_20;
  return;
}



/* Entry: 10155edb8; end: 10155edf3;  */

void FUN_10155edb8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10155ca3c();
  func_0x000107c613fc();
  FUN_10155edf4();
  uRam0000000112db4370 = uVar1;
  return;
}



/* Entry: 10155edf4; end: 10155f1db;  */

void FUN_10155edf4(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  FUN_101568fa4(&uStack_2d8);
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_208;
  *(undefined8 *)(unaff_x20 + 200) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_2c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_1f8;
  *(undefined **)(unaff_x20 + 0x128) = puVar1;
  *(undefined **)(unaff_x20 + 0x130) = puVar1;
  *(undefined **)(unaff_x20 + 0x138) = puVar1;
  *(undefined **)(unaff_x20 + 0x140) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_2a8;
  func_0x000101567258(&uStack_1f0);
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 400) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_148;
  *(undefined8 *)(unaff_x20 + 800) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x288) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x280) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x298) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x290) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x400) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x3f8) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x410) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x408) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x420) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x418) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x3c0) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x3c8) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x3e0) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uStack_158;
  *(undefined8 *)(unaff_x20 + 1000) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0x390) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_120;
  *(undefined2 *)(unaff_x20 + 0x220) = 0;
  *(undefined4 *)(unaff_x20 + 0x224) = 0;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x398) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined1 *)(unaff_x20 + 600) = 0;
  *(undefined1 *)(unaff_x20 + 0x268) = 1;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x428) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_1e0;
  func_0x000101567298(&uStack_118);
  *(undefined8 *)(unaff_x20 + 0x4d8) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x4d0) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x4e8) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x4e0) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x4f8) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x4f0) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x508) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x500) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0x498) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x490) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x4b8) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x4c8) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x4c0) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x458) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x450) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x468) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x460) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x478) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x470) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x488) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x480) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x590) = 0;
  *(undefined8 *)(unaff_x20 + 0x588) = 0;
  *(undefined8 *)(unaff_x20 + 0x580) = 0;
  *(undefined8 *)(unaff_x20 + 0x578) = 0;
  *(undefined8 *)(unaff_x20 + 0x570) = 0;
  *(undefined8 *)(unaff_x20 + 0x568) = 0;
  *(undefined8 *)(unaff_x20 + 0x560) = 0;
  *(undefined8 *)(unaff_x20 + 0x558) = 0;
  *(undefined8 *)(unaff_x20 + 0x550) = 0;
  *(undefined8 *)(unaff_x20 + 0x548) = 0;
  *(undefined8 *)(unaff_x20 + 0x540) = 0;
  *(undefined8 *)(unaff_x20 + 0x538) = 0;
  *(undefined8 *)(unaff_x20 + 0x530) = 0;
  *(undefined8 *)(unaff_x20 + 0x528) = 0;
  *(undefined8 *)(unaff_x20 + 0x520) = 0;
  *(undefined8 *)(unaff_x20 + 0x518) = 0;
  *(undefined8 *)(unaff_x20 + 0x510) = 0;
  *(undefined2 *)(unaff_x20 + 0x598) = 1;
  return;
}



/* Entry: 10155f1dc; end: 10155f1f7;  */

void FUN_10155f1dc(undefined8 param_1)

{
  func_0x00010155f094();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x59a,7);
  return;
}



/* Entry: 10155f1f8; end: 10155f29b;  */

void FUN_10155f1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    FUN_10155ca3c(0);
    func_0x000107c613fc();
    func_0x000101566100();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  FUN_10155f29c(uVar3,param_1,param_2,param_3);
  return;
}



/* Entry: 10155f29c; end: 10155f64b;  */

/* WARNING: Removing unreachable block (ram,0x00010155f498) */
/* WARNING: Removing unreachable block (ram,0x00010155f4b4) */
/* WARNING: Removing unreachable block (ram,0x00010155f444) */
/* WARNING: Removing unreachable block (ram,0x00010155f47c) */
/* WARNING: Removing unreachable block (ram,0x00010155f5ac) */
/* WARNING: Removing unreachable block (ram,0x00010155f510) */
/* WARNING: Removing unreachable block (ram,0x00010155f550) */
/* WARNING: Removing unreachable block (ram,0x00010155f624) */
/* WARNING: Removing unreachable block (ram,0x00010155f4f4) */
/* WARNING: Removing unreachable block (ram,0x00010155f56c) */
/* WARNING: Removing unreachable block (ram,0x00010155f5ec) */
/* WARNING: Removing unreachable block (ram,0x00010155f404) */
/* WARNING: Removing unreachable block (ram,0x00010155f460) */
/* WARNING: Removing unreachable block (ram,0x00010155f608) */

void FUN_10155f29c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0x10;
        goto code_r0x00010155f324;
      case 2:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0x20;
        goto code_r0x00010155f324;
      case 3:
        FUN_10155f64c(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_10155f6e0(param_1,param_2,param_3,param_4);
        break;
      case 5:
        FUN_10155fa94(param_1,param_2,param_3,param_4);
        break;
      case 6:
        func_0x000107c61428(param_1 + 0x128,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x160);
        lVar2 = param_1 + 0x128;
        goto code_r0x00010155f324;
      case 7:
        func_0x000107c61428(param_1 + 0x130,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x160);
        lVar2 = param_1 + 0x130;
        goto code_r0x00010155f324;
      case 8:
        FUN_101560198(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_10156022c(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_1015602c0(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        func_0x000107c61428(param_1 + 0x220,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x220;
        goto code_r0x00010155f324;
      case 0xc:
        func_0x000107c61428(param_1 + 0x221,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x221;
        goto code_r0x00010155f324;
      case 0xd:
        func_0x000107c61428(param_1 + 0x224,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x224;
        goto code_r0x00010155f324;
      case 0xe:
        FUN_101560354(param_1,param_2,param_3,param_4);
        break;
      case 0xf:
        func_0x000107c61428(param_1 + 600,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 600;
        goto code_r0x00010155f324;
      case 0x10:
        FUN_101560590(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        func_0x000107c61428(param_1 + 0x270,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x270;
        goto code_r0x00010155f324;
      case 0x12:
        FUN_101560624(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1015606b8(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_10156074c(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_1015607e0(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_101560874(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_101560908(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        func_0x000107c61428(param_1 + 0x599,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x599;
code_r0x00010155f324:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10155f64c; end: 10155f6df;  */

void FUN_10155f64c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x30;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000101568cc4();
  (*pcVar2)(param_2 + 0x30,&UNK_110664c98,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10155f6e0; end: 10155fa93;  */

/* WARNING: Removing unreachable block (ram,0x00010155f958) */

void FUN_10155f6e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
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
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uStack_a8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_188 = *(undefined8 *)(param_1 + 0x108);
  uStack_190 = *(undefined8 *)(param_1 + 0x100);
  uStack_98 = *(undefined8 *)(param_1 + 0x108);
  uStack_a0 = *(undefined8 *)(param_1 + 0x100);
  uStack_178 = *(undefined8 *)(param_1 + 0x118);
  uStack_180 = *(undefined8 *)(param_1 + 0x110);
  uStack_e8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c8 = *(undefined8 *)(param_1 + 200);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d8 = *(undefined8 *)(param_1 + 200);
  uStack_e0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_198 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_128 = *(undefined8 *)(param_1 + 0x78);
  uStack_130 = *(undefined8 *)(param_1 + 0x70);
  uStack_208 = *(undefined8 *)(param_1 + 0x88);
  uStack_210 = *(undefined8 *)(param_1 + 0x80);
  uStack_118 = *(undefined8 *)(param_1 + 0x88);
  uStack_120 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x98);
  uStack_200 = *(undefined8 *)(param_1 + 0x90);
  uStack_108 = *(undefined8 *)(param_1 + 0x98);
  uStack_110 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_100 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_248 = *(undefined8 *)(param_1 + 0x48);
  uStack_250 = *(undefined8 *)(param_1 + 0x40);
  uStack_238 = *(undefined8 *)(param_1 + 0x58);
  uStack_240 = *(undefined8 *)(param_1 + 0x50);
  uStack_228 = *(undefined8 *)(param_1 + 0x68);
  uStack_230 = *(undefined8 *)(param_1 + 0x60);
  uStack_218 = *(undefined8 *)(param_1 + 0x78);
  uStack_220 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = *(undefined8 *)(param_1 + 0x48);
  uStack_160 = *(undefined8 *)(param_1 + 0x40);
  uStack_148 = *(undefined8 *)(param_1 + 0x58);
  uStack_150 = *(undefined8 *)(param_1 + 0x50);
  uStack_138 = *(undefined8 *)(param_1 + 0x68);
  uStack_140 = *(undefined8 *)(param_1 + 0x60);
  uStack_88 = *(undefined8 *)(param_1 + 0x118);
  uStack_90 = *(undefined8 *)(param_1 + 0x110);
  uStack_260 = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_170 = *(undefined8 *)(param_1 + 0x120);
  uStack_80 = *(undefined8 *)(param_1 + 0x120);
  puVar2 = &uStack_250;
  FUN_101567130();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_270 = uStack_80;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_308 = uStack_118;
    uStack_310 = uStack_120;
    uStack_2f8 = uStack_108;
    uStack_300 = uStack_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_348 = uStack_158;
    uStack_350 = uStack_160;
    uStack_338 = uStack_148;
    uStack_340 = uStack_150;
    uStack_328 = uStack_138;
    uStack_330 = uStack_140;
    uStack_318 = uStack_128;
    uStack_320 = uStack_130;
    puVar2 = &uStack_160;
    func_0x000101567154();
    if ((int)puVar2 != 1) {
      puVar2 = &uStack_350;
      FUN_100cb5088();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_3f8 = uStack_208;
      uStack_400 = uStack_210;
      uStack_3e8 = uStack_1f8;
      uStack_3f0 = uStack_200;
      uStack_418 = uStack_228;
      uStack_420 = uStack_230;
      uStack_408 = uStack_218;
      uStack_410 = uStack_220;
      uStack_3b8 = uStack_1c8;
      uStack_3c0 = uStack_1d0;
      uStack_3a8 = uStack_1b8;
      uStack_3b0 = uStack_1c0;
      uStack_3d8 = uStack_1e8;
      uStack_3e0 = uStack_1f0;
      uStack_3c8 = uStack_1d8;
      uStack_3d0 = uStack_1e0;
      uStack_360 = uStack_170;
      uStack_378 = uStack_188;
      uStack_380 = uStack_190;
      uStack_368 = uStack_178;
      uStack_370 = uStack_180;
      uStack_398 = uStack_1a8;
      uStack_3a0 = uStack_1b0;
      uStack_388 = uStack_198;
      uStack_390 = uStack_1a0;
      uStack_438 = uStack_248;
      uStack_440 = uStack_250;
      uStack_428 = uStack_238;
      lStack_430 = uStack_240;
      FUN_101567160(&uStack_440,&uStack_528);
      puVar2 = (undefined8 *)0x0;
      FUN_101568e84(0,0,0);
      uStack_268 = uVar5;
      uStack_260 = uVar6;
      lStack_258 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000101568d04();
  (*pcVar4)(&uStack_268,&UNK_1103ecdb0,puVar2,param_3,param_4);
  lVar3 = lStack_258;
  uVar6 = uStack_260;
  uVar5 = uStack_268;
  if (unaff_x21 == 0) {
    if (lStack_258 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
        (*pcVar4)(param_3,param_4);
      }
      FUN_101568e84(uStack_268,uStack_260,lStack_258);
      uStack_528 = uVar5;
      uStack_520 = uVar6;
      lStack_518 = lVar3;
      FUN_101567194(&uStack_528);
      uStack_378 = uStack_460;
      uStack_380 = uStack_468;
      uStack_368 = uStack_450;
      uStack_370 = uStack_458;
      uStack_360 = uStack_448;
      uStack_3b8 = uStack_4a0;
      uStack_3c0 = uStack_4a8;
      uStack_3a8 = uStack_490;
      uStack_3b0 = uStack_498;
      uStack_398 = uStack_480;
      uStack_3a0 = uStack_488;
      uStack_388 = uStack_470;
      uStack_390 = uStack_478;
      uStack_3f8 = uStack_4e0;
      uStack_400 = uStack_4e8;
      uStack_3e8 = uStack_4d0;
      uStack_3f0 = uStack_4d8;
      uStack_3d8 = uStack_4c0;
      uStack_3e0 = uStack_4c8;
      uStack_3c8 = uStack_4b0;
      uStack_3d0 = uStack_4b8;
      uStack_438 = uStack_520;
      uStack_440 = uStack_528;
      uStack_428 = uStack_510;
      lStack_430 = lStack_518;
      uStack_418 = uStack_500;
      uStack_420 = uStack_508;
      uStack_408 = uStack_4f0;
      uStack_410 = uStack_4f8;
      func_0x0001015671c8(&uStack_440);
      uStack_288 = *(undefined8 *)(param_1 + 0x108);
      uStack_290 = *(undefined8 *)(param_1 + 0x100);
      uStack_278 = *(undefined8 *)(param_1 + 0x118);
      uStack_280 = *(undefined8 *)(param_1 + 0x110);
      uStack_270 = *(undefined8 *)(param_1 + 0x120);
      uStack_2c8 = *(undefined8 *)(param_1 + 200);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2b8 = *(undefined8 *)(param_1 + 0xd8);
      uStack_2c0 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xe8);
      uStack_2b0 = *(undefined8 *)(param_1 + 0xe0);
      uStack_298 = *(undefined8 *)(param_1 + 0xf8);
      uStack_2a0 = *(undefined8 *)(param_1 + 0xf0);
      uStack_308 = *(undefined8 *)(param_1 + 0x88);
      uStack_310 = *(undefined8 *)(param_1 + 0x80);
      uStack_2f8 = *(undefined8 *)(param_1 + 0x98);
      uStack_300 = *(undefined8 *)(param_1 + 0x90);
      uStack_2e8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_2f0 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2d8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2e0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_348 = *(undefined8 *)(param_1 + 0x48);
      uStack_350 = *(undefined8 *)(param_1 + 0x40);
      uStack_338 = *(undefined8 *)(param_1 + 0x58);
      uStack_340 = *(undefined8 *)(param_1 + 0x50);
      uStack_328 = *(undefined8 *)(param_1 + 0x68);
      uStack_330 = *(undefined8 *)(param_1 + 0x60);
      uStack_318 = *(undefined8 *)(param_1 + 0x78);
      uStack_320 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x108) = uStack_378;
      *(undefined8 *)(param_1 + 0x100) = uStack_380;
      *(undefined8 *)(param_1 + 0x118) = uStack_368;
      *(undefined8 *)(param_1 + 0x110) = uStack_370;
      *(undefined8 *)(param_1 + 0x120) = uStack_360;
      *(undefined8 *)(param_1 + 200) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3c0;
      *(undefined8 *)(param_1 + 0xd8) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xe8) = uStack_398;
      *(undefined8 *)(param_1 + 0xe0) = uStack_3a0;
      *(undefined8 *)(param_1 + 0xf8) = uStack_388;
      *(undefined8 *)(param_1 + 0xf0) = uStack_390;
      *(undefined8 *)(param_1 + 0x88) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x80) = uStack_400;
      *(undefined8 *)(param_1 + 0x98) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x90) = uStack_3f0;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3d8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3c8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3d0;
      *(undefined8 *)(param_1 + 0x48) = uStack_438;
      *(undefined8 *)(param_1 + 0x40) = uStack_440;
      *(undefined8 *)(param_1 + 0x58) = uStack_428;
      *(long *)(param_1 + 0x50) = lStack_430;
      *(undefined8 *)(param_1 + 0x68) = uStack_418;
      *(undefined8 *)(param_1 + 0x60) = uStack_420;
      *(undefined8 *)(param_1 + 0x78) = uStack_408;
      *(undefined8 *)(param_1 + 0x70) = uStack_410;
      FUN_101568ed8(&uStack_350,0x112db4330,&UNK_10d95e858);
      return;
    }
    lVar3 = 0;
  }
  FUN_101568e84(uStack_268,uStack_260,lVar3);
  return;
}



/* Entry: 10155fa94; end: 101560197;  */

/* WARNING: Removing unreachable block (ram,0x000101560014) */

void FUN_10155fa94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
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
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
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
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
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
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
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
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
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
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_101568eb0(&uStack_318);
  uStack_338 = uStack_250;
  uStack_340 = uStack_258;
  uStack_328 = uStack_240;
  uStack_330 = uStack_248;
  uStack_378 = uStack_290;
  uStack_380 = uStack_298;
  uStack_368 = uStack_280;
  uStack_370 = uStack_288;
  uStack_348 = uStack_260;
  uStack_350 = uStack_268;
  uStack_358 = uStack_270;
  uStack_360 = uStack_278;
  uStack_3b8 = uStack_2d0;
  uStack_3c0 = uStack_2d8;
  uStack_3a8 = uStack_2c0;
  uStack_3b0 = uStack_2c8;
  uStack_388 = uStack_2a0;
  uStack_390 = uStack_2a8;
  uStack_398 = uStack_2b0;
  uStack_3a0 = uStack_2b8;
  uStack_3f8 = uStack_310;
  uStack_400 = uStack_318;
  uStack_3e8 = uStack_300;
  uStack_3f0 = uStack_308;
  uStack_3c8 = uStack_2e0;
  uStack_3d0 = uStack_2e8;
  uStack_3d8 = uStack_2f0;
  uStack_3e0 = uStack_2f8;
  uStack_88 = *(undefined8 *)(param_1 + 0xf8);
  uStack_90 = *(undefined8 *)(param_1 + 0xf0);
  uStack_168 = *(undefined8 *)(param_1 + 0x108);
  uStack_170 = *(undefined8 *)(param_1 + 0x100);
  uStack_78 = *(undefined8 *)(param_1 + 0x108);
  uStack_80 = *(undefined8 *)(param_1 + 0x100);
  uStack_158 = *(undefined8 *)(param_1 + 0x118);
  uStack_160 = *(undefined8 *)(param_1 + 0x110);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a8 = *(undefined8 *)(param_1 + 200);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b8 = *(undefined8 *)(param_1 + 200);
  uStack_c0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_198 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_188 = *(undefined8 *)(param_1 + 0xe8);
  uStack_190 = *(undefined8 *)(param_1 + 0xe0);
  uStack_98 = *(undefined8 *)(param_1 + 0xe8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_178 = *(undefined8 *)(param_1 + 0xf8);
  uStack_180 = *(undefined8 *)(param_1 + 0xf0);
  uStack_108 = *(undefined8 *)(param_1 + 0x78);
  uStack_110 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x80);
  uStack_f8 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x90);
  uStack_e8 = *(undefined8 *)(param_1 + 0x98);
  uStack_f0 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_228 = *(undefined8 *)(param_1 + 0x48);
  uStack_230 = *(undefined8 *)(param_1 + 0x40);
  uStack_218 = *(undefined8 *)(param_1 + 0x58);
  uStack_220 = *(undefined8 *)(param_1 + 0x50);
  uStack_208 = *(undefined8 *)(param_1 + 0x68);
  uStack_210 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_200 = *(undefined8 *)(param_1 + 0x70);
  uStack_138 = *(undefined8 *)(param_1 + 0x48);
  uStack_140 = *(undefined8 *)(param_1 + 0x40);
  uStack_128 = *(undefined8 *)(param_1 + 0x58);
  uStack_130 = *(undefined8 *)(param_1 + 0x50);
  uStack_118 = *(undefined8 *)(param_1 + 0x68);
  uStack_120 = *(undefined8 *)(param_1 + 0x60);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  uStack_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_320 = uStack_238;
  uStack_150 = *(undefined8 *)(param_1 + 0x120);
  uStack_60 = *(undefined8 *)(param_1 + 0x120);
  puVar3 = &uStack_230;
  FUN_101567130();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_428 = uStack_78;
    uStack_430 = uStack_80;
    uStack_418 = uStack_68;
    uStack_420 = uStack_70;
    uStack_410 = uStack_60;
    uStack_468 = uStack_b8;
    uStack_470 = uStack_c0;
    uStack_458 = uStack_a8;
    uStack_460 = uStack_b0;
    uStack_438 = uStack_88;
    uStack_440 = uStack_90;
    uStack_448 = uStack_98;
    uStack_450 = uStack_a0;
    uStack_498 = uStack_e8;
    uStack_4a0 = uStack_f0;
    uStack_478 = uStack_c8;
    uStack_480 = uStack_d0;
    uStack_488 = uStack_d8;
    uStack_490 = uStack_e0;
    uStack_4e8 = uStack_138;
    uStack_4f0 = uStack_140;
    uStack_4d8 = uStack_128;
    uStack_4e0 = uStack_130;
    uStack_4b8 = uStack_108;
    uStack_4c0 = uStack_110;
    uStack_4a8 = uStack_f8;
    uStack_4b0 = uStack_100;
    uStack_4c8 = uStack_118;
    uStack_4d0 = uStack_120;
    puVar3 = &uStack_140;
    func_0x000101567154();
    if ((int)puVar3 == 1) {
      puVar3 = &uStack_4f0;
      FUN_100cb5088();
      uStack_6f8 = uStack_338;
      uStack_700 = uStack_340;
      uStack_6e8 = uStack_328;
      uStack_6f0 = uStack_330;
      uStack_6e0 = uStack_320;
      uStack_738 = uStack_378;
      uStack_740 = uStack_380;
      uStack_728 = uStack_368;
      uStack_730 = uStack_370;
      uStack_718 = uStack_358;
      uStack_720 = uStack_360;
      uStack_708 = uStack_348;
      uStack_710 = uStack_350;
      uStack_778 = uStack_3b8;
      uStack_780 = uStack_3c0;
      uStack_768 = uStack_3a8;
      uStack_770 = uStack_3b0;
      uStack_758 = uStack_398;
      uStack_760 = uStack_3a0;
      uStack_748 = uStack_388;
      uStack_750 = uStack_390;
      uStack_7b8 = uStack_3f8;
      uStack_7c0 = uStack_400;
      uStack_7a8 = uStack_3e8;
      uStack_7b0 = uStack_3f0;
      uStack_798 = uStack_3d8;
      uStack_7a0 = uStack_3e0;
      uStack_788 = uStack_3c8;
      uStack_790 = uStack_3d0;
      uStack_608 = uStack_168;
      uStack_610 = uStack_170;
      uStack_5f8 = uStack_158;
      uStack_600 = uStack_160;
      uStack_5f0 = uStack_150;
      uStack_648 = uStack_1a8;
      uStack_650 = uStack_1b0;
      uStack_638 = uStack_198;
      uStack_640 = uStack_1a0;
      uStack_628 = uStack_188;
      uStack_630 = uStack_190;
      uStack_618 = uStack_178;
      uStack_620 = uStack_180;
      uStack_688 = uStack_1e8;
      uStack_690 = uStack_1f0;
      uStack_678 = uStack_1d8;
      uStack_680 = uStack_1e0;
      uStack_668 = uStack_1c8;
      uStack_670 = uStack_1d0;
      uStack_658 = uStack_1b8;
      uStack_660 = uStack_1c0;
      uStack_6c8 = uStack_228;
      uStack_6d0 = uStack_230;
      uStack_6b8 = uStack_218;
      uStack_6c0 = uStack_220;
      uStack_6a8 = uStack_208;
      uStack_6b0 = uStack_210;
      uStack_698 = uStack_1f8;
      uStack_6a0 = uStack_200;
      FUN_101567160(&uStack_6d0,&uStack_5e0);
      FUN_101568ed8(&uStack_7c0,0x112db47f8,&UNK_10d95edd0);
      uStack_5c8 = puVar3[3];
      uStack_5d0 = puVar3[2];
      uStack_5b8 = puVar3[5];
      uStack_5c0 = puVar3[4];
      uStack_5d8 = puVar3[1];
      uStack_5e0 = *puVar3;
      uStack_588 = puVar3[0xb];
      uStack_590 = puVar3[10];
      uStack_578 = puVar3[0xd];
      uStack_580 = puVar3[0xc];
      uStack_5a8 = puVar3[7];
      uStack_5b0 = puVar3[6];
      uStack_598 = puVar3[9];
      uStack_5a0 = puVar3[8];
      uStack_548 = puVar3[0x13];
      uStack_550 = puVar3[0x12];
      uStack_538 = puVar3[0x15];
      uStack_540 = puVar3[0x14];
      uStack_568 = puVar3[0xf];
      uStack_570 = puVar3[0xe];
      uStack_558 = puVar3[0x11];
      uStack_560 = puVar3[0x10];
      uStack_518 = puVar3[0x19];
      uStack_520 = puVar3[0x18];
      uStack_508 = puVar3[0x1b];
      uStack_510 = puVar3[0x1a];
      uStack_500 = puVar3[0x1c];
      uStack_528 = puVar3[0x17];
      uStack_530 = puVar3[0x16];
      puVar3 = &uStack_5e0;
      func_0x000101568f30(puVar3);
      uStack_338 = uStack_518;
      uStack_340 = uStack_520;
      uStack_328 = uStack_508;
      uStack_330 = uStack_510;
      uStack_320 = uStack_500;
      uStack_378 = uStack_558;
      uStack_380 = uStack_560;
      uStack_368 = uStack_548;
      uStack_370 = uStack_550;
      uStack_348 = uStack_528;
      uStack_350 = uStack_530;
      uStack_358 = uStack_538;
      uStack_360 = uStack_540;
      uStack_3b8 = uStack_598;
      uStack_3c0 = uStack_5a0;
      uStack_3a8 = uStack_588;
      uStack_3b0 = uStack_590;
      uStack_388 = uStack_568;
      uStack_390 = uStack_570;
      uStack_398 = uStack_578;
      uStack_3a0 = uStack_580;
      uStack_3f8 = uStack_5d8;
      uStack_400 = uStack_5e0;
      uStack_3e8 = uStack_5c8;
      uStack_3f0 = uStack_5d0;
      uStack_3c8 = uStack_5a8;
      uStack_3d0 = uStack_5b0;
      uStack_3d8 = uStack_5b8;
      uStack_3e0 = uStack_5c0;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000101568d44();
  (*pcVar6)(&uStack_400,&UNK_1103efdd8,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_518 = uStack_338;
    uStack_520 = uStack_340;
    uStack_508 = uStack_328;
    uStack_510 = uStack_330;
    uStack_558 = uStack_378;
    uStack_560 = uStack_380;
    uStack_548 = uStack_368;
    uStack_550 = uStack_370;
    uStack_538 = uStack_358;
    uStack_540 = uStack_360;
    uStack_528 = uStack_348;
    uStack_530 = uStack_350;
    uStack_598 = uStack_3b8;
    uStack_5a0 = uStack_3c0;
    uStack_588 = uStack_3a8;
    uStack_590 = uStack_3b0;
    uStack_578 = uStack_398;
    uStack_580 = uStack_3a0;
    uStack_568 = uStack_388;
    uStack_570 = uStack_390;
    uStack_5d8 = uStack_3f8;
    uStack_5e0 = uStack_400;
    uStack_5c8 = uStack_3e8;
    uStack_5d0 = uStack_3f0;
    uStack_5b8 = uStack_3d8;
    uStack_5c0 = uStack_3e0;
    uStack_5a8 = uStack_3c8;
    uStack_5b0 = uStack_3d0;
    uStack_428 = uStack_338;
    uStack_430 = uStack_340;
    uStack_418 = uStack_328;
    uStack_420 = uStack_330;
    uStack_468 = uStack_378;
    uStack_470 = uStack_380;
    uStack_458 = uStack_368;
    uStack_460 = uStack_370;
    uStack_438 = uStack_348;
    uStack_440 = uStack_350;
    uStack_448 = uStack_358;
    uStack_450 = uStack_360;
    uStack_4b8 = uStack_3c8;
    uStack_4c0 = uStack_3d0;
    uStack_4a8 = uStack_3b8;
    uStack_4b0 = uStack_3c0;
    uStack_498 = uStack_3a8;
    uStack_4a0 = uStack_3b0;
    uStack_478 = uStack_388;
    uStack_480 = uStack_390;
    uStack_488 = uStack_398;
    uStack_490 = uStack_3a0;
    uStack_4e8 = uStack_3f8;
    uStack_4f0 = uStack_400;
    uStack_4d8 = uStack_3e8;
    uStack_4e0 = uStack_3f0;
    uStack_500 = uStack_320;
    uStack_410 = uStack_320;
    uStack_4c8 = uStack_3d8;
    uStack_4d0 = uStack_3e0;
    iVar2 = (int)&uStack_5e0;
    func_0x000101568f18();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uStack_608 = uStack_518;
        uStack_610 = uStack_520;
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_5f0 = uStack_500;
        uStack_648 = uStack_558;
        uStack_650 = uStack_560;
        uStack_638 = uStack_548;
        uStack_640 = uStack_550;
        uStack_628 = uStack_538;
        uStack_630 = uStack_540;
        uStack_618 = uStack_528;
        uStack_620 = uStack_530;
        uStack_688 = uStack_598;
        uStack_690 = uStack_5a0;
        uStack_678 = uStack_588;
        uStack_680 = uStack_590;
        uStack_668 = uStack_578;
        uStack_670 = uStack_580;
        uStack_658 = uStack_568;
        uStack_660 = uStack_570;
        uStack_6c8 = uStack_5d8;
        uStack_6d0 = uStack_5e0;
        uStack_6b8 = uStack_5c8;
        uStack_6c0 = uStack_5d0;
        uStack_6a8 = uStack_5b8;
        uStack_6b0 = uStack_5c0;
        uStack_698 = uStack_5a8;
        uStack_6a0 = uStack_5b0;
        FUN_101567204(&uStack_6d0,&uStack_7c0);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_608 = uStack_518;
        uStack_610 = uStack_520;
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_5f0 = uStack_500;
        uStack_648 = uStack_558;
        uStack_650 = uStack_560;
        uStack_638 = uStack_548;
        uStack_640 = uStack_550;
        uStack_628 = uStack_538;
        uStack_630 = uStack_540;
        uStack_618 = uStack_528;
        uStack_620 = uStack_530;
        uStack_688 = uStack_598;
        uStack_690 = uStack_5a0;
        uStack_678 = uStack_588;
        uStack_680 = uStack_590;
        uStack_668 = uStack_578;
        uStack_670 = uStack_580;
        uStack_658 = uStack_568;
        uStack_660 = uStack_570;
        uStack_6c8 = uStack_5d8;
        uStack_6d0 = uStack_5e0;
        uStack_6b8 = uStack_5c8;
        uStack_6c0 = uStack_5d0;
        uStack_6a8 = uStack_5b8;
        uStack_6b0 = uStack_5c0;
        uStack_698 = uStack_5a8;
        uStack_6a0 = uStack_5b0;
        FUN_101567204(&uStack_6d0,&uStack_7c0);
        (*pcVar6)(param_3,param_4);
      }
      FUN_101568ed8(&uStack_400,0x112db47f8,&UNK_10d95edd0);
      uStack_7e8 = uStack_428;
      uStack_7f0 = uStack_430;
      uStack_7d8 = uStack_418;
      uStack_7e0 = uStack_420;
      uStack_7d0 = uStack_410;
      uStack_828 = uStack_468;
      uStack_830 = uStack_470;
      uStack_818 = uStack_458;
      uStack_820 = uStack_460;
      uStack_808 = uStack_448;
      uStack_810 = uStack_450;
      uStack_7f8 = uStack_438;
      uStack_800 = uStack_440;
      uStack_868 = uStack_4a8;
      uStack_870 = uStack_4b0;
      uStack_858 = uStack_498;
      uStack_860 = uStack_4a0;
      uStack_848 = uStack_488;
      uStack_850 = uStack_490;
      uStack_838 = uStack_478;
      uStack_840 = uStack_480;
      uStack_8a8 = uStack_4e8;
      uStack_8b0 = uStack_4f0;
      uStack_898 = uStack_4d8;
      uStack_8a0 = uStack_4e0;
      uStack_888 = uStack_4c8;
      uStack_890 = uStack_4d0;
      uStack_878 = uStack_4b8;
      uStack_880 = uStack_4c0;
      func_0x0001015671cc(&uStack_8b0);
      uStack_6f8 = uStack_7e8;
      uStack_700 = uStack_7f0;
      uStack_6e8 = uStack_7d8;
      uStack_6f0 = uStack_7e0;
      uStack_6e0 = uStack_7d0;
      uStack_738 = uStack_828;
      uStack_740 = uStack_830;
      uStack_728 = uStack_818;
      uStack_730 = uStack_820;
      uStack_718 = uStack_808;
      uStack_720 = uStack_810;
      uStack_708 = uStack_7f8;
      uStack_710 = uStack_800;
      uStack_778 = uStack_868;
      uStack_780 = uStack_870;
      uStack_768 = uStack_858;
      uStack_770 = uStack_860;
      uStack_758 = uStack_848;
      uStack_760 = uStack_850;
      uStack_748 = uStack_838;
      uStack_750 = uStack_840;
      uStack_7b8 = uStack_8a8;
      uStack_7c0 = uStack_8b0;
      uStack_7a8 = uStack_898;
      uStack_7b0 = uStack_8a0;
      uStack_798 = uStack_888;
      uStack_7a0 = uStack_890;
      uStack_788 = uStack_878;
      uStack_790 = uStack_880;
      func_0x0001015671c8(&uStack_7c0);
      uStack_608 = *(undefined8 *)(param_1 + 0x108);
      uStack_610 = *(undefined8 *)(param_1 + 0x100);
      uStack_5f8 = *(undefined8 *)(param_1 + 0x118);
      uStack_600 = *(undefined8 *)(param_1 + 0x110);
      uStack_5f0 = *(undefined8 *)(param_1 + 0x120);
      uStack_648 = *(undefined8 *)(param_1 + 200);
      uStack_650 = *(undefined8 *)(param_1 + 0xc0);
      uStack_638 = *(undefined8 *)(param_1 + 0xd8);
      uStack_640 = *(undefined8 *)(param_1 + 0xd0);
      uStack_628 = *(undefined8 *)(param_1 + 0xe8);
      uStack_630 = *(undefined8 *)(param_1 + 0xe0);
      uStack_618 = *(undefined8 *)(param_1 + 0xf8);
      uStack_620 = *(undefined8 *)(param_1 + 0xf0);
      uStack_688 = *(undefined8 *)(param_1 + 0x88);
      uStack_690 = *(undefined8 *)(param_1 + 0x80);
      uStack_678 = *(undefined8 *)(param_1 + 0x98);
      uStack_680 = *(undefined8 *)(param_1 + 0x90);
      uStack_668 = *(undefined8 *)(param_1 + 0xa8);
      uStack_670 = *(undefined8 *)(param_1 + 0xa0);
      uStack_658 = *(undefined8 *)(param_1 + 0xb8);
      uStack_660 = *(undefined8 *)(param_1 + 0xb0);
      uStack_6c8 = *(undefined8 *)(param_1 + 0x48);
      uStack_6d0 = *(undefined8 *)(param_1 + 0x40);
      uStack_6b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_6c0 = *(undefined8 *)(param_1 + 0x50);
      uStack_6a8 = *(undefined8 *)(param_1 + 0x68);
      uStack_6b0 = *(undefined8 *)(param_1 + 0x60);
      uStack_698 = *(undefined8 *)(param_1 + 0x78);
      uStack_6a0 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x108) = uStack_6f8;
      *(undefined8 *)(param_1 + 0x100) = uStack_700;
      *(undefined8 *)(param_1 + 0x118) = uStack_6e8;
      *(undefined8 *)(param_1 + 0x110) = uStack_6f0;
      *(undefined8 *)(param_1 + 0x120) = uStack_6e0;
      *(undefined8 *)(param_1 + 200) = uStack_738;
      *(undefined8 *)(param_1 + 0xc0) = uStack_740;
      *(undefined8 *)(param_1 + 0xd8) = uStack_728;
      *(undefined8 *)(param_1 + 0xd0) = uStack_730;
      *(undefined8 *)(param_1 + 0xe8) = uStack_718;
      *(undefined8 *)(param_1 + 0xe0) = uStack_720;
      *(undefined8 *)(param_1 + 0xf8) = uStack_708;
      *(undefined8 *)(param_1 + 0xf0) = uStack_710;
      *(undefined8 *)(param_1 + 0x88) = uStack_778;
      *(undefined8 *)(param_1 + 0x80) = uStack_780;
      *(undefined8 *)(param_1 + 0x98) = uStack_768;
      *(undefined8 *)(param_1 + 0x90) = uStack_770;
      *(undefined8 *)(param_1 + 0xa8) = uStack_758;
      *(undefined8 *)(param_1 + 0xa0) = uStack_760;
      *(undefined8 *)(param_1 + 0xb8) = uStack_748;
      *(undefined8 *)(param_1 + 0xb0) = uStack_750;
      *(undefined8 *)(param_1 + 0x48) = uStack_7b8;
      *(undefined8 *)(param_1 + 0x40) = uStack_7c0;
      *(undefined8 *)(param_1 + 0x58) = uStack_7a8;
      *(undefined8 *)(param_1 + 0x50) = uStack_7b0;
      *(undefined8 *)(param_1 + 0x68) = uStack_798;
      *(undefined8 *)(param_1 + 0x60) = uStack_7a0;
      *(undefined8 *)(param_1 + 0x78) = uStack_788;
      *(undefined8 *)(param_1 + 0x70) = uStack_790;
      uVar4 = 0x112db4330;
      puVar5 = &UNK_10d95e858;
      puVar3 = &uStack_6d0;
      goto LAB_10155ff30;
    }
  }
  uVar4 = 0x112db47f8;
  puVar5 = &UNK_10d95edd0;
  puVar3 = &uStack_400;
LAB_10155ff30:
  FUN_101568ed8(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 101560198; end: 10156022b;  */

void FUN_101560198(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x138;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000101568bc4();
  (*pcVar2)(param_2 + 0x138,&UNK_1103ddb00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156022c; end: 1015602bf;  */

void FUN_10156022c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x140,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015602c0; end: 101560353;  */

void FUN_1015602c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x148;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568e04();
  (*pcVar2)(param_2 + 0x148,&UNK_1103eb528,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101560354; end: 10156058f;  */

/* WARNING: Removing unreachable block (ram,0x0001015604c0) */

void FUN_101560354(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x21;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_88 = 0xf000000000000000;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar11 = *(ulong *)(param_1 + 0x230);
  lVar2 = param_1;
  if (uVar11 >> 0x3c < 0xf) {
    uVar12 = *(undefined8 *)(param_1 + 0x250);
    uVar13 = *(undefined8 *)(param_1 + 0x248);
    uVar14 = *(undefined8 *)(param_1 + 0x240);
    uVar15 = *(undefined8 *)(param_1 + 0x238);
    uVar9 = *(undefined8 *)(param_1 + 0x228);
    func_0x00010006c00c(uVar9,uVar11);
    func_0x00010006c00c(uVar15,uVar14);
    func_0x00010006c00c(uVar13,uVar12);
    lVar2 = 0;
    FUN_101568f34(0,0xf000000000000000,0,0,0,0,&SUB_10006c090);
    uStack_90 = uVar9;
    uStack_88 = uVar11;
    uStack_80 = uVar15;
    uStack_78 = uVar14;
    uStack_70 = uVar13;
    uStack_68 = uVar12;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x000101568e44();
  (*pcVar10)(&uStack_90,&UNK_1103ee9e8,lVar2,param_3,param_4);
  uVar15 = uStack_68;
  uVar14 = uStack_70;
  uVar13 = uStack_78;
  uVar12 = uStack_80;
  uVar1 = uStack_88;
  uVar9 = uStack_90;
  uVar3 = uStack_90;
  uVar4 = uStack_88;
  uVar5 = uStack_80;
  uVar6 = uStack_78;
  uVar7 = uStack_70;
  uVar8 = uStack_68;
  if ((unaff_x21 == 0) && (uStack_88 >> 0x3c < 0xf)) {
    if (uVar11 >> 0x3c < 0xf) {
      pcVar10 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      func_0x00010006c00c(uVar12,uVar13);
      func_0x00010006c00c(uVar14,uVar15);
      (*pcVar10)(param_3,param_4);
    }
    else {
      func_0x00010006c00c();
      func_0x00010006c00c(uVar12,uVar13);
      func_0x00010006c00c(uVar14,uVar15);
    }
    FUN_101568f34(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68,&SUB_10006c090);
    uVar3 = *(undefined8 *)(param_1 + 0x228);
    uVar4 = *(ulong *)(param_1 + 0x230);
    uVar5 = *(undefined8 *)(param_1 + 0x238);
    uVar6 = *(undefined8 *)(param_1 + 0x240);
    uVar7 = *(undefined8 *)(param_1 + 0x248);
    uVar8 = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x228) = uVar9;
    *(ulong *)(param_1 + 0x230) = uVar1;
    *(undefined8 *)(param_1 + 0x238) = uVar12;
    *(undefined8 *)(param_1 + 0x240) = uVar13;
    *(undefined8 *)(param_1 + 0x248) = uVar14;
    *(undefined8 *)(param_1 + 0x250) = uVar15;
  }
  FUN_101568f34(uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,&SUB_10006c090);
  return;
}



/* Entry: 101560590; end: 101560623;  */

void FUN_101560590(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000101568c84();
  (*pcVar2)(param_2 + 0x260,&UNK_1103dd6d8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101560624; end: 1015606b7;  */

void FUN_101560624(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x280;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568e04();
  (*pcVar2)(param_2 + 0x280,&UNK_1103eb528,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015606b8; end: 10156074b;  */

void FUN_1015606b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x358;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568e04();
  (*pcVar2)(param_2 + 0x358,&UNK_1103eb528,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156074c; end: 1015607df;  */

void FUN_10156074c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x430;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568dc4();
  (*pcVar2)(param_2 + 0x430,&UNK_1103f0608,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1015607e0; end: 101560873;  */

void FUN_1015607e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x510;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568d84();
  (*pcVar2)(param_2 + 0x510,&UNK_1103ec6c0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101560874; end: 101560907;  */

void FUN_101560874(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x540;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_10156772c();
  (*pcVar2)(param_2 + 0x540,&UNK_1103dd318,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101560908; end: 10156099b;  */

void FUN_101560908(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x590;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000101568c44();
  (*pcVar2)(param_2 + 0x590,&UNK_1103dd868,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156099c; end: 101560a07;  */

void FUN_10156099c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_101560a08(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 101560a08; end: 1015611bb;  */

void FUN_101560a08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long unaff_x21;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_3a0;
  undefined1 uStack_398;
  undefined1 auStack_388 [24];
  long lStack_370;
  undefined1 uStack_368;
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar10 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(uVar10 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar4 = (long)(int)lVar9;
      lVar7 = lVar9 >> 0x20;
      goto LAB_101560a88;
    }
    if ((uVar10 & 0xff000000000000) == 0) goto LAB_101560ad0;
LAB_101560a90:
    pcVar8 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar9,uVar10);
    (*pcVar8)(lVar9,uVar10,1,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_101560b58;
    func_0x00010006c090(lVar9,uVar10);
  }
  else if (uVar5 == 2) {
    lVar4 = *(long *)(lVar9 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x18);
LAB_101560a88:
    if (lVar4 != lVar7) goto LAB_101560a90;
  }
LAB_101560ad0:
  func_0x000107c61428(param_1 + 0x20,auStack_90,0,0);
  lVar9 = *(long *)(param_1 + 0x20);
  uVar10 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(uVar10 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((uVar10 & 0xff000000000000) == 0) goto LAB_101560b74;
    }
    else {
      lVar4 = (long)(int)lVar9;
      lVar7 = lVar9 >> 0x20;
LAB_101560b1c:
      if (lVar4 == lVar7) goto LAB_101560b74;
    }
    pcVar8 = *(code **)(param_4 + 0x78);
    func_0x00010006c00c(lVar9,uVar10);
    (*pcVar8)(lVar9,uVar10,2,param_3,param_4);
    if (unaff_x21 != 0) {
LAB_101560b58:
      func_0x00010006c090(lVar9,uVar10);
      return;
    }
    func_0x00010006c090(lVar9,uVar10);
  }
  else if (uVar5 == 2) {
    lVar4 = *(long *)(lVar9 + 0x10);
    lVar7 = *(long *)(lVar9 + 0x18);
    goto LAB_101560b1c;
  }
LAB_101560b74:
  func_0x000107c61428(param_1 + 0x30,auStack_a8,0,0);
  lVar7 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  lVar9 = lVar7;
  func_0x000103559d2c(lVar7,uVar1);
  lVar4 = 0;
  func_0x000103559d2c(0,1);
  if (lVar9 != lVar4) {
    uStack_188 = CONCAT71(uStack_188._1_7_,uVar1);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_190 = lVar7;
    func_0x000101568cc4();
    (*pcVar8)(&lStack_190,3,&UNK_110664c98,lVar4,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uStack_d8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x108);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x100);
  uStack_c8 = *(undefined8 *)(param_1 + 0x108);
  uStack_d0 = *(undefined8 *)(param_1 + 0x100);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x118);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x110);
  uStack_118 = *(undefined8 *)(param_1 + 0xb8);
  uStack_120 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1f8 = *(undefined8 *)(param_1 + 200);
  uStack_200 = *(undefined8 *)(param_1 + 0xc0);
  uStack_108 = *(undefined8 *)(param_1 + 200);
  uStack_110 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_f8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_100 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_e8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_158 = *(undefined8 *)(param_1 + 0x78);
  uStack_160 = *(undefined8 *)(param_1 + 0x70);
  uStack_238 = *(undefined8 *)(param_1 + 0x88);
  uStack_240 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = *(undefined8 *)(param_1 + 0x88);
  uStack_150 = *(undefined8 *)(param_1 + 0x80);
  uStack_228 = *(undefined8 *)(param_1 + 0x98);
  uStack_230 = *(undefined8 *)(param_1 + 0x90);
  uStack_138 = *(undefined8 *)(param_1 + 0x98);
  uStack_140 = *(undefined8 *)(param_1 + 0x90);
  uStack_218 = *(undefined8 *)(param_1 + 0xa8);
  uStack_220 = *(undefined8 *)(param_1 + 0xa0);
  uStack_128 = *(undefined8 *)(param_1 + 0xa8);
  uStack_130 = *(undefined8 *)(param_1 + 0xa0);
  uStack_208 = *(undefined8 *)(param_1 + 0xb8);
  uStack_210 = *(undefined8 *)(param_1 + 0xb0);
  uStack_278 = *(undefined8 *)(param_1 + 0x48);
  uStack_280 = *(undefined8 *)(param_1 + 0x40);
  uStack_268 = *(undefined8 *)(param_1 + 0x58);
  uStack_270 = *(undefined8 *)(param_1 + 0x50);
  uStack_258 = *(undefined8 *)(param_1 + 0x68);
  uStack_260 = *(undefined8 *)(param_1 + 0x60);
  uStack_248 = *(undefined8 *)(param_1 + 0x78);
  uStack_250 = *(undefined8 *)(param_1 + 0x70);
  uStack_188 = *(undefined8 *)(param_1 + 0x48);
  lStack_190 = *(long *)(param_1 + 0x40);
  uStack_178 = *(undefined8 *)(param_1 + 0x58);
  uStack_180 = *(undefined8 *)(param_1 + 0x50);
  uStack_168 = *(undefined8 *)(param_1 + 0x68);
  uStack_170 = *(undefined8 *)(param_1 + 0x60);
  uStack_b8 = *(undefined8 *)(param_1 + 0x118);
  uStack_c0 = *(undefined8 *)(param_1 + 0x110);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x120);
  uStack_b0 = *(undefined8 *)(param_1 + 0x120);
  iVar3 = (int)&uStack_280;
  FUN_101567130();
  if (iVar3 != 1) {
    iVar3 = (int)&lStack_190;
    func_0x000101567154();
    if (iVar3 == 1) {
      FUN_101561328(param_1,param_2,param_3,param_4);
    }
    else {
      FUN_1015611bc(param_1,param_2,param_3,param_4);
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000107c61428(param_1 + 0x128,auStack_298,0,0);
  lVar9 = *(long *)(param_1 + 0x128);
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_101560d28:
    func_0x000107c61428(param_1 + 0x130,auStack_2b0,0,0);
    lVar9 = *(long *)(param_1 + 0x130);
    if (*(long *)(lVar9 + 0x10) != 0) {
      pcVar8 = *(code **)(param_4 + 0x100);
      func_0x000107c61434(lVar9);
      (*pcVar8)();
      if (unaff_x21 != 0) goto LAB_101560e38;
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c61428(param_1 + 0x138,auStack_2c8,0,0);
    lVar9 = *(long *)(param_1 + 0x138);
    if (*(long *)(lVar9 + 0x10) != 0) {
      pcVar8 = *(code **)(param_4 + 0x118);
      func_0x000101568bc4();
      func_0x000107c61434(lVar9);
      (*pcVar8)();
      if (unaff_x21 != 0) goto LAB_101560e38;
      func_0x000107c6142c(lVar9);
    }
    func_0x000107c61428(param_1 + 0x140,auStack_2e0,0,0);
    lVar9 = *(long *)(param_1 + 0x140);
    if (*(long *)(lVar9 + 0x10) != 0) {
      pcVar8 = *(code **)(param_4 + 0x118);
      func_0x000101568c04();
      func_0x000107c61434(lVar9);
      (*pcVar8)();
      if (unaff_x21 != 0) goto LAB_101560e38;
      func_0x000107c6142c(lVar9);
    }
    FUN_1015614cc(param_1,param_2,param_3,param_4);
    if (unaff_x21 == 0) {
      func_0x000107c61428((char *)(param_1 + 0x220),auStack_2f8,0,0);
      if (*(char *)(param_1 + 0x220) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0xb,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x221,auStack_310,0,0);
      if (*(char *)(param_1 + 0x221) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0xc,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x224,auStack_328,0,0);
      if (*(int *)(param_1 + 0x224) != 0) {
        (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x224),0xd,param_3,param_4);
      }
      FUN_101561634(param_1,param_2,param_3,param_4);
      func_0x000107c61428(param_1 + 600,auStack_340,0,0);
      if (*(char *)(param_1 + 600) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0xf,param_3,param_4);
      }
      lVar9 = param_1 + 0x260;
      func_0x000107c61428(lVar9,auStack_358,0,0);
      if (*(long *)(param_1 + 0x260) != 0) {
        uStack_368 = *(undefined1 *)(param_1 + 0x268);
        pcVar8 = *(code **)(param_4 + 0x80);
        lStack_370 = *(long *)(param_1 + 0x260);
        func_0x000101568c84();
        (*pcVar8)(&lStack_370,0x10,&UNK_1103dd6d8,lVar9,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x270,&lStack_370,0,0);
      uVar6 = *(ulong *)(param_1 + 0x270);
      uVar11 = *(ulong *)(param_1 + 0x278);
      uVar10 = uVar6 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar10 = uVar11 >> 0x38 & 0xf;
      }
      if (uVar10 != 0) {
        pcVar8 = *(code **)(param_4 + 0x70);
        func_0x000107c61434(uVar11);
        (*pcVar8)(uVar6,uVar11,0x11,param_3,param_4);
        func_0x000107c6142c(uVar11);
      }
      FUN_1015616c4(param_1,param_2,param_3,param_4);
      FUN_101561820(param_1,param_2,param_3,param_4);
      FUN_101561988(param_1,param_2,param_3,param_4);
      FUN_101561b04(param_1,param_2,param_3,param_4);
      FUN_101561bb8(param_1,param_2,param_3,param_4);
      lVar9 = param_1 + 0x590;
      func_0x000107c61428(lVar9,auStack_388,0,0);
      if (*(long *)(param_1 + 0x590) != 0) {
        uStack_398 = *(undefined1 *)(param_1 + 0x598);
        pcVar8 = *(code **)(param_4 + 0x80);
        lStack_3a0 = *(long *)(param_1 + 0x590);
        func_0x000101568c44();
        (*pcVar8)(&lStack_3a0,0x17,&UNK_1103dd868,lVar9,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x599,&lStack_3a0,0,0);
      if (*(char *)(param_1 + 0x599) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0x18,param_3,param_4);
      }
    }
  }
  else {
    pcVar8 = *(code **)(param_4 + 0x100);
    func_0x000107c61434(lVar9);
    (*pcVar8)();
    if (unaff_x21 == 0) {
      func_0x000107c6142c(lVar9);
      goto LAB_101560d28;
    }
LAB_101560e38:
    func_0x000107c6142c(lVar9);
  }
  return;
}



/* Entry: 1015611bc; end: 101561327;  */

void FUN_1015611bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
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
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined8 *)(param_1 + 0xf0);
  uStack_158 = *(undefined8 *)(param_1 + 0x108);
  uStack_160 = *(undefined8 *)(param_1 + 0x100);
  uStack_68 = *(undefined8 *)(param_1 + 0x108);
  uStack_70 = *(undefined8 *)(param_1 + 0x100);
  uStack_148 = *(undefined8 *)(param_1 + 0x118);
  uStack_150 = *(undefined8 *)(param_1 + 0x110);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_198 = *(undefined8 *)(param_1 + 200);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a8 = *(undefined8 *)(param_1 + 200);
  uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_188 = *(undefined8 *)(param_1 + 0xd8);
  uStack_190 = *(undefined8 *)(param_1 + 0xd0);
  uStack_98 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_178 = *(undefined8 *)(param_1 + 0xe8);
  uStack_180 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 0xe8);
  uStack_90 = *(undefined8 *)(param_1 + 0xe0);
  uStack_168 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined8 *)(param_1 + 0xf0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_100 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_e8 = *(undefined8 *)(param_1 + 0x88);
  uStack_f0 = *(undefined8 *)(param_1 + 0x80);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_d8 = *(undefined8 *)(param_1 + 0x98);
  uStack_e0 = *(undefined8 *)(param_1 + 0x90);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_218 = *(undefined8 *)(param_1 + 0x48);
  uStack_220 = *(undefined8 *)(param_1 + 0x40);
  uStack_208 = *(undefined8 *)(param_1 + 0x58);
  uStack_210 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_200 = *(undefined8 *)(param_1 + 0x60);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_128 = *(undefined8 *)(param_1 + 0x48);
  uStack_130 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x58);
  uStack_120 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x68);
  uStack_110 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  uStack_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_140 = *(undefined8 *)(param_1 + 0x120);
  uStack_50 = *(undefined8 *)(param_1 + 0x120);
  iVar1 = (int)&uStack_220;
  FUN_101567130();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000101567154();
    if (iVar1 != 1) {
      puVar2 = &uStack_310;
      FUN_100cb5088();
      uStack_320 = puVar2[2];
      uStack_328 = puVar2[1];
      uStack_330 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000101568d04();
      (*pcVar3)(&uStack_330,4,&UNK_1103ecdb0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101561328);
  (*pcVar3)();
}



/* Entry: 101561328; end: 1015614cb;  */

void FUN_101561328(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
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
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
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
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined8 *)(param_1 + 0xf0);
  uStack_158 = *(undefined8 *)(param_1 + 0x108);
  uStack_160 = *(undefined8 *)(param_1 + 0x100);
  uStack_68 = *(undefined8 *)(param_1 + 0x108);
  uStack_70 = *(undefined8 *)(param_1 + 0x100);
  uStack_148 = *(undefined8 *)(param_1 + 0x118);
  uStack_150 = *(undefined8 *)(param_1 + 0x110);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_198 = *(undefined8 *)(param_1 + 200);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a8 = *(undefined8 *)(param_1 + 200);
  uStack_b0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_188 = *(undefined8 *)(param_1 + 0xd8);
  uStack_190 = *(undefined8 *)(param_1 + 0xd0);
  uStack_98 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_178 = *(undefined8 *)(param_1 + 0xe8);
  uStack_180 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 0xe8);
  uStack_90 = *(undefined8 *)(param_1 + 0xe0);
  uStack_168 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined8 *)(param_1 + 0xf0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_100 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_e8 = *(undefined8 *)(param_1 + 0x88);
  uStack_f0 = *(undefined8 *)(param_1 + 0x80);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_d8 = *(undefined8 *)(param_1 + 0x98);
  uStack_e0 = *(undefined8 *)(param_1 + 0x90);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_218 = *(undefined8 *)(param_1 + 0x48);
  uStack_220 = *(undefined8 *)(param_1 + 0x40);
  uStack_208 = *(undefined8 *)(param_1 + 0x58);
  uStack_210 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_200 = *(undefined8 *)(param_1 + 0x60);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_128 = *(undefined8 *)(param_1 + 0x48);
  uStack_130 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x58);
  uStack_120 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x68);
  uStack_110 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  uStack_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_140 = *(undefined8 *)(param_1 + 0x120);
  uStack_50 = *(undefined8 *)(param_1 + 0x120);
  iVar1 = (int)&uStack_220;
  FUN_101567130();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000101567154();
    if (iVar1 == 1) {
      puVar2 = &uStack_310;
      FUN_100cb5088();
      uStack_3f8 = puVar2[1];
      uStack_400 = *puVar2;
      uStack_3e8 = puVar2[3];
      uStack_3f0 = puVar2[2];
      uStack_3d8 = puVar2[5];
      uStack_3e0 = puVar2[4];
      uStack_3c8 = puVar2[7];
      uStack_3d0 = puVar2[6];
      uStack_3b8 = puVar2[9];
      uStack_3c0 = puVar2[8];
      uStack_3a8 = puVar2[0xb];
      uStack_3b0 = puVar2[10];
      uStack_398 = puVar2[0xd];
      uStack_3a0 = puVar2[0xc];
      uStack_388 = puVar2[0xf];
      uStack_390 = puVar2[0xe];
      uStack_378 = puVar2[0x11];
      uStack_380 = puVar2[0x10];
      uStack_368 = puVar2[0x13];
      uStack_370 = puVar2[0x12];
      uStack_358 = puVar2[0x15];
      uStack_360 = puVar2[0x14];
      uStack_348 = puVar2[0x17];
      uStack_350 = puVar2[0x16];
      uStack_338 = puVar2[0x19];
      uStack_340 = puVar2[0x18];
      uStack_328 = puVar2[0x1b];
      uStack_330 = puVar2[0x1a];
      uStack_320 = puVar2[0x1c];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000101568d44();
      (*pcVar3)(&uStack_400,5,&UNK_1103efdd8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1015614cc);
  (*pcVar3)();
}



/* Entry: 1015614cc; end: 101561633;  */

void FUN_1015614cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined1 auStack_228 [24];
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = (undefined8 *)(param_1 + 0x148);
  func_0x000107c61428(puVar1,auStack_228,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_90 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_158 = *(undefined8 *)(param_1 + 0x200);
  uStack_160 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_98 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_168 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_170 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_78 = *(undefined8 *)(param_1 + 0x200);
  uStack_80 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_148 = *(undefined8 *)(param_1 + 0x210);
  uStack_150 = *(undefined8 *)(param_1 + 0x208);
  uStack_c8 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_198 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_d8 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x198);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_188 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_190 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_178 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_180 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_108 = *(undefined8 *)(param_1 + 0x170);
  uStack_110 = *(undefined8 *)(param_1 + 0x168);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x180);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x178);
  uStack_118 = *(undefined8 *)(param_1 + 0x160);
  uStack_120 = *(undefined8 *)(param_1 + 0x158);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x170);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x168);
  uStack_f8 = *(undefined8 *)(param_1 + 0x180);
  uStack_100 = *(undefined8 *)(param_1 + 0x178);
  uStack_1c8 = *(undefined8 *)(param_1 + 400);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x188);
  uStack_e8 = *(undefined8 *)(param_1 + 400);
  uStack_f0 = *(undefined8 *)(param_1 + 0x188);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x198);
  uStack_208 = *(undefined8 *)(param_1 + 0x150);
  uStack_210 = *puVar1;
  uStack_1f8 = *(undefined8 *)(param_1 + 0x160);
  uStack_200 = *(undefined8 *)(param_1 + 0x158);
  uStack_128 = *(undefined8 *)(param_1 + 0x150);
  uStack_130 = *puVar1;
  uStack_68 = *(undefined8 *)(param_1 + 0x210);
  uStack_70 = *(undefined8 *)(param_1 + 0x208);
  uStack_140 = *(undefined8 *)(param_1 + 0x218);
  uStack_60 = *(undefined8 *)(param_1 + 0x218);
  puVar1 = &uStack_210;
  FUN_101567240();
  if ((int)puVar1 != 1) {
    uStack_258 = uStack_88;
    uStack_260 = uStack_90;
    uStack_248 = uStack_78;
    uStack_250 = uStack_80;
    uStack_238 = uStack_68;
    uStack_240 = uStack_70;
    uStack_230 = uStack_60;
    uStack_298 = uStack_c8;
    uStack_2a0 = uStack_d0;
    uStack_288 = uStack_b8;
    uStack_290 = uStack_c0;
    uStack_278 = uStack_a8;
    uStack_280 = uStack_b0;
    uStack_268 = uStack_98;
    uStack_270 = uStack_a0;
    uStack_2d8 = uStack_108;
    uStack_2e0 = uStack_110;
    uStack_2c8 = uStack_f8;
    uStack_2d0 = uStack_100;
    uStack_2b8 = uStack_e8;
    uStack_2c0 = uStack_f0;
    uStack_2a8 = uStack_d8;
    uStack_2b0 = uStack_e0;
    uStack_2f8 = uStack_128;
    uStack_300 = uStack_130;
    uStack_2e8 = uStack_118;
    uStack_2f0 = uStack_120;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568e04();
    (*pcVar2)(&uStack_300,10,&UNK_1103eb528,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101561634; end: 1015616c3;  */

void FUN_101561634(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(ulong *)(param_1 + 0x230);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_70 = *(undefined8 *)(param_1 + 0x228);
    uStack_58 = *(undefined8 *)(param_1 + 0x240);
    uStack_60 = *(undefined8 *)(param_1 + 0x238);
    uStack_48 = *(undefined8 *)(param_1 + 0x250);
    uStack_50 = *(undefined8 *)(param_1 + 0x248);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568e44();
    (*pcVar1)(&uStack_70,0xe,&UNK_1103ee9e8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015616c4; end: 10156181f;  */

void FUN_1015616c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c61428(param_1 + 0x280,auStack_218,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x328);
  uStack_80 = *(undefined8 *)(param_1 + 800);
  uStack_148 = *(undefined8 *)(param_1 + 0x338);
  uStack_150 = *(undefined8 *)(param_1 + 0x330);
  uStack_88 = *(undefined8 *)(param_1 + 0x318);
  uStack_90 = *(undefined8 *)(param_1 + 0x310);
  uStack_158 = *(undefined8 *)(param_1 + 0x328);
  uStack_160 = *(undefined8 *)(param_1 + 800);
  uStack_68 = *(undefined8 *)(param_1 + 0x338);
  uStack_70 = *(undefined8 *)(param_1 + 0x330);
  uStack_138 = *(undefined8 *)(param_1 + 0x348);
  uStack_140 = *(undefined8 *)(param_1 + 0x340);
  uStack_b8 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_c0 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_188 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_190 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_c8 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_d0 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_198 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_b0 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_178 = *(undefined8 *)(param_1 + 0x308);
  uStack_180 = *(undefined8 *)(param_1 + 0x300);
  uStack_98 = *(undefined8 *)(param_1 + 0x308);
  uStack_a0 = *(undefined8 *)(param_1 + 0x300);
  uStack_168 = *(undefined8 *)(param_1 + 0x318);
  uStack_170 = *(undefined8 *)(param_1 + 0x310);
  uStack_f8 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_100 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_108 = *(undefined8 *)(param_1 + 0x298);
  uStack_110 = *(undefined8 *)(param_1 + 0x290);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_e8 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_f0 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_e0 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x2d8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x288);
  uStack_200 = *(undefined8 *)(param_1 + 0x280);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x298);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x290);
  uStack_118 = *(undefined8 *)(param_1 + 0x288);
  uStack_120 = *(undefined8 *)(param_1 + 0x280);
  uStack_58 = *(undefined8 *)(param_1 + 0x348);
  uStack_60 = *(undefined8 *)(param_1 + 0x340);
  uStack_130 = *(undefined8 *)(param_1 + 0x350);
  uStack_50 = *(undefined8 *)(param_1 + 0x350);
  puVar1 = &uStack_200;
  FUN_101567240();
  if ((int)puVar1 != 1) {
    uStack_248 = uStack_78;
    uStack_250 = uStack_80;
    uStack_238 = uStack_68;
    uStack_240 = uStack_70;
    uStack_228 = uStack_58;
    uStack_230 = uStack_60;
    uStack_220 = uStack_50;
    uStack_288 = uStack_b8;
    uStack_290 = uStack_c0;
    uStack_278 = uStack_a8;
    uStack_280 = uStack_b0;
    uStack_268 = uStack_98;
    uStack_270 = uStack_a0;
    uStack_258 = uStack_88;
    uStack_260 = uStack_90;
    uStack_2c8 = uStack_f8;
    uStack_2d0 = uStack_100;
    uStack_2b8 = uStack_e8;
    uStack_2c0 = uStack_f0;
    uStack_2a8 = uStack_d8;
    uStack_2b0 = uStack_e0;
    uStack_298 = uStack_c8;
    uStack_2a0 = uStack_d0;
    uStack_2e8 = uStack_118;
    uStack_2f0 = uStack_120;
    uStack_2d8 = uStack_108;
    uStack_2e0 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568e04();
    (*pcVar2)(&uStack_2f0,0x12,&UNK_1103eb528,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101561820; end: 101561987;  */

void FUN_101561820(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined1 auStack_228 [24];
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
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = (undefined8 *)(param_1 + 0x358);
  func_0x000107c61428(puVar1,auStack_228,0,0);
  uStack_88 = *(undefined8 *)(param_1 + 0x400);
  uStack_90 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_158 = *(undefined8 *)(param_1 + 0x410);
  uStack_160 = *(undefined8 *)(param_1 + 0x408);
  uStack_98 = *(undefined8 *)(param_1 + 0x3f0);
  uStack_a0 = *(undefined8 *)(param_1 + 1000);
  uStack_168 = *(undefined8 *)(param_1 + 0x400);
  uStack_170 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_78 = *(undefined8 *)(param_1 + 0x410);
  uStack_80 = *(undefined8 *)(param_1 + 0x408);
  uStack_148 = *(undefined8 *)(param_1 + 0x420);
  uStack_150 = *(undefined8 *)(param_1 + 0x418);
  uStack_c8 = *(undefined8 *)(param_1 + 0x3c0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_198 = *(undefined8 *)(param_1 + 0x3d0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x3c8);
  uStack_d8 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x3c0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x3b8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x3d0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x3c8);
  uStack_188 = *(undefined8 *)(param_1 + 0x3e0);
  uStack_190 = *(undefined8 *)(param_1 + 0x3d8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x3e0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x3d8);
  uStack_178 = *(undefined8 *)(param_1 + 0x3f0);
  uStack_180 = *(undefined8 *)(param_1 + 1000);
  uStack_108 = *(undefined8 *)(param_1 + 0x380);
  uStack_110 = *(undefined8 *)(param_1 + 0x378);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x390);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x388);
  uStack_118 = *(undefined8 *)(param_1 + 0x370);
  uStack_120 = *(undefined8 *)(param_1 + 0x368);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x380);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x378);
  uStack_f8 = *(undefined8 *)(param_1 + 0x390);
  uStack_100 = *(undefined8 *)(param_1 + 0x388);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x398);
  uStack_e8 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x398);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x3b0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_208 = *(undefined8 *)(param_1 + 0x360);
  uStack_210 = *puVar1;
  uStack_1f8 = *(undefined8 *)(param_1 + 0x370);
  uStack_200 = *(undefined8 *)(param_1 + 0x368);
  uStack_128 = *(undefined8 *)(param_1 + 0x360);
  uStack_130 = *puVar1;
  uStack_68 = *(undefined8 *)(param_1 + 0x420);
  uStack_70 = *(undefined8 *)(param_1 + 0x418);
  uStack_140 = *(undefined8 *)(param_1 + 0x428);
  uStack_60 = *(undefined8 *)(param_1 + 0x428);
  puVar1 = &uStack_210;
  FUN_101567240();
  if ((int)puVar1 != 1) {
    uStack_258 = uStack_88;
    uStack_260 = uStack_90;
    uStack_248 = uStack_78;
    uStack_250 = uStack_80;
    uStack_238 = uStack_68;
    uStack_240 = uStack_70;
    uStack_230 = uStack_60;
    uStack_298 = uStack_c8;
    uStack_2a0 = uStack_d0;
    uStack_288 = uStack_b8;
    uStack_290 = uStack_c0;
    uStack_278 = uStack_a8;
    uStack_280 = uStack_b0;
    uStack_268 = uStack_98;
    uStack_270 = uStack_a0;
    uStack_2d8 = uStack_108;
    uStack_2e0 = uStack_110;
    uStack_2c8 = uStack_f8;
    uStack_2d0 = uStack_100;
    uStack_2b8 = uStack_e8;
    uStack_2c0 = uStack_f0;
    uStack_2a8 = uStack_d8;
    uStack_2b0 = uStack_e0;
    uStack_2f8 = uStack_128;
    uStack_300 = uStack_130;
    uStack_2e8 = uStack_118;
    uStack_2f0 = uStack_120;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568e04();
    (*pcVar2)(&uStack_300,0x13,&UNK_1103eb528,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101561988; end: 101561b03;  */

void FUN_101561988(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_1 + 0x430,auStack_218,0,0);
  uStack_158 = *(undefined8 *)(param_1 + 0x4d8);
  uStack_160 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_148 = *(undefined8 *)(param_1 + 0x4e8);
  uStack_150 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_138 = *(undefined8 *)(param_1 + 0x4f8);
  uStack_140 = *(undefined8 *)(param_1 + 0x4f0);
  uStack_128 = *(undefined8 *)(param_1 + 0x508);
  uStack_130 = *(undefined8 *)(param_1 + 0x500);
  uStack_198 = *(undefined8 *)(param_1 + 0x498);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x490);
  uStack_188 = *(undefined8 *)(param_1 + 0x4a8);
  uStack_190 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_178 = *(undefined8 *)(param_1 + 0x4b8);
  uStack_180 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_168 = *(undefined8 *)(param_1 + 0x4c8);
  uStack_170 = *(undefined8 *)(param_1 + 0x4c0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x458);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x450);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x468);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x460);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x478);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x470);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x488);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x480);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x438);
  uStack_200 = *(undefined8 *)(param_1 + 0x430);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x448);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x440);
  uStack_78 = *(undefined8 *)(param_1 + 0x4d8);
  uStack_80 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_68 = *(undefined8 *)(param_1 + 0x4e8);
  uStack_70 = *(undefined8 *)(param_1 + 0x4e0);
  uStack_58 = *(undefined8 *)(param_1 + 0x4f8);
  uStack_60 = *(undefined8 *)(param_1 + 0x4f0);
  uStack_48 = *(undefined8 *)(param_1 + 0x508);
  uStack_50 = *(undefined8 *)(param_1 + 0x500);
  uStack_b8 = *(undefined8 *)(param_1 + 0x498);
  uStack_c0 = *(undefined8 *)(param_1 + 0x490);
  uStack_a8 = *(undefined8 *)(param_1 + 0x4a8);
  uStack_b0 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_98 = *(undefined8 *)(param_1 + 0x4b8);
  uStack_a0 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_88 = *(undefined8 *)(param_1 + 0x4c8);
  uStack_90 = *(undefined8 *)(param_1 + 0x4c0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x458);
  uStack_100 = *(undefined8 *)(param_1 + 0x450);
  uStack_e8 = *(undefined8 *)(param_1 + 0x468);
  uStack_f0 = *(undefined8 *)(param_1 + 0x460);
  uStack_d8 = *(undefined8 *)(param_1 + 0x478);
  uStack_e0 = *(undefined8 *)(param_1 + 0x470);
  uStack_c8 = *(undefined8 *)(param_1 + 0x488);
  uStack_d0 = *(undefined8 *)(param_1 + 0x480);
  uStack_118 = *(undefined8 *)(param_1 + 0x438);
  uStack_120 = *(undefined8 *)(param_1 + 0x430);
  uStack_108 = *(undefined8 *)(param_1 + 0x448);
  uStack_110 = *(undefined8 *)(param_1 + 0x440);
  puVar1 = &uStack_200;
  func_0x000101567280();
  if ((int)puVar1 != 1) {
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_228 = uStack_48;
    uStack_230 = uStack_50;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568dc4();
    (*pcVar2)(&uStack_300,0x14,&UNK_1103f0608,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101561b04; end: 101561bb7;  */

void FUN_101561b04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x510;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_88 = *(long *)(param_1 + 0x510);
  if (lStack_88 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x528);
    uStack_78 = *(undefined8 *)(param_1 + 0x520);
    uStack_80 = *(undefined8 *)(param_1 + 0x518);
    uStack_60 = *(undefined8 *)(param_1 + 0x538);
    uStack_68 = *(undefined8 *)(param_1 + 0x530);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568d84();
    (*pcVar2)(&lStack_88,0x15,&UNK_1103ec6c0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101561bb8; end: 101561c6f;  */

void FUN_101561bb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x540;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a8 = *(long *)(param_1 + 0x540);
  if (lStack_a8 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x588);
    uStack_98 = *(undefined8 *)(param_1 + 0x550);
    uStack_a0 = *(undefined8 *)(param_1 + 0x548);
    uStack_88 = *(undefined8 *)(param_1 + 0x560);
    uStack_90 = *(undefined8 *)(param_1 + 0x558);
    uStack_78 = *(undefined8 *)(param_1 + 0x570);
    uStack_80 = *(undefined8 *)(param_1 + 0x568);
    uStack_68 = *(undefined8 *)(param_1 + 0x580);
    uStack_70 = *(undefined8 *)(param_1 + 0x578);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10156772c();
    (*pcVar2)(&lStack_a8,0x16,&UNK_1103dd318,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101561c70; end: 10156451f;  */

ulong FUN_101561c70(long param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_1cd0;
  undefined8 uStack_1cc8;
  undefined8 uStack_1cc0;
  undefined8 uStack_1cb8;
  undefined8 uStack_1cb0;
  undefined8 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  undefined8 uStack_1c90;
  undefined8 uStack_1c88;
  ulong uStack_1be0;
  ulong uStack_1bd8;
  ulong uStack_1bd0;
  ulong uStack_1bc8;
  ulong uStack_1bc0;
  ulong uStack_1bb8;
  ulong uStack_1bb0;
  ulong uStack_1ba8;
  ulong uStack_1ba0;
  ulong uStack_1b98;
  ulong uStack_1b90;
  ulong uStack_1b88;
  ulong uStack_1b80;
  ulong uStack_1b78;
  ulong uStack_1b70;
  ulong uStack_1b68;
  ulong uStack_1b60;
  ulong uStack_1b58;
  ulong uStack_1b50;
  ulong uStack_1b48;
  ulong uStack_1b40;
  ulong uStack_1b38;
  ulong uStack_1b30;
  ulong uStack_1b28;
  ulong uStack_1b20;
  ulong uStack_1b18;
  ulong uStack_1b10;
  ulong uStack_1b08;
  ulong uStack_1b00;
  ulong uStack_1af0;
  ulong uStack_1ae8;
  ulong uStack_1ae0;
  ulong uStack_1ad8;
  ulong uStack_1ad0;
  ulong uStack_1ac8;
  ulong uStack_1ac0;
  ulong uStack_1ab8;
  ulong uStack_1ab0;
  ulong uStack_1aa8;
  ulong uStack_1aa0;
  ulong uStack_1a98;
  ulong uStack_1a90;
  ulong uStack_1a88;
  ulong uStack_1a80;
  ulong uStack_1a78;
  ulong uStack_1a70;
  ulong uStack_1a68;
  ulong uStack_1a60;
  ulong uStack_1a58;
  ulong uStack_1a50;
  ulong uStack_1a48;
  ulong uStack_1a40;
  ulong uStack_1a38;
  ulong uStack_1a30;
  ulong uStack_1a28;
  ulong uStack_1a20;
  ulong uStack_1a18;
  ulong uStack_1a10;
  ulong uStack_1a00;
  ulong uStack_19f8;
  ulong uStack_19f0;
  ulong uStack_19e8;
  ulong uStack_19e0;
  ulong uStack_19d8;
  ulong uStack_19d0;
  ulong uStack_19c8;
  ulong uStack_19c0;
  ulong uStack_19b8;
  ulong uStack_19b0;
  ulong uStack_19a8;
  ulong uStack_19a0;
  ulong uStack_1998;
  ulong uStack_1990;
  ulong uStack_1988;
  ulong uStack_1980;
  ulong uStack_1978;
  ulong uStack_1970;
  ulong uStack_1968;
  ulong uStack_1960;
  ulong uStack_1958;
  ulong uStack_1950;
  ulong uStack_1948;
  ulong uStack_1940;
  ulong uStack_1938;
  ulong uStack_1930;
  ulong uStack_1928;
  ulong uStack_1920;
  ulong uStack_1910;
  ulong uStack_1908;
  ulong uStack_1900;
  ulong uStack_18f8;
  ulong uStack_18f0;
  ulong uStack_18e8;
  ulong uStack_18e0;
  ulong uStack_18d8;
  ulong uStack_18d0;
  ulong uStack_18c8;
  ulong uStack_18c0;
  ulong uStack_18b8;
  ulong uStack_18b0;
  ulong uStack_18a8;
  ulong uStack_18a0;
  ulong uStack_1898;
  ulong uStack_1890;
  ulong uStack_1888;
  ulong uStack_1880;
  ulong uStack_1878;
  ulong uStack_1870;
  ulong uStack_1868;
  ulong uStack_1860;
  ulong uStack_1858;
  ulong uStack_1850;
  ulong uStack_1848;
  ulong uStack_1840;
  ulong uStack_1838;
  ulong uStack_1830;
  ulong uStack_1820;
  ulong uStack_1818;
  ulong uStack_1810;
  ulong uStack_1808;
  ulong uStack_1800;
  ulong uStack_17f8;
  ulong uStack_17f0;
  ulong uStack_17e8;
  ulong uStack_17e0;
  ulong uStack_17d8;
  ulong uStack_17d0;
  ulong uStack_17c8;
  ulong uStack_17c0;
  ulong uStack_17b8;
  ulong uStack_17b0;
  ulong uStack_17a8;
  ulong uStack_17a0;
  ulong uStack_1798;
  ulong uStack_1790;
  ulong uStack_1788;
  ulong uStack_1780;
  ulong uStack_1778;
  ulong uStack_1770;
  ulong uStack_1768;
  ulong uStack_1760;
  ulong uStack_1758;
  ulong uStack_1750;
  ulong uStack_1748;
  ulong uStack_1740;
  undefined1 auStack_1730 [80];
  ulong uStack_16e0;
  undefined8 uStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined8 uStack_16b0;
  undefined8 uStack_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined1 auStack_1688 [24];
  undefined1 auStack_1670 [24];
  undefined1 auStack_1658 [24];
  ulong uStack_1640;
  ulong uStack_1638;
  ulong uStack_1630;
  ulong uStack_1628;
  ulong uStack_1620;
  ulong uStack_1618;
  ulong uStack_1610;
  ulong uStack_1608;
  ulong uStack_1600;
  ulong uStack_15f8;
  undefined1 auStack_15f0 [24];
  undefined1 auStack_15d8 [24];
  undefined1 auStack_15c0 [24];
  undefined1 auStack_15a8 [24];
  undefined1 auStack_1590 [24];
  undefined1 auStack_1578 [24];
  ulong uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 uStack_1520;
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  ulong uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined1 auStack_13a0 [24];
  undefined1 auStack_1388 [24];
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  ulong uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined1 auStack_11b8 [24];
  undefined1 auStack_11a0 [24];
  undefined1 auStack_1188 [24];
  undefined1 auStack_1170 [24];
  undefined1 auStack_1158 [24];
  undefined1 auStack_1140 [24];
  undefined1 auStack_1128 [24];
  undefined1 auStack_1110 [24];
  undefined1 auStack_10f8 [24];
  undefined1 auStack_10e0 [24];
  undefined1 auStack_10c8 [24];
  undefined1 auStack_10b0 [24];
  undefined1 auStack_1098 [24];
  ulong uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  ulong uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined1 auStack_ec0 [24];
  undefined1 auStack_ea8 [24];
  undefined1 auStack_e90 [24];
  undefined1 auStack_e78 [24];
  undefined1 auStack_e60 [24];
  undefined1 auStack_e48 [24];
  undefined1 auStack_e30 [24];
  undefined1 auStack_e18 [24];
  ulong uStack_e00;
  ulong uStack_df8;
  ulong uStack_df0;
  ulong uStack_de8;
  ulong uStack_de0;
  ulong uStack_dd8;
  ulong uStack_dd0;
  ulong uStack_dc8;
  ulong uStack_dc0;
  ulong uStack_db8;
  ulong uStack_db0;
  ulong uStack_da8;
  ulong uStack_da0;
  ulong uStack_d98;
  ulong uStack_d90;
  ulong uStack_d88;
  ulong uStack_d80;
  ulong uStack_d78;
  ulong uStack_d70;
  ulong uStack_d68;
  ulong uStack_d60;
  ulong uStack_d58;
  ulong uStack_d50;
  ulong uStack_d48;
  ulong uStack_d40;
  ulong uStack_d38;
  ulong uStack_d30;
  ulong uStack_d28;
  ulong uStack_d20;
  ulong uStack_c30;
  ulong uStack_c28;
  ulong uStack_c20;
  ulong uStack_c18;
  ulong uStack_c10;
  ulong uStack_c08;
  ulong uStack_c00;
  ulong uStack_bf8;
  ulong uStack_bf0;
  ulong uStack_be8;
  ulong uStack_be0;
  ulong uStack_bd8;
  ulong uStack_bd0;
  ulong uStack_bc8;
  ulong uStack_bc0;
  ulong uStack_bb8;
  ulong uStack_bb0;
  ulong uStack_ba8;
  ulong uStack_ba0;
  ulong uStack_b98;
  ulong uStack_b90;
  ulong uStack_b88;
  ulong uStack_b80;
  ulong uStack_b78;
  ulong uStack_b70;
  ulong uStack_b68;
  ulong uStack_b60;
  ulong uStack_b58;
  ulong uStack_b50;
  ulong uStack_b48;
  ulong uStack_b40;
  ulong uStack_b38;
  ulong uStack_b30;
  ulong uStack_b28;
  ulong uStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_af0;
  ulong uStack_ae8;
  ulong uStack_ae0;
  ulong uStack_ad8;
  ulong uStack_ad0;
  ulong uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  ulong uStack_aa8;
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [24];
  undefined1 auStack_820 [24];
  undefined1 auStack_808 [24];
  long lStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  long lStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
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
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
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
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
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
  ulong uStack_f0;
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
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c61428(param_1 + 0x10,auStack_808,0,0);
  uVar21 = *(ulong *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(param_2 + 0x10,auStack_820,0,0);
  uVar25 = *(undefined8 *)(param_2 + 0x10);
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010006c00c(uVar21,uVar14);
  func_0x00010006c00c(uVar25,uVar16);
  uVar22 = uVar21;
  FUN_100e25fcc(uVar21,uVar14,uVar25,uVar16);
  func_0x00010006c090(uVar25,uVar16);
  func_0x00010006c090(uVar21,uVar14);
  if ((uVar22 & 1) != 0) {
    func_0x000107c61428(param_1 + 0x20,auStack_838,0,0);
    uVar21 = *(ulong *)(param_1 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c61428(param_2 + 0x20,auStack_850,0,0);
    uVar25 = *(undefined8 *)(param_2 + 0x20);
    uVar16 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010006c00c(uVar21,uVar14);
    func_0x00010006c00c(uVar25,uVar16);
    uVar22 = uVar21;
    FUN_100e25fcc(uVar21,uVar14,uVar25,uVar16);
    func_0x00010006c090(uVar25,uVar16);
    func_0x00010006c090(uVar21,uVar14);
    if ((uVar22 & 1) != 0) {
      func_0x000107c61428(param_1 + 0x30,auStack_868,0,0);
      lVar20 = *(long *)(param_1 + 0x30);
      uVar2 = *(undefined1 *)(param_1 + 0x38);
      func_0x000107c61428(param_2 + 0x30,auStack_880,0,0);
      lVar27 = *(long *)(param_2 + 0x30);
      uVar3 = *(undefined1 *)(param_2 + 0x38);
      func_0x000103559d2c(lVar20,uVar2);
      func_0x000103559d2c(lVar27,uVar3);
      if (lVar20 == lVar27) {
        iVar7 = (int)&uStack_b48;
        uStack_b78 = *(ulong *)(param_1 + 0xf8);
        uStack_b80 = *(ulong *)(param_1 + 0xf0);
        uStack_998 = *(undefined8 *)(param_1 + 0x108);
        uStack_9a0 = *(undefined8 *)(param_1 + 0x100);
        uStack_b68 = *(ulong *)(param_1 + 0x108);
        uStack_b70 = *(ulong *)(param_1 + 0x100);
        uStack_988 = *(undefined8 *)(param_1 + 0x118);
        uStack_990 = *(undefined8 *)(param_1 + 0x110);
        uStack_bb8 = *(ulong *)(param_1 + 0xb8);
        uStack_bc0 = *(ulong *)(param_1 + 0xb0);
        uStack_9d8 = *(undefined8 *)(param_1 + 200);
        uStack_9e0 = *(undefined8 *)(param_1 + 0xc0);
        uStack_ba8 = *(ulong *)(param_1 + 200);
        uStack_bb0 = *(ulong *)(param_1 + 0xc0);
        uStack_9c8 = *(undefined8 *)(param_1 + 0xd8);
        uStack_9d0 = *(undefined8 *)(param_1 + 0xd0);
        uStack_b98 = *(ulong *)(param_1 + 0xd8);
        uStack_ba0 = *(ulong *)(param_1 + 0xd0);
        uStack_9b8 = *(undefined8 *)(param_1 + 0xe8);
        uStack_9c0 = *(undefined8 *)(param_1 + 0xe0);
        uStack_b88 = *(ulong *)(param_1 + 0xe8);
        uStack_b90 = *(ulong *)(param_1 + 0xe0);
        uStack_9a8 = *(undefined8 *)(param_1 + 0xf8);
        uStack_9b0 = *(undefined8 *)(param_1 + 0xf0);
        uStack_bf8 = *(ulong *)(param_1 + 0x78);
        uStack_c00 = *(ulong *)(param_1 + 0x70);
        uStack_a18 = *(undefined8 *)(param_1 + 0x88);
        uStack_a20 = *(undefined8 *)(param_1 + 0x80);
        uStack_be8 = *(ulong *)(param_1 + 0x88);
        uStack_bf0 = *(ulong *)(param_1 + 0x80);
        uStack_a08 = *(undefined8 *)(param_1 + 0x98);
        uStack_a10 = *(undefined8 *)(param_1 + 0x90);
        uStack_bd8 = *(ulong *)(param_1 + 0x98);
        uStack_be0 = *(ulong *)(param_1 + 0x90);
        uStack_9f8 = *(undefined8 *)(param_1 + 0xa8);
        uStack_a00 = *(undefined8 *)(param_1 + 0xa0);
        uStack_bc8 = *(ulong *)(param_1 + 0xa8);
        uStack_bd0 = *(ulong *)(param_1 + 0xa0);
        uStack_9e8 = *(undefined8 *)(param_1 + 0xb8);
        uStack_9f0 = *(undefined8 *)(param_1 + 0xb0);
        uStack_a58 = *(undefined8 *)(param_1 + 0x48);
        uStack_a60 = *(undefined8 *)(param_1 + 0x40);
        uStack_a48 = *(undefined8 *)(param_1 + 0x58);
        uStack_a50 = *(undefined8 *)(param_1 + 0x50);
        uStack_a38 = *(undefined8 *)(param_1 + 0x68);
        uStack_a40 = *(undefined8 *)(param_1 + 0x60);
        uStack_a28 = *(undefined8 *)(param_1 + 0x78);
        uStack_a30 = *(undefined8 *)(param_1 + 0x70);
        uStack_c28 = *(ulong *)(param_1 + 0x48);
        uStack_c30 = *(ulong *)(param_1 + 0x40);
        uStack_c18 = *(ulong *)(param_1 + 0x58);
        uStack_c20 = *(ulong *)(param_1 + 0x50);
        uStack_c08 = *(ulong *)(param_1 + 0x68);
        uStack_c10 = *(ulong *)(param_1 + 0x60);
        uStack_b58 = *(ulong *)(param_1 + 0x118);
        uStack_b60 = *(ulong *)(param_1 + 0x110);
        uStack_a90 = *(ulong *)(param_2 + 0xf8);
        uStack_a98 = *(ulong *)(param_2 + 0xf0);
        uStack_8a8 = *(undefined8 *)(param_2 + 0x108);
        uStack_8b0 = *(undefined8 *)(param_2 + 0x100);
        uStack_a80 = *(ulong *)(param_2 + 0x108);
        uStack_a88 = *(ulong *)(param_2 + 0x100);
        uStack_898 = *(undefined8 *)(param_2 + 0x118);
        uStack_8a0 = *(undefined8 *)(param_2 + 0x110);
        uStack_ad0 = *(ulong *)(param_2 + 0xb8);
        uStack_ad8 = *(ulong *)(param_2 + 0xb0);
        uStack_8e8 = *(undefined8 *)(param_2 + 200);
        uStack_8f0 = *(undefined8 *)(param_2 + 0xc0);
        uStack_ac0 = *(ulong *)(param_2 + 200);
        uStack_ac8 = *(ulong *)(param_2 + 0xc0);
        uStack_8d8 = *(undefined8 *)(param_2 + 0xd8);
        uStack_8e0 = *(undefined8 *)(param_2 + 0xd0);
        uStack_ab0 = *(ulong *)(param_2 + 0xd8);
        uStack_ab8 = *(ulong *)(param_2 + 0xd0);
        uStack_8c8 = *(undefined8 *)(param_2 + 0xe8);
        uStack_8d0 = *(undefined8 *)(param_2 + 0xe0);
        uStack_aa0 = *(ulong *)(param_2 + 0xe8);
        uStack_aa8 = *(ulong *)(param_2 + 0xe0);
        uStack_8b8 = *(undefined8 *)(param_2 + 0xf8);
        uStack_8c0 = *(undefined8 *)(param_2 + 0xf0);
        uStack_b10 = *(ulong *)(param_2 + 0x78);
        uStack_b18 = *(ulong *)(param_2 + 0x70);
        uStack_928 = *(undefined8 *)(param_2 + 0x88);
        uStack_930 = *(undefined8 *)(param_2 + 0x80);
        uStack_b00 = *(ulong *)(param_2 + 0x88);
        uStack_b08 = *(ulong *)(param_2 + 0x80);
        uStack_918 = *(undefined8 *)(param_2 + 0x98);
        uStack_920 = *(undefined8 *)(param_2 + 0x90);
        uStack_af0 = *(ulong *)(param_2 + 0x98);
        uStack_af8 = *(ulong *)(param_2 + 0x90);
        uStack_908 = *(undefined8 *)(param_2 + 0xa8);
        uStack_910 = *(undefined8 *)(param_2 + 0xa0);
        uStack_ae0 = *(ulong *)(param_2 + 0xa8);
        uStack_ae8 = *(ulong *)(param_2 + 0xa0);
        uStack_8f8 = *(undefined8 *)(param_2 + 0xb8);
        uStack_900 = *(undefined8 *)(param_2 + 0xb0);
        uStack_968 = *(undefined8 *)(param_2 + 0x48);
        uStack_970 = *(undefined8 *)(param_2 + 0x40);
        uStack_958 = *(undefined8 *)(param_2 + 0x58);
        uStack_960 = *(undefined8 *)(param_2 + 0x50);
        uStack_b40 = *(ulong *)(param_2 + 0x48);
        uStack_b48 = *(ulong *)(param_2 + 0x40);
        uStack_b30 = *(ulong *)(param_2 + 0x58);
        uStack_b38 = *(ulong *)(param_2 + 0x50);
        uStack_b20 = *(ulong *)(param_2 + 0x68);
        uStack_b28 = *(ulong *)(param_2 + 0x60);
        uStack_938 = *(undefined8 *)(param_2 + 0x78);
        uStack_940 = *(undefined8 *)(param_2 + 0x70);
        uStack_948 = *(undefined8 *)(param_2 + 0x68);
        uStack_950 = *(undefined8 *)(param_2 + 0x60);
        uStack_a70 = *(ulong *)(param_2 + 0x118);
        uStack_a78 = *(ulong *)(param_2 + 0x110);
        uStack_980 = *(undefined8 *)(param_1 + 0x120);
        uStack_b50 = *(ulong *)(param_1 + 0x120);
        uStack_890 = *(undefined8 *)(param_2 + 0x120);
        uStack_a68 = *(ulong *)(param_2 + 0x120);
        iVar6 = (int)&uStack_c30;
        FUN_101567130();
        if (iVar6 == 1) {
          FUN_101567130();
          if (iVar7 == 1) {
            uStack_d38 = uStack_b68;
            uStack_d40 = uStack_b70;
            uStack_d28 = uStack_b58;
            uStack_d30 = uStack_b60;
            uStack_d20 = uStack_b50;
            uStack_d78 = uStack_ba8;
            uStack_d80 = uStack_bb0;
            uStack_d68 = uStack_b98;
            uStack_d70 = uStack_ba0;
            uStack_d48 = uStack_b78;
            uStack_d50 = uStack_b80;
            uStack_d58 = uStack_b88;
            uStack_d60 = uStack_b90;
            uStack_db8 = uStack_be8;
            uStack_dc0 = uStack_bf0;
            uStack_da8 = uStack_bd8;
            uStack_db0 = uStack_be0;
            uStack_d88 = uStack_bb8;
            uStack_d90 = uStack_bc0;
            uStack_d98 = uStack_bc8;
            uStack_da0 = uStack_bd0;
            uStack_df8 = uStack_c28;
            uStack_e00 = uStack_c30;
            uStack_de8 = uStack_c18;
            uStack_df0 = uStack_c20;
            uStack_dc8 = uStack_bf8;
            uStack_dd0 = uStack_c00;
            uStack_dd8 = uStack_c08;
            uStack_de0 = uStack_c10;
            FUN_10156738c(&uStack_a60,&uStack_160,0x112db4330,&UNK_10d95e858);
            FUN_10156738c(&uStack_970,&uStack_160,0x112db4330,&UNK_10d95e858);
            FUN_101568ed8(&uStack_e00,0x112db4330,&UNK_10d95e858);
            goto LAB_101562080;
          }
LAB_1015624b0:
          func_0x000107c610b4(&uStack_e00,&uStack_c30,0x1d0);
          FUN_10156738c(&uStack_a60,&uStack_160,0x112db4330,&UNK_10d95e858);
          FUN_10156738c(&uStack_970,&uStack_160,0x112db4330,&UNK_10d95e858);
          uVar25 = 0x112db4798;
          puVar11 = &UNK_10d95edc8;
LAB_10156251c:
          puVar8 = &uStack_e00;
        }
        else {
          uStack_d38 = uStack_b68;
          uStack_d40 = uStack_b70;
          uStack_d28 = uStack_b58;
          uStack_d30 = uStack_b60;
          uStack_d20 = uStack_b50;
          uStack_d78 = uStack_ba8;
          uStack_d80 = uStack_bb0;
          uStack_d68 = uStack_b98;
          uStack_d70 = uStack_ba0;
          uStack_d48 = uStack_b78;
          uStack_d50 = uStack_b80;
          uStack_d58 = uStack_b88;
          uStack_d60 = uStack_b90;
          uStack_db8 = uStack_be8;
          uStack_dc0 = uStack_bf0;
          uStack_da8 = uStack_bd8;
          uStack_db0 = uStack_be0;
          uStack_d88 = uStack_bb8;
          uStack_d90 = uStack_bc0;
          uStack_d98 = uStack_bc8;
          uStack_da0 = uStack_bd0;
          uStack_df8 = uStack_c28;
          uStack_e00 = uStack_c30;
          uStack_de8 = uStack_c18;
          uStack_df0 = uStack_c20;
          uStack_dc8 = uStack_bf8;
          uStack_dd0 = uStack_c00;
          uStack_dd8 = uStack_c08;
          uStack_de0 = uStack_c10;
          FUN_101567130();
          if (iVar7 == 1) goto LAB_1015624b0;
          uStack_1a28 = uStack_a80;
          uStack_1a30 = uStack_a88;
          uStack_1a18 = uStack_a70;
          uStack_1a20 = uStack_a78;
          uStack_1a68 = uStack_ac0;
          uStack_1a70 = uStack_ac8;
          uStack_1a58 = uStack_ab0;
          uStack_1a60 = uStack_ab8;
          uStack_1a48 = uStack_aa0;
          uStack_1a50 = uStack_aa8;
          uStack_1a38 = uStack_a90;
          uStack_1a40 = uStack_a98;
          uStack_1aa8 = uStack_b00;
          uStack_1ab0 = uStack_b08;
          uStack_1a98 = uStack_af0;
          uStack_1aa0 = uStack_af8;
          uStack_1a88 = uStack_ae0;
          uStack_1a90 = uStack_ae8;
          uStack_1a78 = uStack_ad0;
          uStack_1a80 = uStack_ad8;
          uStack_1ae8 = uStack_b40;
          uStack_1af0 = uStack_b48;
          uStack_1ad8 = uStack_b30;
          uStack_1ae0 = uStack_b38;
          uStack_1ac8 = uStack_b20;
          uStack_1ad0 = uStack_b28;
          uStack_1ab8 = uStack_b10;
          uStack_1ac0 = uStack_b18;
          uStack_1938 = uStack_a80;
          uStack_1940 = uStack_a88;
          uStack_1928 = uStack_a70;
          uStack_1930 = uStack_a78;
          uStack_1978 = uStack_ac0;
          uStack_1980 = uStack_ac8;
          uStack_1968 = uStack_ab0;
          uStack_1970 = uStack_ab8;
          uStack_1958 = uStack_aa0;
          uStack_1960 = uStack_aa8;
          uStack_1948 = uStack_a90;
          uStack_1950 = uStack_a98;
          uStack_19b8 = uStack_b00;
          uStack_19c0 = uStack_b08;
          uStack_19a8 = uStack_af0;
          uStack_19b0 = uStack_af8;
          uStack_1998 = uStack_ae0;
          uStack_19a0 = uStack_ae8;
          uStack_1988 = uStack_ad0;
          uStack_1990 = uStack_ad8;
          uStack_19f8 = uStack_b40;
          uStack_1a00 = uStack_b48;
          uStack_19e8 = uStack_b30;
          uStack_19f0 = uStack_b38;
          uStack_19d8 = uStack_b20;
          uStack_19e0 = uStack_b28;
          uStack_19c8 = uStack_b10;
          uStack_19d0 = uStack_b18;
          uStack_1848 = uStack_d38;
          uStack_1850 = uStack_d40;
          uStack_1838 = uStack_d28;
          uStack_1840 = uStack_d30;
          uStack_1888 = uStack_d78;
          uStack_1890 = uStack_d80;
          uStack_1878 = uStack_d68;
          uStack_1880 = uStack_d70;
          uStack_1858 = uStack_d48;
          uStack_1860 = uStack_d50;
          uStack_1868 = uStack_d58;
          uStack_1870 = uStack_d60;
          uStack_18c8 = uStack_db8;
          uStack_18d0 = uStack_dc0;
          uStack_18b8 = uStack_da8;
          uStack_18c0 = uStack_db0;
          uStack_1898 = uStack_d88;
          uStack_18a0 = uStack_d90;
          uStack_18a8 = uStack_d98;
          uStack_18b0 = uStack_da0;
          uStack_1908 = uStack_df8;
          uStack_1910 = uStack_e00;
          uStack_18f8 = uStack_de8;
          uStack_1900 = uStack_df0;
          uStack_18d8 = uStack_dc8;
          uStack_18e0 = uStack_dd0;
          uStack_18e8 = uStack_dd8;
          uStack_18f0 = uStack_de0;
          uStack_1758 = uStack_d38;
          uStack_1760 = uStack_d40;
          uStack_1748 = uStack_d28;
          uStack_1750 = uStack_d30;
          uStack_1798 = uStack_d78;
          uStack_17a0 = uStack_d80;
          uStack_1788 = uStack_d68;
          uStack_1790 = uStack_d70;
          uStack_1768 = uStack_d48;
          uStack_1770 = uStack_d50;
          uStack_1778 = uStack_d58;
          uStack_1780 = uStack_d60;
          uStack_17d8 = uStack_db8;
          uStack_17e0 = uStack_dc0;
          uStack_17c8 = uStack_da8;
          uStack_17d0 = uStack_db0;
          uStack_17a8 = uStack_d88;
          uStack_17b0 = uStack_d90;
          uStack_17b8 = uStack_d98;
          uStack_17c0 = uStack_da0;
          uStack_1818 = uStack_df8;
          uStack_1820 = uStack_e00;
          uStack_1808 = uStack_de8;
          uStack_1810 = uStack_df0;
          uStack_1a10 = uStack_a68;
          uStack_1920 = uStack_a68;
          uStack_1830 = uStack_d20;
          uStack_1740 = uStack_d20;
          uStack_17e8 = uStack_dc8;
          uStack_17f0 = uStack_dd0;
          uStack_17f8 = uStack_dd8;
          uStack_1800 = uStack_de0;
          iVar7 = (int)&uStack_1910;
          func_0x000101567154();
          if (iVar7 != 1) {
            puVar8 = &uStack_1820;
            FUN_100cb5088();
            uVar21 = *puVar8;
            uVar22 = puVar8[1];
            uVar23 = puVar8[2];
            uStack_98 = uStack_1938;
            uStack_a0 = uStack_1940;
            uStack_88 = uStack_1928;
            uStack_90 = uStack_1930;
            uStack_80 = uStack_1920;
            uStack_d8 = uStack_1978;
            uStack_e0 = uStack_1980;
            uStack_c8 = uStack_1968;
            uStack_d0 = uStack_1970;
            uStack_a8 = uStack_1948;
            uStack_b0 = uStack_1950;
            uStack_b8 = uStack_1958;
            uStack_c0 = uStack_1960;
            uStack_118 = uStack_19b8;
            uStack_120 = uStack_19c0;
            uStack_108 = uStack_19a8;
            uStack_110 = uStack_19b0;
            uStack_e8 = uStack_1988;
            uStack_f0 = uStack_1990;
            uStack_f8 = uStack_1998;
            uStack_100 = uStack_19a0;
            uStack_158 = uStack_19f8;
            uStack_160 = uStack_1a00;
            uStack_148 = uStack_19e8;
            uStack_150 = uStack_19f0;
            uStack_128 = uStack_19c8;
            uStack_130 = uStack_19d0;
            uStack_138 = uStack_19d8;
            uStack_140 = uStack_19e0;
            iVar7 = (int)&uStack_1a00;
            func_0x000101567154();
            if (iVar7 == 1) {
              FUN_10156738c(&uStack_a60,&uStack_250,0x112db4330,&UNK_10d95e858);
              puVar8 = &uStack_250;
              goto LAB_1015629a0;
            }
            puVar8 = &uStack_160;
            FUN_100cb5088();
            uVar13 = *puVar8;
            uVar15 = puVar8[1];
            uVar18 = puVar8[2];
            FUN_10156738c(&uStack_a60,&uStack_250,0x112db4330,&UNK_10d95e858);
            FUN_10156738c(&uStack_970,&uStack_250,0x112db4330,&UNK_10d95e858);
            FUN_10163af30(uVar21,uVar22,uVar23,uVar13,uVar15,uVar18);
            FUN_101568ed8(&uStack_1af0,0x112db4330,&UNK_10d95e858);
            FUN_101568ed8(&uStack_c30,0x112db4330,&UNK_10d95e858);
            if ((uVar21 & 1) == 0) goto LAB_101562524;
LAB_101562080:
            func_0x000107c61428(param_1 + 0x128,auStack_e18,0,0);
            uVar21 = *(ulong *)(param_1 + 0x128);
            func_0x000107c61428(param_2 + 0x128,auStack_e30,0,0);
            FUN_10142cfc4(uVar21,*(undefined8 *)(param_2 + 0x128));
            if ((uVar21 & 1) == 0) goto LAB_101562524;
            func_0x000107c61428(param_1 + 0x130,auStack_e48,0,0);
            uVar21 = *(ulong *)(param_1 + 0x130);
            func_0x000107c61428(param_2 + 0x130,auStack_e60,0,0);
            FUN_10142cfc4(uVar21,*(undefined8 *)(param_2 + 0x130));
            if ((uVar21 & 1) == 0) goto LAB_101562524;
            func_0x000107c61428(param_1 + 0x138,auStack_e78,0,0);
            uVar22 = *(ulong *)(param_1 + 0x138);
            func_0x000107c61428(param_2 + 0x138,auStack_e90,0,0);
            uVar25 = *(undefined8 *)(param_2 + 0x138);
            func_0x000107c61434(uVar22);
            func_0x000107c61434(uVar25);
            uVar21 = uVar22;
            FUN_101565b1c(uVar22,uVar25);
            func_0x000107c6142c(uVar22);
            func_0x000107c6142c(uVar25);
            if ((uVar21 & 1) == 0) goto LAB_101562524;
            func_0x000107c61428(param_1 + 0x140,auStack_ea8,0,0);
            uVar22 = *(ulong *)(param_1 + 0x140);
            func_0x000107c61428(param_2 + 0x140,auStack_ec0,0,0);
            uVar25 = *(undefined8 *)(param_2 + 0x140);
            func_0x000107c61434(uVar22);
            func_0x000107c61434(uVar25);
            uVar21 = uVar22;
            func_0x000101565c24(uVar22,uVar25);
            func_0x000107c6142c(uVar22);
            func_0x000107c6142c(uVar25);
            if ((uVar21 & 1) == 0) goto LAB_101562524;
            puVar8 = (ulong *)(param_1 + 0x148);
            func_0x000107c61428(puVar8,auStack_1098,0,0);
            puVar1 = (ulong *)(param_2 + 0x148);
            func_0x000107c61428(puVar1,auStack_10b0,0,0);
            iVar7 = (int)&uStack_b58;
            uStack_b88 = *(ulong *)(param_1 + 0x1f0);
            uStack_b90 = *(ulong *)(param_1 + 0x1e8);
            uStack_fc8 = *(undefined8 *)(param_1 + 0x200);
            uStack_fd0 = *(undefined8 *)(param_1 + 0x1f8);
            uStack_b98 = *(ulong *)(param_1 + 0x1e0);
            uStack_ba0 = *(ulong *)(param_1 + 0x1d8);
            uStack_fd8 = *(undefined8 *)(param_1 + 0x1f0);
            uStack_fe0 = *(undefined8 *)(param_1 + 0x1e8);
            uStack_b78 = *(ulong *)(param_1 + 0x200);
            uStack_b80 = *(ulong *)(param_1 + 0x1f8);
            uStack_fb8 = *(undefined8 *)(param_1 + 0x210);
            uStack_fc0 = *(undefined8 *)(param_1 + 0x208);
            uStack_bc8 = *(ulong *)(param_1 + 0x1b0);
            uStack_bd0 = *(ulong *)(param_1 + 0x1a8);
            uStack_1008 = *(undefined8 *)(param_1 + 0x1c0);
            uStack_1010 = *(undefined8 *)(param_1 + 0x1b8);
            uStack_bd8 = *(ulong *)(param_1 + 0x1a0);
            uStack_be0 = *(ulong *)(param_1 + 0x198);
            uStack_1018 = *(undefined8 *)(param_1 + 0x1b0);
            uStack_1020 = *(undefined8 *)(param_1 + 0x1a8);
            uStack_bb8 = *(ulong *)(param_1 + 0x1c0);
            uStack_bc0 = *(ulong *)(param_1 + 0x1b8);
            uStack_ff8 = *(undefined8 *)(param_1 + 0x1d0);
            uStack_1000 = *(undefined8 *)(param_1 + 0x1c8);
            uStack_ba8 = *(ulong *)(param_1 + 0x1d0);
            uStack_bb0 = *(ulong *)(param_1 + 0x1c8);
            uStack_fe8 = *(undefined8 *)(param_1 + 0x1e0);
            uStack_ff0 = *(undefined8 *)(param_1 + 0x1d8);
            uStack_c08 = *(ulong *)(param_1 + 0x170);
            uStack_c10 = *(ulong *)(param_1 + 0x168);
            uStack_1048 = *(undefined8 *)(param_1 + 0x180);
            uStack_1050 = *(undefined8 *)(param_1 + 0x178);
            uStack_c18 = *(ulong *)(param_1 + 0x160);
            uStack_c20 = *(ulong *)(param_1 + 0x158);
            uStack_1058 = *(undefined8 *)(param_1 + 0x170);
            uStack_1060 = *(undefined8 *)(param_1 + 0x168);
            uStack_bf8 = *(ulong *)(param_1 + 0x180);
            uStack_c00 = *(ulong *)(param_1 + 0x178);
            uStack_1038 = *(undefined8 *)(param_1 + 400);
            uStack_1040 = *(undefined8 *)(param_1 + 0x188);
            uStack_be8 = *(ulong *)(param_1 + 400);
            uStack_bf0 = *(ulong *)(param_1 + 0x188);
            uStack_1028 = *(undefined8 *)(param_1 + 0x1a0);
            uStack_1030 = *(undefined8 *)(param_1 + 0x198);
            uStack_1078 = *(undefined8 *)(param_1 + 0x150);
            uStack_1080 = *puVar8;
            uStack_1068 = *(undefined8 *)(param_1 + 0x160);
            uStack_1070 = *(undefined8 *)(param_1 + 0x158);
            uStack_c28 = *(ulong *)(param_1 + 0x150);
            uStack_c30 = *puVar8;
            uStack_b68 = *(ulong *)(param_1 + 0x210);
            uStack_b70 = *(ulong *)(param_1 + 0x208);
            uStack_ab0 = *(ulong *)(param_2 + 0x1f0);
            uStack_ab8 = *(ulong *)(param_2 + 0x1e8);
            uStack_ee8 = *(undefined8 *)(param_2 + 0x200);
            uStack_ef0 = *(undefined8 *)(param_2 + 0x1f8);
            uStack_ac0 = *(ulong *)(param_2 + 0x1e0);
            uStack_ac8 = *(ulong *)(param_2 + 0x1d8);
            uStack_ef8 = *(undefined8 *)(param_2 + 0x1f0);
            uStack_f00 = *(undefined8 *)(param_2 + 0x1e8);
            uStack_aa0 = *(ulong *)(param_2 + 0x200);
            uStack_aa8 = *(ulong *)(param_2 + 0x1f8);
            uStack_ed8 = *(undefined8 *)(param_2 + 0x210);
            uStack_ee0 = *(undefined8 *)(param_2 + 0x208);
            uStack_af0 = *(ulong *)(param_2 + 0x1b0);
            uStack_af8 = *(ulong *)(param_2 + 0x1a8);
            uStack_f28 = *(undefined8 *)(param_2 + 0x1c0);
            uStack_f30 = *(undefined8 *)(param_2 + 0x1b8);
            uStack_b00 = *(ulong *)(param_2 + 0x1a0);
            uStack_b08 = *(ulong *)(param_2 + 0x198);
            uStack_f38 = *(undefined8 *)(param_2 + 0x1b0);
            uStack_f40 = *(undefined8 *)(param_2 + 0x1a8);
            uStack_ae0 = *(ulong *)(param_2 + 0x1c0);
            uStack_ae8 = *(ulong *)(param_2 + 0x1b8);
            uStack_f18 = *(undefined8 *)(param_2 + 0x1d0);
            uStack_f20 = *(undefined8 *)(param_2 + 0x1c8);
            uStack_ad0 = *(ulong *)(param_2 + 0x1d0);
            uStack_ad8 = *(ulong *)(param_2 + 0x1c8);
            uStack_f08 = *(undefined8 *)(param_2 + 0x1e0);
            uStack_f10 = *(undefined8 *)(param_2 + 0x1d8);
            uStack_b30 = *(ulong *)(param_2 + 0x170);
            uStack_b38 = *(ulong *)(param_2 + 0x168);
            uStack_f68 = *(undefined8 *)(param_2 + 0x180);
            uStack_f70 = *(undefined8 *)(param_2 + 0x178);
            uStack_b40 = *(ulong *)(param_2 + 0x160);
            uStack_b48 = *(ulong *)(param_2 + 0x158);
            uStack_f78 = *(undefined8 *)(param_2 + 0x170);
            uStack_f80 = *(undefined8 *)(param_2 + 0x168);
            uStack_b20 = *(ulong *)(param_2 + 0x180);
            uStack_b28 = *(ulong *)(param_2 + 0x178);
            uStack_f58 = *(undefined8 *)(param_2 + 400);
            uStack_f60 = *(undefined8 *)(param_2 + 0x188);
            uStack_b10 = *(ulong *)(param_2 + 400);
            uStack_b18 = *(ulong *)(param_2 + 0x188);
            uStack_f48 = *(undefined8 *)(param_2 + 0x1a0);
            uStack_f50 = *(undefined8 *)(param_2 + 0x198);
            uStack_f98 = *(undefined8 *)(param_2 + 0x150);
            uStack_fa0 = *puVar1;
            uStack_f88 = *(undefined8 *)(param_2 + 0x160);
            uStack_f90 = *(undefined8 *)(param_2 + 0x158);
            uStack_b50 = *(ulong *)(param_2 + 0x150);
            uStack_b58 = *puVar1;
            uStack_a90 = *(ulong *)(param_2 + 0x210);
            uStack_a98 = *(ulong *)(param_2 + 0x208);
            uStack_fb0 = *(undefined8 *)(param_1 + 0x218);
            uStack_b60 = *(ulong *)(param_1 + 0x218);
            uStack_ed0 = *(undefined8 *)(param_2 + 0x218);
            uStack_a88 = *(ulong *)(param_2 + 0x218);
            iVar6 = (int)&uStack_c30;
            FUN_101567240();
            if (iVar6 != 1) {
              uStack_d58 = uStack_b88;
              uStack_d60 = uStack_b90;
              uStack_d48 = uStack_b78;
              uStack_d50 = uStack_b80;
              uStack_d38 = uStack_b68;
              uStack_d40 = uStack_b70;
              uStack_d30 = uStack_b60;
              uStack_d98 = uStack_bc8;
              uStack_da0 = uStack_bd0;
              uStack_d88 = uStack_bb8;
              uStack_d90 = uStack_bc0;
              uStack_d78 = uStack_ba8;
              uStack_d80 = uStack_bb0;
              uStack_d68 = uStack_b98;
              uStack_d70 = uStack_ba0;
              uStack_dd8 = uStack_c08;
              uStack_de0 = uStack_c10;
              uStack_dc8 = uStack_bf8;
              uStack_dd0 = uStack_c00;
              uStack_db8 = uStack_be8;
              uStack_dc0 = uStack_bf0;
              uStack_da8 = uStack_bd8;
              uStack_db0 = uStack_be0;
              uStack_df8 = uStack_c28;
              uStack_e00 = uStack_c30;
              uStack_de8 = uStack_c18;
              uStack_df0 = uStack_c20;
              FUN_101567240();
              if (iVar7 == 1) goto LAB_101562b08;
              uStack_1778 = uStack_ab0;
              uStack_1780 = uStack_ab8;
              uStack_1768 = uStack_aa0;
              uStack_1770 = uStack_aa8;
              uStack_1758 = uStack_a90;
              uStack_1760 = uStack_a98;
              uStack_17b8 = uStack_af0;
              uStack_17c0 = uStack_af8;
              uStack_17a8 = uStack_ae0;
              uStack_17b0 = uStack_ae8;
              uStack_1798 = uStack_ad0;
              uStack_17a0 = uStack_ad8;
              uStack_1788 = uStack_ac0;
              uStack_1790 = uStack_ac8;
              uStack_17f8 = uStack_b30;
              uStack_1800 = uStack_b38;
              uStack_17e8 = uStack_b20;
              uStack_17f0 = uStack_b28;
              uStack_17d8 = uStack_b10;
              uStack_17e0 = uStack_b18;
              uStack_17c8 = uStack_b00;
              uStack_17d0 = uStack_b08;
              uStack_1818 = uStack_b50;
              uStack_1820 = uStack_b58;
              uStack_1808 = uStack_b40;
              uStack_1810 = uStack_b48;
              uStack_288 = uStack_ab0;
              uStack_290 = uStack_ab8;
              uStack_278 = uStack_aa0;
              uStack_280 = uStack_aa8;
              uStack_268 = uStack_a90;
              uStack_270 = uStack_a98;
              uStack_2c8 = uStack_af0;
              uStack_2d0 = uStack_af8;
              uStack_2b8 = uStack_ae0;
              uStack_2c0 = uStack_ae8;
              uStack_2a8 = uStack_ad0;
              uStack_2b0 = uStack_ad8;
              uStack_298 = uStack_ac0;
              uStack_2a0 = uStack_ac8;
              uStack_308 = uStack_b30;
              uStack_310 = uStack_b38;
              uStack_2f8 = uStack_b20;
              uStack_300 = uStack_b28;
              uStack_2e8 = uStack_b10;
              uStack_2f0 = uStack_b18;
              uStack_2d8 = uStack_b00;
              uStack_2e0 = uStack_b08;
              uStack_1750 = uStack_a88;
              uStack_260 = uStack_a88;
              uStack_328 = uStack_b50;
              uStack_330 = uStack_b58;
              uStack_318 = uStack_b40;
              uStack_320 = uStack_b48;
              uStack_368 = uStack_d58;
              uStack_370 = uStack_d60;
              uStack_358 = uStack_d48;
              uStack_360 = uStack_d50;
              uStack_348 = uStack_d38;
              uStack_350 = uStack_d40;
              uStack_340 = uStack_d30;
              uStack_3a8 = uStack_d98;
              uStack_3b0 = uStack_da0;
              uStack_398 = uStack_d88;
              uStack_3a0 = uStack_d90;
              uStack_388 = uStack_d78;
              uStack_390 = uStack_d80;
              uStack_378 = uStack_d68;
              uStack_380 = uStack_d70;
              uStack_3e8 = uStack_dd8;
              uStack_3f0 = uStack_de0;
              uStack_3d8 = uStack_dc8;
              uStack_3e0 = uStack_dd0;
              uStack_3c8 = uStack_db8;
              uStack_3d0 = uStack_dc0;
              uStack_3b8 = uStack_da8;
              uStack_3c0 = uStack_db0;
              uStack_408 = uStack_df8;
              uStack_410 = uStack_e00;
              uStack_3f8 = uStack_de8;
              uStack_400 = uStack_df0;
              FUN_10156738c(&uStack_1080,&uStack_1910,0x112db4338,&UNK_10d95e860);
              FUN_10156738c(&uStack_fa0,&uStack_1910,0x112db4338,&UNK_10d95e860);
              puVar8 = &uStack_410;
              FUN_10162fed8(puVar8,&uStack_330);
              FUN_101568ed8(&uStack_1820,0x112db4338,&UNK_10d95e860);
              FUN_101568ed8(&uStack_c30,0x112db4338,&UNK_10d95e860);
              if (((ulong)puVar8 & 1) != 0) goto LAB_101562d00;
              goto LAB_101562524;
            }
            FUN_101567240();
            if (iVar7 == 1) {
              uStack_d58 = uStack_b88;
              uStack_d60 = uStack_b90;
              uStack_d48 = uStack_b78;
              uStack_d50 = uStack_b80;
              uStack_d38 = uStack_b68;
              uStack_d40 = uStack_b70;
              uStack_d30 = uStack_b60;
              uStack_d98 = uStack_bc8;
              uStack_da0 = uStack_bd0;
              uStack_d88 = uStack_bb8;
              uStack_d90 = uStack_bc0;
              uStack_d78 = uStack_ba8;
              uStack_d80 = uStack_bb0;
              uStack_d68 = uStack_b98;
              uStack_d70 = uStack_ba0;
              uStack_dd8 = uStack_c08;
              uStack_de0 = uStack_c10;
              uStack_dc8 = uStack_bf8;
              uStack_dd0 = uStack_c00;
              uStack_db8 = uStack_be8;
              uStack_dc0 = uStack_bf0;
              uStack_da8 = uStack_bd8;
              uStack_db0 = uStack_be0;
              uStack_df8 = uStack_c28;
              uStack_e00 = uStack_c30;
              uStack_de8 = uStack_c18;
              uStack_df0 = uStack_c20;
              FUN_10156738c(&uStack_1080,&uStack_1820,0x112db4338,&UNK_10d95e860);
              FUN_10156738c(&uStack_fa0,&uStack_1820,0x112db4338,&UNK_10d95e860);
              FUN_101568ed8(&uStack_e00,0x112db4338,&UNK_10d95e860);
LAB_101562d00:
              func_0x000107c61428((char *)(param_1 + 0x220),auStack_10c8,0,0);
              cVar4 = *(char *)(param_1 + 0x220);
              func_0x000107c61428((char *)(param_2 + 0x220),auStack_10e0,0,0);
              if (cVar4 != *(char *)(param_2 + 0x220)) goto LAB_101562524;
              func_0x000107c61428(param_1 + 0x221,auStack_10f8,0,0);
              cVar4 = *(char *)(param_1 + 0x221);
              func_0x000107c61428(param_2 + 0x221,auStack_1110,0,0);
              if (cVar4 != *(char *)(param_2 + 0x221)) goto LAB_101562524;
              func_0x000107c61428(param_1 + 0x224,auStack_1128,0,0);
              iVar7 = *(int *)(param_1 + 0x224);
              func_0x000107c61428(param_2 + 0x224,auStack_1140,0,0);
              if (iVar7 != *(int *)(param_2 + 0x224)) goto LAB_101562524;
              uVar21 = *(ulong *)(param_1 + 0x228);
              uVar22 = *(ulong *)(param_1 + 0x230);
              uVar23 = *(ulong *)(param_1 + 0x238);
              uVar25 = *(undefined8 *)(param_1 + 0x240);
              uVar13 = *(ulong *)(param_1 + 0x248);
              uVar14 = *(undefined8 *)(param_1 + 0x250);
              uVar15 = *(ulong *)(param_2 + 0x228);
              uVar18 = *(ulong *)(param_2 + 0x230);
              uVar29 = *(ulong *)(param_2 + 0x238);
              uVar16 = *(undefined8 *)(param_2 + 0x240);
              uVar19 = *(ulong *)(param_2 + 0x248);
              uVar17 = *(undefined8 *)(param_2 + 0x250);
              if (uVar22 >> 0x3c < 0xf) {
                if (0xe < uVar18 >> 0x3c) goto LAB_101562f18;
                FUN_101568f34(uVar21,uVar22,uVar23,uVar25,uVar13,uVar14,&SUB_10006c00c);
                FUN_101568f34(uVar15,uVar18,uVar29,uVar16,uVar19,uVar17,&SUB_10006c00c);
                uVar9 = uVar21;
                FUN_100e25fcc(uVar21,uVar22,uVar15,uVar18);
                if (((uVar9 & 1) == 0) ||
                   (uVar9 = uVar23, FUN_100e25fcc(uVar23,uVar25,uVar29,uVar16), (uVar9 & 1) == 0)) {
                  FUN_101568f34(uVar15,uVar18,uVar29,uVar16,uVar19,uVar17,&SUB_10006c090);
                }
                else {
                  uVar9 = uVar13;
                  FUN_100e25fcc(uVar13,uVar14,uVar19,uVar17);
                  FUN_101568f34(uVar15,uVar18,uVar29,uVar16,uVar19,uVar17,&SUB_10006c090);
                  if ((uVar9 & 1) != 0) goto LAB_101562e54;
                }
LAB_1015630b4:
                FUN_101568f34(uVar21,uVar22,uVar23,uVar25,uVar13,uVar14,&SUB_10006c090);
                goto LAB_101562524;
              }
              if (uVar18 >> 0x3c < 0xf) {
LAB_101562f18:
                FUN_101568f34(uVar21,uVar22,uVar23,uVar25,uVar13,uVar14,&SUB_10006c00c);
                FUN_101568f34(uVar15,uVar18,uVar29,uVar16,uVar19,uVar17,&SUB_10006c00c);
                FUN_101568f34(uVar21,uVar22,uVar23,uVar25,uVar13,uVar14,&SUB_10006c090);
                uVar21 = uVar15;
                uVar22 = uVar18;
                uVar23 = uVar29;
                uVar25 = uVar16;
                uVar13 = uVar19;
                uVar14 = uVar17;
                goto LAB_1015630b4;
              }
              FUN_101568f34(uVar21,uVar22,uVar23,uVar25,uVar13,uVar14,&SUB_10006c00c);
              FUN_101568f34(uVar15,uVar18,uVar29,uVar16,uVar19,uVar17,&SUB_10006c00c);
LAB_101562e54:
              FUN_101568f34(uVar21,uVar22,uVar23,uVar25,uVar13,uVar14,&SUB_10006c090);
              func_0x000107c61428(param_1 + 600,auStack_1158,0,0);
              cVar4 = *(char *)(param_1 + 600);
              func_0x000107c61428(param_2 + 600,auStack_1170,0,0);
              if (cVar4 != *(char *)(param_2 + 600)) goto LAB_101562524;
              func_0x000107c61428(param_1 + 0x260,auStack_1188,0,0);
              uVar22 = *(ulong *)(param_1 + 0x260);
              cVar4 = *(char *)(param_1 + 0x268);
              func_0x000107c61428(param_2 + 0x260,auStack_11a0,0,0);
              uVar21 = (ulong)(uVar22 != 0);
              if (cVar4 != '\x01') {
                uVar21 = uVar22;
              }
              if (*(char *)(param_2 + 0x268) != '\x01') {
                if (uVar21 == *(ulong *)(param_2 + 0x260)) goto LAB_1015630cc;
                goto LAB_101562524;
              }
              if (*(ulong *)(param_2 + 0x260) == 0) {
                if (uVar21 == 0) goto LAB_1015630cc;
                goto LAB_101562524;
              }
              if (uVar21 != 1) goto LAB_101562524;
LAB_1015630cc:
              func_0x000107c61428(param_1 + 0x270,auStack_11b8,0,0);
              func_0x000107c61428(param_2 + 0x270,&uStack_c30,0x20,0);
              uVar21 = *(ulong *)(param_1 + 0x270);
              if ((uVar21 == *(ulong *)(param_2 + 0x270)) &&
                 (*(long *)(param_1 + 0x278) == *(long *)(param_2 + 0x278))) {
                func_0x000107c614a8(&uStack_c30);
              }
              else {
                func_0x000107c605b8();
                func_0x000107c614a8(&uStack_c30);
                if ((uVar21 & 1) == 0) goto LAB_101562524;
              }
              func_0x000107c61428(param_1 + 0x280,auStack_1388,0,0);
              func_0x000107c61428(param_2 + 0x280,auStack_13a0,0,0);
              iVar7 = (int)&uStack_b58;
              uStack_b88 = *(ulong *)(param_1 + 0x328);
              uStack_b90 = *(ulong *)(param_1 + 800);
              uStack_12b8 = *(undefined8 *)(param_1 + 0x338);
              uStack_12c0 = *(undefined8 *)(param_1 + 0x330);
              uStack_b98 = *(ulong *)(param_1 + 0x318);
              uStack_ba0 = *(ulong *)(param_1 + 0x310);
              uStack_12c8 = *(undefined8 *)(param_1 + 0x328);
              uStack_12d0 = *(undefined8 *)(param_1 + 800);
              uStack_b78 = *(ulong *)(param_1 + 0x338);
              uStack_b80 = *(ulong *)(param_1 + 0x330);
              uStack_12a8 = *(undefined8 *)(param_1 + 0x348);
              uStack_12b0 = *(undefined8 *)(param_1 + 0x340);
              uStack_bc8 = *(ulong *)(param_1 + 0x2e8);
              uStack_bd0 = *(ulong *)(param_1 + 0x2e0);
              uStack_12f8 = *(undefined8 *)(param_1 + 0x2f8);
              uStack_1300 = *(undefined8 *)(param_1 + 0x2f0);
              uStack_bd8 = *(ulong *)(param_1 + 0x2d8);
              uStack_be0 = *(ulong *)(param_1 + 0x2d0);
              uStack_1308 = *(undefined8 *)(param_1 + 0x2e8);
              uStack_1310 = *(undefined8 *)(param_1 + 0x2e0);
              uStack_bb8 = *(ulong *)(param_1 + 0x2f8);
              uStack_bc0 = *(ulong *)(param_1 + 0x2f0);
              uStack_12e8 = *(undefined8 *)(param_1 + 0x308);
              uStack_12f0 = *(undefined8 *)(param_1 + 0x300);
              uStack_ba8 = *(ulong *)(param_1 + 0x308);
              uStack_bb0 = *(ulong *)(param_1 + 0x300);
              uStack_12d8 = *(undefined8 *)(param_1 + 0x318);
              uStack_12e0 = *(undefined8 *)(param_1 + 0x310);
              uStack_c08 = *(ulong *)(param_1 + 0x2a8);
              uStack_c10 = *(ulong *)(param_1 + 0x2a0);
              uStack_1338 = *(undefined8 *)(param_1 + 0x2b8);
              uStack_1340 = *(undefined8 *)(param_1 + 0x2b0);
              uStack_c18 = *(ulong *)(param_1 + 0x298);
              uStack_c20 = *(ulong *)(param_1 + 0x290);
              uStack_1348 = *(undefined8 *)(param_1 + 0x2a8);
              uStack_1350 = *(undefined8 *)(param_1 + 0x2a0);
              uStack_bf8 = *(ulong *)(param_1 + 0x2b8);
              uStack_c00 = *(ulong *)(param_1 + 0x2b0);
              uStack_1328 = *(undefined8 *)(param_1 + 0x2c8);
              uStack_1330 = *(undefined8 *)(param_1 + 0x2c0);
              uStack_be8 = *(ulong *)(param_1 + 0x2c8);
              uStack_bf0 = *(ulong *)(param_1 + 0x2c0);
              uStack_1318 = *(undefined8 *)(param_1 + 0x2d8);
              uStack_1320 = *(undefined8 *)(param_1 + 0x2d0);
              uStack_1368 = *(undefined8 *)(param_1 + 0x288);
              uStack_1370 = *(undefined8 *)(param_1 + 0x280);
              uStack_1358 = *(undefined8 *)(param_1 + 0x298);
              uStack_1360 = *(undefined8 *)(param_1 + 0x290);
              uStack_c28 = *(ulong *)(param_1 + 0x288);
              uStack_c30 = *(ulong *)(param_1 + 0x280);
              uStack_b68 = *(ulong *)(param_1 + 0x348);
              uStack_b70 = *(ulong *)(param_1 + 0x340);
              uStack_ab0 = *(ulong *)(param_2 + 0x328);
              uStack_ab8 = *(ulong *)(param_2 + 800);
              uStack_11d8 = *(undefined8 *)(param_2 + 0x338);
              uStack_11e0 = *(undefined8 *)(param_2 + 0x330);
              uStack_ac0 = *(ulong *)(param_2 + 0x318);
              uStack_ac8 = *(ulong *)(param_2 + 0x310);
              uStack_11e8 = *(undefined8 *)(param_2 + 0x328);
              uStack_11f0 = *(undefined8 *)(param_2 + 800);
              uStack_aa0 = *(ulong *)(param_2 + 0x338);
              uStack_aa8 = *(ulong *)(param_2 + 0x330);
              uStack_11c8 = *(undefined8 *)(param_2 + 0x348);
              uStack_11d0 = *(undefined8 *)(param_2 + 0x340);
              uStack_af0 = *(ulong *)(param_2 + 0x2e8);
              uStack_af8 = *(ulong *)(param_2 + 0x2e0);
              uStack_1218 = *(undefined8 *)(param_2 + 0x2f8);
              uStack_1220 = *(undefined8 *)(param_2 + 0x2f0);
              uStack_b00 = *(ulong *)(param_2 + 0x2d8);
              uStack_b08 = *(ulong *)(param_2 + 0x2d0);
              uStack_1228 = *(undefined8 *)(param_2 + 0x2e8);
              uStack_1230 = *(undefined8 *)(param_2 + 0x2e0);
              uStack_ae0 = *(ulong *)(param_2 + 0x2f8);
              uStack_ae8 = *(ulong *)(param_2 + 0x2f0);
              uStack_1208 = *(undefined8 *)(param_2 + 0x308);
              uStack_1210 = *(undefined8 *)(param_2 + 0x300);
              uStack_ad0 = *(ulong *)(param_2 + 0x308);
              uStack_ad8 = *(ulong *)(param_2 + 0x300);
              uStack_11f8 = *(undefined8 *)(param_2 + 0x318);
              uStack_1200 = *(undefined8 *)(param_2 + 0x310);
              uStack_b30 = *(ulong *)(param_2 + 0x2a8);
              uStack_b38 = *(ulong *)(param_2 + 0x2a0);
              uStack_1258 = *(undefined8 *)(param_2 + 0x2b8);
              uStack_1260 = *(undefined8 *)(param_2 + 0x2b0);
              uStack_b40 = *(ulong *)(param_2 + 0x298);
              uStack_b48 = *(ulong *)(param_2 + 0x290);
              uStack_1268 = *(undefined8 *)(param_2 + 0x2a8);
              uStack_1270 = *(undefined8 *)(param_2 + 0x2a0);
              uStack_b20 = *(ulong *)(param_2 + 0x2b8);
              uStack_b28 = *(ulong *)(param_2 + 0x2b0);
              uStack_1248 = *(undefined8 *)(param_2 + 0x2c8);
              uStack_1250 = *(undefined8 *)(param_2 + 0x2c0);
              uStack_b10 = *(ulong *)(param_2 + 0x2c8);
              uStack_b18 = *(ulong *)(param_2 + 0x2c0);
              uStack_1238 = *(undefined8 *)(param_2 + 0x2d8);
              uStack_1240 = *(undefined8 *)(param_2 + 0x2d0);
              uStack_1288 = *(undefined8 *)(param_2 + 0x288);
              uStack_1290 = *(ulong *)(param_2 + 0x280);
              uStack_1278 = *(undefined8 *)(param_2 + 0x298);
              uStack_1280 = *(undefined8 *)(param_2 + 0x290);
              uStack_b50 = *(ulong *)(param_2 + 0x288);
              uStack_b58 = *(ulong *)(param_2 + 0x280);
              uStack_a90 = *(ulong *)(param_2 + 0x348);
              uStack_a98 = *(ulong *)(param_2 + 0x340);
              uStack_12a0 = *(undefined8 *)(param_1 + 0x350);
              uStack_b60 = *(ulong *)(param_1 + 0x350);
              uStack_11c0 = *(undefined8 *)(param_2 + 0x350);
              uStack_a88 = *(ulong *)(param_2 + 0x350);
              iVar6 = (int)&uStack_c30;
              FUN_101567240();
              if (iVar6 != 1) {
                uStack_d58 = uStack_b88;
                uStack_d60 = uStack_b90;
                uStack_d48 = uStack_b78;
                uStack_d50 = uStack_b80;
                uStack_d38 = uStack_b68;
                uStack_d40 = uStack_b70;
                uStack_d30 = uStack_b60;
                uStack_d98 = uStack_bc8;
                uStack_da0 = uStack_bd0;
                uStack_d88 = uStack_bb8;
                uStack_d90 = uStack_bc0;
                uStack_d78 = uStack_ba8;
                uStack_d80 = uStack_bb0;
                uStack_d68 = uStack_b98;
                uStack_d70 = uStack_ba0;
                uStack_dd8 = uStack_c08;
                uStack_de0 = uStack_c10;
                uStack_dc8 = uStack_bf8;
                uStack_dd0 = uStack_c00;
                uStack_db8 = uStack_be8;
                uStack_dc0 = uStack_bf0;
                uStack_da8 = uStack_bd8;
                uStack_db0 = uStack_be0;
                uStack_df8 = uStack_c28;
                uStack_e00 = uStack_c30;
                uStack_de8 = uStack_c18;
                uStack_df0 = uStack_c20;
                FUN_101567240();
                if (iVar7 == 1) goto LAB_10156342c;
                uStack_1778 = uStack_ab0;
                uStack_1780 = uStack_ab8;
                uStack_1768 = uStack_aa0;
                uStack_1770 = uStack_aa8;
                uStack_1758 = uStack_a90;
                uStack_1760 = uStack_a98;
                uStack_17b8 = uStack_af0;
                uStack_17c0 = uStack_af8;
                uStack_17a8 = uStack_ae0;
                uStack_17b0 = uStack_ae8;
                uStack_1798 = uStack_ad0;
                uStack_17a0 = uStack_ad8;
                uStack_1788 = uStack_ac0;
                uStack_1790 = uStack_ac8;
                uStack_17f8 = uStack_b30;
                uStack_1800 = uStack_b38;
                uStack_17e8 = uStack_b20;
                uStack_17f0 = uStack_b28;
                uStack_17d8 = uStack_b10;
                uStack_17e0 = uStack_b18;
                uStack_17c8 = uStack_b00;
                uStack_17d0 = uStack_b08;
                uStack_1818 = uStack_b50;
                uStack_1820 = uStack_b58;
                uStack_1808 = uStack_b40;
                uStack_1810 = uStack_b48;
                uStack_448 = uStack_ab0;
                uStack_450 = uStack_ab8;
                uStack_438 = uStack_aa0;
                uStack_440 = uStack_aa8;
                uStack_428 = uStack_a90;
                uStack_430 = uStack_a98;
                uStack_488 = uStack_af0;
                uStack_490 = uStack_af8;
                uStack_478 = uStack_ae0;
                uStack_480 = uStack_ae8;
                uStack_468 = uStack_ad0;
                uStack_470 = uStack_ad8;
                uStack_458 = uStack_ac0;
                uStack_460 = uStack_ac8;
                uStack_4c8 = uStack_b30;
                uStack_4d0 = uStack_b38;
                uStack_4b8 = uStack_b20;
                uStack_4c0 = uStack_b28;
                uStack_4a8 = uStack_b10;
                uStack_4b0 = uStack_b18;
                uStack_498 = uStack_b00;
                uStack_4a0 = uStack_b08;
                uStack_1750 = uStack_a88;
                uStack_420 = uStack_a88;
                uStack_4e8 = uStack_b50;
                uStack_4f0 = uStack_b58;
                uStack_4d8 = uStack_b40;
                uStack_4e0 = uStack_b48;
                uStack_528 = uStack_d58;
                uStack_530 = uStack_d60;
                uStack_518 = uStack_d48;
                uStack_520 = uStack_d50;
                uStack_508 = uStack_d38;
                uStack_510 = uStack_d40;
                uStack_500 = uStack_d30;
                uStack_568 = uStack_d98;
                uStack_570 = uStack_da0;
                uStack_558 = uStack_d88;
                uStack_560 = uStack_d90;
                uStack_548 = uStack_d78;
                uStack_550 = uStack_d80;
                uStack_538 = uStack_d68;
                uStack_540 = uStack_d70;
                uStack_5a8 = uStack_dd8;
                uStack_5b0 = uStack_de0;
                uStack_598 = uStack_dc8;
                uStack_5a0 = uStack_dd0;
                uStack_588 = uStack_db8;
                uStack_590 = uStack_dc0;
                uStack_578 = uStack_da8;
                uStack_580 = uStack_db0;
                uStack_5c8 = uStack_df8;
                uStack_5d0 = uStack_e00;
                uStack_5b8 = uStack_de8;
                uStack_5c0 = uStack_df0;
                FUN_10156738c(&uStack_1370,&uStack_1910,0x112db4338,&UNK_10d95e860);
                FUN_10156738c(&uStack_1290,&uStack_1910,0x112db4338,&UNK_10d95e860);
                puVar8 = &uStack_5d0;
                FUN_10162fed8(puVar8,&uStack_4f0);
                FUN_101568ed8(&uStack_1820,0x112db4338,&UNK_10d95e860);
                FUN_101568ed8(&uStack_c30,0x112db4338,&UNK_10d95e860);
                if (((ulong)puVar8 & 1) != 0) goto LAB_101563604;
                goto LAB_101562524;
              }
              FUN_101567240();
              if (iVar7 != 1) {
LAB_10156342c:
                func_0x000107c610b4(&uStack_e00,&uStack_c30,0x1b0);
                FUN_10156738c(&uStack_1370,&uStack_1820,0x112db4338,&UNK_10d95e860);
                puVar8 = &uStack_1290;
                goto LAB_101562b44;
              }
              uStack_d58 = uStack_b88;
              uStack_d60 = uStack_b90;
              uStack_d48 = uStack_b78;
              uStack_d50 = uStack_b80;
              uStack_d38 = uStack_b68;
              uStack_d40 = uStack_b70;
              uStack_d30 = uStack_b60;
              uStack_d98 = uStack_bc8;
              uStack_da0 = uStack_bd0;
              uStack_d88 = uStack_bb8;
              uStack_d90 = uStack_bc0;
              uStack_d78 = uStack_ba8;
              uStack_d80 = uStack_bb0;
              uStack_d68 = uStack_b98;
              uStack_d70 = uStack_ba0;
              uStack_dd8 = uStack_c08;
              uStack_de0 = uStack_c10;
              uStack_dc8 = uStack_bf8;
              uStack_dd0 = uStack_c00;
              uStack_db8 = uStack_be8;
              uStack_dc0 = uStack_bf0;
              uStack_da8 = uStack_bd8;
              uStack_db0 = uStack_be0;
              uStack_df8 = uStack_c28;
              uStack_e00 = uStack_c30;
              uStack_de8 = uStack_c18;
              uStack_df0 = uStack_c20;
              FUN_10156738c(&uStack_1370,&uStack_1820,0x112db4338,&UNK_10d95e860);
              FUN_10156738c(&uStack_1290,&uStack_1820,0x112db4338,&UNK_10d95e860);
              FUN_101568ed8(&uStack_e00,0x112db4338,&UNK_10d95e860);
LAB_101563604:
              puVar8 = (ulong *)(param_1 + 0x358);
              func_0x000107c61428(puVar8,auStack_1578,0,0);
              puVar1 = (ulong *)(param_2 + 0x358);
              func_0x000107c61428(puVar1,auStack_1590,0,0);
              iVar7 = (int)&uStack_b58;
              uStack_b88 = *(ulong *)(param_1 + 0x400);
              uStack_b90 = *(ulong *)(param_1 + 0x3f8);
              uStack_14a8 = *(undefined8 *)(param_1 + 0x410);
              uStack_14b0 = *(undefined8 *)(param_1 + 0x408);
              uStack_b98 = *(ulong *)(param_1 + 0x3f0);
              uStack_ba0 = *(ulong *)(param_1 + 1000);
              uStack_14b8 = *(undefined8 *)(param_1 + 0x400);
              uStack_14c0 = *(undefined8 *)(param_1 + 0x3f8);
              uStack_b78 = *(ulong *)(param_1 + 0x410);
              uStack_b80 = *(ulong *)(param_1 + 0x408);
              uStack_1498 = *(undefined8 *)(param_1 + 0x420);
              uStack_14a0 = *(undefined8 *)(param_1 + 0x418);
              uStack_bc8 = *(ulong *)(param_1 + 0x3c0);
              uStack_bd0 = *(ulong *)(param_1 + 0x3b8);
              uStack_14e8 = *(undefined8 *)(param_1 + 0x3d0);
              uStack_14f0 = *(undefined8 *)(param_1 + 0x3c8);
              uStack_bd8 = *(ulong *)(param_1 + 0x3b0);
              uStack_be0 = *(ulong *)(param_1 + 0x3a8);
              uStack_14f8 = *(undefined8 *)(param_1 + 0x3c0);
              uStack_1500 = *(undefined8 *)(param_1 + 0x3b8);
              uStack_bb8 = *(ulong *)(param_1 + 0x3d0);
              uStack_bc0 = *(ulong *)(param_1 + 0x3c8);
              uStack_14d8 = *(undefined8 *)(param_1 + 0x3e0);
              uStack_14e0 = *(undefined8 *)(param_1 + 0x3d8);
              uStack_ba8 = *(ulong *)(param_1 + 0x3e0);
              uStack_bb0 = *(ulong *)(param_1 + 0x3d8);
              uStack_14c8 = *(undefined8 *)(param_1 + 0x3f0);
              uStack_14d0 = *(undefined8 *)(param_1 + 1000);
              uStack_c08 = *(ulong *)(param_1 + 0x380);
              uStack_c10 = *(ulong *)(param_1 + 0x378);
              uStack_1528 = *(undefined8 *)(param_1 + 0x390);
              uStack_1530 = *(undefined8 *)(param_1 + 0x388);
              uStack_c18 = *(ulong *)(param_1 + 0x370);
              uStack_c20 = *(ulong *)(param_1 + 0x368);
              uStack_1538 = *(undefined8 *)(param_1 + 0x380);
              uStack_1540 = *(undefined8 *)(param_1 + 0x378);
              uStack_bf8 = *(ulong *)(param_1 + 0x390);
              uStack_c00 = *(ulong *)(param_1 + 0x388);
              uStack_1518 = *(undefined8 *)(param_1 + 0x3a0);
              uStack_1520 = *(undefined8 *)(param_1 + 0x398);
              uStack_be8 = *(ulong *)(param_1 + 0x3a0);
              uStack_bf0 = *(ulong *)(param_1 + 0x398);
              uStack_1508 = *(undefined8 *)(param_1 + 0x3b0);
              uStack_1510 = *(undefined8 *)(param_1 + 0x3a8);
              uStack_1558 = *(undefined8 *)(param_1 + 0x360);
              uStack_1560 = *puVar8;
              uStack_1548 = *(undefined8 *)(param_1 + 0x370);
              uStack_1550 = *(undefined8 *)(param_1 + 0x368);
              uStack_c28 = *(ulong *)(param_1 + 0x360);
              uStack_c30 = *puVar8;
              uStack_b68 = *(ulong *)(param_1 + 0x420);
              uStack_b70 = *(ulong *)(param_1 + 0x418);
              uStack_ab0 = *(ulong *)(param_2 + 0x400);
              uStack_ab8 = *(ulong *)(param_2 + 0x3f8);
              uStack_13c8 = *(undefined8 *)(param_2 + 0x410);
              uStack_13d0 = *(undefined8 *)(param_2 + 0x408);
              uStack_ac0 = *(ulong *)(param_2 + 0x3f0);
              uStack_ac8 = *(ulong *)(param_2 + 1000);
              uStack_13d8 = *(undefined8 *)(param_2 + 0x400);
              uStack_13e0 = *(undefined8 *)(param_2 + 0x3f8);
              uStack_aa0 = *(ulong *)(param_2 + 0x410);
              uStack_aa8 = *(ulong *)(param_2 + 0x408);
              uStack_13b8 = *(undefined8 *)(param_2 + 0x420);
              uStack_13c0 = *(undefined8 *)(param_2 + 0x418);
              uStack_af0 = *(ulong *)(param_2 + 0x3c0);
              uStack_af8 = *(ulong *)(param_2 + 0x3b8);
              uStack_1408 = *(undefined8 *)(param_2 + 0x3d0);
              uStack_1410 = *(undefined8 *)(param_2 + 0x3c8);
              uStack_b00 = *(ulong *)(param_2 + 0x3b0);
              uStack_b08 = *(ulong *)(param_2 + 0x3a8);
              uStack_1418 = *(undefined8 *)(param_2 + 0x3c0);
              uStack_1420 = *(undefined8 *)(param_2 + 0x3b8);
              uStack_ae0 = *(ulong *)(param_2 + 0x3d0);
              uStack_ae8 = *(ulong *)(param_2 + 0x3c8);
              uStack_13f8 = *(undefined8 *)(param_2 + 0x3e0);
              uStack_1400 = *(undefined8 *)(param_2 + 0x3d8);
              uStack_ad0 = *(ulong *)(param_2 + 0x3e0);
              uStack_ad8 = *(ulong *)(param_2 + 0x3d8);
              uStack_13e8 = *(undefined8 *)(param_2 + 0x3f0);
              uStack_13f0 = *(undefined8 *)(param_2 + 1000);
              uStack_b30 = *(ulong *)(param_2 + 0x380);
              uStack_b38 = *(ulong *)(param_2 + 0x378);
              uStack_1448 = *(undefined8 *)(param_2 + 0x390);
              uStack_1450 = *(undefined8 *)(param_2 + 0x388);
              uStack_b40 = *(ulong *)(param_2 + 0x370);
              uStack_b48 = *(ulong *)(param_2 + 0x368);
              uStack_1458 = *(undefined8 *)(param_2 + 0x380);
              uStack_1460 = *(undefined8 *)(param_2 + 0x378);
              uStack_b20 = *(ulong *)(param_2 + 0x390);
              uStack_b28 = *(ulong *)(param_2 + 0x388);
              uStack_1438 = *(undefined8 *)(param_2 + 0x3a0);
              uStack_1440 = *(undefined8 *)(param_2 + 0x398);
              uStack_b10 = *(ulong *)(param_2 + 0x3a0);
              uStack_b18 = *(ulong *)(param_2 + 0x398);
              uStack_1428 = *(undefined8 *)(param_2 + 0x3b0);
              uStack_1430 = *(undefined8 *)(param_2 + 0x3a8);
              uStack_1478 = *(undefined8 *)(param_2 + 0x360);
              uStack_1480 = *puVar1;
              uStack_1468 = *(undefined8 *)(param_2 + 0x370);
              uStack_1470 = *(undefined8 *)(param_2 + 0x368);
              uStack_b50 = *(ulong *)(param_2 + 0x360);
              uStack_b58 = *puVar1;
              uStack_a90 = *(ulong *)(param_2 + 0x420);
              uStack_a98 = *(ulong *)(param_2 + 0x418);
              uStack_1490 = *(undefined8 *)(param_1 + 0x428);
              uStack_b60 = *(ulong *)(param_1 + 0x428);
              uStack_13b0 = *(undefined8 *)(param_2 + 0x428);
              uStack_a88 = *(ulong *)(param_2 + 0x428);
              iVar6 = (int)&uStack_c30;
              FUN_101567240();
              if (iVar6 == 1) {
                FUN_101567240();
                if (iVar7 != 1) {
LAB_1015638ec:
                  func_0x000107c610b4(&uStack_e00,&uStack_c30,0x1b0);
                  FUN_10156738c(&uStack_1560,&uStack_1820,0x112db4338,&UNK_10d95e860);
                  puVar8 = &uStack_1480;
                  goto LAB_101562b44;
                }
                uStack_d58 = uStack_b88;
                uStack_d60 = uStack_b90;
                uStack_d48 = uStack_b78;
                uStack_d50 = uStack_b80;
                uStack_d38 = uStack_b68;
                uStack_d40 = uStack_b70;
                uStack_d30 = uStack_b60;
                uStack_d98 = uStack_bc8;
                uStack_da0 = uStack_bd0;
                uStack_d88 = uStack_bb8;
                uStack_d90 = uStack_bc0;
                uStack_d78 = uStack_ba8;
                uStack_d80 = uStack_bb0;
                uStack_d68 = uStack_b98;
                uStack_d70 = uStack_ba0;
                uStack_dd8 = uStack_c08;
                uStack_de0 = uStack_c10;
                uStack_dc8 = uStack_bf8;
                uStack_dd0 = uStack_c00;
                uStack_db8 = uStack_be8;
                uStack_dc0 = uStack_bf0;
                uStack_da8 = uStack_bd8;
                uStack_db0 = uStack_be0;
                uStack_df8 = uStack_c28;
                uStack_e00 = uStack_c30;
                uStack_de8 = uStack_c18;
                uStack_df0 = uStack_c20;
                FUN_10156738c(&uStack_1560,&uStack_1820,0x112db4338,&UNK_10d95e860);
                FUN_10156738c(&uStack_1480,&uStack_1820,0x112db4338,&UNK_10d95e860);
                FUN_101568ed8(&uStack_e00,0x112db4338,&UNK_10d95e860);
              }
              else {
                uStack_d58 = uStack_b88;
                uStack_d60 = uStack_b90;
                uStack_d48 = uStack_b78;
                uStack_d50 = uStack_b80;
                uStack_d38 = uStack_b68;
                uStack_d40 = uStack_b70;
                uStack_d30 = uStack_b60;
                uStack_d98 = uStack_bc8;
                uStack_da0 = uStack_bd0;
                uStack_d88 = uStack_bb8;
                uStack_d90 = uStack_bc0;
                uStack_d78 = uStack_ba8;
                uStack_d80 = uStack_bb0;
                uStack_d68 = uStack_b98;
                uStack_d70 = uStack_ba0;
                uStack_dd8 = uStack_c08;
                uStack_de0 = uStack_c10;
                uStack_dc8 = uStack_bf8;
                uStack_dd0 = uStack_c00;
                uStack_db8 = uStack_be8;
                uStack_dc0 = uStack_bf0;
                uStack_da8 = uStack_bd8;
                uStack_db0 = uStack_be0;
                uStack_df8 = uStack_c28;
                uStack_e00 = uStack_c30;
                uStack_de8 = uStack_c18;
                uStack_df0 = uStack_c20;
                FUN_101567240();
                if (iVar7 == 1) goto LAB_1015638ec;
                uStack_1778 = uStack_ab0;
                uStack_1780 = uStack_ab8;
                uStack_1768 = uStack_aa0;
                uStack_1770 = uStack_aa8;
                uStack_1758 = uStack_a90;
                uStack_1760 = uStack_a98;
                uStack_17b8 = uStack_af0;
                uStack_17c0 = uStack_af8;
                uStack_17a8 = uStack_ae0;
                uStack_17b0 = uStack_ae8;
                uStack_1798 = uStack_ad0;
                uStack_17a0 = uStack_ad8;
                uStack_1788 = uStack_ac0;
                uStack_1790 = uStack_ac8;
                uStack_17f8 = uStack_b30;
                uStack_1800 = uStack_b38;
                uStack_17e8 = uStack_b20;
                uStack_17f0 = uStack_b28;
                uStack_17d8 = uStack_b10;
                uStack_17e0 = uStack_b18;
                uStack_17c8 = uStack_b00;
                uStack_17d0 = uStack_b08;
                uStack_1818 = uStack_b50;
                uStack_1820 = uStack_b58;
                uStack_1808 = uStack_b40;
                uStack_1810 = uStack_b48;
                uStack_608 = uStack_ab0;
                uStack_610 = uStack_ab8;
                uStack_5f8 = uStack_aa0;
                uStack_600 = uStack_aa8;
                uStack_5e8 = uStack_a90;
                uStack_5f0 = uStack_a98;
                uStack_648 = uStack_af0;
                uStack_650 = uStack_af8;
                uStack_638 = uStack_ae0;
                uStack_640 = uStack_ae8;
                uStack_628 = uStack_ad0;
                uStack_630 = uStack_ad8;
                uStack_618 = uStack_ac0;
                uStack_620 = uStack_ac8;
                uStack_688 = uStack_b30;
                uStack_690 = uStack_b38;
                uStack_678 = uStack_b20;
                uStack_680 = uStack_b28;
                uStack_668 = uStack_b10;
                uStack_670 = uStack_b18;
                uStack_658 = uStack_b00;
                uStack_660 = uStack_b08;
                uStack_1750 = uStack_a88;
                uStack_5e0 = uStack_a88;
                uStack_6a8 = uStack_b50;
                uStack_6b0 = uStack_b58;
                uStack_698 = uStack_b40;
                uStack_6a0 = uStack_b48;
                uStack_6e8 = uStack_d58;
                uStack_6f0 = uStack_d60;
                uStack_6d8 = uStack_d48;
                uStack_6e0 = uStack_d50;
                uStack_6c8 = uStack_d38;
                uStack_6d0 = uStack_d40;
                uStack_6c0 = uStack_d30;
                uStack_728 = uStack_d98;
                uStack_730 = uStack_da0;
                uStack_718 = uStack_d88;
                uStack_720 = uStack_d90;
                uStack_708 = uStack_d78;
                uStack_710 = uStack_d80;
                uStack_6f8 = uStack_d68;
                uStack_700 = uStack_d70;
                uStack_768 = uStack_dd8;
                uStack_770 = uStack_de0;
                uStack_758 = uStack_dc8;
                uStack_760 = uStack_dd0;
                uStack_748 = uStack_db8;
                uStack_750 = uStack_dc0;
                uStack_738 = uStack_da8;
                uStack_740 = uStack_db0;
                uStack_788 = uStack_df8;
                uStack_790 = uStack_e00;
                uStack_778 = uStack_de8;
                uStack_780 = uStack_df0;
                FUN_10156738c(&uStack_1560,&uStack_1910,0x112db4338,&UNK_10d95e860);
                FUN_10156738c(&uStack_1480,&uStack_1910,0x112db4338,&UNK_10d95e860);
                puVar8 = &uStack_790;
                FUN_10162fed8(puVar8,&uStack_6b0);
                FUN_101568ed8(&uStack_1820,0x112db4338,&UNK_10d95e860);
                FUN_101568ed8(&uStack_c30,0x112db4338,&UNK_10d95e860);
                if (((ulong)puVar8 & 1) == 0) goto LAB_101562524;
              }
              func_0x000107c61428(param_1 + 0x430,auStack_15a8,0,0);
              func_0x000107c61428(param_2 + 0x430,auStack_15c0,0,0);
              uStack_1958 = *(ulong *)(param_1 + 0x4d8);
              uStack_1960 = *(ulong *)(param_1 + 0x4d0);
              uStack_1948 = *(ulong *)(param_1 + 0x4e8);
              uStack_1950 = *(ulong *)(param_1 + 0x4e0);
              uStack_1938 = *(ulong *)(param_1 + 0x4f8);
              uStack_1940 = *(ulong *)(param_1 + 0x4f0);
              uStack_1928 = *(ulong *)(param_1 + 0x508);
              uStack_1930 = *(ulong *)(param_1 + 0x500);
              uStack_1998 = *(ulong *)(param_1 + 0x498);
              uStack_19a0 = *(ulong *)(param_1 + 0x490);
              uStack_1988 = *(ulong *)(param_1 + 0x4a8);
              uStack_1990 = *(ulong *)(param_1 + 0x4a0);
              uStack_1978 = *(ulong *)(param_1 + 0x4b8);
              uStack_1980 = *(ulong *)(param_1 + 0x4b0);
              uStack_1968 = *(ulong *)(param_1 + 0x4c8);
              uStack_1970 = *(ulong *)(param_1 + 0x4c0);
              uStack_19d8 = *(ulong *)(param_1 + 0x458);
              uStack_19e0 = *(ulong *)(param_1 + 0x450);
              uStack_19c8 = *(ulong *)(param_1 + 0x468);
              uStack_19d0 = *(ulong *)(param_1 + 0x460);
              uStack_19b8 = *(ulong *)(param_1 + 0x478);
              uStack_19c0 = *(ulong *)(param_1 + 0x470);
              uStack_19a8 = *(ulong *)(param_1 + 0x488);
              uStack_19b0 = *(ulong *)(param_1 + 0x480);
              uStack_19f8 = *(ulong *)(param_1 + 0x438);
              uStack_1a00 = *(ulong *)(param_1 + 0x430);
              uStack_19e8 = *(ulong *)(param_1 + 0x448);
              uStack_19f0 = *(ulong *)(param_1 + 0x440);
              uStack_b88 = *(ulong *)(param_1 + 0x4d8);
              uStack_b90 = *(ulong *)(param_1 + 0x4d0);
              uStack_b78 = *(ulong *)(param_1 + 0x4e8);
              uStack_b80 = *(ulong *)(param_1 + 0x4e0);
              uStack_b68 = *(ulong *)(param_1 + 0x4f8);
              uStack_b70 = *(ulong *)(param_1 + 0x4f0);
              uStack_b58 = *(ulong *)(param_1 + 0x508);
              uStack_b60 = *(ulong *)(param_1 + 0x500);
              uStack_bc8 = *(ulong *)(param_1 + 0x498);
              uStack_bd0 = *(ulong *)(param_1 + 0x490);
              uStack_bb8 = *(ulong *)(param_1 + 0x4a8);
              uStack_bc0 = *(ulong *)(param_1 + 0x4a0);
              uStack_ba8 = *(ulong *)(param_1 + 0x4b8);
              uStack_bb0 = *(ulong *)(param_1 + 0x4b0);
              uStack_b98 = *(ulong *)(param_1 + 0x4c8);
              uStack_ba0 = *(ulong *)(param_1 + 0x4c0);
              uStack_c08 = *(ulong *)(param_1 + 0x458);
              uStack_c10 = *(ulong *)(param_1 + 0x450);
              uStack_bf8 = *(ulong *)(param_1 + 0x468);
              uStack_c00 = *(ulong *)(param_1 + 0x460);
              uStack_be8 = *(ulong *)(param_1 + 0x478);
              uStack_bf0 = *(ulong *)(param_1 + 0x470);
              uStack_bd8 = *(ulong *)(param_1 + 0x488);
              uStack_be0 = *(ulong *)(param_1 + 0x480);
              uStack_c28 = *(ulong *)(param_1 + 0x438);
              uStack_c30 = *(ulong *)(param_1 + 0x430);
              uStack_c18 = *(ulong *)(param_1 + 0x448);
              uStack_c20 = *(ulong *)(param_1 + 0x440);
              uStack_1868 = *(ulong *)(param_2 + 0x4d8);
              uStack_1870 = *(ulong *)(param_2 + 0x4d0);
              uStack_1858 = *(ulong *)(param_2 + 0x4e8);
              uStack_1860 = *(ulong *)(param_2 + 0x4e0);
              uStack_1848 = *(ulong *)(param_2 + 0x4f8);
              uStack_1850 = *(ulong *)(param_2 + 0x4f0);
              uStack_1838 = *(ulong *)(param_2 + 0x508);
              uStack_1840 = *(ulong *)(param_2 + 0x500);
              uStack_18a8 = *(ulong *)(param_2 + 0x498);
              uStack_18b0 = *(ulong *)(param_2 + 0x490);
              uStack_1898 = *(ulong *)(param_2 + 0x4a8);
              uStack_18a0 = *(ulong *)(param_2 + 0x4a0);
              uStack_1888 = *(ulong *)(param_2 + 0x4b8);
              uStack_1890 = *(ulong *)(param_2 + 0x4b0);
              uStack_1878 = *(ulong *)(param_2 + 0x4c8);
              uStack_1880 = *(ulong *)(param_2 + 0x4c0);
              uStack_18e8 = *(ulong *)(param_2 + 0x458);
              uStack_18f0 = *(ulong *)(param_2 + 0x450);
              uStack_18d8 = *(ulong *)(param_2 + 0x468);
              uStack_18e0 = *(ulong *)(param_2 + 0x460);
              uStack_18c8 = *(ulong *)(param_2 + 0x478);
              uStack_18d0 = *(ulong *)(param_2 + 0x470);
              uStack_18b8 = *(ulong *)(param_2 + 0x488);
              uStack_18c0 = *(ulong *)(param_2 + 0x480);
              uStack_1908 = *(ulong *)(param_2 + 0x438);
              uStack_1910 = *(ulong *)(param_2 + 0x430);
              uStack_18f8 = *(ulong *)(param_2 + 0x448);
              uStack_1900 = *(ulong *)(param_2 + 0x440);
              uStack_aa8 = *(ulong *)(param_2 + 0x4d8);
              uStack_ab0 = *(ulong *)(param_2 + 0x4d0);
              uStack_a98 = *(ulong *)(param_2 + 0x4e8);
              uStack_aa0 = *(ulong *)(param_2 + 0x4e0);
              uStack_a88 = *(ulong *)(param_2 + 0x4f8);
              uStack_a90 = *(ulong *)(param_2 + 0x4f0);
              uStack_a78 = *(ulong *)(param_2 + 0x508);
              uStack_a80 = *(ulong *)(param_2 + 0x500);
              uStack_ae8 = *(ulong *)(param_2 + 0x498);
              uStack_af0 = *(ulong *)(param_2 + 0x490);
              uStack_ad8 = *(ulong *)(param_2 + 0x4a8);
              uStack_ae0 = *(ulong *)(param_2 + 0x4a0);
              uStack_ac8 = *(ulong *)(param_2 + 0x4b8);
              uStack_ad0 = *(ulong *)(param_2 + 0x4b0);
              uStack_ab8 = *(ulong *)(param_2 + 0x4c8);
              uStack_ac0 = *(ulong *)(param_2 + 0x4c0);
              uStack_b28 = *(ulong *)(param_2 + 0x458);
              uStack_b30 = *(ulong *)(param_2 + 0x450);
              uStack_b18 = *(ulong *)(param_2 + 0x468);
              uStack_b20 = *(ulong *)(param_2 + 0x460);
              uStack_b08 = *(ulong *)(param_2 + 0x478);
              uStack_b10 = *(ulong *)(param_2 + 0x470);
              uStack_af8 = *(ulong *)(param_2 + 0x488);
              uStack_b00 = *(ulong *)(param_2 + 0x480);
              uStack_b48 = *(ulong *)(param_2 + 0x438);
              uStack_b50 = *(ulong *)(param_2 + 0x430);
              uStack_b38 = *(ulong *)(param_2 + 0x448);
              uStack_b40 = *(ulong *)(param_2 + 0x440);
              iVar7 = (int)&uStack_c30;
              func_0x000101567280();
              if (iVar7 == 1) {
                iVar7 = (int)&uStack_b50;
                func_0x000101567280();
                if (iVar7 != 1) {
LAB_101563dd4:
                  func_0x000107c610b4(&uStack_e00,&uStack_c30,0x1c0);
                  FUN_10156738c(&uStack_1a00,&uStack_1820,0x112db4348,&UNK_10d95e870);
                  FUN_10156738c(&uStack_1910,&uStack_1820,0x112db4348,&UNK_10d95e870);
                  uVar25 = 0x112db4350;
                  puVar11 = &UNK_10d95e878;
                  goto LAB_10156251c;
                }
                uStack_d58 = uStack_b88;
                uStack_d60 = uStack_b90;
                uStack_d48 = uStack_b78;
                uStack_d50 = uStack_b80;
                uStack_d38 = uStack_b68;
                uStack_d40 = uStack_b70;
                uStack_d28 = uStack_b58;
                uStack_d30 = uStack_b60;
                uStack_d98 = uStack_bc8;
                uStack_da0 = uStack_bd0;
                uStack_d88 = uStack_bb8;
                uStack_d90 = uStack_bc0;
                uStack_d78 = uStack_ba8;
                uStack_d80 = uStack_bb0;
                uStack_d68 = uStack_b98;
                uStack_d70 = uStack_ba0;
                uStack_dd8 = uStack_c08;
                uStack_de0 = uStack_c10;
                uStack_dc8 = uStack_bf8;
                uStack_dd0 = uStack_c00;
                uStack_db8 = uStack_be8;
                uStack_dc0 = uStack_bf0;
                uStack_da8 = uStack_bd8;
                uStack_db0 = uStack_be0;
                uStack_df8 = uStack_c28;
                uStack_e00 = uStack_c30;
                uStack_de8 = uStack_c18;
                uStack_df0 = uStack_c20;
                FUN_10156738c(&uStack_1a00,&uStack_1820,0x112db4348,&UNK_10d95e870);
                FUN_10156738c(&uStack_1910,&uStack_1820,0x112db4348,&UNK_10d95e870);
                FUN_101568ed8(&uStack_e00,0x112db4348,&UNK_10d95e870);
              }
              else {
                uStack_1a48 = uStack_b88;
                uStack_1a50 = uStack_b90;
                uStack_1a38 = uStack_b78;
                uStack_1a40 = uStack_b80;
                uStack_1a28 = uStack_b68;
                uStack_1a30 = uStack_b70;
                uStack_1a18 = uStack_b58;
                uStack_1a20 = uStack_b60;
                uStack_1a88 = uStack_bc8;
                uStack_1a90 = uStack_bd0;
                uStack_1a78 = uStack_bb8;
                uStack_1a80 = uStack_bc0;
                uStack_1a68 = uStack_ba8;
                uStack_1a70 = uStack_bb0;
                uStack_1a58 = uStack_b98;
                uStack_1a60 = uStack_ba0;
                uStack_1ac8 = uStack_c08;
                uStack_1ad0 = uStack_c10;
                uStack_1ab8 = uStack_bf8;
                uStack_1ac0 = uStack_c00;
                uStack_1aa8 = uStack_be8;
                uStack_1ab0 = uStack_bf0;
                uStack_1a98 = uStack_bd8;
                uStack_1aa0 = uStack_be0;
                uStack_1ae8 = uStack_c28;
                uStack_1af0 = uStack_c30;
                uStack_1ad8 = uStack_c18;
                uStack_1ae0 = uStack_c20;
                iVar7 = (int)&uStack_b50;
                func_0x000101567280();
                if (iVar7 == 1) goto LAB_101563dd4;
                uStack_1b38 = uStack_aa8;
                uStack_1b40 = uStack_ab0;
                uStack_1b28 = uStack_a98;
                uStack_1b30 = uStack_aa0;
                uStack_1b18 = uStack_a88;
                uStack_1b20 = uStack_a90;
                uStack_1b08 = uStack_a78;
                uStack_1b10 = uStack_a80;
                uStack_1b78 = uStack_ae8;
                uStack_1b80 = uStack_af0;
                uStack_1b68 = uStack_ad8;
                uStack_1b70 = uStack_ae0;
                uStack_1b58 = uStack_ac8;
                uStack_1b60 = uStack_ad0;
                uStack_1b48 = uStack_ab8;
                uStack_1b50 = uStack_ac0;
                uStack_1bb8 = uStack_b28;
                uStack_1bc0 = uStack_b30;
                uStack_1ba8 = uStack_b18;
                uStack_1bb0 = uStack_b20;
                uStack_1b98 = uStack_b08;
                uStack_1ba0 = uStack_b10;
                uStack_1b88 = uStack_af8;
                uStack_1b90 = uStack_b00;
                uStack_1bd8 = uStack_b48;
                uStack_1be0 = uStack_b50;
                uStack_1bc8 = uStack_b38;
                uStack_1bd0 = uStack_b40;
                uStack_d58 = uStack_aa8;
                uStack_d60 = uStack_ab0;
                uStack_d48 = uStack_a98;
                uStack_d50 = uStack_aa0;
                uStack_d38 = uStack_a88;
                uStack_d40 = uStack_a90;
                uStack_d28 = uStack_a78;
                uStack_d30 = uStack_a80;
                uStack_d98 = uStack_ae8;
                uStack_da0 = uStack_af0;
                uStack_d88 = uStack_ad8;
                uStack_d90 = uStack_ae0;
                uStack_d78 = uStack_ac8;
                uStack_d80 = uStack_ad0;
                uStack_d68 = uStack_ab8;
                uStack_d70 = uStack_ac0;
                uStack_dd8 = uStack_b28;
                uStack_de0 = uStack_b30;
                uStack_dc8 = uStack_b18;
                uStack_dd0 = uStack_b20;
                uStack_db8 = uStack_b08;
                uStack_dc0 = uStack_b10;
                uStack_da8 = uStack_af8;
                uStack_db0 = uStack_b00;
                uStack_df8 = uStack_b48;
                uStack_e00 = uStack_b50;
                uStack_de8 = uStack_b38;
                uStack_df0 = uStack_b40;
                uStack_1778 = uStack_1a48;
                uStack_1780 = uStack_1a50;
                uStack_1768 = uStack_1a38;
                uStack_1770 = uStack_1a40;
                uStack_1758 = uStack_1a28;
                uStack_1760 = uStack_1a30;
                uStack_1748 = uStack_1a18;
                uStack_1750 = uStack_1a20;
                uStack_17b8 = uStack_1a88;
                uStack_17c0 = uStack_1a90;
                uStack_17a8 = uStack_1a78;
                uStack_17b0 = uStack_1a80;
                uStack_1798 = uStack_1a68;
                uStack_17a0 = uStack_1a70;
                uStack_1788 = uStack_1a58;
                uStack_1790 = uStack_1a60;
                uStack_17f8 = uStack_1ac8;
                uStack_1800 = uStack_1ad0;
                uStack_17e8 = uStack_1ab8;
                uStack_17f0 = uStack_1ac0;
                uStack_17d8 = uStack_1aa8;
                uStack_17e0 = uStack_1ab0;
                uStack_17c8 = uStack_1a98;
                uStack_17d0 = uStack_1aa0;
                uStack_1818 = uStack_1ae8;
                uStack_1820 = uStack_1af0;
                uStack_1808 = uStack_1ad8;
                uStack_1810 = uStack_1ae0;
                FUN_10156738c(&uStack_1a00,&uStack_1cd0,0x112db4348,&UNK_10d95e870);
                FUN_10156738c(&uStack_1910,&uStack_1cd0,0x112db4348,&UNK_10d95e870);
                puVar8 = &uStack_1820;
                FUN_10166770c(puVar8,&uStack_e00);
                FUN_101568ed8(&uStack_1be0,0x112db4348,&UNK_10d95e870);
                FUN_101568ed8(&uStack_c30,0x112db4348,&UNK_10d95e870);
                if (((ulong)puVar8 & 1) == 0) goto LAB_101562524;
              }
              func_0x000107c61428(param_1 + 0x510,auStack_15d8,0,0);
              func_0x000107c61428(param_2 + 0x510,auStack_15f0,0,0);
              lVar20 = *(long *)(param_1 + 0x510);
              uVar31 = *(undefined8 *)(param_1 + 0x518);
              uVar30 = *(undefined8 *)(param_1 + 0x520);
              uVar28 = *(undefined8 *)(param_1 + 0x528);
              uVar14 = *(undefined8 *)(param_1 + 0x530);
              uVar25 = *(undefined8 *)(param_1 + 0x538);
              lVar27 = *(long *)(param_2 + 0x510);
              uVar24 = *(undefined8 *)(param_2 + 0x518);
              uVar32 = *(undefined8 *)(param_2 + 0x520);
              uVar26 = *(undefined8 *)(param_2 + 0x528);
              uVar17 = *(undefined8 *)(param_2 + 0x530);
              uVar16 = *(undefined8 *)(param_2 + 0x538);
              if (lVar20 != 0) {
                if (lVar27 == 0) goto LAB_1015640c4;
                lStack_7f0 = lVar20;
                uStack_7e8 = uVar31;
                uStack_7e0 = uVar30;
                uStack_7d8 = uVar28;
                uStack_7d0 = uVar14;
                uStack_7c8 = uVar25;
                lStack_7c0 = lVar27;
                uStack_7b8 = uVar24;
                uStack_7b0 = uVar32;
                uStack_7a8 = uVar26;
                uStack_7a0 = uVar17;
                uStack_798 = uVar16;
                FUN_1015672bc(lVar20,uVar31,uVar30,uVar28,uVar14,uVar25);
                FUN_1015672bc(lVar27,uVar24,uVar32,uVar26,uVar17,uVar16);
                plVar10 = &lStack_7f0;
                FUN_10163421c(plVar10,&lStack_7c0);
                func_0x000101567324(lVar27,uVar24,uVar32,uVar26,uVar17,uVar16);
                func_0x000101567324(lVar20,uVar31,uVar30,uVar28,uVar14,uVar25);
                if (((ulong)plVar10 & 1) != 0) goto LAB_10156419c;
                goto LAB_101562524;
              }
              if (lVar27 != 0) {
LAB_1015640c4:
                FUN_1015672bc(lVar20,uVar31,uVar30,uVar28,uVar14,uVar25);
                FUN_1015672bc(lVar27,uVar24,uVar32,uVar26,uVar17,uVar16);
                func_0x000101567324(lVar20,uVar31,uVar30,uVar28,uVar14,uVar25);
                func_0x000101567324(lVar27,uVar24,uVar32,uVar26,uVar17,uVar16);
                goto LAB_101562524;
              }
              FUN_1015672bc(0,uVar31,uVar30,uVar28,uVar14,uVar25);
              FUN_1015672bc(0,uVar24,uVar32,uVar26,uVar17,uVar16);
              func_0x000101567324(0,uVar31,uVar30,uVar28,uVar14,uVar25);
LAB_10156419c:
              puVar8 = (ulong *)(param_1 + 0x540);
              func_0x000107c61428(puVar8,auStack_1658,0,0);
              func_0x000107c61428((ulong *)(param_2 + 0x540),auStack_1670,0,0);
              uStack_1628 = *(ulong *)(param_1 + 0x558);
              uStack_1630 = *(ulong *)(param_1 + 0x550);
              uStack_1618 = *(ulong *)(param_1 + 0x568);
              uStack_1620 = *(ulong *)(param_1 + 0x560);
              uStack_1608 = *(ulong *)(param_1 + 0x578);
              uStack_1610 = *(ulong *)(param_1 + 0x570);
              uStack_15f8 = *(ulong *)(param_1 + 0x588);
              uStack_1600 = *(ulong *)(param_1 + 0x580);
              uStack_1638 = *(ulong *)(param_1 + 0x548);
              uStack_1640 = *(ulong *)(param_1 + 0x540);
              uStack_1cc8 = *(undefined8 *)(param_2 + 0x548);
              uStack_1cd0 = *(undefined8 *)(param_2 + 0x540);
              uStack_1cb8 = *(undefined8 *)(param_2 + 0x558);
              uStack_1cc0 = *(undefined8 *)(param_2 + 0x550);
              uStack_1ca8 = *(undefined8 *)(param_2 + 0x568);
              uStack_1cb0 = *(undefined8 *)(param_2 + 0x560);
              uStack_1c88 = *(undefined8 *)(param_2 + 0x588);
              uStack_1c90 = *(undefined8 *)(param_2 + 0x580);
              uStack_1c98 = *(undefined8 *)(param_2 + 0x578);
              uStack_1ca0 = *(undefined8 *)(param_2 + 0x570);
              uStack_bd8 = *(ulong *)(param_2 + 0x548);
              uStack_be0 = *(ulong *)(param_2 + 0x540);
              uStack_bc8 = *(ulong *)(param_2 + 0x558);
              uStack_bd0 = *(ulong *)(param_2 + 0x550);
              uStack_bb8 = *(ulong *)(param_2 + 0x568);
              uStack_bc0 = *(ulong *)(param_2 + 0x560);
              uStack_ba8 = *(ulong *)(param_2 + 0x578);
              uStack_bb0 = *(ulong *)(param_2 + 0x570);
              uStack_b98 = *(ulong *)(param_2 + 0x588);
              uStack_ba0 = *(ulong *)(param_2 + 0x580);
              uStack_c30 = uStack_1640;
              uStack_c28 = uStack_1638;
              uStack_c20 = uStack_1630;
              uStack_c18 = uStack_1628;
              uStack_c10 = uStack_1620;
              uStack_c08 = uStack_1618;
              uStack_c00 = uStack_1610;
              uStack_bf8 = uStack_1608;
              uStack_bf0 = uStack_1600;
              uStack_be8 = uStack_15f8;
              if (uStack_1640 == 0) {
                if (uStack_be0 == 0) {
                  uStack_1ac8 = *(undefined8 *)(param_1 + 0x568);
                  uStack_1ad0 = *(undefined8 *)(param_1 + 0x560);
                  uStack_1ab8 = *(undefined8 *)(param_1 + 0x578);
                  uStack_1ac0 = *(undefined8 *)(param_1 + 0x570);
                  uStack_1aa8 = *(undefined8 *)(param_1 + 0x588);
                  uStack_1ab0 = *(undefined8 *)(param_1 + 0x580);
                  uStack_1ae8 = *(undefined8 *)(param_1 + 0x548);
                  uStack_1af0 = *puVar8;
                  uStack_1ad8 = *(undefined8 *)(param_1 + 0x558);
                  uStack_1ae0 = *(undefined8 *)(param_1 + 0x550);
                  FUN_10156738c(&uStack_1640,&uStack_1be0,0x112db4358,&UNK_10d95e880);
                  FUN_10156738c(&uStack_1cd0,&uStack_1be0,0x112db4358,&UNK_10d95e880);
                  FUN_101568ed8(&uStack_1af0,0x112db4358,&UNK_10d95e880);
                  goto LAB_101564408;
                }
              }
              else if (uStack_be0 != 0) {
                uStack_1ac8 = *(undefined8 *)(param_2 + 0x568);
                uStack_1ad0 = *(undefined8 *)(param_2 + 0x560);
                uStack_1ab8 = *(undefined8 *)(param_2 + 0x578);
                uStack_1ac0 = *(undefined8 *)(param_2 + 0x570);
                uStack_1aa8 = *(undefined8 *)(param_2 + 0x588);
                uStack_1ab0 = *(undefined8 *)(param_2 + 0x580);
                uStack_1ae8 = *(undefined8 *)(param_2 + 0x548);
                uStack_1af0 = *(ulong *)(param_2 + 0x540);
                uStack_1ad8 = *(undefined8 *)(param_2 + 0x558);
                uStack_1ae0 = *(undefined8 *)(param_2 + 0x550);
                uStack_1bd8 = *(ulong *)(param_1 + 0x548);
                uStack_1be0 = *puVar8;
                uStack_1bc8 = *(ulong *)(param_1 + 0x558);
                uStack_1bd0 = *(ulong *)(param_1 + 0x550);
                uStack_1bb8 = *(ulong *)(param_1 + 0x568);
                uStack_1bc0 = *(ulong *)(param_1 + 0x560);
                uStack_1ba8 = *(ulong *)(param_1 + 0x578);
                uStack_1bb0 = *(ulong *)(param_1 + 0x570);
                uStack_1b98 = *(ulong *)(param_1 + 0x588);
                uStack_1ba0 = *(ulong *)(param_1 + 0x580);
                uStack_16e0 = uStack_1af0;
                uStack_16d8 = uStack_1ae8;
                uStack_16d0 = uStack_1ae0;
                uStack_16c8 = uStack_1ad8;
                uStack_16c0 = uStack_1ad0;
                uStack_16b8 = uStack_1ac8;
                uStack_16b0 = uStack_1ac0;
                uStack_16a8 = uStack_1ab8;
                uStack_16a0 = uStack_1ab0;
                uStack_1698 = uStack_1aa8;
                FUN_10156738c(&uStack_1640,auStack_1730,0x112db4358,&UNK_10d95e880);
                FUN_10156738c(&uStack_1cd0,auStack_1730,0x112db4358,&UNK_10d95e880);
                puVar8 = &uStack_1be0;
                FUN_1015673d4(puVar8,&uStack_1af0);
                FUN_101568ed8(&uStack_16e0,0x112db4358,&UNK_10d95e880);
                FUN_101568ed8(&uStack_c30,0x112db4358,&UNK_10d95e880);
                if (((ulong)puVar8 & 1) == 0) goto LAB_101562524;
LAB_101564408:
                func_0x000107c61428(param_1 + 0x590,&uStack_c30,0,0);
                lVar20 = *(long *)(param_1 + 0x590);
                uVar21 = param_2 + 0x590;
                func_0x000107c61428(uVar21,&uStack_16e0,0,0);
                if (*(char *)(param_2 + 0x598) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010156445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)((ulong)(byte)(&UNK_10d95e848)[*(long *)(param_2 + 0x590)] * 4 +
                            0x101564460))();
                  return uVar21;
                }
                if (lVar20 == *(long *)(param_2 + 0x590)) {
                  func_0x000107c61428(param_1 + 0x599,auStack_1730,0,0);
                  bVar5 = *(byte *)(param_1 + 0x599);
                  func_0x000107c61428(param_2 + 0x599,auStack_1688,0,0);
                  uVar12 = (bVar5 ^ *(byte *)(param_2 + 0x599)) ^ 1;
                  goto LAB_101562528;
                }
                goto LAB_101562524;
              }
              uStack_1af0 = uStack_1640;
              uStack_1ae8 = uStack_1638;
              uStack_1ae0 = uStack_1630;
              uStack_1ad8 = uStack_1628;
              uStack_1ad0 = uStack_1620;
              uStack_1ac8 = uStack_1618;
              uStack_1ac0 = uStack_1610;
              uStack_1ab8 = uStack_1608;
              uStack_1ab0 = uStack_1600;
              uStack_1aa8 = uStack_15f8;
              uStack_1aa0 = uStack_be0;
              uStack_1a98 = uStack_bd8;
              uStack_1a90 = uStack_bd0;
              uStack_1a88 = uStack_bc8;
              uStack_1a80 = uStack_bc0;
              uStack_1a78 = uStack_bb8;
              uStack_1a70 = uStack_bb0;
              uStack_1a68 = uStack_ba8;
              uStack_1a60 = uStack_ba0;
              uStack_1a58 = uStack_b98;
              FUN_10156738c(&uStack_1640,&uStack_1be0,0x112db4358,&UNK_10d95e880);
              FUN_10156738c(&uStack_1cd0,&uStack_1be0,0x112db4358,&UNK_10d95e880);
              uVar25 = 0x112db4360;
              puVar11 = &UNK_10d95e888;
              puVar8 = &uStack_1af0;
              goto LAB_101562520;
            }
LAB_101562b08:
            func_0x000107c610b4(&uStack_e00,&uStack_c30,0x1b0);
            FUN_10156738c(&uStack_1080,&uStack_1820,0x112db4338,&UNK_10d95e860);
            puVar8 = &uStack_fa0;
LAB_101562b44:
            FUN_10156738c(puVar8,&uStack_1820,0x112db4338,&UNK_10d95e860);
            uVar25 = 0x112db4340;
            puVar11 = &UNK_10d95e868;
            goto LAB_10156251c;
          }
          puVar8 = &uStack_1820;
          FUN_100cb5088();
          uStack_198 = puVar8[0x17];
          uStack_1a0 = puVar8[0x16];
          uStack_188 = puVar8[0x19];
          uStack_190 = puVar8[0x18];
          uStack_178 = puVar8[0x1b];
          uStack_180 = puVar8[0x1a];
          uStack_170 = puVar8[0x1c];
          uStack_1d8 = puVar8[0xf];
          uStack_1e0 = puVar8[0xe];
          uStack_1c8 = puVar8[0x11];
          uStack_1d0 = puVar8[0x10];
          uStack_1b8 = puVar8[0x13];
          uStack_1c0 = puVar8[0x12];
          uStack_1a8 = puVar8[0x15];
          uStack_1b0 = puVar8[0x14];
          uStack_218 = puVar8[7];
          uStack_220 = puVar8[6];
          uStack_208 = puVar8[9];
          uStack_210 = puVar8[8];
          uStack_1f8 = puVar8[0xb];
          uStack_200 = puVar8[10];
          uStack_1e8 = puVar8[0xd];
          uStack_1f0 = puVar8[0xc];
          uStack_248 = puVar8[1];
          uStack_250 = *puVar8;
          uStack_238 = puVar8[3];
          uStack_240 = puVar8[2];
          uStack_228 = puVar8[5];
          uStack_230 = puVar8[4];
          uStack_1b18 = uStack_1938;
          uStack_1b20 = uStack_1940;
          uStack_1b08 = uStack_1928;
          uStack_1b10 = uStack_1930;
          uStack_1b00 = uStack_1920;
          uStack_1b58 = uStack_1978;
          uStack_1b60 = uStack_1980;
          uStack_1b48 = uStack_1968;
          uStack_1b50 = uStack_1970;
          uStack_1b38 = uStack_1958;
          uStack_1b40 = uStack_1960;
          uStack_1b28 = uStack_1948;
          uStack_1b30 = uStack_1950;
          uStack_1b98 = uStack_19b8;
          uStack_1ba0 = uStack_19c0;
          uStack_1b88 = uStack_19a8;
          uStack_1b90 = uStack_19b0;
          uStack_1b78 = uStack_1998;
          uStack_1b80 = uStack_19a0;
          uStack_1b68 = uStack_1988;
          uStack_1b70 = uStack_1990;
          uStack_1bd8 = uStack_19f8;
          uStack_1be0 = uStack_1a00;
          uStack_1bc8 = uStack_19e8;
          uStack_1bd0 = uStack_19f0;
          uStack_1bb8 = uStack_19d8;
          uStack_1bc0 = uStack_19e0;
          uStack_1ba8 = uStack_19c8;
          uStack_1bb0 = uStack_19d0;
          iVar7 = (int)&uStack_1a00;
          func_0x000101567154();
          if (iVar7 == 1) {
            puVar8 = &uStack_1be0;
            FUN_100cb5088();
            uStack_a8 = puVar8[0x17];
            uStack_b0 = puVar8[0x16];
            uStack_98 = puVar8[0x19];
            uStack_a0 = puVar8[0x18];
            uStack_88 = puVar8[0x1b];
            uStack_90 = puVar8[0x1a];
            uStack_80 = puVar8[0x1c];
            uStack_e8 = puVar8[0xf];
            uStack_f0 = puVar8[0xe];
            uStack_d8 = puVar8[0x11];
            uStack_e0 = puVar8[0x10];
            uStack_c8 = puVar8[0x13];
            uStack_d0 = puVar8[0x12];
            uStack_b8 = puVar8[0x15];
            uStack_c0 = puVar8[0x14];
            uStack_128 = puVar8[7];
            uStack_130 = puVar8[6];
            uStack_118 = puVar8[9];
            uStack_120 = puVar8[8];
            uStack_108 = puVar8[0xb];
            uStack_110 = puVar8[10];
            uStack_f8 = puVar8[0xd];
            uStack_100 = puVar8[0xc];
            uStack_158 = puVar8[1];
            uStack_160 = *puVar8;
            uStack_148 = puVar8[3];
            uStack_150 = puVar8[2];
            uStack_138 = puVar8[5];
            uStack_140 = puVar8[4];
            FUN_10156738c(&uStack_a60,&uStack_1cd0,0x112db4330,&UNK_10d95e858);
            FUN_10156738c(&uStack_970,&uStack_1cd0,0x112db4330,&UNK_10d95e858);
            puVar8 = &uStack_250;
            FUN_101664cf4(puVar8,&uStack_160);
            FUN_101568ed8(&uStack_1af0,0x112db4330,&UNK_10d95e858);
            FUN_101568ed8(&uStack_c30,0x112db4330,&UNK_10d95e858);
            if (((ulong)puVar8 & 1) != 0) goto LAB_101562080;
            goto LAB_101562524;
          }
          FUN_10156738c(&uStack_a60,&uStack_160,0x112db4330,&UNK_10d95e858);
          puVar8 = &uStack_160;
LAB_1015629a0:
          FUN_10156738c(&uStack_970,puVar8,0x112db4330,&UNK_10d95e858);
          FUN_101568ed8(&uStack_1af0,0x112db4330,&UNK_10d95e858);
          uVar25 = 0x112db4330;
          puVar11 = &UNK_10d95e858;
          puVar8 = &uStack_c30;
        }
LAB_101562520:
        FUN_101568ed8(puVar8,uVar25,puVar11);
      }
    }
  }
LAB_101562524:
  uVar12 = 0;
LAB_101562528:
  return (ulong)(uVar12 & 1);
}



/* Entry: 101564520; end: 10156457f;  */

void FUN_101564520(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112db4368 != -1) {
    func_0x000107c61568(0x112db4368,FUN_10155edb8);
  }
  uVar1 = uRam0000000112db4370;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101564580; end: 1015645a3;  */

undefined1  [16] FUN_101564580(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb2db0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 1015645a4; end: 1015645d3;  */

undefined1  [16] FUN_1015645a4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015645d4; end: 101564607;  */

void FUN_1015645d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 101564608; end: 10156461b;  */

undefined8 FUN_101564608(void)

{
  return 0x101564618;
}



/* Entry: 10156461c; end: 101564653;  */

void FUN_10156461c(void)

{
  FUN_10155f1f8();
  return;
}



/* Entry: 101564654; end: 101564657;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101564654(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101564658; end: 10156468f;  */

uint FUN_101564658(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000101568b84();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101564690; end: 101564737;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101564690(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_101561c70(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar25 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar25 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,uVar16)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101564738; end: 1015647d7;  */

/* WARNING: Possible PIC construction at 0x000101564784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101564794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101564788) */
/* WARNING: Removing unreachable block (ram,0x000101564798) */

void FUN_101564738(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db4378 != -1) {
    func_0x000107c61568(0x112db4378,FUN_10155ed70);
  }
  uVar5 = uRam00000001137ff5f0;
  uVar4 = uRam00000001137ff5e8;
  uVar3 = uRam00000001137ff5e0;
  uVar2 = uRam00000001137ff5d8;
  uVar1 = uRam00000001137ff5d0;
  *param_1 = uRam00000001137ff5c8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015647d8; end: 101564813;  */

void FUN_1015647d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db4788;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db4788,&UNK_10d95ed40);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



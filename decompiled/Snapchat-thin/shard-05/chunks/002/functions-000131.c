/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b9ee44; end: 103b9ee47;  */

void FUN_103b9ee44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff27f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5dd98;
  func_0x000107c61520(&UNK_10dc5dd98,&UNK_1106de218);
  puRam0000000112ff27f8 = puVar1;
  return;
}



/* Entry: 103b9ee48; end: 103b9eeb3;  */

void FUN_103b9ee48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff27f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5dd98;
  func_0x000107c61520(&UNK_10dc5dd98,&UNK_1106de218);
  puRam0000000112ff27f8 = puVar1;
  return;
}



/* Entry: 103b9eeb4; end: 103b9ef37;  */

void FUN_103b9eeb4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103b9ef38; end: 103b9ef3b;  */

void FUN_103b9ef38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5de08;
  func_0x000107c61520(&UNK_10dc5de08,&UNK_1106de218);
  puRam0000000112ff2810 = puVar1;
  return;
}



/* Entry: 103b9ef3c; end: 103b9ef7b;  */

void FUN_103b9ef3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5de08;
  func_0x000107c61520(&UNK_10dc5de08,&UNK_1106de218);
  puRam0000000112ff2810 = puVar1;
  return;
}



/* Entry: 103b9ef7c; end: 103b9ef7f;  */

void FUN_103b9ef7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ddc0;
  func_0x000107c61520(&UNK_10dc5ddc0,&UNK_1106de218);
  puRam0000000112ff2818 = puVar1;
  return;
}



/* Entry: 103b9ef80; end: 103b9efbf;  */

void FUN_103b9ef80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ddc0;
  func_0x000107c61520(&UNK_10dc5ddc0,&UNK_1106de218);
  puRam0000000112ff2818 = puVar1;
  return;
}



/* Entry: 103b9efc0; end: 103b9f143;  */

int FUN_103b9efc0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b9f03c;
        goto LAB_103b9f020;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b9f020:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_103b9f03c:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b9f144; end: 103b9f18f;  */

void FUN_103b9f144(undefined8 param_1)

{
  func_0x0001000285a8(0x112ff2848,&UNK_10dc5dec0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103b9f1fc,param_1);
  return;
}



/* Entry: 103b9f190; end: 103b9f1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9f190(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103b9f5ac();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff2850) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b9f1fc; end: 103b9f203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9f1fc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103b9f5ac();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2850) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103b9f204; end: 103b9f24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9f204(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2850) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9f250; end: 103b9f38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b9f250(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112ff2788);
    func_0x00010008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      func_0x000100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_103b9f474(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_103b9f474(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0xd);
  return puVar5;
}



/* Entry: 103b9f390; end: 103b9f3ef; -[_TtC44SCOperaLayerViewControllerFactoryPluginScope51SCOperaLayerViewControllerFactoryPluginSaberService buildSaberPlugins] */

void FUN_103b9f390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b9f250();
  func_0x000107c61170(param_1);
  uVar2 = 0x112ff2880;
  func_0x0001000285a8(0x112ff2880,&UNK_10dc5df58);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b9f3f0; end: 103b9f44f; -[_TtC44SCOperaLayerViewControllerFactoryPluginScope51SCOperaLayerViewControllerFactoryPluginSaberService init] */

void FUN_103b9f3f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCOperaLayerViewControllerFactoryPluginScope.SCOperaLayerViewControllerFactoryPluginSaberService"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9f41c);
  (*pcVar1)();
}



/* Entry: 103b9f450; end: 103b9f473; -[_TtC44SCOperaLayerViewControllerFactoryPluginScope51SCOperaLayerViewControllerFactoryPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9f450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff2850));
  return;
}



/* Entry: 103b9f474; end: 103b9f59b;  */

ulong FUN_103b9f474(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9f59c);
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
  FUN_103b9f5cc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9f598);
      (*pcVar1)();
    }
    FUN_103b9f64c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103b9f59c; end: 103b9f5ab;  */

undefined1  [16] FUN_103b9f59c(void)

{
  return ZEXT816(0x1106de338);
}



/* Entry: 103b9f5ac; end: 103b9f5cb;  */

void FUN_103b9f5ac(void)

{
  func_0x000107c61168(&PTR_PTR_11293ae48);
  return;
}



/* Entry: 103b9f5cc; end: 103b9f64b;  */

undefined * FUN_103b9f5cc(undefined *param_1,undefined *param_2)

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
    func_0x000103b9f460();
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



/* Entry: 103b9f64c; end: 103b9f76f;  */

long FUN_103b9f64c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b9f76c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b9f770);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ff2880;
        func_0x0001000285a8(0x112ff2880,&UNK_10dc5df58);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ff2880;
      func_0x0001000285a8(0x112ff2880,&UNK_10dc5df58);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103b9f768);
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



/* Entry: 103b9f770; end: 103b9f81b;  */

void FUN_103b9f770(void)

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



/* Entry: 103b9f81c; end: 103b9f89b;  */

void FUN_103b9f81c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103b9f89c; end: 103b9f8e3;  */

uint FUN_103b9f89c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined8 uStack_4e;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined2)param_1[3];
  uStack_4e = *(undefined8 *)((long)param_1 + 0x22);
  uStack_56 = (undefined6)*(undefined8 *)((long)param_1 + 0x1a);
  uStack_50 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x1a) >> 0x30);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined2)param_2[3];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x22);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_2 + 0x1a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x1a) >> 0x30);
  FUN_103ba017c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b9f8e4; end: 103b9f8ef;  */

void FUN_103b9f8e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  lVar3 = -0x7ffffffef0e58bb0;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 5) {
    lVar3 = -0x109b91ba9b9e9094;
    uVar5 = 0x6e776f44746c6f62;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (bVar4 != 3) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  if (bVar4 < 5) {
    lVar3 = lVar1 + 0x30d;
    uVar5 = 0x69737365636f7270;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (bVar4 != 1) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  lVar2 = -0x108b8d9e8bac9191;
  uVar6 = 0x69746172656e6567;
  if (bVar4 != 0) {
    lVar2 = lVar1;
    uVar6 = 0x6f6c7055746c6f62;
  }
  if (bVar4 < 3) {
    lVar3 = lVar2;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b9f8f0; end: 103b9fb43;  */

void FUN_103b9f8f0(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  uVar6 = 0xef676e697373694d;
  uVar3 = 0x65736e6f70736572;
  if (param_1 != 4) {
    uVar6 = 0xe800000000000000;
    uVar3 = 0x64616f6c6e776f64;
  }
  uVar2 = 0xec00000074726f70;
  uVar4 = 0x736e617254637072;
  if (param_1 != 3) {
    uVar2 = uVar6;
    uVar4 = uVar3;
  }
  uVar6 = 0x800000010f1a7470;
  uVar3 = 0xd000000000000013;
  if (param_1 != 1) {
    uVar6 = 0xe600000000000000;
    uVar3 = 0x64616f6c7075;
  }
  uVar1 = 0xea00000000006564;
  uVar5 = 0x6f636e456765706a;
  if (param_1 != 0) {
    uVar1 = uVar6;
    uVar5 = uVar3;
  }
  if (param_1 < 3) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b9fb44; end: 103b9fb4b;  */

void FUN_103b9fb44(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  lVar3 = -0x7ffffffef0e58bb0;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 5) {
    lVar3 = -0x109b91ba9b9e9094;
    uVar5 = 0x6e776f44746c6f62;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (bVar4 != 3) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  if (bVar4 < 5) {
    lVar3 = lVar1 + 0x30d;
    uVar5 = 0x69737365636f7270;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (bVar4 != 1) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  lVar2 = -0x108b8d9e8bac9191;
  uVar6 = 0x69746172656e6567;
  if (bVar4 != 0) {
    lVar2 = lVar1;
    uVar6 = 0x6f6c7055746c6f62;
  }
  if (bVar4 < 3) {
    lVar3 = lVar2;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b9fb4c; end: 103b9fdeb;  */

void FUN_103b9fb4c(undefined8 param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  lVar3 = -0x7ffffffef0e58bb0;
  uVar4 = 0xd000000000000011;
  if (param_2 != 5) {
    lVar3 = -0x109b91ba9b9e9094;
    uVar4 = 0x6e776f44746c6f62;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (param_2 != 3) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  if (param_2 < 5) {
    lVar3 = lVar1 + 0x30d;
    uVar4 = 0x69737365636f7270;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (param_2 != 1) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  lVar2 = -0x108b8d9e8bac9191;
  uVar5 = 0x69746172656e6567;
  if (param_2 != 0) {
    lVar2 = lVar1;
    uVar5 = 0x6f6c7055746c6f62;
  }
  if (param_2 < 3) {
    lVar3 = lVar2;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_68,uVar4,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b9fdec; end: 103b9ff07;  */

void FUN_103b9fdec(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  lVar3 = -0x7ffffffef0e58bb0;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 5) {
    lVar3 = -0x109b91ba9b9e9094;
    uVar5 = 0x6e776f44746c6f62;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (bVar4 != 3) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  if (bVar4 < 5) {
    lVar3 = lVar1 + 0x30d;
    uVar5 = 0x69737365636f7270;
  }
  lVar1 = -0x108b8d9e8bac9b9f;
  if (bVar4 != 1) {
    lVar1 = -0x12ffff9b91ba9b9f;
  }
  lVar2 = -0x108b8d9e8bac9191;
  uVar6 = 0x69746172656e6567;
  if (bVar4 != 0) {
    lVar2 = lVar1;
    uVar6 = 0x6f6c7055746c6f62;
  }
  if (bVar4 < 3) {
    lVar3 = lVar2;
    uVar5 = uVar6;
  }
  *param_1 = uVar5;
  param_1[1] = lVar3;
  return;
}



/* Entry: 103b9ff08; end: 103b9ff47;  */

void FUN_103b9ff08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff28c0;
  func_0x0001000285a8(0x112ff28c0,&UNK_10dc5dfd0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b9ff48; end: 103b9ff7b;  */

bool FUN_103b9ff48(char *param_1,char *param_2)

{
  if (*param_1 == *param_2) {
    return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
  }
  return false;
}



/* Entry: 103b9ff7c; end: 103ba006f;  */

void FUN_103b9ff7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar7 = 0xef676e697373694d;
  uVar4 = 0x65736e6f70736572;
  if (bVar3 != 4) {
    uVar7 = 0xe800000000000000;
    uVar4 = 0x64616f6c6e776f64;
  }
  uVar2 = 0xec00000074726f70;
  uVar5 = 0x736e617254637072;
  if (bVar3 != 3) {
    uVar2 = uVar7;
    uVar5 = uVar4;
  }
  uVar7 = 0x800000010f1a7470;
  uVar4 = 0xd000000000000013;
  if (bVar3 != 1) {
    uVar7 = 0xe600000000000000;
    uVar4 = 0x64616f6c7075;
  }
  uVar1 = 0xea00000000006564;
  uVar6 = 0x6f636e456765706a;
  if (bVar3 != 0) {
    uVar1 = uVar7;
    uVar6 = uVar4;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(param_1,uVar5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103ba0070; end: 103ba0077;  */

void FUN_103ba0070(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar7 = 0xef676e697373694d;
  uVar4 = 0x65736e6f70736572;
  if (bVar3 != 4) {
    uVar7 = 0xe800000000000000;
    uVar4 = 0x64616f6c6e776f64;
  }
  uVar2 = 0xec00000074726f70;
  uVar5 = 0x736e617254637072;
  if (bVar3 != 3) {
    uVar2 = uVar7;
    uVar5 = uVar4;
  }
  uVar7 = 0x800000010f1a7470;
  uVar4 = 0xd000000000000013;
  if (bVar3 != 1) {
    uVar7 = 0xe600000000000000;
    uVar4 = 0x64616f6c7075;
  }
  uVar1 = 0xea00000000006564;
  uVar6 = 0x6f636e456765706a;
  if (bVar3 != 0) {
    uVar1 = uVar7;
    uVar6 = uVar4;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ba0078; end: 103ba00a3;  */

void FUN_103ba0078(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103ba02c0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103ba00a4; end: 103ba017b;  */

void FUN_103ba00a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar7 = 0xef676e697373694d;
  uVar4 = 0x65736e6f70736572;
  if (bVar3 != 4) {
    uVar7 = 0xe800000000000000;
    uVar4 = 0x64616f6c6e776f64;
  }
  uVar2 = 0xec00000074726f70;
  uVar5 = 0x736e617254637072;
  if (bVar3 != 3) {
    uVar2 = uVar7;
    uVar5 = uVar4;
  }
  uVar7 = 0x800000010f1a7470;
  uVar4 = 0xd000000000000013;
  if (bVar3 != 1) {
    uVar7 = 0xe600000000000000;
    uVar4 = 0x64616f6c7075;
  }
  uVar1 = 0xea00000000006564;
  uVar6 = 0x6f636e456765706a;
  if (bVar3 != 0) {
    uVar1 = uVar7;
    uVar6 = uVar4;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    uVar5 = uVar6;
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103ba017c; end: 103ba0323;  */

undefined8 FUN_103ba017c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_1[2];
    func_0x000103b9f82c(uVar1,param_2[2]);
    if ((uVar1 & 1) != 0) {
      uVar1 = param_2[4];
      if (param_1[4] == 0) {
        if (uVar1 != 0) {
          return 0;
        }
      }
      else {
        if (uVar1 == 0) {
          return 0;
        }
        uVar2 = param_1[3];
        if (((uVar2 != param_2[3]) || (param_1[4] != uVar1)) &&
           (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
          return 0;
        }
      }
      if ((char)param_1[5] == '\x06') {
        if ((char)param_2[5] != '\x06') {
          return 0;
        }
      }
      else if ((char)param_1[5] != (char)param_2[5]) {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x29) == '\x04') {
        if (*(char *)((long)param_2 + 0x29) == '\x04') {
          return 1;
        }
      }
      else if (*(char *)((long)param_1 + 0x29) == *(char *)((long)param_2 + 0x29)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103ba0324; end: 103ba0327;  */

void FUN_103ba0324(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff28c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e058;
  func_0x000107c61520(&UNK_10dc5e058,&UNK_1106de650);
  puRam0000000112ff28c8 = puVar1;
  return;
}



/* Entry: 103ba0328; end: 103ba0367;  */

void FUN_103ba0328(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff28c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e058;
  func_0x000107c61520(&UNK_10dc5e058,&UNK_1106de650);
  puRam0000000112ff28c8 = puVar1;
  return;
}



/* Entry: 103ba0368; end: 103ba036b;  */

void FUN_103ba0368(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff28d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e120;
  func_0x000107c61520(&UNK_10dc5e120,&UNK_1106de7f0);
  puRam0000000112ff28d0 = puVar1;
  return;
}



/* Entry: 103ba036c; end: 103ba03ab;  */

void FUN_103ba036c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff28d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e120;
  func_0x000107c61520(&UNK_10dc5e120,&UNK_1106de7f0);
  puRam0000000112ff28d0 = puVar1;
  return;
}



/* Entry: 103ba03ac; end: 103ba03af;  */

void FUN_103ba03ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff28d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ff28e0;
  func_0x00010002969c(0x112ff28e0,&UNK_10dc5e148);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ff28d8 = puVar2;
  return;
}



/* Entry: 103ba03b0; end: 103ba03ff;  */

void FUN_103ba03b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff28d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ff28e0;
  func_0x00010002969c(0x112ff28e0,&UNK_10dc5e148);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ff28d8 = puVar2;
  return;
}



/* Entry: 103ba0400; end: 103ba0403;  */

void FUN_103ba0400(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff28e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e228;
  func_0x000107c61520(&UNK_10dc5e228,&UNK_1106de880);
  puRam0000000112ff28e8 = puVar1;
  return;
}



/* Entry: 103ba0404; end: 103ba0443;  */

void FUN_103ba0404(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff28e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e228;
  func_0x000107c61520(&UNK_10dc5e228,&UNK_1106de880);
  puRam0000000112ff28e8 = puVar1;
  return;
}



/* Entry: 103ba0444; end: 103ba04a3;  */

/* WARNING: Possible PIC construction at 0x000103ba046c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ba047c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba0470) */
/* WARNING: Removing unreachable block (ram,0x000103ba0480) */
/* WARNING: Removing unreachable block (ram,0x000103ba0488) */

void FUN_103ba0444(void)

{
  undefined8 in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x5);
  return;
}



/* Entry: 103ba04a4; end: 103ba04bf;  */

/* WARNING: Possible PIC construction at 0x000103ba04f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba04f4) */

void FUN_103ba04a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  if (*(char *)((long)param_1 + 0x32) != '\x01') {
    func_0x000107c61170(*param_1,param_1[1],uVar1,param_1[3],param_1[4],param_1[5],
                        *(undefined2 *)(param_1 + 6));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103ba04c0; end: 103ba050f;  */

/* WARNING: Possible PIC construction at 0x000103ba04f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba04f4) */

void FUN_103ba04c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char in_w7;
  
  if (in_w7 != '\x01') {
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103ba0510; end: 103ba063f;  */

undefined8 * FUN_103ba0510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)((long)param_2 + 0x32);
  uVar8 = *(undefined2 *)(param_2 + 6);
  FUN_103ba0444(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined2 *)(param_1 + 6) = uVar8;
  *(undefined1 *)((long)param_1 + 0x32) = uVar7;
  return param_1;
}



/* Entry: 103ba0640; end: 103ba065b;  */

void FUN_103ba0640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined4 *)((long)param_1 + 0x2f) = *(undefined4 *)((long)param_2 + 0x2f);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 103ba065c; end: 103ba06bb;  */

undefined8 * FUN_103ba065c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined2 *)(param_2 + 6);
  uVar5 = *(undefined1 *)((long)param_2 + 0x32);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar10 = param_1[5];
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  uVar8 = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(param_1 + 6) = uVar7;
  uVar6 = *(undefined1 *)((long)param_1 + 0x32);
  *(undefined1 *)((long)param_1 + 0x32) = uVar5;
  FUN_103ba04c0(uVar9,uVar1,uVar3,uVar2,uVar4,uVar10,uVar8,uVar6);
  return param_1;
}



/* Entry: 103ba06bc; end: 103ba08d3;  */

int FUN_103ba06bc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x33) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)((long)param_1 + 0x32) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x32) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103ba08d4; end: 103ba0903;  */

/* WARNING: Possible PIC construction at 0x000103ba08e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba08ec) */

void FUN_103ba08d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103ba0904; end: 103ba09f3;  */

undefined8 * FUN_103ba0904(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 103ba09f4; end: 103ba0a4f;  */

undefined8 * FUN_103ba09f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  return param_1;
}



/* Entry: 103ba0a50; end: 103ba0e5b;  */

int FUN_103ba0a50(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x2a) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ba0e5c; end: 103ba0ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba0e5c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_30);
  func_0x00010034c93c();
  lVar2 = param_2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112ff2a80);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  plVar3 = &lStack_40;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 103ba0ec8; end: 103ba0ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba0ec8(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_30);
  func_0x00010034c93c();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2a80);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  puVar2 = auStack_40;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 103ba0ed0; end: 103ba0f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba0ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2a80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ba0f2c; end: 103ba0f9f; -[SCRemixStickerServices isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103ba0f2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2a80);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2a80))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 8);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 103ba0fa0; end: 103ba103b; -[SCRemixStickerServices onUpsellTapWithPresenting:page:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba0fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2a80);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2a80))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x48);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*pcVar3)(param_3,param_4,param_5,uVar2,lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 103ba103c; end: 103ba10a3; -[SCRemixStickerServices onCustomStickerUsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba103c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2a80);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2a80))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x50);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ba10a4; end: 103ba110b; -[SCRemixStickerServices onDrawerRemixCellShownAsUpsell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba10a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2a80);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2a80))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x58);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103ba110c; end: 103ba116b; -[SCRemixStickerServices init] */

void FUN_103ba110c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixStickerServices.RemixStickerServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ba1138);
  (*pcVar1)();
}



/* Entry: 103ba116c; end: 103ba119f; -[SCRemixStickerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba116c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ff2a80));
  return;
}



/* Entry: 103ba11a0; end: 103ba1277;  */

void FUN_103ba11a0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ba1278; end: 103ba1297;  */

void FUN_103ba1278(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103ba1298; end: 103ba12d7;  */

void FUN_103ba1298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e3c0;
  func_0x000107c61520(&UNK_10dc5e3c0,&UNK_1106de960);
  puRam0000000112ff2ab0 = puVar1;
  return;
}



/* Entry: 103ba12d8; end: 103ba12f3;  */

undefined1  [16] FUN_103ba12d8(void)

{
  return ZEXT816(0x1106de960);
}



/* Entry: 103ba12f4; end: 103ba134b;  */

uint FUN_103ba12f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103ba1404(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ba134c; end: 103ba13eb;  */

void FUN_103ba134c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103ba13ec; end: 103ba1403;  */

void FUN_103ba13ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103ba1404; end: 103ba14f7;  */

/* WARNING: Possible PIC construction at 0x000103ba1434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ba1478: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ba1438) */
/* WARNING: Removing unreachable block (ram,0x000103ba147c) */

long FUN_103ba1404(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == *param_2 && param_1[1] == param_2[1]) {
    uVar2 = param_1[2];
    if ((uVar2 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
    lVar1 = param_1[4];
    if ((lVar1 == param_2[4]) && (param_1[5] == param_2[5])) {
      lVar1 = param_2[7];
      if (param_1[7] == 0) {
        if (lVar1 != 0) {
          return 0;
        }
      }
      else if ((lVar1 == 0) ||
              (((uVar2 = param_1[6], uVar2 != param_2[6] || (param_1[7] != lVar1)) &&
               (func_0x000107c605b8(), (uVar2 & 1) == 0)))) {
        return 0;
      }
      lVar1 = param_1[8];
      if ((lVar1 == param_2[8]) && (param_1[9] == param_2[9])) {
        return 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )();
  return lVar1;
}



/* Entry: 103ba14f8; end: 103ba1507;  */

undefined * FUN_103ba14f8(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 103ba1508; end: 103ba1547;  */

void FUN_103ba1508(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5e560;
  func_0x000107c61520(&UNK_10dc5e560,&UNK_1106dead8);
  puRam0000000112ff2ab8 = puVar1;
  return;
}



/* Entry: 103ba1548; end: 103ba15b3;  */

long FUN_103ba1548(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103ba15b4; end: 103ba162f;  */

undefined8 * FUN_103ba15b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 103ba1630; end: 103ba16fb;  */

undefined8 * FUN_103ba1630(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103ba16fc; end: 103ba176f;  */

undefined8 * FUN_103ba16fc(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103ba1770; end: 103ba1907;  */

int FUN_103ba1770(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ba1908; end: 103ba1953;  */

undefined8 FUN_103ba1908(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_103ba1954(param_1,param_2);
  return unaff_x20;
}



/* Entry: 103ba1954; end: 103ba1a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba1954(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  lVar2 = _DAT_112ff2ac0;
  lVar3 = 0;
  func_0x000107c5f83c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2ac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_103ba1a40(param_1,unaff_x20 + 0x40);
  FUN_103ba1a40(param_2,unaff_x20 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar4);
  (**(code **)(lVar2 + 8))(uVar4,lVar2);
  func_0x0001000834e4(param_2);
  *(ulong *)(unaff_x20 + 0x10) = (ulong)(((uint)uVar4 & 0xff) != 2);
  *(undefined1 *)(unaff_x20 + 0x18) = 3;
  func_0x0001000834e4(param_1);
  return;
}



/* Entry: 103ba1a40; end: 103ba1b37;  */

long FUN_103ba1a40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103ba1b38; end: 103ba1bcf;  */

void FUN_103ba1b38(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
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
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar1 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  if (((uint)uVar2 & 0xff) != 2) {
    FUN_103ba3818(&uStack_140);
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    FUN_103ba1bd0(&uStack_c0);
  }
  return;
}



/* Entry: 103ba1bd0; end: 103ba294f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba1bd0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long alStack_120 [2];
  undefined1 auStack_110 [128];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112ff2ad0;
  func_0x0001000285a8(0x112ff2ad0,&UNK_10dc5e5f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_110 + -extraout_x8;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 1;
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  *(undefined1 *)(unaff_x20 + 0x18) = 3;
  func_0x000100f78e70(uVar2,uVar1);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_90,0,0);
  pcVar8 = *(code **)(unaff_x20 + 0x20);
  if (pcVar8 != (code *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    func_0x000100d67b18(pcVar8,uVar2);
    func_0x000100f75b4c(uVar9,uVar1);
    (*pcVar8)(uVar9,uVar1);
    func_0x000100f78e70(uVar9,uVar1);
    func_0x000100d67b28(pcVar8,uVar2);
  }
  func_0x000107c5f830(puVar7);
  lVar3 = 0;
  func_0x000107c5f83c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar7,0,1,lVar3);
  lVar3 = _DAT_112ff2ac0;
  func_0x000107c61428(unaff_x20 + _DAT_112ff2ac0,auStack_110,0x21,0);
  FUN_103ba3b44(puVar7,unaff_x20 + lVar3);
  func_0x000107c614a8(auStack_110);
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ff2ac8);
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  lVar3 = *(long *)(unaff_x20 + 0x88);
  func_0x0001000a8868(unaff_x20 + 0x68,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar2);
  puVar4 = param_1;
  (**(code **)(lVar3 + 0x20))(param_1,uVar2,lVar3);
  puVar5 = &UNK_1106dec08;
  func_0x000107c613fc(&UNK_1106dec08,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  FUN_103ba1a40(unaff_x20 + 0x40,auStack_110);
  puVar6 = &UNK_1106dec58;
  func_0x000107c613fc(&UNK_1106dec58,200,7);
  FUN_103ba3a44(auStack_110,puVar6 + 0x10);
  uVar2 = param_1[8];
  uVar10 = param_1[0xb];
  uVar9 = param_1[10];
  *(undefined8 *)(puVar6 + 0x80) = param_1[9];
  *(undefined8 *)(puVar6 + 0x78) = uVar2;
  *(undefined8 *)(puVar6 + 0x90) = uVar10;
  *(undefined8 *)(puVar6 + 0x88) = uVar9;
  uVar2 = param_1[0xc];
  uVar10 = param_1[0xf];
  uVar9 = param_1[0xe];
  *(undefined8 *)(puVar6 + 0xa0) = param_1[0xd];
  *(undefined8 *)(puVar6 + 0x98) = uVar2;
  *(undefined8 *)(puVar6 + 0xb0) = uVar10;
  *(undefined8 *)(puVar6 + 0xa8) = uVar9;
  uVar2 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar6 + 0x40) = param_1[1];
  *(undefined8 *)(puVar6 + 0x38) = uVar2;
  *(undefined8 *)(puVar6 + 0x50) = uVar10;
  *(undefined8 *)(puVar6 + 0x48) = uVar9;
  uVar2 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar6 + 0x60) = param_1[5];
  *(undefined8 *)(puVar6 + 0x58) = uVar2;
  *(undefined8 *)(puVar6 + 0x70) = uVar10;
  *(undefined8 *)(puVar6 + 0x68) = uVar9;
  *(undefined **)(puVar6 + 0xb8) = puVar5;
  *(undefined8 **)(puVar6 + 0xc0) = puVar4;
  FUN_103ba3c00(param_1,auStack_110,0x112ff2bd0,&UNK_10dc5e710);
  *(undefined **)((long)alStack_120 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
  uVar2 = 0x10;
  func_0x0001001ca524(0x10,3,0x2c,4,0,0,&UNK_10dc5e708,puVar6);
  func_0x000107c61574(puVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar2;
  func_0x000107c61574(uVar9);
  return;
}



/* Entry: 103ba2950; end: 103ba2a37;  */

void FUN_103ba2950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x100) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  lVar3 = 0x112ff2ad0;
  func_0x0001000285a8(0x112ff2ad0,&UNK_10dc5e5f0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
  lVar3 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x118) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x120) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x128) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x130) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x140) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x148) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ba2a38,uVar4,uVar5);
  return;
}



/* Entry: 103ba2a38; end: 103ba2ab7;  */

void FUN_103ba2a38(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x158) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ba2ab8;
                    /* WARNING: Could not recover jumptable at 0x000103ba2ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0xf0),uVar2,lVar3);
  return;
}



/* Entry: 103ba2ab8; end: 103ba2b13;  */

void FUN_103ba2ab8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x160) = param_1;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x158));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103ba2b14;
  }
  else {
    pcVar1 = FUN_103ba2db0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x148),*(undefined8 *)(lVar2 + 0x150));
  return;
}



/* Entry: 103ba2b14; end: 103ba2daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba2b14(void)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  lVar9 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x88,0,0);
  uVar5 = lVar9 + 0x10;
  func_0x000107c61648();
  if (uVar5 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x160));
  }
  else {
    uVar10 = uVar5;
    func_0x000107c5fd5c();
    lVar9 = _DAT_112ff2ac0;
    if ((uVar10 & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar2 = *(long *)(unaff_x22 + 0x120);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
      func_0x000107c61428(uVar5 + _DAT_112ff2ac0,unaff_x22 + 0xa0,0,0);
      FUN_103ba3c00(uVar5 + lVar9,uVar11,0x112ff2ad0,&UNK_10dc5e5f0);
      (**(code **)(lVar2 + 0x30))(uVar11,1,uVar7);
      if ((int)uVar11 == 1) {
        FUN_103ba3854(*(undefined8 *)(unaff_x22 + 0x110),0x112ff2ad0,&UNK_10dc5e5f0);
        uVar10 = 0;
      }
      else {
        lVar9 = *(long *)(unaff_x22 + 0x130);
        lVar2 = *(long *)(unaff_x22 + 0x138);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
        lVar3 = *(long *)(unaff_x22 + 0x120);
        lVar6 = lVar2;
        (**(code **)(lVar3 + 0x20))(lVar2,*(undefined8 *)(unaff_x22 + 0x110),uVar7);
        func_0x000107c5f830(lVar9);
        func_0x000107c5f82c();
        pcVar12 = *(code **)(lVar3 + 8);
        (*pcVar12)(lVar9,uVar7);
        func_0x000107c5f82c();
        (*pcVar12)(lVar2,uVar7);
        uVar10 = (ulong)(lVar6 - lVar9) / 1000000;
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
      puVar1 = (ulong *)(uVar5 + _DAT_112ff2ac8);
      *puVar1 = uVar10;
      *(undefined1 *)(puVar1 + 1) = 0;
      uVar7 = *(undefined8 *)(uVar5 + 0x80);
      lVar9 = *(long *)(uVar5 + 0x88);
      func_0x0001000a8868(uVar5 + 0x68,uVar7);
      (**(code **)(lVar9 + 0x10))(uVar10,uVar7,lVar9);
      FUN_103ba30b8(uVar13,uVar11);
      func_0x000107c61428(uVar5 + 0x10,unaff_x22 + 0xb8,1,0);
      uVar7 = *(undefined8 *)(uVar5 + 0x10);
      *(undefined8 *)(uVar5 + 0x10) = uVar11;
      uVar4 = *(undefined1 *)(uVar5 + 0x18);
      *(undefined1 *)(uVar5 + 0x18) = 0;
      func_0x000100f78e70(uVar7,uVar4);
      func_0x000107c61428(uVar5 + 0x20,unaff_x22 + 0xd0,0,0);
      pcVar12 = *(code **)(uVar5 + 0x20);
      if (pcVar12 != (code *)0x0) {
        uVar7 = *(undefined8 *)(uVar5 + 0x28);
        uVar11 = *(undefined8 *)(uVar5 + 0x10);
        uVar4 = *(undefined1 *)(uVar5 + 0x18);
        func_0x000100d67b18(pcVar12,uVar7);
        func_0x000100f75b4c(uVar11,uVar4);
        (*pcVar12)(uVar11,uVar4);
        func_0x000107c61574(uVar5);
        func_0x000100f78e70(uVar11,uVar4);
        func_0x000100d67b28(pcVar12,uVar7);
        goto LAB_103ba2d64;
      }
    }
    else {
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x160));
    }
    func_0x000107c61574(uVar5);
  }
LAB_103ba2d64:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000103ba2dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ba2db0; end: 103ba30b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ba2db0(void)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  lVar9 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x10,0,0);
  uVar3 = lVar9 + 0x10;
  func_0x000107c61648();
  if (uVar3 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x168));
  }
  else {
    uVar10 = uVar3;
    func_0x000107c5fd5c();
    lVar9 = _DAT_112ff2ac0;
    if ((uVar10 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar6 = *(long *)(unaff_x22 + 0x120);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
      func_0x000107c61428(uVar3 + _DAT_112ff2ac0,unaff_x22 + 0x28,0,0);
      FUN_103ba3c00(uVar3 + lVar9,uVar11,0x112ff2ad0,&UNK_10dc5e5f0);
      (**(code **)(lVar6 + 0x30))(uVar11,1,uVar4);
      if ((int)uVar11 == 1) {
        FUN_103ba3854(*(undefined8 *)(unaff_x22 + 0x108),0x112ff2ad0,&UNK_10dc5e5f0);
        uVar10 = 0;
      }
      else {
        lVar9 = *(long *)(unaff_x22 + 0x128);
        lVar6 = *(long *)(unaff_x22 + 0x130);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
        lVar1 = *(long *)(unaff_x22 + 0x120);
        lVar5 = lVar9;
        (**(code **)(lVar1 + 0x20))(lVar9,*(undefined8 *)(unaff_x22 + 0x108),uVar4);
        func_0x000107c5f830(lVar6);
        func_0x000107c5f82c();
        pcVar12 = *(code **)(lVar1 + 8);
        (*pcVar12)(lVar6,uVar4);
        func_0x000107c5f82c();
        (*pcVar12)(lVar9,uVar4);
        uVar10 = (ulong)(lVar5 - lVar6) / 1000000;
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar4 = *(undefined8 *)(uVar3 + 0x80);
      lVar9 = *(long *)(uVar3 + 0x88);
      func_0x0001000a8868(uVar3 + 0x68,uVar4);
      (**(code **)(lVar9 + 0x18))(uVar10,uVar4,lVar9);
      FUN_103ba30b8(uVar11,PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c61428(uVar3 + 0x30,unaff_x22 + 0x40,0,0);
      pcVar12 = *(code **)(uVar3 + 0x30);
      if (pcVar12 != (code *)0x0) {
        uVar4 = *(undefined8 *)(uVar3 + 0x38);
        func_0x000107c6157c(uVar4);
        (*pcVar12)(0);
        func_0x000100d67b28(pcVar12,uVar4);
      }
      uVar4 = *(undefined8 *)(uVar3 + 0x58);
      lVar9 = *(long *)(uVar3 + 0x60);
      func_0x0001000a8868(uVar3 + 0x40,uVar4);
      (**(code **)(lVar9 + 8))(uVar4,lVar9);
      uVar7 = 2;
      if (((uint)uVar4 & 0xff) == 2) {
        uVar7 = 3;
      }
      func_0x000107c61428(uVar3 + 0x10,unaff_x22 + 0x58,1,0);
      uVar4 = *(undefined8 *)(uVar3 + 0x10);
      *(undefined8 *)(uVar3 + 0x10) = 0;
      uVar2 = *(undefined1 *)(uVar3 + 0x18);
      *(undefined1 *)(uVar3 + 0x18) = uVar7;
      func_0x000100f78e70(uVar4,uVar2);
      func_0x000107c61428(uVar3 + 0x20,unaff_x22 + 0x70,0,0);
      pcVar12 = *(code **)(uVar3 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
      if (pcVar12 != (code *)0x0) {
        uVar11 = *(undefined8 *)(uVar3 + 0x28);
        uVar13 = *(undefined8 *)(uVar3 + 0x10);
        uVar7 = *(undefined1 *)(uVar3 + 0x18);
        func_0x000100d67b18(pcVar12,uVar11);
        func_0x000100f75b4c(uVar13,uVar7);
        (*pcVar12)(uVar13,uVar7);
        func_0x000107c614ac(uVar4);
        func_0x000107c61574(uVar3);
        func_0x000100f78e70(uVar13,uVar7);
        func_0x000100d67b28(pcVar12,uVar11);
        goto LAB_103ba306c;
      }
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
    }
    func_0x000107c614ac(uVar4);
    func_0x000107c61574(uVar3);
  }
LAB_103ba306c:
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000103ba30b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ba30b8; end: 103ba338b;  */

void FUN_103ba30b8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uStack_c0;
  undefined *apuStack_b0 [9];
  undefined *puStack_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    return;
  }
  lVar12 = *(long *)(param_2 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    apuStack_b0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000103ba4608(0,lVar12,0);
    puVar13 = (undefined1 *)(param_2 + 0x31);
    uVar10 = *(ulong *)(apuStack_b0[0] + 0x10);
    do {
      uVar2 = *puVar13;
      uVar9 = uVar10 + 1;
      if (*(ulong *)(apuStack_b0[0] + 0x18) >> 1 <= uVar10) {
        func_0x000103ba4608(1 < *(ulong *)(apuStack_b0[0] + 0x18),uVar9,1);
      }
      *(ulong *)(apuStack_b0[0] + 0x10) = uVar9;
      apuStack_b0[0][uVar10 + 0x20] = uVar2;
      lVar12 = lVar12 + -1;
      puVar11 = apuStack_b0[0];
      puVar13 = puVar13 + 0x18;
      uVar10 = uVar9;
    } while (lVar12 != 0);
  }
  puVar6 = puVar11;
  func_0x000103ba480c();
  func_0x000107c6142c(puVar11);
  puStack_68 = puVar4;
  func_0x000103ba45ec(0,lVar7,0);
  lVar12 = 0;
  uStack_c0 = 0x800000010ef1cd20;
  do {
    puVar4 = puStack_68;
    cVar3 = *(char *)(param_1 + 0x20 + lVar12);
    if (*(long *)(puVar6 + 0x10) == 0) {
LAB_103ba32d8:
      bVar5 = false;
    }
    else {
      func_0x000107c6068c(apuStack_b0,*(undefined8 *)(puVar6 + 0x28));
      uVar8 = 0x646574616d696e61;
      if (cVar3 != '\x01') {
        uVar8 = 0xd000000000000010;
      }
      uVar10 = 0xef74756f7475635f;
      if (cVar3 != '\x01') {
        uVar10 = uStack_c0;
      }
      uVar1 = 0x635f636974617473;
      if (cVar3 != '\0') {
        uVar1 = uVar8;
      }
      uVar9 = 0xed000074756f7475;
      if (cVar3 != '\0') {
        uVar9 = uVar10;
      }
      func_0x000107c5fb58(apuStack_b0,uVar1,uVar9);
      func_0x000107c6142c();
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar6 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) == 0)
      goto LAB_103ba32d8;
      do {
        bVar5 = *(char *)(*(long *)(puVar6 + 0x30) + uVar9) == cVar3;
        if (bVar5) break;
        uVar9 = uVar9 + 1 & ~uVar10;
      } while ((*(ulong *)(puVar6 + (uVar9 >> 6) * 8 + 0x38) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar10 = *(ulong *)(puVar4 + 0x10);
    puStack_68 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
      func_0x000103ba45ec(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
    }
    puVar4 = puStack_68;
    lVar12 = lVar12 + 1;
    *(ulong *)(puStack_68 + 0x10) = uVar10 + 1;
    puStack_68[uVar10 * 2 + 0x20] = cVar3;
    puStack_68[uVar10 * 2 + 0x21] = bVar5;
    if (lVar12 == lVar7) {
      func_0x000107c6142c(puVar6);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
      lVar7 = *(long *)(unaff_x20 + 0x88);
      func_0x0001000a8868(unaff_x20 + 0x68,uVar8);
      (**(code **)(lVar7 + 0x30))(puVar4,uVar8,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar4);
      return;
    }
  } while( true );
}



/* Entry: 103ba338c; end: 103ba340f;  */

void FUN_103ba338c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined2 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x122) = param_8;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_9;
  *(undefined2 *)(unaff_x22 + 0x120) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ba3410,uVar1,uVar2);
  return;
}



/* Entry: 103ba3410; end: 103ba349b;  */

void FUN_103ba3410(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar4 = *(ushort *)(unaff_x22 + 0x120);
  lVar5 = *(long *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar2);
  piVar7 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103ba349c;
                    /* WARNING: Could not recover jumptable at 0x000103ba3498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 200),uVar4 & 0xff01,uVar2
             ,lVar3);
  return;
}



/* Entry: 103ba349c; end: 103ba34fb;  */

void FUN_103ba349c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x108) = param_1;
  *(undefined8 *)(lVar2 + 0x110) = param_2;
  *(long *)(lVar2 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103ba34fc;
  }
  else {
    pcVar1 = FUN_103ba3690;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xf0),*(undefined8 *)(lVar2 + 0xf8));
  return;
}



/* Entry: 103ba34fc; end: 103ba368f;  */

void FUN_103ba34fc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar5 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x70,0,0);
  uVar3 = lVar5 + 0x10;
  func_0x000107c61648();
  if (uVar3 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5fd5c();
    uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
    if ((uVar4 & 1) == 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar10 = *(undefined8 *)(uVar3 + 0x80);
      lVar5 = *(long *)(uVar3 + 0x88);
      uVar1 = *(undefined1 *)(unaff_x22 + 0x121);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x122);
      func_0x0001000a8868(uVar3 + 0x68,uVar10);
      (**(code **)(lVar5 + 0x28))(uVar1,uVar6,uVar7,uVar9,uVar2,uVar10,lVar5);
      func_0x000107c6142c(uVar7);
      func_0x000107c61428(uVar3 + 0x10,unaff_x22 + 0x88,1,0);
      uVar7 = *(undefined8 *)(uVar3 + 0x10);
      *(undefined8 *)(uVar3 + 0x10) = 1;
      uVar1 = *(undefined1 *)(uVar3 + 0x18);
      *(undefined1 *)(uVar3 + 0x18) = 2;
      func_0x000100f78e70(uVar7,uVar1);
      func_0x000107c61428(uVar3 + 0x20,unaff_x22 + 0xa0,0,0);
      pcVar8 = *(code **)(uVar3 + 0x20);
      if (pcVar8 == (code *)0x0) {
        func_0x000107c61574(uVar3);
      }
      else {
        uVar7 = *(undefined8 *)(uVar3 + 0x28);
        uVar10 = *(undefined8 *)(uVar3 + 0x10);
        uVar1 = *(undefined1 *)(uVar3 + 0x18);
        func_0x000100d67b18(pcVar8,uVar7);
        func_0x000100f75b4c(uVar10,uVar1);
        (*pcVar8)(uVar10,uVar1);
        func_0x000107c61574(uVar3);
        func_0x000100f78e70(uVar10,uVar1);
        func_0x000100d67b28(pcVar8,uVar7);
      }
      goto LAB_103ba3670;
    }
    func_0x000107c61574(uVar3);
  }
  func_0x000107c6142c(uVar7);
LAB_103ba3670:
                    /* WARNING: Could not recover jumptable at 0x000103ba368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ba3690; end: 103ba3817;  */

void FUN_103ba3690(void)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  uVar2 = lVar5 + 0x10;
  func_0x000107c61648();
  if (uVar2 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
  }
  else {
    uVar3 = uVar2;
    func_0x000107c5fd5c();
    if ((uVar3 & 1) == 0) {
      func_0x000107c61428(uVar2 + 0x30,unaff_x22 + 0x28,0,0);
      pcVar6 = *(code **)(uVar2 + 0x30);
      if (pcVar6 != (code *)0x0) {
        uVar4 = *(undefined8 *)(uVar2 + 0x38);
        func_0x000107c6157c(uVar4);
        (*pcVar6)(1);
        func_0x000100d67b28(pcVar6,uVar4);
      }
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
      func_0x000107c61428(uVar2 + 0x10,unaff_x22 + 0x40,1,0);
      uVar7 = *(undefined8 *)(uVar2 + 0x10);
      *(undefined8 *)(uVar2 + 0x10) = uVar4;
      uVar1 = *(undefined1 *)(uVar2 + 0x18);
      *(undefined1 *)(uVar2 + 0x18) = 0;
      func_0x000107c61434(uVar4);
      func_0x000100f78e70(uVar7,uVar1);
      func_0x000107c61428(uVar2 + 0x20,unaff_x22 + 0x58,0,0);
      pcVar6 = *(code **)(uVar2 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
      if (pcVar6 != (code *)0x0) {
        uVar7 = *(undefined8 *)(uVar2 + 0x28);
        uVar8 = *(undefined8 *)(uVar2 + 0x10);
        uVar1 = *(undefined1 *)(uVar2 + 0x18);
        func_0x000100d67b18(pcVar6,uVar7);
        func_0x000100f75b4c(uVar8,uVar1);
        (*pcVar6)(uVar8,uVar1);
        func_0x000107c614ac(uVar4);
        func_0x000107c61574(uVar2);
        func_0x000100f78e70(uVar8,uVar1);
        func_0x000100d67b28(pcVar6,uVar7);
        goto LAB_103ba37fc;
      }
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
    }
    func_0x000107c614ac(uVar4);
    func_0x000107c61574(uVar2);
  }
LAB_103ba37fc:
                    /* WARNING: Could not recover jumptable at 0x000103ba3814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ba3818; end: 103ba3853;  */

void FUN_103ba3818(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  return;
}



/* Entry: 103ba3854; end: 103ba38cf;  */

undefined8 FUN_103ba3854(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103ba38d0; end: 103ba38d3;  */

void FUN_103ba38d0(void)

{
  return;
}



/* Entry: 103ba38d4; end: 103ba390f;  */

undefined8 FUN_103ba38d4(undefined8 param_1,undefined8 param_2)

{
  FUN_103ba53a8(param_2,param_1);
  return param_2;
}



/* Entry: 103ba3910; end: 103ba3917;  */

void FUN_103ba3910(void)

{
  if (lRam0000000112ff2b08 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7b4434);
  return;
}



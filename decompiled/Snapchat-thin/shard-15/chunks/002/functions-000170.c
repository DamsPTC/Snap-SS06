/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b97fa80; end: 10b97fbd7;  */

ulong FUN_10b97fa80(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_160 [8];
  byte bStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  uVar2 = param_1;
  FUN_10b97f700(param_1,uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uVar1 = param_2;
  _objc_retain();
  func_0x00010b97ffcc();
  if (uVar1 != 0) {
    lVar5 = 0;
    lVar6 = *plStack_120;
    do {
      uVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_128 + uVar7 * 8));
        uVar3 = param_1;
        FUN_10b97f718(param_1,uVar2,lVar5);
        lVar5 = lVar5 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
      func_0x00010b97ffcc();
      uVar1 = uVar3;
    } while (uVar3 != 0);
  }
  uVar4 = 0;
  func_0x00010b980010();
  func_0x00010b97ffa8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x00010b980010();
  func_0x00010b97ffa8();
  __Unwind_Resume(uVar4);
  pcStack_138 = FUN_10b97fbd8;
  uStack_150 = param_2;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10b9a1228(auStack_160);
  func_0x00010b97ff8c();
  return (ulong)(bStack_158 < 2);
}



/* Entry: 10b97fbd8; end: 10b97fc3b;  */

bool FUN_10b97fbd8(void)

{
  undefined1 auStack_30 [8];
  byte bStack_28;
  
  FUN_10b9a1228(auStack_30);
  func_0x00010b97ff8c();
  return bStack_28 < 2;
}



/* Entry: 10b97fc3c; end: 10b97fc9f;  */

void FUN_10b97fc3c(void)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  FUN_10b97f37c(auStack_38);
  FUN_10b9a9358(auStack_28,auStack_38);
  func_0x00010b97ffb8();
  FUN_10b98101c(auStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b98004c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b97fca0; end: 10b97fce3;  */

void FUN_10b97fca0(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b980008();
  FUN_10b980ac4(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97ff74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b97fce4; end: 10b97fceb;  */

long FUN_10b97fce4(long param_1)

{
  return (long)*(int *)(param_1 + 0x18);
}



/* Entry: 10b97fcec; end: 10b97fd57;  */

bool FUN_10b97fcec(void)

{
  undefined1 auStack_30 [8];
  byte bStack_28;
  
  FUN_10b97f3f0(auStack_30);
  func_0x00010b97ff8c();
  return (bStack_28 & 0xfe) == 2;
}



/* Entry: 10b97fd58; end: 10b97fd83;  */

undefined4 FUN_10b97fd58(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340daf8;
  (*(code *)PTR___tlv_bootstrap_11340daf8)();
  uVar1 = *(undefined4 *)ppuVar2;
  *(undefined4 *)ppuVar2 = 0;
  return uVar1;
}



/* Entry: 10b97fd84; end: 10b97fda3;  */

void FUN_10b97fd84(long param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  FUN_10b9a0dcc();
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
    return;
  }
  FUN_10b9a0084(auStack_28);
  FUN_10b981e8c(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b97f3e8);
  (*pcVar1)();
}



/* Entry: 10b97fda4; end: 10b97fe2f;  */

void FUN_10b97fda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  FUN_10b97f37c(&ppuStack_48);
  FUN_10b9a9964(&ppuStack_38,&ppuStack_48,param_3);
  func_0x00010b97ffb8();
  uStack_40 = uStack_30;
  ppuStack_48 = ppuStack_38;
  if (-1 < (char)bStack_21) {
    uStack_40 = (ulong)bStack_21;
    ppuStack_48 = &ppuStack_38;
  }
  FUN_10b9812a4(&ppuStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97ffc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b97fe30; end: 10b97fedf;  */

void FUN_10b97fe30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)*(int *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  for (uVar3 = 0; (uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) != uVar3; uVar3 = uVar3 + 1)
  {
    lVar2 = param_1;
    FUN_10b97fca0(param_1,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b97fee0; end: 10b97ff2b;  */

void FUN_10b97fee0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cbb0;
  FUN_10b9a0ad4(param_1,param_1 + 0xf);
  *param_1 = &PTR_FUN_110d7cbb0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0xf] = &PTR_FUN_110d7e6e0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



/* Entry: 10b97ff2c; end: 10b97ff2f;  */

undefined8 * FUN_10b97ff2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cbb0;
  FUN_10b9a01e4(param_1 + 0xf);
  *param_1 = &PTR_FUN_110d7e848;
  func_0x000107c27900(param_1 + 0xe);
  func_0x00010b8df154(param_1 + 2);
  return param_1;
}



/* Entry: 10b97ff30; end: 10b97ff43;  */

void FUN_10b97ff30(void)

{
  FUN_10b97ff44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97ff44; end: 10b97ff73;  */

undefined8 * FUN_10b97ff44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cbb0;
  FUN_10b9a01e4(param_1 + 0xf);
  *param_1 = &PTR_FUN_110d7e848;
  func_0x000107c27900(param_1 + 0xe);
  func_0x00010b8df154(param_1 + 2);
  return param_1;
}



/* Entry: 10b97ff74; end: 10b98006f;  */

void FUN_10b97ff74(void)

{
  undefined1 in_ZR;
  long *in_stack_00000000;
  
  func_0x00010b9abca8();
  if (((bool)in_ZR) && (in_stack_00000000 != (long *)0x0)) {
    (**(code **)(*in_stack_00000000 + 0x18))();
  }
  return;
}



/* Entry: 10b980070; end: 10b9800e3; -[SCValdiCppObject initWithRef:] */

undefined1 * FUN_10b980070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270c120;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c282f4((undefined1 *)((long)puVar1 + 8),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b9800e4; end: 10b98014b; +[SCValdiCppObject objectWithRef:] */

void FUN_10b9800e4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_28;
  
  puVar1 = PTR_PTR_1126d94c8;
  _objc_alloc();
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    func_0x00010b982828();
  }
  puVar2 = puVar1;
  func_0x00010c03d880(puVar1,param_2,&lStack_28);
  func_0x00010b982914();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010b9827dc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b98014c; end: 10b980177; -[SCValdiCppObject ref] */

void FUN_10b98014c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    func_0x00010b982828();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10b980178; end: 10b980187; -[SCValdiCppObject .cxx_destruct] */

void FUN_10b980178(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b98298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10b980188; end: 10b98018f; -[SCValdiCppObject .cxx_construct] */

void FUN_10b980188(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10b980190; end: 10b98025f;  */

void FUN_10b980190(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b9828f4();
  *unaff_x20 = &PTR_FUN_110d7cbe8;
  if (unaff_x19 == 0) {
LAB_10b980230:
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340e128;
    (*(code *)PTR___tlv_bootstrap_11340e128)();
    puVar2 = *ppuVar1;
    if (puVar2 == (undefined *)0x0) {
      if (param_3 == 0) {
LAB_10b980208:
        FUN_10b986bdc();
      }
      else {
LAB_10b9801f0:
        FUN_10b986d80();
      }
      if (ppuVar1 == (undefined **)0x0) goto LAB_10b980230;
    }
    else if (param_3 == 0) {
      ppuVar1 = *(undefined ***)(puVar2 + 0x58);
      if ((ppuVar1 == (undefined **)0x0) || (func_0x00010b982860(), ppuVar1 == (undefined **)0x0))
      goto LAB_10b980208;
    }
    else {
      ppuVar1 = *(undefined ***)(puVar2 + 0x60);
      if ((ppuVar1 == (undefined **)0x0) || (func_0x00010b982860(), ppuVar1 == (undefined **)0x0))
      goto LAB_10b9801f0;
    }
    do {
      func_0x00010b982960();
    } while (extraout_w10 != 0);
    unaff_x20[1] = ppuVar1;
    FUN_10b98694c();
    unaff_x20[2] = ppuVar1;
  }
  func_0x00010b9827fc();
  return;
}



/* Entry: 10b980260; end: 10b9802b3;  */

undefined8 * FUN_10b980260(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110d7cbe8;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_10b9869cc(lVar1,param_1[2]);
  }
  FUN_10b982030(param_1 + 1);
  return param_1;
}



/* Entry: 10b9802b4; end: 10b9802b7;  */

undefined8 * FUN_10b9802b4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110d7cbe8;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_10b9869cc(lVar1,param_1[2]);
  }
  FUN_10b982030(param_1 + 1);
  return param_1;
}



/* Entry: 10b9802b8; end: 10b9802cb;  */

void FUN_10b9802b8(void)

{
  FUN_10b980260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9802cc; end: 10b9802df;  */

byte FUN_10b9802cc(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x138);
  }
  return bVar1 & 1;
}



/* Entry: 10b9802e0; end: 10b980303;  */

void FUN_10b9802e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b986a48(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b980304; end: 10b98032b;  */

void FUN_10b980304(void)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b9828f4();
  *unaff_x20 = &PTR_FUN_110d7cc18;
  unaff_x20[1] = unaff_x19;
  return;
}



/* Entry: 10b98032c; end: 10b980377;  */

undefined8 * FUN_10b98032c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110d7cc18;
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain(uVar1);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b980378; end: 10b9803af;  */

undefined8 * FUN_10b980378(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110d7cc18;
  param_1[1] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10b9803b0; end: 10b9803b3;  */

undefined8 * FUN_10b9803b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110d7cc18;
  param_1[1] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10b9803b4; end: 10b9803c7;  */

void FUN_10b9803b4(void)

{
  FUN_10b980378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9803c8; end: 10b9803cf;  */

undefined8 FUN_10b9803c8(void)

{
  return 1;
}



/* Entry: 10b9803d0; end: 10b9803ef;  */

void FUN_10b9803d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010b9828b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b9803f0; end: 10b980417;  */

void FUN_10b9803f0(undefined8 *param_1)

{
  FUN_10b980304();
  *param_1 = &PTR_FUN_110d7cc48;
  param_1[2] = &PTR_DAT_110d7cc80;
  return;
}



/* Entry: 10b980418; end: 10b980423;  */

undefined8 * FUN_10b980418(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  *param_1 = &PTR_FUN_110d7cc18;
  param_1[1] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10b980424; end: 10b980437;  */

void FUN_10b980424(void)

{
  FUN_10b980378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b980438; end: 10b98043f;  */

void FUN_10b980438(long param_1)

{
  FUN_10b980378(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b980440; end: 10b980483;  */

void FUN_10b980440(undefined8 param_1,undefined8 param_2)

{
  FUN_10b9803d0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b980484(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b980484; end: 10b980a5f;  */

void FUN_10b980484(undefined8 *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined **ppuStack_160;
  ulong uStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long alStack_118 [2];
  ulong uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 == (undefined *)0x0) {
LAB_10b980524:
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    in_ZR = param_2 == puVar2;
    if ((bool)in_ZR) goto LAB_10b980524;
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    func_0x00010b982848();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class();
      func_0x00010b982848();
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class();
        func_0x00010b982848();
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class();
          func_0x00010b982848();
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_opt_class();
            func_0x00010b982848();
            if (((ulong)puVar2 & 1) == 0) {
              puVar2 = PTR_PTR_1126d9288;
              _objc_opt_class();
              func_0x00010b982848();
              if (((ulong)puVar2 & 1) == 0) {
                func_0x00010b98299c();
                if (((ulong)puVar2 & 1) == 0) {
                  func_0x00010b98299c();
                  if (((ulong)puVar2 & 1) == 0) {
                    func_0x00010b98299c();
                    if (((ulong)puVar2 & 1) == 0) {
                      FUN_10b981514(auStack_100,param_2);
                      func_0x00010b9a8f78(param_1,auStack_100);
                      func_0x000104bddf04(auStack_100[0]);
                    }
                    else {
                      *(undefined2 *)(param_1 + 1) = 0;
                      *param_1 = 0;
                      func_0x00010c296580(param_2);
                    }
                  }
                  else {
                    FUN_10b981454(param_1,param_2);
                  }
                }
                else {
                  func_0x00010b9828b0();
                  uStack_158 = CONCAT71(uStack_158._1_7_,1);
                  ppuStack_160 = &PTR_FUN_110d7e6e0;
                  plStack_150 = (long *)((ulong)plStack_150 & 0xffffffffffffff00);
                  uStack_148 = uStack_148 & 0xffffffffffffff00;
                  FUN_10b9a0ad4(auStack_100,&ppuStack_160);
                  func_0x00010c11c3e0(param_2);
                  if ((uStack_158 & 1) == 0) goto LAB_10b980910;
                  FUN_10b9a10dc(alStack_118,auStack_100,param_2);
                  FUN_10b9a0b2c(auStack_100);
                  FUN_10b9a01e4(&ppuStack_160);
                  func_0x000104bf351c(&lStack_80,alStack_118);
                  FUN_10b9a8d98(alStack_118);
                  in_ZR = lStack_80 == 1;
                  if ((bool)in_ZR) {
                    *param_1 = uStack_78;
                    *(undefined2 *)(param_1 + 1) = uStack_70;
                    uStack_78 = 0;
                    uStack_70 = 0;
                  }
                  else {
                    FUN_10b9a8e90(param_1,&uStack_78);
                  }
                  func_0x000104bda914(&lStack_80);
                  func_0x00010b9827fc();
                }
              }
              else {
                func_0x00010c296d80(param_2);
                FUN_10b9a8f04(param_1,param_2);
              }
            }
            else {
              FUN_10b98134c(param_1,param_2);
            }
          }
          else {
            func_0x00010b9828b0();
            puVar2 = param_2;
            func_0x00010bf529e0();
            func_0x00010b9abe10(alStack_118);
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_158 = 0;
            ppuStack_160 = (undefined **)0x0;
            uStack_148 = 0;
            plStack_150 = (long *)0x0;
            func_0x00010b9828b0();
            func_0x00010b9827b4();
            if (puVar2 != (undefined *)0x0) {
              lVar8 = 0;
              lVar10 = *plStack_150;
              do {
                puVar11 = (undefined *)0x0;
                puVar7 = (undefined *)(alStack_118[0] + 0x18 + lVar8 * 0x10);
                do {
                  if (*plStack_150 != lVar10) {
                    _objc_enumerationMutation(param_2);
                  }
                  FUN_10b980484(&lStack_80,*(undefined8 *)(uStack_158 + (long)puVar11 * 8));
                  lVar8 = lVar8 + 1;
                  puVar5 = puVar7;
                  FUN_10b9a9020(puVar7,&lStack_80);
                  func_0x00010b9829d0();
                  puVar11 = puVar11 + 1;
                  puVar7 = puVar7 + 0x10;
                  in_ZR = puVar11 == puVar2;
                } while (puVar11 < puVar2);
                func_0x00010b9827b4();
                puVar2 = puVar5;
              } while (puVar5 != (undefined *)0x0);
            }
            func_0x00010b9827fc();
            func_0x00010b9a8f84(param_1,alStack_118);
            func_0x000104bddf60(alStack_118[0]);
            func_0x00010b9827fc();
          }
        }
        else {
          func_0x00010b9828b0();
          func_0x000104bd4df4(alStack_118);
          lVar8 = alStack_118[0];
          puVar2 = param_2;
          func_0x00010bf529e0(param_2);
          uVar3 = lVar8 + 0x10;
          FUN_10b90d498(uVar3,puVar2);
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_158 = 0;
          ppuStack_160 = (undefined **)0x0;
          uStack_148 = 0;
          plStack_150 = (long *)0x0;
          func_0x00010b9828b0();
          func_0x00010b9827b4();
          if (uVar3 != 0) {
            lVar8 = *plStack_150;
            do {
              uVar9 = 0;
              do {
                if (*plStack_150 != lVar8) {
                  _objc_enumerationMutation(param_2);
                }
                uVar6 = *(undefined8 *)(uStack_158 + uVar9 * 8);
                func_0x00010c0dff20(param_2);
                _objc_retainAutoreleasedReturnValue();
                FUN_10b980484(&lStack_80);
                func_0x000107c30f2c(&uStack_108,uVar6);
                FUN_10b8b510c(alStack_118[0] + 0x10,&uStack_108);
                FUN_10b9a9020();
                uVar4 = uStack_108;
                func_0x000107c278f8();
                func_0x00010b9829d0();
                func_0x00010b9829c8();
                uVar9 = uVar9 + 1;
                in_ZR = uVar9 == uVar3;
              } while (uVar9 < uVar3);
              func_0x00010b9827b4();
              uVar3 = uVar4;
            } while (uVar4 != 0);
          }
          func_0x00010b9827fc();
          FUN_10b9a8f54(param_1,alStack_118);
          func_0x000104bd4e64(alStack_118[0]);
          func_0x00010b9827fc();
        }
      }
      else {
        func_0x00010bf885a0(param_2);
        *(undefined2 *)(param_1 + 1) = 6;
        *param_1 = CONCAT17(in_register_00005007,
                            CONCAT16(in_register_00005006,
                                     CONCAT15(in_register_00005005,
                                              CONCAT14(in_register_00005004,
                                                       CONCAT13(in_register_00005003,
                                                                CONCAT12(in_register_00005002,
                                                                         CONCAT11(
                                                  in_register_00005001,in_b0)))))));
      }
    }
    else {
      func_0x000107c30f2c(auStack_100,param_2);
      FUN_10b9a8e18(param_1,auStack_100);
      func_0x000107c278f8(auStack_100[0]);
    }
  }
  func_0x00010b9827fc();
  func_0x00010b9827c8(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b980910:
  FUN_10b9a0084(&uStack_108,&ppuStack_160);
  FUN_10b981e8c(&uStack_108);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b980928);
  (*pcVar1)();
}



/* Entry: 10b980a60; end: 10b980a67;  */

void FUN_10b980a60(undefined8 param_1,long param_2)

{
  param_2 = param_2 + -0x10;
  FUN_10b9803d0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b980484(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b980a68; end: 10b980ac3;  */

void FUN_10b980a68(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_PTR_1126d9288;
  _objc_alloc(PTR_PTR_1126d9288);
  FUN_10b9a8f04(auStack_30,param_1);
  func_0x00010c060400(puVar1);
  func_0x00010b982928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b980ac4; end: 10b98101b;  */

void FUN_10b980ac4(undefined8 *****param_1,undefined8 ****param_2)

{
  int iVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 *****unaff_x19;
  undefined8 *****unaff_x20;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ***pppuStack_70;
  byte bStack_61;
  undefined8 ****ppppuStack_60;
  undefined8 ***pppuStack_58;
  
  switch(*(undefined1 *)(param_1 + 1)) {
  case 0:
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    unaff_x19 = (undefined8 *****)PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    FUN_10b9a9358(&ppppuStack_78,param_1);
    unaff_x19 = &ppppuStack_78;
    FUN_10b98101c(unaff_x19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b98290c();
    break;
  case 3:
    pppppuVar6 = (undefined8 *****)*param_1;
    iVar1 = *(int *)(pppppuVar6 + 3);
    if (iVar1 == 2) {
      FUN_10b9a5b88();
      ppppuStack_78 = pppppuVar6;
      pppuStack_70 = param_2;
    }
    else {
      if (iVar1 == 1) {
        unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,pppppuVar6 + 4,
                            pppppuVar6[2]);
        _objc_retainAutoreleasedReturnValue();
        break;
      }
      unaff_x19 = param_1;
      if (iVar1 != 0) break;
      pppuStack_70 = pppppuVar6[2];
      ppppuStack_78 = pppppuVar6 + 4;
    }
    unaff_x19 = &ppppuStack_78;
    FUN_10b9812a4(unaff_x19);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x00010b982878();
    FUN_10b9a9518();
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 5:
    func_0x00010b982878();
    FUN_10b9a9588();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 6:
    func_0x00010b982878();
    FUN_10b9a92f0();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 7:
    func_0x00010b982878();
    FUN_10b9a9608();
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = unaff_x20;
    break;
  case 8:
    ppppuVar3 = *param_1;
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,ppppuVar3[4]);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar6 = (undefined8 *****)(ppppuVar3 + 2);
    func_0x00010527d444();
    pppuVar4 = ppppuVar3[2];
    pppuVar5 = ppppuVar3[5];
    ppppuStack_78 = pppppuVar6;
    pppuStack_70 = param_2;
    while (pppuVar2 = pppuStack_70,
          (undefined8 *****)ppppuStack_78 != (undefined8 *****)((long)pppuVar4 + (long)pppuVar5)) {
      FUN_10b980ac4(pppuStack_70 + 1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10b98101c(pppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c3a130();
      func_0x00010b9829bc();
      func_0x00010b982804();
      func_0x00010b982858();
      func_0x00010527d4cc(&ppppuStack_78);
    }
    break;
  case 9:
    ppppuVar7 = *param_1;
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,ppppuVar7[2]);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = ppppuVar7 + 3;
    for (lVar8 = (long)ppppuVar7[2] << 4; lVar8 != 0; lVar8 = lVar8 + -0x10) {
      FUN_10b980ac4(ppppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(unaff_x19);
      func_0x00010b982858();
      ppppuVar3 = ppppuVar3 + 2;
    }
    break;
  case 10:
    if (*param_1 == (undefined8 ****)0x0) {
      unaff_x19 = (undefined8 *****)0x0;
    }
    else {
      unaff_x19 = (undefined8 *****)(*param_1 + 3);
      FUN_10b981730(unaff_x19);
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 0xb:
    FUN_10b9811b4(param_1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x19 = param_1;
    break;
  case 0xc:
    FUN_10b9a9488(&uStack_80,param_1);
    FUN_10b99f8ac(&ppppuStack_78,&uStack_80);
    pppuStack_58 = pppuStack_70;
    ppppuStack_60 = ppppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuStack_58 = (undefined8 ****)(ulong)bStack_61;
      ppppuStack_60 = &ppppuStack_78;
    }
    pppppuVar6 = &ppppuStack_60;
    FUN_10b9812a4(pppppuVar6);
    _objc_retainAutoreleasedReturnValue();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_78);
    func_0x000104bda960(uStack_80);
    unaff_x19 = (undefined8 *****)PTR_PTR_1126da880;
    _objc_alloc(PTR_PTR_1126da880);
    func_0x00010c03d180();
    goto code_r0x00010b980eec;
  case 0xd:
    ppppuVar3 = *param_1;
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,ppppuVar3[2][4]);
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = ppppuVar3[2];
    ppppuStack_60 = (undefined8 ****)(pppuVar4 + 5);
    pppuStack_58 = ppppuVar3 + 3;
    pppppuVar6 = (undefined8 *****)(pppuVar4 + 8);
    ppppuVar3 = ppppuVar3 + 5;
    for (lVar8 = (long)pppuVar4[4] << 4; lVar8 != 0; lVar8 = lVar8 + -0x10) {
      func_0x00010b9aca4c(&ppppuStack_78,&ppppuStack_60);
      FUN_10b980ac4(&pppuStack_70);
      _objc_retainAutoreleasedReturnValue();
      FUN_10b98101c(&ppppuStack_78);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c3a130();
      func_0x00010b9829bc();
      func_0x00010b982804();
      func_0x00010b982858();
      FUN_10b902568(&ppppuStack_78);
      ppppuStack_60 = pppppuVar6;
      pppuStack_58 = ppppuVar3;
      pppppuVar6 = pppppuVar6 + 3;
      ppppuVar3 = ppppuVar3 + 2;
    }
    break;
  case 0xe:
    ppppuVar3 = *param_1;
    ___dynamic_cast(ppppuVar3,&PTR_DAT_110d7f038,&PTR_DAT_110d7ccf8,0);
    if (ppppuVar3 != (undefined8 ****)0x0) {
      pppppuVar6 = (undefined8 *****)(ppppuVar3 + 5);
      FUN_10b9802e0();
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar6 != (undefined8 *****)0x0) {
        _objc_retain();
        unaff_x19 = pppppuVar6;
        goto code_r0x00010b980eec;
      }
    }
    unaff_x19 = (undefined8 *****)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar6 = (undefined8 *****)0x0;
code_r0x00010b980eec:
    _objc_release(pppppuVar6);
    break;
  case 0xf:
    FUN_10b9a94ec(&ppppuStack_78,param_1);
    pppppuVar6 = &ppppuStack_78;
    FUN_10b981064(pppppuVar6,0);
    _objc_retainAutoreleasedReturnValue();
    if (pppppuVar6 == (undefined8 *****)0x0) {
      FUN_10b980a68(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(pppppuVar6);
      param_1 = pppppuVar6;
    }
    func_0x00010b982804();
    func_0x00010b982904();
    unaff_x19 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b98101c; end: 10b981063;  */

void FUN_10b98101c(long *param_1)

{
  long lVar1;
  undefined *puStack_20;
  ulong uStack_18;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    puStack_20 = &UNK_10f7d0ef0;
    uStack_18 = 0;
  }
  else {
    puStack_20 = (undefined *)(lVar1 + 0x18);
    uStack_18 = (ulong)*(uint *)(lVar1 + 0xc);
  }
  FUN_10b9812a4(&puStack_20);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b981064; end: 10b9811b3;  */

void FUN_10b981064(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar4 = (long *)*param_1;
  if ((plVar4 == (long *)0x0) ||
     (___dynamic_cast(plVar4,&PTR_DAT_110d7ebe8,&PTR_DAT_110d7cc98,0xfffffffffffffffe),
     plVar4 == (long *)0x0)) {
    FUN_10b8a226c(&lStack_28,param_1);
    plVar4 = (long *)PTR_PTR_1126d94c8;
    if (lStack_28 == 0) {
      if ((param_2 == 0) || (lVar5 = *param_1, lVar5 == 0)) {
        plVar4 = (long *)0x0;
      }
      else {
        if (*(long *)(lVar5 + 0x10) != 0) {
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010c0e02e0(plVar4);
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          func_0x00010b9827dc();
        }
      }
    }
    else {
      func_0x0001080d5868(&lStack_48);
      lStack_38 = 0;
      if (lStack_48 != 0) {
        lStack_38 = lStack_48 + 0x18;
      }
      uStack_30 = uStack_40;
      lStack_48 = 0;
      uStack_40 = 0;
      FUN_10b96e46c(&lStack_38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b9829a4();
      func_0x0001080d5914(&lStack_48);
      plVar4 = param_1;
    }
    func_0x0001080d5938(lStack_28);
  }
  else {
    FUN_10b9803d0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 10b9811b4; end: 10b98120f;  */

void FUN_10b9811b4(void)

{
  undefined8 unaff_x19;
  long lStack_28;
  
  func_0x00010b9a9710(&lStack_28);
  if (lStack_28 == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_10b981210(&lStack_28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b982914();
  }
  func_0x000104bda3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b981210; end: 10b9812a3;  */

void FUN_10b981210(long *param_1)

{
  long lVar1;
  int extraout_w10;
  
  lVar1 = *param_1;
  if ((lVar1 == 0) || (___dynamic_cast(lVar1,&PTR_DAT_110d7ed28,&PTR_DAT_110d7d718,0), lVar1 == 0))
  {
    _objc_alloc(PTR_PTR_1126e1bd0);
    func_0x00010bffa380();
  }
  else {
    do {
      func_0x00010b982960();
    } while (extraout_w10 != 0);
    FUN_10b9802e0(lVar1 + 0x10);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000107c3a130();
  func_0x00010b982078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9812a4; end: 10b9812d3;  */

void FUN_10b9812a4(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bffa180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9812d4; end: 10b9812e7;  */

void FUN_10b9812d4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stringWithCharacters_length__112675070,
             *param_1,param_1[1]);
  return;
}



/* Entry: 10b9812e8; end: 10b98134b;  */

void FUN_10b9812e8(void)

{
  func_0x00010b9828b8();
  func_0x00010c08fa60();
  func_0x00010b9a5c98();
  func_0x00010bfc38e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b98134c; end: 10b9813b7;  */

void FUN_10b98134c(undefined8 param_1)

{
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_10b9813b8(alStack_38);
  func_0x0001052c4b44(&uStack_40,&UNK_10e5fc498,alStack_38);
  func_0x00010b9a8f90(param_1,&uStack_40);
  func_0x000104bdb3b0(uStack_40);
  if (alStack_38[0] != 0) {
    func_0x00010b9827dc();
  }
  return;
}



/* Entry: 10b9813b8; end: 10b981453;  */

void FUN_10b9813b8(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_38;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10b981514(&lStack_38);
    if ((lStack_38 != 0) && (*(long *)(lStack_38 + 0x10) != 0)) {
      do {
        func_0x00010b982888();
      } while (extraout_w10 != 0);
    }
    lVar1 = param_2;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c08fa60();
    *param_1 = lStack_38;
    param_1[1] = lVar1;
    param_1[2] = param_2;
    func_0x00010b982904();
  }
  return;
}



/* Entry: 10b981454; end: 10b981513;  */

void FUN_10b981454(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  
  func_0x00010b9828b8();
  puVar1 = PTR_PTR_1126e1bd0;
  _objc_opt_class();
  func_0x00010b982848();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = 0x28;
    __Znwm();
    FUN_10b988f6c();
    do {
      func_0x00010b982960();
    } while (extraout_w10 != 0);
    FUN_10b9a8ef8();
    func_0x000104bda3ac(uVar2);
    func_0x00010b982078(uVar2);
  }
  else {
    func_0x00010bfc5fc0();
    FUN_10b9a8ef8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b981514; end: 10b98172f;  */

void FUN_10b981514(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  func_0x00010b9828b8();
  puVar3 = PTR_PTR_1126e1b70;
  _objc_opt_class();
  func_0x00010b982848();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR_PTR_1126d94c8;
    _objc_opt_class();
    func_0x00010b982848();
    if (((ulong)puVar3 & 1) != 0) {
      if (unaff_x19 == 0) {
        puStack_50 = (undefined8 *)0x0;
      }
      else {
        func_0x00010c124da0(&puStack_50);
      }
      func_0x00010b8c3b70(&puStack_50);
      if (puStack_50 != (undefined8 *)0x0) {
        func_0x00010b9827dc();
      }
      goto LAB_10b9816ec;
    }
  }
  else {
    FUN_10b96e41c(&puStack_60);
    if ((puStack_60 == (undefined8 *)0x0) ||
       (___dynamic_cast(puStack_60,&PTR_DAT_110d7cfa8,&PTR_DAT_110d7da08,0x18),
       puStack_60 == (undefined8 *)0x0)) {
      puStack_50 = (undefined8 *)0x0;
      puStack_48 = (undefined8 *)0x0;
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puStack_48 = puStack_58;
      puVar4 = puStack_60;
      puStack_50 = puStack_60;
      if (puStack_58 != (undefined8 *)0x0) {
        do {
          func_0x00010b982888();
        } while (extraout_w10 != 0);
      }
    }
    func_0x0001080d58f0(&puStack_60);
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4[2] != 0) {
        do {
          func_0x00010b982888();
        } while (extraout_w10_00 != 0);
      }
      *unaff_x20 = puVar4;
      func_0x0001080d5914(&puStack_50);
      goto LAB_10b9816ec;
    }
    func_0x0001080d5914(&puStack_50);
  }
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d7cd40;
  puVar5 = puVar4 + 3;
  *puVar5 = &PTR_DAT_110d7ec10;
  puVar4[4] = 0;
  puVar4[5] = 0;
  FUN_10b9803f0(puVar4 + 6);
  *puVar5 = &PTR_DAT_110d7cd90;
  puVar4[6] = &PTR_FUN_110d7cdd0;
  puVar4[8] = &PTR_DAT_110d7ce08;
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_50 = puVar5;
    puStack_48 = puVar4;
    func_0x000107c278e4(puVar4 + 4,&puStack_50);
    func_0x000107c284e8(&puStack_50);
    if (puVar4[5] != 0) goto LAB_10b9816b8;
  }
  else {
LAB_10b9816b8:
    do {
      func_0x00010b982888();
    } while (extraout_w10_01 != 0);
  }
  *unaff_x20 = puVar5;
  func_0x00010b9821b0(puVar5);
LAB_10b9816ec:
  func_0x00010b9827fc();
  return;
}



/* Entry: 10b981730; end: 10b98185b;  */

void FUN_10b981730(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 != (undefined *)0x0) {
    ___dynamic_cast(puVar3,&PTR_DAT_1107e3600,&PTR_DAT_110d7cc98,0xfffffffffffffffe);
    if (puVar3 != (undefined *)0x0) {
      FUN_10b9803d0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      puVar2 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar1);
      puVar1 = puVar3;
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = (undefined *)0x0;
      }
      _objc_retain(puVar1);
      func_0x00010b982804();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        if (puVar1 == (undefined *)param_1[1]) {
          puVar1 = puVar3;
          func_0x00010c08fa60();
          if (puVar1 == (undefined *)param_1[2]) goto LAB_10b981834;
        }
      }
      func_0x00010b982858();
      if (*param_1 == 0) goto LAB_10b9817ec;
    }
    func_0x00010b982828();
  }
LAB_10b9817ec:
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bffa1a0();
LAB_10b981834:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b98185c; end: 10b98186b;  */

void FUN_10b98185c(long param_1)

{
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b98298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10b98186c; end: 10b9818f3;  */

void FUN_10b98186c(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int extraout_w10;
  long lStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  _objc_retain();
  uStack_39 = param_4;
  uStack_38 = param_2;
  FUN_10b9818f4(&lStack_48,param_3,&uStack_38,&uStack_39);
  if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
    do {
      func_0x00010b982888();
    } while (extraout_w10 != 0);
  }
  *param_1 = lStack_48;
  func_0x00010b982494();
  _objc_release(uStack_38);
  return;
}



/* Entry: 10b9818f4; end: 10b981937;  */

void FUN_10b9818f4(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar4;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long alStack_180 [2];
  long lStack_170;
  code *pcStack_168;
  undefined1 auStack_160 [40];
  undefined8 uStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_38 [2];
  undefined8 uStack_28;
  
  func_0x00010b9827e8();
  uStack_28 = extraout_x8;
  FUN_10b9821bc(alStack_38);
  *unaff_x19 = alStack_38[0];
  func_0x00010b9827c8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_10b981938;
  plVar1 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010b9827e8();
  uStack_78 = extraout_x8_00;
  _objc_retain();
  plStack_c8 = param_1;
  if (param_1 == (long *)0x0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    lVar4 = 0;
  }
  else {
    FUN_10b9824a0(&uStack_d8,&plStack_c8);
    uStack_f8 = uStack_d8;
    lStack_f0 = lStack_d0;
    if (lStack_d0 != 0) {
      do {
        func_0x00010b982888();
      } while (extraout_w10 != 0);
    }
    func_0x00010b982630(auStack_c0,1);
    lVar4 = lStack_b0;
    func_0x00010b982940();
    unaff_x22 = &uStack_a8;
    uStack_a8 = 0x10b9826a8;
    ppuStack_a0 = &PTR_DAT_110d7cf68;
    uStack_98 = uStack_d8;
    lStack_90 = lStack_f0;
    uStack_f8 = 0;
    lStack_f0 = 0;
    FUN_10b9a063c(lVar4 + 0x18,&uStack_a8);
    func_0x00010b9828d4();
    lVar4 = lStack_b0;
    lStack_b0 = 0;
    unaff_x21 = lVar4 + 0x18;
    func_0x00010b982720(auStack_c0);
    *unaff_x19 = unaff_x21;
    unaff_x19[1] = lVar4;
    uStack_e8 = 0;
    uStack_e0 = 0;
    FUN_10b982730(&uStack_e8);
    func_0x00010b982608(&uStack_f8);
    func_0x00010b982608(&uStack_d8);
    plVar1 = plStack_c8;
    _objc_release();
  }
  func_0x00010b9827c8(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b9828d4();
    __ZNSt3__119__shared_weak_countD2Ev(lVar4);
    func_0x00010b982720(auStack_c0);
    func_0x00010b982608(&uStack_f8);
    func_0x00010b982608(&uStack_d8);
    _objc_release(plStack_c8);
    func_0x00010b982814();
    pcStack_108 = FUN_10b981a84;
    puStack_130 = unaff_x22;
    lStack_128 = unaff_x21;
    lStack_120 = lVar4;
    plStack_118 = plVar1;
    ppuStack_110 = &puStack_50;
    func_0x00010b9827e8();
    uStack_138 = extraout_x8_01;
    FUN_10b9a8f04(auStack_1a0);
    func_0x00010b982630(alStack_180,1);
    lVar4 = lStack_170;
    func_0x00010b982940();
    pcStack_168 = FUN_10b982758;
    FUN_10b982764(auStack_160,auStack_1a0);
    FUN_10b9a063c(lVar4 + 0x18,&pcStack_168);
    func_0x00010b982930();
    lVar4 = lStack_170;
    lStack_170 = 0;
    func_0x00010b982720(alStack_180);
    *plVar1 = lVar4 + 0x18;
    plVar1[1] = lVar4;
    uStack_190 = 0;
    uStack_188 = 0;
    FUN_10b982730(&uStack_190);
    func_0x00010b982928();
    func_0x00010b9827c8(uStack_138);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b982930();
      __ZNSt3__119__shared_weak_countD2Ev(lVar4);
      plVar1 = alStack_180;
      func_0x00010b982720();
      func_0x00010b982928();
      func_0x00010b982814();
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        uVar3 = 0;
        puVar2 = &UNK_10f7d0ef0;
      }
      else {
        puVar2 = (undefined *)(lVar4 + 0x18);
        uVar3 = *(undefined4 *)(lVar4 + 0xc);
      }
      _CFURLCreateWithBytes
                (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,puVar2,uVar3,0x8000100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b981938; end: 10b981a83;  */

void FUN_10b981938(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long alStack_140 [2];
  long lStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [40];
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x00010b9827e8();
  uStack_38 = extraout_x8;
  _objc_retain();
  plStack_88 = param_1;
  if (param_1 == (long *)0x0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    lVar4 = 0;
  }
  else {
    FUN_10b9824a0(&uStack_98,&plStack_88);
    uStack_b8 = uStack_98;
    lStack_b0 = lStack_90;
    if (lStack_90 != 0) {
      do {
        func_0x00010b982888();
      } while (extraout_w10 != 0);
    }
    func_0x00010b982630(auStack_80,1);
    lVar4 = lStack_70;
    func_0x00010b982940();
    unaff_x22 = &uStack_68;
    uStack_68 = 0x10b9826a8;
    ppuStack_60 = &PTR_DAT_110d7cf68;
    uStack_58 = uStack_98;
    lStack_50 = lStack_b0;
    uStack_b8 = 0;
    lStack_b0 = 0;
    FUN_10b9a063c(lVar4 + 0x18,&uStack_68);
    func_0x00010b9828d4();
    lVar4 = lStack_70;
    lStack_70 = 0;
    unaff_x21 = lVar4 + 0x18;
    func_0x00010b982720(auStack_80);
    *unaff_x19 = unaff_x21;
    unaff_x19[1] = lVar4;
    uStack_a8 = 0;
    uStack_a0 = 0;
    FUN_10b982730(&uStack_a8);
    func_0x00010b982608(&uStack_b8);
    func_0x00010b982608(&uStack_98);
    plVar1 = plStack_88;
    _objc_release();
  }
  func_0x00010b9827c8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b9828d4();
    __ZNSt3__119__shared_weak_countD2Ev(lVar4);
    func_0x00010b982720(auStack_80);
    func_0x00010b982608(&uStack_b8);
    func_0x00010b982608(&uStack_98);
    _objc_release(plStack_88);
    func_0x00010b982814();
    pcStack_c8 = FUN_10b981a84;
    puStack_f0 = unaff_x22;
    lStack_e8 = unaff_x21;
    lStack_e0 = lVar4;
    plStack_d8 = plVar1;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00010b9827e8();
    uStack_f8 = extraout_x8_00;
    FUN_10b9a8f04(auStack_160);
    func_0x00010b982630(alStack_140,1);
    lVar4 = lStack_130;
    func_0x00010b982940();
    pcStack_128 = FUN_10b982758;
    FUN_10b982764(auStack_120,auStack_160);
    FUN_10b9a063c(lVar4 + 0x18,&pcStack_128);
    func_0x00010b982930();
    lVar4 = lStack_130;
    lStack_130 = 0;
    func_0x00010b982720(alStack_140);
    *plVar1 = lVar4 + 0x18;
    plVar1[1] = lVar4;
    uStack_150 = 0;
    uStack_148 = 0;
    FUN_10b982730(&uStack_150);
    func_0x00010b982928();
    func_0x00010b9827c8(uStack_f8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b982930();
      __ZNSt3__119__shared_weak_countD2Ev(lVar4);
      plVar1 = alStack_140;
      func_0x00010b982720();
      func_0x00010b982928();
      func_0x00010b982814();
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        uVar3 = 0;
        puVar2 = &UNK_10f7d0ef0;
      }
      else {
        puVar2 = (undefined *)(lVar4 + 0x18);
        uVar3 = *(undefined4 *)(lVar4 + 0xc);
      }
      _CFURLCreateWithBytes
                (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,puVar2,uVar3,0x8000100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b981a84; end: 10b981b5f;  */

void FUN_10b981a84(undefined8 param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *unaff_x19;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [2];
  long lStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x00010b9827e8(param_1,param_1);
  uStack_38 = extraout_x8;
  FUN_10b9a8f04(auStack_a0);
  func_0x00010b982630(alStack_80,1);
  lVar4 = lStack_70;
  func_0x00010b982940();
  pcStack_68 = FUN_10b982758;
  FUN_10b982764(auStack_60,auStack_a0);
  FUN_10b9a063c(lVar4 + 0x18,&pcStack_68);
  func_0x00010b982930();
  lVar4 = lStack_70;
  lStack_70 = 0;
  func_0x00010b982720(alStack_80);
  *unaff_x19 = lVar4 + 0x18;
  unaff_x19[1] = lVar4;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_10b982730(&uStack_90);
  func_0x00010b982928();
  func_0x00010b9827c8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b982930();
  __ZNSt3__119__shared_weak_countD2Ev(lVar4);
  plVar1 = alStack_80;
  func_0x00010b982720();
  func_0x00010b982928();
  func_0x00010b982814();
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    uVar3 = 0;
    puVar2 = &UNK_10f7d0ef0;
  }
  else {
    puVar2 = (undefined *)(lVar4 + 0x18);
    uVar3 = *(undefined4 *)(lVar4 + 0xc);
  }
  _CFURLCreateWithBytes(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,puVar2,uVar3,0x8000100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b981b60; end: 10b981baf;  */

void FUN_10b981b60(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    uVar2 = 0;
    puVar1 = &UNK_10f7d0ef0;
  }
  else {
    puVar1 = (undefined *)(lVar3 + 0x18);
    uVar2 = *(undefined4 *)(lVar3 + 0xc);
  }
  _CFURLCreateWithBytes(*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,puVar1,uVar2,0x8000100,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b981bb0; end: 10b981d83;  */

void FUN_10b981bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined1 *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  FUN_10b99fc44(&uStack_48);
  puVar1 = &uStack_48;
  FUN_10b99f828();
  FUN_10b98101c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_10b99f8ac(&puStack_70,param_1);
    uStack_50 = uStack_68;
    puStack_58 = puStack_70;
    if (-1 < (char)bStack_59) {
      uStack_50 = (ulong)bStack_59;
      puStack_58 = (undefined1 *)&puStack_70;
    }
    FUN_10b9812a4(&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b9827fc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_70);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  uVar3 = 0;
  func_0x00010b99f83c();
  FUN_10b9a60d8();
  if ((uVar3 & 1) == 0) {
    puVar1 = &uStack_48;
    func_0x00010b99f83c(puVar1);
    FUN_10b98101c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110f9e7d8);
    func_0x00010b9829c8();
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010b99fd8c(param_1);
  func_0x00010bf51e00(puVar2);
  func_0x00010bf99240(puVar4,param_2,&PTR____CFConstantStringClassReference_110ee3838,
                      (long)(int)param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b982804();
  func_0x00010b982858();
  func_0x00010b9827fc();
  func_0x000104bda960(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b981d84; end: 10b981e8b;  */

void FUN_10b981d84(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  func_0x00010b9829b0();
  lVar2 = unaff_x19;
  func_0x00010bf87dc0();
  iVar1 = (int)lVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (iVar1 == 0) {
    func_0x00010b982804();
  }
  else {
    func_0x00010bf3ec40();
    func_0x00010b982804();
    if (unaff_x19 != 0) {
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c30f2c(&uStack_38);
      func_0x00010bf3ec40();
      puVar3 = &uStack_38;
      FUN_10b99f6a4();
      goto LAB_10b981e38;
    }
  }
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30f2c(&uStack_40);
  func_0x00010b982978();
LAB_10b981e38:
  func_0x000107c278f8(*puVar3);
  func_0x00010b982804();
  func_0x00010b9827fc();
  return;
}



/* Entry: 10b981e8c; end: 10b981f23;  */

void FUN_10b981e8c(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [8];
  
  FUN_10b99fc44(auStack_38);
  puVar2 = auStack_38;
  FUN_10b99f828(puVar2);
  FUN_10b98101c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x00010b99f83c();
  FUN_10b9a60d8();
  if ((uVar3 & 1) == 0) {
    puVar4 = auStack_38;
    func_0x00010b99f83c(puVar4);
    FUN_10b98101c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  FUN_10b965c30(puVar2,puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b981f04);
  (*pcVar1)();
}



/* Entry: 10b981f24; end: 10b98202f;  */

void FUN_10b981f24(void)

{
  long unaff_x19;
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_50;
  func_0x00010b9829b0();
  func_0x00010c121ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30f2c(&uStack_38);
  func_0x00010b982804();
  FUN_10b965d18();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x19 == 0) {
    uStack_50 = uStack_38;
    uStack_38 = 0;
    func_0x00010b982978();
  }
  else {
    uStack_40 = uStack_38;
    uStack_38 = 0;
    func_0x000107c30f2c(auStack_48,unaff_x19);
    FUN_10b99f4e4();
    func_0x00010b98290c();
    puVar1 = &uStack_40;
  }
  func_0x000107c278f8(*puVar1);
  func_0x00010b982804();
  func_0x000107c278f8(uStack_38);
  func_0x00010b9827fc();
  return;
}



/* Entry: 10b982030; end: 10b982053;  */

undefined8 * FUN_10b982030(undefined8 *param_1)

{
  FUN_10b982054(*param_1);
  return param_1;
}



/* Entry: 10b982054; end: 10b98209b;  */

void FUN_10b982054(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b982998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b98209c; end: 10b9820bf;  */

undefined8 * FUN_10b98209c(undefined8 *param_1)

{
  func_0x0001080e44b4(*param_1);
  return param_1;
}



/* Entry: 10b9820c0; end: 10b9820c3;  */

void FUN_10b9820c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cd40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9820c4; end: 10b9820d7;  */

void FUN_10b9820c4(void)

{
  FUN_10b9821a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9820d8; end: 10b9820e3;  */

void FUN_10b9820d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b982824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9820e4; end: 10b9820f7;  */

void FUN_10b9820e4(void)

{
  FUN_10b982178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9820f8; end: 10b982157;  */

undefined8 FUN_10b9820f8(void)

{
  int iVar1;
  
  if ((bRam00000001137fd2e8 & 1) == 0) {
    iVar1 = 0x137fd2e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x1137fd2e0,&UNK_10f7d035e);
      ___cxa_guard_release(0x1137fd2e8);
    }
  }
  return 0x1137fd2e0;
}



/* Entry: 10b982158; end: 10b982177;  */

long FUN_10b982158(long param_1)

{
  FUN_10b980378(param_1);
  func_0x000107c278e8(param_1 + -0x10);
  return param_1 + -0x18;
}



/* Entry: 10b982178; end: 10b9821a3;  */

long FUN_10b982178(long param_1)

{
  FUN_10b980378(param_1 + 0x18);
  func_0x000107c278e8(param_1 + 8);
  return param_1;
}



/* Entry: 10b9821a4; end: 10b9821bb;  */

void FUN_10b9821a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cd40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9821bc; end: 10b9821e3;  */

void FUN_10b9821bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b9821e4(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b9821e4; end: 10b982277;  */

void FUN_10b9821e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_50;
  func_0x00010b9827e8();
  uStack_38 = extraout_x8;
  FUN_10b982294(auStack_50,1);
  FUN_10b9822ec(lStack_40,param_2,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_10b982278(lVar6 + 0x18);
  FUN_10b982484(auStack_50);
  func_0x00010b9827c8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b982484();
  func_0x00010b982814();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_58 = FUN_10b982278;
    lStack_68 = extraout_x8_00[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_70 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_70);
    func_0x000107c284e8(&puStack_70);
    return;
  }
  return;
}



/* Entry: 10b982278; end: 10b982293;  */

void FUN_10b982278(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c284e8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 10b982294; end: 10b9822bb;  */

long FUN_10b982294(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b9822bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b9822bc; end: 10b9822eb;  */

undefined8 * FUN_10b9822bc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    puVar1 = (undefined8 *)(param_2 * 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7ce68;
  func_0x00010b982348(param_1 + 3);
  return param_1;
}



/* Entry: 10b9822ec; end: 10b982327;  */

undefined8 * FUN_10b9822ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7ce68;
  func_0x00010b982348(param_1 + 3);
  return param_1;
}



/* Entry: 10b982328; end: 10b98232b;  */

void FUN_10b982328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7ce68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b98232c; end: 10b98233f;  */

void FUN_10b98232c(void)

{
  FUN_10b982410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b982340; end: 10b982353;  */

void FUN_10b982340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b982824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b982354; end: 10b9823af;  */

undefined8 *
FUN_10b982354(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10b9ace44();
  FUN_10b980190(puVar1 + 5,param_3,param_4);
  *param_1 = &PTR_FUN_110d7ceb8;
  param_1[5] = &PTR_DAT_110d7cef8;
  return param_1;
}



/* Entry: 10b9823b0; end: 10b9823b3;  */

undefined8 * FUN_10b9823b0(undefined8 *param_1)

{
  FUN_10b980260(param_1 + 5);
  *param_1 = &PTR_DAT_110d7f008;
  func_0x000104bdbf78(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b9823b4; end: 10b9823c7;  */

void FUN_10b9823b4(void)

{
  FUN_10b9823e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9823c8; end: 10b9823e7;  */

undefined1  [16] FUN_10b9823c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 10;
  auVar1._0_8_ = &UNK_10f7d036e;
  return auVar1;
}



/* Entry: 10b9823e8; end: 10b98240f;  */

undefined8 * FUN_10b9823e8(undefined8 *param_1)

{
  FUN_10b980260(param_1 + 5);
  *param_1 = &PTR_DAT_110d7f008;
  func_0x000104bdbf78(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b982410; end: 10b98241b;  */

void FUN_10b982410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7ce68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b98241c; end: 10b982483;  */

void FUN_10b98241c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b982484; end: 10b98249f;  */

void FUN_10b982484(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b9824a0; end: 10b9824bf;  */

void FUN_10b9824a0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b9824c0(&uStack_11,param_1);
  return;
}



/* Entry: 10b9824c0; end: 10b98253f;  */

undefined1 * FUN_10b9824c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010b9827e8();
  uStack_28 = extraout_x8;
  FUN_10b982540(auStack_40,1);
  FUN_10b982594(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x00010b9825f8();
  func_0x00010b9827c8(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b9825f8();
  func_0x00010b982814();
  *(undefined8 *)(puVar3 + 8) = param_2;
  puVar2 = puVar3;
  FUN_10b982568();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b982540; end: 10b982567;  */

long FUN_10b982540(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b982568();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b982568; end: 10b982593;  */

undefined8 * FUN_10b982568(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7cf28;
  func_0x00010b9825e4(param_1 + 3);
  return param_1;
}



/* Entry: 10b982594; end: 10b9825c3;  */

undefined8 * FUN_10b982594(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d7cf28;
  func_0x00010b9825e4(param_1 + 3);
  return param_1;
}



/* Entry: 10b9825c4; end: 10b9825c7;  */

void FUN_10b9825c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7cf28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9825c8; end: 10b9825db;  */

void FUN_10b9825c8(void)

{
  func_0x00010b9825ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9825dc; end: 10b982607;  */

void FUN_10b9825dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b982824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



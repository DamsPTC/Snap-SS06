/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103424334; end: 10342474b;  */

void FUN_103424334(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000015;
      if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef0edcbf0)) ||
         (func_0x000107c605b8(0xd000000000000015,0x800000010f123410,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55ea4();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef0ed9810)) ||
           (func_0x000107c605b8(0xd00000000000001c,0x800000010f1267f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c58c98();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef0f0d9d0)) ||
             (func_0x000107c605b8(0xd000000000000026,0x800000010f0f2630,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c78();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffc8) && (param_3 == -0x7ffffffef0ed9850)) ||
               (func_0x000107c605b8(0xd000000000000038,0x800000010f1267b0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55eb0();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
                 (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55c80();
              }
              else {
                if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) {
                  uVar2 = 0xd000000000000015;
                  func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ecf70)) {
                      uVar2 = 0;
                      func_0x000107c605b8(0xd000000000000012,0x800000010ef13090,param_2,param_3,0);
                      if ((uVar2 & 1) == 0) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "LensSwipeFunnelIntegration/SCLensSwipeFunnelOnTalkEntryPoint.swift"
                                            ,0x42,2,0x45,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x10342474c);
                        (*pcVar1)();
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c55db4();
                    goto LAB_1034243c8;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55df4();
              }
            }
          }
        }
      }
      goto LAB_1034243c8;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1034243c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10342474c; end: 1034247f7; -[SCLensSwipeFunnelOnTalkEntryPoint setValue:forIvarName:] */

void FUN_10342474c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103424334(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1034247f8; end: 1034248e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034247f8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f677c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f677c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f677d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f677d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f677e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f677e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f677f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f677f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f67800) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1034248e4; end: 103424903; -[SCLensSwipeFunnelOnTalkEntryPoint init] */

void FUN_1034248e4(void)

{
  FUN_1034247f8();
  return;
}



/* Entry: 103424904; end: 103424937;  */

void FUN_103424904(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103424938; end: 1034249df; -[SCLensSwipeFunnelOnTalkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103424938(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f677c0);
  func_0x000107c61610(param_1 + _DAT_112f677c8);
  func_0x000107c61610(param_1 + _DAT_112f677d0);
  func_0x000107c61610(param_1 + _DAT_112f677d8);
  func_0x000107c61610(param_1 + _DAT_112f677e0);
  func_0x000107c61610(param_1 + _DAT_112f677e8);
  func_0x000107c61610(param_1 + _DAT_112f677f0);
  func_0x000107c61610(param_1 + _DAT_112f677f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f67800));
  return;
}



/* Entry: 1034249e0; end: 1034249ff;  */

void FUN_1034249e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9358);
  return;
}



/* Entry: 103424a00; end: 103424a63;  */

/* WARNING: Possible PIC construction at 0x000103424a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103424a18) */

void FUN_103424a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103424a64; end: 103424ac7;  */

undefined8 * FUN_103424a64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103424ac8; end: 103424b0b;  */

undefined8 * FUN_103424ac8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103424b0c; end: 103424bab;  */

int FUN_103424b0c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103424bac; end: 1034250bf;  */

/* WARNING: Possible PIC construction at 0x000103441590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034415a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034415c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034415f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441624: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034416a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034416b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034416c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034416d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034425c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034425d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034425f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344262c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344263c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344265c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344268c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344269c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034426bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034426e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034426f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034431cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034431dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034431fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103443234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103443244: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103443264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103443290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034432a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034432c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034432ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034432fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344331c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344334c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344335c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344337c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034433a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034433b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034433dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034433ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034433fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344340c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034419b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034419c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034419e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103441d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103435b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103435b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103435b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103435b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103435b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103435b68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103435b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034260fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342610c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103426810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342684c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103426870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343fd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343fd9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343fde4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343fdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034405b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034405d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034405e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343fd78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010344218c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034421a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034421b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034422a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034422d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034422e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034423a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034423c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034423f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103442430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103424e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343aa10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343aa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343aa5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343aa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343aac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343aad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343aaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ab30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ab40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ab60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ab8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ab9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343abbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343abe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343abf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ac18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ac44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ac64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343ac74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343fd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010343fd70) */
/* WARNING: Removing unreachable block (ram,0x00010343ac78) */
/* WARNING: Removing unreachable block (ram,0x00010343ac68) */
/* WARNING: Removing unreachable block (ram,0x00010343ac58) */
/* WARNING: Removing unreachable block (ram,0x00010343ac48) */
/* WARNING: Removing unreachable block (ram,0x00010343ac1c) */
/* WARNING: Removing unreachable block (ram,0x00010343abfc) */
/* WARNING: Removing unreachable block (ram,0x00010343abec) */
/* WARNING: Removing unreachable block (ram,0x00010343abc0) */
/* WARNING: Removing unreachable block (ram,0x00010343aba0) */
/* WARNING: Removing unreachable block (ram,0x00010343ab90) */
/* WARNING: Removing unreachable block (ram,0x00010343ab64) */
/* WARNING: Removing unreachable block (ram,0x00010343ab44) */
/* WARNING: Removing unreachable block (ram,0x00010343ab34) */
/* WARNING: Removing unreachable block (ram,0x00010343aafc) */
/* WARNING: Removing unreachable block (ram,0x00010343aadc) */
/* WARNING: Removing unreachable block (ram,0x00010343aacc) */
/* WARNING: Removing unreachable block (ram,0x00010343aa7c) */
/* WARNING: Removing unreachable block (ram,0x00010343aa60) */
/* WARNING: Removing unreachable block (ram,0x00010343aa2c) */
/* WARNING: Removing unreachable block (ram,0x00010343aa14) */
/* WARNING: Removing unreachable block (ram,0x000103424e0c) */
/* WARNING: Removing unreachable block (ram,0x000103440cf0) */
/* WARNING: Removing unreachable block (ram,0x000103442434) */
/* WARNING: Removing unreachable block (ram,0x000103442424) */
/* WARNING: Removing unreachable block (ram,0x000103442414) */
/* WARNING: Removing unreachable block (ram,0x000103442404) */
/* WARNING: Removing unreachable block (ram,0x0001034423f4) */
/* WARNING: Removing unreachable block (ram,0x0001034423c8) */
/* WARNING: Removing unreachable block (ram,0x0001034423a8) */
/* WARNING: Removing unreachable block (ram,0x000103442398) */
/* WARNING: Removing unreachable block (ram,0x00010344236c) */
/* WARNING: Removing unreachable block (ram,0x00010344234c) */
/* WARNING: Removing unreachable block (ram,0x00010344233c) */
/* WARNING: Removing unreachable block (ram,0x00010344230c) */
/* WARNING: Removing unreachable block (ram,0x0001034422ec) */
/* WARNING: Removing unreachable block (ram,0x0001034422dc) */
/* WARNING: Removing unreachable block (ram,0x0001034422a8) */
/* WARNING: Removing unreachable block (ram,0x000103442284) */
/* WARNING: Removing unreachable block (ram,0x000103442274) */
/* WARNING: Removing unreachable block (ram,0x000103442234) */
/* WARNING: Removing unreachable block (ram,0x00010344221c) */
/* WARNING: Removing unreachable block (ram,0x00010344220c) */
/* WARNING: Removing unreachable block (ram,0x0001034421bc) */
/* WARNING: Removing unreachable block (ram,0x0001034421a8) */
/* WARNING: Removing unreachable block (ram,0x000103442190) */
/* WARNING: Removing unreachable block (ram,0x000103442178) */
/* WARNING: Removing unreachable block (ram,0x000103440634) */
/* WARNING: Removing unreachable block (ram,0x00010344061c) */
/* WARNING: Removing unreachable block (ram,0x000103440604) */
/* WARNING: Removing unreachable block (ram,0x0001034405ec) */
/* WARNING: Removing unreachable block (ram,0x0001034405d4) */
/* WARNING: Removing unreachable block (ram,0x0001034405bc) */
/* WARNING: Removing unreachable block (ram,0x00010343fdf8) */
/* WARNING: Removing unreachable block (ram,0x00010343fde8) */
/* WARNING: Removing unreachable block (ram,0x00010343fda0) */
/* WARNING: Removing unreachable block (ram,0x00010343fd88) */
/* WARNING: Removing unreachable block (ram,0x000103426874) */
/* WARNING: Removing unreachable block (ram,0x000103426850) */
/* WARNING: Removing unreachable block (ram,0x000103426814) */
/* WARNING: Removing unreachable block (ram,0x000103426110) */
/* WARNING: Removing unreachable block (ram,0x00010342601c) */
/* WARNING: Removing unreachable block (ram,0x000103426120) */
/* WARNING: Removing unreachable block (ram,0x000103426024) */
/* WARNING: Removing unreachable block (ram,0x00010342613c) */
/* WARNING: Removing unreachable block (ram,0x000103426034) */
/* WARNING: Removing unreachable block (ram,0x000103426040) */
/* WARNING: Removing unreachable block (ram,0x000103426138) */
/* WARNING: Removing unreachable block (ram,0x00010342604c) */
/* WARNING: Removing unreachable block (ram,0x00010342611c) */
/* WARNING: Removing unreachable block (ram,0x00010342617c) */
/* WARNING: Removing unreachable block (ram,0x000103426100) */
/* WARNING: Removing unreachable block (ram,0x000103435b7c) */
/* WARNING: Removing unreachable block (ram,0x000103435b6c) */
/* WARNING: Removing unreachable block (ram,0x000103435b5c) */
/* WARNING: Removing unreachable block (ram,0x000103435b4c) */
/* WARNING: Removing unreachable block (ram,0x000103435b3c) */
/* WARNING: Removing unreachable block (ram,0x000103435b2c) */
/* WARNING: Removing unreachable block (ram,0x000103435b1c) */
/* WARNING: Removing unreachable block (ram,0x000103441d64) */
/* WARNING: Removing unreachable block (ram,0x000103441d38) */
/* WARNING: Removing unreachable block (ram,0x000103441d18) */
/* WARNING: Removing unreachable block (ram,0x000103441d08) */
/* WARNING: Removing unreachable block (ram,0x000103441cd8) */
/* WARNING: Removing unreachable block (ram,0x000103441cb8) */
/* WARNING: Removing unreachable block (ram,0x000103441ca8) */
/* WARNING: Removing unreachable block (ram,0x000103441c7c) */
/* WARNING: Removing unreachable block (ram,0x000103441c5c) */
/* WARNING: Removing unreachable block (ram,0x000103441c4c) */
/* WARNING: Removing unreachable block (ram,0x000103441c20) */
/* WARNING: Removing unreachable block (ram,0x000103441c00) */
/* WARNING: Removing unreachable block (ram,0x000103441bf0) */
/* WARNING: Removing unreachable block (ram,0x000103441bc4) */
/* WARNING: Removing unreachable block (ram,0x000103441ba4) */
/* WARNING: Removing unreachable block (ram,0x000103441b94) */
/* WARNING: Removing unreachable block (ram,0x000103441b68) */
/* WARNING: Removing unreachable block (ram,0x000103441b48) */
/* WARNING: Removing unreachable block (ram,0x000103441b38) */
/* WARNING: Removing unreachable block (ram,0x000103441b0c) */
/* WARNING: Removing unreachable block (ram,0x000103441aec) */
/* WARNING: Removing unreachable block (ram,0x000103441ad8) */
/* WARNING: Removing unreachable block (ram,0x000103441aac) */
/* WARNING: Removing unreachable block (ram,0x000103441a8c) */
/* WARNING: Removing unreachable block (ram,0x000103441a78) */
/* WARNING: Removing unreachable block (ram,0x000103441a4c) */
/* WARNING: Removing unreachable block (ram,0x000103441a2c) */
/* WARNING: Removing unreachable block (ram,0x000103441a18) */
/* WARNING: Removing unreachable block (ram,0x0001034419ec) */
/* WARNING: Removing unreachable block (ram,0x0001034419cc) */
/* WARNING: Removing unreachable block (ram,0x0001034419b8) */
/* WARNING: Removing unreachable block (ram,0x000103443410) */
/* WARNING: Removing unreachable block (ram,0x000103443400) */
/* WARNING: Removing unreachable block (ram,0x0001034433f0) */
/* WARNING: Removing unreachable block (ram,0x0001034433e0) */
/* WARNING: Removing unreachable block (ram,0x0001034433bc) */
/* WARNING: Removing unreachable block (ram,0x0001034433ac) */
/* WARNING: Removing unreachable block (ram,0x000103443380) */
/* WARNING: Removing unreachable block (ram,0x000103443360) */
/* WARNING: Removing unreachable block (ram,0x000103443350) */
/* WARNING: Removing unreachable block (ram,0x000103443320) */
/* WARNING: Removing unreachable block (ram,0x000103443300) */
/* WARNING: Removing unreachable block (ram,0x0001034432f0) */
/* WARNING: Removing unreachable block (ram,0x0001034432c4) */
/* WARNING: Removing unreachable block (ram,0x0001034432a4) */
/* WARNING: Removing unreachable block (ram,0x000103443294) */
/* WARNING: Removing unreachable block (ram,0x000103443268) */
/* WARNING: Removing unreachable block (ram,0x000103443248) */
/* WARNING: Removing unreachable block (ram,0x000103443238) */
/* WARNING: Removing unreachable block (ram,0x000103443200) */
/* WARNING: Removing unreachable block (ram,0x0001034431e0) */
/* WARNING: Removing unreachable block (ram,0x0001034431d0) */
/* WARNING: Removing unreachable block (ram,0x000103441dec) */
/* WARNING: Removing unreachable block (ram,0x000103441ddc) */
/* WARNING: Removing unreachable block (ram,0x000103441dcc) */
/* WARNING: Removing unreachable block (ram,0x000103441dbc) */
/* WARNING: Removing unreachable block (ram,0x000103441dac) */
/* WARNING: Removing unreachable block (ram,0x000103441d74) */
/* WARNING: Removing unreachable block (ram,0x000103441e1c) */
/* WARNING: Removing unreachable block (ram,0x000103441d90) */
/* WARNING: Removing unreachable block (ram,0x000103441568) */
/* WARNING: Removing unreachable block (ram,0x000103441548) */
/* WARNING: Removing unreachable block (ram,0x000103441538) */
/* WARNING: Removing unreachable block (ram,0x000103442788) */
/* WARNING: Removing unreachable block (ram,0x000103442778) */
/* WARNING: Removing unreachable block (ram,0x000103442768) */
/* WARNING: Removing unreachable block (ram,0x000103442758) */
/* WARNING: Removing unreachable block (ram,0x000103442748) */
/* WARNING: Removing unreachable block (ram,0x00010344271c) */
/* WARNING: Removing unreachable block (ram,0x0001034426fc) */
/* WARNING: Removing unreachable block (ram,0x0001034426ec) */
/* WARNING: Removing unreachable block (ram,0x0001034426c0) */
/* WARNING: Removing unreachable block (ram,0x0001034426a0) */
/* WARNING: Removing unreachable block (ram,0x000103442690) */
/* WARNING: Removing unreachable block (ram,0x000103442660) */
/* WARNING: Removing unreachable block (ram,0x000103442640) */
/* WARNING: Removing unreachable block (ram,0x000103442630) */
/* WARNING: Removing unreachable block (ram,0x0001034425fc) */
/* WARNING: Removing unreachable block (ram,0x0001034425dc) */
/* WARNING: Removing unreachable block (ram,0x0001034425cc) */
/* WARNING: Removing unreachable block (ram,0x0001034416dc) */
/* WARNING: Removing unreachable block (ram,0x0001034416cc) */
/* WARNING: Removing unreachable block (ram,0x0001034416bc) */
/* WARNING: Removing unreachable block (ram,0x0001034416ac) */
/* WARNING: Removing unreachable block (ram,0x00010344169c) */
/* WARNING: Removing unreachable block (ram,0x00010344168c) */
/* WARNING: Removing unreachable block (ram,0x000103441664) */
/* WARNING: Removing unreachable block (ram,0x000103441710) */
/* WARNING: Removing unreachable block (ram,0x000103441680) */
/* WARNING: Removing unreachable block (ram,0x000103441654) */
/* WARNING: Removing unreachable block (ram,0x000103441628) */
/* WARNING: Removing unreachable block (ram,0x000103441608) */
/* WARNING: Removing unreachable block (ram,0x0001034415f8) */
/* WARNING: Removing unreachable block (ram,0x0001034415c8) */
/* WARNING: Removing unreachable block (ram,0x0001034415a4) */
/* WARNING: Removing unreachable block (ram,0x000103441594) */
/* WARNING: Removing unreachable block (ram,0x000103440d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_103424bac(ulong ***param_1,char *param_2,ulong ****param_3,ulong ****param_4,ulong ***param_5,
             ulong ***param_6,ulong ***param_7,ulong ***param_8,ulong ***param_9,ulong ****param_10,
             ulong ****param_11,ulong ***param_12,undefined8 param_13,ulong ***param_14,
             ulong ****param_15,undefined8 param_16,ulong ***param_17,ulong ****param_18,
             code *param_19,ulong ****param_20,code *param_21,ulong ****param_22,ulong ****param_23,
             ulong ***param_24,ulong ****param_25,ulong ****param_26,undefined8 param_27,
             undefined8 param_28,ulong ****param_29)

{
  undefined8 uVar1;
  ulong **ppuVar2;
  ulong ***pppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong ****ppppuVar8;
  ulong ****ppppuVar9;
  undefined *puVar10;
  ulong ****ppppuVar11;
  ulong ****ppppuVar12;
  ulong ****ppppuVar13;
  undefined8 *puVar14;
  ulong ****ppppuVar15;
  ulong ****ppppuVar16;
  ulong **ppuVar17;
  undefined8 uVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 *puVar21;
  ulong ****ppppuVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong ****ppppuVar25;
  ulong ***pppuVar26;
  ulong uVar27;
  char *pcVar28;
  undefined8 unaff_x19;
  ulong ****unaff_x20;
  code *unaff_x21;
  ulong ****unaff_x22;
  ulong ****unaff_x23;
  ulong ****unaff_x24;
  code *unaff_x25;
  code *unaff_x26;
  ulong ****unaff_x27;
  ulong ****unaff_x28;
  ulong ****ppppuVar29;
  ulong ****unaff_x29;
  ulong ****unaff_x30;
  ulong ***in_register_00005008;
  ulong ***in_register_00005028;
  ulong ***in_d7;
  undefined8 in_d26;
  undefined8 in_register_00005348;
  ulong ***in_d27;
  ulong ***in_register_00005368;
  ulong ***in_d28;
  ulong ***in_register_00005388;
  ulong ***in_d29;
  ulong ***in_register_000053a8;
  ulong ***in_d30;
  ulong ***in_register_000053c8;
  ulong ***in_d31;
  ulong ***in_register_000053e8;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ulong **ppuStack_360;
  ulong ***pppuStack_358;
  ulong ***in_stack_fffffffffffffcb0;
  ulong ***pppuStack_348;
  ulong ****in_stack_fffffffffffffcc0;
  ulong ****in_stack_fffffffffffffcc8;
  ulong ****in_stack_fffffffffffffcd0;
  ulong ****in_stack_fffffffffffffcd8;
  ulong ***in_stack_fffffffffffffce0;
  long in_stack_fffffffffffffce8;
  ulong ***in_stack_fffffffffffffcf0;
  ulong ****in_stack_fffffffffffffcf8;
  ulong ***pppuStack_300;
  undefined8 in_stack_fffffffffffffd08;
  ulong ***pppuStack_2f0;
  ulong ***pppuStack_2e8;
  ulong ***pppuStack_2e0;
  ulong ***pppuStack_2d8;
  ulong ***pppuStack_2d0;
  ulong ***pppuStack_2c8;
  ulong ***pppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong **ppuStack_270;
  ulong ***pppuStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong **ppuStack_248;
  ulong **ppuStack_240;
  ulong **ppuStack_238;
  ulong **ppuStack_230;
  ulong **ppuStack_228;
  ulong **ppuStack_220;
  ulong ***pppuStack_218;
  ulong ***pppuStack_210;
  ulong **ppuStack_208;
  ulong **ppuStack_200;
  ulong **ppuStack_1f8;
  ulong **ppuStack_1f0;
  ulong **ppuStack_1e8;
  ulong **ppuStack_1e0;
  ulong **ppuStack_1d8;
  ulong **ppuStack_1d0;
  ulong **ppuStack_1c8;
  ulong **ppuStack_1c0;
  ulong **ppuStack_1b8;
  ulong **ppuStack_1b0;
  ulong **ppuStack_1a8;
  ulong **ppuStack_1a0;
  ulong **ppuStack_198;
  ulong **ppuStack_190;
  ulong **ppuStack_188;
  ulong **ppuStack_180;
  ulong **ppuStack_178;
  ulong **ppuStack_170;
  ulong **ppuStack_168;
  ulong **ppuStack_160;
  ulong **appuStack_158 [2];
  ulong **ppuStack_148;
  ulong **ppuStack_138;
  ulong **ppuStack_130;
  undefined8 uStack_128;
  ulong **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong **ppuStack_e8;
  ulong ***pppuStack_e0;
  char *pcStack_d8;
  ulong ***pppuStack_d0;
  ulong **ppuStack_c8;
  code *pcStack_c0;
  ulong **ppuStack_b8;
  ulong ****in_stack_ffffffffffffff50;
  ulong ***pppuStack_a8;
  ulong ***pppuStack_a0;
  ulong ****in_stack_ffffffffffffff68;
  undefined8 uStack_90;
  ulong **ppuStack_88;
  code *pcStack_80;
  ulong ****in_stack_ffffffffffffff88;
  char *pcStack_70;
  undefined8 uStack_68;
  ulong ***pppuStack_60;
  ulong ***pppuStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  ulong ****ppppuVar58;
  ulong ****ppppuVar59;
  
  pcVar28 = pcStack_70;
  ppppuVar25 = (ulong ****)((ulong)param_5 & 0xff);
  ppppuVar22 = (ulong ****)&ppuStack_360;
  ppppuVar8 = (ulong ****)param_2;
  ppppuVar16 = (ulong ****)param_2;
  ppppuVar9 = ppppuVar25;
  ppppuVar11 = unaff_x22;
  pcVar7 = (code *)unaff_x23;
  ppppuVar15 = unaff_x23;
  ppppuVar12 = unaff_x27;
  ppppuVar29 = unaff_x28;
  ppppuVar58 = unaff_x24;
  ppppuVar59 = unaff_x22;
  ppppuVar13 = (ulong ****)unaff_x21;
  switch(ppppuVar25) {
  default:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    func_0x000107c61534();
    in_register_00005008 = (ulong ***)0x2;
    param_1 = (ulong ***)0x1;
    param_3 = ppppuVar22;
  case (ulong ****)0x16:
    ppppuVar8[3] = in_register_00005008;
    ppppuVar8[2] = param_1;
    ppppuVar25 = (ulong ****)0x534e454c;
  case (ulong ****)0x52:
  case (ulong ****)0x72:
  case (ulong ****)0xba:
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)((ulong)ppppuVar25 | 0x4c45535f00000000);
  case (ulong ****)0x12:
  case (ulong ****)0x38:
  case (ulong ****)0x58:
  case (ulong ****)0x78:
  case (ulong ****)0xa0:
    ppppuVar25 = (ulong ****)0x4445544345;
  case (ulong ****)0xc2:
    pppuVar26 = (ulong ***)((ulong)ppppuVar25 | 0xed00000000000000);
code_r0x000103425034:
    ppppuVar8[5] = pppuVar26;
    ppppuVar8[6] = (ulong ***)param_2;
code_r0x000103425038:
    ppppuVar9 = ppppuVar8;
    func_0x000101438ce4();
    func_0x000107c61588(ppppuVar8);
    FUN_1034250c0(unaff_x20);
    auVar30._8_8_ = param_3;
    auVar30._0_8_ = ppppuVar9;
    return auVar30;
  case (ulong ****)0x1:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)&stack0xfffffffffffffcd8;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0x45525f594c505041;
    uVar27 = 0x53455551;
    goto code_r0x000103424f90;
  case (ulong ****)0x2:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = &pppuStack_2f0;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0x454352554f534552;
    pppuVar26 = (ulong ***)0xef59444145525f53;
    goto code_r0x000103425034;
  case (ulong ****)0x3:
    param_2 = (char *)0x112f67830;
  case (ulong ****)0x4d:
  case (ulong ****)0x6f:
    func_0x0001000285a8(param_2,&UNK_10dbc32d0);
    puVar14 = &uStack_2b8;
    func_0x000107c61534();
    *(ulong ****)((long)param_2 + 0x18) = (ulong ***)0x2;
    *(ulong ****)((long)param_2 + 0x10) = (ulong ***)0x1;
    ppuStack_248 = (ulong **)0x0;
    ppuStack_240 = (ulong **)0xe000000000000000;
    func_0x000107c602fc(0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(ppuStack_240);
    auVar55._8_8_ = puVar14;
    auVar55._0_8_ = ppuStack_240;
    return auVar55;
  case (ulong ****)0x4:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    ppuStack_248 = (ulong **)0x5f44414f4c5f4c4d;
    ppuStack_240 = (ulong **)0xec0000005f444e45;
    goto code_r0x000103424f1c;
  case (ulong ****)0x5:
    ppppuVar8 = (ulong ****)0x112f67830;
  case (ulong ****)0xc7:
  case (ulong ****)0xcf:
  case (ulong ****)0xd7:
    func_0x0001000285a8(ppppuVar8,&UNK_10dbc32d0);
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    ppuStack_248 = (ulong **)0x54535249465f4c4d;
    ppuStack_240 = (ulong **)0xed00005f4e55525f;
code_r0x000103424f1c:
    func_0x000107c5fb78(param_2,param_3);
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)ppuStack_248;
    ppppuVar8[5] = (ulong ***)ppuStack_240;
    ppppuVar8[6] = (ulong ***)param_4;
    goto code_r0x000103425038;
  case (ulong ****)0x6:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)&ppuStack_200;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0x415f45564954414e;
    pppuVar26 = (ulong ***)0xec000000594c5050;
    goto code_r0x000103425034;
  case (ulong ****)0x7:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)&ppuStack_1c8;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0xd000000000000011;
    pcVar28 = "FIRST_FRAME_READY";
    goto code_r0x00010342502c;
  case (ulong ****)0x8:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)&ppuStack_190;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0x414f4c5f534e454c;
    pppuVar26 = (ulong ***)0xeb00000000444544;
    goto code_r0x000103425034;
  case (ulong ****)0x9:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)appuStack_158;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0xd000000000000014;
    pcVar28 = "FIRST_FRAME_RENDERED";
    goto code_r0x00010342502c;
  case (ulong ****)0xa:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)&ppuStack_120;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0xd00000000000001b;
    pcVar28 = "AI_GENERATION_REQUEST_START";
    goto code_r0x00010342502c;
  case (ulong ****)0xb:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)&ppuStack_e8;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
  case (ulong ****)0x9a:
    ppppuVar25 = (ulong ****)0x1b;
  case (ulong ****)0x3c:
  case (ulong ****)0x5c:
  case (ulong ****)0x7c:
  case (ulong ****)0xa4:
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)(((ulong)ppppuVar25 | 0xd000000000000000) + 3);
    pcVar28 = "AI_GENERATION_REQUEST_COMPLETE";
code_r0x00010342502c:
    pppuVar26 = (ulong ***)((ulong)(pcVar28 + -0x20) | 0x8000000000000000);
    goto code_r0x000103425034;
  case (ulong ****)0xc:
    ppppuVar8 = (ulong ****)0x112f67830;
    func_0x0001000285a8(0x112f67830,&UNK_10dbc32d0);
    param_3 = (ulong ****)&stack0xffffffffffffff50;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0xd00000000000001b;
    pcVar28 = "AI_GENERATION_REQUEST_ERROR";
    goto code_r0x00010342502c;
  case (ulong ****)0xd:
    ppppuVar8 = (ulong ****)0x112f67830;
    param_3 = (ulong ****)&DAT_10dbc3000;
  case (ulong ****)0x11:
  case (ulong ****)0x15:
  case (ulong ****)0x51:
  case (ulong ****)0x71:
  case (ulong ****)0x99:
  case (ulong ****)0xb9:
  case (ulong ****)0xc1:
    func_0x0001000285a8(ppppuVar8,param_3 + 0x5a);
    param_3 = (ulong ****)&stack0xffffffffffffff88;
    func_0x000107c61534();
    ppppuVar8[3] = (ulong ***)0x2;
    ppppuVar8[2] = (ulong ***)0x1;
    unaff_x20 = ppppuVar8 + 4;
    *unaff_x20 = (ulong ***)0x5345445f534e454c;
    uVar27 = 0x43454c45;
code_r0x000103424f90:
    pppuVar26 = (ulong ***)(uVar27 | 0xef44455400000000);
    goto code_r0x000103425034;
  case (ulong ****)0x14:
    pppuStack_2e8 = (ulong ***)param_25;
    pppuStack_2f0 = param_24;
    pppuStack_348 = (ulong ***)param_15;
    pppuStack_358 = param_14;
    func_0x000107c610f8();
    *(char **)((long)ppppuVar25 + _DAT_112f6b9e8) = param_2;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6b9f0) = param_3;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6b9f8) = param_4;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba00) = param_5;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba08) = param_6;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba10) = param_7;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba18) = param_8;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba20) = param_9;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6ba28) = param_10;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6ba30) = param_11;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba38) = param_12;
    *(undefined8 *)((long)ppppuVar25 + _DAT_112f6ba40) = param_13;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba48) = pppuStack_358;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba50) = pppuStack_348;
    *(undefined8 *)((long)ppppuVar25 + _DAT_112f6ba58) = param_16;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba60) = param_17;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6ba68) = param_18;
    *(code **)((long)ppppuVar25 + _DAT_112f6ba70) = param_19;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6ba78) = param_20;
    *(code **)((long)ppppuVar25 + _DAT_112f6ba80) = param_21;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6ba88) = param_22;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6ba90) = param_23;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6ba98) = pppuStack_2f0;
    *(ulong ****)((long)ppppuVar25 + _DAT_112f6baa0) = pppuStack_2e8;
    *(ulong *****)((long)ppppuVar25 + _DAT_112f6baa8) = param_26;
    puVar21 = &stack0xffffffffffffff88;
    puVar10 = PTR_s_init_1125d9248;
    func_0x000107c61154(puVar21,PTR_s_init_1125d9248);
    auVar52._8_8_ = puVar10;
    auVar52._0_8_ = puVar21;
    return auVar52;
  case (ulong ****)0x19:
  case (ulong ****)0x29:
  case (ulong ****)0xe2:
    func_0x000107c5a49c(param_2);
    unaff_x22 = (ulong ****)param_2;
    break;
  case (ulong ****)0x1a:
  case (ulong ****)0x2a:
    auVar48._8_8_ = 0;
    auVar48._0_8_ = param_2;
    return auVar48;
  case (ulong ****)0x1b:
  case (ulong ****)0x2b:
    goto code_r0x000107c61174;
  case (ulong ****)0x1c:
  case (ulong ****)0x2c:
    auVar34._8_8_ = param_3;
    auVar34._0_8_ = param_2;
    return auVar34;
  case (ulong ****)0x1f:
    auVar36._8_8_ = param_3;
    auVar36._0_8_ = param_2;
    return auVar36;
  case (ulong ****)0x2f:
    ppppuVar9 = &pppuStack_348;
    ppppuVar8 = ppppuVar25;
  case (ulong ****)0xad:
    func_0x000100083b20(ppppuVar9);
    FUN_10343a184();
    func_0x000107c610f8();
    *(ulong ****)((long)param_2 + _DAT_112f68cd0) = pppuStack_348;
    ppppuVar9 = &pppuStack_358;
    puVar10 = PTR_s_init_1125d9248;
    pppuStack_358 = (ulong ***)param_2;
    func_0x000107c61154(ppppuVar9,PTR_s_init_1125d9248);
    *ppppuVar8 = (ulong ***)ppppuVar9;
    auVar38._8_8_ = puVar10;
    auVar38._0_8_ = ppppuVar9;
    return auVar38;
  case (ulong ****)0x31:
    in_register_00005348 = 0x9300ee00b80027;
    in_d26 = 0x75006000a50000;
    in_register_00005368 = unaff_x20[0x30];
    in_d27 = unaff_x20[0x2f];
    in_register_00005388 = unaff_x20[0x32];
    in_d28 = unaff_x20[0x31];
    in_register_000053a8 = unaff_x20[0x34];
    in_d29 = unaff_x20[0x33];
    in_register_000053c8 = unaff_x20[0x36];
    in_d30 = unaff_x20[0x35];
  case (ulong ****)0xe4:
    in_d31 = unaff_x20[0x37];
    in_register_000053e8 = unaff_x20[0x38];
  case (ulong ****)0xe5:
  case (ulong ****)0xf2:
    ppuStack_1d8 = (ulong **)unaff_x20[0x3a];
    ppuStack_1e0 = (ulong **)unaff_x20[0x39];
    ppuStack_1c8 = (ulong **)unaff_x20[0x3c];
    ppuStack_1d0 = (ulong **)unaff_x20[0x3b];
    ppuStack_1b8 = (ulong **)unaff_x20[0x3e];
    ppuStack_1c0 = (ulong **)unaff_x20[0x3d];
    ppuStack_1a8 = (ulong **)unaff_x20[0x40];
    ppuStack_1b0 = (ulong **)unaff_x20[0x3f];
    ppuStack_198 = (ulong **)unaff_x20[0x42];
    ppuStack_1a0 = (ulong **)unaff_x20[0x41];
    ppuStack_188 = (ulong **)unaff_x20[0x44];
    ppuStack_190 = (ulong **)unaff_x20[0x43];
    ppuStack_178 = (ulong **)unaff_x20[0x46];
    ppuStack_180 = (ulong **)unaff_x20[0x45];
    ppuStack_168 = (ulong **)unaff_x20[0x48];
    ppuStack_170 = (ulong **)unaff_x20[0x47];
    ppuStack_160 = (ulong **)unaff_x20[0x49];
    ppuStack_360 = (ulong **)param_1;
    pppuStack_2f0 = in_d7;
    ppuStack_240 = (ulong **)in_d26;
    ppuStack_238 = (ulong **)in_register_00005348;
    ppuStack_230 = (ulong **)in_d27;
    ppuStack_228 = (ulong **)in_register_00005368;
    ppuStack_220 = (ulong **)in_d28;
    pppuStack_218 = in_register_00005388;
    pppuStack_210 = in_d29;
    ppuStack_208 = (ulong **)in_register_000053a8;
    ppuStack_200 = (ulong **)in_d30;
    ppuStack_1f8 = (ulong **)in_register_000053c8;
    ppuStack_1f0 = (ulong **)in_d31;
    ppuStack_1e8 = (ulong **)in_register_000053e8;
    FUN_10343ce68();
    auVar41._8_8_ = param_3;
    auVar41._0_8_ = param_2;
    return auVar41;
  case (ulong ****)0x40:
  case (ulong ****)0x60:
  case (ulong ****)0x80:
  case (ulong ****)0xa8:
    func_0x000100083b20(&stack0xfffffffffffffcc8);
    func_0x000100083b20(&stack0xfffffffffffffcc0);
    func_0x000100083b20(&pppuStack_348);
    func_0x000100083b20(&stack0xfffffffffffffcb0);
    FUN_103442908();
    param_3 = (ulong ****)0x40;
    func_0x000107c613fc();
    *(ulong *****)((long)param_2 + 0x18) = in_stack_fffffffffffffcd0;
    *(ulong *****)((long)param_2 + 0x20) = in_stack_fffffffffffffcc8;
    *(ulong *****)((long)param_2 + 0x28) = in_stack_fffffffffffffcc0;
    *(ulong ****)((long)param_2 + 0x30) = pppuStack_348;
    *(ulong ****)((long)param_2 + 0x38) = in_stack_fffffffffffffcb0;
    func_0x000107c610f8(PTR_PTR_1126ad298);
    param_2 = (char *)in_stack_fffffffffffffcd0;
    goto code_r0x000107c61174;
  case (ulong ****)0x42:
  case (ulong ****)0x62:
  case (ulong ****)0x82:
  case (ulong ****)0xaa:
    goto code_r0x000107c61174;
  case (ulong ****)0x44:
    *(code **)((long)param_2 + 0x60) = unaff_x25;
    *(ulong *****)((long)param_2 + 0x68) = unaff_x23;
    func_0x000107c6157c();
    func_0x000107c6157c(param_2);
    func_0x000107c6157c();
    func_0x000107c6157c(ppuStack_360);
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c(in_stack_fffffffffffffcc0);
    func_0x000107c6157c();
    func_0x000107c6157c(in_stack_fffffffffffffcc8);
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    uVar24 = 0x103435234;
    func_0x0001000823a8(0x103435234);
    auVar33._8_8_ = unaff_x26;
    auVar33._0_8_ = uVar24;
    return auVar33;
  case (ulong ****)0x45:
    func_0x000107c60450(param_2,0xb,2,0,0xe000000000000000,param_7,0x56,2);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x103439d28);
    (*pcVar7)();
  case (ulong ****)0x47:
  case (ulong ****)0xaf:
    auVar42._8_8_ = 0;
    auVar42._0_8_ = (ulong ****)((long)param_2 + 0x848);
    return auVar42;
  case (ulong ****)0x49:
    auVar39._8_8_ = param_3;
    auVar39._0_8_ = param_2;
    return auVar39;
  case (ulong ****)0x4a:
  case (ulong ****)0x6c:
  case (ulong ****)0x8b:
  case (ulong ****)0xef:
    unaff_x22 = (ulong ****)param_2;
    break;
  case (ulong ****)0x4c:
  case (ulong ****)0x6e:
    pppuStack_348 = (ulong ***)param_2;
    func_0x000100083b20(&pppuStack_358);
    FUN_10345d744();
    func_0x000107c61574(pppuStack_358);
    auVar45._8_8_ = param_3;
    auVar45._0_8_ = param_2;
    return auVar45;
  case (ulong ****)0x67:
    pppuStack_2e0 = (ulong ***)in_stack_ffffffffffffff68;
    func_0x000100083b20(&pppuStack_a0);
    pppuStack_2e8 = pppuStack_a0;
    func_0x000100083b20(&pppuStack_a8);
    func_0x000100083b20(&pppuStack_2c0);
    unaff_x23 = (ulong ****)pppuStack_a8;
  case (ulong ****)0x63:
  case (ulong ****)0x83:
  case (ulong ****)0xab:
    func_0x000100083b20(&pppuStack_2c8);
    func_0x000100083b20(&pppuStack_2d0);
    func_0x000100083b20(&pppuStack_2d8);
    FUN_103440a08();
    func_0x000107c613fc();
    *(ulong ****)((long)param_2 + 0x18) = pppuStack_300;
    *(ulong ****)((long)param_2 + 0x20) = in_stack_fffffffffffffcf0;
    *(ulong ****)((long)param_2 + 0x28) = in_stack_fffffffffffffce0;
    *(ulong *****)((long)param_2 + 0x30) = in_stack_fffffffffffffcd0;
    unaff_x21 = (code *)pppuStack_2c8;
    unaff_x22 = (ulong ****)pppuStack_2c0;
    unaff_x24 = (ulong ****)pppuStack_300;
    unaff_x26 = (code *)pppuStack_2d8;
    unaff_x27 = (ulong ****)pppuStack_2d0;
  case (ulong ****)0x48:
    *(ulong ****)((long)param_2 + 0x38) = pppuStack_2e0;
    *(ulong ****)((long)param_2 + 0x40) = pppuStack_2e8;
    *(ulong *****)((long)param_2 + 0x48) = unaff_x23;
    *(ulong *****)((long)param_2 + 0x50) = unaff_x22;
    *(code **)((long)param_2 + 0x58) = unaff_x21;
    *(ulong *****)((long)param_2 + 0x60) = unaff_x27;
    *(code **)((long)param_2 + 0x68) = unaff_x26;
  case (ulong ****)0x41:
  case (ulong ****)0x61:
  case (ulong ****)0x81:
  case (ulong ****)0xa9:
    param_2 = (char *)unaff_x24;
    FUN_10345da28();
    param_3 = (ulong ****)0x30;
    func_0x000107c613fc();
  case (ulong ****)0x1d:
  case (ulong ****)0x2d:
    goto code_r0x000107c61174;
  case (ulong ****)0x68:
    param_2 = (char *)unaff_x23;
    goto code_r0x000107c61174;
  case (ulong ****)0x69:
    unaff_x22 = (ulong ****)param_2;
    break;
  case (ulong ****)0x6b:
    func_0x000107c613fc();
    unaff_x20[4] = (ulong ***)param_3;
    unaff_x20[5] = (ulong ***)param_4;
    unaff_x20[6] = param_5;
    ppppuVar8 = (ulong ****)&UNK_10da3fdf0;
    func_0x0001000285a8(0x112e48e78,&UNK_10da3fdf0);
    func_0x000107c610f8();
    param_2 = (char *)param_3;
    param_3 = ppppuVar8;
    goto code_r0x000107c61174;
  case (ulong ****)0x70:
    param_2 = (char *)unaff_x20[2];
    param_3 = (ulong ****)unaff_x20[3];
    param_4 = (ulong ****)unaff_x20[4];
    param_5 = unaff_x20[5];
    param_6 = unaff_x20[6];
    param_7 = unaff_x20[7];
    param_8 = unaff_x20[8];
    param_9 = unaff_x20[9];
    in_register_00005008 = unaff_x20[0xb];
    param_1 = unaff_x20[10];
    in_register_00005028 = unaff_x20[0xd];
  case (ulong ****)0x50:
    pppuStack_2e8 = unaff_x20[0x19];
    pppuStack_2f0 = unaff_x20[0x18];
    pppuStack_2e0 = unaff_x20[0x1a];
    ppuStack_360 = (ulong **)param_1;
    pppuStack_358 = in_register_00005008;
    pppuStack_348 = in_register_00005028;
    func_0x00010344c5cc(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  case (ulong ****)0x10:
    auVar51._8_8_ = param_3;
    auVar51._0_8_ = param_2;
    return auVar51;
  case (ulong ****)0x87:
    break;
  case (ulong ****)0x88:
    func_0x000107c61174();
    ppppuVar8 = unaff_x22;
    func_0x00010345bd84();
    *(ulong *****)((long)unaff_x21 + 0x10) = ppppuVar8;
    func_0x000107c6157c();
    FUN_10345bff0();
    func_0x000107c61574(ppppuVar8);
    param_3 = unaff_x24;
    break;
  case (ulong ****)0x8a:
    func_0x000107c61170();
    param_2 = (char *)unaff_x26;
  case (ulong ****)0x66:
  case (ulong ****)0x86:
  case (ulong ****)0xee:
    unaff_x22 = (ulong ****)param_2;
    break;
  case (ulong ****)0x8c:
  case (ulong ****)0xb1:
    func_0x000107c61580(param_2,3);
    uVar24 = 0x103440a58;
    pppuVar26 = (ulong ***)0x0;
    func_0x0001005d8744(0,0x103440a58,param_2,FUN_103440a5c,param_2,FUN_103440a84,param_2);
    *(ulong ****)unaff_x21 = pppuVar26;
    *(undefined ***)((long)unaff_x21 + 8) = &PTR_DAT_110711948;
    auVar44._8_8_ = uVar24;
    auVar44._0_8_ = pppuVar26;
    return auVar44;
  case (ulong ****)0x8d:
  case (ulong ****)0xb2:
    auVar43._8_8_ = param_3;
    auVar43._0_8_ = param_2;
    return auVar43;
  case (ulong ****)0x8e:
  case (ulong ****)0xb3:
    param_2 = (char *)unaff_x24;
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    auVar54._8_8_ = param_3;
    auVar54._0_8_ = param_2;
    return auVar54;
  case (ulong ****)0x8f:
  case (ulong ****)0xb4:
    ppppuVar8 = (ulong ****)param_2;
    FUN_103442c74();
    uVar24 = 0x20;
    func_0x000107c613fc();
    FUN_103442a18(pppuStack_358);
    *(ulong *****)param_2 = ppppuVar8;
    auVar49._8_8_ = uVar24;
    auVar49._0_8_ = pppuStack_358;
    return auVar49;
  case (ulong ****)0xac:
    auVar46._8_8_ = param_3;
    auVar46._0_8_ = param_2;
    return auVar46;
  case (ulong ****)0xb0:
  case (ulong ****)0xe9:
  case (ulong ****)0xf1:
  case (ulong ****)0xf7:
    func_0x000107c5a49c();
    unaff_x22 = unaff_x24;
    break;
  case (ulong ****)0xb8:
    func_0x000107c6157c();
    func_0x000107c6157c(in_stack_fffffffffffffcb0);
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    ppppuVar8 = in_stack_fffffffffffffcc8;
  case (ulong ****)0xc0:
    func_0x000107c6157c(ppppuVar8);
    ppppuVar8 = in_stack_fffffffffffffcd8;
  case (ulong ****)0x98:
    func_0x000107c6157c(ppppuVar8);
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(in_stack_fffffffffffffcd0);
    func_0x000107c6157c(in_stack_fffffffffffffce0);
    func_0x000107c6157c(in_stack_fffffffffffffce8);
    func_0x000107c6157c(in_stack_fffffffffffffcf0);
    func_0x000107c6157c(in_stack_fffffffffffffcf8);
    func_0x000107c6157c(pppuStack_300);
    func_0x000107c6157c(in_stack_fffffffffffffd08);
    func_0x000107c6157c(pppuStack_2f0);
    func_0x000107c6157c(pppuStack_2e8);
    func_0x000107c6157c(pppuStack_2e0);
    func_0x000107c6157c(ppuStack_88);
    func_0x000107c6157c(pcStack_80);
    pppuVar26 = (ulong ***)&stack0xffffffffffffff88;
    func_0x000107c61154();
    *in_stack_fffffffffffffcc0 = pppuVar26;
    auVar50._8_8_ = unaff_x24;
    auVar50._0_8_ = pppuVar26;
    return auVar50;
  case (ulong ****)0xc5:
  case (ulong ****)0xc9:
  case (ulong ****)0xcd:
  case (ulong ****)0xd1:
  case (ulong ****)0xd5:
    unaff_x20 = (ulong ****)param_2;
    goto SUB_107c6145c;
  case (ulong ****)0xc6:
    unaff_x22 = (ulong ****)param_2;
    break;
  case (ulong ****)0xc8:
  case (ulong ****)0xd0:
    func_0x000107c613fc();
    *(ulong *****)((long)unaff_x21 + 0x18) = unaff_x27;
    func_0x000107c61614((ulong ****)((long)unaff_x21 + 0x10));
    uVar24 = 0x1034268fc;
    ppppuVar8 = (ulong ****)unaff_x21;
    (*(code *)(*(ulong ****)param_2)[0xc])(0x1034268fc);
    func_0x000107c61574(unaff_x21);
    uVar23 = uVar24;
    func_0x000107c614f0(uVar24);
    (*(code *)ppppuVar8[2])();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar24);
    auVar57._8_8_ = uVar23;
    auVar57._0_8_ = uVar24;
    return auVar57;
  case (ulong ****)0xcc:
    ppppuVar8 = (ulong ****)0x0;
    func_0x0001000c6560();
    ppppuVar16 = unaff_x20;
    unaff_x21 = (code *)param_4;
    unaff_x22 = param_3;
    unaff_x23 = (ulong ****)param_2;
  case (ulong ****)0xc4:
    func_0x000107c613fc();
    func_0x0001000c6580();
    ppppuVar16[3] = (ulong ***)unaff_x22;
    ppppuVar16[4] = (ulong ***)ppppuVar8;
    ppppuVar16[2] = (ulong ***)unaff_x23;
    func_0x000107c615f0(unaff_x23);
    FUN_103425d90(unaff_x21);
    param_3 = (ulong ****)&UNK_10d920c20;
    func_0x0001000285a8(0x112d59e78,&UNK_10d920c20);
    func_0x000107c5e3e4(unaff_x21);
    func_0x000107c61180();
    func_0x0001000b637c();
    unaff_x22 = (ulong ****)unaff_x21;
    break;
  case (ulong ****)0xce:
    ppppuVar8 = (ulong ****)param_2;
    FUN_103428684();
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(ulong *****)param_2 = ppppuVar8;
    auVar32._8_8_ = param_3;
    auVar32._0_8_ = ppppuVar8;
    return auVar32;
  case (ulong ****)0xd4:
SUB_107c6145c:
    uVar24 = 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)();
    auVar56._8_8_ = uVar24;
    auVar56._0_8_ = unaff_x20;
    return auVar56;
  case (ulong ****)0xd6:
    func_0x0001000285a8((ulong ****)((long)param_2 + 0xd20),&UNK_10dbc3908);
    uVar24 = 0x1034286e4;
    uVar23 = 0;
    func_0x0001000823a8(0x1034286e4,0);
    auVar31._8_8_ = uVar23;
    auVar31._0_8_ = uVar24;
    return auVar31;
  case (ulong ****)0xd8:
    auVar35._8_8_ = param_3;
    auVar35._0_8_ = param_2;
    return auVar35;
  case (ulong ****)0xd9:
    func_0x000107c61170();
    (*(code *)in_stack_fffffffffffffcd8[1])();
    unaff_x22 = (ulong ****)unaff_x26;
    param_3 = (ulong ****)unaff_x25;
    break;
  case (ulong ****)0xe0:
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    pcVar28 = pcStack_70;
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    pcVar28 = pcStack_70;
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    pcVar28 = pcStack_70;
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    pcVar28 = pcStack_70;
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    pcVar28 = pcStack_70;
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    pcVar28 = pcStack_70;
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    pcVar28 = pcStack_70;
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcVar28);
    func_0x000100083b20(&pcStack_70);
    func_0x000100087c34(&stack0xffffffffffffff88);
    func_0x000107c61574(pcStack_70);
    *(code **)(in_stack_fffffffffffffce8 + _DAT_112f68888) = unaff_x26;
    *(ulong ****)(in_stack_fffffffffffffce8 + _DAT_112f68890) = in_stack_fffffffffffffce0;
    param_3 = (ulong ****)PTR_s_init_1125d9248;
    func_0x000107c61154(&stack0xfffffffffffffd08,PTR_s_init_1125d9248);
    unaff_x22 = in_stack_fffffffffffffcf8;
    break;
  case (ulong ****)0xe6:
    func_0x000107c5a49c();
    unaff_x22 = (ulong ****)unaff_x26;
    break;
  case (ulong ****)0xe8:
    func_0x000107c61170(in_stack_fffffffffffffcb0);
    unaff_x22 = in_stack_fffffffffffffcc0;
    break;
  case (ulong ****)0xeb:
    auVar47._8_8_ = param_3;
    auVar47._0_8_ = param_2;
    return auVar47;
  case (ulong ****)0xed:
    func_0x000100082720(param_2,0x41,2);
    func_0x0001000285a8(0x112f69048,&UNK_10dbc6880);
    func_0x000107c6157c();
    ppppuVar8 = (ulong ****)0x10343f270;
    func_0x0001000823a8();
    func_0x000100082720("LensCarouselSnapEditorActivatorDependenciesServiceProviderWrapperServiceProvider"
                        ,0x50,2);
    func_0x0001000285a8(0x112f69050,&UNK_10dbc6540);
    func_0x000107c6157c();
    pcVar7 = (code *)0x10343f278;
    func_0x0001000823a8();
    pcVar28 = 
    "LensCarouselSnapEditorLensFeaturesVisibilityControllerServiceProviderWrapperServiceProvider";
    pcStack_c0 = pcVar7;
    func_0x000100082720("LensCarouselSnapEditorLensFeaturesVisibilityControllerServiceProviderWrapperServiceProvider"
                        ,0x5b,2);
    FUN_10344ce40();
    ppuStack_c8 = (ulong **)pcVar28;
  case (ulong ****)0x30:
  case (ulong ****)0x46:
  case (ulong ****)0xae:
    param_2 = "AdAttachmentHandlerScopeExposerSubjectServiceProvider";
  case (ulong ****)0x20:
    func_0x000100082720(param_2,0x35,2);
    FUN_10344ce8c();
    pcVar28 = "PlusSubscribeScopeExposerSubjectServiceProvider";
    pppuStack_d0 = (ulong ***)param_2;
    func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
    FUN_10344ced8();
    pcStack_d8 = pcVar28;
    func_0x000100082720("SCAdReportScopeExposerSubjectServiceProvider",0x2c,2);
    func_0x00010344cf58();
    pcVar28 = "SCLensCarouselScopeExposerSubjectServiceProvider";
    func_0x000100082720("SCLensCarouselScopeExposerSubjectServiceProvider",0x30,2);
    FUN_10344cfa4();
    pppuStack_a8 = (ulong ***)pcVar28;
    func_0x000100082720("SCMemoriesPickerV2ScopeExposerSubjectServiceProvider",0x34,2);
    func_0x0001000285a8(0x112f69058,&UNK_10dbc7490);
    puVar10 = &UNK_110656410;
    func_0x000107c613fc(&UNK_110656410,0x40,7);
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(ulong *****)(puVar10 + 0x18) = unaff_x27;
    *(ulong *****)(puVar10 + 0x20) = unaff_x24;
    *(ulong *****)(puVar10 + 0x28) = unaff_x28;
    *(ulong *****)(puVar10 + 0x30) = unaff_x22;
    *(ulong *****)(puVar10 + 0x38) = unaff_x23;
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c();
    ppppuVar11 = (ulong ****)0x10343f280;
    func_0x0001000823a8(0x10343f280,puVar10);
    func_0x000100082720("SCLensProcessingSnapEditorIntegrationEntryPointWrapperServiceProvider",0x45
                        ,2);
    func_0x0001000285a8(0x112f69060,&UNK_10dbc6550);
    func_0x000107c6157c();
    uVar24 = 0x10343f28c;
    func_0x0001000823a8();
    func_0x000100082720("SCLensUIUpdateOnSnapEditorServiceProviderWrapperServiceProvider",0x3f,2);
    func_0x0001000285a8(0x112f69068,&UNK_10dbc77e0);
    puVar10 = &UNK_110656438;
    func_0x000107c613fc(&UNK_110656438,0x40,7);
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(ulong *****)(puVar10 + 0x18) = unaff_x22;
    *(ulong ***)(puVar10 + 0x20) = ppuStack_e8;
    *(ulong ****)(puVar10 + 0x28) = pppuStack_e0;
    *(code **)(puVar10 + 0x30) = unaff_x25;
    *(undefined8 *)(puVar10 + 0x38) = param_16;
    func_0x000107c6157c();
    func_0x000107c6157c();
    func_0x000107c6157c(ppuStack_e8);
    func_0x000107c6157c(pppuStack_e0);
    func_0x000107c6157c();
    func_0x000107c6157c(param_16);
    uVar23 = 0x10343f294;
    func_0x0001000823a8(0x10343f294,puVar10);
    uStack_f8 = uVar23;
    func_0x000100082720("SCSnapEditorFilterDataServiceProviderWrapperServiceProvider",0x3b,2);
    func_0x0001000285a8(0x112f69070,&UNK_10dbc6560);
    func_0x000107c6157c(ppppuVar8);
    pppuVar26 = (ulong ***)0x10343f2a0;
    func_0x0001000823a8(0x10343f2a0,ppppuVar8);
    ppuStack_e8 = (ulong **)pppuVar26;
    func_0x000100082720("SCSnapEditorScopedLensCarouselInScopeActivatorDependenciesServicesServiceProvider"
                        ,0x51,2);
    func_0x0001000285a8(0x112f69078,&UNK_10dbc6568);
    ppuVar2 = ppuStack_b8;
    func_0x000107c6157c(ppuStack_b8);
    param_23 = (ulong ****)0x10343f2a8;
    func_0x0001000823a8(0x10343f2a8,ppuVar2);
    func_0x000100082720("SCSnapEditorScopedLensCarouselLayoutServicesServiceProvider",0x3b,2);
    func_0x0001000285a8(0x112f69080,&UNK_10dbc6570);
    pcVar7 = pcStack_c0;
    func_0x000107c6157c(pcStack_c0);
    uVar23 = 0x10343f2b0;
    func_0x0001000823a8(0x10343f2b0,pcVar7);
    uStack_f0 = uVar23;
    func_0x000100082720("SCSnapEditorScopedLensFeaturesVisibilityControllerServicesServiceProvider",
                        0x49,2);
    func_0x0001000285a8(0x112f69088,&UNK_10dbc6578);
    uStack_48 = uVar24;
    func_0x000107c6157c(uVar24);
    unaff_x20 = (ulong ****)0x10343f2b8;
    func_0x0001000823a8(0x10343f2b8,uVar24);
    func_0x000100082720("SCSnapEditorScopedLensUIUpdateServicesServiceProvider",0x35,2);
    ppuStack_88 = ppuStack_c8;
    FUN_10344ce80();
    func_0x000100082720("AdAttachmentHandlerScopeExposerObservableServiceProvider",0x38,2);
    ppppuVar12 = (ulong ****)pppuStack_d0;
    FUN_10344cecc();
    func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
    pcVar28 = pcStack_d8;
    FUN_10344cf18();
    pcStack_70 = pcVar28;
    func_0x000100082720("SCAdReportScopeExposerObservableServiceProvider",0x2f,2);
    ppppuVar9 = unaff_x24;
    FUN_10344cf98();
    pppuStack_a8 = (ulong ***)ppppuVar9;
    func_0x000100082720("SCLensCarouselScopeExposerObservableServiceProvider",0x33,2);
    ppppuVar13 = (ulong ****)pppuStack_a8;
    FUN_10344d030();
    func_0x000100082720("SCMemoriesPickerV2ScopeExposerObservableServiceProvider",0x37,2);
    func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
    pcVar7 = FUN_10343cc18;
    func_0x0001000823a8(FUN_10343cc18,0);
    pcStack_50 = pcVar7;
    func_0x000100082720("SCSnapEditorScopedServicesCleanupRelayServiceProvider",0x35,2);
    func_0x0001000285a8(0x112f69090,&UNK_10dbc7d20);
    puVar10 = &UNK_110656460;
    func_0x000107c613fc(&UNK_110656460,0x20,7);
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(code **)(puVar10 + 0x18) = pcStack_80;
    func_0x000107c6157c();
    func_0x000107c6157c(pcStack_80);
    uVar24 = 0x10343f2c0;
    func_0x0001000823a8(0x10343f2c0,puVar10);
    uStack_68 = uVar24;
    func_0x000100082720("SnapEditorCTLensToolSessionManagerServiceProviderWrapperServiceProvider",
                        0x47,2);
    func_0x0001000285a8(0x112f69098,&UNK_10dbc6580);
    func_0x000107c6157c(uVar24);
    uStack_90 = 0x10343f2c8;
    func_0x0001000823a8(0x10343f2c8,uVar24);
    func_0x000100082720("SnapEditorCTLensToolSessionManagerServicesServiceProvider",0x39,2);
    func_0x0001000285a8(0x112f690a0,&UNK_10dbc7ef0);
    puVar10 = &UNK_110656488;
    func_0x000107c613fc(&UNK_110656488,0x20,7);
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(undefined8 *)(puVar10 + 0x18) = uStack_90;
    func_0x000107c6157c();
    func_0x000107c6157c(uStack_90);
    ppppuVar9 = (ulong ****)0x10343f2d0;
    func_0x0001000823a8(0x10343f2d0,puVar10);
    pppuStack_e0 = (ulong ***)ppppuVar9;
    func_0x000100082720("SnapEditorCTLensToolSessionResetEntryPointWrapperServiceProvider",0x40,2);
    func_0x0001000285a8(0x112f690a8,&UNK_10dbc6590);
    puVar10 = &UNK_1106564b0;
    func_0x000107c613fc(&UNK_1106564b0,0x40,7);
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(ulong *****)(puVar10 + 0x18) = param_20;
    *(ulong *****)(puVar10 + 0x20) = unaff_x27;
    *(undefined8 *)(puVar10 + 0x28) = uStack_110;
    *(undefined8 *)(puVar10 + 0x30) = param_16;
    *(ulong *****)(puVar10 + 0x38) = param_23;
    func_0x000107c6157c();
    func_0x000107c6157c(param_16);
    func_0x000107c6157c(param_20);
    func_0x000107c6157c(unaff_x27);
    func_0x000107c6157c(uStack_110);
    func_0x000107c6157c(param_23);
    param_27 = 0x10343f2d8;
    func_0x0001000823a8(0x10343f2d8,puVar10);
    func_0x000100082720("SnapEditorFilterIconServiceProviderWrapperServiceProvider",0x39,2);
    func_0x0001000285a8(0x112f690b0,&UNK_10dbc8230);
    puVar10 = &UNK_1106564d8;
    func_0x000107c613fc(&UNK_1106564d8,0x20,7);
    pppuVar26 = pppuStack_a0;
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(ulong ****)(puVar10 + 0x18) = pppuStack_a0;
    func_0x000107c6157c();
    func_0x000107c6157c(pppuVar26);
    uVar24 = 0x10343f2e4;
    func_0x0001000823a8(0x10343f2e4,puVar10);
    uStack_110 = uVar24;
    func_0x000100082720("SnapEditorLensCarouselSchedulerServiceProviderWrapperServiceProvider",0x44,
                        2);
    func_0x0001000285a8(0x112f690b8,&UNK_10dbc65a0);
    puVar10 = &UNK_110656500;
    func_0x000107c613fc(&UNK_110656500,0x20,7);
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(ulong *****)(puVar10 + 0x18) = unaff_x28;
    func_0x000107c6157c();
    func_0x000107c6157c(unaff_x28);
    func_0x0001000823a8(0x10343f2ec,puVar10);
    func_0x000100082720("SnapEditorMemoriesLensWorkflowEntryPointWrapperServiceProvider",0x3e,2);
    func_0x0001000285a8(0x112f690c0,&UNK_10dbc8f30);
    in_stack_ffffffffffffff50 = unaff_x24;
    in_stack_ffffffffffffff68 = unaff_x27;
    unaff_x24 = ppppuVar8;
  case (ulong ****)0xe3:
    puVar10 = &UNK_110656528;
    func_0x000107c613fc(&UNK_110656528,0x20,7);
    *(code **)(puVar10 + 0x10) = unaff_x21;
    *(undefined8 *)(puVar10 + 0x18) = param_28;
    func_0x000107c6157c();
    func_0x000107c6157c(param_28);
    param_28 = 0x10343f2f4;
    func_0x0001000823a8(0x10343f2f4,puVar10);
  case (ulong ****)0xea:
    func_0x000100082720("SnapEditorScopedLensCarouselSettingsServiceProviderWrapperServiceProvider",
                        0x49,2);
    func_0x0001000285a8(0x112f690c8,&UNK_10dbc65b0);
    unaff_x22 = (ulong ****)&UNK_110656550;
    func_0x000107c613fc(&UNK_110656550,0x58,7);
    unaff_x22[2] = (ulong ***)unaff_x21;
    unaff_x22[3] = (ulong ***)param_10;
    unaff_x25 = (code *)param_10;
    unaff_x26 = (code *)param_22;
    in_stack_ffffffffffffff88 = (ulong ****)unaff_x21;
    unaff_x21 = (code *)ppppuVar13;
  case (ulong ****)0x6a:
  case (ulong ****)0x89:
    ppuVar2 = ppuStack_b8;
    unaff_x22[4] = (ulong ***)unaff_x26;
    unaff_x22[5] = (ulong ***)param_11;
    unaff_x22[6] = param_17;
    unaff_x22[7] = (ulong ***)ppuStack_88;
    unaff_x22[8] = (ulong ***)in_stack_ffffffffffffff68;
    unaff_x22[9] = (ulong ***)ppuStack_b8;
    unaff_x22[10] = (ulong ***)ppppuVar12;
    pppuStack_60 = (ulong ***)ppppuVar12;
    func_0x000107c6157c();
    func_0x000107c6157c(in_stack_ffffffffffffff68);
    func_0x000107c6157c(unaff_x25);
    func_0x000107c6157c(unaff_x26);
    func_0x000107c6157c(param_11);
    func_0x000107c6157c(param_17);
    func_0x000107c6157c(ppuStack_88);
    func_0x000107c6157c(ppuVar2);
    func_0x000107c6157c(ppppuVar12);
    ppuStack_88 = (ulong **)FUN_10343f2fc;
    func_0x0001000823a8(FUN_10343f2fc,unaff_x22);
    func_0x000100082720("SnapEditorScopedLensPlusPaywallPresentationServiceProviderWrapperServiceProvider"
                        ,0x50,2);
    func_0x0001000285a8(0x112f690d0,&UNK_10dbc9570);
    puVar10 = &UNK_110656578;
    func_0x000107c613fc(&UNK_110656578,0x40,7);
    pcVar28 = pcStack_70;
    *(ulong *****)(puVar10 + 0x10) = in_stack_ffffffffffffff88;
    *(code **)(puVar10 + 0x18) = param_21;
    *(undefined8 *)(puVar10 + 0x20) = uStack_90;
    *(ulong ****)(puVar10 + 0x28) = param_14;
    *(code **)(puVar10 + 0x30) = pcStack_80;
    *(char **)(puVar10 + 0x38) = pcStack_70;
    func_0x000107c6157c();
    func_0x000107c6157c(param_21);
    func_0x000107c6157c(uStack_90);
    func_0x000107c6157c(param_14);
    func_0x000107c6157c(pcStack_80);
    func_0x000107c6157c(pcVar28);
    pcStack_80 = FUN_10343f37c;
    func_0x0001000823a8(FUN_10343f37c,puVar10);
    func_0x000100082720("SnapEditorScopedSponsoredLensInfoActionSheetNavigationServiceProviderWrapperServiceProvider"
                        ,0x5b,2);
    func_0x0001000285a8(0x112f690d8,&UNK_10dbc65c0);
    puVar10 = &UNK_1106565a0;
    func_0x000107c613fc(&UNK_1106565a0,0x60,7);
    *(ulong *****)(puVar10 + 0x10) = in_stack_ffffffffffffff88;
    *(ulong *****)(puVar10 + 0x18) = in_stack_ffffffffffffff68;
    *(undefined8 *)(puVar10 + 0x20) = uStack_90;
    *(code **)(puVar10 + 0x28) = param_19;
    *(ulong ****)(puVar10 + 0x30) = param_24;
    *(ulong ****)(puVar10 + 0x38) = param_14;
    *(ulong *****)(puVar10 + 0x40) = param_26;
    *(ulong *****)(puVar10 + 0x48) = param_29;
    *(undefined8 *)(puVar10 + 0x50) = uStack_100;
    *(ulong ***)(puVar10 + 0x58) = ppuStack_88;
    func_0x000107c6157c(in_stack_ffffffffffffff88);
    func_0x000107c6157c(in_stack_ffffffffffffff68);
    func_0x000107c6157c(uStack_90);
    func_0x000107c6157c(param_14);
    func_0x000107c6157c(param_19);
    func_0x000107c6157c(param_24);
    func_0x000107c6157c(param_26);
    func_0x000107c6157c(param_29);
    func_0x000107c6157c(uStack_100);
    func_0x000107c6157c(ppuStack_88);
    pcVar7 = FUN_10343f39c;
    func_0x0001000823a8(FUN_10343f39c,puVar10);
    func_0x000100082720("SponsoredLensSnapEditorCTAImplEntryPointWrapperServiceProvider",0x3e,2);
    func_0x0001000285a8(0x112f690e0,&UNK_10dbc65c8);
    uVar24 = uStack_f8;
    func_0x000107c6157c(uStack_f8);
    param_19 = FUN_10343f3d0;
    func_0x0001000823a8(FUN_10343f3d0,uVar24);
    func_0x000100082720("SCSnapEditorFilterDataProviderServicesServiceProvider",0x35,2);
    func_0x0001000285a8(0x112f690e8,&UNK_10dbc65d0);
    pcStack_c0 = pcVar7;
    func_0x000107c6157c(pcVar7);
    in_stack_ffffffffffffff68 = (ulong ****)0x10343f3d8;
    func_0x0001000823a8(0x10343f3d8,pcVar7);
    func_0x000100082720("SCSnapEditorScopedLensCTAHandlingServicesServiceProvider",0x38,2);
    func_0x0001000285a8(0x112f690f0,&UNK_10dbc65d8);
    uVar23 = uStack_110;
    func_0x000107c6157c(uStack_110);
    uVar24 = 0x10343f3e0;
    func_0x0001000823a8(0x10343f3e0,uVar23);
    uStack_f0 = uVar24;
    func_0x000100082720("SCSnapEditorScopedLensCarouselSchedulerServicesServiceProvider",0x3e,2);
    func_0x0001000285a8(0x112f690f8,&UNK_10dbc65e0);
    func_0x000107c6157c(param_28);
    unaff_x28 = (ulong ****)0x10343f3e8;
    func_0x0001000823a8(0x10343f3e8,param_28);
    func_0x000100082720("SCSnapEditorScopedLensCarouselSettingsServicesServiceProvider",0x3d,2);
    func_0x0001000285a8(0x112f69100,&UNK_10dbc65e8);
    func_0x000107c6157c(ppuStack_88);
    unaff_x22 = (ulong ****)0x10343f3f0;
    func_0x0001000823a8(0x10343f3f0,ppuStack_88);
    func_0x000100082720("SCSnapEditorScopedLensPlusPaywallPresentationServicesServiceProvider",0x44,
                        2);
    func_0x0001000285a8(0x112f69108,&UNK_10dbc65f0);
    func_0x000107c6157c(param_27);
    param_10 = (ulong ****)0x10343f3f8;
    func_0x0001000823a8(0x10343f3f8,param_27);
  case (ulong ****)0xec:
    param_2 = "SCSnapEditorScopedPreviewFilterIconProviderServiceServiceProvider";
    param_3 = (ulong ****)0x41;
    param_4 = (ulong ****)0x2;
    ppppuVar29 = unaff_x28;
    ppppuVar58 = unaff_x24;
    ppppuVar13 = (ulong ****)unaff_x21;
  case (ulong ****)0xf6:
    unaff_x28 = in_stack_ffffffffffffff88;
    func_0x000100082720(param_2,param_3,param_4);
    func_0x0001000285a8(0x112f69110,&UNK_10dbc65f8);
    func_0x000107c6157c(pcStack_80);
    unaff_x24 = (ulong ****)0x10343f400;
    func_0x0001000823a8(0x10343f400,pcStack_80);
    func_0x000100082720("SCSnapEditorScopedSponsoredLensInfoActionSheetNavigationServicesServiceProvider"
                        ,0x4f,2);
    func_0x0001000285a8(0x112f69118,&UNK_10dbc6600);
    puVar10 = &UNK_1106565c8;
    func_0x000107c613fc(&UNK_1106565c8,0x38,7);
    ppuVar2 = ppuStack_c8;
    *(ulong *****)(puVar10 + 0x10) = unaff_x28;
    *(ulong ****)(puVar10 + 0x18) = param_17;
    *(ulong *****)(puVar10 + 0x20) = unaff_x22;
    *(ulong ***)(puVar10 + 0x28) = ppuStack_c8;
    *(ulong *****)(puVar10 + 0x30) = param_22;
    pppuStack_e0 = (ulong ***)unaff_x22;
    func_0x000107c6157c();
    func_0x000107c6157c(param_22);
    func_0x000107c6157c(param_17);
    func_0x000107c6157c(unaff_x22);
    func_0x000107c6157c(ppuVar2);
    unaff_x22 = (ulong ****)0x10343f408;
    func_0x0001000823a8(0x10343f408,puVar10);
    func_0x000100082720("SnapEditorLensPlusPreviewServicesServiceProviderWrapperServiceProvider",
                        0x46,2);
    func_0x0001000285a8(0x112f69120,&UNK_10dbc8930);
    puVar10 = &UNK_1106565f0;
    func_0x000107c613fc(&UNK_1106565f0,0x28,7);
    pppuVar26 = pppuStack_a0;
    *(ulong *****)(puVar10 + 0x10) = unaff_x28;
    *(ulong ****)(puVar10 + 0x18) = pppuStack_a0;
    *(ulong *****)(puVar10 + 0x20) = ppppuVar29;
    func_0x000107c6157c(unaff_x28);
    func_0x000107c6157c(pppuVar26);
    func_0x000107c6157c(ppppuVar29);
    uVar24 = 0x10343f418;
    func_0x0001000823a8(0x10343f418,puVar10);
    func_0x000100082720("SnapEditorScopedLensCarouselPerformanceLoggerServiceProviderWrapperServiceProvider"
                        ,0x52,2);
    func_0x0001000285a8(0x112f69128,&UNK_10dbc6610);
    puVar10 = &UNK_110656618;
    func_0x000107c613fc(&UNK_110656618,0x28,7);
    *(ulong *****)(puVar10 + 0x10) = unaff_x28;
    *(ulong *****)(puVar10 + 0x18) = ppppuVar29;
    *(undefined8 **)(puVar10 + 0x20) = puStack_108;
    func_0x000107c6157c(unaff_x28);
    func_0x000107c6157c(ppppuVar29);
    func_0x000107c6157c(puStack_108);
    puVar14 = (undefined8 *)0x10343f424;
    func_0x0001000823a8(0x10343f424,puVar10);
    func_0x000100082720("SnapEditorScopedLensCarouselSessionServiceProviderWrapperServiceProvider",
                        0x48,2);
    func_0x0001000285a8(0x112f69130,&UNK_10dbc9350);
    puVar10 = &UNK_110656640;
    func_0x000107c613fc(&UNK_110656640,0x30,7);
    *(ulong *****)(puVar10 + 0x10) = unaff_x28;
    *(code **)(puVar10 + 0x18) = param_21;
    *(ulong *****)(puVar10 + 0x20) = in_stack_ffffffffffffff68;
    *(undefined8 *)(puVar10 + 0x28) = param_16;
    func_0x000107c6157c(unaff_x28);
    func_0x000107c6157c(param_16);
    func_0x000107c6157c(param_21);
    func_0x000107c6157c(in_stack_ffffffffffffff68);
    ppppuVar8 = (ulong ****)0x10343f430;
    func_0x0001000823a8(0x10343f430,puVar10);
    func_0x000100082720("SnapEditorScopedSponsoredLensCTAPresentingServiceProviderWrapperServiceProvider"
                        ,0x4f,2);
    func_0x0001000285a8(0x112f69138,&UNK_10dbc6620);
    uStack_100 = uVar24;
    func_0x000107c6157c(uVar24);
    uVar23 = 0x10343f43c;
    func_0x0001000823a8(0x10343f43c,uVar24);
    uStack_f8 = uVar23;
    func_0x000100082720("SCSnapEditorScopedLensCarouselPerformanceLoggerServicesServiceProvider",
                        0x46,2);
    func_0x0001000285a8(0x112f69140,&UNK_10dbc6628);
    puStack_108 = puVar14;
    func_0x000107c6157c(puVar14);
    ppppuVar15 = (ulong ****)0x10343f444;
    func_0x0001000823a8(0x10343f444,puVar14);
    func_0x000100082720("SCSnapEditorScopedLensCarouselSessionServicesServiceProvider",0x3c,2);
    func_0x0001000285a8(0x112f69148,&UNK_10dbc6630);
    func_0x000107c6157c(unaff_x22);
    ppppuVar16 = (ulong ****)0x10343f44c;
    unaff_x21 = param_21;
    param_11 = ppppuVar29;
    param_29 = unaff_x22;
    in_stack_ffffffffffffff88 = unaff_x28;
  case (ulong ****)0xe7:
    func_0x0001000823a8(ppppuVar16,unaff_x22);
    param_2 = "SnapEditorScopedFactoryServiceProvider.SCSnapEditorScopedServices";
    unaff_x25 = (code *)ppppuVar16;
    unaff_x22 = ppppuVar11;
  case (ulong ****)0x43:
    func_0x000100082720((ulong ****)((long)param_2 + 0xa70),0x38,2);
  case (ulong ****)0x18:
  case (ulong ****)0x28:
  case (ulong ****)0xe1:
    func_0x0001000285a8(0x112f69150,&UNK_10dbc6638);
    func_0x000107c6157c(ppppuVar8);
    unaff_x26 = (code *)0x10343f454;
    func_0x0001000823a8(0x10343f454,ppppuVar8);
    func_0x000100082720("SCSnapEditorScopedSponsoredLensCTAPresentingServicesServiceProvider",0x43,2
                       );
    param_2 = (char *)0x112f69158;
    param_3 = (ulong ****)&UNK_10dbc6000;
    param_26 = ppppuVar8;
  case (ulong ****)0xf3:
    func_0x0001000285a8(param_2,param_3 + 200);
  case (ulong ****)0x65:
  case (ulong ****)0x85:
    param_2 = &UNK_110656000;
    ppppuVar59 = unaff_x22;
  case (ulong ****)0x21:
    param_2 = (char *)((long)param_2 + 0x668);
    func_0x000107c613fc(param_2,0x48,7);
    *(ulong *****)((long)param_2 + 0x10) = unaff_x28;
    *(ulong *****)((long)param_2 + 0x18) = param_25;
    ppppuVar11 = param_25;
  case (ulong ****)0x1e:
  case (ulong ****)0x2e:
    unaff_x22 = in_stack_ffffffffffffff88;
    pppuVar26 = pppuStack_a0;
    *(ulong ****)((long)param_2 + 0x20) = pppuStack_a0;
    *(code **)((long)param_2 + 0x28) = unaff_x26;
    *(ulong *****)((long)param_2 + 0x30) = unaff_x24;
    *(code **)((long)param_2 + 0x38) = unaff_x25;
    *(code **)((long)param_2 + 0x40) = unaff_x21;
    pppuStack_218 = (ulong ***)unaff_x24;
    pppuStack_210 = (ulong ***)unaff_x25;
    pppuStack_d0 = (ulong ***)unaff_x26;
    func_0x000107c6157c(unaff_x28);
    func_0x000107c6157c(unaff_x21);
    func_0x000107c6157c(ppppuVar11);
    func_0x000107c6157c(pppuVar26);
    func_0x000107c6157c(unaff_x26);
    func_0x000107c6157c(unaff_x24);
    func_0x000107c6157c(unaff_x25);
    param_25 = (ulong ****)0x10343f45c;
    func_0x0001000823a8(0x10343f45c,param_2);
    func_0x000100082720("SCSnapEditorUCOViewServiceProviderWrapperServiceProvider",0x38,2);
    func_0x0001000285a8(0x112f69160,&UNK_10dbc6648);
    func_0x000107c6157c(param_25);
    pcVar28 = (char *)0x10343f470;
    func_0x0001000823a8(0x10343f470,param_25);
    func_0x000100082720("SCSnapEditorUCOViewServicesServiceProvider",0x2a,2);
    func_0x0001000285a8(0x112f69168,&UNK_10dbc6650);
    puVar10 = &UNK_110656690;
    func_0x000107c613fc(&UNK_110656690,0x20,7);
    *(ulong *****)(puVar10 + 0x10) = unaff_x28;
    *(ulong *****)(puVar10 + 0x18) = ppppuVar15;
    func_0x000107c6157c(unaff_x28);
    func_0x000107c6157c(ppppuVar15);
    param_24 = (ulong ***)0x10343f478;
    func_0x0001000823a8(0x10343f478,puVar10);
    func_0x000100082720("SnapEditorScopedLensCarouselEventsHandlingServiceProviderWrapperServiceProvider"
                        ,0x4f,2);
    func_0x0001000285a8(0x112f69170,&UNK_10dbc6658);
    func_0x000107c6157c(param_24);
    param_14 = (ulong ***)0x10343f480;
    func_0x0001000823a8(0x10343f480,param_24);
    func_0x000100082720("SCSnapEditorScopedLensCarouselEventsHandlingServicesServiceProvider",0x43,2
                       );
    func_0x0001000285a8(0x112f69178,&UNK_10dbc6660);
    puVar10 = &UNK_1106566b8;
    func_0x000107c613fc(&UNK_1106566b8,0x68,7);
    *(ulong *****)(puVar10 + 0x10) = unaff_x28;
    *(ulong ****)(puVar10 + 0x18) = param_12;
    *(ulong ****)(puVar10 + 0x20) = pppuVar26;
    *(undefined8 *)(puVar10 + 0x28) = uStack_90;
    *(ulong *****)(puVar10 + 0x30) = in_stack_ffffffffffffff50;
    *(ulong *****)(puVar10 + 0x38) = param_20;
    *(ulong *****)(puVar10 + 0x40) = param_15;
    *(code **)(puVar10 + 0x48) = param_21;
    *(ulong *****)(puVar10 + 0x50) = param_18;
    *(char **)(puVar10 + 0x58) = pcVar28;
    *(code **)(puVar10 + 0x60) = param_19;
    pcStack_d8 = pcVar28;
    func_0x000107c6157c(unaff_x28);
    func_0x000107c6157c(in_stack_ffffffffffffff50);
    func_0x000107c6157c(param_20);
    func_0x000107c6157c(param_21);
    func_0x000107c6157c(uStack_90);
    func_0x000107c6157c(pppuVar26);
    func_0x000107c6157c(param_12);
    func_0x000107c6157c(param_15);
    func_0x000107c6157c(param_18);
    func_0x000107c6157c(pcVar28);
    func_0x000107c6157c(param_19);
    param_21 = FUN_10343f488;
    func_0x0001000823a8(FUN_10343f488,puVar10);
    func_0x000100082720("SCSnapEditorSwipeFiltersServicesProviderWrapperServiceProvider",0x3e,2);
    func_0x0001000285a8(0x112f69180,&UNK_10dbc6668);
    func_0x000107c6157c(param_21);
    unaff_x21 = FUN_10343f4c4;
    func_0x0001000823a8(FUN_10343f4c4,param_21);
    func_0x000100082720("SCSnapEditorSwipeFiltersServicesServiceProvider",0x2f,2);
    func_0x0001000285a8(0x112f69188,&UNK_10dbc6670);
    puVar10 = &UNK_1106566e0;
    func_0x000107c613fc(&UNK_1106566e0,0x28,7);
    *(ulong *****)(puVar10 + 0x10) = unaff_x22;
    *(code **)(puVar10 + 0x18) = unaff_x21;
    *(ulong *****)(puVar10 + 0x20) = param_23;
    func_0x000107c6157c();
    func_0x000107c6157c(param_23);
    func_0x000107c6157c(unaff_x21);
    pcVar7 = FUN_10343f500;
    func_0x0001000823a8(FUN_10343f500,puVar10);
    param_2 = "SnapEditorScopedLensCarouselPreviewDependencyServiceProviderWrapperServiceProvider";
    param_3 = (ulong ****)0x52;
    param_4 = (ulong ****)0x2;
    unaff_x24 = param_23;
    in_stack_ffffffffffffff88 = unaff_x22;
    unaff_x30 = ppppuVar15;
  case (ulong ****)0x64:
  case (ulong ****)0x84:
    func_0x000100082720(param_2,param_3,param_4);
    func_0x0001000285a8(0x112f69190,&UNK_10dbc6aa0);
    puVar10 = &UNK_110656708;
    func_0x000107c613fc(&UNK_110656708,0x30,7);
    pppuVar26 = pppuStack_58;
    *(ulong *****)(puVar10 + 0x10) = unaff_x22;
    *(code **)(puVar10 + 0x18) = unaff_x21;
    *(ulong ****)(puVar10 + 0x20) = pppuStack_58;
    *(ulong *****)(puVar10 + 0x28) = param_10;
    func_0x000107c6157c();
    func_0x000107c6157c(unaff_x21);
    func_0x000107c6157c(pppuVar26);
    func_0x000107c6157c(param_10);
    ppppuVar8 = (ulong ****)0x10343f50c;
    func_0x0001000823a8(0x10343f50c,puVar10);
    param_2 = "LensCarouselSnapEditorDataProviderControllingServiceProviderWrapperServiceProvider";
    param_3 = (ulong ****)0x52;
    param_4 = (ulong ****)0x2;
    unaff_x25 = (code *)unaff_x22;
    param_18 = ppppuVar8;
    unaff_x29 = (ulong ****)unaff_x21;
  case (ulong ****)0x4b:
  case (ulong ****)0x6d:
    unaff_x21 = (code *)ppppuVar13;
    func_0x000100082720(param_2,param_3,param_4);
    func_0x0001000285a8(0x112f69198,&UNK_10dbc6680);
    func_0x000107c6157c(ppppuVar8);
    pppuVar26 = (ulong ***)0x10343f518;
    func_0x0001000823a8(0x10343f518,ppppuVar8);
    ppuStack_e8 = (ulong **)pppuVar26;
    func_0x000100082720("SCSnapEditorScopedLensCarouselDataProviderControllingServicesServiceProvider"
                        ,0x4c,2);
    func_0x0001000285a8(0x112f691a0,&UNK_10dbc6688);
    func_0x000107c6157c(pcVar7);
    unaff_x19 = 0x10343f520;
    func_0x0001000823a8(0x10343f520,pcVar7);
    func_0x000100082720("SCSnapEditorScopedLensCarouselPreviewDependencyServicesServiceProvider",
                        0x46,2);
    param_12 = param_14;
    func_0x000103692408(param_14,pppuVar26,ppuStack_e8);
    func_0x000100082720("OpaqueSnapEditorScopedLensCarouselServiceProvider",0x31,2);
    uVar24 = 0x112f691a8;
    func_0x0001000285a8(0x112f691a8,&UNK_10dbc6690);
    puVar10 = &UNK_110656730;
    uStack_100 = uVar24;
    func_0x000107c613fc(&UNK_110656730,0x70,7);
    pppuVar3 = pppuStack_a0;
    pppuVar26 = pppuStack_a8;
    uVar1 = uStack_f0;
    uVar24 = uStack_f8;
    *(code **)(puVar10 + 0x10) = unaff_x25;
    *(undefined8 *)(puVar10 + 0x18) = unaff_x19;
    *(ulong ****)(puVar10 + 0x20) = pppuStack_a0;
    *(undefined8 *)(puVar10 + 0x28) = uStack_f0;
    *(ulong *****)(puVar10 + 0x30) = param_11;
    *(undefined8 *)(puVar10 + 0x38) = uStack_f0;
    *(ulong *****)(puVar10 + 0x40) = unaff_x24;
    *(undefined8 *)(puVar10 + 0x48) = uStack_f8;
    *(ulong *****)(puVar10 + 0x50) = in_stack_ffffffffffffff68;
    *(undefined8 *)(puVar10 + 0x58) = param_13;
    *(ulong ****)(puVar10 + 0x60) = param_12;
    *(ulong ****)(puVar10 + 0x68) = pppuStack_a8;
    func_0x000107c6157c(unaff_x25);
    func_0x000107c6157c(unaff_x24);
    func_0x000107c6157c(pppuVar3);
    func_0x000107c6157c(param_11);
    func_0x000107c6157c(in_stack_ffffffffffffff68);
    func_0x000107c6157c(unaff_x19);
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar24);
    func_0x000107c6157c(param_13);
    func_0x000107c6157c(param_12);
    func_0x000107c6157c(pppuVar26);
    param_13 = 0x10343f528;
    func_0x0001000823a8(0x10343f528,puVar10);
    func_0x000100082720("SCLensInSnapEditorScopeEntryPointWrapperServiceProvider",0x37,2);
    func_0x0001000285a8(0x112f691b0,&UNK_10dbc6698);
    func_0x000107c6157c(param_13);
    uVar24 = 0x10343f534;
    func_0x0001000823a8(0x10343f534,param_13);
    uStack_100 = uVar24;
    func_0x000100082720("SCSnapEditorScopedLensCarouselManagementServicesServiceProvider",0x3f,2);
    uVar23 = 0x112f691b8;
    func_0x0001000285a8(0x112f691b8,&UNK_10dbc66a0);
    puVar10 = &UNK_110656758;
    ppuStack_220 = (ulong **)uVar23;
    func_0x000107c613fc(&UNK_110656758,0x70,7);
    *(ulong *****)(puVar10 + 0x10) = in_stack_ffffffffffffff88;
    *(undefined8 *)(puVar10 + 0x18) = uVar24;
    *(ulong *****)(puVar10 + 0x20) = unaff_x30;
    *(undefined8 *)(puVar10 + 0x28) = uVar1;
    *(undefined8 *)(puVar10 + 0x30) = unaff_x19;
    *(ulong *****)(puVar10 + 0x38) = unaff_x29;
    *(ulong *****)(puVar10 + 0x40) = param_20;
    *(ulong *****)(puVar10 + 0x48) = param_10;
    *(ulong ****)(puVar10 + 0x50) = pppuStack_58;
    *(undefined8 *)(puVar10 + 0x58) = uStack_90;
    *(ulong ****)(puVar10 + 0x60) = pppuStack_a0;
    *(ulong *****)(puVar10 + 0x68) = unaff_x23;
    func_0x000107c6157c();
    func_0x000107c6157c(param_20);
    func_0x000107c6157c(pppuStack_a0);
    func_0x000107c6157c(uStack_90);
    func_0x000107c6157c(unaff_x30);
    func_0x000107c6157c(unaff_x29);
    func_0x000107c6157c(pppuStack_58);
    func_0x000107c6157c(param_10);
    func_0x000107c6157c(unaff_x19);
    func_0x000107c6157c(uVar1);
    uVar24 = uStack_100;
    func_0x000107c6157c(uStack_100);
    func_0x000107c6157c(unaff_x23);
    unaff_x26 = FUN_10343f5b8;
    func_0x0001000823a8(FUN_10343f5b8,puVar10);
    func_0x000100082720("LensCarouselSnapEditorServicesEntryPointWrapperServiceProvider",0x3e,2);
    func_0x0001000285a8(0x112f691c0,&UNK_10dbc70c0);
    puVar10 = &UNK_110656780;
    func_0x000107c613fc(&UNK_110656780,0x30,7);
    pppuVar26 = pppuStack_e0;
    *(ulong *****)(puVar10 + 0x10) = in_stack_ffffffffffffff88;
    *(undefined8 *)(puVar10 + 0x18) = uVar24;
    *(ulong ****)(puVar10 + 0x20) = param_17;
    *(ulong ****)(puVar10 + 0x28) = pppuStack_e0;
    func_0x000107c6157c(in_stack_ffffffffffffff88);
    func_0x000107c6157c(param_17);
    func_0x000107c6157c(pppuVar26);
    func_0x000107c6157c(uVar24);
    unaff_x25 = FUN_10343f640;
    func_0x0001000823a8(FUN_10343f640,puVar10);
    func_0x000100082720("LensPreviewSnapEditorActionInterceptionServiceProviderWrapperServiceProvider"
                        ,0x4c,2);
    func_0x0001000285a8(0x112f691c8,&UNK_10dbc66b0);
    func_0x000107c6157c(unaff_x26);
    unaff_x22 = (ulong ****)0x10343f64c;
    func_0x0001000823a8(0x10343f64c,unaff_x26);
    pppuStack_58 = (ulong ***)unaff_x22;
    func_0x000100082720("SCSnapEditorCarouselServicesServiceProvider",0x2b,2);
    param_15 = (ulong ****)pcVar7;
    param_20 = (ulong ****)unaff_x26;
  case (ulong ****)0x32:
    func_0x0001000285a8(0x112e7d1a8,&UNK_10da879f8);
    func_0x000107c6157c(unaff_x25);
    uVar24 = 0x10343f654;
    pppuStack_a0 = (ulong ***)unaff_x25;
    func_0x0001000823a8(0x10343f654,unaff_x25);
    func_0x000100082720("LensPreviewActionInterceptionServicesServiceProvider",0x34,2);
    ppuStack_238 = ppuStack_200;
    ppuStack_230 = ppuStack_208;
    ppuStack_240 = (ulong **)pcStack_80;
    uStack_258 = ppuStack_1f8;
    uStack_280 = ppuStack_1f0;
    uStack_278 = uStack_90;
    uStack_290 = ppuStack_1d8;
    uStack_288 = ppuStack_1e8;
    uStack_298 = ppuStack_1d0;
    uStack_2b0 = ppuStack_1b0;
    uStack_2a8 = ppuStack_1b8;
    uStack_250 = ppuStack_1e0;
    ppuStack_248 = (ulong **)uStack_90;
    pppuStack_268 = pppuStack_60;
    ppuStack_270 = ppuStack_1c8;
    pppuStack_2c0 = pppuStack_a0;
    uStack_2b8 = ppuStack_1a8;
    pppuStack_2d0 = (ulong ***)ppuStack_1a0;
    pppuStack_2c8 = (ulong ***)param_22;
    pppuStack_2e0 = (ulong ***)ppuStack_190;
    pppuStack_2d8 = (ulong ***)ppuStack_198;
    pppuStack_2f0 = (ulong ***)ppuStack_180;
    pppuStack_2e8 = (ulong ***)ppuStack_188;
    pppuStack_348 = (ulong ***)ppuStack_148;
    ppuStack_360 = ppuStack_130;
    pppuStack_358 = (ulong ***)ppuStack_138;
    ppuVar17 = ppuStack_1c0;
    FUN_1036a3a54(ppuStack_1c0,uStack_128,uVar24,uStack_118,ppuStack_120,ppuStack_b8,uStack_110,
                  param_16);
    func_0x000100082720("SnapEditorSaberPluginScopedFactoryServiceProvider",0x31,2);
    uVar18 = ppuVar17;
    func_0x000103eca150();
    func_0x000100082720("SCSnapEditorPluginSaberServiceServiceProvider",0x2d,2);
    pppuStack_2e8 = (ulong ***)pcStack_d8;
    pppuStack_2e0 = (ulong ***)uStack_90;
    pppuStack_348 = param_14;
    pppuVar26 = (ulong ***)ppuStack_c8;
    pppuStack_358 = (ulong ***)in_stack_ffffffffffffff68;
    pppuStack_2f0 = (ulong ***)unaff_x29;
    FUN_10344c3b8(ppuStack_c8,param_12,pppuStack_d0,pcStack_d8,in_stack_ffffffffffffff50,
                  pppuStack_a8,unaff_x22,param_19);
    func_0x000100082720("SnapEditorScopeGraphBridgeServicesServiceProvider",0x31,2);
    func_0x0001000285a8(0x112f691d0,&UNK_10dbc66c0);
    puVar10 = &UNK_1106567a8;
    func_0x000107c613fc(&UNK_1106567a8,0x100,7);
    uVar6 = uStack_48;
    uVar4 = uStack_68;
    ppuVar2 = ppuStack_b8;
    pcVar7 = pcStack_c0;
    uVar1 = uStack_f8;
    uVar23 = uStack_110;
    *(ulong ***)(puVar10 + 0x10) = ppuStack_b8;
    *(ulong *****)(puVar10 + 0x18) = ppppuVar58;
    *(ulong *****)(puVar10 + 0x20) = param_18;
    *(code **)(puVar10 + 0x28) = pcStack_c0;
    *(code **)(puVar10 + 0x30) = unaff_x26;
    *(code **)(puVar10 + 0x38) = unaff_x25;
    *(undefined8 *)(puVar10 + 0x40) = param_13;
    *(ulong *****)(puVar10 + 0x48) = ppppuVar59;
    *(undefined8 *)(puVar10 + 0x50) = uStack_48;
    *(undefined8 *)(puVar10 + 0x58) = uStack_f8;
    *(ulong *****)(puVar10 + 0x60) = in_stack_ffffffffffffff88;
    *(code **)(puVar10 + 0x68) = pcStack_50;
    *(code **)(puVar10 + 0x70) = param_21;
    *(ulong *****)(puVar10 + 0x78) = param_25;
    *(undefined8 *)(puVar10 + 0x80) = uStack_68;
    *(ulong ****)(puVar10 + 0x88) = pppuStack_e0;
    *(undefined8 *)(puVar10 + 0x90) = param_27;
    *(undefined8 *)(puVar10 + 0x98) = uStack_110;
    *(ulong *****)(puVar10 + 0xa0) = param_29;
    *(ulong *****)(puVar10 + 0xa8) = in_stack_ffffffffffffff88;
    *(ulong ****)(puVar10 + 0xb0) = pppuVar26;
    *(ulong ****)(puVar10 + 0xb8) = param_24;
    *(undefined8 *)(puVar10 + 0xc0) = uStack_100;
    *(ulong *****)(puVar10 + 200) = param_15;
    *(undefined8 **)(puVar10 + 0xd0) = puStack_108;
    *(undefined8 *)(puVar10 + 0xd8) = param_28;
    *(ulong ***)(puVar10 + 0xe0) = ppuStack_88;
    *(ulong *****)(puVar10 + 0xe8) = param_26;
    *(code **)(puVar10 + 0xf0) = pcStack_80;
    *(code **)(puVar10 + 0xf8) = pcStack_c0;
    func_0x000107c6157c();
    func_0x000107c6157c(ppppuVar58);
    func_0x000107c6157c(ppuVar2);
    func_0x000107c6157c(pcVar7);
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(pcVar7);
    func_0x000107c6157c(uVar23);
    func_0x000107c6157c(param_28);
    func_0x000107c6157c(ppuStack_88);
    func_0x000107c6157c(param_27);
    func_0x000107c6157c(pcStack_80);
    func_0x000107c6157c(uStack_100);
    func_0x000107c6157c(puStack_108);
    func_0x000107c6157c(param_29);
    func_0x000107c6157c(param_26);
    func_0x000107c6157c(param_25);
    func_0x000107c6157c(param_24);
    func_0x000107c6157c(param_21);
    func_0x000107c6157c(param_18);
    func_0x000107c6157c(param_15);
    func_0x000107c6157c(param_13);
    func_0x000107c6157c(param_20);
    func_0x000107c6157c(pppuStack_a0);
    func_0x000107c6157c(ppppuVar59);
    pcVar5 = pcStack_50;
    func_0x000107c6157c(pcStack_50);
    func_0x000107c6157c(pppuStack_e0);
    func_0x000107c6157c(in_stack_ffffffffffffff88);
    func_0x000107c6157c(pppuVar26);
    pcVar7 = FUN_10343f65c;
    func_0x0001000823a8(FUN_10343f65c,puVar10);
    func_0x000100082720("SCSnapEditorScopeInitializationPluginRegistryServiceProvider",0x3c,2);
    func_0x0001000285a8(0x112f68fc8,&UNK_10dbc62f0);
    func_0x000107c6157c(pcVar7);
    pcVar19 = FUN_10343f6b8;
    func_0x0001000823a8(FUN_10343f6b8,pcVar7);
    func_0x000100082720("SCSnapEditorScopeInitializationServiceProvider",0x2e,2);
    func_0x0001000285a8(0x112f68fb8,&UNK_10dbc62e0);
    func_0x000107c6157c(pcVar19);
    uVar23 = 0x10343f6c0;
    func_0x0001000823a8(0x10343f6c0,pcVar19);
    func_0x000100082720("SCSnapEditorScopedServicesServiceProvider",0x29,2);
    func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
    puVar10 = &UNK_1106567d0;
    func_0x000107c613fc(&UNK_1106567d0,0x20,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar23;
    *(code **)(puVar10 + 0x18) = pcVar5;
    func_0x000107c6157c(pcVar5);
    pcVar20 = FUN_10343f6f4;
    func_0x0001000823a8(FUN_10343f6f4,puVar10);
    func_0x000107c61574(in_stack_ffffffffffffff88);
    func_0x000107c61574(ppuStack_b8);
    func_0x000107c61574(ppppuVar58);
    func_0x000107c61574(pcStack_c0);
    func_0x000107c61574(ppuStack_c8);
    func_0x000107c61574(pppuStack_d0);
    func_0x000107c61574(pcStack_d8);
    func_0x000107c61574(in_stack_ffffffffffffff50);
    func_0x000107c61574(pppuStack_a8);
    func_0x000107c61574(ppppuVar59);
    func_0x000107c61574(uStack_48);
    func_0x000107c61574(uStack_f8);
    func_0x000107c61574(ppuStack_e8);
    func_0x000107c61574(param_23);
    func_0x000107c61574(uStack_f0);
    func_0x000107c61574(unaff_x20);
    func_0x000107c61574(ppuStack_88);
    func_0x000107c61574(pppuStack_60);
    func_0x000107c61574(pcStack_70);
    func_0x000107c61574(pppuStack_a8);
    func_0x000107c61574(unaff_x21);
    func_0x000107c61574(pcVar5);
    func_0x000107c61574(uStack_68);
    func_0x000107c61574(pppuVar26);
    func_0x000107c61574(pppuStack_e0);
    func_0x000107c61574(param_27);
    func_0x000107c61574(uStack_110);
    func_0x000107c61574(in_stack_ffffffffffffff88);
    func_0x000107c61574(param_28);
    func_0x000107c61574(ppuStack_88);
    func_0x000107c61574(pcStack_80);
    func_0x000107c61574(pcStack_c0);
    func_0x000107c61574(param_19);
    func_0x000107c61574(in_stack_ffffffffffffff68);
    func_0x000107c61574(uStack_f0);
    func_0x000107c61574(param_11);
    func_0x000107c61574(pppuStack_e0);
    func_0x000107c61574(param_10);
    func_0x000107c61574(pppuStack_218);
    func_0x000107c61574(param_29);
    func_0x000107c61574(uStack_100);
    func_0x000107c61574(puStack_108);
    func_0x000107c61574(param_26);
    func_0x000107c61574(uStack_f8);
    func_0x000107c61574(unaff_x30);
    func_0x000107c61574(pppuStack_210);
    func_0x000107c61574(pppuStack_d0);
    func_0x000107c61574(param_25);
    func_0x000107c61574(pcStack_d8);
    func_0x000107c61574(param_24);
    func_0x000107c61574(param_14);
    func_0x000107c61574(param_21);
    func_0x000107c61574(unaff_x29);
    func_0x000107c61574(param_15);
    func_0x000107c61574(param_18);
    func_0x000107c61574(ppuStack_e8);
    func_0x000107c61574(unaff_x19);
    func_0x000107c61574(param_12);
    func_0x000107c61574(param_13);
    func_0x000107c61574(uStack_100);
    func_0x000107c61574(param_20);
    func_0x000107c61574(pppuStack_a0);
    func_0x000107c61574(pppuStack_58);
    func_0x000107c61574(uVar24);
    func_0x000107c61574(ppuVar17);
    func_0x000107c61574(uVar18);
    func_0x000107c61574(pppuVar26);
    func_0x000107c61574(pcVar7);
    func_0x000107c61574(pcVar19);
    pcVar28 = "SCSnapEditorScopeEntryPointProvider";
    uVar24 = 0x23;
    func_0x000100082720("SCSnapEditorScopeEntryPointProvider",0x23,2);
    *puStack_108 = pcVar20;
    auVar40._8_8_ = uVar24;
    auVar40._0_8_ = pcVar28;
    return auVar40;
  case (ulong ****)0xf0:
    func_0x000107c606a8();
    auVar37._8_8_ = param_3;
    auVar37._0_8_ = param_2;
    return auVar37;
  case (ulong ****)0xf4:
    func_0x000107c5a49c();
    unaff_x22 = unaff_x24;
    break;
  case (ulong ****)0xf5:
    param_3 = (ulong ****)0xeb0000000065706f;
    func_0x000107c5fadc(param_2,0xeb0000000065706f);
    func_0x000107c5a49c();
    unaff_x22 = (ulong ****)unaff_x26;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  auVar53._8_8_ = param_3;
  auVar53._0_8_ = unaff_x22;
  return auVar53;
}



/* Entry: 1034250c0; end: 103425133;  */

undefined8 FUN_1034250c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f67838;
  func_0x0001000285a8(0x112f67838,&UNK_10dbc32d8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103425134; end: 103425147;  */

undefined8 FUN_103425134(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(byte *)(param_1 + 3) - 3 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1,uVar1,param_1[2]);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 103425148; end: 10342520f;  */

undefined8 * FUN_103425148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_10341f5d0(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 103425210; end: 10342525b;  */

undefined8 * FUN_103425210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x00010341f5ec(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10342525c; end: 10342530f;  */

int FUN_10342525c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf2 < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xf3;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 0xe) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103425310; end: 10342552f;  */

long FUN_103425310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000103425428(param_3);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  return unaff_x20;
}



/* Entry: 103425530; end: 10342566b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103425530(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  uVar5 = *(ulong *)(*param_1 + _DAT_11306fcf8);
  if (uVar5 < 3) {
    iVar1 = (int)uVar5 + 10;
    uVar6 = *(undefined8 *)(*param_1 + _DAT_11306fd00);
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      func_0x00010341f5ec(uVar6,0,0,iVar1);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      lVar3 = *(long *)(param_2 + 0x18);
      func_0x000107c615f0(uVar2);
      func_0x000107c61574(param_2);
      func_0x000107c614f0(uVar2);
      lVar4 = 0x112f67000;
      func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      *(char *)(lVar4 + 0x38) = (char)iVar1;
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(uVar2);
      func_0x000107c61574(lVar4);
    }
  }
  return;
}



/* Entry: 10342566c; end: 1034256b7;  */

void FUN_10342566c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034256b8; end: 1034256bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034256b8(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(*param_1 + _DAT_11306fcf8);
  if (uVar5 < 3) {
    iVar1 = (int)uVar5 + 10;
    uVar6 = *(undefined8 *)(*param_1 + _DAT_11306fd00);
    func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61648();
    if (lVar4 == 0) {
      func_0x00010341f5ec(uVar6,0,0,iVar1);
    }
    else {
      uVar2 = *(undefined8 *)(lVar4 + 0x10);
      lVar3 = *(long *)(lVar4 + 0x18);
      func_0x000107c615f0(uVar2);
      func_0x000107c61574(lVar4);
      func_0x000107c614f0(uVar2);
      lVar4 = 0x112f67000;
      func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      *(char *)(lVar4 + 0x38) = (char)iVar1;
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(uVar2);
      func_0x000107c61574(lVar4);
    }
  }
  return;
}



/* Entry: 1034256c0; end: 103425807;  */

long FUN_1034256c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  uVar1 = param_3;
  func_0x000107c4d000(param_3);
  func_0x000107c61180();
  FUN_103425808();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(uVar1);
  return unaff_x20;
}



/* Entry: 103425808; end: 103425a47;  */

/* WARNING: Possible PIC construction at 0x0001034258ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342598c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034258f0) */
/* WARNING: Removing unreachable block (ram,0x000103425990) */

void FUN_103425808(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000285a8(0x112f67998,&UNK_10dbc3390);
  func_0x000107c4cff4();
  func_0x000107c61180();
  plVar1 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  puVar2 = &UNK_1106538b8;
  func_0x000107c613fc(&UNK_1106538b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar3 = 0x103425c78;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x103425c78);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  uVar4 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20),uVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 103425a48; end: 103425c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103425a48(double param_1,long *param_2,long param_3,long *param_4,undefined1 param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_88 [24];
  
  lVar11 = *param_2;
  lVar10 = *(long *)(lVar11 + *param_4);
  if (lVar10 != 0) {
    uVar8 = *(undefined8 *)(lVar11 + _DAT_11306fd38);
    uVar7 = ((undefined8 *)(lVar11 + _DAT_11306fd38))[1];
    puVar4 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c61434(uVar7);
    func_0x000107c61174(lVar10);
    func_0x000107c4223c();
    func_0x000107c51b38(puVar4);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103425c24);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103425c28);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103425c2c);
      (*pcVar3)();
    }
    func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    uVar9 = uVar7;
    if (param_3 != 0) {
      uVar1 = *(undefined8 *)(param_3 + 0x10);
      lVar2 = *(long *)(param_3 + 0x18);
      func_0x000107c615f0(uVar1);
      func_0x000107c61574(param_3);
      uVar5 = uVar1;
      func_0x000107c614f0(uVar1);
      lVar6 = 0x112f67000;
      func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
      uVar9 = 0x40;
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined8 *)(lVar6 + 0x20) = uVar8;
      *(undefined8 *)(lVar6 + 0x28) = uVar7;
      *(long *)(lVar6 + 0x30) = (long)param_1;
      *(undefined1 *)(lVar6 + 0x38) = param_5;
      uVar7 = *(undefined8 *)(lVar11 + _DAT_11306fd40);
      func_0x000107c4b1dc(uVar7);
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c5faec();
      func_0x000107c61170(uVar7);
      (**(code **)(lVar2 + 8))(lVar6,uVar8,uVar9,uVar5,lVar2);
      func_0x000107c615e8(uVar1);
      func_0x000107c61574(lVar6);
    }
    func_0x000107c6142c(uVar9);
    func_0x000107c61170(lVar10);
  }
  return;
}



/* Entry: 103425c2c; end: 103425ce3;  */

void FUN_103425c2c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103425ce4; end: 103425d8f;  */

undefined8 FUN_103425ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10342677c(param_1,param_2,param_3);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 103425d90; end: 1034261a3;  */

/* WARNING: Possible PIC construction at 0x000103425f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342610c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103425f98) */
/* WARNING: Removing unreachable block (ram,0x000103425fa4) */
/* WARNING: Removing unreachable block (ram,0x000103426110) */
/* WARNING: Removing unreachable block (ram,0x00010342611c) */
/* WARNING: Removing unreachable block (ram,0x000103426138) */
/* WARNING: Removing unreachable block (ram,0x000103426130) */

void FUN_103425d90(double param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  
  puVar3 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  puVar4 = PTR_PTR_1126c8c00;
  func_0x000107c610f8(PTR_PTR_1126c8c00);
  func_0x000107c453e4();
  func_0x000107c4ca50();
  func_0x000107c61170(puVar4);
  func_0x000107c51b38(puVar3);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103426144);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10342614c);
      (*pcVar2)();
    }
    uVar11 = param_2;
    func_0x000107c40ec8();
    func_0x000107c61180();
    func_0x000100c70ba8();
    uVar12 = uVar11;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar11);
    if (uVar12 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar11 = uVar12;
      }
      func_0x000107c60480();
    }
    lVar10 = (long)param_1;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar1 = *(long *)(unaff_x20 + 0x18);
    if (uVar11 == 0) {
      func_0x000107c6142c(uVar12);
      func_0x000107c4b7ac();
      func_0x000107c61180();
      uVar11 = param_2;
      func_0x000107c5fc54();
      func_0x000107c61170(param_2);
      if (uVar11 >> 0x3e == 0) {
        uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar12 = uVar11;
        }
        func_0x000107c60480();
      }
      if (uVar12 != 0) {
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar11 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103426140);
            (*pcVar2)();
          }
          uVar5 = *(undefined8 *)(uVar11 + 0x20);
          func_0x000107c61174(uVar5);
        }
        else {
          uVar5 = 0;
          func_0x000100ff3f88(0,uVar11);
        }
        func_0x000107c614f0(uVar6);
        lVar7 = 0x112f67000;
        func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
        uVar11 = 0x60;
        func_0x000107c613fc();
        *(undefined8 *)(lVar7 + 0x18) = 4;
        *(undefined8 *)(lVar7 + 0x10) = 2;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x30) = 0;
        *(long *)(lVar7 + 0x20) = lVar10;
        *(undefined1 *)(lVar7 + 0x38) = 7;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(long *)(lVar7 + 0x40) = lVar10;
        *(undefined1 *)(lVar7 + 0x58) = 8;
        uVar8 = uVar5;
        func_0x000107c4b1dc(uVar5);
        func_0x000107c61180();
        uVar9 = uVar8;
        func_0x000107c5faec();
        func_0x000107c61170(uVar8);
        (**(code **)(lVar1 + 8))(lVar7,uVar9,uVar11,uVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61574(lVar7);
      }
    }
    else {
      if ((uVar12 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103426138);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(uVar12 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = 0;
        func_0x000100ff3f88(0,uVar12);
      }
      func_0x000107c614f0(uVar6);
      lVar7 = 0x112f67000;
      func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
      uVar11 = 0x40;
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(long *)(lVar7 + 0x20) = lVar10;
      *(undefined1 *)(lVar7 + 0x38) = 6;
      uVar8 = uVar5;
      func_0x000107c4b1dc(uVar5);
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      (**(code **)(lVar1 + 8))(lVar7,uVar9,uVar11,uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(lVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar11);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103426148);
  (*pcVar2)();
}



/* Entry: 1034261a4; end: 10342634f;  */

/* WARNING: Possible PIC construction at 0x00010342624c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034262c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103426250) */
/* WARNING: Removing unreachable block (ram,0x0001034262c4) */

void FUN_1034261a4(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar2 = &UNK_1106538e0;
  func_0x000107c613fc(&UNK_1106538e0,0x20,7);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61614(puVar2 + 0x10,uVar1);
  pcVar3 = FUN_1034268d8;
  puVar5 = puVar2;
  (**(code **)(*param_1 + 0x60))(FUN_1034268d8);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 103426350; end: 1034265cb;  */

void FUN_103426350(ulong *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dStack_d0;
  undefined1 auStack_88 [24];
  
  uVar3 = *param_1;
  uVar15 = uVar3;
  func_0x000107c42454();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x000100c70ba8(0);
  uVar5 = uVar15;
  func_0x000107c5fc54(uVar15,uVar4);
  func_0x000107c61170(uVar15);
  if (uVar5 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar15 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar15 != 0) {
    uVar14 = 0;
    dVar17 = 4.94065645841247e-324;
    dStack_d0 = 4.94065645841247e-324;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10342657c);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar6);
        dVar16 = dVar17;
      }
      else {
        uVar6 = uVar14;
        func_0x000100ff3f88(uVar14,uVar5);
        dVar16 = dVar17;
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426578);
        (*pcVar2)();
      }
      puVar7 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c5ca64(uVar3);
      func_0x000107c51b38(puVar7);
      if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426580);
        (*pcVar2)();
      }
      if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426584);
        (*pcVar2)();
      }
      dVar17 = 9.223372036854776e+18;
      if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426588);
        (*pcVar2)();
      }
      func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
      lVar8 = param_2 + 0x10;
      func_0x000107c61618();
      if (lVar8 != 0) {
        lVar13 = *(long *)(param_2 + 0x18);
        lVar9 = lVar8;
        func_0x000107c614f0();
        lVar10 = 0x112f67000;
        func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
        uVar4 = 0x40;
        func_0x000107c613fc();
        *(undefined8 *)(lVar10 + 0x18) = 2;
        *(undefined8 *)(lVar10 + 0x10) = 1;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(long *)(lVar10 + 0x20) = (long)dVar16;
        *(undefined1 *)(lVar10 + 0x38) = 6;
        uVar11 = uVar6;
        dVar17 = dStack_d0;
        func_0x000107c4b1dc(uVar6);
        func_0x000107c61180();
        uVar12 = uVar11;
        func_0x000107c5faec();
        func_0x000107c61170(uVar11);
        (**(code **)(lVar13 + 8))(lVar10,uVar12,uVar4,lVar9);
        func_0x000107c615e8(lVar8);
        func_0x000107c61574(lVar10);
        func_0x000107c6142c(uVar4);
      }
      func_0x000107c61170(uVar6);
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar15);
  }
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 1034265cc; end: 10342674f;  */

void FUN_1034265cc(double param_1,undefined8 *param_2,long param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  uVar8 = *param_2;
  puVar2 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c5ca64(uVar8);
  func_0x000107c51b38(puVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103426748);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
      lVar3 = param_3 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar9 = *(long *)(param_3 + 0x18);
        lVar4 = lVar3;
        func_0x000107c614f0();
        lVar5 = 0x112f67000;
        func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
        uVar7 = 0x40;
        func_0x000107c613fc();
        *(undefined8 *)(lVar5 + 0x18) = 2;
        *(undefined8 *)(lVar5 + 0x10) = 1;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(long *)(lVar5 + 0x20) = (long)param_1;
        *(undefined1 *)(lVar5 + 0x38) = param_4;
        func_0x000107c42440(uVar8);
        func_0x000107c61180();
        uVar6 = uVar8;
        func_0x000107c5faec();
        func_0x000107c61170(uVar8);
        (**(code **)(lVar9 + 8))(lVar5,uVar6,uVar7,lVar4,lVar9);
        func_0x000107c615e8(lVar3);
        func_0x000107c61574(lVar5);
        func_0x000107c6142c(uVar7);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103426750);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342674c);
  (*pcVar1)();
}



/* Entry: 103426750; end: 10342677b;  */

void FUN_103426750(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10342677c; end: 1034268b7;  */

void FUN_10342677c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  FUN_103425d90(param_3);
  func_0x0001000285a8(0x112d59e78,&UNK_10d920c20);
  uVar1 = param_3;
  func_0x000107c5e3e4(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112f67a48,&UNK_10dbc33e0);
  uVar1 = param_3;
  func_0x000107c41c60(param_3);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000b637c();
  func_0x000107c61170(uVar1);
  func_0x000107c41c24(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x0001000b637c();
  func_0x000107c61170(param_3);
  FUN_1034261a4(uVar2,uVar3,uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1034268b8; end: 1034268d7;  */

void FUN_1034268b8(void)

{
  func_0x000107c61168(&PTR_PTR_112f679e0);
  return;
}



/* Entry: 1034268d8; end: 1034268df;  */

void FUN_1034268d8(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dStack_d0;
  undefined1 auStack_88 [24];
  
  uVar3 = *param_1;
  uVar15 = uVar3;
  func_0x000107c42454();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x000100c70ba8(0);
  uVar5 = uVar15;
  func_0x000107c5fc54(uVar15,uVar4);
  func_0x000107c61170(uVar15);
  if (uVar5 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar15 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar15 != 0) {
    uVar14 = 0;
    dVar17 = 4.94065645841247e-324;
    dStack_d0 = 4.94065645841247e-324;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10342657c);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar6);
        dVar16 = dVar17;
      }
      else {
        uVar6 = uVar14;
        func_0x000100ff3f88(uVar14,uVar5);
        dVar16 = dVar17;
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426578);
        (*pcVar2)();
      }
      puVar7 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c5ca64(uVar3);
      func_0x000107c51b38(puVar7);
      if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426580);
        (*pcVar2)();
      }
      if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426584);
        (*pcVar2)();
      }
      dVar17 = 9.223372036854776e+18;
      if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103426588);
        (*pcVar2)();
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
      lVar8 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar8 != 0) {
        lVar13 = *(long *)(unaff_x20 + 0x18);
        lVar9 = lVar8;
        func_0x000107c614f0();
        lVar10 = 0x112f67000;
        func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
        uVar4 = 0x40;
        func_0x000107c613fc();
        *(undefined8 *)(lVar10 + 0x18) = 2;
        *(undefined8 *)(lVar10 + 0x10) = 1;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(long *)(lVar10 + 0x20) = (long)dVar16;
        *(undefined1 *)(lVar10 + 0x38) = 6;
        uVar11 = uVar6;
        dVar17 = dStack_d0;
        func_0x000107c4b1dc(uVar6);
        func_0x000107c61180();
        uVar12 = uVar11;
        func_0x000107c5faec();
        func_0x000107c61170(uVar11);
        (**(code **)(lVar13 + 8))(lVar10,uVar12,uVar4,lVar9);
        func_0x000107c615e8(lVar8);
        func_0x000107c61574(lVar10);
        func_0x000107c6142c(uVar4);
      }
      func_0x000107c61170(uVar6);
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar15);
  }
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 1034268e0; end: 103426917;  */

void FUN_1034268e0(void)

{
  FUN_1034265cc();
  return;
}



/* Entry: 103426918; end: 1034269c3;  */

undefined8 FUN_103426918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103426c6c(param_1,param_2,param_3);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 1034269c4; end: 103426c3f;  */

void FUN_1034269c4(double param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_88 [24];
  
  lVar11 = *param_2;
  func_0x000107c5ca64(lVar11);
  func_0x000107c3dfe8();
  func_0x000107c61180();
  lVar5 = lVar11;
  func_0x000107c5fe10();
  func_0x000107c61170(lVar11);
  puVar12 = (ulong *)(lVar5 + 0x38);
  uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar9 < 0x40) {
    uVar10 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *puVar12;
  func_0x000107c61434(lVar5);
  lVar11 = 0;
  lVar7 = lVar11;
  while( true ) {
    while (uVar10 == 0) {
      bVar4 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c34);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar11) {
        func_0x00010109bac0(lVar5,puVar12,~uVar9,lVar7,0);
        func_0x000107c6142c(lVar5);
        return;
      }
      uVar10 = puVar12[lVar11];
    }
    uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar1 = *(undefined8 *)
             (*(long *)(lVar5 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
              lVar11 * 0x400 + 8);
    puVar6 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c61434(uVar1);
    dVar14 = param_1;
    func_0x000107c51b38(puVar6);
    if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c38);
      (*pcVar3)();
    }
    if (dVar14 <= -9.223372036854778e+18) break;
    if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c40);
      (*pcVar3)();
    }
    func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
    lVar7 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar13 = *(long *)(param_3 + 0x18);
      func_0x000107c614f0();
      lVar8 = 0x112f67000;
      func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar8 + 0x18) = 2;
      *(undefined8 *)(lVar8 + 0x10) = 1;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(long *)(lVar8 + 0x20) = (long)dVar14;
      *(undefined1 *)(lVar8 + 0x38) = 9;
      (**(code **)(lVar13 + 8))();
      func_0x000107c615e8(lVar7);
      func_0x000107c61574(lVar8);
    }
    uVar10 = uVar10 - 1 & uVar10;
    func_0x000107c6142c(uVar1);
    lVar7 = lVar11;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c3c);
  (*pcVar3)();
}



/* Entry: 103426c40; end: 103426c6b;  */

void FUN_103426c40(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103426c6c; end: 103426d4b;  */

void FUN_103426c6c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar2 = &UNK_110653908;
  func_0x000107c613fc(&UNK_110653908,0x20,7);
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61614(puVar2 + 0x10,param_1);
  pcVar5 = *(code **)(*param_3 + 0x60);
  func_0x000107c615f0(param_1);
  pcVar3 = FUN_103426d6c;
  puVar4 = puVar2;
  (*pcVar5)(FUN_103426d6c);
  func_0x000107c61574(puVar2);
  pcVar5 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20),pcVar5,puVar4);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 103426d4c; end: 103426d6b;  */

void FUN_103426d4c(void)

{
  func_0x000107c61168(&PTR_PTR_112f67a90);
  return;
}



/* Entry: 103426d6c; end: 103426d73;  */

void FUN_103426d6c(double param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  ulong *puVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_88 [24];
  
  lVar11 = *param_2;
  func_0x000107c5ca64(lVar11);
  func_0x000107c3dfe8();
  func_0x000107c61180();
  lVar5 = lVar11;
  func_0x000107c5fe10();
  func_0x000107c61170(lVar11);
  puVar12 = (ulong *)(lVar5 + 0x38);
  uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uVar9 < 0x40) {
    uVar10 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *puVar12;
  func_0x000107c61434(lVar5);
  lVar11 = 0;
  lVar7 = lVar11;
  while( true ) {
    while (uVar10 == 0) {
      bVar4 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c34);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar11) {
        func_0x00010109bac0(lVar5,puVar12,~uVar9,lVar7,0);
        func_0x000107c6142c(lVar5);
        return;
      }
      uVar10 = puVar12[lVar11];
    }
    uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar1 = *(undefined8 *)
             (*(long *)(lVar5 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
              lVar11 * 0x400 + 8);
    puVar6 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c61434(uVar1);
    dVar14 = param_1;
    func_0x000107c51b38(puVar6);
    if (0x7fefffffffffffff < (ulong)ABS(dVar14)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c38);
      (*pcVar3)();
    }
    if (dVar14 <= -9.223372036854778e+18) break;
    if (9.223372036854776e+18 <= dVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c40);
      (*pcVar3)();
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
    lVar7 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar13 = *(long *)(unaff_x20 + 0x18);
      func_0x000107c614f0();
      lVar8 = 0x112f67000;
      func_0x0001000285a8(0x112f67000,&UNK_10dbc2e20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar8 + 0x18) = 2;
      *(undefined8 *)(lVar8 + 0x10) = 1;
      *(undefined8 *)(lVar8 + 0x28) = 0;
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(long *)(lVar8 + 0x20) = (long)dVar14;
      *(undefined1 *)(lVar8 + 0x38) = 9;
      (**(code **)(lVar13 + 8))();
      func_0x000107c615e8(lVar7);
      func_0x000107c61574(lVar8);
    }
    uVar10 = uVar10 - 1 & uVar10;
    func_0x000107c6142c(uVar1);
    lVar7 = lVar11;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103426c3c);
  (*pcVar3)();
}



/* Entry: 103426d74; end: 103426ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103426d74(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103427168();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f67b00) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103426de0; end: 103426e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103426de0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f67b00) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103426e4c; end: 103426eab; -[_TtC48SCLensActivityCenterScopedFactoryServiceProvider34SCLensActivityCenterScopedServices init] */

void FUN_103426e4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensActivityCenterScopedFactoryServiceProvider.SCLensActivityCenterScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103426e78);
  (*pcVar1)();
}



/* Entry: 103426eac; end: 103426ebb; -[_TtC48SCLensActivityCenterScopedFactoryServiceProvider34SCLensActivityCenterScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103426eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f67b00));
  return;
}



/* Entry: 103426ebc; end: 103426f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103426ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110653ae8;
  func_0x000107c613fc(&UNK_110653ae8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103427200,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103426f28; end: 103426fc3;  */

void FUN_103426f28(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1106539f8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1106539f8;
  return;
}



/* Entry: 103426fc4; end: 103426ffb;  */

void FUN_103426fc4(long *param_1)

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



/* Entry: 103426ffc; end: 103427003;  */

undefined8 FUN_103426ffc(void)

{
  return 0x1b;
}



/* Entry: 103427004; end: 103427137;  */

void FUN_103427004(undefined8 *param_1)

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
  puVar1 = &UNK_110653b10;
  func_0x000107c613fc(&UNK_110653b10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1034271d8;
  func_0x00010058fa64(FUN_1034271d8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103427138; end: 103427167;  */

undefined ** FUN_103427138(void)

{
  return &PTR_DAT_113066bf8;
}



/* Entry: 103427168; end: 103427187;  */

void FUN_103427168(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9450);
  return;
}



/* Entry: 103427188; end: 1034271d7;  */

undefined1  [16] FUN_103427188(void)

{
  return ZEXT816(0x110653a48);
}



/* Entry: 1034271d8; end: 1034271ff;  */

void FUN_1034271d8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103427200; end: 103427203;  */

void FUN_103427200(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103427204; end: 103427317;  */

/* WARNING: Possible PIC construction at 0x0001034272c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034272d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034272e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034272f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034272e8) */
/* WARNING: Removing unreachable block (ram,0x0001034272d8) */
/* WARNING: Removing unreachable block (ram,0x0001034272c8) */
/* WARNING: Removing unreachable block (ram,0x0001034272f8) */

void FUN_103427204(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110653b98;
  func_0x000107c613fc(&UNK_110653b98,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112f67b70;
  func_0x0001000285a8(0x112f67b70,&UNK_10dbc36a8);
  func_0x000107c613fc();
  uVar3 = 0x103427708;
  func_0x0001000841fc(0x103427708,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbc3670,0x30,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103427318; end: 10342733b;  */

/* WARNING: Possible PIC construction at 0x0001034272c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034272d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034272e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034272f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034272e8) */
/* WARNING: Removing unreachable block (ram,0x0001034272d8) */
/* WARNING: Removing unreachable block (ram,0x0001034272c8) */
/* WARNING: Removing unreachable block (ram,0x0001034272f8) */

void FUN_103427318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_110653b98;
  func_0x000107c613fc(&UNK_110653b98,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112f67b70;
  func_0x0001000285a8(0x112f67b70,&UNK_10dbc36a8);
  func_0x000107c613fc();
  uVar9 = 0x103427708;
  func_0x0001000841fc(0x103427708,puVar7,uVar8);
  func_0x000100084214(&UNK_10dbc3670,0x30,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10342733c; end: 1034276ab;  */

void FUN_10342733c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112f67b78,&UNK_10dbc36b0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f67b80,&UNK_10dbc36c0);
  puVar2 = &UNK_110653bc0;
  func_0x000107c613fc(&UNK_110653bc0,0x58,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  *(undefined8 *)(puVar2 + 0x50) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar8 = 0x103427738;
  func_0x0001000823a8(0x103427738,puVar2);
  pcVar3 = "LensActivityCenterEntryPointWrapperServiceProvider";
  func_0x000100082720("LensActivityCenterEntryPointWrapperServiceProvider",0x32,2);
  FUN_1034286a4();
  func_0x000100082720("SCLensActivityCenterScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103426fc4;
  func_0x0001000823a8(FUN_103426fc4,0);
  func_0x000100082720("SCLensActivityCenterScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f67b88,&UNK_10dbc36b8);
  puVar2 = &UNK_110653be8;
  func_0x000107c613fc(&UNK_110653be8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_10342776c;
  func_0x0001000823a8(FUN_10342776c,puVar2);
  func_0x000100082720("SCLensActivityCenterScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f67b08,&UNK_10dbc3430);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x103427778;
  func_0x0001000823a8(0x103427778,pcVar5);
  func_0x000100082720("SCLensActivityCenterScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f67af8,&UNK_10dbc3420);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103427780;
  func_0x0001000823a8(0x103427780,uVar6);
  func_0x000100082720("SCLensActivityCenterScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110653c10;
  func_0x000107c613fc(&UNK_110653c10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x103427788;
  func_0x0001000823a8(0x103427788,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensActivityCenterScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 1034276ac; end: 10342776b;  */

void FUN_1034276ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10342776c; end: 10342778f;  */

void FUN_10342776c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103427e60(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCLensActivityCenterScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 103427790; end: 103427c2f;  */

void FUN_103427790(long *param_1,long param_2)

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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_103427db0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  FUN_103429f90(0);
  func_0x000107c613fc();
  uVar1 = uStack_68;
  FUN_10342978c(uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90,uStack_98,uStack_a0,
                uStack_a8);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar9 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  uVar10 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar1);
  FUN_1034297b0();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 103427c30; end: 103427cab;  */

void FUN_103427c30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 103427cac; end: 103427cb3;  */

undefined8 FUN_103427cac(void)

{
  return 0x1b;
}



/* Entry: 103427cb4; end: 103427d37;  */

void FUN_103427cb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103427df0,param_2,FUN_103427df4,param_2,FUN_103427e1c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103427d38; end: 103427d7f;  */

undefined8 FUN_103427d38(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103429d50();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 103427d80; end: 103427daf;  */

undefined ** FUN_103427d80(void)

{
  return &PTR_DAT_113066bf8;
}



/* Entry: 103427db0; end: 103427dcf;  */

void FUN_103427db0(void)

{
  func_0x000107c61168(&PTR_PTR_112f67bf8);
  return;
}



/* Entry: 103427dd0; end: 103427df3;  */

undefined1  [16] FUN_103427dd0(void)

{
  return ZEXT816(0x110653c68);
}



/* Entry: 103427df4; end: 103427e1b;  */

void FUN_103427df4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103427e1c; end: 103427e23;  */

undefined8 FUN_103427e1c(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_103429d50();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103427e24; end: 103427e5f;  */

void FUN_103427e24(undefined8 *param_1,undefined8 param_2)

{
  FUN_103427e60();
  func_0x0001000a7f38("SCLensActivityCenterScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = param_2;
  return;
}



/* Entry: 103427e60; end: 10342804b;  */

void FUN_103427e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d668;
  ppuVar4 = &PTR_DAT_113066bf8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f67c98;
  func_0x0001000285a8(0x112f67c98,&UNK_10dbc3828);
  func_0x0001000a6ee8(&UNK_110653c68,
                      "LensActivityCenterEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_1034280c0,param_1,uVar2,&UNK_110653c68,&PTR_DAT_112f67b90);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110653cb8;
  func_0x000107c613fc(&UNK_110653cb8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110653ec8,
                      "SCLensActivityCenterScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_1034280c8,puVar3,uVar2,&UNK_110653ec8,&PTR_DAT_112f67d28);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110653ce0;
  func_0x000107c613fc(&UNK_110653ce0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110653a88,
                      "SCLensActivityCenterScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_1034281b0,puVar3,uVar2,&UNK_110653a88,&PTR_DAT_112f67b10);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f67ca0;
  func_0x0001000285a8(0x112f67ca0,&UNK_10dbc3830);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 10342804c; end: 1034280bf;  */

void FUN_10342804c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1034281ec;
  func_0x0001000823a8(0x1034281ec,param_3);
  func_0x000100082720("LensActivityCenterEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1034280c0; end: 1034280c7;  */

void FUN_1034280c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1034281ec;
  func_0x0001000823a8();
  func_0x000100082720("LensActivityCenterEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 1034280c8; end: 103428107;  */

void FUN_1034280c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103428788(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SCLensActivityCenterScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 103428108; end: 1034281af;  */

void FUN_103428108(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110653d08;
  func_0x000107c613fc(&UNK_110653d08,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1034281e4;
  func_0x0001000823a8(FUN_1034281e4,puVar1);
  func_0x000100082720("SCLensActivityCenterScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1034281b0; end: 1034281b7;  */

void FUN_1034281b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110653d08;
  func_0x000107c613fc(&UNK_110653d08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1034281e4;
  func_0x0001000823a8(FUN_1034281e4,puVar3);
  func_0x000100082720("SCLensActivityCenterScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1034281b8; end: 1034281e3;  */

void FUN_1034281b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1034281e4; end: 1034281f3;  */

void FUN_1034281e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110653b10;
  func_0x000107c613fc(&UNK_110653b10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1034271d8;
  func_0x00010058fa64(FUN_1034271d8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1034281f4; end: 10342827b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1034281f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1034285b4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f67ca8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f67cb0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10342827c);
  (*pcVar1)();
}



/* Entry: 10342827c; end: 1034282db; -[_TtC36SCLensActivityCenterScopeGraphBridge51SCLensActivityCenterScopeGraphBridgeSaberEntryPoint init] */

void FUN_10342827c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensActivityCenterScopeGraphBridge.SCLensActivityCenterScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034282a8);
  (*pcVar1)();
}



/* Entry: 1034282dc; end: 103428313; -[_TtC36SCLensActivityCenterScopeGraphBridge51SCLensActivityCenterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001034282f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034282fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034282dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f67ca8));
  return;
}



/* Entry: 103428314; end: 10342833b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428314(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f67cb0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f67ca8));
  return;
}



/* Entry: 10342833c; end: 10342835b;  */

void FUN_10342833c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d9510);
  return;
}



/* Entry: 10342835c; end: 1034283e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10342835c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f67ce0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f67ce8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034283e4);
  (*pcVar2)();
}



/* Entry: 1034283e4; end: 1034284cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1034283e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f67ce0);
  *(undefined **)(unaff_x20 + _DAT_112f67ce0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f67ce8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f67ce8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110653e28;
  func_0x000107c613fc(&UNK_110653e28,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1034284d0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1034284cc; end: 1034284d7;  */

void FUN_1034284cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1034284d8; end: 103428537; -[_TtC36SCLensActivityCenterScopeGraphBridge49SCLensActivityCenterScopedServicesSaberEntryPoint init] */

void FUN_1034284d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensActivityCenterScopeGraphBridge.SCLensActivityCenterScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103428504);
  (*pcVar1)();
}



/* Entry: 103428538; end: 10342856f; -[_TtC36SCLensActivityCenterScopeGraphBridge49SCLensActivityCenterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103428538(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f67ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f67ce0));
  return;
}



/* Entry: 103428570; end: 103428573;  */

void FUN_103428570(void)

{
  return;
}



/* Entry: 103428574; end: 103428593;  */

void FUN_103428574(void)

{
  FUN_1034283e4();
  return;
}



/* Entry: 103428594; end: 1034285b3;  */

void FUN_103428594(void)

{
  func_0x000107c61168(&PTR_PTR_1128d95d8);
  return;
}



/* Entry: 1034285b4; end: 103428683;  */

undefined8 FUN_1034285b4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112f67d18,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_103428684();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103428684; end: 1034286a3;  */

void FUN_103428684(void)

{
  func_0x000107c61168(&PTR_PTR_1128d96a0);
  return;
}



/* Entry: 1034286a4; end: 10342870f;  */

void FUN_1034286a4(void)

{
  func_0x0001000285a8(0x112f67d20,&UNK_10dbc3908);
  func_0x0001000823a8(0x1034286e4,0);
  return;
}



/* Entry: 103428710; end: 10342874b; -[_TtC36SCLensActivityCenterScopeGraphBridge44SCLensActivityCenterScopeGraphBridgeServices init] */

void FUN_103428710(undefined8 param_1)

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



/* Entry: 10342874c; end: 10342877f;  */

void FUN_10342874c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103428780; end: 103428787;  */

undefined8 FUN_103428780(void)

{
  return 0x1b;
}



/* Entry: 103428788; end: 1034288ff;  */

void FUN_103428788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110653e70;
  func_0x000107c613fc(&UNK_110653e70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103428900,puVar1);
  return;
}



/* Entry: 103428900; end: 103428907;  */

void FUN_103428900(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112f67d18,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f67d18,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110653f08;
  func_0x000107c613fc(&UNK_110653f08,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1034289b4;
  func_0x00010058fa64(0x1034289b4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



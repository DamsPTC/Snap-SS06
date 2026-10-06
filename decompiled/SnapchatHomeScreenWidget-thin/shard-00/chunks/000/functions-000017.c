/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10007d8d4; end: 10007d8d7;  */

void FUN_10007d8d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c8088 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c8070;
  func_0x000100010120(0x1000c8070,&UNK_10008e820);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c8088 = puVar2;
  return;
}



/* Entry: 10007d8d8; end: 10007d927;  */

void FUN_10007d8d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c8088 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c8070;
  func_0x000100010120(0x1000c8070,&UNK_10008e820);
  puVar2 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0;
  _swift_getWitnessTable(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_1000b08b0,uVar1);
  puRam00000001000c8088 = puVar2;
  return;
}



/* Entry: 10007d928; end: 10007d92f;  */

void FUN_10007d928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008600c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_1000b1520)();
  return;
}



/* Entry: 10007d930; end: 10007d9b7;  */

void FUN_10007d930(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_1000b1108 + 0x40;
  puStack_40 = &UNK_10008e858;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  puStack_30 = puStack_38;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,4,&puStack_40,param_1 + 0x20);
  }
  return;
}



/* Entry: 10007d9b8; end: 10007da8b;  */

long * FUN_10007d9b8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(lVar6 + -8);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && (*(uint *)(lVar2 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar3 - 0x21 | uVar3) - *(long *)(lVar2 + 0x40)) {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    puVar4 = (undefined8 *)((long)param_1 + 0x17U & 0xffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + 0x17U & 0xffffffffffffff8);
    *puVar4 = *puVar5;
    puVar4[1] = puVar5[1];
    pcVar7 = *(code **)(lVar2 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar7)(puVar4 + 2,puVar5 + 2,lVar6);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar3 & 0xf8 ^ 0x1f8) & uVar3 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10007da8c; end: 10007dadf;  */

void FUN_10007da8c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010007dadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))
            ((param_1 + 0x17U & 0xfffffffffffffff8) + uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 10007dae0; end: 10007db6f;  */

undefined8 * FUN_10007dae0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  puVar2 = (undefined8 *)((long)param_1 + 0x17U & 0xffffffffffffff8);
  puVar3 = (undefined8 *)((long)param_2 + 0x17U & 0xffffffffffffff8);
  *puVar2 = *puVar3;
  puVar2 = puVar2 + 1;
  puVar3 = puVar3 + 1;
  *puVar2 = *puVar3;
  lVar5 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(byte *)(lVar4 + 0x50);
  pcVar7 = *(code **)(lVar4 + 0x10);
  _swift_bridgeObjectRetain();
  (*pcVar7)(uVar6 + 8 + (long)puVar2 & (uVar6 ^ 0xffffffffffffffff),
            uVar6 + 8 + (long)puVar3 & (uVar6 ^ 0xffffffffffffffff),lVar5);
  return param_1;
}



/* Entry: 10007db70; end: 10007dc0f;  */

undefined8 * FUN_10007db70(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + 0x17U & 0xffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0x17U & 0xffffffffffffff8);
  *puVar1 = *puVar2;
  puVar1 = puVar1 + 1;
  puVar2 = puVar2 + 1;
  *puVar1 = *puVar2;
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  (**(code **)(lVar3 + 0x18))
            (uVar4 + 8 + (long)puVar1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 8 + (long)puVar2 & (uVar4 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10007dc10; end: 10007dc87;  */

undefined8 * FUN_10007dc10(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + 0x17U & 0xffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0x17U & 0xffffffffffffff8);
  *puVar1 = *puVar2;
  puVar1 = puVar1 + 1;
  puVar2 = puVar2 + 1;
  *puVar1 = *puVar2;
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  (**(code **)(lVar3 + 0x20))
            (uVar4 + 8 + (long)puVar1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 8 + (long)puVar2 & (uVar4 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10007dc88; end: 10007dd17;  */

undefined8 * FUN_10007dc88(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  puVar3 = (undefined8 *)((long)param_1 + 0x17U & 0xffffffffffffff8);
  puVar4 = (undefined8 *)((long)param_2 + 0x17U & 0xffffffffffffff8);
  *puVar3 = *puVar4;
  puVar3 = puVar3 + 1;
  puVar4 = puVar4 + 1;
  *puVar3 = *puVar4;
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  (**(code **)(lVar5 + 0x28))
            (uVar6 + 8 + (long)puVar3 & (uVar6 ^ 0xffffffffffffffff),
             uVar6 + 8 + (long)puVar4 & (uVar6 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10007dd18; end: 10007de6b;  */

ulong FUN_10007dd18(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar1 = 0x7ffffffe;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10007ddc0;
  uVar5 = (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_10007ddc0;
      goto LAB_10007dd80;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_10007dd80:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_10007ddc0:
  if (uVar2 < 0x7fffffff) {
    uVar7 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    uVar1 = 0;
    if (1 < (uint)uVar7 + 1) {
      uVar1 = (uint)uVar7;
    }
    return (ulong)uVar1;
  }
  uVar7 = ((long)param_1 + 0x17U & 0xfffffffffffffff8) + uVar7 + 0x10 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010007de18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Entry: 10007de6c; end: 10007e083;  */

void FUN_10007de6c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar1 = (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)lVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar6 = 0;
  }
  else if (uVar9 < 4) {
    uVar4 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar6 = 2;
    if (0xfffe < uVar4) {
      bVar6 = 4;
    }
    if (uVar4 < 0xff) {
      bVar6 = uVar4 != 0;
    }
  }
  else {
    bVar6 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010007e00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))
                  (((long)param_1 + 0x17U & 0xfffffffffffffff8) + uVar8 + 0x10 & ~uVar8);
        return;
      }
      if (param_2 < 0x7fffffff) {
        *(ulong *)(param_1 + 2) = (ulong)param_2;
      }
      else {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = param_2 + 0x80000001;
      }
    }
  }
  return;
}



/* Entry: 10007e084; end: 10007e08f;  */

void FUN_10007e084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  _swift_getGenericMetadata(param_1,&uStack_28,&DAT_100091598);
  return;
}



/* Entry: 10007e090; end: 10007e0c3;  */

void FUN_10007e090(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance(&uStack_20,&UNK_1000915d4,1);
  return;
}



/* Entry: 10007e0c4; end: 10007e24b;  */

void FUN_10007e0c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  __s7SwiftUI19_ConditionalContentV7StorageOMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar2,param_2,param_3);
  _swift_storeEnumTagMultiPayload(puVar2,lVar1,0);
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (param_1,puVar2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10007e24c; end: 10007e63f;  */

void FUN_10007e24c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  code *pcVar15;
  long unaff_x20;
  code *pcVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *apuStack_190 [3];
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [56];
  
  lVar3 = 0;
  uStack_148 = param_1;
  __s7SwiftUI16RoundedRectangleVMa();
  lStack_150 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)((long)apuStack_190 + lVar3);
  puVar4 = (undefined *)0x1000c8110;
  func_0x000100010120(0x1000c8110,&UNK_10008e8d0);
  uVar7 = 0x1000c47a0;
  apuStack_190[0] = puVar4;
  func_0x000100010120(0x1000c47a0,&UNK_10008a4f0);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar7,uVar19);
  uVar7 = uVar5;
  apuStack_190[1] = (undefined *)uVar5;
  FUN_10002d8ac();
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  puVar6 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_b8 = uVar7;
  uStack_b0 = uVar18;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar5,
             &uStack_b8);
  uVar7 = 0xff;
  apuStack_190[2] = puVar6;
  __s7SwiftUI16_OverlayModifierVMa(0xff,uVar5,puVar6);
  lVar8 = 0;
  uStack_170 = uVar7;
  __s7SwiftUI15ModifiedContentVMa(0,puVar4,uVar7);
  lStack_158 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(lStack_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)puVar17 - extraout_x8_00;
  uVar7 = 0x1000c4738;
  func_0x000100010120(0x1000c4738,&UNK_1000894f0);
  lVar9 = 0;
  lVar12 = lVar8;
  __s7SwiftUI15ModifiedContentVMa(0,lVar8,uVar7);
  lStack_160 = *(long *)(lVar9 + -8);
  lVar10 = lVar9;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_160 + 0x40));
  lVar14 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_178 = lVar14;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lStack_168 = lVar14 - extraout_x12;
  __s7SwiftUI5ColorV5clearACvgZ();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar14 = lVar10;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar13 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_a8,uVar5,0,uVar5,0,lVar14,lVar12);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar7 = uVar5;
  uStack_110 = uVar19;
  uStack_108 = uVar18;
  FUN_10007e9c0();
  __s7SwiftUI4ViewPAAE7overlay9alignment7contentQrAA9AlignmentV_qd__yXEtAaBRd__lF
            (lVar20,uVar5,uVar13,0x10007e9b4,auStack_120,apuStack_190[0],apuStack_190[1],uVar7,
             apuStack_190[2]);
  _swift_release(lVar10);
  lVar10 = lStack_150;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  iVar2 = *(int *)(lStack_150 + 0x14);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_1000b0538;
  lVar14 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar14 + -8) + 0x68))((long)puVar17 + (long)iVar2,uVar1,lVar14);
  *puVar17 = uVar5;
  *(undefined8 *)((long)apuStack_190 + lVar3 + 8) = uVar5;
  puVar6 = PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480;
  _swift_getWitnessTable(PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480,uStack_170);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  puVar11 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_130 = uVar7;
  puStack_128 = puVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,lVar8,
             &uStack_130);
  puVar6 = puVar11;
  func_0x00010007ea30();
  lVar3 = lStack_178;
  __s7SwiftUI4ViewPAAE9clipShape_5styleQrqd___AA9FillStyleVtAA0E0Rd__lF
            (lStack_178,puVar17,0x100,lVar8,lVar10,puVar11,puVar6);
  FUN_10007ea74(puVar17);
  (**(code **)(lStack_158 + 8))(lVar20,lVar8);
  FUN_10007eab0();
  puStack_140 = puVar11;
  lStack_138 = lVar20;
  _swift_getWitnessTable(puVar4,lVar9,&puStack_140);
  lVar14 = lStack_160;
  lVar10 = lStack_168;
  pcVar15 = *(code **)(lStack_160 + 0x10);
  (*pcVar15)(lStack_168,lVar3,lVar9);
  pcVar16 = *(code **)(lVar14 + 8);
  (*pcVar16)(lVar3,lVar9);
  (*pcVar15)(uStack_148,lVar10,lVar9);
  (*pcVar16)(lVar10,lVar9);
  return;
}



/* Entry: 10007e640; end: 10007e8e3;  */

void FUN_10007e640(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long alStack_88 [2];
  undefined2 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_90 = param_1;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar12 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar8 = lVar12 - extraout_x12;
  uVar2 = 0x1000c47a0;
  func_0x000100010120(0x1000c47a0,&UNK_10008a4f0);
  lVar3 = 0;
  uStack_a8 = uVar2;
  __s7SwiftUI19_ConditionalContentVMa(0,uVar2,param_3);
  lStack_a0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_a0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar8 - extraout_x8_01;
  lVar4 = 0;
  uStack_98 = param_4;
  FUN_10007e084(0,param_3,param_4);
  lVar5 = lVar4;
  FUN_10007e8e4();
  lVar6 = lStack_b0;
  if (lVar5 == 0) {
    pcVar9 = *(code **)(lStack_b0 + 0x10);
    (*pcVar9)(lVar8,param_2 + *(int *)(lVar4 + 0x2c),param_3);
    lVar5 = lVar12;
    (*pcVar9)(lVar12,lVar8,param_3);
    FUN_10002d8ac();
    uVar2 = uStack_98;
    func_0x00010007e188(lVar10,lVar12,uStack_a8,param_3,lVar5,uStack_98);
    pcVar9 = *(code **)(lVar6 + 8);
    (*pcVar9)(lVar12,param_3);
    (*pcVar9)(lVar8,param_3);
  }
  else {
    _objc_retain();
    lVar6 = lVar5;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    (**(code **)(lVar11 + 0x68))
              (lVar7,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
               lVar1);
    lVar8 = lVar7;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,0,lVar7,lVar6);
    _swift_release(lVar6);
    (**(code **)(lVar11 + 8))(lVar7,lVar1);
    alStack_88[1] = 0;
    uStack_78 = 0x101;
    alStack_88[0] = lVar8;
    FUN_10002d8ac();
    uVar2 = uStack_98;
    FUN_10007e0c4(lVar10,alStack_88,uStack_a8,param_3,lVar7,uStack_98);
    _swift_release(lVar8);
    _objc_release();
    lVar8 = lVar5;
  }
  FUN_10002d8ac();
  lStack_70 = lVar8;
  uStack_68 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,lVar3,
             &lStack_70);
  lVar6 = lStack_a0;
  (**(code **)(lStack_a0 + 0x10))(uStack_90,lVar10,lVar3);
  (**(code **)(lVar6 + 8))(lVar10,lVar3);
  return;
}



/* Entry: 10007e8e4; end: 10007e9a3;  */

/* WARNING: Removing unreachable block (ram,0x00010007e944) */

void FUN_10007e8e4(void)

{
  long lVar1;
  long *unaff_x20;
  
  if (unaff_x20[1] != 0) {
    lVar1 = *unaff_x20;
    __s21SnapchatWidgetsShared12AppGroupDataO04fileF08filenameSo6NSDataCSgSS_tFZ();
    if (lVar1 != 0) {
      __s10Foundation4DataV34_conditionallyBridgeFromObjectiveC_6resultSbSo6NSDataC_ACSgztFZ();
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 10007e9a4; end: 10007e9bf;  */

void FUN_10007e9a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10007e9c0; end: 10007ea73;  */

void FUN_10007e9c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam00000001000c8118 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c8110;
  func_0x000100010120(0x1000c8110,&UNK_10008e8d0);
  puStack_20 = PTR___s7SwiftUI5ColorVAA4ViewAAWP_1000b07a0;
  puStack_18 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_1000b02e8;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_20);
  puRam00000001000c8118 = puVar2;
  return;
}



/* Entry: 10007ea74; end: 10007eaaf;  */

undefined8 FUN_10007ea74(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10007eab0; end: 10007eaff;  */

void FUN_10007eab0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c8128 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c4738;
  func_0x000100010120(0x1000c4738,&UNK_1000894f0);
  puVar2 = PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8;
  _swift_getWitnessTable(PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8,uVar1);
  puRam00000001000c8128 = puVar2;
  return;
}



/* Entry: 10007eb00; end: 10007ec27;  */

void FUN_10007eb00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar1 = 0x1000c8110;
  func_0x000100010120(0x1000c8110,&UNK_10008e8d0);
  uVar4 = 0x1000c47a0;
  func_0x000100010120(0x1000c47a0,&UNK_10008a4f0);
  uVar2 = 0xff;
  __s7SwiftUI19_ConditionalContentVMa(0xff,uVar4,uVar5);
  uVar4 = uVar2;
  FUN_10002d8ac();
  puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_40 = uVar4;
  uStack_38 = uVar6;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar2,
             &uStack_40);
  uVar4 = 0xff;
  __s7SwiftUI16_OverlayModifierVMa(0xff,uVar2,puVar3);
  uVar5 = 0xff;
  __s7SwiftUI15ModifiedContentVMa(0xff,uVar1,uVar4);
  uVar1 = 0x1000c4738;
  func_0x000100010120(0x1000c4738,&UNK_1000894f0);
  uVar6 = 0xff;
  __s7SwiftUI15ModifiedContentVMa(0xff,uVar5,uVar1);
  uVar1 = uVar6;
  FUN_10007e9c0();
  puVar7 = PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480;
  _swift_getWitnessTable(PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480,uVar4);
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  puVar8 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_50 = uVar1;
  puStack_48 = puVar7;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar5,
             &uStack_50);
  puVar7 = puVar8;
  FUN_10007eab0();
  puStack_60 = puVar8;
  puStack_58 = puVar7;
  _swift_getWitnessTable(puVar3,uVar6,&puStack_60);
  return;
}



/* Entry: 10007ec28; end: 10007ec53;  */

undefined1  [16] FUN_10007ec28(void)

{
  return ZEXT816(0x1000b7018);
}



/* Entry: 10007ec54; end: 10007ed3f;  */

void FUN_10007ec54(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xd000000000000017;
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(0xd000000000000017,0x800000010009ee20,0);
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar3 = puVar4;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar4,uVar2);
  _swift_release(uVar2);
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  *param_1 = puVar3;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  return;
}



/* Entry: 10007ed40; end: 10007ed53;  */

void FUN_10007ed40(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam00000001000c4798 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c47a0;
  func_0x000100010120(0x1000c47a0,&UNK_10008a4f0);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_1000b0820;
  puStack_18 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_1000b0548;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_20);
  puRam00000001000c4798 = puVar2;
  return;
}



/* Entry: 10007ed54; end: 10007ed83;  */

void FUN_10007ed54(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 10007ed84; end: 10007ed97;  */

bool FUN_10007ed84(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10007ed98; end: 10007ee43;  */

void FUN_10007ed98(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10007ee44; end: 10007ee9f;  */

undefined1  [16] FUN_10007ee44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  uVar4 = 0x73736572676f7270;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000011;
  }
  uVar1 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar1 = 0x800000010009ee40;
  }
  uVar2 = 0x6574617473;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe500000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10007eea0; end: 10007eec3;  */

void FUN_10007eea0(undefined1 *param_1,undefined1 param_2)

{
  FUN_10007f4d4();
  *param_1 = param_2;
  return;
}



/* Entry: 10007eec4; end: 10007eedb;  */

undefined1  [16] FUN_10007eec4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10007eedc; end: 10007ef2b;  */

void FUN_10007eedc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010007f660();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 10007ef2c; end: 10007f0b3;  */

void FUN_10007ef2c(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
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
  undefined8 uStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar3 = 0x1000c81c8;
  uStack_70 = param_5;
  func_0x0001000100d0(0x1000c81c8,&UNK_10008e9b0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x000100013de4(param_2,uVar1);
  func_0x00010007f660();
  puVar4 = &UNK_1000b7200;
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (lVar6,&UNK_1000b7200,&UNK_1000b7200,param_2,uVar1,uVar2);
  uStack_62 = 0;
  uStack_61 = param_3;
  func_0x00010007f6a0();
  __ss22KeyedEncodingContainerV6encode_6forKeyyqd___xtKSERd__lF
            (&uStack_61,&uStack_62,lVar3,&UNK_1000b7398,puVar4);
  uVar1 = uStack_70;
  if (unaff_x21 == 0) {
    uStack_63 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,&uStack_63,lVar3);
    uStack_64 = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF(param_4,uVar1,&uStack_64,lVar3)
    ;
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(lVar6,lVar3);
  }
  return;
}



/* Entry: 10007f0b4; end: 10007f1fb;  */

void FUN_10007f0b4(double param_1,undefined8 param_2,byte param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar5 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (param_3 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (param_3 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (param_3 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (param_3 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (param_3 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar4 = 0x646f63736e617274;
  if (param_3 != 0) {
    uVar5 = 0xe900000000000067;
    uVar4 = uVar1;
  }
  if (param_3 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  dVar6 = 0.0;
  if (param_1 != 0.0) {
    dVar6 = param_1;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar6);
  if (param_5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x000100085850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_1000b1150)(param_2,param_4,param_5);
  return;
}



/* Entry: 10007f1fc; end: 10007f22b;  */

void FUN_10007f1fc(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10007f6e0();
  if (unaff_x21 == 0) {
    *param_1 = param_3;
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = param_4;
    *(undefined8 *)(param_1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10007f22c; end: 10007f24b;  */

void FUN_10007f22c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10007ef2c(*(undefined8 *)(unaff_x20 + 8),param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10007f24c; end: 10007f2b3;  */

void FUN_10007f24c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_88 [72];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  FUN_10007f0b4(uVar4,auStack_88,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10007f2b4; end: 10007f2c3;  */

void FUN_10007f2b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *unaff_x20;
  double dVar9;
  double dVar10;
  
  dVar10 = *(double *)(unaff_x20 + 8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  bVar6 = *unaff_x20;
  uVar8 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar6 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar6 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar6 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar6 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar6 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar7 = 0x646f63736e617274;
  if (bVar6 != 0) {
    uVar8 = 0xe900000000000067;
    uVar7 = uVar1;
  }
  if (bVar6 < 3) {
    uVar3 = uVar8;
    uVar2 = uVar7;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  dVar9 = 0.0;
  if (dVar10 != 0.0) {
    dVar9 = dVar10;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar9);
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x000100085850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_1000b1150)(param_1,uVar4,lVar5);
  return;
}



/* Entry: 10007f2c4; end: 10007f327;  */

void FUN_10007f2c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_88 [72];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  FUN_10007f0b4(uVar4,auStack_88,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10007f328; end: 10007f353;  */

undefined8 FUN_10007f328(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_2 + 0x18);
  bVar3 = false;
  if ((*param_1 == *param_2) &&
     (bVar3 = false, !NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_2 + 8)))) {
    bVar3 = *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
  }
  if (bVar3) {
    if (lVar1 == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) {
      if ((uVar4 == *(ulong *)(param_2 + 0x10)) && (lVar1 == lVar2)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,lVar1,*(ulong *)(param_2 + 0x10),lVar2,0);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10007f354; end: 10007f37f;  */

void FUN_10007f354(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_bridgeObjectRelease(param_3);
  *param_1 = 1;
  return;
}



/* Entry: 10007f380; end: 10007f397;  */

undefined1  [16] FUN_10007f380(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10007f398; end: 10007f3e7;  */

void FUN_10007f398(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10007f880();
                    /* WARNING: Could not recover jumptable at 0x000100085c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_1000b14b8)(param_1,uVar1);
  return;
}



/* Entry: 10007f3e8; end: 10007f40b;  */

void FUN_10007f3e8(void)

{
  FUN_100012b94();
  return;
}



/* Entry: 10007f40c; end: 10007f4d3;  */

void FUN_10007f40c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar3 = 0x1000c81e0;
  func_0x0001000100d0(0x1000c81e0,&UNK_10008e9b8);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100013de4(param_1,uVar1);
  FUN_10007f880();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (&stack0xffffffffffffffb0 + -extraout_x8,&UNK_1000b7170,&UNK_1000b7170,param_1,uVar1,
             uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 10007f4d4; end: 10007f5eb;  */

undefined4 FUN_10007f4d4(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x6574617473;
  if ((param_1 == 0x6574617473 && param_2 == -0x1b00000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6574617473,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_1 == 0x73736572676f7270) && (param_2 == -0x1800000000000000)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x73736572676f7270,0xe800000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 1;
    }
    else if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffefff611c0)) {
      _swift_bridgeObjectRelease(0x800000010009ee40);
      uVar2 = 2;
    }
    else {
      uVar1 = 0xd000000000000011;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000011,0x800000010009ee40,param_1,param_2,0);
      _swift_bridgeObjectRelease(param_2);
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}



/* Entry: 10007f5ec; end: 10007f6df;  */

undefined8
FUN_10007f5ec(double param_1,double param_2,char param_3,ulong param_4,long param_5,char param_6,
             ulong param_7,long param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_3 == param_6) && (bVar1 = false, !NAN(param_1) && !NAN(param_2))) {
    bVar1 = param_1 == param_2;
  }
  if (bVar1) {
    if (param_5 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      if ((param_4 == param_7) && (param_5 == param_8)) {
        return 1;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_4,param_5,param_7,param_8,0);
      if ((param_4 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10007f6e0; end: 10007f87f;  */

/* WARNING: Removing unreachable block (ram,0x00010007f810) */

ulong FUN_10007f6e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  byte bStack_51;
  
  lVar2 = 0x1000c8248;
  func_0x0001000100d0(0x1000c8248,&UNK_10008ed10);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x000100013de4(param_1,uVar5);
  func_0x00010007f660();
  puVar4 = &UNK_1000b7200;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1000b7200,&UNK_1000b7200,lVar3,uVar5,uVar1
            );
  if (unaff_x21 == 0) {
    uStack_52 = 0;
    func_0x00010007fef0();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&bStack_51,&UNK_1000b7398,&uStack_52,lVar2,&UNK_1000b7398,puVar4);
    uVar5 = (ulong)bStack_51;
    uStack_53 = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_53,lVar2);
    uStack_54 = 2;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF(&uStack_54,lVar2);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x000100012b98(param_1);
  }
  else {
    FUN_100012b94(param_1);
  }
  return uVar5;
}



/* Entry: 10007f880; end: 10007f8bf;  */

void FUN_10007f880(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c81e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ec6c;
  _swift_getWitnessTable(&UNK_10008ec6c,&UNK_1000b7170);
  puRam00000001000c81e8 = puVar1;
  return;
}



/* Entry: 10007f8c0; end: 10007f8c3;  */

void FUN_10007f8c0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c81f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ea50;
  _swift_getWitnessTable(&UNK_10008ea50,&UNK_1000b7140);
  puRam00000001000c81f0 = puVar1;
  return;
}



/* Entry: 10007f8c4; end: 10007f903;  */

void FUN_10007f8c4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c81f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ea50;
  _swift_getWitnessTable(&UNK_10008ea50,&UNK_1000b7140);
  puRam00000001000c81f0 = puVar1;
  return;
}



/* Entry: 10007f904; end: 10007f907;  */

void FUN_10007f904(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c81f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eac8;
  _swift_getWitnessTable(&UNK_10008eac8,&UNK_1000b70c8);
  puRam00000001000c81f8 = puVar1;
  return;
}



/* Entry: 10007f908; end: 10007f947;  */

void FUN_10007f908(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c81f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eac8;
  _swift_getWitnessTable(&UNK_10008eac8,&UNK_1000b70c8);
  puRam00000001000c81f8 = puVar1;
  return;
}



/* Entry: 10007f948; end: 10007f94b;  */

void FUN_10007f948(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eaf0;
  _swift_getWitnessTable(&UNK_10008eaf0,&UNK_1000b70c8);
  puRam00000001000c8200 = puVar1;
  return;
}



/* Entry: 10007f94c; end: 10007f98b;  */

void FUN_10007f94c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eaf0;
  _swift_getWitnessTable(&UNK_10008eaf0,&UNK_1000b70c8);
  puRam00000001000c8200 = puVar1;
  return;
}



/* Entry: 10007f98c; end: 10007f98f;  */

void FUN_10007f98c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e9c0;
  _swift_getWitnessTable(&UNK_10008e9c0,&UNK_1000b7140);
  puRam00000001000c8208 = puVar1;
  return;
}



/* Entry: 10007f990; end: 10007f9cf;  */

void FUN_10007f990(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e9c0;
  _swift_getWitnessTable(&UNK_10008e9c0,&UNK_1000b7140);
  puRam00000001000c8208 = puVar1;
  return;
}



/* Entry: 10007f9d0; end: 10007f9d3;  */

void FUN_10007f9d0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e9e8;
  _swift_getWitnessTable(&UNK_10008e9e8,&UNK_1000b7140);
  puRam00000001000c8210 = puVar1;
  return;
}



/* Entry: 10007f9d4; end: 10007fa13;  */

void FUN_10007f9d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008e9e8;
  _swift_getWitnessTable(&UNK_10008e9e8,&UNK_1000b7140);
  puRam00000001000c8210 = puVar1;
  return;
}



/* Entry: 10007fa14; end: 10007fa17;  */

void FUN_10007fa14(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ea10;
  _swift_getWitnessTable(&UNK_10008ea10,&UNK_1000b7140);
  puRam00000001000c8218 = puVar1;
  return;
}



/* Entry: 10007fa18; end: 10007fa57;  */

void FUN_10007fa18(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ea10;
  _swift_getWitnessTable(&UNK_10008ea10,&UNK_1000b7140);
  puRam00000001000c8218 = puVar1;
  return;
}



/* Entry: 10007fa58; end: 10007fa67;  */

undefined1  [16] FUN_10007fa58(void)

{
  return ZEXT816(0x1000b70c8);
}



/* Entry: 10007fa68; end: 10007fa93;  */

long FUN_10007fa68(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10007fa94; end: 10007fa9b;  */

void FUN_10007fa94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10007fa9c; end: 10007fb67;  */

undefined1 * FUN_10007fa9c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10007fb68; end: 10007fd9f;  */

int FUN_10007fb68(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10007fda0; end: 10007fddf;  */

void FUN_10007fda0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8220 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ebf4;
  _swift_getWitnessTable(&UNK_10008ebf4,&UNK_1000b7200);
  puRam00000001000c8220 = puVar1;
  return;
}



/* Entry: 10007fde0; end: 10007fde3;  */

void FUN_10007fde0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ec44;
  _swift_getWitnessTable(&UNK_10008ec44,&UNK_1000b7170);
  puRam00000001000c8228 = puVar1;
  return;
}



/* Entry: 10007fde4; end: 10007fe23;  */

void FUN_10007fde4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ec44;
  _swift_getWitnessTable(&UNK_10008ec44,&UNK_1000b7170);
  puRam00000001000c8228 = puVar1;
  return;
}



/* Entry: 10007fe24; end: 10007fe27;  */

void FUN_10007fe24(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ec1c;
  _swift_getWitnessTable(&UNK_10008ec1c,&UNK_1000b7170);
  puRam00000001000c8230 = puVar1;
  return;
}



/* Entry: 10007fe28; end: 10007fe67;  */

void FUN_10007fe28(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ec1c;
  _swift_getWitnessTable(&UNK_10008ec1c,&UNK_1000b7170);
  puRam00000001000c8230 = puVar1;
  return;
}



/* Entry: 10007fe68; end: 10007fe6b;  */

void FUN_10007fe68(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eb8c;
  _swift_getWitnessTable(&UNK_10008eb8c,&UNK_1000b7200);
  puRam00000001000c8238 = puVar1;
  return;
}



/* Entry: 10007fe6c; end: 10007feab;  */

void FUN_10007fe6c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eb8c;
  _swift_getWitnessTable(&UNK_10008eb8c,&UNK_1000b7200);
  puRam00000001000c8238 = puVar1;
  return;
}



/* Entry: 10007feac; end: 10007feaf;  */

void FUN_10007feac(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eb64;
  _swift_getWitnessTable(&UNK_10008eb64,&UNK_1000b7200);
  puRam00000001000c8240 = puVar1;
  return;
}



/* Entry: 10007feb0; end: 10007ff2f;  */

void FUN_10007feb0(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008eb64;
  _swift_getWitnessTable(&UNK_10008eb64,&UNK_1000b7200);
  puRam00000001000c8240 = puVar1;
  return;
}



/* Entry: 10007ff30; end: 10007ff53;  */

undefined1  [16] FUN_10007ff30(void)

{
  return ZEXT816(0x1000b7308);
}



/* Entry: 10007ff54; end: 10007ff7f;  */

void FUN_10007ff54(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000100080418(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10007ff80; end: 10008003f;  */

void FUN_10007ff80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar4 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar4 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar5 = 0x646f63736e617274;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000067;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar2 = uVar5;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 100080040; end: 10008009b;  */

void FUN_100080040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100080678();
  __sSYsSeRzSS8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10008009c; end: 1000800e7;  */

void FUN_10008009c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100080678();
  __sSYsSERzSS8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1000800e8; end: 1000800ef;  */

void FUN_1000800e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar6 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar4 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar4 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar5 = 0x646f63736e617274;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000067;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar2 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000800f0; end: 1000802cf;  */

void FUN_1000800f0(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (param_1 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (param_1 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (param_1 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (param_1 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (param_1 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar4 = 0x646f63736e617274;
  if (param_1 != 0) {
    uVar5 = 0xe900000000000067;
    uVar4 = uVar1;
  }
  if (param_1 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000802d0; end: 1000802d7;  */

void FUN_1000802d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar6 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (bVar4 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (bVar4 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (bVar4 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (bVar4 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar5 = 0x646f63736e617274;
  if (bVar4 != 0) {
    uVar6 = 0xe900000000000067;
    uVar5 = uVar1;
  }
  if (bVar4 < 3) {
    uVar3 = uVar6;
    uVar2 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1000802d8; end: 10008047b;  */

void FUN_1000802d8(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar5 = 0xeb00000000676e69;
  uVar3 = 0x746e6573;
  if (param_2 != 4) {
    uVar3 = 0x64656c696166;
  }
  uVar1 = 0xe400000000000000;
  if (param_2 != 4) {
    uVar1 = 0xe600000000000000;
  }
  uVar2 = 0x646573756170;
  if (param_2 != 3) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe600000000000000;
  if (param_2 != 3) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6e6964616f6c7075;
  if (param_2 != 1) {
    uVar1 = 0x6e696873696e6966;
  }
  uVar4 = 0x646f63736e617274;
  if (param_2 != 0) {
    uVar5 = 0xe900000000000067;
    uVar4 = uVar1;
  }
  if (param_2 < 3) {
    uVar3 = uVar5;
    uVar2 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10008047c; end: 10008047f;  */

void FUN_10008047c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ed48;
  _swift_getWitnessTable(&UNK_10008ed48,&UNK_1000b7398);
  puRam00000001000c8290 = puVar1;
  return;
}



/* Entry: 100080480; end: 1000804bf;  */

void FUN_100080480(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c8290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ed48;
  _swift_getWitnessTable(&UNK_10008ed48,&UNK_1000b7398);
  puRam00000001000c8290 = puVar1;
  return;
}



/* Entry: 1000804c0; end: 1000804c3;  */

void FUN_1000804c0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c8298 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c82a0;
  func_0x000100010120(0x1000c82a0,&UNK_10008ee38);
  puVar2 = PTR___sSayxGSlsMc_1000b11e0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1000b11e0,uVar1);
  puRam00000001000c8298 = puVar2;
  return;
}



/* Entry: 1000804c4; end: 100080513;  */

void FUN_1000804c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c8298 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c82a0;
  func_0x000100010120(0x1000c82a0,&UNK_10008ee38);
  puVar2 = PTR___sSayxGSlsMc_1000b11e0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1000b11e0,uVar1);
  puRam00000001000c8298 = puVar2;
  return;
}



/* Entry: 100080514; end: 100080677;  */

int FUN_100080514(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100080590;
        goto LAB_100080574;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100080574:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_100080590:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100080678; end: 1000806b7;  */

void FUN_100080678(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c82a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008ed70;
  _swift_getWitnessTable(&UNK_10008ed70,&UNK_1000b7398);
  puRam00000001000c82a8 = puVar1;
  return;
}



/* Entry: 1000806b8; end: 1000806bf;  */

/* WARNING: Removing unreachable block (ram,0x000100080888) */
/* WARNING: Removing unreachable block (ram,0x0001000808a4) */

void FUN_1000806b8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000b0c78;
  if (PTR___availability_version_check_1000b0c80 != (undefined *)0x0) {
    puRam00000001000d0cb0 = PTR___availability_version_check_1000b0c80;
  }
  puVar1 = (undefined8 *)0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
  if (puVar1 != (undefined8 *)0x0) {
    uVar20 = *puVar1;
    pcVar2 = (code *)0xfffffffffffffffe;
    _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
    if (pcVar2 != (code *)0x0) {
      pcVar3 = (code *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
      pcVar4 = (code *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
      if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
        pcVar5 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
        if (pcVar5 != (code *)0x0) {
          pcVar6 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
          if (pcVar6 != (code *)0x0) {
            pcVar7 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFGetTypeID");
            if (pcVar7 != (code *)0x0) {
              pcVar8 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
              if (pcVar8 != (code *)0x0) {
                pcVar9 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                if (pcVar9 != (code *)0x0) {
                  pcVar10 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFRelease");
                  if (pcVar10 != (code *)0x0) {
                    pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                    _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                    if (pcVar11 != (char *)0x0) {
                      _fseek();
                      pcVar12 = pcVar11;
                      _ftell();
                      if (-1 < (long)pcVar12) {
                        _rewind(pcVar11);
                        pcVar13 = pcVar12;
                        _malloc();
                        if ((pcVar13 != (char *)0x0) &&
                           (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                          lVar15 = 0;
                          (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                          if (lVar15 != 0) {
                            lVar16 = 0;
                            if (pcVar3 == (code *)0x0) {
                              (*pcVar4)(0,lVar15,0,0);
                            }
                            else {
                              (*pcVar3)();
                            }
                            if (lVar16 != 0) {
                              lVar17 = 0;
                              (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                              if (lVar17 != 0) {
                                lVar18 = lVar16;
                                (*pcVar6)(lVar16,lVar17);
                                (*pcVar10)(lVar17);
                                if (lVar18 != 0) {
                                  lVar17 = lVar18;
                                  (*pcVar7)();
                                  lVar19 = lVar17;
                                  (*pcVar8)();
                                  if ((lVar17 == lVar19) &&
                                     ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100), (int)lVar18 != 0)
                                     ) {
                                    _sscanf(auStack_88,"%d.%d.%d");
                                  }
                                }
                              }
                              (*pcVar10)(lVar16);
                            }
                            (*pcVar10)(lVar15);
                          }
                        }
                      }
                      _free();
                      _fclose(pcVar11);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0ca0,0,FUN_1000806b8);
  return;
}



/* Entry: 1000806c0; end: 100080847;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1000806c0(undefined4 param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_1000b0c78;
  iVar4 = (int)param_2;
  if (lRam00000001000d0ca8 != -1) {
    func_0x000100084b54();
  }
  if (lRam00000001000d0cb0 == 0) {
    if (lRam00000001000d0ca0 != -1) goto LAB_100080818;
    bVar2 = SBORROW4(iVar4,iRam00000001000d0c90);
    iVar1 = iVar4 - iRam00000001000d0c90;
    bVar3 = iVar4 == iRam00000001000d0c90;
    if (iVar4 < iRam00000001000d0c90) goto LAB_1000807b8;
    goto LAB_100080784;
  }
  uStack_3c = iVar4 << 0x10 | ((uint)param_3 & 0xff) << 8 | param_4 & 0xff;
  uStack_40 = param_1;
  __availability_version_check(1);
  param_2 = (undefined1 *)puVar5;
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_38) {
    return;
  }
LAB_100080814:
  do {
    while( true ) {
      ___stack_chk_fail();
LAB_100080818:
      func_0x000100084b6c();
      iVar4 = (int)param_2;
      bVar2 = SBORROW4(iVar4,iRam00000001000d0c90);
      iVar1 = iVar4 - iRam00000001000d0c90;
      bVar3 = iVar4 == iRam00000001000d0c90;
      if (iRam00000001000d0c90 <= iVar4) break;
LAB_1000807b8:
      if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_38) {
        return;
      }
    }
LAB_100080784:
    if (bVar3 || iVar1 < 0 != bVar2) {
      if ((int)param_3 < iRam00000001000d0c94) goto LAB_1000807b8;
      if ((int)param_3 <= iRam00000001000d0c94) {
        if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_38) {
          return;
        }
        goto LAB_100080814;
      }
    }
    if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 100080848; end: 10008084f;  */

void FUN_100080848(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000b0c78;
  if (puRam00000001000d0cb0 == (undefined *)0x0) {
    if (PTR___availability_version_check_1000b0c80 != (undefined *)0x0) {
      puRam00000001000d0cb0 = PTR___availability_version_check_1000b0c80;
    }
    if (puRam00000001000d0cb0 == (undefined *)0x0) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0ca0,0,FUN_1000806b8);
  return;
}



/* Entry: 100080850; end: 100080b67;  */

void FUN_100080850(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000b0c78;
  if (((param_1 & 1) != 0) || (puRam00000001000d0cb0 == (undefined *)0x0)) {
    if (PTR___availability_version_check_1000b0c80 != (undefined *)0x0) {
      puRam00000001000d0cb0 = PTR___availability_version_check_1000b0c80;
    }
    if (((param_1 & 1) != 0) || (puRam00000001000d0cb0 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1000b0c78 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0ca0,0,FUN_1000806b8);
    return;
  }
  return;
}



/* Entry: 100080b68; end: 100080b7f;  */

void FUN_100080b68(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000b0cc8)(0x1000d0ca0,0,FUN_1000806b8);
  return;
}



/* Entry: 100080b80; end: 100080bf3; -[UNISCMLCLocationContext initWithUnifiedGrpcService:] */

undefined1 * FUN_100080b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000c2250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100080bf4; end: 100080cd7; -[UNISCMLCLocationContext getLocationContextWithRequest:callOptionsBuilder:handler:] */

void FUN_100080bf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1000c21d0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1000c21d8;
  _objc_opt_class(PTR_PTR_1000c21d8);
  func_0x000100086d00(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x000100086700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0001000878c0(uVar4,param_2,&PTR____CFConstantStringClassReference_1000b7540,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_4);
  return;
}



/* Entry: 100080cd8; end: 100080dbb; -[UNISCMLCLocationContext getGroupLocationContextWithRequest:callOptionsBuilder:handler:] */

void FUN_100080cd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1000c21d0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1000c21e0;
  _objc_opt_class(PTR_PTR_1000c21e0);
  func_0x000100086d00(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x000100086700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0001000878c0(uVar4,param_2,&PTR____CFConstantStringClassReference_1000b7560,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_4);
  return;
}



/* Entry: 100080dbc; end: 100080e9f; -[UNISCMLCLocationContext getFriendsIconsWithRequest:callOptionsBuilder:handler:] */

void FUN_100080dbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1000c21d0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1000c21e8;
  _objc_opt_class(PTR_PTR_1000c21e8);
  func_0x000100086d00(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x000100086700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0001000878c0(uVar4,param_2,&PTR____CFConstantStringClassReference_1000b7580,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_4);
  return;
}


